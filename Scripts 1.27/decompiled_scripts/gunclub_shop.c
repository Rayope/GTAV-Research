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
	int iLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 8;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 2;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 8;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 8;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	float fLocal_87 = 0f;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	struct<4> Local_90 = { 0, 0, 0, 0 } ;
	var uLocal_91[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	int iLocal_96 = 0;
	bool bLocal_97 = 0;
	int iLocal_98 = 0;
	bool bLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	struct<3> Local_103 = { 0, 0, 0 } ;
	float fLocal_104 = 0f;
	var uLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	bool bLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	var uLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	char* sLocal_130 = NULL;
	struct<818> Local_131 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_132 = 0;
	var uLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	var uLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	var uLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	var uLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	var uLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	var uLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	var uLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	var uLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	var uLocal_164 = 0;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	bool bLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	int iLocal_175 = 0;
	int iLocal_176 = 0;
	int iLocal_177 = 0;
	bool bLocal_178 = 0;
	bool bLocal_179 = 0;
	var uLocal_180[2] = { 0, 0 };
	int iLocal_181[2] = { 0, 0 };
	int iLocal_182 = 0;
	int iLocal_183 = 0;
	struct<3> Local_184 = { 0, 0, 0 } ;
	bool bLocal_185 = 0;
	int iLocal_186 = 0;
	int iLocal_187 = 0;
	bool bLocal_188 = 0;
	int iLocal_189 = 0;
	int iLocal_190 = 0;
	int iLocal_191 = 0;
	int iLocal_192 = 0;
	bool bLocal_193 = 0;
	int iLocal_194 = 0;
	var uLocal_195 = 0;
	int iLocal_196 = 0;
	int iLocal_197 = 0;
	char cLocal_198[64] = "";
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	bool bLocal_207 = 0;
	int iLocal_208 = 0;
	bool bLocal_209 = 0;
	int iLocal_210 = 0;
	struct<20> Local_211 = { 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_212 = 0;
	float fLocal_213 = 0f;
	bool bLocal_214 = 0;
	int iLocal_215[96] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_216 = 0;
	int iLocal_217 = 0;
	int iLocal_218 = 0;
	int iLocal_219 = 0;
	int iLocal_220 = 0;
	bool bLocal_221 = 0;
	int iLocal_222 = 0;
	bool bLocal_223 = 0;
	int iLocal_224 = 0;
	int iLocal_225 = 0;
	int iLocal_226 = 0;
	int iLocal_227 = 0;
	float fLocal_228 = 0f;
	float fLocal_229 = 0f;
	struct<3> Local_230 = { 0, 0, 0 } ;
	int iLocal_231 = 0;
	struct<5> Local_232 = { 0, 0, 0, 0, 0 } ;
	var uLocal_233 = 0;
	struct<11> Local_234 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<3> Local_235 = { 0, 0, 0 } ;
	int iLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
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
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_87 = ((0.05f + 0.275f) - 0.01f);
	iLocal_162 = MISC::GET_RANDOM_INT_IN_RANGE(8000, 16000);
	fLocal_213 = 0.001f;
	fLocal_228 = 4f;
	fLocal_229 = -98f;
	Local_230 = { 0f, 0f, 0f };
	iLocal_92 = uScriptParam_237;
	if (!MISC::IS_BIT_SET(Global_146527, 1))
	{
		if (iLocal_92 == 28)
		{
			MISC::SET_BIT(&Global_146527, 1);
		}
	}
	MISC::SET_BIT(&(Global_15F9E.f_4F3[iLocal_92]), 16);
	func_889();
	func_888(iLocal_92);
	while (!func_887())
	{
		SYSTEM::WAIT(0);
	}
	func_886();
	func_859(&Global_26CE2D);
	if (func_858(1))
	{
		iLocal_100 = 1;
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		PAD::_0x7F4724035FDCA1DD(2);
		PAD::_0x7F4724035FDCA1DD(0);
		if (func_857(iLocal_92))
		{
			if (!iLocal_212)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_131.f_C) && !PED::IS_PED_INJURED(Local_131.f_C))
				{
					ENTITY::SET_ENTITY_CAN_BE_DAMAGED(Local_131.f_C, 0);
					iLocal_212 = 1;
				}
			}
		}
		else if (iLocal_212)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_131.f_C) && !PED::IS_PED_INJURED(Local_131.f_C))
			{
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED(Local_131.f_C, 1);
				iLocal_212 = 0;
			}
		}
		func_856(&(Local_131.f_C));
		if (func_855(iLocal_92) && !func_846(&Local_131, iLocal_92))
		{
			if (func_845(&Local_131))
			{
				func_837(&Local_131, &(Local_90.f_3), 0, 0);
				func_830(&Local_131, &(Local_131.f_67));
				if (Local_131.f_9)
				{
					if (!func_829(Local_131))
					{
						func_824(&Local_131, &(Local_131.f_67), 0);
					}
					else
					{
						func_823();
					}
				}
				func_800();
				func_798();
				func_797();
				func_795();
				if (Local_131.f_7 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					PAD::DISABLE_CONTROL_ACTION(0, 44, 1);
				}
				switch (Local_131.f_B)
				{
					case 0:
						func_786();
						break;
					
					case 1:
						func_782(0);
						if (func_781(Local_131))
						{
							func_769(Local_131, 0, 0);
							func_769(Local_131, 0, 1);
						}
						func_768();
						if (Local_131.f_B == 2)
						{
							if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
							{
								uLocal_180[0] = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), MISC::GET_RANDOM_INT_IN_RANGE(4000, 5000));
								uLocal_180[1] = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 0);
							}
							else
							{
								iLocal_181[0] = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4000, 5000));
								iLocal_181[1] = MISC::GET_GAME_TIMER();
							}
							Local_184 = { 0f, 0f, 0f };
							func_758();
						}
						break;
					
					case 2:
						func_758();
						func_754(&Local_131, &(Local_131.f_67));
						break;
					
					case 3:
						if (func_781(Local_131))
						{
							func_769(Local_131, 0, 0);
							func_769(Local_131, 0, 1);
						}
						func_749();
						func_731();
						func_725();
						break;
					
					case 4:
						func_186();
						func_754(&Local_131, &(Local_131.f_67));
						break;
					
					case 5:
						Local_131.f_B = 1;
						break;
					}
			}
		}
		else
		{
			func_23(0);
		}
		if (func_16(&Local_131))
		{
			func_10();
		}
		func_1();
	}
}

void func_1()//Position - 0x33A
{
	int iVar0;
	struct<3> Var1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	if (Local_131.f_9 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uLocal_91[PLAYER::PLAYER_ID()] = Global_15F9E.f_4F3[Local_131];
		func_8(Local_131);
		if (Local_131.f_330)
		{
			if (NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), Local_131.f_331))
			{
				if (!MISC::IS_BIT_SET(Global_15F9E.f_52D, 26))
				{
					MISC::SET_BIT(&(Global_15F9E.f_52D), 26);
				}
				if ((!MISC::IS_BIT_SET(Global_15F9E.f_4F3[Local_131], 0) && !MISC::IS_BIT_SET(Global_15F9E.f_4F3[Local_131], 5)) && (!ENTITY::DOES_ENTITY_EXIST(Local_131.f_C) || PED::IS_PED_INJURED(Local_131.f_C)))
				{
					iVar0 = 0;
					while (iVar0 < 32)
					{
						if (func_7(PLAYER::INT_TO_PLAYERINDEX(iVar0), 1, 1))
						{
							if (MISC::IS_BIT_SET(uLocal_91[iVar0], 5))
							{
								MISC::CLEAR_BIT(&(Global_15F9E.f_52D), 26);
								MISC::SET_BIT(&(Global_15F9E.f_52D), 28);
								iVar0 = 33;
							}
						}
						iVar0++;
					}
				}
				else
				{
					MISC::CLEAR_BIT(&(Global_15F9E.f_52D), 26);
					MISC::SET_BIT(&(Global_15F9E.f_52D), 28);
				}
				if (Global_1801A6)
				{
					Var1 = { func_6(Local_131) };
					uVar2 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Var1, 25f, joaat("hei_prop_heist_binbag"), 0, 0, 1);
					if (ENTITY::DOES_ENTITY_EXIST(uVar2))
					{
						iVar3 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var1, func_5(Local_131));
						iVar4 = INTERIOR::GET_INTERIOR_FROM_ENTITY(uVar2);
						if (iVar3 != 0 && iVar3 == iVar4)
						{
							MISC::CLEAR_BIT(&(Global_15F9E.f_52D), 26);
							MISC::SET_BIT(&(Global_15F9E.f_52D), 28);
						}
					}
				}
				if (MISC::IS_BIT_SET(Global_15F9E.f_52D, 26))
				{
					if (!MISC::IS_BIT_SET(Global_15F9E.f_52D, 27))
					{
						func_2(Local_131, 1, 0);
						MISC::SET_BIT(&(Global_15F9E.f_52D), 27);
						if (MISC::IS_BIT_SET(Global_15F9E.f_52D, 28))
						{
							MISC::CLEAR_BIT(&(Global_15F9E.f_52D), 28);
						}
					}
				}
				else if (!MISC::IS_BIT_SET(Global_15F9E.f_52D, 28))
				{
					func_2(Local_131, 0, 0);
					MISC::SET_BIT(&(Global_15F9E.f_52D), 28);
					if (MISC::IS_BIT_SET(Global_15F9E.f_52D, 27))
					{
						MISC::CLEAR_BIT(&(Global_15F9E.f_52D), 27);
					}
				}
				Local_131.f_330 = 0;
			}
		}
		else
		{
			Local_131.f_331 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 2000);
			Local_131.f_330 = 1;
		}
	}
}

void func_2(int iParam0, bool bParam1, bool bParam2)//Position - 0x57E
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
		iVar3 = func_4(iParam0, iVar2);
		if (iVar3 != 225)
		{
			Var4 = { func_3(iVar3) };
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

struct<7> func_3(int iParam0)//Position - 0x648
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

int func_4(int iParam0, int iParam1)//Position - 0x321A
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

char* func_5(int iParam0)//Position - 0x3687
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

Vector3 func_6(int iParam0)//Position - 0x3938
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
			break;
		
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
			break;
		
		case 2:
			return -1287.082f, -1116.558f, 5.9901f;
			break;
		
		case 3:
			return 1933.119f, 3726.079f, 31.8444f;
			break;
		
		case 4:
			return 1208.333f, -470.917f, 65.208f;
			break;
		
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
			break;
		
		case 6:
			return -280.8165f, 6231.771f, 30.6955f;
			break;
		
		case 7:
			return 80.665f, -1391.669f, 28.3761f;
			break;
		
		case 8:
			return 1687.881f, 4820.55f, 41.0096f;
			break;
		
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
			break;
		
		case 10:
			return -1094.049f, 2704.171f, 18.0873f;
			break;
		
		case 11:
			return 1197.972f, 2704.22f, 37.1572f;
			break;
		
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
			break;
		
		case 13:
			return -0.2361f, 6516.045f, 30.8684f;
			break;
		
		case 14:
			return -1199.809f, -776.6886f, 16.3237f;
			break;
		
		case 15:
			return 618.1857f, 2752.567f, 41.0881f;
			break;
		
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
			break;
		
		case 17:
			return -3168.966f, 1055.287f, 19.8632f;
			break;
		
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
			break;
		
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
			break;
		
		case 20:
			return -1455.005f, -233.1862f, 48.7936f;
			break;
		
		case 21:
			return -1335.973f, -1278.555f, 3.8598f;
			break;
		
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
			break;
		
		case 23:
			return 1861.685f, 3750.08f, 32.0318f;
			break;
		
		case 24:
			return -290.1603f, 6199.095f, 30.4871f;
			break;
		
		case 25:
			return -1153.948f, -1425.019f, 3.9544f;
			break;
		
		case 26:
			return 1322.455f, -1651.125f, 51.1885f;
			break;
		
		case 27:
			return -3169.42f, 1074.727f, 19.8343f;
			break;
		
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
			break;
		
		case 29:
			return 1697.979f, 3753.2f, 33.7053f;
			break;
		
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
			break;
		
		case 31:
			return 844.1248f, -1025.571f, 27.1948f;
			break;
		
		case 32:
			return -325.8904f, 6077.026f, 30.4548f;
			break;
		
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
			break;
		
		case 34:
			return -1313.948f, -390.9637f, 35.592f;
			break;
		
		case 35:
			return -1111.238f, 2688.463f, 17.6131f;
			break;
		
		case 36:
			return -3165.231f, 1082.855f, 19.8438f;
			break;
		
		case 37:
			return 2569.612f, 302.576f, 107.7349f;
			break;
		
		case 38:
			return 811.8699f, -2149.102f, 28.6363f;
			break;
		
		case 39:
			return -1147.314f, -1992.434f, 12.1803f;
			break;
		
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
			break;
		
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
			break;
		
		case 42:
			return 113.2615f, 6624.28f, 30.7871f;
			break;
		
		case 43:
			return 1174.707f, 2644.45f, 36.7552f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_7(int iParam0, bool bParam1, bool bParam2)//Position - 0x3E09
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

void func_8(int iParam0)//Position - 0x3E4D
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 2)
	{
		iVar0 = func_9(iParam0, iVar1);
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

int func_9(int iParam0, int iParam1)//Position - 0x3E91
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

void func_10()//Position - 0x45E6
{
	func_23(1);
	func_11(&Local_131);
}

void func_11(var uParam0)//Position - 0x45F9
{
	int iVar0;
	
	func_15(&(uParam0->f_67));
	func_14(uParam0);
	func_13(&(uParam0->f_286));
	func_12(&(uParam0->f_AA));
	uParam0->f_285 = 0;
	iVar0 = 0;
	while (iVar0 < 96)
	{
		uParam0->f_DA.f_66[iVar0 /*3*/] = { 0f, 0f, 0f };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_DA.f_61)
	{
		uParam0->f_DA.f_61[iVar0] = 0;
		iVar0++;
	}
}

void func_12(var uParam0)//Position - 0x466A
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

void func_13(var uParam0)//Position - 0x46BA
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
}

void func_14(var uParam0)//Position - 0x46D5
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

void func_15(var uParam0)//Position - 0x4798
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

int func_16(var uParam0)//Position - 0x4810
{
	if (uParam0->f_9)
	{
		if (func_17(*uParam0, 10, 1))
		{
			return 1;
		}
		if (uParam0->f_1 == 1)
		{
			if (func_17(*uParam0, 19, 1))
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

int func_17(int iParam0, int iParam1, bool bParam2)//Position - 0x48C2
{
	if (bParam2)
	{
		return MISC::IS_BIT_SET(Global_15F9E.f_4F3[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_22() == 0)
		{
			return MISC::IS_BIT_SET(func_18(func_21(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return MISC::IS_BIT_SET(Global_17C49.f_29C[iParam0], iParam1);
	}
	return 0;
}

int func_18(int iParam0, int iParam1, int iParam2)//Position - 0x4922
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_25744D[iParam0 /*6*/][func_19(iParam1)];
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_19(int iParam0)//Position - 0x4954
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_20();
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

int func_20()//Position - 0x4988
{
	return Global_1407E1;
}

int func_21(int iParam0)//Position - 0x4994
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

int func_22()//Position - 0x4C3D
{
	return Global_5F7C;
}

void func_23(bool bParam0)//Position - 0x4C48
{
	var uVar0;
	
	func_782(1);
	if (Local_131.f_67.f_13)
	{
		if (func_185())
		{
			Global_250CE3.f_290.f_28 = 0;
			func_183();
			Global_250CE3.f_290.f_21[0] = Local_131.f_67.f_1;
			Global_250CE3.f_290.f_21[1] = Local_131.f_67.f_3;
			Global_250CE3.f_290.f_27 = Local_131.f_67;
			if (Local_131.f_67.f_5 == 1)
			{
				Global_250CE3.f_290.f_21[2] = Local_131.f_67.f_2;
				Global_250CE3.f_290.f_28 = 1;
			}
		}
	}
	if (Local_131.f_3 != -1)
	{
		func_181(&(Local_131.f_3));
	}
	func_170(&Local_131, iLocal_92);
	func_169(&(Local_131.f_26));
	if (!bParam0 && !iLocal_191)
	{
		func_163(1);
	}
	func_82(0, 1);
	MISC::_0x65D2EBB47E1CEC21(0);
	func_79(1, Local_131);
	Global_26C415 = 0;
	func_77(Local_131);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_130) && !bParam0)
	{
		STREAMING::REMOVE_ANIM_DICT(sLocal_130);
	}
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	func_76();
	func_75();
	Global_15F9E.f_1 = 0;
	if (Local_131.f_B == 2)
	{
		if (CAM::DOES_CAM_EXIST(Local_131.f_8D.f_A))
		{
			if (CAM::IS_CAM_ACTIVE(Local_131.f_8D.f_A))
			{
				CAM::SET_CAM_ACTIVE(Local_131.f_8D.f_A, 0);
			}
			CAM::DESTROY_CAM(Local_131.f_8D.f_A, 0);
		}
		CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		func_66();
	}
	if (Local_131.f_67.f_13)
	{
		uVar0 = PLAYER::PLAYER_PED_ID();
		func_53(uVar0, 1, 0);
		func_29(&(Local_131.f_67), 0, 1, 1);
		if (Global_10A95)
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 185, 0);
		}
		CAM::SET_WIDESCREEN_BORDERS(0, 0);
		CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		func_28(1);
		func_66();
		func_27();
		Local_211.f_13 = 0;
		func_26(&Local_211, 1);
	}
	if (!PED::IS_PED_INJURED(Local_131.f_C))
	{
		if (Local_131.f_A)
		{
			if (func_25(iLocal_92) || NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
			}
			else
			{
				PED::DELETE_PED(&(Local_131.f_C));
			}
		}
		else if (bParam0)
		{
			if (func_25(iLocal_92) || NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
			}
			else
			{
				PED::DELETE_PED(&(Local_131.f_C));
			}
		}
		else if (func_25(iLocal_92) || NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
		}
		else
		{
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_131.f_C, 1);
			PED::SET_PED_KEEP_TASK(Local_131.f_C, 1);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_131.f_C));
		}
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_131.f_C))
		{
			if (ENTITY::IS_ENTITY_DEAD(Local_131.f_C))
			{
				if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_131.f_C))
				{
					if (func_25(iLocal_92) || NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
					}
					else
					{
						PED::DELETE_PED(&(Local_131.f_C));
					}
				}
				else if (func_25(iLocal_92) || NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
				}
				else
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_131.f_C));
				}
			}
		}
		Local_131.f_C = 0;
	}
	if (iLocal_121)
	{
		PED::REMOVE_RELATIONSHIP_GROUP(iLocal_122);
		iLocal_121 = 0;
	}
	if (bParam0)
	{
		func_24("Resetting script", -1);
		MISC::SET_BIT(&(Global_15F9E.f_4F3[iLocal_92]), 11);
	}
	else
	{
		func_24("Terminating script", -1);
		MISC::CLEAR_BIT(&(Global_15F9E.f_4F3[iLocal_92]), 16);
		if (MISC::IS_BIT_SET(Global_146527, 1))
		{
			MISC::CLEAR_BIT(&Global_146527, 1);
		}
		SCRIPT::TERMINATE_THIS_THREAD();
	}
}

void func_24(char* sParam0, int iParam1)//Position - 0x4F5C
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (iParam1 == -1)
	{
	}
}

int func_25(int iParam0)//Position - 0x4F79
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_15F9E.f_3E[iParam0];
}

void func_26(var uParam0, bool bParam1)//Position - 0x4F95
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

void func_27()//Position - 0x5148
{
	if (Global_15F9E.f_5 && Global_15F9E.f_6 == MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()))
	{
		HUD::CLEAR_HELP(1);
		Global_15F9E.f_5 = 0;
	}
}

void func_28(bool bParam0)//Position - 0x5179
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

void func_29(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x519A
{
	if (Global_10A95)
	{
		func_43();
	}
	if (func_42(1))
	{
		if (uParam0->f_13)
		{
		}
		if (Global_10A95)
		{
			if (bParam3)
			{
				if (!func_40())
				{
				}
				else if ((!func_39() && !func_185()) && !STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					func_35(PLAYER::PLAYER_ID(), 1, 0, 1);
				}
				else
				{
					func_35(PLAYER::PLAYER_ID(), 0, 66048, 1);
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
		func_32();
		func_30();
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

void func_30()//Position - 0x52CD
{
	if (!Global_14073B)
	{
		return;
	}
	func_31();
}

void func_31()//Position - 0x52E4
{
	Global_14073B = 0;
	StringCopy(&(Global_14073B.f_1), "", 24);
	Global_14073B.f_7 = 0;
}

void func_32()//Position - 0x5302
{
	func_34(1);
	func_33(4, 0, -1);
	func_33(6, 0, -1);
	func_33(7, 0, -1);
	func_33(3, 0, -1);
	func_33(1, 0, -1);
	func_33(2, 0, -1);
	func_33(11, 0, -1);
	func_33(13, 0, -1);
	func_33(14, 0, -1);
	func_33(16, 0, -1);
}

void func_33(int iParam0, bool bParam1, int iParam2)//Position - 0x5359
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

void func_34(int iParam0)//Position - 0x53A8
{
	Global_2554DA.f_110D = iParam0;
}

void func_35(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x53B9
{
	int iVar0;
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
		iVar0 = iParam2;
		PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar0);
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
		if (!func_40())
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
				if (!func_38(iVar23) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar23))
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
				func_37();
				func_36();
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
				if (!func_38(iVar23) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar23))
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

void func_36()//Position - 0x5738
{
	struct<2> Var0;
	
	Global_24F57C.f_2A4 = 0;
	Global_24F57C.f_2A5 = 0;
	Global_24F57C.f_2A6 = { 9999.9f, 9999.9f, 9999.9f };
	Global_24B0C4.f_560 = { Var0 };
}

void func_37()//Position - 0x5775
{
	Global_24B0C4.f_21A = 0;
	Global_24B0C4.f_589 = 0;
	Global_24B0C4.f_1A4 = 0;
	Global_24D5B9[PLAYER::PLAYER_ID() /*254*/].f_CC = 0;
}

int func_38(int iParam0)//Position - 0x57A2
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

bool func_39()//Position - 0x57D3
{
	return MISC::IS_BIT_SET(Global_250CE3, 2);
}

int func_40()//Position - 0x57E4
{
	if (func_41() == 0)
	{
		return 1;
	}
	return 0;
}

int func_41()//Position - 0x57F9
{
	return Global_1406D3.f_12;
}

bool func_42(bool bParam0)//Position - 0x5807
{
	if (Global_10A95)
	{
		return func_7(PLAYER::PLAYER_ID(), bParam0, !func_858(1));
	}
	return !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID());
}

void func_43()//Position - 0x5835
{
	if (Global_1406A2.f_1 == 1)
	{
		func_44(0);
		Global_1406A2.f_1 = 0;
		Global_1406A2.f_2 = 0;
	}
}

void func_44(int iParam0)//Position - 0x585A
{
	if (func_52())
	{
		if (iParam0 == 1)
		{
			if (Global_2554DA.f_1085 == -1)
			{
				Global_2554DA.f_1085 = 60000;
			}
			func_51(&(Global_2554DA.f_1083), 0, 0);
			if (Global_2554DA.f_1088 == -1)
			{
				Global_2554DA.f_1088 = 10000;
			}
			func_51(&(Global_2554DA.f_1086), 0, 0);
		}
		else
		{
			Global_1406A2 = 0;
			func_50();
		}
		if ((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_49()) && !func_45(PLAYER::PLAYER_ID()))
		{
			Global_ED3D8 = 0;
		}
	}
}

int func_45(int iParam0)//Position - 0x58E5
{
	if (func_46(iParam0, 1))
	{
		if (Global_182604[iParam0 /*324*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_46(int iParam0, bool bParam1)//Position - 0x5909
{
	if (bParam1)
	{
		if (func_47(iParam0))
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

bool func_47(int iParam0)//Position - 0x5935
{
	return func_48(iParam0);
}

bool func_48(int iParam0)//Position - 0x5943
{
	return MISC::IS_BIT_SET(Global_182604[iParam0 /*324*/].f_D.f_1, 0);
}

bool func_49()//Position - 0x595D
{
	return Global_250CE3.f_2C7;
}

void func_50()//Position - 0x596C
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_52())
		{
			if (func_7(PLAYER::PLAYER_ID(), 1, 1))
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
			if (func_7(PLAYER::PLAYER_ID(), 1, 1))
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

void func_51(var uParam0, bool bParam1, bool bParam2)//Position - 0x5A54
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

bool func_52()//Position - 0x5A91
{
	return Global_1406A2;
}

void func_53(int iParam0, bool bParam1, bool bParam2)//Position - 0x5A9D
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = func_64(uParam0);
	if (func_63(iVar0) && !PED::IS_PED_INJURED(uParam0))
	{
		func_54(iParam0, &(Global_17C49.f_6C1.f_21B.f_12A[iVar0 /*284*/]), bParam1);
		iVar1 = 0;
		while (iVar1 <= (8 - 1))
		{
			HUD::HUD_SET_WEAPON_WHEEL_TOP_SLOT(Global_17C49.f_6C1.f_21B.f_47F[iVar1 /*4*/][iVar0]);
			if (bParam2)
			{
				if (iVar1 == Global_17C49.f_6C1.f_21B.f_4A0 || (Global_17C49.f_6C1.f_21B.f_4A0 == -1 && iVar1 == 4))
				{
					if (Global_17C49.f_6C1.f_21B.f_47F[iVar1 /*4*/][iVar0] != 0 && Global_17C49.f_6C1.f_21B.f_47F[iVar1 /*4*/][iVar0] != joaat("weapon_molotov"))
					{
						if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, Global_17C49.f_6C1.f_21B.f_47F[iVar1 /*4*/][iVar0], 0))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(iParam0, Global_17C49.f_6C1.f_21B.f_47F[iVar1 /*4*/][iVar0], 1);
						}
					}
				}
			}
			iVar1++;
		}
		if (iVar0 == 0)
		{
			STATS::STAT_GET_INT(joaat("sp0_parachute_current_tint"), &uVar2, -1);
		}
		else if (iVar0 == 1)
		{
			STATS::STAT_GET_INT(joaat("sp1_parachute_current_tint"), &uVar2, -1);
		}
		else if (iVar0 == 2)
		{
			STATS::STAT_GET_INT(joaat("sp2_parachute_current_tint"), &uVar2, -1);
		}
		PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), uVar2);
	}
}

void func_54(int iParam0, var uParam1, bool bParam2)//Position - 0x5BFE
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
	struct<2> Var9;
	struct<4> Var10;
	int iVar11;
	int iVar12[44];
	int iVar13[50];
	
	if (!PED::IS_PED_INJURED(uParam0))
	{
		iVar7 = 0;
		while (iVar7 < 2)
		{
			iVar5 = 0;
			while (iVar5 <= (44 - 1))
			{
				iVar1 = func_62(iVar5);
				if (iVar1 != 0 && iVar1 != 1993361168)
				{
					iVar2 = WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(iParam0, iVar1);
					if (iVar2 != 0 && iVar2 != joaat("weapon_unarmed"))
					{
						if (func_58(iVar2))
						{
							if (iVar7 == 0)
							{
								iVar12[iVar5] = WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, iVar2);
							}
							else
							{
								WEAPON::SET_PED_AMMO(iParam0, iVar2, 0);
								WEAPON::SET_AMMO_IN_CLIP(iParam0, iVar2, 0);
							}
						}
						else
						{
							iVar12[iVar5] = 0;
							WEAPON::SET_PED_AMMO(iParam0, iVar2, 0);
							WEAPON::SET_AMMO_IN_CLIP(iParam0, iVar2, 0);
						}
					}
				}
				iVar5++;
			}
			iVar8 = 0;
			while (iVar8 < FILES::GET_NUM_DLC_WEAPONS())
			{
				if (FILES::GET_DLC_WEAPON_DATA(iVar8, &Var9))
				{
					if (!FILES::IS_CONTENT_ITEM_LOCKED(Var9) && !func_57(Var9.f_1))
					{
						if (iVar7 == 0)
						{
							iVar13[iVar8] = WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, Var9.f_1);
						}
						else
						{
							WEAPON::SET_PED_AMMO(iParam0, Var9.f_1, 0);
							WEAPON::SET_AMMO_IN_CLIP(iParam0, Var9.f_1, 0);
						}
					}
					else
					{
						iVar13[iVar8] = 0;
						WEAPON::SET_PED_AMMO(iParam0, Var9.f_1, 0);
						WEAPON::SET_AMMO_IN_CLIP(iParam0, Var9.f_1, 0);
					}
				}
				iVar8++;
			}
			iVar7++;
		}
		iVar5 = 0;
		while (iVar5 <= (44 - 1))
		{
			iVar1 = func_62(iVar5);
			if (iVar1 != 0 && iVar1 != 1993361168)
			{
				iVar2 = WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(iParam0, iVar1);
				iVar3 = (*uParam1)[iVar5 /*3*/];
				iVar0 = (uParam1[iVar5 /*3*/])->f_1;
				if (!func_58(iVar3))
				{
					(*uParam1)[iVar5 /*3*/] = 0;
					iVar3 = 0;
				}
				if (iVar3 != 0)
				{
					if (iVar3 != joaat("weapon_unarmed"))
					{
						if (!WEAPON::HAS_PED_GOT_WEAPON(iParam0, iVar3, 0))
						{
							WEAPON::GIVE_WEAPON_TO_PED(iParam0, iVar3, 0, 0, 0);
						}
						if (WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, iVar3) < iVar0)
						{
							WEAPON::SET_PED_AMMO(iParam0, iVar3, iVar0);
						}
						iVar6 = 20;
						while ((iVar6 >= 20 && iVar6 < 32) && iVar3 != joaat("weapon_petrolcan"))
						{
							if (MISC::IS_BIT_SET((uParam1[iVar5 /*3*/])->f_2, iVar6) && WEAPON::HAS_PED_GOT_WEAPON(iParam0, iVar3, 0))
							{
								WEAPON::SET_PED_WEAPON_TINT_INDEX(iParam0, iVar3, (iVar6 - 20));
								iVar6 = 0;
							}
							else
							{
								iVar6++;
							}
						}
						iVar6 = 0;
						iVar4 = func_56(iVar3, iVar6);
						while (iVar4 != 0)
						{
							if (MISC::IS_BIT_SET((uParam1[iVar5 /*3*/])->f_2, iVar6))
							{
								if (!WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, iVar3, iVar4))
								{
									WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(iParam0, iVar3, iVar4);
								}
							}
							else if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, iVar3, iVar4))
							{
								WEAPON::REMOVE_WEAPON_COMPONENT_FROM_PED(iParam0, iVar3, iVar4);
							}
							iVar6++;
							iVar4 = func_56(iVar3, iVar6);
						}
					}
				}
				else if (bParam2)
				{
					if ((iVar2 != 0 && iVar2 != joaat("weapon_unarmed")) && iVar2 != joaat("object"))
					{
						WEAPON::REMOVE_WEAPON_FROM_PED(iParam0, iVar2);
						iVar6 = 0;
						iVar4 = func_56(iVar2, iVar6);
						while (iVar4 != 0)
						{
							if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, iVar2, iVar4))
							{
								WEAPON::REMOVE_WEAPON_COMPONENT_FROM_PED(iParam0, iVar2, iVar4);
							}
							iVar6++;
							iVar4 = func_56(iVar2, iVar6);
						}
					}
				}
				if (!bParam2)
				{
					if (iVar2 != 0 && iVar2 != joaat("weapon_unarmed"))
					{
						if (WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, iVar2) < iVar12[iVar5])
						{
							WEAPON::SET_PED_AMMO(iParam0, iVar2, iVar12[iVar5]);
						}
					}
				}
			}
			iVar5++;
		}
		iVar11 = 0;
		while (iVar11 < uParam1->f_85)
		{
			iVar3 = uParam1->f_85[iVar11 /*3*/];
			iVar0 = uParam1->f_85[iVar11 /*3*/].f_1;
			iVar8 = func_55(iVar3, &Var9);
			if (iVar8 != -1 && !func_57(Var9.f_1))
			{
				if (FILES::IS_CONTENT_ITEM_LOCKED(Var9) || func_57(Var9.f_1))
				{
					uParam1->f_85[iVar11 /*3*/] = 0;
					iVar3 = 0;
				}
				if (iVar3 != 0)
				{
					if (iVar3 != joaat("weapon_unarmed"))
					{
						if (!WEAPON::HAS_PED_GOT_WEAPON(iParam0, iVar3, 0))
						{
							WEAPON::GIVE_WEAPON_TO_PED(iParam0, iVar3, 0, 0, 0);
						}
						if (WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, iVar3) < iVar0)
						{
							WEAPON::SET_PED_AMMO(iParam0, iVar3, iVar0);
						}
						iVar6 = 20;
						while (iVar6 >= 20 && iVar6 < 32)
						{
							if (MISC::IS_BIT_SET(uParam1->f_85[iVar11 /*3*/].f_2, iVar6) && WEAPON::HAS_PED_GOT_WEAPON(iParam0, iVar3, 0))
							{
								WEAPON::SET_PED_WEAPON_TINT_INDEX(iParam0, iVar3, (iVar6 - 20));
								iVar6 = 0;
							}
							else
							{
								iVar6++;
							}
						}
						iVar6 = 0;
						while (iVar6 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar8))
						{
							if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar8, iVar6, &Var10))
							{
								if (MISC::IS_BIT_SET(uParam1->f_85[iVar11 /*3*/].f_2, iVar6))
								{
									if (!WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, iVar3, Var10.f_3))
									{
										WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(iParam0, iVar3, Var10.f_3);
									}
								}
								else if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, iVar3, Var10.f_3))
								{
									WEAPON::REMOVE_WEAPON_COMPONENT_FROM_PED(iParam0, iVar3, Var10.f_3);
								}
							}
							iVar6++;
						}
					}
				}
				else if (bParam2)
				{
					if ((iVar2 != 0 && iVar2 != joaat("weapon_unarmed")) && iVar2 != joaat("object"))
					{
						WEAPON::REMOVE_WEAPON_FROM_PED(iParam0, iVar2);
						iVar6 = 0;
						while (iVar6 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar8))
						{
							if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar8, iVar6, &Var10))
							{
								if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, iVar2, Var10.f_3))
								{
									WEAPON::REMOVE_WEAPON_COMPONENT_FROM_PED(iParam0, iVar2, Var10.f_3);
								}
							}
							iVar6++;
						}
					}
				}
				if (!bParam2)
				{
					if (iVar3 != 0 && iVar3 != joaat("weapon_unarmed"))
					{
						if (WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, iVar3) < iVar13[iVar8])
						{
							WEAPON::SET_PED_AMMO(iParam0, iVar3, iVar13[iVar8]);
						}
					}
				}
			}
			iVar11++;
		}
		if (((WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar2, 1) && iVar2 != 0) && iVar2 != joaat("weapon_unarmed")) && iVar2 != joaat("object"))
		{
			iVar0 = WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, iVar2);
			if (iVar0 > 1 && iVar0 > WEAPON::GET_MAX_AMMO_IN_CLIP(iParam0, iVar2, 1))
			{
				WEAPON::SET_PED_AMMO(iParam0, iVar2, (iVar0 - WEAPON::GET_MAX_AMMO_IN_CLIP(iParam0, iVar2, 1)));
				WEAPON::SET_AMMO_IN_CLIP(iParam0, iVar2, WEAPON::GET_MAX_AMMO_IN_CLIP(iParam0, iVar2, 1));
			}
		}
	}
}

int func_55(int iParam0, var uParam1)//Position - 0x61F4
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

int func_56(int iParam0, int iParam1)//Position - 0x622F
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
				iVar1 = func_55(iParam0, &uVar2);
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

int func_57(int iParam0)//Position - 0x6A4B
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("weapon_pistol50"):
			case joaat("weapon_bullpupshotgun"):
			case joaat("weapon_assaultsmg"):
				return 0;
				break;
			
			case joaat("weapon_bottle"):
			case joaat("weapon_snspistol"):
			case joaat("weapon_gusenberg"):
				return 0;
				break;
			
			case joaat("weapon_heavypistol"):
			case joaat("weapon_specialcarbine"):
				return 0;
				break;
			
			case joaat("weapon_bullpuprifle"):
				return 0;
				break;
			
			case joaat("weapon_dagger"):
			case joaat("weapon_vintagepistol"):
				return 0;
				break;
			
			case joaat("weapon_firework"):
			case joaat("weapon_musket"):
				return 0;
				break;
			
			case joaat("weapon_heavyshotgun"):
			case joaat("weapon_marksmanrifle"):
				return 0;
				break;
			
			case joaat("weapon_hominglauncher"):
			case joaat("weapon_proxmine"):
				return 0;
				break;
			
			case joaat("weapon_combatpdw"):
			case joaat("weapon_knuckle"):
			case joaat("weapon_marksmanpistol"):
				return 0;
				break;
			
			case -947031628:
			case -572349828:
			case 392730790:
			case -1523701417:
			case -2112826155:
			case -664359727:
			case -1887867191:
			case -837150131:
			case -344484024:
			case joaat("weapon_flaregun"):
			case joaat("weapon_handcuffs"):
			case joaat("weapon_snowball"):
			case joaat("weapon_garbagebag"):
				return 1;
				break;
			}
	}
	return 0;
}

bool func_58(int iParam0)//Position - 0x6B71
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == -61829581)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_61())
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (iParam0 == joaat("weapon_firework") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("weapon_assaultsmg"):
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (!func_60(1, 1))
				{
					return 0;
				}
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (!func_60(1, 1))
				{
					return 0;
				}
			}
			break;
		
		case joaat("weapon_railgun"):
			if (!func_59() || NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				return 0;
			}
			break;
		
		case joaat("weapon_hatchet"):
			if (!func_59())
			{
				return 0;
			}
			break;
		
		case joaat("weapon_knuckle"):
		case joaat("weapon_marksmanpistol"):
			return 0;
			break;
	}
	iVar0 = 0;
	while (iVar0 < FILES::GET_NUM_DLC_WEAPONS())
	{
		if (FILES::GET_DLC_WEAPON_DATA(iVar0, &Var1))
		{
			if (Var1.f_1 == iParam0)
			{
				if (FILES::IS_CONTENT_ITEM_LOCKED(Var1) || func_57(Var1.f_1))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return WEAPON::IS_WEAPON_VALID(iParam0);
}

int func_59()//Position - 0x6C8C
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

int func_60(bool bParam0, bool bParam1)//Position - 0x6D0F
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

bool func_61()//Position - 0x6D7B
{
	return DLC::IS_DLC_PRESENT(-1691188696);
}

int func_62(int iParam0)//Position - 0x6D8C
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1993361168;
			break;
		
		case 1:
			iVar0 = 1277010230;
			break;
		
		case 2:
			iVar0 = 932043479;
			break;
		
		case 3:
			iVar0 = -690654591;
			break;
		
		case 4:
			iVar0 = -1459198205;
			break;
		
		case 5:
			iVar0 = 195782970;
			break;
		
		case 6:
			iVar0 = -438797331;
			break;
		
		case 7:
			iVar0 = 896793492;
			break;
		
		case 8:
			iVar0 = 495159329;
			break;
		
		case 9:
			iVar0 = -1155528315;
			break;
		
		case 10:
			iVar0 = -515636489;
			break;
		
		case 11:
			iVar0 = -871913299;
			break;
		
		case 12:
			iVar0 = -1352759032;
			break;
		
		case 13:
			iVar0 = -542958961;
			break;
		
		case 14:
			iVar0 = 1682645887;
			break;
		
		case 15:
			iVar0 = -859470162;
			break;
		
		case 16:
			iVar0 = -2125426402;
			break;
		
		case 17:
			iVar0 = 2067210266;
			break;
		
		case 18:
			iVar0 = -538172856;
			break;
		
		case 19:
			iVar0 = 1783244476;
			break;
		
		case 20:
			iVar0 = 439844898;
			break;
		
		case 21:
			iVar0 = -24829327;
			break;
		
		case 22:
			iVar0 = 1949306232;
			break;
		
		case 23:
			iVar0 = -1941230881;
			break;
		
		case 24:
			iVar0 = -1033554448;
			break;
		
		case 25:
			iVar0 = 320513715;
			break;
		
		case 26:
			iVar0 = -695165975;
			break;
		
		case 27:
			iVar0 = -281028447;
			break;
		
		case 28:
			iVar0 = -686713772;
			break;
		
		case 29:
			iVar0 = 347509793;
			break;
		
		case 30:
			iVar0 = 1769089473;
			break;
		
		case 31:
			iVar0 = 189935548;
			break;
		
		case 33:
			iVar0 = 248801358;
			break;
		
		case 34:
			iVar0 = 386596758;
			break;
		
		case 35:
			iVar0 = -157212362;
			break;
		
		case 36:
			iVar0 = 436985596;
			break;
		
		case 37:
			iVar0 = -47957369;
			break;
		
		case 38:
			iVar0 = 575938238;
			break;
	}
	return iVar0;
}

bool func_63(int iParam0)//Position - 0x7000
{
	return iParam0 < 3;
}

int func_64(int iParam0)//Position - 0x700C
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_65(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_65(int iParam0)//Position - 0x7049
{
	if (func_63(iParam0))
	{
		return Global_17C49.f_744E[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_66()//Position - 0x7073
{
	CAM::SET_WIDESCREEN_BORDERS(0, -1);
	func_27();
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
	func_67(0, 1, 1, 0);
}

void func_67(bool bParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x70C0
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID());
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
		func_74(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_3839.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(0);
			}
			if (!func_73())
			{
				Global_3839.f_1 = 3;
			}
			Global_3D4C = 5;
		}
		func_72(1, iParam3, iParam2);
		Global_D5E4 = 1;
		Global_105F5 = 1;
		Global_10A93 = 1;
	}
	else
	{
		func_74(0);
		HUD::THEFEED_RESUME();
		Global_D5E4 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
		func_72(0, iParam3, iParam2);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_68(PLAYER::PLAYER_ID()))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
		}
		Global_10A93 = 0;
	}
}

int func_68(int iParam0)//Position - 0x7191
{
	if (func_70(iParam0, 0))
	{
		return 1;
	}
	if (func_69())
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

bool func_69()//Position - 0x71D2
{
	return MISC::IS_BIT_SET(Global_240005, 3);
}

bool func_70(int iParam0, int iParam1)//Position - 0x71E3
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_71(-1, 0) == 8;
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

int func_71(int iParam0, bool bParam1)//Position - 0x722E
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_20();
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

int func_72(int iParam0, var uParam1, var uParam2)//Position - 0x726F
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

int func_73()//Position - 0x72A0
{
	if (Global_3839.f_1 == 1 || Global_3839.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_74(int iParam0)//Position - 0x72C7
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

void func_75()//Position - 0x72EA
{
	if (Local_235.x)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_235.f_1);
		Local_235.x = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_235.f_2))
	{
		PED::DELETE_PED(&(Local_235.f_2));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_26CC0B))
	{
		PED::DELETE_PED(&Global_26CC0B);
	}
}

void func_76()//Position - 0x732D
{
	if (iLocal_96)
	{
		NETWORK::RELEASE_ALL_COMMERCE_ITEM_IMAGES();
		iLocal_96 = 0;
		bLocal_97 = false;
	}
}

void func_77(int iParam0)//Position - 0x7344
{
	char cVar0[64];
	
	StringCopy(&cVar0, func_78(iParam0), 64);
	if (MISC::GET_HASH_KEY(&cVar0) != 0)
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(&cVar0);
	}
}

char* func_78(int iParam0)//Position - 0x7366
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

void func_79(bool bParam0, int iParam1)//Position - 0x752E
{
	int iVar0;
	
	if (!func_81(&iVar0, 0, iParam1))
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
		func_80(&(Global_4354.f_1336[iVar0 /*10*/]));
		Global_4354.f_1373[iVar0] = 0;
	}
	else
	{
		Global_4354.f_1373[iVar0] = 0;
	}
}

void func_80(var uParam0)//Position - 0x75CC
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

int func_81(var uParam0, bool bParam1, int iParam2)//Position - 0x75F5
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

void func_82(bool bParam0, bool bParam1)//Position - 0x7692
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<25> Var4;
	
	iVar0 = 0;
	while (iVar0 < 16)
	{
		iVar1 = 0;
		while (iVar1 < 6)
		{
			if (func_84(Local_131, &Global_26CE2D, &Var4, iVar0, iVar1, 0))
			{
				if (Var4.f_18 == 3)
				{
					if (iVar1 == 0)
					{
						iVar3 = joaat("prop_armour_pickup");
					}
					else if (iVar1 == 1)
					{
						iVar3 = joaat("prop_bodyarmour_02");
					}
					else if (iVar1 == 2)
					{
						iVar3 = joaat("prop_bodyarmour_03");
					}
					else if (iVar1 == 3)
					{
						iVar3 = joaat("prop_bodyarmour_04");
					}
					else if (iVar1 == 4)
					{
						iVar3 = joaat("prop_bodyarmour_05");
					}
				}
				else if (Var4.f_18 == 4)
				{
					iVar3 = joaat("p_parachute_s_shop");
				}
				else if (Var4.f_18 == 7)
				{
					iVar3 = func_83(&Global_26CE2D, Var4.f_17);
				}
				else if (Var4.f_18 == 6)
				{
					iVar3 = joaat("ind_prop_firework_04");
				}
				else if (Var4 == joaat("weapon_knife"))
				{
					iVar3 = joaat("prop_w_me_knife_01");
				}
				else if (Var4 == joaat("weapon_bottle"))
				{
					iVar3 = joaat("prop_w_me_bottle");
				}
				else if (Var4 == joaat("weapon_dagger"))
				{
					iVar3 = joaat("prop_w_me_dagger");
				}
				else if (Var4 == joaat("weapon_hatchet"))
				{
					iVar3 = joaat("prop_w_me_hatchet");
				}
				else
				{
					iVar3 = WEAPON::GET_WEAPONTYPE_MODEL(Var4);
				}
				if (iVar3 != 0)
				{
					if (bParam1)
					{
						if (bLocal_99)
						{
							ENTITY::REMOVE_MODEL_HIDE(Var4.f_1, fLocal_213, iVar3, 0);
						}
					}
					else if (!bLocal_99)
					{
						ENTITY::CREATE_MODEL_HIDE(Var4.f_1, fLocal_213, iVar3, 1);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_131.f_DA[iVar2]))
				{
					if (bParam0)
					{
						ENTITY::SET_ENTITY_VISIBLE(Local_131.f_DA[iVar2], true);
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_131.f_DA[iVar2], Var4.f_1, 0, 0, 1);
						ENTITY::SET_ENTITY_ROTATION(Local_131.f_DA[iVar2], Var4.f_4, 2, 1);
					}
					else
					{
						ENTITY::SET_ENTITY_VISIBLE(Local_131.f_DA[iVar2], true);
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_131.f_DA[iVar2], Var4.f_1 + Vector(100f, 0f, 0f), 0, 0, 1);
						ENTITY::SET_ENTITY_ROTATION(Local_131.f_DA[iVar2], Var4.f_4, 2, 1);
					}
					if (iVar3 == joaat("prop_ld_test_01"))
					{
						ENTITY::SET_ENTITY_VISIBLE(Local_131.f_DA[iVar2], false);
					}
				}
			}
			iVar2++;
			iVar1++;
		}
		iVar0++;
	}
	if (bParam1)
	{
		if (bLocal_99)
		{
			ENTITY::REMOVE_MODEL_HIDE(Local_131.f_C.f_2, 20f, joaat("v_ilev_gc_weapons"), 0);
			ENTITY::REMOVE_MODEL_HIDE(Local_131.f_C.f_2, 20f, joaat("v_ilev_gc_handguns"), 0);
			ENTITY::REMOVE_MODEL_HIDE(Local_131.f_C.f_2, 20f, joaat("p_parachute_s"), 0);
			ENTITY::REMOVE_MODEL_HIDE(Local_131.f_C.f_2, 20f, joaat("v_7_wallhooks"), 0);
			ENTITY::REMOVE_MODEL_HIDE(Local_131.f_C.f_2, 20f, joaat("v_22_wallhooks"), 0);
		}
	}
	else if (!bLocal_99)
	{
		ENTITY::CREATE_MODEL_HIDE(Local_131.f_C.f_2, 20f, joaat("v_ilev_gc_weapons"), 1);
		ENTITY::CREATE_MODEL_HIDE(Local_131.f_C.f_2, 20f, joaat("v_ilev_gc_handguns"), 1);
		ENTITY::CREATE_MODEL_HIDE(Local_131.f_C.f_2, 20f, joaat("p_parachute_s"), 1);
		ENTITY::CREATE_MODEL_HIDE(Local_131.f_C.f_2, 20f, joaat("v_7_wallhooks"), 1);
		ENTITY::CREATE_MODEL_HIDE(Local_131.f_C.f_2, 20f, joaat("v_22_wallhooks"), 1);
	}
	bLocal_99 = !bParam1;
}

int func_83(var uParam0, int iParam1)//Position - 0x799F
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		return joaat("prop_ld_test_01");
	}
	iVar0 = MISC::GET_HASH_KEY(NETWORK::GET_COMMERCE_ITEM_ID(uParam0->f_1A[iParam1]));
	if (iVar0 == joaat("weapon_pistol50"))
	{
		return joaat("v_ilev_gunsign_pistol50");
	}
	else if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iVar0 == joaat("weapon_assaultsmg"))
	{
		return joaat("v_ilev_gunsign_asssmg");
	}
	else if (iVar0 == -947031628)
	{
		return joaat("v_ilev_gunsign_hvyrif");
	}
	else if (iVar0 == -572349828)
	{
		return joaat("v_ilev_gunsign_assmg");
	}
	else if (iVar0 == joaat("weapon_bullpupshotgun"))
	{
		return joaat("v_ilev_gunsign_bull");
	}
	else if (iVar0 == 392730790)
	{
		return joaat("v_ilev_gunsign_asssniper");
	}
	else if (iVar0 == -1887867191)
	{
		return joaat("v_ilev_gunsign_progar");
	}
	return joaat("prop_ld_test_01");
}

bool func_84(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5)//Position - 0x7A67
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	func_162(iParam2, 8, 0, 0, -1, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f);
	iVar0 = MISC::GET_HASH_KEY("v_gun");
	iVar1 = MISC::GET_HASH_KEY("v_gun2");
	iVar2 = MISC::GET_HASH_KEY(func_5(iParam0));
	switch (iParam3)
	{
		case 0:
			switch (iParam4)
			{
				case 0:
					func_162(iParam2, 4, 0, joaat("gadget_parachute"), 1, 19.7012f, -1103.268f, 31.3153f, -10.75f, 0f, -200f, 0f, 0.755f, 0f, 0f, 0f, 0f);
					break;
			}
			break;
		
		case 1:
			switch (iParam4)
			{
				case 0:
					func_162(iParam2, 0, joaat("AMMO_SMG"), joaat("weapon_microsmg"), 16, 19.52f, -1103.05f, 30.8f, 0f, 0f, -20f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
				
				case 1:
					func_162(iParam2, 0, joaat("AMMO_SMG"), joaat("weapon_smg"), 30, 19.54f, -1103.05f, 30.36f, 0f, 0f, -20f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
			}
			break;
		
		case 2:
			switch (iParam4)
			{
				case 0:
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						func_162(iParam2, 0, joaat("AMMO_SMG"), joaat("weapon_assaultsmg"), 30, 20.755f, -1103.491f, 31.425f, 0f, 0f, -20f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					}
					else
					{
						func_162(iParam2, 0, joaat("AMMO_SHOTGUN"), joaat("weapon_sawnoffshotgun"), 8, 20.53f, -1103.41f, 31.4f, 0f, 0f, -20f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					}
					break;
				
				case 1:
					func_162(iParam2, 0, joaat("AMMO_SHOTGUN"), joaat("weapon_pumpshotgun"), 8, 20.48f, -1103.4f, 30.9f, 0f, 0f, -20f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
				
				case 2:
					func_162(iParam2, 0, joaat("AMMO_SHOTGUN"), joaat("weapon_assaultshotgun"), 8, 20.62f, -1103.44f, 30.43f, 0f, 0f, -20f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
			}
			break;
		
		case 3:
			switch (iParam4)
			{
				case 0:
					func_162(iParam2, 0, joaat("AMMO_RIFLE"), joaat("weapon_assaultrifle"), 30, 21.65f, -1103.79f, 31.37f, 0f, 0f, -20f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
				
				case 1:
					func_162(iParam2, 0, joaat("AMMO_RIFLE"), joaat("weapon_carbinerifle"), 30, 21.7f, -1103.81f, 30.89f, 0f, 0f, -20f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
				
				case 2:
					func_162(iParam2, 0, joaat("AMMO_RIFLE"), joaat("weapon_advancedrifle"), 30, 21.7f, -1103.81f, 30.41f, 0f, 0f, -20f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
			}
			break;
		
		case 4:
			switch (iParam4)
			{
				case 0:
					func_162(iParam2, 0, joaat("AMMO_SNIPER"), joaat("weapon_sniperrifle"), 10, 22.61f, -1104.16f, 30.9f, 0f, 0f, -20f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
				
				case 1:
					func_162(iParam2, 0, joaat("AMMO_SNIPER"), joaat("weapon_heavysniper"), 6, 22.56f, -1104.14f, 30.42f, 0f, 0f, -20f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
			}
			break;
		
		case 5:
			switch (iParam4)
			{
				case 0:
					func_162(iParam2, 0, joaat("AMMO_MG"), joaat("weapon_mg"), 54, 23.99f, -1104.71f, 31.17f, 0f, 0f, -20f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
				
				case 1:
					func_162(iParam2, 0, joaat("AMMO_MG"), joaat("weapon_combatmg"), 100, 24.08f, -1104.77f, 30.58f, 0f, 0f, -20f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
			}
			break;
		
		case 6:
			switch (iParam4)
			{
				case 0:
					func_162(iParam2, 0, joaat("AMMO_RPG"), joaat("weapon_rpg"), 1, 25.6f, -1105.35f, 31.35f, 0f, 0f, -20f, -0.5f, -0.755f, 0f, 0f, 0f, 0f);
					break;
				
				case 1:
					func_162(iParam2, 0, joaat("AMMO_GRENADELAUNCHER"), joaat("weapon_grenadelauncher"), 10, 25.38f, -1105.22f, 30.96f, 0f, 0f, -20f, -0.5f, -0.755f, 0f, 0f, 0f, 0f);
					break;
				
				case 2:
					func_162(iParam2, 0, joaat("AMMO_MINIGUN"), joaat("weapon_minigun"), 50, 25.28f, -1105.25f, 30.47f, 0f, 0f, -20f, -0.5f, -0.755f, 0f, 0f, 0f, 0f);
					break;
			}
			break;
		
		case 7:
			switch (iParam4)
			{
				case 0:
					func_162(iParam2, 1, 0, joaat("weapon_knife"), 1, 19.8568f, -1105.401f, 29.5403f, -89.9802f, 65f, 0f, 0f, 0f, 0.475f, 0f, 0f, 0f);
					break;
				
				case 1:
					func_162(iParam2, 1, 0, joaat("weapon_nightstick"), 1, 20.2813f, -1105.526f, 29.5342f, -89.9802f, 64.9999f, 0f, 0f, 0f, 0.475f, 88.25f, 25.75f, -0.75f);
					break;
			}
			break;
		
		case 8:
			switch (iParam4)
			{
				case 0:
					func_162(iParam2, 0, 0, joaat("weapon_stungun"), 1, 21.8045f, -1105.765f, 29.5454f, -90f, -5f, -20f, 0f, 0f, 0.475f, 90f, 5f, 0f);
					break;
				
				case 1:
					func_162(iParam2, 0, joaat("AMMO_PISTOL"), joaat("weapon_appistol"), 18, 21.9604f, -1106.077f, 29.5387f, -90f, -5f, -20f, 0f, 0f, 0.475f, 90f, 5f, 0f);
					break;
				
				case 2:
					func_162(iParam2, 0, joaat("AMMO_PISTOL"), joaat("weapon_combatpistol"), 12, 22.239f, -1105.929f, 29.5407f, -90f, -5f, -20f, 0f, 0f, 0.475f, 90f, 5f, 0f);
					break;
				
				case 3:
					func_162(iParam2, 0, joaat("AMMO_PISTOL"), joaat("weapon_pistol"), 12, 22.3535f, -1106.242f, 29.5416f, -90f, -5f, -20f, 0f, 0f, 0.475f, 90f, 5f, 0f);
					break;
			}
			break;
		
		case 9:
			switch (iParam4)
			{
				case 0:
					func_162(iParam2, 2, joaat("AMMO_SMOKEGRENADE"), joaat("weapon_smokegrenade"), 1, 23.2676f, -1107.351f, 29.6454f, 0f, 0f, 245f, 0f, 0f, 0.475f, 0f, 0f, 0f);
					break;
				
				case 1:
					func_162(iParam2, 2, 214501711, joaat("weapon_grenade"), 1, 23.0382f, -1108.005f, 29.5878f, 0f, 0f, 245f, 0f, 0f, 0.475f, 0f, 0f, 0f);
					break;
				
				case 2:
					func_162(iParam2, 2, joaat("AMMO_STICKYBOMB"), joaat("weapon_stickybomb"), 1, 22.8202f, -1108.452f, 29.5571f, 0f, 0f, 0f, 0f, 0f, 0.475f, 90f, 0f, -112f);
					break;
			}
			break;
		
		case 10:
			switch (iParam4)
			{
				case 0:
					func_162(iParam2, 5, 0, joaat("weapon_petrolcan"), 5000, 22.9739f, -1109.181f, 29.6053f, 90f, 0f, 115f, -0.278f, -0.073f, 0.693f, -90f, 0f, 0f);
					break;
			}
			break;
		
		case 11:
			switch (iParam4)
			{
				case 0:
					func_162(iParam2, 7, 0, (*uParam1)[0], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
				
				case 1:
					func_162(iParam2, 7, 0, (*uParam1)[1], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
				
				case 2:
					func_162(iParam2, 7, 0, (*uParam1)[2], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
				
				case 3:
					func_162(iParam2, 7, 0, (*uParam1)[3], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
				
				case 4:
					func_162(iParam2, 7, 0, (*uParam1)[4], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
				
				case 5:
					func_162(iParam2, 7, 0, (*uParam1)[5], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
			}
			break;
		
		case 12:
			switch (iParam4)
			{
				case 0:
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						func_162(iParam2, 7, 0, (*uParam1)[7], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					}
					else
					{
						func_162(iParam2, 7, 0, (*uParam1)[6], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					}
					break;
				
				case 1:
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						func_162(iParam2, 7, 0, (*uParam1)[9], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					}
					else
					{
						func_162(iParam2, 7, 0, (*uParam1)[7], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					}
					break;
				
				case 2:
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						func_162(iParam2, 7, 0, (*uParam1)[10], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					}
					else
					{
						func_162(iParam2, 7, 0, (*uParam1)[8], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					}
					break;
				
				case 3:
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						func_162(iParam2, 7, 0, (*uParam1)[8], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					}
					else
					{
						func_162(iParam2, 7, 0, (*uParam1)[10], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					}
					break;
				
				case 4:
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						func_162(iParam2, 7, 0, (*uParam1)[6], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					}
					else
					{
						func_162(iParam2, 7, 0, (*uParam1)[11], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					}
					break;
				
				case 5:
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						func_162(iParam2, 7, 0, (*uParam1)[11], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					}
					else
					{
						func_162(iParam2, 7, 0, (*uParam1)[9], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					}
					break;
			}
			break;
		
		case 13:
			switch (iParam4)
			{
				case 0:
					func_162(iParam2, 7, 0, (*uParam1)[12], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
				
				case 1:
					func_162(iParam2, 7, 0, (*uParam1)[13], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
				
				case 2:
					func_162(iParam2, 7, 0, (*uParam1)[14], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
				
				case 3:
					func_162(iParam2, 7, 0, (*uParam1)[15], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
				
				case 4:
					func_162(iParam2, 7, 0, (*uParam1)[16], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
				
				case 5:
					func_162(iParam2, 7, 0, (*uParam1)[17], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
			}
			break;
		
		case 14:
			switch (iParam4)
			{
				case 0:
					func_162(iParam2, 7, 0, (*uParam1)[18], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
				
				case 1:
					func_162(iParam2, 7, 0, (*uParam1)[19], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
				
				case 2:
					func_162(iParam2, 7, 0, (*uParam1)[20], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
				
				case 3:
					func_162(iParam2, 7, 0, (*uParam1)[21], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
				
				case 4:
					func_162(iParam2, 7, 0, (*uParam1)[22], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
				
				case 5:
					func_162(iParam2, 7, 0, (*uParam1)[23], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
			}
			break;
		
		case 15:
			switch (iParam4)
			{
				case 0:
					func_162(iParam2, 3, 0, joaat("weapon_unarmed"), 20, 16.2547f, -1110.088f, 30.7311f, 0f, 0f, 70f, 0f, -0.565f, 0f, 0f, 0f, 0f);
					break;
				
				case 1:
					func_162(iParam2, 3, 0, joaat("weapon_unarmed"), 40, 16.4693f, -1109.498f, 30.7311f, 0f, 0f, 70f, 0f, -0.565f, 0f, 0f, 0f, 0f);
					break;
				
				case 2:
					func_162(iParam2, 3, 0, joaat("weapon_unarmed"), 60, 16.6786f, -1108.923f, 30.7311f, 0f, 0f, 70f, 0f, -0.565f, 0f, 0f, 0f, 0f);
					break;
				
				case 3:
					func_162(iParam2, 3, 0, joaat("weapon_unarmed"), 80, 16.3512f, -1109.822f, 29.9462f, 0f, 0f, 70f, 0f, -0.565f, 0f, 0f, 0f, 0f);
					break;
				
				case 4:
					func_162(iParam2, 3, 0, joaat("weapon_unarmed"), 100, 16.5802f, -1109.193f, 29.9462f, 0f, 0f, 70f, 0f, -0.565f, 0f, 0f, 0f, 0f);
					break;
			}
			break;
	}
	if (((iParam3 == 11 || iParam3 == 12) || iParam3 == 13) || iParam3 == 14)
	{
		switch (iParam4)
		{
			case 0:
				iParam2->f_1.f_2 = (iParam2->f_1.f_2 - 0.43f);
				break;
			
			case 1:
				iParam2->f_1.f_2 = (iParam2->f_1.f_2 - 0.7f);
				break;
			
			case 2:
				iParam2->f_1.f_2 = (iParam2->f_1.f_2 - 0.97f);
				break;
			
			case 3:
				iParam2->f_1.f_2 = (iParam2->f_1.f_2 - 1.24f);
				break;
			
			case 4:
				iParam2->f_1.f_2 = (iParam2->f_1.f_2 - 1.51f);
				break;
			
			case 5:
				iParam2->f_1.f_2 = (iParam2->f_1.f_2 - 1.78f);
				break;
			}
	}
	if (((*iParam2 == joaat("weapon_hammer") || *iParam2 == joaat("weapon_bottle")) || *iParam2 == joaat("weapon_dagger")) || *iParam2 == joaat("weapon_hatchet"))
	{
		iParam2->f_4.f_1 = (iParam2->f_4.f_1 + 90f);
	}
	if (*iParam2 == joaat("weapon_proxmine"))
	{
		iParam2->f_4 = (iParam2->f_4 + 90f);
	}
	if (*iParam2 == joaat("weapon_musket"))
	{
		iParam2->f_1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(iParam2->f_1, iParam2->f_4.f_2, -0.3f, 0f, 0f) };
	}
	if (*iParam2 == joaat("weapon_firework"))
	{
		iParam2->f_1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(iParam2->f_1, iParam2->f_4.f_2, 0.1f, 0f, 0f) };
	}
	if (*iParam2 == joaat("weapon_specialcarbine"))
	{
		iParam2->f_1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(iParam2->f_1, iParam2->f_4.f_2, -0.05f, 0f, 0f) };
	}
	if (*iParam2 == joaat("weapon_hominglauncher"))
	{
		iParam2->f_1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(iParam2->f_1, iParam2->f_4.f_2, 0.4f, 0f, 0f) };
	}
	if (iParam3 == 11)
	{
		iParam2->f_1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(iParam2->f_1, iParam2->f_4.f_2, -0.4f, 0f, 0f) };
	}
	else if (iParam3 == 12)
	{
		iParam2->f_1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(iParam2->f_1, iParam2->f_4.f_2, Vector(0f, 0f, -0.4f) + Vector(0f, 0f, 1.16f)) };
	}
	else if (iParam3 == 13)
	{
		iParam2->f_1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(iParam2->f_1, iParam2->f_4.f_2, Vector(0f, 0f, -0.4f) + Vector(0f, 0f, 2.32f)) };
	}
	else if (iParam3 == 14)
	{
		iParam2->f_1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(iParam2->f_1, iParam2->f_4.f_2, Vector(0f, 0f, -0.4f) + Vector(0f, 0f, 3.48f)) };
	}
	if (iVar2 == iVar1)
	{
		switch (iParam3)
		{
			case 0:
				switch (iParam4)
				{
					case 0:
						func_161(iParam2, joaat("gadget_parachute"), 1689.082f, 3759.161f, 36.2236f, 0f, 0f, -132f, 0f, 0.755f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 1:
				switch (iParam4)
				{
					case 0:
						func_161(iParam2, joaat("weapon_microsmg"), 1688.8f, 3759.09f, 35.7f, 0f, 0f, 47.3919f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_161(iParam2, joaat("weapon_smg"), 1688.82f, 3759.1f, 35.27f, 0f, 0f, 47.3919f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 2:
				switch (iParam4)
				{
					case 0:
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							func_161(iParam2, joaat("weapon_assaultsmg"), 1689.693f, 3760.031f, 36.328f, 0f, 0f, 47.3919f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						}
						else
						{
							func_161(iParam2, joaat("weapon_sawnoffshotgun"), 1689.51f, 3759.85f, 36.3f, 0f, 0f, 47.3919f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						}
						break;
					
					case 1:
						func_161(iParam2, joaat("weapon_pumpshotgun"), 1689.51f, 3759.83f, 35.8f, 0f, 0f, 47.3919f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
					
					case 2:
						func_161(iParam2, joaat("weapon_assaultshotgun"), 1689.56f, 3759.91f, 35.34f, 0f, 0f, 47.3919f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 3:
				switch (iParam4)
				{
					case 0:
						func_161(iParam2, joaat("weapon_assaultrifle"), 1690.32f, 3760.76f, 36.27f, 0f, 0f, 47.3919f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_161(iParam2, joaat("weapon_carbinerifle"), 1690.36f, 3760.8f, 35.79f, 0f, 0f, 47.3919f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
					
					case 2:
						func_161(iParam2, joaat("weapon_advancedrifle"), 1690.35f, 3760.8f, 35.32f, 0f, 0f, 47.3919f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 4:
				switch (iParam4)
				{
					case 0:
						func_161(iParam2, joaat("weapon_sniperrifle"), 1691.02f, 3761.51f, 35.81f, 0f, 0f, 47.3919f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_161(iParam2, joaat("weapon_heavysniper"), 1690.99f, 3761.47f, 35.32f, 0f, 0f, 47.3919f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 5:
				switch (iParam4)
				{
					case 0:
						func_161(iParam2, joaat("weapon_mg"), 1692.06f, 3762.57f, 36.08f, 0f, 0f, 47.3919f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_161(iParam2, joaat("weapon_combatmg"), 1692.15f, 3762.63f, 35.49f, 0f, 0f, 47.3919f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 6:
				switch (iParam4)
				{
					case 0:
						func_161(iParam2, joaat("weapon_rpg"), 1693.26f, 3763.82f, 36.26f, 0f, 0f, 47.3919f, -0.5f, -0.755f, 0f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_161(iParam2, joaat("weapon_grenadelauncher"), 1693.12f, 3763.72f, 35.88f, 0f, 0f, 47.3919f, -0.5f, -0.755f, 0f, 0f, 0f, 0f);
						break;
					
					case 2:
						func_161(iParam2, joaat("weapon_minigun"), 1693.06f, 3763.56f, 35.39f, 0f, 0f, 47.3919f, -0.5f, -0.755f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 7:
				switch (iParam4)
				{
					case 0:
						func_161(iParam2, joaat("weapon_knife"), 1691.113f, 3758.477f, 34.4486f, -90f, 0f, 0f, 0f, 0f, 0.475f, 35f, 0f, 0f);
						break;
					
					case 1:
						func_161(iParam2, joaat("weapon_nightstick"), 1691.394f, 3758.84f, 34.4425f, -89.9657f, -2.39193f, 0f, 0f, 0f, 0.475f, 45f, 0f, 0f);
						break;
				}
				break;
			
			case 8:
				switch (iParam4)
				{
					case 0:
						func_161(iParam2, joaat("weapon_stungun"), 1692.197f, 3760.145f, 34.4537f, -90f, -45f, 0f, 0f, 0f, 0.475f, 90f, 45f, 45f);
						break;
					
					case 1:
						func_161(iParam2, joaat("weapon_appistol"), 1692.546f, 3760.169f, 34.447f, -90f, -45f, 0f, 0f, 0f, 0.475f, 90f, 45f, 45f);
						break;
					
					case 2:
						func_161(iParam2, joaat("weapon_combatpistol"), 1692.516f, 3760.483f, 34.449f, -90f, -45f, 0f, 0f, 0f, 0.475f, 90f, 45f, 45f);
						break;
					
					case 3:
						func_161(iParam2, joaat("weapon_pistol"), 1692.849f, 3760.468f, 34.4499f, -90f, -45f, 0f, 0f, 0f, 0.475f, 90f, 45f, 45f);
						break;
				}
				break;
			
			case 9:
				switch (iParam4)
				{
					case 0:
						func_161(iParam2, joaat("weapon_smokegrenade"), 1694.224f, 3760.886f, 34.5537f, 0f, 0f, 310f, 0f, 0f, 0.475f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_161(iParam2, joaat("weapon_grenade"), 1694.739f, 3760.423f, 34.4961f, 0f, 0f, 310f, 0f, 0f, 0.475f, 0f, 0f, 0f);
						break;
					
					case 2:
						func_161(iParam2, joaat("weapon_stickybomb"), 1695.068f, 3760.049f, 34.4655f, 0f, 0f, 45f, 0f, 0f, 0.475f, 90f, 0f, -90f);
						break;
				}
				break;
			
			case 10:
				switch (iParam4)
				{
					case 0:
						func_162(iParam2, 5, 0, joaat("weapon_petrolcan"), 5000, 1695.804f, 3759.918f, 34.5136f, -90f, 0f, 2.5f, -0.278f, -0.073f, 0.693f, 90f, 0f, -2.5f);
						break;
				}
				break;
			
			case 11:
				switch (iParam4)
				{
					case 0:
						func_162(iParam2, 7, 0, (*uParam1)[0], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_162(iParam2, 7, 0, (*uParam1)[1], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
					
					case 2:
						func_162(iParam2, 7, 0, (*uParam1)[2], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
					
					case 3:
						func_162(iParam2, 7, 0, (*uParam1)[3], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
					
					case 4:
						func_162(iParam2, 7, 0, (*uParam1)[4], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
					
					case 5:
						func_162(iParam2, 7, 0, (*uParam1)[5], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 12:
				switch (iParam4)
				{
					case 0:
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							func_162(iParam2, 7, 0, (*uParam1)[7], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						}
						else
						{
							func_162(iParam2, 7, 0, (*uParam1)[6], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						}
						break;
					
					case 1:
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							func_162(iParam2, 7, 0, (*uParam1)[9], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						}
						else
						{
							func_162(iParam2, 7, 0, (*uParam1)[7], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						}
						break;
					
					case 2:
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							func_162(iParam2, 7, 0, (*uParam1)[10], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						}
						else
						{
							func_162(iParam2, 7, 0, (*uParam1)[8], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						}
						break;
					
					case 3:
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							func_162(iParam2, 7, 0, (*uParam1)[8], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						}
						else
						{
							func_162(iParam2, 7, 0, (*uParam1)[10], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						}
						break;
					
					case 4:
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							func_162(iParam2, 7, 0, (*uParam1)[6], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						}
						else
						{
							func_162(iParam2, 7, 0, (*uParam1)[11], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						}
						break;
					
					case 5:
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							func_162(iParam2, 7, 0, (*uParam1)[11], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						}
						else
						{
							func_162(iParam2, 7, 0, (*uParam1)[9], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						}
						break;
				}
				break;
			
			case 13:
				switch (iParam4)
				{
					case 0:
						func_162(iParam2, 7, 0, (*uParam1)[12], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_162(iParam2, 7, 0, (*uParam1)[13], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
					
					case 2:
						func_162(iParam2, 7, 0, (*uParam1)[14], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
					
					case 3:
						func_162(iParam2, 7, 0, (*uParam1)[15], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
					
					case 4:
						func_162(iParam2, 7, 0, (*uParam1)[16], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
					
					case 5:
						func_162(iParam2, 7, 0, (*uParam1)[17], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 14:
				switch (iParam4)
				{
					case 0:
						func_162(iParam2, 7, 0, (*uParam1)[18], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_162(iParam2, 7, 0, (*uParam1)[19], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
					
					case 2:
						func_162(iParam2, 7, 0, (*uParam1)[20], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
					
					case 3:
						func_162(iParam2, 7, 0, (*uParam1)[21], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
					
					case 4:
						func_162(iParam2, 7, 0, (*uParam1)[22], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
					
					case 5:
						func_162(iParam2, 7, 0, (*uParam1)[23], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 15:
				switch (iParam4)
				{
					case 0:
						func_161(iParam2, joaat("weapon_unarmed"), 1694.045f, 3753.344f, 35.6458f, 0f, 0f, 137.392f, 0f, -0.565f, 0f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_161(iParam2, joaat("weapon_unarmed"), 1693.583f, 3753.768f, 35.6458f, 0f, 0f, 137.392f, 0f, -0.565f, 0f, 0f, 0f, 0f);
						break;
					
					case 2:
						func_161(iParam2, joaat("weapon_unarmed"), 1693.133f, 3754.183f, 35.6458f, 0f, 0f, 137.392f, 0f, -0.565f, 0f, 0f, 0f, 0f);
						break;
					
					case 3:
						func_161(iParam2, joaat("weapon_unarmed"), 1693.838f, 3753.535f, 34.8608f, 0f, 0f, 137.392f, 0f, -0.565f, 0f, 0f, 0f, 0f);
						break;
					
					case 4:
						func_161(iParam2, joaat("weapon_unarmed"), 1693.345f, 3753.988f, 34.8608f, 0f, 0f, 137.392f, 0f, -0.565f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
		}
		if (((iParam3 == 11 || iParam3 == 12) || iParam3 == 13) || iParam3 == 14)
		{
			iParam2->f_1.f_2 = (iParam2->f_1.f_2 - 0.15f);
			switch (iParam4)
			{
				case 0:
					iParam2->f_1.f_2 = (iParam2->f_1.f_2 - 0.43f);
					break;
				
				case 1:
					iParam2->f_1.f_2 = (iParam2->f_1.f_2 - 0.7f);
					break;
				
				case 2:
					iParam2->f_1.f_2 = (iParam2->f_1.f_2 - 0.97f);
					break;
				
				case 3:
					iParam2->f_1.f_2 = (iParam2->f_1.f_2 - 1.24f);
					break;
				
				case 4:
					iParam2->f_1.f_2 = (iParam2->f_1.f_2 - 1.51f);
					break;
				
				case 5:
					iParam2->f_1.f_2 = (iParam2->f_1.f_2 - 1.78f);
					break;
				}
		}
		if (((*iParam2 == joaat("weapon_hammer") || *iParam2 == joaat("weapon_bottle")) || *iParam2 == joaat("weapon_dagger")) || *iParam2 == joaat("weapon_hatchet"))
		{
			iParam2->f_4.f_1 = (iParam2->f_4.f_1 + 90f);
		}
		if (*iParam2 == joaat("weapon_proxmine"))
		{
			iParam2->f_4 = (iParam2->f_4 + 90f);
		}
		if (*iParam2 == joaat("weapon_musket"))
		{
			iParam2->f_1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(iParam2->f_1, iParam2->f_4.f_2, -0.3f, 0f, 0f) };
		}
		if (*iParam2 == joaat("weapon_firework"))
		{
			iParam2->f_1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(iParam2->f_1, iParam2->f_4.f_2, 0.1f, 0f, 0f) };
		}
		if (*iParam2 == joaat("weapon_specialcarbine"))
		{
			iParam2->f_1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(iParam2->f_1, iParam2->f_4.f_2, -0.05f, 0f, 0f) };
		}
		if (*iParam2 == joaat("weapon_hominglauncher"))
		{
			iParam2->f_1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(iParam2->f_1, iParam2->f_4.f_2, 0.4f, 0f, 0f) };
		}
		if (iParam3 == 11)
		{
			iParam2->f_1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(iParam2->f_1, iParam2->f_4.f_2, -0.4f, 0f, 0f) };
		}
		else if (iParam3 == 12)
		{
			iParam2->f_1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(iParam2->f_1, iParam2->f_4.f_2, Vector(0f, 0f, -0.4f) + Vector(0f, 0f, 1.16f)) };
		}
		else if (iParam3 == 13)
		{
			iParam2->f_1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(iParam2->f_1, iParam2->f_4.f_2, Vector(0f, 0f, -0.4f) + Vector(0f, 0f, 2.32f)) };
		}
		else if (iParam3 == 14)
		{
			iParam2->f_1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(iParam2->f_1, iParam2->f_4.f_2, Vector(0f, 0f, -0.4f) + Vector(0f, 0f, 3.48f)) };
		}
	}
	if (bParam5)
	{
		if (*iParam2 == joaat("weapon_unarmed"))
		{
			func_93(*iParam2, &(iParam2->f_13), &(iParam2->f_14), &(iParam2->f_15), iParam4);
		}
		else
		{
			func_93(*iParam2, &(iParam2->f_13), &(iParam2->f_14), &(iParam2->f_15), 0);
		}
	}
	if (iVar2 == iVar0)
	{
		iVar3 = 28;
	}
	else if (iVar2 == iVar1)
	{
		iVar3 = 29;
	}
	func_91(iVar3, iParam0, &(iParam2->f_1));
	func_87(iVar3, iParam0, &(iParam2->f_4));
	if (iParam2->f_18 == 7)
	{
		if (*iParam2 == joaat("object"))
		{
			iVar4 = 0;
			while (iVar4 < 24)
			{
				if (uParam1->f_4D[iVar4] == iParam3 && uParam1->f_34[iVar4] == iParam4)
				{
					iParam2->f_17 = iVar4;
				}
				iVar4++;
			}
		}
		else if (*iParam2 != 0)
		{
			if (*iParam2 == -61829581)
			{
				iParam2->f_18 = 6;
			}
			else
			{
				func_85(iParam2, *iParam2);
				switch (WEAPON::GET_WEAPONTYPE_GROUP(*iParam2))
				{
					case joaat("GROUP_PISTOL"):
					case joaat("GROUP_SMG"):
					case joaat("GROUP_RIFLE"):
					case joaat("GROUP_MG"):
					case joaat("GROUP_SHOTGUN"):
					case joaat("GROUP_SNIPER"):
					case joaat("GROUP_HEAVY"):
					case 88899580:
					case joaat("GROUP_STUNGUN"):
						iParam2->f_18 = 0;
						break;
					
					case joaat("GROUP_MELEE"):
					case joaat("GROUP_FIREEXTINGUISHER"):
					case joaat("GROUP_PETROLCAN"):
					case 507375312:
					case -755518101:
					case -801780072:
					case 431593103:
						iParam2->f_18 = 1;
						break;
					
					case joaat("GROUP_THROWN"):
						iParam2->f_18 = 2;
						break;
					}
				}
			}
	}
	return *iParam2 != 0;
}

void func_85(var uParam0, int iParam1)//Position - 0x9F13
{
	struct<7> Var0;
	
	switch (iParam1)
	{
		case joaat("weapon_assaultsmg"):
			func_86(uParam0, joaat("AMMO_SMG"), 30);
			break;
		
		case joaat("weapon_bullpupshotgun"):
			func_86(uParam0, joaat("AMMO_SHOTGUN"), 8);
			break;
		
		case joaat("weapon_pistol50"):
			func_86(uParam0, joaat("AMMO_PISTOL"), 12);
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			func_86(uParam0, joaat("AMMO_SHOTGUN"), 8);
			break;
		
		default:
			if (func_55(iParam1, &Var0) != -1)
			{
				func_86(uParam0, Var0.f_5, Var0.f_6);
			}
			break;
	}
}

void func_86(var uParam0, int iParam1, int iParam2)//Position - 0x9F97
{
	uParam0->f_19 = iParam1;
	uParam0->f_16 = iParam2;
}

void func_87(int iParam0, int iParam1, var uParam2)//Position - 0x9FAB
{
	var uVar0;
	struct<3> Var1;
	var uVar2;
	struct<3> Var3;
	
	func_88(iParam0, &uVar0, &Var1);
	func_88(iParam1, &uVar2, &Var3);
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

int func_88(int iParam0, var uParam1, var uParam2)//Position - 0xA08F
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = { 0f, 0f, 0f };
	switch (iParam0)
	{
		case -1:
			break;
		
		case 0:
			*uParam1 = { -821.61f, -183.79f, 37.43f };
			*uParam2 = { 0f, 0f, func_90(-2.6f) };
			break;
		
		case 1:
			*uParam1 = { 133.97f, -1708.3f, 29.48f };
			*uParam2 = { 0f, 0f, func_90(-3.84f) };
			break;
		
		case 2:
			*uParam1 = { -1284.88f, -1115.09f, 7.18f };
			*uParam2 = { 0f, 0f, func_90(-4.71f) };
			break;
		
		case 3:
			*uParam1 = { 1930.9f, 3727.41f, 33.03f };
			*uParam2 = { 0f, 0f, func_90(-2.62f) };
			break;
		
		case 4:
			*uParam1 = { 1210.92f, -470.18f, 66.39f };
			*uParam2 = { 0f, 0f, func_90(-4.97f) };
			break;
		
		case 5:
			*uParam1 = { -30.28f, -151.18f, 57.26f };
			*uParam2 = { 0f, 0f, func_90(-0.35f) };
			break;
		
		case 6:
			*uParam1 = { -278.21f, 6231.15f, 31.88f };
			*uParam2 = { 0f, 0f, func_90(-5.49f) };
			break;
		
		case 7:
			*uParam1 = { 74.6f, -1392.09f, 29.53f };
			*uParam2 = { 0f, 0f, func_90(-1.57f) };
			break;
		
		case 8:
			*uParam1 = { 1694.87f, 4822.11f, 42.22f };
			*uParam2 = { 0f, 0f, func_90(-4.58f) };
			break;
		
		case 9:
			*uParam1 = { 426.35f, -807.12f, 29.65f };
			*uParam2 = { 0f, 0f, func_90(-4.71f) };
			break;
		
		case 10:
			*uParam1 = { -1101.41f, 2711.75f, 19.26f };
			*uParam2 = { 0f, 0f, func_90(-2.41f) };
			break;
		
		case 11:
			*uParam1 = { 1197.49f, 2711f, 38.38f };
			*uParam2 = { 0f, 0f, func_90(-3.14f) };
			break;
		
		case 12:
			*uParam1 = { -822.1f, -1072.44f, 11.48f };
			*uParam2 = { 0f, 0f, func_90(-2.62f) };
			break;
		
		case 13:
			*uParam1 = { 4.75f, 6511.3f, 32.03f };
			*uParam2 = { 0f, 0f, func_90(-5.54f) };
			break;
		
		case 14:
			*uParam1 = { -1193.51f, -767.47f, 17.33f };
			*uParam2 = { 0f, 0f, func_90(-2.5f) };
			break;
		
		case 15:
			*uParam1 = { 613.6f, 2762.76f, 42.1f };
			*uParam2 = { 0f, 0f, func_90(-1.5f) };
			break;
		
		case 16:
			*uParam1 = { 126.36f, -224.03f, 54.57f };
			*uParam2 = { 0f, 0f, func_90(1.22f) };
			break;
		
		case 17:
			*uParam1 = { -3170f, 1043.45f, 20.87f };
			*uParam2 = { 0f, 0f, func_90(1.16f) };
			break;
		
		case 18:
			*uParam1 = { -708.59f, -152.21f, 37.09f };
			*uParam2 = { 0f, 0f, func_90(-1.05f) };
			break;
		
		case 19:
			*uParam1 = { -164.82f, -302.45f, 39.41f };
			*uParam2 = { 0f, 0f, func_90(1.24f) };
			break;
		
		case 20:
			*uParam1 = { -1449.23f, -238.49f, 49.49f };
			*uParam2 = { 0f, 0f, func_90(-2.3f) };
			break;
		
		case 21:
			break;
		
		case 22:
			*uParam1 = { 320.59f, 181.43f, 103.79f };
			*uParam2 = { 0f, 0f, func_90(-1.92f) };
			break;
		
		case 23:
			*uParam1 = { 1861.29f, 3748.57f, 33.24f };
			*uParam2 = { 0f, 0f, func_90(-5.67f) };
			break;
		
		case 24:
			*uParam1 = { -290.83f, 6199.93f, 31.69f };
			*uParam2 = { 0f, 0f, func_90(-2.27f) };
			break;
		
		case 25:
			*uParam1 = { -1152.24f, -1424.77f, 5.16f };
			*uParam2 = { 0f, 0f, func_90(-4.1f) };
			break;
		
		case 26:
			*uParam1 = { 1324.44f, -1650.99f, 52.47f };
			*uParam2 = { 0f, 0f, func_90(-4.03f) };
			break;
		
		case 27:
			*uParam1 = { -3170.92f, 1073.84f, 21.04f };
			*uParam2 = { 0f, 0f, func_90(-0.41f) };
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
			*uParam2 = { 0f, 0f, func_90(2.36f) };
			break;
		
		case 40:
			*uParam1 = { 730.73f, -1073.13f, 23.02f };
			*uParam2 = { 0f, 0f, func_90(1.57f) };
			break;
		
		case 41:
			*uParam1 = { -343.62f, -131.44f, 39.71f };
			*uParam2 = { 0f, 0f, func_90(-1.92f) };
			break;
		
		case 42:
			*uParam1 = { 106.42f, 6623.02f, 33.52f };
			*uParam2 = { 0f, 0f, func_90(0.78f) };
			break;
		
		case 43:
			*uParam1 = { 1180.45f, 2639.85f, 39.48f };
			*uParam2 = { 0f, 0f, func_90(-3.14f) };
			break;
	}
	if (func_89(*uParam1, 0f, 0f, 0f) && func_89(*uParam2, 0f, 0f, 0f))
	{
		return 0;
	}
	return 1;
}

bool func_89(struct<3> Param0, struct<3> Param1)//Position - 0xA7E2
{
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

float func_90(float fParam0)//Position - 0xA80B
{
	return (fParam0 * 57.29578f);
}

void func_91(int iParam0, int iParam1, var uParam2)//Position - 0xA81B
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	
	if (func_89(*uParam2, 0f, 0f, 0f))
	{
		return;
	}
	func_88(iParam0, &Var0, &Var1);
	func_88(iParam1, &Var2, &Var3);
	Var4 = { *uParam2 - Var0 };
	Var4 = { func_92(Var4, -Var1.f_2) };
	Var4 = { func_92(Var4, Var3.f_2) };
	*uParam2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var2, 0f, Var4) };
}

Vector3 func_92(struct<3> Param0, float fParam1)//Position - 0xA889
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

bool func_93(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4)//Position - 0xA8CD
{
	struct<5> Var0;
	int iVar1;
	int iVar2;
	struct<5> Var3;
	char* sVar4;
	struct<4> Var5;
	int iVar6;
	int iVar7;
	int iVar8;
	float fVar9;
	
	*uParam1 = 0;
	*uParam2 = 0;
	*uParam3 = 0;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		switch (iParam0)
		{
			case joaat("weapon_unarmed"):
				if (iParam4 == 0)
				{
					*uParam1 = 500;
					*uParam2 = 500;
				}
				else if (iParam4 == 1)
				{
					*uParam1 = 1000;
					*uParam2 = 1000;
				}
				else if (iParam4 == 2)
				{
					*uParam1 = 1500;
					*uParam2 = 1500;
				}
				else if (iParam4 == 3)
				{
					*uParam1 = 2000;
					*uParam2 = 2000;
				}
				else if (iParam4 == 4)
				{
					*uParam1 = 2500;
					*uParam2 = 2500;
				}
				break;
			
			case joaat("gadget_parachute"):
				*uParam1 = 100;
				*uParam2 = 100;
				break;
			
			case joaat("weapon_microsmg"):
				*uParam1 = 850;
				*uParam2 = 20;
				break;
			
			case joaat("weapon_smg"):
				*uParam1 = 1300;
				*uParam2 = 38;
				break;
			
			case joaat("weapon_sawnoffshotgun"):
				*uParam1 = 300;
				*uParam2 = 8;
				break;
			
			case joaat("weapon_pumpshotgun"):
				*uParam1 = 550;
				*uParam2 = 8;
				break;
			
			case joaat("weapon_assaultshotgun"):
				*uParam1 = 1500;
				*uParam2 = 8;
				break;
			
			case joaat("weapon_assaultrifle"):
				*uParam1 = 1400;
				*uParam2 = 36;
				break;
			
			case joaat("weapon_carbinerifle"):
				*uParam1 = 2100;
				*uParam2 = 36;
				break;
			
			case joaat("weapon_advancedrifle"):
				*uParam1 = 3500;
				*uParam2 = 36;
				break;
			
			case joaat("weapon_sniperrifle"):
				*uParam1 = 5000;
				*uParam2 = 48;
				break;
			
			case joaat("weapon_heavysniper"):
				*uParam1 = 9500;
				*uParam2 = 29;
				break;
			
			case joaat("weapon_mg"):
				*uParam1 = 3000;
				*uParam2 = 50;
				break;
			
			case joaat("weapon_combatmg"):
				*uParam1 = 3700;
				*uParam2 = 92;
				break;
			
			case joaat("weapon_rpg"):
				*uParam1 = 6500;
				*uParam2 = 100;
				break;
			
			case joaat("weapon_grenadelauncher"):
				*uParam1 = 8100;
				*uParam2 = 50;
				break;
			
			case joaat("weapon_minigun"):
				*uParam1 = 15000;
				*uParam2 = 50;
				break;
			
			case joaat("weapon_knife"):
				*uParam1 = 100;
				*uParam2 = 100;
				break;
			
			case joaat("weapon_nightstick"):
				*uParam1 = 100;
				*uParam2 = 100;
				break;
			
			case joaat("weapon_stungun"):
				*uParam1 = 100;
				*uParam2 = 50;
				break;
			
			case joaat("weapon_appistol"):
				*uParam1 = 1000;
				*uParam2 = 25;
				break;
			
			case joaat("weapon_combatpistol"):
				*uParam1 = 600;
				*uParam2 = 19;
				break;
			
			case joaat("weapon_pistol"):
				*uParam1 = 350;
				*uParam2 = 19;
				break;
			
			case joaat("weapon_smokegrenade"):
				*uParam1 = 150;
				*uParam2 = 150;
				break;
			
			case joaat("weapon_grenade"):
				*uParam1 = 150;
				*uParam2 = 150;
				break;
			
			case joaat("weapon_stickybomb"):
				*uParam1 = 400;
				*uParam2 = 400;
				break;
			
			case joaat("weapon_petrolcan"):
				*uParam1 = 25;
				*uParam2 = 25;
				break;
			
			case joaat("weapon_assaultsmg"):
				*uParam1 = 0;
				*uParam2 = 38;
				break;
			
			case joaat("weapon_bullpupshotgun"):
				*uParam1 = 1250;
				*uParam2 = 8;
				break;
			
			case joaat("weapon_pistol50"):
				*uParam1 = 4000;
				*uParam2 = 19;
				break;
			
			case joaat("weapon_hammer"):
				*uParam1 = 500;
				*uParam2 = 0;
				break;
			
			case joaat("weapon_specialcarbine"):
				*uParam1 = 14750;
				*uParam2 = 108;
				break;
			
			case joaat("weapon_bullpuprifle"):
				*uParam1 = 14500;
				*uParam2 = 108;
				break;
			
			case joaat("weapon_railgun"):
				*uParam1 = 250000;
				*uParam2 = 100;
				break;
			
			case joaat("weapon_hatchet"):
				*uParam1 = 750;
				*uParam2 = 0;
				break;
			
			case joaat("weapon_hominglauncher"):
				*uParam1 = 15500;
				*uParam2 = 400;
				break;
			
			case joaat("weapon_proxmine"):
				*uParam1 = 750;
				*uParam2 = 750;
				break;
			
			case joaat("weapon_combatpdw"):
				*uParam1 = 11750;
				*uParam2 = 113;
				break;
			
			default:
				if (func_55(iParam0, &Var0) != -1)
				{
					*uParam1 = Var0.f_3;
					*uParam2 = Var0.f_4;
				}
				break;
		}
		if ((iParam0 == joaat("weapon_bullpupshotgun") || iParam0 == joaat("weapon_pistol50")) || iParam0 == joaat("weapon_hammer"))
		{
			if (func_59() && (func_160() || func_159()))
			{
				*uParam1 = 0;
			}
		}
		iVar1 = *uParam2;
		switch (iParam0)
		{
			case joaat("weapon_appistol"):
				iVar1 = 25;
				break;
			
			case joaat("weapon_snspistol"):
				iVar1 = 10;
				break;
			
			case joaat("weapon_heavypistol"):
				iVar1 = 100;
				break;
			
			case joaat("weapon_vintagepistol"):
				iVar1 = 10;
				break;
			
			case joaat("weapon_microsmg"):
				iVar1 = 20;
				break;
			
			case joaat("weapon_specialcarbine"):
				iVar1 = 108;
				break;
			
			case joaat("weapon_bullpuprifle"):
				iVar1 = 108;
				break;
			
			case joaat("weapon_mg"):
				iVar1 = 50;
				break;
			
			case joaat("weapon_gusenberg"):
				iVar1 = 108;
				break;
			
			case joaat("weapon_heavyshotgun"):
				iVar1 = 18;
				break;
			
			case joaat("weapon_musket"):
				iVar1 = 15;
				break;
			
			case joaat("weapon_heavysniper"):
				iVar1 = 29;
				break;
			
			case joaat("weapon_marksmanrifle"):
				iVar1 = 87;
				break;
		}
		if (*uParam2 != iVar1)
		{
			*uParam2 = iVar1;
		}
	}
	else
	{
		iVar2 = -1;
		switch (iParam0)
		{
			case joaat("weapon_unarmed"):
				if (iParam4 == 0)
				{
					*uParam1 = 100;
					*uParam2 = 100;
				}
				else if (iParam4 == 1)
				{
					*uParam1 = 200;
					*uParam2 = 200;
				}
				else if (iParam4 == 2)
				{
					*uParam1 = 300;
					*uParam2 = 300;
				}
				else if (iParam4 == 3)
				{
					*uParam1 = 400;
					*uParam2 = 400;
				}
				else if (iParam4 == 4)
				{
					*uParam1 = 500;
					*uParam2 = 500;
				}
				if (iParam4 == 0)
				{
					*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * Global_40001.f_AE5));
					*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * Global_40001.f_AE5));
				}
				else if (iParam4 == 1)
				{
					*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * Global_40001.f_AE6));
					*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * Global_40001.f_AE6));
				}
				else if (iParam4 == 2)
				{
					*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * Global_40001.f_AE7));
					*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * Global_40001.f_AE7));
				}
				else if (iParam4 == 3)
				{
					*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * Global_40001.f_AE8));
					*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * Global_40001.f_AE8));
				}
				else if (iParam4 == 4)
				{
					*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * Global_40001.f_AE9));
					*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * Global_40001.f_AE9));
				}
				iVar2 = 15;
				break;
			
			case joaat("gadget_parachute"):
				*uParam1 = 500;
				*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * Global_40001.f_A4A));
				*uParam2 = 500;
				*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * Global_40001.f_A4A));
				iVar2 = 99;
				break;
			
			case joaat("weapon_microsmg"):
				if (Global_40001.f_910 == -1)
				{
					*uParam1 = 3750;
				}
				else
				{
					*uParam1 = Global_40001.f_910;
				}
				if (Global_40001.f_92D == -1)
				{
					*uParam2 = 60;
				}
				else
				{
					*uParam2 = Global_40001.f_92D;
				}
				iVar2 = 1;
				break;
			
			case joaat("weapon_smg"):
				if (Global_40001.f_911 == -1)
				{
					*uParam1 = 7500;
				}
				else
				{
					*uParam1 = Global_40001.f_911;
				}
				if (Global_40001.f_92E == -1)
				{
					*uParam2 = 113;
				}
				else
				{
					*uParam2 = Global_40001.f_92E;
				}
				iVar2 = 1;
				break;
			
			case joaat("weapon_sawnoffshotgun"):
				if (Global_40001.f_91B == -1)
				{
					*uParam1 = 0;
				}
				else
				{
					*uParam1 = Global_40001.f_91B;
				}
				if (Global_40001.f_938 == -1)
				{
					*uParam2 = 24;
				}
				else
				{
					*uParam2 = Global_40001.f_938;
				}
				iVar2 = 2;
				break;
			
			case joaat("weapon_pumpshotgun"):
				if (Global_40001.f_91A == -1)
				{
					*uParam1 = 3500;
				}
				else
				{
					*uParam1 = Global_40001.f_91A;
				}
				if (Global_40001.f_937 == -1)
				{
					*uParam2 = 24;
				}
				else
				{
					*uParam2 = Global_40001.f_937;
				}
				iVar2 = 2;
				break;
			
			case joaat("weapon_assaultshotgun"):
				if (Global_40001.f_91D == -1)
				{
					*uParam1 = 10000;
				}
				else
				{
					*uParam1 = Global_40001.f_91D;
				}
				if (Global_40001.f_93A == -1)
				{
					*uParam2 = 24;
				}
				else
				{
					*uParam2 = Global_40001.f_93A;
				}
				iVar2 = 2;
				break;
			
			case joaat("weapon_assaultrifle"):
				if (Global_40001.f_913 == -1)
				{
					*uParam1 = 8550;
				}
				else
				{
					*uParam1 = Global_40001.f_913;
				}
				if (Global_40001.f_930 == -1)
				{
					*uParam2 = 108;
				}
				else
				{
					*uParam2 = Global_40001.f_930;
				}
				iVar2 = 3;
				break;
			
			case joaat("weapon_carbinerifle"):
				if (Global_40001.f_914 == -1)
				{
					*uParam1 = 13000;
				}
				else
				{
					*uParam1 = Global_40001.f_914;
				}
				if (Global_40001.f_931 == -1)
				{
					*uParam2 = 108;
				}
				else
				{
					*uParam2 = Global_40001.f_931;
				}
				iVar2 = 3;
				break;
			
			case joaat("weapon_advancedrifle"):
				if (Global_40001.f_916 == -1)
				{
					*uParam1 = 14250;
				}
				else
				{
					*uParam1 = Global_40001.f_916;
				}
				if (Global_40001.f_933 == -1)
				{
					*uParam2 = 108;
				}
				else
				{
					*uParam2 = Global_40001.f_933;
				}
				iVar2 = 3;
				break;
			
			case joaat("weapon_sniperrifle"):
				if (Global_40001.f_920 == -1)
				{
					*uParam1 = 20000;
				}
				else
				{
					*uParam1 = Global_40001.f_920;
				}
				if (Global_40001.f_93D == -1)
				{
					*uParam2 = 145;
				}
				else
				{
					*uParam2 = Global_40001.f_93D;
				}
				iVar2 = 4;
				break;
			
			case joaat("weapon_heavysniper"):
				if (Global_40001.f_91E == -1)
				{
					*uParam1 = 38150;
				}
				else
				{
					*uParam1 = Global_40001.f_91E;
				}
				if (Global_40001.f_93B == -1)
				{
					*uParam2 = 87;
				}
				else
				{
					*uParam2 = Global_40001.f_93B;
				}
				iVar2 = 4;
				break;
			
			case joaat("weapon_mg"):
				if (Global_40001.f_917 == -1)
				{
					*uParam1 = 13500;
				}
				else
				{
					*uParam1 = Global_40001.f_917;
				}
				if (Global_40001.f_934 == -1)
				{
					*uParam2 = 150;
				}
				else
				{
					*uParam2 = Global_40001.f_934;
				}
				iVar2 = 5;
				break;
			
			case joaat("weapon_combatmg"):
				if (Global_40001.f_918 == -1)
				{
					*uParam1 = 14800;
				}
				else
				{
					*uParam1 = Global_40001.f_918;
				}
				if (Global_40001.f_935 == -1)
				{
					*uParam2 = 277;
				}
				else
				{
					*uParam2 = Global_40001.f_935;
				}
				iVar2 = 5;
				break;
			
			case joaat("weapon_rpg"):
				if (Global_40001.f_923 == -1)
				{
					*uParam1 = 26250;
				}
				else
				{
					*uParam1 = Global_40001.f_923;
				}
				if (Global_40001.f_940 == -1)
				{
					*uParam2 = 1000;
				}
				else
				{
					*uParam2 = Global_40001.f_940;
				}
				iVar2 = 6;
				break;
			
			case joaat("weapon_grenadelauncher"):
				if (Global_40001.f_922 == -1)
				{
					*uParam1 = 32400;
				}
				else
				{
					*uParam1 = Global_40001.f_922;
				}
				if (Global_40001.f_93F == -1)
				{
					*uParam2 = 5000;
				}
				else
				{
					*uParam2 = Global_40001.f_93F;
				}
				iVar2 = 6;
				break;
			
			case joaat("weapon_minigun"):
				if (Global_40001.f_924 == -1)
				{
					*uParam1 = 50000;
				}
				else
				{
					*uParam1 = Global_40001.f_924;
				}
				if (Global_40001.f_941 == -1)
				{
					*uParam2 = 150;
				}
				else
				{
					*uParam2 = Global_40001.f_941;
				}
				iVar2 = 6;
				break;
			
			case joaat("weapon_knife"):
				if (Global_40001.f_945 == -1)
				{
					*uParam1 = 400;
				}
				else
				{
					*uParam1 = Global_40001.f_945;
				}
				if (Global_40001.f_94A == -1)
				{
					*uParam2 = 100;
				}
				else
				{
					*uParam2 = Global_40001.f_94A;
				}
				iVar2 = 7;
				break;
			
			case joaat("weapon_nightstick"):
				if (Global_40001.f_946 == -1)
				{
					*uParam1 = 400;
				}
				else
				{
					*uParam1 = Global_40001.f_946;
				}
				if (Global_40001.f_94B == -1)
				{
					*uParam2 = 100;
				}
				else
				{
					*uParam2 = Global_40001.f_94B;
				}
				iVar2 = 7;
				break;
			
			case joaat("weapon_dagger"):
				if (Global_40001.f_15A4 == -1)
				{
					*uParam1 = 400;
				}
				else
				{
					*uParam1 = Global_40001.f_15A4;
				}
				if (Global_40001.f_15A6 == -1)
				{
					*uParam2 = 85;
				}
				else
				{
					*uParam2 = Global_40001.f_15A6;
				}
				iVar2 = 7;
				break;
			
			case joaat("weapon_stungun"):
				*uParam1 = 100;
				*uParam2 = 50;
				break;
			
			case joaat("weapon_appistol"):
				if (Global_40001.f_90F == -1)
				{
					*uParam1 = 5000;
				}
				else
				{
					*uParam1 = Global_40001.f_90F;
				}
				if (Global_40001.f_92C == -1)
				{
					*uParam2 = 85;
				}
				else
				{
					*uParam2 = Global_40001.f_92C;
				}
				iVar2 = 8;
				break;
			
			case joaat("weapon_combatpistol"):
				if (Global_40001.f_90D == -1)
				{
					*uParam1 = 3200;
				}
				else
				{
					*uParam1 = Global_40001.f_90D;
				}
				if (Global_40001.f_92A == -1)
				{
					*uParam2 = 57;
				}
				else
				{
					*uParam2 = Global_40001.f_92A;
				}
				iVar2 = 8;
				break;
			
			case joaat("weapon_pistol"):
				if (Global_40001.f_90C == -1)
				{
					*uParam1 = 2500;
				}
				else
				{
					*uParam1 = Global_40001.f_90C;
				}
				if (Global_40001.f_929 == -1)
				{
					*uParam2 = 57;
				}
				else
				{
					*uParam2 = Global_40001.f_929;
				}
				iVar2 = 8;
				break;
			
			case joaat("weapon_smokegrenade"):
				if (Global_40001.f_925 == -1)
				{
					*uParam1 = 150;
				}
				else
				{
					*uParam1 = Global_40001.f_925;
				}
				if (Global_40001.f_949 == -1)
				{
					*uParam2 = 150;
				}
				else
				{
					*uParam2 = Global_40001.f_949;
				}
				iVar2 = 9;
				break;
			
			case joaat("weapon_grenade"):
				if (Global_40001.f_943 == -1)
				{
					*uParam1 = 250;
				}
				else
				{
					*uParam1 = Global_40001.f_943;
				}
				if (Global_40001.f_948 == -1)
				{
					*uParam2 = 250;
				}
				else
				{
					*uParam2 = Global_40001.f_948;
				}
				iVar2 = 9;
				break;
			
			case joaat("weapon_stickybomb"):
				if (Global_40001.f_942 == -1)
				{
					*uParam1 = 600;
				}
				else
				{
					*uParam1 = Global_40001.f_942;
				}
				if (Global_40001.f_947 == -1)
				{
					*uParam2 = 600;
				}
				else
				{
					*uParam2 = Global_40001.f_947;
				}
				iVar2 = 9;
				break;
			
			case joaat("weapon_petrolcan"):
				if (Global_40001.f_926 == -1)
				{
					*uParam1 = 100;
				}
				else
				{
					*uParam1 = Global_40001.f_926;
				}
				*uParam2 = 100;
				iVar2 = 10;
				break;
			
			case joaat("weapon_assaultsmg"):
				if (Global_40001.f_912 == -1)
				{
					*uParam1 = 12550;
				}
				else
				{
					*uParam1 = Global_40001.f_912;
				}
				if (Global_40001.f_92F == -1)
				{
					*uParam2 = 113;
				}
				else
				{
					*uParam2 = Global_40001.f_92F;
				}
				iVar2 = 1;
				break;
			
			case joaat("weapon_bullpupshotgun"):
				if (Global_40001.f_91C == -1)
				{
					*uParam1 = 8000;
				}
				else
				{
					*uParam1 = Global_40001.f_91C;
				}
				if (Global_40001.f_939 == -1)
				{
					*uParam2 = 24;
				}
				else
				{
					*uParam2 = Global_40001.f_939;
				}
				if (func_59() && (func_159() || func_160()))
				{
					*uParam1 = 0;
				}
				iVar2 = 2;
				break;
			
			case joaat("weapon_pistol50"):
				if (Global_40001.f_90E == -1)
				{
					*uParam1 = 3900;
				}
				else
				{
					*uParam1 = Global_40001.f_90E;
				}
				if (Global_40001.f_92B == -1)
				{
					*uParam2 = 57;
				}
				else
				{
					*uParam2 = Global_40001.f_92B;
				}
				if (func_59() && (func_159() || func_160()))
				{
					*uParam1 = 0;
				}
				iVar2 = 8;
				break;
			
			case joaat("weapon_hammer"):
				if (Global_40001.f_928 == -1)
				{
					*uParam1 = 500;
				}
				else
				{
					*uParam1 = Global_40001.f_928;
				}
				*uParam2 = 0;
				if (func_59() && (func_159() || func_160()))
				{
					*uParam1 = 0;
				}
				iVar2 = 7;
				break;
			
			case joaat("weapon_snspistol"):
				*uParam1 = Global_40001.f_159F;
				*uParam2 = Global_40001.f_159A;
				iVar2 = 8;
				break;
			
			case joaat("weapon_bottle"):
				*uParam1 = Global_40001.f_159E;
				*uParam2 = 0;
				iVar2 = 7;
				break;
			
			case joaat("weapon_gusenberg"):
				*uParam1 = Global_40001.f_1346;
				*uParam2 = Global_40001.f_134C;
				iVar2 = 3;
				break;
			
			case joaat("weapon_heavypistol"):
				*uParam1 = Global_40001.f_15A0;
				*uParam2 = Global_40001.f_159C;
				iVar2 = 8;
				break;
			
			case joaat("weapon_specialcarbine"):
				*uParam1 = Global_40001.f_15A1;
				*uParam2 = Global_40001.f_159B;
				iVar2 = 3;
				break;
			
			case joaat("weapon_bullpuprifle"):
				*uParam1 = Global_40001.f_15A2;
				*uParam2 = Global_40001.f_159D;
				iVar2 = 3;
				break;
			
			case joaat("weapon_vintagepistol"):
				*uParam1 = Global_40001.f_15A3;
				*uParam2 = Global_40001.f_15A5;
				iVar2 = 8;
				break;
			
			case joaat("weapon_musket"):
				*uParam1 = Global_40001.f_17FB;
				*uParam2 = Global_40001.f_17FC;
				iVar2 = 4;
				break;
			
			case joaat("weapon_firework"):
				*uParam1 = Global_40001.f_17FD;
				*uParam2 = Global_40001.f_17FE;
				iVar2 = 6;
				break;
			
			case joaat("weapon_heavyshotgun"):
				*uParam1 = Global_40001.f_19F8;
				*uParam2 = Global_40001.f_19FD;
				iVar2 = 2;
				break;
			
			case joaat("weapon_marksmanrifle"):
				*uParam1 = Global_40001.f_19FE;
				*uParam2 = Global_40001.f_1A05;
				iVar2 = 4;
				break;
			
			case joaat("weapon_hatchet"):
				*uParam1 = Global_40001.f_1B37;
				*uParam2 = 0;
				iVar2 = 7;
				break;
			
			case joaat("weapon_flaregun"):
				*uParam1 = Global_40001.f_1AF2;
				*uParam2 = Global_40001.f_1AF3;
				iVar2 = 6;
				break;
			
			case joaat("weapon_proxmine"):
				*uParam1 = Global_40001.f_1C0E;
				*uParam2 = Global_40001.f_1C0E;
				iVar2 = 9;
				break;
			
			case joaat("weapon_knuckle"):
				*uParam1 = Global_40001.f_1AF4;
				*uParam2 = Global_40001.f_1AF5;
				iVar2 = 7;
				break;
			
			case joaat("weapon_marksmanpistol"):
				*uParam1 = Global_40001.f_1AF6;
				*uParam2 = Global_40001.f_1AF7;
				iVar2 = 8;
				break;
			
			case joaat("weapon_combatpdw"):
				*uParam1 = Global_40001.f_2051;
				*uParam2 = Global_40001.f_2052;
				iVar2 = 1;
				break;
			
			case joaat("weapon_hominglauncher"):
				*uParam1 = Global_40001.f_1AF8;
				*uParam2 = Global_40001.f_1AF9;
				iVar2 = 6;
				break;
			
			default:
				if (func_55(iParam0, &Var3) != -1)
				{
					*uParam1 = Var3.f_3;
					*uParam2 = Var3.f_4;
				}
				break;
		}
		switch (iVar2)
		{
			case 0:
				break;
			
			case 1:
				*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * Global_42055.f_2));
				*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * Global_42055.f_2));
				break;
			
			case 2:
				*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * Global_42055.f_2));
				*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * Global_42055.f_2));
				break;
			
			case 3:
				*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * Global_42055.f_2));
				*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * Global_42055.f_2));
				break;
			
			case 4:
				*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * Global_42055.f_2));
				*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * Global_42055.f_2));
				break;
			
			case 5:
				*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * Global_42055.f_2));
				*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * Global_42055.f_2));
				break;
			
			case 6:
				*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * Global_42055.f_2));
				*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * Global_42055.f_2));
				break;
			
			case 7:
				*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * Global_42055.f_6));
				*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * Global_42055.f_6));
				break;
			
			case 8:
				*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * Global_42055.f_4));
				*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * Global_42055.f_4));
				break;
			
			case 9:
				*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * Global_42055.f_2));
				*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * Global_42055.f_2));
				break;
			
			case 10:
				*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * Global_42055.f_2));
				*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * Global_42055.f_2));
				break;
			
			case 11:
				break;
			
			case 12:
				break;
			
			case 13:
				break;
			
			case 14:
				break;
			
			case 15:
				*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * Global_42055));
				*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * Global_42055));
				break;
			
			case 99:
				*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * Global_42055.f_7));
				*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * Global_42055.f_7));
				break;
			}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_157())
	{
		StringCopy(&Var5, func_155(iParam0, 0), 16);
		iVar7 = 0;
		if (iParam0 == joaat("weapon_petrolcan"))
		{
			iVar6 = 5;
		}
		else if (iParam0 == joaat("gadget_parachute"))
		{
			iVar6 = 4;
		}
		else if (iParam0 == joaat("weapon_unarmed"))
		{
			iVar6 = 3;
		}
		else if (((((iParam0 == joaat("weapon_bottle") || iParam0 == joaat("weapon_dagger")) || iParam0 == joaat("weapon_hammer")) || iParam0 == joaat("weapon_hatchet")) || iParam0 == joaat("weapon_knife")) || iParam0 == joaat("weapon_nightstick"))
		{
			iVar6 = 1;
		}
		else if (((iParam0 == joaat("weapon_grenade") || iParam0 == joaat("weapon_smokegrenade")) || iParam0 == joaat("weapon_stickybomb")) || iParam0 == joaat("weapon_proxmine"))
		{
			iVar6 = 2;
			iVar7 = 1;
		}
		else
		{
			iVar6 = 0;
		}
		func_154(&sVar4, Var5, ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 3, iVar6, iVar7, -1, -1);
		if (NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS(&sVar4))
		{
			*uParam1 = NETSHOPPING::NET_GAMESERVER_GET_PRICE(MISC::GET_HASH_KEY(&sVar4), -1829708865, 1);
		}
		if (func_153(iParam0, &iVar8))
		{
			func_152(iVar8, 2, &Var5, 0);
			func_154(&sVar4, Var5, ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 3, 0, func_150(iParam0), -1, -1);
			if (NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS(&sVar4))
			{
				*uParam2 = NETSHOPPING::NET_GAMESERVER_GET_PRICE(MISC::GET_HASH_KEY(&sVar4), 1067618600, 1);
				switch (iParam0)
				{
					case joaat("weapon_rpg"):
					case joaat("weapon_grenadelauncher"):
					case joaat("weapon_hominglauncher"):
					case joaat("weapon_firework"):
						*uParam3 = 1;
						break;
					}
				}
			}
	}
	fVar9 = func_94(iParam0, uParam1, uParam2);
	if (fVar9 != 1f)
	{
	}
	return *uParam1 != 0;
}

float func_94(int iParam0, int iParam1, int iParam2)//Position - 0xBE08
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar1 = 0f;
	fVar2 = 0f;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_157())
	{
		return 1f;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = func_144(iParam0);
		if (iVar0 == 3)
		{
			fVar2 = (fVar2 + 0.05f);
		}
		else if (iVar0 == 2)
		{
			fVar2 = (fVar2 + 0.1f);
		}
		else if (iVar0 == 1)
		{
			fVar2 = (fVar2 + 0.15f);
		}
		if (fVar3 >= 100f)
		{
			fVar2 = (fVar2 + 0.1f);
		}
		else if (fVar3 >= 80f)
		{
			fVar2 = (fVar2 + 0.08f);
		}
		else if (fVar3 >= 60f)
		{
			fVar2 = (fVar2 + 0.06f);
		}
		else if (fVar3 >= 40f)
		{
			fVar2 = (fVar2 + 0.04f);
		}
		else if (fVar3 >= 20f)
		{
			fVar2 = (fVar2 + 0.02f);
		}
		fVar2 = (fVar2 + func_143(iParam0));
		fVar2 = (fVar2 + func_142());
		fVar2 = (fVar2 + func_127());
		if (iLocal_49 == 1)
		{
			fVar2 = (fVar2 + (SYSTEM::TO_FLOAT(Global_40001.f_68) / 100f));
		}
		if (iLocal_49 == 0)
		{
			if (func_95())
			{
				fVar2 = (fVar2 + (SYSTEM::TO_FLOAT(Global_40001.f_68) / 100f));
				iLocal_49 = 1;
			}
			else
			{
				iLocal_49 = -1;
			}
		}
		fVar1 = (1f - fVar2);
		*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * fVar1));
		*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * Global_40001.f_3E));
		*iParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam2) * Global_40001.f_3E));
		return fVar1;
	}
	iVar0 = func_144(iParam0);
	if (iVar0 == 3)
	{
		fVar2 = (fVar2 + 0.1f);
	}
	else if (iVar0 == 2)
	{
		fVar2 = (fVar2 + 0.15f);
	}
	else if (iVar0 == 1)
	{
		fVar2 = (fVar2 + 0.25f);
	}
	fVar1 = (1f - fVar2);
	*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * fVar1));
	*iParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam2) * fVar1));
	return fVar1;
}

int func_95()//Position - 0xBFF8
{
	int iVar0;
	var uVar1;
	float fVar2;
	
	if (MISC::IS_PC_VERSION())
	{
		return 0;
	}
	if (func_124())
	{
		if (func_99())
		{
			iVar0 = func_97();
			uVar1 = func_96();
			fVar2 = ((SYSTEM::TO_FLOAT(uVar1) / SYSTEM::TO_FLOAT(iVar0)) * 100f);
			if (fVar2 > IntToFloat(Global_40001.f_67) && iVar0 >= 8)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_96()//Position - 0xC059
{
	int iVar0;
	
	iVar0 = (iVar0 + Global_1460C8);
	iVar0 = (iVar0 + Global_1460CB);
	return iVar0;
}

int func_97()//Position - 0xC075
{
	int iVar0;
	
	iVar0 = (iVar0 + Global_1460C9);
	iVar0 = (iVar0 + Global_1460CA);
	iVar0 = (iVar0 + Global_1460C8);
	iVar0 = (iVar0 + Global_1460CB);
	iVar0 = (iVar0 + Global_1460CD);
	iVar0 = (iVar0 + Global_1460CC);
	iVar0 = (iVar0 + func_98(joaat("mpply_exploits")));
	iVar0 = (iVar0 + func_98(joaat("mpply_vc_annoyingme")));
	iVar0 = (iVar0 + func_98(joaat("mpply_vc_hate")));
	iVar0 = (iVar0 + func_98(joaat("mpply_bad_crew_name")));
	iVar0 = (iVar0 + func_98(joaat("mpply_bad_crew_motto")));
	iVar0 = (iVar0 + func_98(joaat("mpply_bad_crew_status")));
	iVar0 = (iVar0 + func_98(joaat("mpply_bad_crew_emblem")));
	iVar0 = (iVar0 + func_98(joaat("mpply_playermade_title")));
	iVar0 = (iVar0 + func_98(joaat("mpply_playermade_desc")));
	return iVar0;
}

int func_98(int iParam0)//Position - 0xC133
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

int func_99()//Position - 0xC151
{
	struct<7> Var0;
	struct<7> Var1;
	
	CLOCK::GET_POSIX_TIME(&Var0, &(Var0.f_1), &(Var0.f_2), &(Var0.f_3), &(Var0.f_4), &(Var0.f_5));
	Var1 = { func_123(joaat("mpply_started_mp")) };
	if (func_100(Var1, Var0, 7))
	{
		return 1;
	}
	return 0;
}

int func_100(struct<7> Param0, struct<7> Param1, int iParam2)//Position - 0xC195
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_121(Param1);
	iVar1 = func_111(Param0, iParam2);
	if (iVar1 == -15)
	{
		return 0;
	}
	if (func_101(iVar0, iVar1) == 1)
	{
		return 1;
	}
	return 0;
}

int func_101(int iParam0, int iParam1)//Position - 0xC1D0
{
	int iVar0;
	int iVar1;
	
	if (!func_109(iParam1) || !func_109(iParam0))
	{
		return 1;
	}
	iVar0 = func_107(iParam0);
	iVar1 = func_107(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_106(iParam0);
	iVar1 = func_106(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_105(iParam0);
	iVar1 = func_105(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_104(iParam0);
	iVar1 = func_104(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_103(iParam0);
	iVar1 = func_103(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_102(iParam0);
	iVar1 = func_102(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_102(int iParam0)//Position - 0xC2DC
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_103(int iParam0)//Position - 0xC2EF
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_104(int iParam0)//Position - 0xC302
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_105(int iParam0)//Position - 0xC315
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_106(int iParam0)//Position - 0xC327
{
	return iParam0 & 15;
}

var func_107(int iParam0)//Position - 0xC334
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_108(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_108(bool bParam0, int iParam1, int iParam2)//Position - 0xC359
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_109(int iParam0)//Position - 0xC370
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
	iVar0 = func_102(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_103(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_104(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_107(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_106(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_105(iParam0);
	if (iVar5 < 1 || iVar5 > func_110(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_110(int iParam0, int iParam1)//Position - 0xC44C
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

var func_111(struct<7> Param0, int iParam1)//Position - 0xC4EE
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	if (func_120(Param0) == 0)
	{
		uVar0 = func_121(Param0);
		uVar1 = uVar0;
		func_112(&uVar1, 0, 0, 0, iParam1, 0, 0);
		if (iParam1 == 0)
		{
			uVar1 = uVar0;
		}
		return uVar1;
	}
	return uVar2;
}

void func_112(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xC52E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_107(*uParam0);
	iVar1 = func_106(*uParam0);
	iVar2 = func_105(*uParam0);
	iVar3 = func_104(*uParam0);
	iVar4 = func_103(*uParam0);
	iVar5 = func_102(*uParam0);
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
	iVar6 = func_110(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_110(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_113(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_113(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xC6B0
{
	func_119(uParam0, iParam1);
	func_118(uParam0, iParam2);
	func_117(uParam0, iParam3);
	func_116(uParam0, iParam4);
	func_115(uParam0, iParam5);
	func_114(uParam0, iParam6);
}

void func_114(var uParam0, int iParam1)//Position - 0xC6E8
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

void func_115(var uParam0, int iParam1)//Position - 0xC76E
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_116(var uParam0, int iParam1)//Position - 0xC7A1
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_106(*uParam0);
	iVar1 = func_107(*uParam0);
	if (iParam1 < 1 || iParam1 > func_110(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_117(var uParam0, int iParam1)//Position - 0xC7F2
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_118(var uParam0, int iParam1)//Position - 0xC82C
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_119(var uParam0, int iParam1)//Position - 0xC867
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_120(struct<7> Param0)//Position - 0xC8A3
{
	if ((((((Param0 == 0 && Param0.f_1 == 0) && Param0.f_2 == 0) && Param0.f_3 == 0) && Param0.f_4 == 0) && Param0.f_5 == 0) && Param0.f_6 == 0)
	{
		return 1;
	}
	return 0;
}

var func_121(struct<6> Param0, var uParam1)//Position - 0xC8F9
{
	var uVar0;
	
	if (Param0 > 0)
	{
		func_114(&uVar0, Param0);
	}
	if (Param0.f_1 > 0)
	{
		func_115(&uVar0, func_122(Param0.f_1));
	}
	if (Param0.f_2 > 0)
	{
		func_116(&uVar0, Param0.f_2);
	}
	if (Param0.f_3 > 0)
	{
		func_117(&uVar0, Param0.f_3);
	}
	if (Param0.f_4 > 0)
	{
		func_118(&uVar0, Param0.f_4);
	}
	if (Param0.f_5 > 0)
	{
		func_119(&uVar0, Param0.f_5);
	}
	return uVar0;
}

int func_122(int iParam0)//Position - 0xC96F
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

struct<7> func_123(int iParam0)//Position - 0xCA34
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

int func_124()//Position - 0xCA58
{
	if (func_126() && func_125(0))
	{
		return 1;
	}
	return 0;
}

var func_125(int iParam0)//Position - 0xCA76
{
	return Global_140671[iParam0];
}

var func_126()//Position - 0xCA86
{
	return func_125(func_20() + 1);
}

float func_127()//Position - 0xCA98
{
	if (func_139(12))
	{
		return 0.04f;
	}
	else if (func_136(12))
	{
		return 0.03f;
	}
	else if (func_133(12))
	{
		return 0.02f;
	}
	else if (func_128(12))
	{
		return 0.01f;
	}
	return 0f;
}

bool func_128(int iParam0)//Position - 0xCAEE
{
	var uVar0;
	int iVar1;
	
	uVar0 = func_130(iParam0);
	iVar1 = iParam0;
	return MISC::IS_BIT_SET(uVar0, func_129(iVar1));
}

int func_129(int iParam0)//Position - 0xCB0E
{
	return (iParam0 % 32);
}

int func_130(var uParam0)//Position - 0xCB1B
{
	switch (func_131(uParam0))
	{
		case 775:
			return Global_1460FF[func_19(-1)];
		
		case 776:
			return Global_146105[func_19(-1)];
		
		case 777:
			return Global_14610B[func_19(-1)];
		
		case 778:
			return Global_14610B[func_19(-1)];
		
		default:
	}
	return 0;
}

int func_131(var uParam0)//Position - 0xCB7F
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_132(iVar0);
	switch (iVar1)
	{
		case 0:
			return 775;
			break;
		
		case 1:
			return 776;
			break;
		
		case 2:
			return 777;
			break;
		
		case 3:
			return 778;
			break;
	}
	return 2903;
}

int func_132(int iParam0)//Position - 0xCBD9
{
	return (iParam0 / 32);
}

bool func_133(int iParam0)//Position - 0xCBE6
{
	var uVar0;
	int iVar1;
	
	uVar0 = func_134(iParam0);
	iVar1 = iParam0;
	return MISC::IS_BIT_SET(uVar0, func_129(iVar1));
}

int func_134(var uParam0)//Position - 0xCC06
{
	switch (func_135(uParam0))
	{
		case 765:
			return Global_1460E7[func_19(-1)];
		
		case 766:
			return Global_1460ED[func_19(-1)];
		
		case 767:
			return Global_1460F3[func_19(-1)];
		
		case 768:
			return Global_1460F3[func_19(-1)];
		
		default:
	}
	return 0;
}

int func_135(var uParam0)//Position - 0xCC6A
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_132(iVar0);
	switch (iVar1)
	{
		case 0:
			return 765;
			break;
		
		case 1:
			return 766;
			break;
		
		case 2:
			return 767;
			break;
		
		case 3:
			return 768;
			break;
	}
	return 2903;
}

bool func_136(int iParam0)//Position - 0xCCC4
{
	var uVar0;
	int iVar1;
	
	uVar0 = func_137(iParam0);
	iVar1 = iParam0;
	return MISC::IS_BIT_SET(uVar0, func_129(iVar1));
}

int func_137(var uParam0)//Position - 0xCCE4
{
	switch (func_138(uParam0))
	{
		case 755:
			return Global_1460CF[func_19(-1)];
		
		case 756:
			return Global_1460D5[func_19(-1)];
		
		case 757:
			return Global_1460DB[func_19(-1)];
		
		case 758:
			return Global_1460DB[func_19(-1)];
		
		default:
	}
	return 0;
}

int func_138(var uParam0)//Position - 0xCD48
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_132(iVar0);
	switch (iVar1)
	{
		case 0:
			return 755;
			break;
		
		case 1:
			return 756;
			break;
		
		case 2:
			return 757;
			break;
		
		case 3:
			return 758;
			break;
	}
	return 2903;
}

bool func_139(int iParam0)//Position - 0xCDA2
{
	var uVar0;
	int iVar1;
	
	uVar0 = func_140(iParam0);
	iVar1 = iParam0;
	return MISC::IS_BIT_SET(uVar0, func_129(iVar1));
}

int func_140(var uParam0)//Position - 0xCDC2
{
	switch (func_141(uParam0))
	{
		case 745:
			return Global_146117[func_19(-1)];
		
		case 746:
			return Global_14611D[func_19(-1)];
		
		case 747:
			return Global_146123[func_19(-1)];
		
		case 748:
			return Global_146123[func_19(-1)];
		
		default:
	}
	return 0;
}

int func_141(var uParam0)//Position - 0xCE26
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_132(iVar0);
	switch (iVar1)
	{
		case 0:
			return 745;
			break;
		
		case 1:
			return 746;
			break;
		
		case 2:
			return 747;
			break;
		
		case 3:
			return 748;
			break;
	}
	return 2903;
}

float func_142()//Position - 0xCE80
{
	if (func_139(9))
	{
		return 0.04f;
	}
	else if (func_136(9))
	{
		return 0.03f;
	}
	else if (func_133(9))
	{
		return 0.02f;
	}
	else if (func_128(9))
	{
		return 0.01f;
	}
	return 0f;
}

float func_143(int iParam0)//Position - 0xCED6
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0f;
	}
	iVar0 = 12;
	switch (iParam0)
	{
		case joaat("weapon_microsmg"):
			iVar0 = 5;
			break;
		
		case joaat("weapon_smg"):
			iVar0 = 5;
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			iVar0 = 4;
			break;
		
		case joaat("weapon_pumpshotgun"):
			iVar0 = 4;
			break;
		
		case joaat("weapon_assaultshotgun"):
			iVar0 = 4;
			break;
		
		case joaat("weapon_assaultrifle"):
			iVar0 = 25;
			break;
		
		case joaat("weapon_carbinerifle"):
			iVar0 = 25;
			break;
		
		case joaat("weapon_advancedrifle"):
			iVar0 = 25;
			break;
		
		case joaat("weapon_sniperrifle"):
			iVar0 = 2;
			break;
		
		case joaat("weapon_heavysniper"):
			iVar0 = 2;
			break;
		
		case joaat("weapon_mg"):
			iVar0 = 26;
			break;
		
		case joaat("weapon_combatmg"):
			iVar0 = 26;
			break;
		
		case joaat("weapon_rpg"):
			iVar0 = 6;
			break;
		
		case joaat("weapon_grenadelauncher"):
			iVar0 = 3;
			break;
		
		case joaat("weapon_knife"):
			iVar0 = 8;
			break;
		
		case joaat("weapon_appistol"):
			iVar0 = 1;
			break;
		
		case joaat("weapon_combatpistol"):
			iVar0 = 1;
			break;
		
		case joaat("weapon_pistol"):
			iVar0 = 1;
			break;
		
		case joaat("weapon_smokegrenade"):
			iVar0 = 3;
			break;
		
		case joaat("weapon_grenade"):
			iVar0 = 3;
			break;
		
		case joaat("weapon_stickybomb"):
			iVar0 = 7;
			break;
	}
	if (iVar0 != 12)
	{
		if (func_139(iVar0))
		{
			return 0.08f;
		}
		else if (func_136(iVar0))
		{
			return 0.06f;
		}
		else if (func_133(iVar0))
		{
			return 0.04f;
		}
		else if (func_128(iVar0))
		{
			return 0.02f;
		}
	}
	return 0f;
}

int func_144(int iParam0)//Position - 0xD04A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3[6];
	bool bVar4;
	
	iVar0 = func_147();
	if (iParam0 == 0 || !func_63(iVar0))
	{
		return -1;
	}
	iVar1 = 7;
	switch (iParam0)
	{
		case joaat("weapon_unarmed"):
			break;
		
		case joaat("gadget_parachute"):
			break;
		
		case joaat("weapon_microsmg"):
			iVar1 = 1;
			break;
		
		case joaat("weapon_smg"):
			iVar1 = 1;
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			iVar1 = 3;
			break;
		
		case joaat("weapon_pumpshotgun"):
			iVar1 = 3;
			break;
		
		case joaat("weapon_assaultshotgun"):
			iVar1 = 3;
			break;
		
		case joaat("weapon_assaultrifle"):
			iVar1 = 2;
			break;
		
		case joaat("weapon_carbinerifle"):
			iVar1 = 2;
			break;
		
		case joaat("weapon_advancedrifle"):
			iVar1 = 2;
			break;
		
		case joaat("weapon_sniperrifle"):
			break;
		
		case joaat("weapon_heavysniper"):
			break;
		
		case joaat("weapon_mg"):
			iVar1 = 4;
			break;
		
		case joaat("weapon_combatmg"):
			iVar1 = 4;
			break;
		
		case joaat("weapon_rpg"):
			break;
		
		case joaat("weapon_grenadelauncher"):
			break;
		
		case joaat("weapon_minigun"):
			iVar1 = 5;
			break;
		
		case joaat("weapon_knife"):
			break;
		
		case joaat("weapon_nightstick"):
			break;
		
		case joaat("weapon_petrolcan"):
			break;
		
		case joaat("weapon_stungun"):
			break;
		
		case joaat("weapon_appistol"):
			iVar1 = 0;
			break;
		
		case joaat("weapon_combatpistol"):
			iVar1 = 0;
			break;
		
		case joaat("weapon_pistol"):
			iVar1 = 0;
			break;
		
		case joaat("weapon_smokegrenade"):
			break;
		
		case joaat("weapon_grenade"):
			break;
		
		case joaat("weapon_stickybomb"):
			break;
	}
	if (iVar1 != 7)
	{
		switch (func_145(iVar1, iVar0))
		{
			case 1:
				return 3;
				break;
			
			case 2:
				return 2;
				break;
			
			case 3:
				return 1;
				break;
		}
	}
	else
	{
		iVar3[0] = func_145(1, iVar0);
		iVar3[1] = func_145(3, iVar0);
		iVar3[2] = func_145(2, iVar0);
		iVar3[3] = func_145(4, iVar0);
		iVar3[4] = func_145(5, iVar0);
		iVar3[5] = func_145(0, iVar0);
		bVar4 = false;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			if (iVar3[iVar2] < 3)
			{
				bVar4 = true;
			}
			iVar2++;
		}
		if (!bVar4)
		{
			return 1;
		}
		bVar4 = false;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			if (iVar3[iVar2] < 2)
			{
				bVar4 = true;
			}
			iVar2++;
		}
		if (!bVar4)
		{
			return 2;
		}
		bVar4 = false;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			if (iVar3[iVar2] < 1)
			{
				bVar4 = true;
			}
			iVar2++;
		}
		if (!bVar4)
		{
			return 3;
		}
	}
	return -1;
}

int func_145(int iParam0, int iParam1)//Position - 0xD2A6
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam0 == 0)
	{
		iVar0 = 0;
		iVar1 = 1;
		iVar2 = 2;
		iVar3 = -1;
	}
	else if (iParam0 == 1)
	{
		iVar0 = 3;
		iVar1 = 4;
		iVar2 = 5;
		iVar3 = -1;
	}
	else if (iParam0 == 2)
	{
		iVar0 = 9;
		iVar1 = 10;
		iVar2 = 11;
		iVar3 = -1;
	}
	else if (iParam0 == 3)
	{
		iVar0 = 6;
		iVar1 = 7;
		iVar2 = 8;
		iVar3 = -1;
	}
	else if (iParam0 == 4)
	{
		iVar0 = 12;
		iVar1 = 13;
		iVar2 = 14;
		iVar3 = -1;
	}
	else if (iParam0 == 5)
	{
		iVar0 = 15;
		iVar1 = 16;
		iVar2 = 17;
		iVar3 = -1;
	}
	else if (iParam0 == 6)
	{
		iVar0 = 18;
		iVar1 = 19;
		iVar2 = 20;
		iVar3 = 21;
	}
	else
	{
		return 0;
	}
	iVar4 = func_146(iVar0, iParam1);
	if (func_146(iVar1, iParam1) < iVar4)
	{
		iVar4 = func_146(iVar1, iParam1);
	}
	if (func_146(iVar2, iParam1) < iVar4)
	{
		iVar4 = func_146(iVar2, iParam1);
	}
	if (iVar3 != -1)
	{
		if (func_146(iVar3, iParam1) < iVar4)
		{
			iVar4 = func_146(iVar3, iParam1);
		}
	}
	return iVar4;
}

int func_146(int iParam0, int iParam1)//Position - 0xD3AA
{
	return Global_17C49.f_43F9[iParam1 /*271*/].f_3[iParam0 /*12*/].f_3;
}

int func_147()//Position - 0xD3C6
{
	func_148();
	return Global_17C49.f_6C1.f_21B.f_C8D;
}

void func_148()//Position - 0xD3DF
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_65(Global_17C49.f_6C1.f_21B.f_C8D) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_64(PLAYER::PLAYER_PED_ID());
			if (func_63(iVar0) && (!func_149(14) || Global_17832))
			{
				if (Global_17C49.f_6C1.f_21B.f_C8D != iVar0 && func_63(Global_17C49.f_6C1.f_21B.f_C8D))
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

bool func_149(int iParam0)//Position - 0xD4DC
{
	return Global_8861 == iParam0;
}

int func_150(int iParam0)//Position - 0xD4EA
{
	return func_151(iParam0);
}

int func_151(int iParam0)//Position - 0xD4F8
{
	switch (iParam0)
	{
		case joaat("weapon_unarmed"):
			return 0;
			break;
		
		case joaat("weapon_pistol"):
			return 1;
			break;
		
		case joaat("weapon_combatpistol"):
			return 2;
			break;
		
		case joaat("weapon_appistol"):
			return 3;
			break;
		
		case joaat("weapon_pistol50"):
			return 4;
			break;
		
		case joaat("weapon_smg"):
			return 5;
			break;
		
		case joaat("weapon_assaultsmg"):
			return 6;
			break;
		
		case joaat("weapon_microsmg"):
			return 7;
			break;
		
		case joaat("weapon_assaultrifle"):
			return 8;
			break;
		
		case joaat("weapon_carbinerifle"):
			return 9;
			break;
		
		case -947031628:
			return 10;
			break;
		
		case joaat("weapon_advancedrifle"):
			return 11;
			break;
		
		case joaat("weapon_mg"):
			return 12;
			break;
		
		case joaat("weapon_combatmg"):
			return 13;
			break;
		
		case -572349828:
			return 14;
			break;
		
		case joaat("weapon_stickybomb"):
			return 15;
			break;
		
		case joaat("weapon_grenade"):
			return 16;
			break;
		
		case joaat("weapon_smokegrenade"):
			return 17;
			break;
		
		case joaat("weapon_remotesniper"):
			return 18;
			break;
		
		case 392730790:
			return 19;
			break;
		
		case joaat("weapon_sniperrifle"):
			return 20;
			break;
		
		case joaat("weapon_heavysniper"):
			return 21;
			break;
		
		case joaat("weapon_pumpshotgun"):
			return 22;
			break;
		
		case joaat("weapon_bullpupshotgun"):
			return 23;
			break;
		
		case joaat("weapon_assaultshotgun"):
			return 24;
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			return 25;
			break;
		
		case joaat("weapon_grenadelauncher"):
			return 26;
			break;
		
		case joaat("weapon_rpg"):
			return 27;
			break;
		
		case joaat("weapon_minigun"):
			return 28;
			break;
		
		case -344484024:
			return 29;
			break;
		
		case -1887867191:
			return 30;
			break;
		
		case joaat("weapon_stungun"):
			return 31;
			break;
		
		case -837150131:
			return 32;
			break;
		
		case joaat("gadget_parachute"):
			return 33;
			break;
		
		case joaat("weapon_knife"):
			return 34;
			break;
		
		case joaat("weapon_nightstick"):
			return 35;
			break;
		
		case joaat("weapon_hammer"):
			return 36;
			break;
		
		case joaat("weapon_bat"):
			return 37;
			break;
		
		case joaat("weapon_crowbar"):
			return 38;
			break;
		
		case joaat("weapon_golfclub"):
			return 39;
			break;
		
		case joaat("weapon_grenadelauncher_smoke"):
			return 40;
			break;
		
		case joaat("weapon_molotov"):
			return 41;
			break;
		
		case joaat("weapon_fireextinguisher"):
			return 42;
			break;
		
		case joaat("weapon_petrolcan"):
			return 43;
			break;
		
		case joaat("weapon_digiscanner"):
			return 44;
			break;
		
		case joaat("weapon_bottle"):
			return 45;
			break;
		
		case joaat("weapon_specialcarbine"):
			return 46;
			break;
		
		case joaat("weapon_snspistol"):
			return 47;
			break;
		
		case joaat("weapon_heavypistol"):
			return 49;
			break;
		
		case joaat("weapon_bullpuprifle"):
			return 48;
			break;
		
		case joaat("weapon_gusenberg"):
			return 50;
			break;
		
		case joaat("weapon_dagger"):
			return 51;
			break;
		
		case joaat("weapon_vintagepistol"):
			return 52;
			break;
		
		case joaat("weapon_flaregun"):
			return 57;
			break;
		
		case joaat("weapon_musket"):
			return 53;
			break;
		
		case joaat("weapon_firework"):
			return 54;
			break;
		
		case joaat("weapon_marksmanrifle"):
			return 56;
			break;
		
		case joaat("weapon_heavyshotgun"):
			return 55;
			break;
		
		case joaat("weapon_proxmine"):
			return 60;
			break;
		
		case joaat("weapon_hominglauncher"):
			return 61;
			break;
		
		case joaat("weapon_hatchet"):
			return 58;
			break;
		
		case joaat("weapon_railgun"):
			return 59;
			break;
		
		case joaat("weapon_combatpdw"):
			return 64;
			break;
		
		case joaat("weapon_knuckle"):
			return 62;
			break;
		
		case joaat("weapon_marksmanpistol"):
			return 63;
			break;
	}
	return 0;
}

bool func_152(int iParam0, int iParam1, char* sParam2, char* sParam3)//Position - 0xD88E
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		StringCopy(sParam2, sParam3, 16);
	}
	else
	{
		StringCopy(sParam2, "GSA", 16);
	}
	if (iParam0 == joaat("AMMO_PISTOL"))
	{
		StringConCat(sParam2, "_TYPE_R", 16);
	}
	else if (iParam0 == joaat("AMMO_SMG"))
	{
		StringConCat(sParam2, "_TYPE_R", 16);
	}
	else if (iParam0 == joaat("AMMO_RIFLE"))
	{
		StringConCat(sParam2, "_TYPE_R", 16);
	}
	else if (iParam0 == joaat("AMMO_MG"))
	{
		StringConCat(sParam2, "_TYPE_R", 16);
	}
	else if (iParam0 == -1866678455)
	{
		StringConCat(sParam2, "_TYPE_R", 16);
	}
	else if (iParam0 == joaat("AMMO_SNIPER"))
	{
		StringConCat(sParam2, "_TYPE_R", 16);
	}
	else if (iParam0 == joaat("AMMO_SNIPER_REMOTE"))
	{
		StringConCat(sParam2, "_TYPE_R", 16);
	}
	else if (iParam0 == joaat("AMMO_MINIGUN"))
	{
		StringConCat(sParam2, "_TYPE_R", 16);
	}
	else if (iParam0 == -873900901)
	{
		StringConCat(sParam2, "_TYPE_R", 16);
	}
	else if (iParam0 == joaat("AMMO_SHOTGUN"))
	{
		StringConCat(sParam2, "_TYPE_C", 16);
	}
	else if (iParam0 == joaat("AMMO_STUNGUN"))
	{
		StringConCat(sParam2, "_TYPE_CH", 16);
	}
	else if (iParam0 == joaat("AMMO_GRENADELAUNCHER"))
	{
		StringConCat(sParam2, "_TYPE_G", 16);
	}
	else if (iParam0 == joaat("AMMO_GRENADELAUNCHER_SMOKE"))
	{
		StringConCat(sParam2, "_TYPE_G", 16);
	}
	else if (iParam0 == joaat("AMMO_SMOKEGRENADE"))
	{
		StringConCat(sParam2, "_TYPE_G", 16);
	}
	else if (iParam0 == 214501711)
	{
		StringConCat(sParam2, "_TYPE_G", 16);
	}
	else if (iParam0 == joaat("AMMO_STICKYBOMB"))
	{
		StringConCat(sParam2, "_TYPE_B", 16);
	}
	else if (iParam0 == joaat("AMMO_RPG"))
	{
		StringConCat(sParam2, "_TYPE_RO", 16);
	}
	else if (iParam0 == joaat("AMMO_FLAREGUN"))
	{
		StringConCat(sParam2, "_TYPE_F", 16);
	}
	else if (iParam0 == joaat("AMMO_FIREWORK"))
	{
		StringConCat(sParam2, "_TYPE_FW", 16);
	}
	else if (iParam0 == joaat("AMMO_HOMINGLAUNCHER"))
	{
		StringConCat(sParam2, "_TYPE_RO", 16);
	}
	else if (iParam0 == joaat("AMMO_PROXMINE"))
	{
		StringConCat(sParam2, "_TYPE_M", 16);
	}
	else if (iParam0 == joaat("AMMO_RAILGUN"))
	{
		StringConCat(sParam2, "_TYPE_R", 16);
	}
	if (iParam1 == 1)
	{
		StringConCat(sParam2, "1", 16);
	}
	return MISC::GET_HASH_KEY(sParam2) != 0;
}

bool func_153(int iParam0, var uParam1)//Position - 0xDA92
{
	*uParam1 = -1;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			*uParam1 = joaat("AMMO_PISTOL");
			break;
		
		case joaat("weapon_combatpistol"):
			*uParam1 = joaat("AMMO_PISTOL");
			break;
		
		case joaat("weapon_appistol"):
			*uParam1 = joaat("AMMO_PISTOL");
			break;
		
		case joaat("weapon_pistol50"):
			*uParam1 = joaat("AMMO_PISTOL");
			break;
		
		case joaat("weapon_snspistol"):
			*uParam1 = joaat("AMMO_PISTOL");
			break;
		
		case joaat("weapon_heavypistol"):
			*uParam1 = joaat("AMMO_PISTOL");
			break;
		
		case joaat("weapon_vintagepistol"):
			*uParam1 = joaat("AMMO_PISTOL");
			break;
		
		case joaat("weapon_microsmg"):
			*uParam1 = joaat("AMMO_SMG");
			break;
		
		case joaat("weapon_smg"):
			*uParam1 = joaat("AMMO_SMG");
			break;
		
		case joaat("weapon_assaultsmg"):
			*uParam1 = joaat("AMMO_SMG");
			break;
		
		case joaat("weapon_combatpdw"):
			*uParam1 = joaat("AMMO_SMG");
			break;
		
		case joaat("weapon_assaultrifle"):
			*uParam1 = joaat("AMMO_RIFLE");
			break;
		
		case joaat("weapon_carbinerifle"):
			*uParam1 = joaat("AMMO_RIFLE");
			break;
		
		case joaat("weapon_advancedrifle"):
			*uParam1 = joaat("AMMO_RIFLE");
			break;
		
		case joaat("weapon_specialcarbine"):
			*uParam1 = joaat("AMMO_RIFLE");
			break;
		
		case -947031628:
			*uParam1 = joaat("AMMO_RIFLE");
			break;
		
		case joaat("weapon_bullpuprifle"):
			*uParam1 = joaat("AMMO_RIFLE");
			break;
		
		case joaat("weapon_mg"):
			*uParam1 = joaat("AMMO_MG");
			break;
		
		case joaat("weapon_combatmg"):
			*uParam1 = joaat("AMMO_MG");
			break;
		
		case -572349828:
			*uParam1 = joaat("AMMO_MG");
			break;
		
		case joaat("weapon_gusenberg"):
			*uParam1 = joaat("AMMO_MG");
			break;
		
		case joaat("weapon_pumpshotgun"):
			*uParam1 = joaat("AMMO_SHOTGUN");
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			*uParam1 = joaat("AMMO_SHOTGUN");
			break;
		
		case joaat("weapon_assaultshotgun"):
			*uParam1 = joaat("AMMO_SHOTGUN");
			break;
		
		case joaat("weapon_bullpupshotgun"):
			*uParam1 = joaat("AMMO_SHOTGUN");
			break;
		
		case joaat("weapon_heavyshotgun"):
			*uParam1 = joaat("AMMO_SHOTGUN");
			break;
		
		case joaat("weapon_sniperrifle"):
			*uParam1 = joaat("AMMO_SNIPER");
			break;
		
		case joaat("weapon_heavysniper"):
			*uParam1 = joaat("AMMO_SNIPER");
			break;
		
		case joaat("weapon_musket"):
			*uParam1 = joaat("AMMO_SNIPER");
			break;
		
		case joaat("weapon_marksmanrifle"):
			*uParam1 = joaat("AMMO_SNIPER");
			break;
		
		case joaat("weapon_grenadelauncher"):
			*uParam1 = joaat("AMMO_GRENADELAUNCHER");
			break;
		
		case joaat("weapon_rpg"):
			*uParam1 = joaat("AMMO_RPG");
			break;
		
		case joaat("weapon_minigun"):
			*uParam1 = joaat("AMMO_MINIGUN");
			break;
		
		case joaat("weapon_firework"):
			*uParam1 = joaat("AMMO_FIREWORK");
			break;
		
		case joaat("weapon_flaregun"):
			*uParam1 = joaat("AMMO_FLAREGUN");
			break;
		
		case joaat("weapon_hominglauncher"):
			*uParam1 = joaat("AMMO_HOMINGLAUNCHER");
			break;
		
		case joaat("weapon_proxmine"):
			*uParam1 = joaat("AMMO_PROXMINE");
			break;
		
		case joaat("weapon_railgun"):
			*uParam1 = joaat("AMMO_RAILGUN");
			break;
	}
	return *uParam1 != -1;
}

void func_154(char* sParam0, char[8] cParam1, char[4] cParam2, char[4] cParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0xDD30
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

char* func_155(int iParam0, bool bParam1)//Position - 0xE16E
{
	struct<32> Var0;
	
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				return "WTU_INVALID";
			}
			else
			{
				return "WT_INVALID";
			}
			break;
		
		case joaat("weapon_unarmed"):
			if (bParam1)
			{
				return "WTU_UNARMED";
			}
			else
			{
				return "WT_UNARMED";
			}
			break;
		
		case joaat("weapon_pistol"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_combatpistol"):
			if (bParam1)
			{
				return "WTU_PIST_CBT";
			}
			else
			{
				return "WT_PIST_CBT";
			}
			break;
		
		case joaat("weapon_appistol"):
			if (bParam1)
			{
				return "WTU_PIST_AP";
			}
			else
			{
				return "WT_PIST_AP";
			}
			break;
		
		case joaat("weapon_smg"):
			if (bParam1)
			{
				return "WTU_SMG";
			}
			else
			{
				return "WT_SMG";
			}
			break;
		
		case joaat("weapon_microsmg"):
			if (bParam1)
			{
				return "WTU_SMG_MCR";
			}
			else
			{
				return "WT_SMG_MCR";
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_ASL";
			}
			else
			{
				return "WT_RIFLE_ASL";
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_CBN";
			}
			else
			{
				return "WT_RIFLE_CBN";
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_ADV";
			}
			else
			{
				return "WT_RIFLE_ADV";
			}
			break;
		
		case joaat("weapon_mg"):
			if (bParam1)
			{
				return "WTU_MG";
			}
			else
			{
				return "WT_MG";
			}
			break;
		
		case joaat("weapon_combatmg"):
			if (bParam1)
			{
				return "WTU_MG_CBT";
			}
			else
			{
				return "WT_MG_CBT";
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			if (bParam1)
			{
				return "WTU_SG_PMP";
			}
			else
			{
				return "WT_SG_PMP";
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			if (bParam1)
			{
				return "WTU_SG_SOF";
			}
			else
			{
				return "WT_SG_SOF";
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			if (bParam1)
			{
				return "WTU_SG_ASL";
			}
			else
			{
				return "WT_SG_ASL";
			}
			break;
		
		case joaat("weapon_heavysniper"):
			if (bParam1)
			{
				return "WTU_SNIP_HVY";
			}
			else
			{
				return "WT_SNIP_HVY";
			}
			break;
		
		case joaat("weapon_remotesniper"):
			if (bParam1)
			{
				return "WTU_SNIP_RMT";
			}
			else
			{
				return "WT_SNIP_RMT";
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			if (bParam1)
			{
				return "WTU_SNIP_RIF";
			}
			else
			{
				return "WT_SNIP_RIF";
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			if (bParam1)
			{
				return "WTU_GL";
			}
			else
			{
				return "WT_GL";
			}
			break;
		
		case joaat("weapon_rpg"):
			if (bParam1)
			{
				return "WTU_RPG";
			}
			else
			{
				return "WT_RPG";
			}
			break;
		
		case joaat("weapon_minigun"):
			if (bParam1)
			{
				return "WTU_MINIGUN";
			}
			else
			{
				return "WT_MINIGUN";
			}
			break;
		
		case joaat("weapon_grenade"):
			if (bParam1)
			{
				return "WTU_GNADE";
			}
			else
			{
				return "WT_GNADE";
			}
			break;
		
		case joaat("weapon_smokegrenade"):
			if (bParam1)
			{
				return "WTU_GNADE_SMK";
			}
			else
			{
				return "WT_GNADE_SMK";
			}
			break;
		
		case joaat("weapon_stickybomb"):
			if (bParam1)
			{
				return "WTU_GNADE_STK";
			}
			else
			{
				return "WT_GNADE_STK";
			}
			break;
		
		case joaat("weapon_molotov"):
			if (bParam1)
			{
				return "WTU_MOLOTOV";
			}
			else
			{
				return "WT_MOLOTOV";
			}
			break;
		
		case joaat("weapon_stungun"):
			if (bParam1)
			{
				return "WTU_STUN";
			}
			else
			{
				return "WT_STUN";
			}
			break;
		
		case joaat("weapon_petrolcan"):
			if (bParam1)
			{
				return "WTU_PETROL";
			}
			else
			{
				return "WT_PETROL";
			}
			break;
		
		case joaat("weapon_electric_fence"):
			if (bParam1)
			{
				return "WTU_ELCFEN";
			}
			else
			{
				return "WT_ELCFEN";
			}
			break;
		
		case joaat("vehicle_weapon_tank"):
			if (bParam1)
			{
				return "WTU_V_TANK";
			}
			else
			{
				return "WT_V_TANK";
			}
			break;
		
		case joaat("vehicle_weapon_space_rocket"):
			if (bParam1)
			{
				return "WTU_V_SPACERKT";
			}
			else
			{
				return "WT_V_SPACERKT";
			}
			break;
		
		case joaat("vehicle_weapon_player_laser"):
			if (bParam1)
			{
				return "WTU_V_PLRLSR";
			}
			else
			{
				return "WT_V_PLRLSR";
			}
			break;
		
		case joaat("object"):
			if (bParam1)
			{
				return "WTU_OBJECT";
			}
			else
			{
				return "WT_OBJECT";
			}
			break;
		
		case joaat("gadget_parachute"):
			if (bParam1)
			{
				return "WTU_PARA";
			}
			else
			{
				return "WT_PARA";
			}
			break;
		
		case joaat("AMMO_RPG"):
			if (bParam1)
			{
				return "WTU_A_RPG";
			}
			else
			{
				return "WT_A_RPG";
			}
			break;
		
		case joaat("AMMO_TANK"):
			if (bParam1)
			{
				return "WTU_A_TANK";
			}
			else
			{
				return "WT_A_TANK";
			}
			break;
		
		case joaat("AMMO_SPACE_ROCKET"):
			if (bParam1)
			{
				return "WTU_A_SPACERKT";
			}
			else
			{
				return "WT_A_SPACERKT";
			}
			break;
		
		case joaat("AMMO_PLAYER_LASER"):
			if (bParam1)
			{
				return "WTU_A_PLRLSR";
			}
			else
			{
				return "WT_A_PLRLSR";
			}
			break;
		
		case joaat("AMMO_ENEMY_LASER"):
			if (bParam1)
			{
				return "WTU_A_ENMYLSR";
			}
			else
			{
				return "WT_A_ENMYLSR";
			}
			break;
		
		case joaat("weapon_knife"):
			if (bParam1)
			{
				return "WTU_KNIFE";
			}
			else
			{
				return "WT_KNIFE";
			}
			break;
		
		case joaat("weapon_nightstick"):
			if (bParam1)
			{
				return "WTU_NGTSTK";
			}
			else
			{
				return "WT_NGTSTK";
			}
			break;
		
		case joaat("weapon_hammer"):
			if (bParam1)
			{
				return "WTU_HAMMER";
			}
			else
			{
				return "WT_HAMMER";
			}
			break;
		
		case joaat("weapon_bat"):
			if (bParam1)
			{
				return "WTU_BAT";
			}
			else
			{
				return "WT_BAT";
			}
			break;
		
		case joaat("weapon_crowbar"):
			if (bParam1)
			{
				return "WTU_CROWBAR";
			}
			else
			{
				return "WT_CROWBAR";
			}
			break;
		
		case joaat("weapon_golfclub"):
			if (bParam1)
			{
				return "WTU_GOLFCLUB";
			}
			else
			{
				return "WT_GOLFCLUB";
			}
			break;
		
		case joaat("weapon_rammed_by_car"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_run_over_by_car"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			if (bParam1)
			{
				return "WTU_SMG_ASL";
			}
			else
			{
				return "WT_SMG_ASL";
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			if (bParam1)
			{
				return "WTU_SG_BLP";
			}
			else
			{
				return "WT_SG_BLP";
			}
			break;
		
		case joaat("weapon_pistol50"):
			if (bParam1)
			{
				return "WTU_PIST_50";
			}
			else
			{
				return "WT_PIST_50";
			}
			break;
		
		case joaat("weapon_bottle"):
			if (bParam1)
			{
				return "WTU_BOTTLE";
			}
			else
			{
				return "WT_BOTTLE";
			}
			break;
		
		case joaat("weapon_gusenberg"):
			if (bParam1)
			{
				return "WTU_GUSENBERG";
			}
			else
			{
				return "WT_GUSENBERG";
			}
			break;
		
		case joaat("weapon_snspistol"):
			if (bParam1)
			{
				return "WTU_SNSPISTOL";
			}
			else
			{
				return "WT_SNSPISTOL";
			}
			break;
		
		case joaat("weapon_vintagepistol"):
			if (bParam1)
			{
				return "WTU_VPISTOL";
			}
			else
			{
				return "WT_VPISTOL";
			}
			break;
		
		case joaat("weapon_dagger"):
			if (bParam1)
			{
				return "WTU_DAGGER";
			}
			else
			{
				return "WT_DAGGER";
			}
			break;
		
		case joaat("weapon_flaregun"):
			if (bParam1)
			{
				return "WTU_FLAREGUN";
			}
			else
			{
				return "WT_FLAREGUN";
			}
			break;
		
		case joaat("weapon_heavypistol"):
			if (bParam1)
			{
				return "WTU_HEAVYPSTL";
			}
			else
			{
				return "WT_HEAVYPSTL";
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			if (bParam1)
			{
				return "WTU_RIFLE_SCBN";
			}
			else
			{
				return "WT_RIFLE_SCBN";
			}
			break;
		
		case joaat("weapon_musket"):
			if (bParam1)
			{
				return "WTU_MUSKET";
			}
			else
			{
				return "WT_MUSKET";
			}
			break;
		
		case joaat("weapon_firework"):
			if (bParam1)
			{
				return "WTU_FWRKLNCHR";
			}
			else
			{
				return "WT_FWRKLNCHR";
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			if (bParam1)
			{
				return "WTU_MKRIFLE";
			}
			else
			{
				return "WT_MKRIFLE";
			}
			break;
		
		case joaat("weapon_heavyshotgun"):
			if (bParam1)
			{
				return "WTU_HVYSHOT";
			}
			else
			{
				return "WT_HVYSHOT";
			}
			break;
		
		case joaat("weapon_proxmine"):
			if (bParam1)
			{
				return "WTU_PRXMINE";
			}
			else
			{
				return "WT_PRXMINE";
			}
			break;
		
		case joaat("weapon_hominglauncher"):
			if (bParam1)
			{
				return "WTU_HOMLNCH";
			}
			else
			{
				return "WT_HOMLNCH";
			}
			break;
		
		case joaat("weapon_hatchet"):
			if (bParam1)
			{
				return "WTU_HATCHET";
			}
			else
			{
				return "WT_HATCHET";
			}
			break;
		
		case joaat("weapon_combatpdw"):
			if (bParam1)
			{
				return "WTU_COMBATPDW";
			}
			else
			{
				return "WT_COMBATPDW";
			}
			break;
		
		case joaat("weapon_knuckle"):
			if (bParam1)
			{
				return "WTU_KNUCKLE";
			}
			else
			{
				return "WT_KNUCKLE";
			}
			break;
		
		case joaat("weapon_marksmanpistol"):
			if (bParam1)
			{
				return "WTU_MKPISTOL";
			}
			else
			{
				return "WT_MKPISTOL";
			}
			break;
		
		default:
			if (func_55(iParam0, &Var0) != -1)
			{
				if (bParam1)
				{
					return func_156(&(Var0.f_1F));
				}
				else
				{
					return func_156(&(Var0.f_7));
				}
			}
			break;
	}
	return "WT_INVALID";
}

var func_156(var uParam0)//Position - 0xE9CB
{
	return uParam0;
}

int func_157()//Position - 0xE9D5
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_158())
	{
		return 1;
	}
	return 0;
}

int func_158()//Position - 0xE9F2
{
	if (MISC::IS_PC_VERSION())
	{
		return 1;
	}
	return 0;
}

int func_159()//Position - 0xEA06
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

int func_160()//Position - 0xEAC6
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

void func_161(var uParam0, int iParam1, struct<3> Param2, struct<3> Param3, struct<3> Param4, struct<3> Param5)//Position - 0xEB4A
{
	*uParam0 = iParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_4 = { Param3 };
	uParam0->f_7 = { Param4 };
	uParam0->f_A = { Param5 };
	uParam0->f_17 = -1;
}

void func_162(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, struct<3> Param5, struct<3> Param6, struct<3> Param7, struct<3> Param8)//Position - 0xEB84
{
	*uParam0 = iParam3;
	uParam0->f_18 = iParam1;
	uParam0->f_19 = iParam2;
	uParam0->f_16 = iParam4;
	uParam0->f_1 = { Param5 };
	uParam0->f_4 = { Param6 };
	uParam0->f_7 = { Param7 };
	uParam0->f_A = { Param8 };
	uParam0->f_17 = -1;
}

void func_163(bool bParam0)//Position - 0xEBD0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	struct<25> Var9;
	int iVar10;
	int iVar11;
	
	iVar10 = 1;
	iVar11 = 1;
	if (bParam0)
	{
		iVar10 = 16;
		iVar11 = 6;
	}
	iVar3 = 0;
	while (iVar3 < iVar10)
	{
		iVar4 = 0;
		while (iVar4 < iVar11)
		{
			if (bParam0)
			{
				iVar0 = iVar3;
				iVar1 = iVar4;
			}
			else
			{
				iVar0 = iLocal_189;
				iVar1 = iLocal_190;
			}
			iVar5 = (iVar0 * 6 + iVar1);
			if (func_84(Local_131, &Global_26CE2D, &Var9, iVar0, iVar1, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_131.f_DA[iVar5]))
				{
					OBJECT::DELETE_OBJECT(&(Local_131.f_DA[iVar5]));
				}
				if (func_58(Var9))
				{
					bVar6 = false;
					if (Var9.f_18 == 3)
					{
						if (iVar1 == 0)
						{
							iVar7 = joaat("prop_armour_pickup");
						}
						else if (iVar1 == 1)
						{
							iVar7 = joaat("prop_bodyarmour_02");
						}
						else if (iVar1 == 2)
						{
							iVar7 = joaat("prop_bodyarmour_03");
						}
						else if (iVar1 == 3)
						{
							iVar7 = joaat("prop_bodyarmour_04");
						}
						else if (iVar1 == 4)
						{
							iVar7 = joaat("prop_bodyarmour_05");
						}
					}
					else if (Var9.f_18 == 4)
					{
						iVar7 = joaat("p_parachute_s_shop");
					}
					else if (Var9.f_18 == 7)
					{
						iVar7 = func_83(&Global_26CE2D, Var9.f_17);
					}
					else if (Var9.f_18 == 6)
					{
						iVar7 = joaat("ind_prop_firework_04");
					}
					else if (Var9 == joaat("weapon_knife"))
					{
						iVar7 = joaat("prop_w_me_knife_01");
					}
					else if (Var9 == joaat("weapon_bottle"))
					{
						iVar7 = joaat("prop_w_me_bottle");
					}
					else if (Var9 == joaat("weapon_dagger"))
					{
						iVar7 = joaat("prop_w_me_dagger");
					}
					else if (Var9 == joaat("weapon_hatchet"))
					{
						iVar7 = joaat("prop_w_me_hatchet");
					}
					else
					{
						iVar7 = WEAPON::GET_WEAPONTYPE_MODEL(Var9);
						bVar6 = true;
					}
					if (iVar7 != 0)
					{
						ENTITY::REMOVE_MODEL_HIDE(Var9.f_1, 0.001f, iVar7, 0);
						if (bVar6)
						{
							WEAPON::REMOVE_WEAPON_ASSET(Var9);
						}
						else
						{
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar7);
						}
						if (bVar6)
						{
							iVar2 = 0;
							while (func_164(&Local_232, Var9, iVar2, 0))
							{
								if (Local_232 != 0)
								{
									iVar8 = WEAPON::GET_WEAPON_COMPONENT_TYPE_MODEL(Local_232);
									if (iVar8 != 0)
									{
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar8);
									}
								}
								iVar2++;
							}
						}
					}
				}
			}
			iVar4++;
		}
		iVar3++;
	}
	iLocal_190++;
	if (iLocal_190 >= 6)
	{
		iLocal_190 = 0;
		iLocal_189++;
		if (iLocal_189 >= 16)
		{
			iLocal_189 = 0;
			iLocal_191 = 1;
		}
	}
	if (iLocal_119)
	{
		STREAMING::REQUEST_MODEL(joaat("v_lirg_gunlight"));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_118))
	{
		OBJECT::DELETE_OBJECT(&iLocal_118);
	}
}

bool func_164(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xEE0E
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
	var uVar12;
	struct<4> Var13;
	
	func_168(iParam0, 0, 989182658, 0, 0);
	switch (iParam1)
	{
		case joaat("weapon_pistol"):
			switch (iParam2)
			{
				case 0:
					func_168(iParam0, joaat("component_pistol_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_168(iParam0, joaat("component_pistol_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_168(iParam0, joaat("component_at_pi_flsh"), 1170392792, 1, 0);
					break;
				
				case 3:
					func_168(iParam0, joaat("component_at_pi_supp_02"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 4:
					func_168(iParam0, joaat("component_pistol_varmod_luxe"), -1441477783, 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam2)
			{
				case 0:
					func_168(iParam0, joaat("component_combatpistol_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_168(iParam0, joaat("component_combatpistol_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_168(iParam0, joaat("component_at_pi_flsh"), 1170392792, 1, 0);
					break;
				
				case 3:
					func_168(iParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam2)
			{
				case 0:
					func_168(iParam0, joaat("component_appistol_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_168(iParam0, joaat("component_appistol_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_168(iParam0, joaat("component_at_pi_flsh"), 1170392792, 1, 0);
					break;
				
				case 3:
					func_168(iParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 4:
					func_168(iParam0, joaat("component_appistol_varmod_luxe"), -1441477783, 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam2)
			{
				case 0:
					func_168(iParam0, joaat("component_microsmg_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_168(iParam0, joaat("component_microsmg_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_168(iParam0, joaat("component_at_pi_flsh"), 1170392792, 1, 0);
					break;
				
				case 3:
					func_168(iParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 1, 0);
					break;
				
				case 4:
					func_168(iParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 5:
					func_168(iParam0, joaat("component_microsmg_varmod_luxe"), -1441477783, 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam2)
			{
				case 0:
					func_168(iParam0, joaat("component_smg_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_168(iParam0, joaat("component_smg_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_168(iParam0, joaat("component_at_ar_flsh"), 1170392792, 1, 0);
					break;
				
				case 3:
					func_168(iParam0, joaat("component_at_scope_macro_02"), joaat("WAPScop"), 1, 0);
					break;
				
				case 4:
					func_168(iParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 5:
					func_168(iParam0, joaat("component_smg_varmod_luxe"), -1441477783, 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam2)
			{
				case 0:
					func_168(iParam0, joaat("component_assaultrifle_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_168(iParam0, joaat("component_assaultrifle_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_168(iParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
					break;
				
				case 3:
					func_168(iParam0, joaat("component_at_ar_flsh"), 1170392792, 1, 0);
					break;
				
				case 4:
					func_168(iParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 1, 0);
					break;
				
				case 5:
					func_168(iParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 6:
					func_168(iParam0, joaat("component_assaultrifle_varmod_luxe"), -1441477783, 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam2)
			{
				case 0:
					func_168(iParam0, joaat("component_carbinerifle_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_168(iParam0, joaat("component_carbinerifle_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_168(iParam0, joaat("component_at_railcover_01"), joaat("WAPRail"), 1, 0);
					break;
				
				case 3:
					func_168(iParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
					break;
				
				case 4:
					func_168(iParam0, joaat("component_at_ar_flsh"), 1170392792, 1, 0);
					break;
				
				case 5:
					func_168(iParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
					break;
				
				case 6:
					func_168(iParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 7:
					func_168(iParam0, joaat("component_carbinerifle_varmod_luxe"), -1441477783, 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam2)
			{
				case 0:
					func_168(iParam0, joaat("component_advancedrifle_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_168(iParam0, joaat("component_advancedrifle_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_168(iParam0, joaat("component_at_ar_flsh"), 1170392792, 1, 0);
					break;
				
				case 3:
					func_168(iParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 1, 0);
					break;
				
				case 4:
					func_168(iParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 5:
					func_168(iParam0, joaat("component_advancedrifle_varmod_luxe"), -1441477783, 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam2)
			{
				case 0:
					func_168(iParam0, joaat("component_mg_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_168(iParam0, joaat("component_mg_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_168(iParam0, joaat("component_at_scope_small_02"), joaat("WAPScop"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam2)
			{
				case 0:
					func_168(iParam0, joaat("component_combatmg_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_168(iParam0, joaat("component_combatmg_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_168(iParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
					break;
				
				case 3:
					func_168(iParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam2)
			{
				case 0:
					func_168(iParam0, joaat("component_at_ar_flsh"), 1170392792, 1, 0);
					break;
				
				case 1:
					func_168(iParam0, joaat("component_at_sr_supp"), joaat("WAPSupp"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam2)
			{
				case 0:
					func_168(iParam0, joaat("component_assaultshotgun_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_168(iParam0, joaat("component_assaultshotgun_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_168(iParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
					break;
				
				case 3:
					func_168(iParam0, joaat("component_at_ar_flsh"), 1170392792, 1, 0);
					break;
				
				case 4:
					func_168(iParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam2)
			{
				case 0:
					func_168(iParam0, joaat("component_sniperrifle_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_168(iParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 2:
					func_168(iParam0, joaat("component_at_scope_large"), joaat("WAPScop"), 1, 1);
					break;
				
				case 3:
					func_168(iParam0, joaat("component_at_scope_max"), joaat("WAPScop"), 2, 0);
					break;
				
				case 4:
					func_168(iParam0, joaat("component_sniperrifle_varmod_luxe"), -1441477783, 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam2)
			{
				case 0:
					func_168(iParam0, joaat("component_heavysniper_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_168(iParam0, joaat("component_at_scope_large"), joaat("WAPScop"), 1, 1);
					break;
				
				case 2:
					func_168(iParam0, joaat("component_at_scope_max"), joaat("WAPScop"), 2, 0);
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam2)
			{
				case 0:
					func_168(iParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
					break;
				
				case 1:
					func_168(iParam0, joaat("component_at_ar_flsh"), 1170392792, 1, 0);
					break;
				
				case 2:
					func_168(iParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam2)
			{
				case 0:
					func_168(iParam0, joaat("component_minigun_clip_01"), joaat("WAPClip"), 1, 1);
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam2)
			{
				case 0:
					func_168(iParam0, joaat("component_assaultsmg_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_168(iParam0, joaat("component_assaultsmg_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_168(iParam0, joaat("component_at_ar_flsh"), 1170392792, 1, 0);
					break;
				
				case 3:
					func_168(iParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 1, 0);
					break;
				
				case 4:
					func_168(iParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam2)
			{
				case 0:
					func_168(iParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
					break;
				
				case 1:
					func_168(iParam0, joaat("component_at_ar_flsh"), 1170392792, 1, 0);
					break;
				
				case 2:
					func_168(iParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam2)
			{
				case 0:
					func_168(iParam0, joaat("component_pistol50_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_168(iParam0, joaat("component_pistol50_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_168(iParam0, joaat("component_at_pi_flsh"), 1170392792, 1, 0);
					break;
				
				case 3:
					func_168(iParam0, joaat("component_at_ar_supp_02"), joaat("WAPGrip"), 1, 0);
					break;
				
				case 4:
					func_168(iParam0, joaat("component_pistol50_varmod_luxe"), -1441477783, 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam2)
			{
				case 0:
					func_168(iParam0, joaat("component_sawnoffshotgun_varmod_luxe"), -1441477783, 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			switch (iParam2)
			{
				case 0:
					func_168(iParam0, joaat("component_marksmanrifle_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_168(iParam0, joaat("component_marksmanrifle_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_168(iParam0, joaat("component_at_scope_large_fixed_zoom"), joaat("WAPScop"), 1, 0);
					break;
				
				case 3:
					func_168(iParam0, joaat("component_at_ar_flsh"), 1170392792, 1, 0);
					break;
				
				case 4:
					func_168(iParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 5:
					func_168(iParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
					break;
				
				case 6:
					func_168(iParam0, joaat("component_marksmanrifle_varmod_luxe"), -1441477783, 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_heavypistol"):
			switch (iParam2)
			{
				case 0:
					func_168(iParam0, joaat("component_heavypistol_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_168(iParam0, joaat("component_heavypistol_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_168(iParam0, joaat("component_at_pi_flsh"), 1170392792, 1, 0);
					break;
				
				case 3:
					func_168(iParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 4:
					func_168(iParam0, joaat("component_heavypistol_varmod_luxe"), -1441477783, 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam2)
			{
				case 0:
					func_168(iParam0, joaat("component_snspistol_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_168(iParam0, joaat("component_snspistol_clip_02"), joaat("WAPClip"), 2, 0);
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam2)
			{
				case 0:
					func_168(iParam0, joaat("component_combatpdw_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_168(iParam0, joaat("component_combatpdw_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_168(iParam0, joaat("component_at_ar_flsh"), 1170392792, 1, 0);
					break;
				
				case 3:
					func_168(iParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
					break;
				
				case 4:
					func_168(iParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 1, 0);
					break;
			}
			break;
		
		default:
			iVar10 = func_55(iParam1, &uVar12);
			if (iVar10 != -1)
			{
				iVar11 = 0;
				while (iVar11 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar10))
				{
					if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar10, iVar11, &Var13))
					{
						if (Var13 == joaat("WAPClip"))
						{
							iVar1++;
						}
						else if (Var13 == 1170392792)
						{
							iVar2++;
						}
						else if (Var13 == joaat("WAPScop"))
						{
							iVar3++;
						}
						else if (Var13 == joaat("WAPRail"))
						{
							iVar4++;
						}
						else if (Var13 == joaat("WAPGrip"))
						{
							iVar5++;
						}
						else if (Var13 == joaat("WAPSupp"))
						{
							iVar6++;
						}
						else if (Var13 == 1731751835)
						{
							iVar7++;
						}
						else if (Var13 == -1441477783)
						{
							iVar8++;
						}
						else
						{
							iVar9++;
						}
						if (iVar11 == iParam2)
						{
							if (Var13 == joaat("WAPClip"))
							{
								iVar0 = iVar1;
							}
							else if (Var13 == 1170392792)
							{
								iVar0 = iVar2;
							}
							else if (Var13 == joaat("WAPScop"))
							{
								iVar0 = iVar3;
							}
							else if (Var13 == joaat("WAPRail"))
							{
								iVar0 = iVar4;
							}
							else if (Var13 == joaat("WAPGrip"))
							{
								iVar0 = iVar5;
							}
							else if (Var13 == joaat("WAPSupp"))
							{
								iVar0 = iVar6;
							}
							else if (Var13 == 1731751835)
							{
								iVar0 = iVar7;
							}
							else if (Var13 == -1441477783)
							{
								iVar0 = iVar8;
							}
							else
							{
								iVar0 = iVar9;
							}
							func_168(iParam0, Var13.f_3, Var13, iVar0, Var13.f_1);
						}
					}
					iVar11++;
				}
			}
			break;
	}
	if (bParam3)
	{
		iParam0->f_2 = func_165(iParam1, *iParam0);
	}
	return iParam0->f_4 != 989182658;
}

int func_165(int iParam0, int iParam1)//Position - 0xFC6F
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<6> Var5;
	int iVar6;
	int iVar7;
	var uVar8;
	struct<6> Var9;
	char* sVar10;
	struct<4> Var11;
	float fVar12;
	
	iVar0 = 0;
	fVar1 = 2.5f;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		fVar1 = 2.5f;
		switch (iParam0)
		{
			case joaat("weapon_pistol"):
				switch (iParam1)
				{
					case joaat("component_pistol_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_pistol_clip_02"):
						iVar0 = 155;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 189;
						break;
					
					case joaat("component_at_pi_supp_02"):
						iVar0 = 729;
						break;
					
					case joaat("component_pistol_varmod_luxe"):
						iVar0 = 18600;
						break;
				}
				break;
			
			case joaat("weapon_combatpistol"):
				switch (iParam1)
				{
					case joaat("component_combatpistol_clip_01"):
						iVar0 = 136;
						break;
					
					case joaat("component_combatpistol_clip_02"):
						iVar0 = 159;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 189;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 735;
						break;
				}
				break;
			
			case joaat("weapon_appistol"):
				switch (iParam1)
				{
					case joaat("component_appistol_clip_01"):
						iVar0 = 145;
						break;
					
					case joaat("component_appistol_clip_02"):
						iVar0 = 165;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 185;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 730;
						break;
					
					case joaat("component_appistol_varmod_luxe"):
						iVar0 = 15800;
						break;
				}
				break;
			
			case joaat("weapon_microsmg"):
				switch (iParam1)
				{
					case joaat("component_microsmg_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_microsmg_clip_02"):
						iVar0 = 137;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 190;
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 549;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 775;
						break;
					
					case joaat("component_microsmg_varmod_luxe"):
						iVar0 = 15100;
						break;
				}
				break;
			
			case joaat("weapon_smg"):
				switch (iParam1)
				{
					case joaat("component_smg_clip_01"):
						iVar0 = 119;
						break;
					
					case joaat("component_smg_clip_02"):
						iVar0 = 134;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 210;
						break;
					
					case joaat("component_at_scope_macro_02"):
						iVar0 = 549;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 815;
						break;
					
					case joaat("component_smg_varmod_luxe"):
						iVar0 = 19300;
						break;
				}
				break;
			
			case joaat("weapon_assaultrifle"):
				switch (iParam1)
				{
					case joaat("component_assaultrifle_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_assaultrifle_clip_02"):
						iVar0 = 129;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 159;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 189;
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 565;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 810;
						break;
					
					case joaat("component_assaultrifle_varmod_luxe"):
						iVar0 = 14400;
						break;
				}
				break;
			
			case joaat("weapon_carbinerifle"):
				switch (iParam1)
				{
					case joaat("component_carbinerifle_clip_01"):
						iVar0 = 99;
						break;
					
					case joaat("component_carbinerifle_clip_02"):
						iVar0 = 105;
						break;
					
					case joaat("component_at_railcover_01"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 132;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 150;
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = 450;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 815;
						break;
					
					case joaat("component_carbinerifle_varmod_luxe"):
						iVar0 = 17900;
						break;
				}
				break;
			
			case joaat("weapon_advancedrifle"):
				switch (iParam1)
				{
					case joaat("component_advancedrifle_clip_01"):
						iVar0 = 110;
						break;
					
					case joaat("component_advancedrifle_clip_02"):
						iVar0 = 124;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 159;
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = 450;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 812;
						break;
					
					case joaat("component_advancedrifle_varmod_luxe"):
						iVar0 = 16500;
						break;
				}
				break;
			
			case joaat("weapon_mg"):
				switch (iParam1)
				{
					case joaat("component_mg_clip_01"):
						iVar0 = 135;
						break;
					
					case joaat("component_mg_clip_02"):
						iVar0 = 145;
						break;
					
					case joaat("component_at_scope_small_02"):
						iVar0 = 450;
						break;
				}
				break;
			
			case joaat("weapon_combatmg"):
				switch (iParam1)
				{
					case joaat("component_combatmg_clip_01"):
						iVar0 = 119;
						break;
					
					case joaat("component_combatmg_clip_02"):
						iVar0 = 126;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 129;
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = 559;
						break;
				}
				break;
			
			case joaat("weapon_pumpshotgun"):
				switch (iParam1)
				{
					case joaat("component_at_ar_flsh"):
						iVar0 = 189;
						break;
					
					case joaat("component_at_sr_supp"):
						iVar0 = 975;
						break;
				}
				break;
			
			case joaat("weapon_assaultshotgun"):
				switch (iParam1)
				{
					case joaat("component_assaultshotgun_clip_01"):
						iVar0 = 129;
						break;
					
					case joaat("component_assaultshotgun_clip_02"):
						iVar0 = 139;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 150;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 225;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 899;
						break;
				}
				break;
			
			case joaat("weapon_sniperrifle"):
				switch (iParam1)
				{
					case joaat("component_sniperrifle_clip_01"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_scope_large"):
						iVar0 = 559;
						break;
					
					case joaat("component_at_scope_max"):
						iVar0 = 975;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 920;
						break;
					
					case joaat("component_sniperrifle_varmod_luxe"):
						iVar0 = 13000;
						break;
				}
				break;
			
			case joaat("weapon_heavysniper"):
				switch (iParam1)
				{
					case joaat("component_heavysniper_clip_01"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_scope_large"):
						iVar0 = 575;
						break;
					
					case joaat("component_at_scope_max"):
						iVar0 = 999;
						break;
				}
				break;
			
			case joaat("weapon_grenadelauncher"):
				switch (iParam1)
				{
					case joaat("component_at_ar_afgrip"):
						iVar0 = 128;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 185;
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = 525;
						break;
				}
				break;
			
			case joaat("weapon_minigun"):
				switch (iParam1)
				{
					case joaat("component_minigun_clip_01"):
						iVar0 = -1;
						break;
				}
				break;
			
			case joaat("weapon_assaultsmg"):
				switch (iParam1)
				{
					case joaat("component_assaultsmg_clip_01"):
						iVar0 = 110;
						break;
					
					case joaat("component_assaultsmg_clip_02"):
						iVar0 = 9700;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2275;
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 10875;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12400;
						break;
				}
				if (func_59() && (func_159() || func_160()))
				{
					iVar0 = 0;
				}
				break;
			
			case joaat("weapon_bullpupshotgun"):
				switch (iParam1)
				{
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4100;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2300;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12450;
						break;
				}
				if (func_59() && (func_159() || func_160()))
				{
					iVar0 = 0;
				}
				break;
			
			case joaat("weapon_pistol50"):
				switch (iParam1)
				{
					case joaat("component_pistol50_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_pistol50_clip_02"):
						iVar0 = 9500;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 2000;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12250;
						break;
					
					case joaat("component_pistol50_varmod_luxe"):
						iVar0 = 20000;
						break;
				}
				if (func_59() && (func_159() || func_160()))
				{
					iVar0 = 0;
				}
				break;
			
			case joaat("weapon_sawnoffshotgun"):
				switch (iParam1)
				{
					case joaat("component_sawnoffshotgun_varmod_luxe"):
						iVar0 = 13700;
						break;
				}
				break;
			
			case joaat("weapon_marksmanrifle"):
				switch (iParam1)
				{
					case joaat("component_marksmanrifle_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_marksmanrifle_clip_02"):
						iVar0 = 3612;
						break;
					
					case joaat("component_at_scope_large_fixed_zoom"):
						iVar0 = 0;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 1020;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 5000;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 1760;
						break;
					
					case joaat("component_marksmanrifle_varmod_luxe"):
						iVar0 = 17200;
						break;
				}
				break;
			
			case joaat("weapon_heavypistol"):
				switch (iParam1)
				{
					case joaat("component_heavypistol_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_heavypistol_clip_02"):
						iVar0 = 3680;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 710;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 4800;
						break;
					
					case joaat("component_heavypistol_varmod_luxe"):
						iVar0 = 12000;
						break;
				}
				break;
			
			default:
				iVar2 = func_55(iParam0, &uVar4);
				if (iVar2 != -1)
				{
					iVar3 = 0;
					while (iVar3 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar2))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar2, iVar3, &Var5))
						{
							if (Var5.f_3 == iParam1)
							{
								fVar1 = 1f;
								if (Var5.f_5 == -1)
								{
									iVar0 = -1;
								}
								else
								{
									iVar0 = Var5.f_5;
								}
								if (iParam0 == joaat("weapon_hammer"))
								{
									if (func_59() && (func_159() || func_160()))
									{
										iVar0 = 0;
									}
								}
							}
						}
						iVar3++;
					}
				}
				break;
		}
	}
	else
	{
		fVar1 = 2.5f;
		switch (iParam0)
		{
			case joaat("weapon_pistol"):
				switch (iParam1)
				{
					case joaat("component_pistol_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_pistol_clip_02"):
						iVar0 = 9175;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_B27));
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 1675;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10D1));
						break;
					
					case joaat("component_at_pi_supp_02"):
						iVar0 = 12050;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10D2));
						break;
					
					case joaat("component_pistol_varmod_luxe"):
						iVar0 = Global_40001.f_202E;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_111D));
						break;
				}
				break;
			
			case joaat("weapon_combatpistol"):
				switch (iParam1)
				{
					case joaat("component_combatpistol_clip_01"):
						iVar0 = 136;
						break;
					
					case joaat("component_combatpistol_clip_02"):
						iVar0 = 9250;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_B28));
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 1825;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10D3));
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 12100;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10D4));
						break;
				}
				break;
			
			case joaat("weapon_appistol"):
				switch (iParam1)
				{
					case joaat("component_appistol_clip_01"):
						iVar0 = 145;
						break;
					
					case joaat("component_appistol_clip_02"):
						iVar0 = 9400;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_B2A));
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 1975;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10D5));
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 12200;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10D6));
						break;
					
					case joaat("component_appistol_varmod_luxe"):
						iVar0 = Global_40001.f_202D;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1112));
						break;
				}
				break;
			
			case joaat("weapon_microsmg"):
				switch (iParam1)
				{
					case joaat("component_microsmg_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_microsmg_clip_02"):
						iVar0 = 9325;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_B2B));
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 1900;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10D9));
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 10800;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10DB));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12150;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10DA));
						break;
					
					case joaat("component_microsmg_varmod_luxe"):
						iVar0 = Global_40001.f_2031;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_111C));
						break;
				}
				break;
			
			case joaat("weapon_smg"):
				switch (iParam1)
				{
					case joaat("component_smg_clip_01"):
						iVar0 = 119;
						break;
					
					case joaat("component_smg_clip_02"):
						iVar0 = 9475;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_B2C));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2050;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10DC));
						break;
					
					case joaat("component_at_scope_macro_02"):
						iVar0 = 10825;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10DE));
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 12250;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10DD));
						break;
					
					case joaat("component_smg_varmod_luxe"):
						iVar0 = Global_40001.f_2030;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1121));
						break;
				}
				break;
			
			case joaat("weapon_assaultrifle"):
				switch (iParam1)
				{
					case joaat("component_assaultrifle_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_assaultrifle_clip_02"):
						iVar0 = 9550;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_B2E));
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4200;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10E5));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2125;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10E2));
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 10850;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10E4));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12300;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10E3));
						break;
					
					case joaat("component_assaultrifle_varmod_luxe"):
						iVar0 = Global_40001.f_202A;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1113));
						break;
				}
				break;
			
			case joaat("weapon_carbinerifle"):
				switch (iParam1)
				{
					case joaat("component_carbinerifle_clip_01"):
						iVar0 = 99;
						break;
					
					case joaat("component_carbinerifle_clip_02"):
						iVar0 = 9775;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_B2F));
						break;
					
					case joaat("component_at_railcover_01"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4350;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10ED));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2350;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10EA));
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = 10900;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10EC));
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 12450;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10EB));
						break;
					
					case joaat("component_carbinerifle_varmod_luxe"):
						iVar0 = Global_40001.f_202C;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1116));
						break;
				}
				break;
			
			case joaat("weapon_advancedrifle"):
				switch (iParam1)
				{
					case joaat("component_advancedrifle_clip_01"):
						iVar0 = 110;
						break;
					
					case joaat("component_advancedrifle_clip_02"):
						iVar0 = 9925;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_B31));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2425;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10EF));
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = 10950;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10F1));
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 12500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10F0));
						break;
					
					case joaat("component_advancedrifle_varmod_luxe"):
						iVar0 = Global_40001.f_202B;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1111));
						break;
				}
				break;
			
			case joaat("weapon_mg"):
				switch (iParam1)
				{
					case joaat("component_mg_clip_01"):
						iVar0 = 135;
						break;
					
					case joaat("component_mg_clip_02"):
						iVar0 = 9850;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_B32));
						break;
					
					case joaat("component_at_scope_small_02"):
						iVar0 = 10925;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10F2));
						break;
				}
				break;
			
			case joaat("weapon_combatmg"):
				switch (iParam1)
				{
					case joaat("component_combatmg_clip_01"):
						iVar0 = 119;
						break;
					
					case joaat("component_combatmg_clip_02"):
						iVar0 = 10000;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_B33));
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4425;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1107));
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = 10975;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1108));
						break;
				}
				break;
			
			case joaat("weapon_pumpshotgun"):
				switch (iParam1)
				{
					case joaat("component_at_ar_flsh"):
						iVar0 = 1750;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10F5));
						break;
					
					case joaat("component_at_sr_supp"):
						iVar0 = 12350;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10F6));
						break;
				}
				break;
			
			case joaat("weapon_assaultshotgun"):
				switch (iParam1)
				{
					case joaat("component_assaultshotgun_clip_01"):
						iVar0 = 129;
						break;
					
					case joaat("component_assaultshotgun_clip_02"):
						iVar0 = 9625;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_B35));
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4275;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10F9));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2200;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10FA));
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 12350;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10FB));
						break;
				}
				break;
			
			case joaat("weapon_sniperrifle"):
				switch (iParam1)
				{
					case joaat("component_sniperrifle_clip_01"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_scope_large"):
						iVar0 = 12400;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10FC));
						break;
					
					case joaat("component_at_scope_max"):
						iVar0 = 12500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10FD));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12050;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10FE));
						break;
					
					case joaat("component_sniperrifle_varmod_luxe"):
						iVar0 = Global_40001.f_2033;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1122));
						break;
				}
				break;
			
			case joaat("weapon_heavysniper"):
				switch (iParam1)
				{
					case joaat("component_heavysniper_clip_01"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_scope_large"):
						iVar0 = 99;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10FF));
						break;
					
					case joaat("component_at_scope_max"):
						iVar0 = 12500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1100));
						break;
				}
				break;
			
			case joaat("weapon_grenadelauncher"):
				switch (iParam1)
				{
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1109));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1105));
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = 11000;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1106));
						break;
				}
				break;
			
			case joaat("weapon_minigun"):
				switch (iParam1)
				{
					case joaat("component_minigun_clip_01"):
						iVar0 = -1;
						break;
				}
				break;
			
			case joaat("weapon_assaultsmg"):
				switch (iParam1)
				{
					case joaat("component_assaultsmg_clip_01"):
						iVar0 = 110;
						break;
					
					case joaat("component_assaultsmg_clip_02"):
						iVar0 = 9700;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_B2D));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2275;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10DF));
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 10875;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10E1));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12400;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10E0));
						break;
				}
				break;
			
			case joaat("weapon_gusenberg"):
				switch (iParam1)
				{
					case joaat("component_gusenberg_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_gusenberg_clip_02"):
						iVar0 = Global_40001.f_134B;
						break;
				}
				break;
			
			case joaat("weapon_snspistol"):
				switch (iParam1)
				{
					case joaat("component_snspistol_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_snspistol_clip_02"):
						iVar0 = Global_40001.f_158C;
						break;
				}
				break;
			
			case joaat("weapon_specialcarbine"):
				switch (iParam1)
				{
					case joaat("component_specialcarbine_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_specialcarbine_clip_02"):
						iVar0 = Global_40001.f_1590;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_40001.f_1593;
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = Global_40001.f_158F;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = Global_40001.f_158D;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_40001.f_1592;
						break;
				}
				break;
			
			case joaat("weapon_heavypistol"):
				switch (iParam1)
				{
					case joaat("component_heavypistol_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_heavypistol_clip_02"):
						iVar0 = Global_40001.f_1591;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = Global_40001.f_1594;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = Global_40001.f_158E;
						break;
					
					case joaat("component_heavypistol_varmod_luxe"):
						iVar0 = Global_40001.f_15A7;
						break;
				}
				break;
			
			case joaat("weapon_bullpuprifle"):
				switch (iParam1)
				{
					case joaat("component_bullpuprifle_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_bullpuprifle_clip_02"):
						iVar0 = Global_40001.f_1597;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_40001.f_1599;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = Global_40001.f_1595;
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = Global_40001.f_1596;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_40001.f_1598;
						break;
				}
				break;
			
			case joaat("weapon_vintagepistol"):
				switch (iParam1)
				{
					case joaat("component_vintagepistol_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_vintagepistol_clip_02"):
						iVar0 = Global_40001.f_176F;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = Global_40001.f_1770;
						break;
				}
				break;
			
			case joaat("weapon_heavyshotgun"):
				switch (iParam1)
				{
					case joaat("component_heavyshotgun_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_heavyshotgun_clip_02"):
						iVar0 = Global_40001.f_19F9;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_40001.f_19FA;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = Global_40001.f_19FB;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_40001.f_19FC;
						break;
				}
				break;
			
			case joaat("weapon_marksmanrifle"):
				switch (iParam1)
				{
					case joaat("component_marksmanrifle_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_marksmanrifle_clip_02"):
						iVar0 = Global_40001.f_19FF;
						break;
					
					case joaat("component_at_scope_large"):
						iVar0 = Global_40001.f_1A01;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_40001.f_1A00;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = Global_40001.f_1A02;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_40001.f_1A03;
						break;
					
					case joaat("component_marksmanrifle_varmod_luxe"):
						iVar0 = Global_40001.f_1A04;
						break;
				}
				break;
			
			case joaat("weapon_bullpupshotgun"):
				switch (iParam1)
				{
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4100;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2300;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10F7));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12450;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10F8));
						break;
				}
				if (func_59() && (func_159() || func_160()))
				{
					iVar0 = 0;
				}
				break;
			
			case joaat("weapon_pistol50"):
				switch (iParam1)
				{
					case joaat("component_pistol50_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_pistol50_clip_02"):
						iVar0 = 9500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_B29));
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 2000;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10D7));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12250;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10D8));
						break;
					
					case joaat("component_pistol50_varmod_luxe"):
						iVar0 = Global_40001.f_202F;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_111E));
						break;
				}
				if (func_59() && (func_159() || func_160()))
				{
					iVar0 = 0;
				}
				break;
			
			case joaat("weapon_sawnoffshotgun"):
				switch (iParam1)
				{
					case joaat("component_sawnoffshotgun_varmod_luxe"):
						iVar0 = Global_40001.f_2032;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1120));
						break;
				}
				break;
			
			default:
				iVar6 = func_55(iParam0, &uVar8);
				if (iVar6 != -1)
				{
					iVar7 = 0;
					while (iVar7 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar6))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar6, iVar7, &Var9))
						{
							if (Var9.f_3 == iParam1)
							{
								fVar1 = 1f;
								if (Var9.f_5 == -1)
								{
									iVar0 = -1;
								}
								else
								{
									iVar0 = Var9.f_5;
								}
							}
						}
						iVar7++;
					}
				}
				break;
			}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_157())
	{
		StringCopy(&Var11, func_167(iParam1, iParam0), 16);
		func_154(&sVar10, Var11, ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 3, 1, func_150(iParam0), -1, -1);
		if (NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS(&sVar10))
		{
			iVar0 = NETSHOPPING::NET_GAMESERVER_GET_PRICE(MISC::GET_HASH_KEY(&sVar10), 1671640801, 1);
		}
	}
	if (iVar0 > 0)
	{
		fVar12 = func_166(iParam0, &iVar0, fVar1);
		if (fVar12 != 1f)
		{
		}
	}
	return iVar0;
}

float func_166(int iParam0, int iParam1, float fParam2)//Position - 0x11360
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 0f;
	fVar1 = 0f;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_157())
	{
		return 1f;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * fParam2));
	}
	if (!Global_10A95)
	{
		if (*iParam1 != 0)
		{
			iVar2 = func_144(iParam0);
			if (iVar2 == 3)
			{
				fVar1 = 0.1f;
			}
			else if (iVar2 == 2)
			{
				fVar1 = 0.15f;
			}
			else if (iVar2 == 1)
			{
				fVar1 = 0.25f;
			}
		}
	}
	if (iLocal_49 == 1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * Global_40001.f_3E));
			fVar1 = (fVar1 + (SYSTEM::TO_FLOAT(Global_40001.f_68) / 100f));
		}
	}
	if (iLocal_49 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * Global_40001.f_3E));
			if (func_95())
			{
				fVar1 = (fVar1 + (SYSTEM::TO_FLOAT(Global_40001.f_68) / 100f));
				iLocal_49 = 1;
			}
			else
			{
				iLocal_49 = -1;
			}
		}
	}
	fVar0 = (1f - fVar1);
	*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * fVar0));
	return fVar0;
}

char* func_167(int iParam0, int iParam1)//Position - 0x11476
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<7> Var3;
	
	switch (iParam0)
	{
		case 0:
			return "WCT_INVALID";
			break;
		
		case joaat("component_at_railcover_01"):
			return "WCT_RAIL";
			break;
		
		case joaat("component_at_ar_afgrip"):
			return "WCT_GRIP";
			break;
		
		case joaat("component_at_pi_flsh"):
			return "WCT_FLASH";
			break;
		
		case joaat("component_at_ar_flsh"):
			return "WCT_FLASH";
			break;
		
		case joaat("component_at_scope_macro"):
			return "WCT_SCOPE_MAC";
			break;
		
		case joaat("component_at_scope_macro_02"):
			return "WCT_SCOPE_MAC";
			break;
		
		case joaat("component_at_scope_small"):
			return "WCT_SCOPE_SML";
			break;
		
		case joaat("component_at_scope_small_02"):
			return "WCT_SCOPE_SML";
			break;
		
		case joaat("component_at_scope_medium"):
			return "WCT_SCOPE_MED";
			break;
		
		case joaat("component_at_scope_large"):
			return "WCT_SCOPE_LRG";
			break;
		
		case joaat("component_at_scope_max"):
			return "WCT_SCOPE_MAX";
			break;
		
		case joaat("component_at_pi_supp"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_at_ar_supp"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_at_ar_supp_02"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_at_sr_supp"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_pistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_pistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_combatpistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_combatpistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_appistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_appistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_microsmg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_microsmg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_smg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_smg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_assaultrifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_assaultrifle_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_carbinerifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_carbinerifle_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_advancedrifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_advancedrifle_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_mg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_mg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_combatmg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_combatmg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_assaultshotgun_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_assaultshotgun_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_sniperrifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_heavysniper_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_minigun_clip_01"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_assaultsmg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_assaultsmg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_pistol50_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_pistol50_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case 195735895:
			return "WCT_CLIP1";
			break;
		
		case 1525977990:
			return "WCT_CLIP1";
			break;
		
		case 1824470811:
			return "WCT_CLIP2";
			break;
		
		case -890514874:
			return "WCT_CLIP1";
			break;
		
		case -507117574:
			return "WCT_CLIP2";
			break;
		
		case -124428919:
			return "WCT_CLIP1";
			break;
		
		case 1048471894:
			return "WCT_CLIP2";
			break;
		
		case joaat("component_snspistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_snspistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_vintagepistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_vintagepistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_heavyshotgun_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_marksmanrifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_heavyshotgun_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_marksmanrifle_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_at_scope_large_fixed_zoom"):
			return "WCT_SCOPE_LRG";
			break;
		
		case joaat("component_at_pi_supp_02"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_combatpdw_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_combatpdw_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_assaultrifle_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_advancedrifle_varmod_luxe"):
			return "WCT_VAR_METAL";
			break;
		
		case joaat("component_carbinerifle_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_appistol_varmod_luxe"):
			return "WCT_VAR_METAL";
			break;
		
		case joaat("component_pistol_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_pistol50_varmod_luxe"):
			return "WCT_VAR_SIL";
			break;
		
		case joaat("component_heavypistol_varmod_luxe"):
			return "WCT_VAR_WOOD";
			break;
		
		case joaat("component_smg_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_microsmg_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_sawnoffshotgun_varmod_luxe"):
			return "WCT_VAR_METAL";
			break;
		
		case joaat("component_sniperrifle_varmod_luxe"):
			return "WCT_VAR_WOOD";
			break;
		
		case joaat("component_marksmanrifle_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		default:
			if (iParam1 != 0)
			{
				iVar0 = func_55(iParam1, &uVar2);
				if (iVar0 != -1)
				{
					iVar1 = 0;
					while (iVar1 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar0))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar0, iVar1, &Var3))
						{
							if (Var3.f_3 == iParam0)
							{
								return func_156(&(Var3.f_6));
							}
						}
						iVar1++;
					}
				}
			}
			break;
	}
	return "WCT_INVALID";
}

void func_168(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1199A
{
	*uParam0 = iParam1;
	uParam0->f_4 = iParam2;
	uParam0->f_5 = iParam3;
	uParam0->f_1 = iParam4;
}

void func_169(var uParam0)//Position - 0x119B9
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (CAM::DOES_CAM_EXIST((*uParam0)[iVar0 /*12*/]))
		{
			CAM::DESTROY_CAM((*uParam0)[iVar0 /*12*/], 0);
		}
		iVar0++;
	}
}

void func_170(var uParam0, int iParam1)//Position - 0x119EF
{
	if (*uParam0 == iParam1 && uParam0->f_7)
	{
		func_24("Unable to lock shop doors as player is inside the shop.", -1);
	}
	else
	{
		func_769(iParam1, 1, 0);
	}
	func_180(iParam1, 0);
	func_179(iParam1, 0);
	func_178(iParam1, 1, 1);
	func_178(iParam1, 10, 1);
	func_178(iParam1, 11, 1);
	func_178(iParam1, 12, 1);
	func_178(iParam1, 13, 1);
	func_178(iParam1, 22, 1);
	func_178(iParam1, 25, 1);
	if (uParam0->f_1 == 1)
	{
		func_178(iParam1, 19, 1);
	}
	if (!func_855(iParam1))
	{
		func_24("Letting shop controller know to relaunch when in range.", -1);
		func_176(iParam1, 17, 1);
	}
	func_175(iParam1);
	func_172(iParam1);
	func_171(PLAYER::PLAYER_ID(), iParam1);
	func_27();
	if (func_25(iParam1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_C) && !PED::IS_PED_INJURED(uParam0->f_C))
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_C))
			{
				PED::SET_PED_KEEP_TASK(uParam0->f_C, 1);
			}
		}
	}
	else
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID());
		}
		if (func_846(uParam0, iParam1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_C))
			{
				PED::DELETE_PED(&(uParam0->f_C));
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_C))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_C));
		}
	}
}

void func_171(int iParam0, int iParam1)//Position - 0x11B3C
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

void func_172(int iParam0)//Position - 0x11B77
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_173(iParam0, iVar0);
		iVar0++;
	}
}

void func_173(int iParam0, int iParam1)//Position - 0x11B99
{
	if (iParam0 != -1 && iParam1 != 0)
	{
		if (Global_15F9E.f_124[func_174(iParam0) /*5*/][iParam1] == 2)
		{
			Global_15F9E.f_124[func_174(iParam0) /*5*/][iParam1] = 4;
		}
		else
		{
			Global_15F9E.f_124[func_174(iParam0) /*5*/][iParam1] = 0;
		}
		if (Global_15F9E.f_143[func_174(iParam0)] == iParam1)
		{
			Global_15F9E.f_143[func_174(iParam0)] = 0;
		}
	}
}

int func_174(int iParam0)//Position - 0x11C17
{
	switch (iParam0)
	{
		case 39:
			return 1;
			break;
		
		case 40:
			return 2;
			break;
		
		case 41:
			return 3;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 5;
			break;
	}
	return 0;
}

void func_175(int iParam0)//Position - 0x11C68
{
	Global_15F9E.f_99[iParam0] = 1;
	Global_15F9E.f_98 = 1;
}

void func_176(int iParam0, int iParam1, bool bParam2)//Position - 0x11C82
{
	var uVar0;
	
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_15F9E.f_4F3[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_22() == 0)
		{
			uVar0 = func_18(func_21(iParam0), -1, 0);
			MISC::SET_BIT(&uVar0, iParam1);
			func_177(func_21(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_17C49.f_29C[iParam0]), iParam1);
	}
}

void func_177(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x11CEA
{
	int iVar0;
	
	iVar0 = Global_25744D[iParam0 /*6*/][func_19(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

void func_178(int iParam0, int iParam1, bool bParam2)//Position - 0x11D15
{
	var uVar0;
	
	if (bParam2)
	{
		MISC::CLEAR_BIT(&(Global_15F9E.f_4F3[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_22() == 0)
		{
			uVar0 = func_18(func_21(iParam0), -1, 0);
			MISC::CLEAR_BIT(&uVar0, iParam1);
			func_177(func_21(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_17C49.f_29C[iParam0]), iParam1);
	}
}

void func_179(int iParam0, bool bParam1)//Position - 0x11D7D
{
	if (bParam1)
	{
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		if (!func_17(iParam0, 6, 1))
		{
			func_176(iParam0, 6, 1);
			Global_15F9E.f_123++;
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				PLAYER::FORCE_CLEANUP(8);
			}
		}
	}
	else if (func_17(iParam0, 6, 1))
	{
		func_178(iParam0, 6, 1);
		if (Global_15F9E.f_123 > 0)
		{
			Global_15F9E.f_123 = (Global_15F9E.f_123 - 1);
		}
		BRAIN::_0x6D6840CEE8845831("act_cinema");
	}
}

void func_180(int iParam0, bool bParam1)//Position - 0x11DFD
{
	if (bParam1)
	{
		Global_15F9E.f_170 = iParam0;
		if (!func_17(iParam0, 5, 1))
		{
			func_176(iParam0, 5, 1);
			func_175(iParam0);
			Global_15F9E.f_122++;
		}
	}
	else if (func_17(iParam0, 5, 1))
	{
		func_178(iParam0, 5, 1);
		func_175(iParam0);
		if (Global_15F9E.f_122 > 0)
		{
			Global_15F9E.f_122 = (Global_15F9E.f_122 - 1);
		}
	}
}

void func_181(var uParam0)//Position - 0x11E74
{
	int iVar0;
	
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_182(*uParam0);
	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_8B1D[iVar0 /*18*/])
		{
			Global_8B1D[iVar0 /*18*/].f_6 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

int func_182(int iParam0)//Position - 0x11ECB
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

void func_183()//Position - 0x11F06
{
	Global_250CE3.f_290.f_1C = 1;
	Global_250CE3.f_290.f_20 = 0;
	Global_250CE3.f_290.f_1F = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
	func_184(&(Global_250CE3.f_290.f_1D));
}

void func_184(var uParam0)//Position - 0x11F40
{
	uParam0->f_1 = 0;
}

bool func_185()//Position - 0x11F4D
{
	return Global_250CE3.f_290.f_5;
}

void func_186()//Position - 0x11F5E
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<25> Var3;
	
	if (func_858(1))
	{
		if (func_7(PLAYER::PLAYER_ID(), 0, 1))
		{
			func_724();
			func_723();
		}
		else if (!func_722())
		{
			func_723();
		}
		return;
	}
	bLocal_178 = (((((!HUD::IS_PAUSE_MENU_ACTIVE() && !PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !iLocal_197) && !Global_15F9E.f_526) && !NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE());
	bLocal_179 = true;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1);
		if ((WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), Global_15F9E.f_1, 0) && Local_131.f_67.f_1F == 2) && Global_15F9E.f_1 != joaat("gadget_parachute"))
		{
			iVar1 = Global_15F9E.f_1;
		}
		else
		{
			iVar1 = joaat("weapon_unarmed");
		}
		if (iVar0 != iVar1)
		{
			if (iVar1 == joaat("gadget_parachute"))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iVar1, 0);
			}
			else
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iVar1, 1);
			}
			WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 1);
			WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(PLAYER::PLAYER_PED_ID(), 0, 0, 1, 0);
		}
		if ((iVar1 != 0 && iVar1 != joaat("weapon_unarmed")) && iVar1 != joaat("gadget_parachute"))
		{
			bLocal_179 = false;
		}
	}
	if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::DOES_ENTITY_EXIST(Local_131.f_C)) && !PED::IS_PED_INJURED(Local_131.f_C))
	{
		NETWORK::SET_ENTITY_LOCALLY_VISIBLE(Local_131.f_C);
	}
	func_710(&Local_131, &(Local_131.f_67));
	if (Local_131.f_67.f_1F > 1)
	{
		func_708(0, bLocal_179, 1);
	}
	func_704();
	switch (Local_131.f_67.f_1F)
	{
		case 0:
			if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Local_131.f_AA.f_1F, 7f) && !Global_10A95)
			{
				func_702(&Local_131);
			}
			Local_211.f_13 = 0;
			Local_211.f_12 = 0;
			MISC::_0x65D2EBB47E1CEC21(1);
			func_699(0, 0, 0);
			func_697("GUN_MNU", Local_131);
			Global_26C415 = 1;
			func_696(Local_131);
			func_695();
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("HUD_AMMO_SHOP", 0);
			func_694();
			bVar2 = true;
			if (!bLocal_188)
			{
				func_24("Waiting for weapons to load", -1);
				if (!func_699(1, 1, 0))
				{
					bVar2 = false;
				}
			}
			if (!func_697("GUN_MNU", Local_131))
			{
				func_24("Waiting for menu assets to load", -1);
				bVar2 = false;
			}
			if (!func_696(Local_131))
			{
				func_24("Waiting for intro assets to load", -1);
				bVar2 = false;
			}
			if (!func_695())
			{
			}
			if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("HUD_AMMO_SHOP", 0))
			{
				func_24("Waiting for audio assets to load", -1);
				bVar2 = false;
			}
			if (bVar2)
			{
				Local_131.f_67.f_1F = 1;
				Local_131.f_67.f_5 = 0;
			}
			else if (SYSTEM::TIMERA() > 25000)
			{
				Local_131.f_67.f_1F = 8;
			}
			break;
		
		case 1:
			switch (Local_131.f_67.f_5)
			{
				case 0:
					Local_131.f_67.f_13 = 1;
					func_693(0, 1, Local_131.f_C, 0, 1, 0);
					func_689(&(Local_131.f_67));
					func_688(&Local_131, 1077936128);
					iLocal_165 = 0;
					bLocal_167 = true;
					iLocal_166 = 1;
					iLocal_168 = 1;
					bLocal_193 = false;
					iLocal_170 = 0;
					bLocal_214 = false;
					iLocal_169 = MISC::GET_GAME_TIMER();
					Local_131.f_67.f_1 = 0;
					Local_131.f_67.f_2 = -1;
					Local_131.f_67.f_3 = 0;
					Local_131.f_67.f_4 = 0;
					Local_131.f_67.f_9 = 0;
					Local_131.f_67.f_A = 1;
					Local_131.f_67.f_5 = 0;
					Local_131.f_67.f_10 = 0;
					Local_131.f_67.f_11 = 0;
					Local_131.f_67.f_17 = 0;
					StringCopy(&(Local_131.f_67.f_B), "", 16);
					bLocal_223 = false;
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						HUD::SET_MULTIPLAYER_WALLET_CASH();
						HUD::SET_MULTIPLAYER_BANK_CASH();
					}
					if (!Global_10A95)
					{
						Local_211.f_13 = 1;
					}
					func_82(1, 0);
					func_686(Local_131, Local_131.f_67, &(Local_131.f_67.f_1), &(Local_131.f_67.f_3), &Var3);
					if (!func_685(Var3, Var3.f_18))
					{
						func_684(Local_131, &(Local_131.f_67.f_1), Local_131.f_67.f_3, &Var3);
					}
					func_683(Var3);
					func_677();
					func_638();
					if (func_84(Local_131, &Global_26CE2D, &Var3, Local_131.f_67.f_3, Local_131.f_67.f_1, 0))
					{
						func_635(&Local_131, &(Local_131.f_67), &Var3, 0);
					}
					else
					{
						func_633(&Local_131, Local_131.f_67.f_4, Local_131.f_67.f_3);
					}
					func_630(&(Local_131.f_26[Local_131.f_67.f_4 /*12*/]));
					if (!Global_10A95)
					{
						if (func_42(1))
						{
							ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false);
						}
					}
					else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 185, 1);
					}
					iLocal_100 = 0;
					iLocal_225 = 0;
					iLocal_227 = 0;
					iLocal_226 = 0;
					Local_131.f_67.f_1F = 2;
					break;
			}
			break;
		
		case 2:
			if (PAD::_0x6CD79468A1E595C6(2))
			{
				func_638();
			}
			func_695();
			func_343();
			func_324();
			func_322();
			func_318();
			func_193();
			break;
		
		case 6:
			func_27();
			Local_131.f_67.f_1F = 7;
			break;
		
		case 7:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				HUD::REMOVE_MULTIPLAYER_WALLET_CASH();
				HUD::REMOVE_MULTIPLAYER_BANK_CASH();
			}
			func_28(1);
			Local_211.f_13 = 0;
			if (ENTITY::DOES_ENTITY_EXIST(Local_131.f_C))
			{
				TASK::TASK_LOOK_AT_ENTITY(Local_131.f_C, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				if (Global_10A95)
				{
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 185, 0);
				}
			}
			func_192(&(Local_131.f_26));
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
			func_82(0, 1);
			MISC::_0x65D2EBB47E1CEC21(0);
			func_75();
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
				WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(PLAYER::PLAYER_PED_ID(), 1, 1, 1, 0);
				WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 0);
			}
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				func_190(PLAYER::PLAYER_PED_ID(), 0);
			}
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iLocal_170)
				{
					if (!Global_17C49.f_29C.f_2AD)
					{
						func_187("AM_H_ARMR", 2, 0, 1000, 10000, 7, 0, 0, 0);
						Global_17C49.f_29C.f_2AD = 0;
					}
					iLocal_170 = 0;
				}
			}
			func_66();
			Global_15F9E.f_1 = 0;
			func_29(&(Local_131.f_67), 0, 1, 1);
			func_79(1, Local_131);
			Global_26C415 = 0;
			Local_131.f_67.f_13 = 0;
			Local_131.f_B = 3;
			break;
		
		case 8:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				HUD::REMOVE_MULTIPLAYER_WALLET_CASH();
				HUD::REMOVE_MULTIPLAYER_BANK_CASH();
			}
			func_192(&(Local_131.f_26));
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
				WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(PLAYER::PLAYER_PED_ID(), 1, 1, 1, 0);
				WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 0);
			}
			func_82(0, 1);
			MISC::_0x65D2EBB47E1CEC21(0);
			func_79(1, Local_131);
			Global_26C415 = 0;
			func_77(Local_131);
			AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
			func_76();
			func_75();
			func_29(&(Local_131.f_67), 0, 1, 1);
			func_28(1);
			func_66();
			Local_211.f_13 = 0;
			Global_15F9E.f_1 = 0;
			Local_131.f_67.f_13 = 0;
			Local_131.f_B = 3;
			break;
	}
	func_26(&Local_211, 0);
}

void func_187(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x125DC
{
	func_188(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_188(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x125FC
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
		func_189();
	}
}

void func_189()//Position - 0x127CE
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

void func_190(int iParam0, bool bParam1)//Position - 0x128EE
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_64(iParam0);
	if (func_63(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		if (iParam0 == PLAYER::PLAYER_PED_ID())
		{
			func_191(iParam0, &(Global_17C49.f_6C1.f_21B.f_12A[iVar0 /*284*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_17C49.f_6C1.f_21B.f_47F[iVar2 /*4*/][iVar0] = HUD::_HUD_WEAPON_WHEEL_GET_SLOT_HASH(iVar2);
				if (bParam1)
				{
					iVar1 = HUD::_HUD_WEAPON_WHEEL_GET_SELECTED_HASH();
					if (Global_17C49.f_6C1.f_21B.f_47F[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_17C49.f_6C1.f_21B.f_4A0 = iVar2;
					}
				}
				iVar2++;
			}
			PLAYER::GET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), &iVar3);
			if (iVar0 == 0)
			{
				STATS::STAT_SET_INT(joaat("sp0_parachute_current_tint"), iVar3, 1);
			}
			else if (iVar0 == 1)
			{
				STATS::STAT_SET_INT(joaat("sp1_parachute_current_tint"), iVar3, 1);
			}
			else if (iVar0 == 2)
			{
				STATS::STAT_SET_INT(joaat("sp2_parachute_current_tint"), iVar3, 1);
			}
		}
	}
}

void func_191(int iParam0, var uParam1)//Position - 0x129E1
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	int iVar5;
	int iVar6;
	struct<2> Var7;
	struct<4> Var8;
	int iVar9;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			(uParam1[iVar0 /*3*/])->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_62(iVar0);
			if (iVar3 != 0)
			{
				Var4.x = WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(iParam0, func_62(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				if (Var4.x != 0 && Var4.x != joaat("weapon_unarmed"))
				{
					Var4.f_1 = WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, Var4.x);
					if (Var4.x == joaat("gadget_parachute"))
					{
						Var4.f_1 = 1;
					}
					MISC::SET_BIT(&(Var4.f_2), (20 + WEAPON::GET_PED_WEAPON_TINT_INDEX(iParam0, Var4.x)));
					if (Var4.f_1 == -1)
					{
						if (!WEAPON::GET_MAX_AMMO(iParam0, Var4.x, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*3*/])->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = func_56(Var4.x, iVar1);
					while (iVar2 != 0)
					{
						if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, Var4.x, iVar2))
						{
							MISC::SET_BIT(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_56(Var4.x, iVar1);
					}
				}
				*(uParam1[iVar0 /*3*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (50 - 1))
		{
			uParam1->f_85[iVar0 /*3*/].f_1 = 0;
			iVar0++;
		}
		iVar6 = FILES::GET_NUM_DLC_WEAPONS();
		iVar5 = 0;
		while (iVar5 < iVar6)
		{
			if ((FILES::GET_DLC_WEAPON_DATA(iVar5, &Var7) && !func_57(Var7.f_1)) && iVar9 < 50)
			{
				if (!FILES::IS_CONTENT_ITEM_LOCKED(Var7))
				{
					Var4.x = Var7.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_1 = WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, Var4.x);
					if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, Var4.x, 0))
					{
						MISC::SET_BIT(&(Var4.f_2), (20 + WEAPON::GET_PED_WEAPON_TINT_INDEX(iParam0, Var4.x)));
					}
					else
					{
						MISC::SET_BIT(&(Var4.f_2), 20);
					}
					if (Var4.f_1 == -1)
					{
						if (!WEAPON::GET_MAX_AMMO(iParam0, Var4.x, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_85[iVar9 /*3*/].f_1 = Var4.f_1;
					iVar1 = 0;
					while (iVar1 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar5))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar5, iVar1, &Var8))
						{
							if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, Var4.x, Var8.f_3))
							{
								MISC::SET_BIT(&(Var4.f_2), iVar1);
							}
						}
						iVar1++;
					}
				}
				if (Var4.x != 0)
				{
					if (!WEAPON::HAS_PED_GOT_WEAPON(iParam0, Var4.x, 0))
					{
						Var4.x = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_85[iVar9 /*3*/] = { Var4 };
				iVar9++;
			}
			iVar5++;
		}
	}
}

void func_192(var uParam0)//Position - 0x12C45
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

void func_193()//Position - 0x12C7B
{
	struct<26> Var0;
	int iVar1;
	int iVar2;
	float fVar3;
	bool bVar4;
	char* sVar5;
	char cVar6[16];
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	float fVar11;
	bool bVar12;
	int iVar13;
	int iVar14;
	float fVar15;
	int iVar16;
	bool bVar17;
	int iVar18;
	bool bVar19;
	bool bVar20;
	int iVar21;
	var uVar22;
	float fVar23;
	bool bVar24;
	bool bVar25;
	int iVar26;
	var uVar27;
	float fVar28;
	bool bVar29;
	bool bVar30;
	bool bVar31;
	bool bVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	struct<5> Var38;
	struct<5> Var39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	float fVar44;
	float fVar45;
	float fVar46;
	float fVar47;
	float fVar48;
	float fVar49[4];
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	float fVar55;
	float fVar56;
	
	if (iLocal_177 && !Local_131.f_67.f_19)
	{
		if (Local_131.f_67.f_5 == 1 && Local_131.f_67.f_2 == -1)
		{
			if (func_84(Local_131, &Global_26CE2D, &Var0, Local_131.f_67.f_3, Local_131.f_67.f_1, 0))
			{
				if (Var0.f_18 == 0 && Var0.f_19 != 0)
				{
					Local_131.f_67.f_2 = 0;
				}
				else if (func_317(Var0, &(Local_131.f_67.f_2)))
				{
					Local_131.f_67.f_2++;
				}
				else if (func_313(Var0, &(Local_131.f_67.f_2)))
				{
					Local_131.f_67.f_2 += 21;
				}
				else
				{
					Local_131.f_67.f_2 = -1;
				}
			}
			if (Var0 == joaat("gadget_parachute"))
			{
				PLAYER::GET_PLAYER_PARACHUTE_TINT_INDEX(PLAYER::PLAYER_ID(), &iLocal_172);
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					iLocal_175 = func_18(2024, -1, 0);
				}
				iLocal_174 = func_312();
				if (PLAYER::GET_PLAYER_HAS_RESERVE_PARACHUTE(PLAYER::PLAYER_ID()))
				{
					PLAYER::GET_PLAYER_RESERVE_PARACHUTE_TINT_INDEX(PLAYER::PLAYER_ID(), &iLocal_173);
				}
				else
				{
					iLocal_173 = -1;
				}
			}
			else if (Var0 == -61829581)
			{
			}
			else
			{
				iLocal_172 = WEAPON::GET_PED_WEAPON_TINT_INDEX(PLAYER::PLAYER_PED_ID(), Var0);
				if (func_311(Var0))
				{
					if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), Var0, func_310(Var0)))
					{
						if (WEAPON::HAS_WEAPON_GOT_WEAPON_COMPONENT(Local_131.f_DA[(Local_131.f_67.f_3 * 6 + Local_131.f_67.f_1)], func_310(Var0)))
						{
							iLocal_172 = -1;
						}
					}
				}
			}
			iLocal_176 = Local_131.f_67.f_2;
		}
		func_677();
		func_638();
		iLocal_177 = 0;
	}
	HUD::SHOW_HUD_COMPONENT_THIS_FRAME(3);
	HUD::SHOW_HUD_COMPONENT_THIS_FRAME(4);
	HUD::SHOW_HUD_COMPONENT_THIS_FRAME(5);
	HUD::SHOW_HUD_COMPONENT_THIS_FRAME(13);
	if (!bLocal_179)
	{
		HUD::SHOW_HUD_COMPONENT_THIS_FRAME(2);
	}
	if (Local_131.f_67.f_10)
	{
		if (MISC::GET_HASH_KEY(&(Local_131.f_67.f_B)) == joaat("GSM_UNLOCK_N"))
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				func_309(&(Local_131.f_67.f_B), 0, 0);
			}
			else if (Global_15F9E.f_1 == joaat("weapon_bottle") || Global_15F9E.f_1 == joaat("weapon_snspistol"))
			{
				func_309("SHOP_UNLOCKDLC", 0, 0);
				func_308("SHOP_CONTENT_1");
			}
			else if (Global_15F9E.f_1 == joaat("weapon_gusenberg"))
			{
				func_309("SHOP_UNLOCKDLC", 0, 0);
				func_308("SHOP_CONTENT_4");
			}
			else if (Global_15F9E.f_1 == joaat("weapon_heavypistol") || Global_15F9E.f_1 == joaat("weapon_specialcarbine"))
			{
				func_309("SHOP_UNLOCKDLC2", 0, 0);
				func_308("SHOP_CONTENT_2");
			}
			else if (Global_15F9E.f_1 == joaat("weapon_bullpuprifle"))
			{
				func_309("SHOP_UNLOCKDLC2", 0, 0);
				func_308("SHOP_CONTENT_5");
			}
			else if (Global_15F9E.f_1 == joaat("weapon_dagger") || Global_15F9E.f_1 == joaat("weapon_vintagepistol"))
			{
				func_309("SHOP_UNLOCKDLC2", 0, 0);
				func_308("SHOP_CONTENT_6b");
			}
			else if (Global_15F9E.f_1 == joaat("weapon_combatpdw"))
			{
				func_309("SHOP_UNLOCKDLC2", 0, 0);
				func_308("SHOP_CONTENT_12");
			}
			else if (Global_15F9E.f_1 == joaat("weapon_musket"))
			{
				func_309("SHOP_UNLOCKDLC3", 0, 0);
				func_308("SHOP_CONTENT_8");
			}
			else if (Global_15F9E.f_1 == joaat("weapon_hominglauncher") || Global_15F9E.f_1 == joaat("weapon_proxmine"))
			{
				func_309("SHOP_UNLOCKDLC4", 0, 0);
				func_308("SHOP_CONTENT_3");
			}
			else if (Global_15F9E.f_1 == joaat("gadget_parachute"))
			{
				if (func_84(Local_131, &Global_26CE2D, &Var0, Local_131.f_67.f_3, Local_131.f_67.f_1, 0))
				{
					if (func_305(&Local_234, Var0, func_307(Var0, (Local_131.f_67.f_2 - 21)), 0))
					{
						if (Local_234.f_A == 1 && Local_234.f_9 > 46)
						{
							func_309("SHOP_UNLOCKDLC4", 0, 0);
							func_308("SHOP_CONTENT_3");
						}
						else if (Local_234.f_A == 1 && Local_234.f_9 > 26)
						{
							func_309("SHOP_UNLOCKDLC2", 0, 0);
							func_308("SHOP_CONTENT_10b");
						}
						else if (((Local_234.f_A == 1 && Local_234.f_9 > 0) || (Local_234.f_A == 2 && Local_234.f_9 >= 8)) || (Local_234.f_A == 3 && Local_234.f_9 >= 8))
						{
							func_309("SHOP_UNLOCKDLC2", 0, 0);
							func_308("SHOP_CONTENT_9b");
						}
						else
						{
							func_309(&(Local_131.f_67.f_B), 0, 0);
						}
					}
				}
			}
			else
			{
				func_309(&(Local_131.f_67.f_B), 0, 0);
			}
		}
		else
		{
			func_309(&(Local_131.f_67.f_B), 0, 0);
			if (MISC::GET_HASH_KEY(&(Local_131.f_67.f_B)) == joaat("GSM_INV_FULL"))
			{
				if (!func_302(238))
				{
					func_300(func_301(238));
				}
				else if (!func_302(239))
				{
					func_300(func_301(239));
				}
				else if (!func_302(240))
				{
					func_300(func_301(240));
				}
				else if (!func_302(241))
				{
					func_300(func_301(241));
				}
				else if (!func_302(242))
				{
					func_300(func_301(242));
				}
				else if (!func_302(243))
				{
					func_300(func_301(243));
				}
				else if (!func_302(244))
				{
					func_300(func_301(244));
				}
				else if (!func_302(245))
				{
					func_300(func_301(245));
				}
				else if (!func_302(246))
				{
					func_300(func_301(246));
				}
				else if (!func_302(247))
				{
					func_300(func_301(247));
				}
			}
		}
		iVar1 = 0;
		iVar2 = 0;
		fVar3 = (1f - func_94(Var0, &iVar1, &iVar2));
		if (fVar3 != 0f)
		{
			func_299("GSHOP_DISC", 0, 0);
			func_298(SYSTEM::ROUND((fVar3 * 100f)));
		}
		if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), Local_131.f_67.f_7)) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - Local_131.f_67.f_6) > 0))
		{
			Local_131.f_67.f_10 = 0;
		}
	}
	if (!Local_131.f_67.f_10)
	{
		bVar4 = false;
		if (func_84(Local_131, &Global_26CE2D, &Var0, Local_131.f_67.f_3, Local_131.f_67.f_1, 0))
		{
			if (Local_131.f_67.f_5 == 0)
			{
				if (Var0.f_18 == 7)
				{
					if (MISC::IS_PS3_VERSION() || MISC::IS_ORBIS_VERSION())
					{
						func_309("GSM_DLC1", 0, 0);
						bVar4 = true;
					}
					else if (MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION())
					{
						func_309("GSM_DLC2", 0, 0);
						bVar4 = true;
					}
				}
				else if (!MISC::IS_BIT_SET(Local_131.f_285, 7))
				{
					if (Global_10A95)
					{
						if (Var0.f_18 == 4)
						{
							func_309("GS_STOCK2", 0, 0);
							func_300(func_301(1));
						}
						else if (Var0.f_18 == 3)
						{
							if (Local_131.f_67.f_1 == 0)
							{
								func_309("GS_STOCK2", 0, 0);
								func_300(func_301(156));
							}
							else if (Local_131.f_67.f_1 == 1)
							{
								func_309("GS_STOCK2", 0, 0);
								func_300(func_301(157));
							}
							else if (Local_131.f_67.f_1 == 2)
							{
								func_309("GS_STOCK2", 0, 0);
								func_300(func_301(158));
							}
							else if (Local_131.f_67.f_1 == 3)
							{
								func_309("GS_STOCK2", 0, 0);
								func_300(func_301(159));
							}
							else if (Local_131.f_67.f_1 == 4)
							{
								func_309("GS_STOCK2", 0, 0);
								func_300(func_301(160));
							}
							else
							{
								func_309("GS_STOCK", 0, 0);
							}
						}
						else if (((Var0.f_18 == 0 || Var0.f_18 == 1) || Var0.f_18 == 2) || Var0.f_18 == 5)
						{
							if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !func_60(1, 1)) && Var0 == joaat("weapon_sawnoffshotgun"))
							{
								func_309("GSM_LOCK_SCLUB", 0, 0);
							}
							else
							{
								func_309("GS_STOCK2", 0, 0);
								func_300(func_297(Var0));
							}
						}
						else
						{
							func_309("GS_STOCK", 0, 0);
						}
						bVar4 = true;
					}
					else
					{
						func_309("GS_STOCK", 0, 0);
						bVar4 = true;
					}
				}
				else
				{
					if (Var0.f_18 == 3 && Global_10A95)
					{
						if (Local_131.f_67.f_1 == 0)
						{
							iVar7 = 156;
						}
						else if (Local_131.f_67.f_1 == 1)
						{
							iVar7 = 157;
						}
						else if (Local_131.f_67.f_1 == 2)
						{
							iVar7 = 158;
						}
						else if (Local_131.f_67.f_1 == 3)
						{
							iVar7 = 159;
						}
						else if (Local_131.f_67.f_1 == 4)
						{
							iVar7 = 160;
						}
						if (func_295(func_147(), iVar7))
						{
							func_286(func_147(), iVar7);
							func_284(&(Local_131.f_67), "GSM_UNLOCK_N", 3000);
						}
						else
						{
							func_282(&Global_26CE2D, Local_131.f_67.f_3, Local_131.f_67.f_1, &sVar5, &cVar6);
							if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar6) && HUD::DOES_TEXT_LABEL_EXIST(&cVar6))
							{
								func_309(&cVar6, 0, 0);
								bVar4 = true;
							}
						}
					}
					else
					{
						bVar8 = false;
						if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							switch (Var0)
							{
								case joaat("weapon_bottle"):
									StringCopy(&cVar6, "WTD2_Bottle", 16);
									bVar8 = true;
									break;
								
								case joaat("weapon_snspistol"):
									StringCopy(&cVar6, "WTD2_SNSPistol", 16);
									bVar8 = true;
									break;
								
								case joaat("weapon_gusenberg"):
									StringCopy(&cVar6, "WTD2_GUSNBRG", 16);
									bVar8 = true;
									break;
								
								case joaat("weapon_heavypistol"):
									StringCopy(&cVar6, "WTD2_HvyPistol", 16);
									bVar8 = true;
									break;
								
								case joaat("weapon_specialcarbine"):
									StringCopy(&cVar6, "WTD2_SpCarbine", 16);
									bVar8 = true;
									break;
								
								case joaat("weapon_bullpuprifle"):
									StringCopy(&cVar6, "WTD2_BullRifle", 16);
									bVar8 = true;
									break;
								
								case joaat("weapon_dagger"):
									StringCopy(&cVar6, "WTD2_DAGGER", 16);
									bVar8 = true;
									break;
								
								case joaat("weapon_vintagepistol"):
									StringCopy(&cVar6, "WTD2_VPISTOL", 16);
									bVar8 = true;
									break;
								
								case joaat("weapon_firework"):
									StringCopy(&cVar6, "WTD2_FIREWRK", 16);
									bVar8 = true;
									break;
								
								case joaat("weapon_musket"):
									StringCopy(&cVar6, "WTD2_MUSKET", 16);
									bVar8 = true;
									break;
								
								case joaat("weapon_marksmanrifle"):
									StringCopy(&cVar6, "WTD2_MKRIFLE", 16);
									bVar8 = true;
									break;
								
								case joaat("weapon_heavyshotgun"):
									StringCopy(&cVar6, "WTD2_HVYSHGN", 16);
									bVar8 = true;
									break;
								
								case joaat("weapon_hominglauncher"):
									StringCopy(&cVar6, "WTD2_HOMLNCH", 16);
									bVar8 = true;
									break;
								
								case joaat("weapon_proxmine"):
									StringCopy(&cVar6, "WTD2_PRXMINE", 16);
									bVar8 = true;
									break;
								
								case joaat("weapon_combatpdw"):
									StringCopy(&cVar6, "WTD2_COMBATPDW", 16);
									bVar8 = true;
									break;
								}
						}
						if (bVar8)
						{
							func_309(&cVar6, 0, 0);
							bVar4 = true;
						}
						else
						{
							func_282(&Global_26CE2D, Local_131.f_67.f_3, Local_131.f_67.f_1, &sVar5, &cVar6);
							if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar6) && HUD::DOES_TEXT_LABEL_EXIST(&cVar6))
							{
								func_309(&cVar6, 0, 0);
								bVar4 = true;
							}
						}
					}
					if (!MISC::IS_BIT_SET(Local_131.f_285, 0))
					{
						iVar9 = 0;
						iVar10 = 0;
						fVar11 = (1f - func_94(Var0, &iVar9, &iVar10));
						if (fVar11 != 0f)
						{
							func_299("GSHOP_DISC", 0, 0);
							func_298(SYSTEM::ROUND((fVar11 * 100f)));
						}
					}
				}
			}
			else if (Local_131.f_67.f_5 == 1)
			{
				if (bLocal_221)
				{
					if (iLocal_222 == 0)
					{
						func_309("GS_PARA_M0", 0, 0);
						bVar4 = true;
					}
					else if (iLocal_222 == 1)
					{
						func_309("GS_PARA_M1", 0, 0);
						bVar4 = true;
					}
					else if (iLocal_222 == 2)
					{
						func_309("GS_PARA_M2", 0, 0);
						bVar4 = true;
					}
					else if (iLocal_222 == 3)
					{
						func_309("GS_PARA_M3", 0, 0);
						bVar4 = true;
					}
				}
				else if (MISC::IS_BIT_SET(Local_131.f_285, 10))
				{
					if (func_164(&Local_232, Var0, (Local_131.f_67.f_2 - 1), 0))
					{
						if (!MISC::IS_BIT_SET(Local_131.f_285, 8))
						{
							if (Global_10A95)
							{
								func_309("GS_STOCK2", 0, 0);
								func_300(func_281(Local_232.f_4, Var0));
								bVar4 = true;
							}
							else
							{
								func_309("GS_STOCK", 0, 0);
								bVar4 = true;
							}
						}
						else
						{
							func_279(Var0, (Local_131.f_67.f_2 - 1), &sVar5, &cVar6);
							if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar6) && HUD::DOES_TEXT_LABEL_EXIST(&cVar6))
							{
								func_309(&cVar6, 0, 0);
								bVar4 = true;
							}
							bVar12 = false;
							if (func_269(Local_232, Var0, &bVar12) || Local_232.f_1)
							{
								if (bVar12)
								{
									func_309("GSM_OWN_EQUIP", 0, 0);
									bVar4 = true;
								}
								else
								{
									func_309("GSM_TICK", 0, 0);
									bVar4 = true;
								}
							}
							else
							{
								fVar15 = (1f - func_94(Var0, &iVar13, &iVar14));
								if (fVar15 != 0f)
								{
									func_299("GSHOP_DISC", 0, 0);
									func_298(SYSTEM::ROUND((fVar15 * 100f)));
								}
							}
						}
					}
				}
				else if (MISC::IS_BIT_SET(Local_131.f_285, 11))
				{
					if (func_305(&Local_234, Var0, func_307(Var0, (Local_131.f_67.f_2 - 21)), 0))
					{
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							if (!func_263(Var0, Local_234.f_9, Local_234.f_A))
							{
								if (func_262(Var0, Local_234.f_9, &cVar6, &iVar16, &bVar17))
								{
									if (MISC::GET_HASH_KEY(&cVar6) == MISC::GET_HASH_KEY("GSM_TINT_CASH"))
									{
										if (MISC::IS_PS3_VERSION() || MISC::IS_ORBIS_VERSION())
										{
											StringConCat(&cVar6, "1", 16);
										}
										else if ((MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION()) || MISC::IS_PC_VERSION())
										{
											StringConCat(&cVar6, "2", 16);
										}
									}
									else if (MISC::GET_HASH_KEY(&cVar6) == MISC::GET_HASH_KEY("GSM_TINT_KILL"))
									{
										iVar16 = (iVar16 - func_261(Var0));
									}
									func_309(&cVar6, 0, 0);
									if (iVar16 != -1)
									{
										func_300(iVar16);
									}
									if (bVar17)
									{
										func_282(&Global_26CE2D, Local_131.f_67.f_3, Local_131.f_67.f_1, &sVar5, &cVar6);
										func_308(func_260(Var0));
									}
									bVar4 = true;
									if (Var0 == joaat("gadget_parachute"))
									{
										iVar18 = func_259(Var0, Local_234.f_9, Local_234.f_A);
										if (iVar18 != 0)
										{
											func_309("GS_STOCK2", 0, 0);
											func_300(func_301(iVar18));
											bVar4 = true;
										}
									}
								}
								if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
								{
									if ((Var0 == joaat("gadget_parachute") && Local_234.f_A == 4) && Local_234.f_9 == 6)
									{
										if (!func_257())
										{
											func_309("GSM_LOCK_CREW", 0, 0);
											bVar4 = true;
										}
										else if (!func_254(6))
										{
											if (func_253(PLAYER::PLAYER_ID()))
											{
												func_309("GSM_LOCK_RNK", 0, 0);
											}
											else
											{
												func_309("GSM_LOCK_RNKT", 0, 0);
											}
											bVar4 = true;
										}
									}
								}
							}
							else
							{
								bVar19 = false;
								if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_234.f_4)) && HUD::DOES_TEXT_LABEL_EXIST(&(Local_234.f_4)))
								{
									func_309(&(Local_234.f_4), 0, 0);
									bVar4 = true;
									bVar19 = true;
								}
								bVar20 = false;
								if (Local_234.f_A != 5)
								{
									iVar21 = iLocal_172;
									if (Local_234.f_A == 1)
									{
										iVar21 = iLocal_175;
									}
									else if (Local_234.f_A == 4)
									{
										iVar21 = iLocal_174;
									}
									else if (Local_234.f_A == 2)
									{
										iVar21 = iLocal_172;
									}
									else if (Local_234.f_A == 3)
									{
										iVar21 = iLocal_173;
									}
									if (func_241(Var0, Local_234.f_9, Local_234.f_A, iVar21, &bVar20))
									{
										if (bVar20)
										{
											func_309("GSM_OWN_EQUIP", 0, 0);
											bVar4 = true;
											bVar19 = false;
										}
										else
										{
											func_309("GSM_TICK", 0, 0);
											bVar4 = true;
											bVar19 = false;
										}
									}
								}
								if (bVar19)
								{
									uVar22 = Local_234.f_8;
									fVar23 = (1f - func_238(Var0, &uVar22));
									if (fVar23 != 0f)
									{
										func_299("GSHOP_DISC", 0, 0);
										func_298(SYSTEM::ROUND((fVar23 * 100f)));
									}
								}
							}
						}
						else
						{
							bVar24 = false;
							if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_234.f_4)) && HUD::DOES_TEXT_LABEL_EXIST(&(Local_234.f_4)))
							{
								func_309(&(Local_234.f_4), 0, 0);
								bVar4 = true;
								bVar24 = true;
							}
							bVar25 = false;
							if (Local_234.f_A != 5)
							{
								iVar26 = iLocal_172;
								if (Local_234.f_A == 1)
								{
									iVar26 = iLocal_175;
								}
								else if (Local_234.f_A == 4)
								{
									iVar26 = iLocal_174;
								}
								else if (Local_234.f_A == 2)
								{
									iVar26 = iLocal_172;
								}
								else if (Local_234.f_A == 3)
								{
									iVar26 = iLocal_173;
								}
								if (func_241(Var0, Local_234.f_9, Local_234.f_A, iVar26, &bVar25))
								{
									if (bVar25)
									{
										func_309("GSM_OWN_EQUIP", 0, 0);
										bVar4 = true;
										bVar24 = false;
									}
									else
									{
										func_309("GSM_TICK", 0, 0);
										bVar4 = true;
										bVar24 = false;
									}
								}
							}
							if (bVar24)
							{
								uVar27 = Local_234.f_8;
								fVar28 = (1f - func_238(Var0, &uVar27));
								if (fVar28 != 0f)
								{
									func_299("GSHOP_DISC", 0, 0);
									func_298(SYSTEM::ROUND((fVar28 * 100f)));
								}
							}
						}
					}
				}
			}
		}
		if (!bVar4)
		{
			func_309("", 0, 0);
		}
	}
	if (iLocal_197)
	{
		if (iLocal_196 == 0)
		{
			iLocal_196++;
		}
		else if (iLocal_196 == 1)
		{
			bVar29 = false;
			bVar30 = false;
			bVar31 = false;
			bVar32 = false;
			if (func_237())
			{
				if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
				{
					if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
					{
						iVar33 = 2;
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("GLOBAL_ALERT_DEFAULT", "STORE_UNAVAIL", iVar33, 0, 0, -1, 0, 0, 1);
						if (PAD::IS_CONTROL_JUST_PRESSED(2, 201))
						{
							bVar30 = true;
						}
					}
					else if (!NETWORK::_0x59328EB08C5CEB2B())
					{
						iVar34 = 2;
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("GLOBAL_ALERT_DEFAULT", "HUD_PERM", iVar34, 0, 0, -1, 0, 0, 1);
						if (PAD::IS_CONTROL_JUST_PRESSED(2, 201))
						{
							bVar30 = true;
						}
					}
					else if (!NETWORK::IS_STORE_AVAILABLE_TO_USER())
					{
						iVar35 = 2;
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("GLOBAL_ALERT_DEFAULT", "STORE_UNAVAIL", iVar35, 0, 0, -1, 0, 0, 1);
						if (PAD::IS_CONTROL_JUST_PRESSED(2, 201))
						{
							bVar30 = true;
						}
					}
					else
					{
						bVar29 = true;
					}
				}
				else
				{
					bVar31 = true;
				}
			}
			else
			{
				bVar32 = true;
			}
			if (bVar32)
			{
				iLocal_196 = 0;
				iLocal_197 = 0;
				iLocal_210 = 1;
			}
			else if (bVar31)
			{
				iLocal_196 = 3;
			}
			else if (bVar29)
			{
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					Global_252BB1 = 1;
					Global_252BB2 = 1;
				}
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV", "HUD_AMMO_SHOP_SOUNDSET", 1);
				NETWORK::_0xFAE628F1E9ADB239(MISC::GET_HASH_KEY(&(Global_15F9E.f_4EB)), Global_15F9E.f_4EF, MISC::GET_HASH_KEY(func_236(Local_131)));
				NETWORK::OPEN_COMMERCE_STORE(&cLocal_198, "", 3);
				iLocal_98 = 1;
				iLocal_196++;
			}
			else if (bVar30)
			{
				iLocal_196++;
			}
		}
		else if (iLocal_196 == 2)
		{
			if (!NETWORK::IS_COMMERCE_STORE_OPEN())
			{
				iLocal_196 = 0;
				iLocal_197 = 0;
			}
		}
		else if (iLocal_196 == 3)
		{
			if (func_224(&uLocal_195, 1))
			{
				if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						Global_252BB1 = 1;
						Global_252BB2 = 1;
					}
					if (NETWORK::IS_STORE_AVAILABLE_TO_USER())
					{
						NETWORK::_0xFAE628F1E9ADB239(MISC::GET_HASH_KEY(&(Global_15F9E.f_4EB)), Global_15F9E.f_4EF, MISC::GET_HASH_KEY(func_236(Local_131)));
						NETWORK::OPEN_COMMERCE_STORE(&cLocal_198, "", 3);
						iLocal_98 = 1;
					}
				}
				iLocal_196 = 2;
			}
		}
	}
	else if (bLocal_193)
	{
	}
	else if (((bLocal_209 && !func_237()) && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || iLocal_210)
	{
		iLocal_210 = 1;
		iVar36 = 2;
		HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "STORE_CON_ONL", iVar36, 0, 0, -1, 0, 0, 1);
		if (PAD::IS_CONTROL_PRESSED(2, 201))
		{
			bLocal_209 = func_237();
			iLocal_210 = 0;
		}
	}
	else if (((bLocal_207 && !NETWORK::NETWORK_IS_SIGNED_ONLINE()) && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || iLocal_208)
	{
		iLocal_208 = 1;
		iVar37 = 2;
		HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "STORE_SGN_ONL2", iVar37, 0, 0, -1, 0, 0, 1);
		if (PAD::IS_CONTROL_PRESSED(2, 201))
		{
			bLocal_207 = NETWORK::NETWORK_IS_SIGNED_ONLINE();
			iLocal_208 = 0;
		}
	}
	else
	{
		func_202(1, Local_131, SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("lamar1")) == 0, 0, 1, -1082130432, 0, 0);
		if (func_199(0, 0))
		{
			if (func_84(Local_131, &Global_26CE2D, &Var0, Local_131.f_67.f_3, Local_131.f_67.f_1, 0))
			{
				if ((Var0.f_18 == 0 || Var0.f_18 == 2) || Var0.f_18 == 5)
				{
					if (Local_131.f_67.f_5 == 1)
					{
						while (func_164(&Local_232, Var0, iVar54, 0))
						{
							if (WEAPON::HAS_WEAPON_GOT_WEAPON_COMPONENT(Local_131.f_DA[(Local_131.f_67.f_3 * 6 + Local_131.f_67.f_1)], Local_232))
							{
								if (WEAPON::GET_WEAPON_COMPONENT_HUD_STATS(Local_232, &Var39))
								{
									if (iVar54 != (Local_131.f_67.f_2 - 1) || MISC::IS_BIT_SET(Local_131.f_285, 6))
									{
										iVar50 = (iVar50 + Var39);
										iVar51 = (iVar51 + Var39.f_1);
										iVar52 = (iVar52 + Var39.f_3);
										iVar53 = (iVar53 + Var39.f_4);
									}
								}
							}
							iVar54++;
						}
					}
					if (WEAPON::GET_WEAPON_HUD_STATS(Var0, &Var38))
					{
						Var39 = 0;
						Var39.f_1 = 0;
						Var39.f_3 = 0;
						Var39.f_4 = 0;
						if (Local_131.f_67.f_5 == 1)
						{
							if (func_164(&Local_232, Var0, (Local_131.f_67.f_2 - 1), 0))
							{
								if (!MISC::IS_BIT_SET(Local_131.f_285, 6))
								{
									WEAPON::GET_WEAPON_COMPONENT_HUD_STATS(Local_232, &Var39);
								}
							}
						}
						fVar55 = ((func_198() - GRAPHICS::GET_SAFE_ZONE_SIZE()) + (0.00138888f * 76f));
						fVar56 = (125f - 8f);
						GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 66);
						GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
						HUD::GET_HUD_COLOUR(140, &iVar40, &iVar41, &iVar42, &iVar43);
						func_197(0f, fVar55, Global_4353, (0.00138888f * 108f), iVar40, iVar41, iVar42, iVar43);
						fVar44 = 0.0046875f;
						fVar45 = ((0.00138888f * 108f) + (0.00138888f * 42f));
						fVar46 = fVar55;
						func_195(0, 1, 0, 0, 0, 0);
						HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("PM_DAMAGE");
						HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar44, (fVar45 + fVar46), 0);
						fVar46 = (fVar46 + 0.034722f);
						func_195(0, 1, 0, 0, 0, 0);
						HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("PM_FIRERATE");
						HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar44, (fVar45 + fVar46), 0);
						fVar46 = (fVar46 + 0.034722f);
						func_195(0, 1, 0, 0, 0, 0);
						HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("PM_ACCURACY");
						HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar44, (fVar45 + fVar46), 0);
						fVar46 = (fVar46 + 0.034722f);
						func_195(0, 1, 0, 0, 0, 0);
						HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("PM_RANGE");
						HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar44, (fVar45 + fVar46), 0);
						fVar46 = (fVar46 + 0.034722f);
						HUD::GET_HUD_COLOUR(1, &iVar40, &iVar41, &iVar42, &iVar43);
						iVar43 = 76;
						fVar47 = (0.00138888f * -89f);
						fVar48 = fVar55;
						func_194((Global_4353 - (0.00078125f * 150f)), (fVar47 + fVar48), (0.00078125f * fVar56), (0.00138888f * 6f), iVar40, iVar41, iVar42, iVar43);
						fVar48 = (fVar48 + 0.034722f);
						func_194((Global_4353 - (0.00078125f * 150f)), (fVar47 + fVar48), (0.00078125f * fVar56), (0.00138888f * 6f), iVar40, iVar41, iVar42, iVar43);
						fVar48 = (fVar48 + 0.034722f);
						func_194((Global_4353 - (0.00078125f * 150f)), (fVar47 + fVar48), (0.00078125f * fVar56), (0.00138888f * 6f), iVar40, iVar41, iVar42, iVar43);
						fVar48 = (fVar48 + 0.034722f);
						func_194((Global_4353 - (0.00078125f * 150f)), (fVar47 + fVar48), (0.00078125f * fVar56), (0.00138888f * 6f), iVar40, iVar41, iVar42, iVar43);
						fVar48 = (fVar48 + 0.034722f);
						fVar47 = (0.00138888f * -89f);
						fVar48 = fVar55;
						fVar49[0] = (0.00078125f * ((fVar56 / 100f) * SYSTEM::TO_FLOAT(Var38)));
						fVar49[0] = (fVar49[0] + (fVar49[0] * (SYSTEM::TO_FLOAT(iVar50) / 100f)));
						if (Local_131.f_67.f_5 == 1)
						{
							if (Var39 >= 0)
							{
								HUD::GET_HUD_COLOUR(9, &iVar40, &iVar41, &iVar42, &iVar43);
								func_194((Global_4353 - (0.00078125f * 150f)), (fVar47 + fVar48), (fVar49[0] + (fVar49[0] * (SYSTEM::TO_FLOAT(Var39) / 100f))), (0.00138888f * 6f), iVar40, iVar41, iVar42, 255);
							}
							else
							{
								HUD::GET_HUD_COLOUR(6, &iVar40, &iVar41, &iVar42, &iVar43);
								func_194((Global_4353 - (0.00078125f * 150f)), (fVar47 + fVar48), fVar49[0], (0.00138888f * 6f), iVar40, iVar41, iVar42, 255);
								fVar49[0] = (fVar49[0] + (fVar49[0] * (SYSTEM::TO_FLOAT(Var39) / 100f)));
							}
						}
						HUD::GET_HUD_COLOUR(1, &iVar40, &iVar41, &iVar42, &iVar43);
						func_194((Global_4353 - (0.00078125f * 150f)), (fVar47 + fVar48), fVar49[0], (0.00138888f * 6f), iVar40, iVar41, iVar42, 255);
						fVar48 = (fVar48 + 0.034722f);
						fVar49[1] = (0.00078125f * ((fVar56 / 100f) * SYSTEM::TO_FLOAT(Var38.f_1)));
						fVar49[1] = (fVar49[1] + (fVar49[1] * (SYSTEM::TO_FLOAT(iVar51) / 100f)));
						if (Local_131.f_67.f_5 == 1)
						{
							if (Var39.f_1 >= 0)
							{
								HUD::GET_HUD_COLOUR(9, &iVar40, &iVar41, &iVar42, &iVar43);
								func_194((Global_4353 - (0.00078125f * 150f)), (fVar47 + fVar48), (fVar49[1] + (fVar49[1] * (SYSTEM::TO_FLOAT(Var39.f_1) / 100f))), (0.00138888f * 6f), iVar40, iVar41, iVar42, 255);
							}
							else
							{
								HUD::GET_HUD_COLOUR(6, &iVar40, &iVar41, &iVar42, &iVar43);
								func_194((Global_4353 - (0.00078125f * 150f)), (fVar47 + fVar48), fVar49[1], (0.00138888f * 6f), iVar40, iVar41, iVar42, 255);
								fVar49[1] = (fVar49[1] + (fVar49[1] * (SYSTEM::TO_FLOAT(Var39.f_1) / 100f)));
							}
						}
						HUD::GET_HUD_COLOUR(1, &iVar40, &iVar41, &iVar42, &iVar43);
						func_194((Global_4353 - (0.00078125f * 150f)), (fVar47 + fVar48), fVar49[1], (0.00138888f * 6f), iVar40, iVar41, iVar42, 255);
						fVar48 = (fVar48 + 0.034722f);
						fVar49[2] = (0.00078125f * ((fVar56 / 100f) * SYSTEM::TO_FLOAT(Var38.f_3)));
						fVar49[2] = (fVar49[2] + (fVar49[2] * (SYSTEM::TO_FLOAT(iVar52) / 100f)));
						if (Local_131.f_67.f_5 == 1)
						{
							if (Var39.f_3 >= 0)
							{
								HUD::GET_HUD_COLOUR(9, &iVar40, &iVar41, &iVar42, &iVar43);
								func_194((Global_4353 - (0.00078125f * 150f)), (fVar47 + fVar48), (fVar49[2] + (fVar49[2] * (SYSTEM::TO_FLOAT(Var39.f_3) / 100f))), (0.00138888f * 6f), iVar40, iVar41, iVar42, 255);
							}
							else
							{
								HUD::GET_HUD_COLOUR(6, &iVar40, &iVar41, &iVar42, &iVar43);
								func_194((Global_4353 - (0.00078125f * 150f)), (fVar47 + fVar48), fVar49[2], (0.00138888f * 6f), iVar40, iVar41, iVar42, 255);
								fVar49[2] = (fVar49[2] + (fVar49[2] * (SYSTEM::TO_FLOAT(Var39.f_3) / 100f)));
							}
						}
						HUD::GET_HUD_COLOUR(1, &iVar40, &iVar41, &iVar42, &iVar43);
						func_194((Global_4353 - (0.00078125f * 150f)), (fVar47 + fVar48), fVar49[2], (0.00138888f * 6f), iVar40, iVar41, iVar42, 255);
						fVar48 = (fVar48 + 0.034722f);
						fVar49[3] = (0.00078125f * ((fVar56 / 100f) * SYSTEM::TO_FLOAT(Var38.f_4)));
						fVar49[3] = (fVar49[3] + (fVar49[3] * (SYSTEM::TO_FLOAT(iVar53) / 100f)));
						if (Local_131.f_67.f_5 == 1)
						{
							if (Var39.f_4 >= 0)
							{
								HUD::GET_HUD_COLOUR(9, &iVar40, &iVar41, &iVar42, &iVar43);
								func_194((Global_4353 - (0.00078125f * 150f)), (fVar47 + fVar48), (fVar49[3] + (fVar49[3] * (SYSTEM::TO_FLOAT(Var39.f_4) / 100f))), (0.00138888f * 6f), iVar40, iVar41, iVar42, 255);
							}
							else
							{
								HUD::GET_HUD_COLOUR(6, &iVar40, &iVar41, &iVar42, &iVar43);
								func_194((Global_4353 - (0.00078125f * 150f)), (fVar47 + fVar48), fVar49[3], (0.00138888f * 6f), iVar40, iVar41, iVar42, 255);
								fVar49[3] = (fVar49[3] + (fVar49[3] * (SYSTEM::TO_FLOAT(Var39.f_4) / 100f)));
							}
						}
						HUD::GET_HUD_COLOUR(1, &iVar40, &iVar41, &iVar42, &iVar43);
						func_194((Global_4353 - (0.00078125f * 150f)), (fVar47 + fVar48), fVar49[3], (0.00138888f * 6f), iVar40, iVar41, iVar42, 255);
						fVar48 = (fVar48 + 0.034722f);
						GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
					}
				}
			}
		}
	}
}

void func_194(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x146E9
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar0 = ((125f - 8f) * 0.00078125f);
	fVar1 = (125f * 0.00078125f);
	fVar2 = fParam0;
	iVar3 = 0;
	while (iVar3 < 5)
	{
		if (fParam2 > ((fVar0 / 100f) * 20f))
		{
			func_197(fVar2, fParam1, ((fVar0 / 100f) * 20f), fParam3, iParam4, iParam5, iParam6, iParam7);
		}
		else if (fParam2 > 0f)
		{
			func_197(fVar2, fParam1, fParam2, fParam3, iParam4, iParam5, iParam6, iParam7);
		}
		fParam2 = (fParam2 - ((fVar0 / 100f) * 20f));
		fVar2 = (fVar2 + ((fVar1 / 100f) * 20f));
		iVar3++;
	}
}

void func_195(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)//Position - 0x1479F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_196(Global_4354.f_148C[iParam4], &iVar0, &iVar1, &iVar2);
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

void func_196(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x14936
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

void func_197(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x14BC0
{
	GRAPHICS::DRAW_RECT((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

float func_198()//Position - 0x14BEF
{
	return Global_4354.f_1408;
}

int func_199(bool bParam0, bool bParam1)//Position - 0x14BFD
{
	if (Global_24F57C.f_51E.f_2B0 != 0)
	{
		return 1;
	}
	if ((((((((!CAM::IS_SCREEN_FADED_IN() || (func_201(8, -1) && func_200() != 65)) || (HUD::GET_PAUSE_MENU_STATE() != 0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::IS_COMMERCE_STORE_OPEN()) || Global_10B99) || Global_4354.f_1C26) || HUD::IS_WARNING_MESSAGE_ACTIVE()) || Global_15F9E.f_526)
	{
		return 0;
	}
	return 1;
}

int func_200()//Position - 0x14C9A
{
	return Global_1413F8;
}

bool func_201(int iParam0, int iParam1)//Position - 0x14CA6
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

void func_202(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)//Position - 0x14CE1
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
	
	if (!func_81(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_199(0, bParam6))
	{
		return;
	}
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	fVar53 = 0f;
	if (Global_4354)
	{
		if (func_222(29, 1, 1, &fVar35, &fVar36, bParam7))
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
		if (func_221())
		{
			iVar55 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar56) * fVar58));
		}
		fVar59 = (SYSTEM::TO_FLOAT(iVar55) / SYSTEM::TO_FLOAT(iVar56));
		fVar57 = (fVar59 / fVar58);
		if (func_221())
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
					GRAPHICS::DRAW_SPRITE(func_220(29), func_218(29, 1), (Global_4351 + (fParam5 * 0.5f)), (Global_4352 + ((fVar53 - 0f) * 0.5f)), fParam5, (fVar53 - 0f), 0f, 255, 255, 255, 255, 0);
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
				func_197(Global_4351, (Global_4352 + fVar53), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar47 = (((Global_4352 + fVar53) + 0.034722f) + 0f);
				if (MISC::GET_HASH_KEY(&(Global_4354.f_1)) != 0)
				{
					func_217();
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
						func_217();
						func_215((((Global_4351 + fParam5) - 0.00390625f) - func_216("CM_ITEM_COUNT", Global_4354.f_1380, Global_4354.f_137F)), ((Global_4352 + fVar53) + 0.00416664f), "CM_ITEM_COUNT", Global_4354.f_1380, Global_4354.f_137F);
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
				func_197(Global_4351, (fVar47 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
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
					func_222(Global_4354.f_FCD, 1, 1, &fVar35, &fVar36, bParam7);
					fVar39 = (((Global_4351 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_214(fVar39);
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
				func_197(Global_4351, (fVar47 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
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
				func_214(fVar39);
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
					func_222(Global_4354.f_FCD, 1, 1, &fVar35, &fVar36, bParam7);
					func_213(Global_4354.f_FCD, 1, &iVar44, &iVar45, &iVar46);
					GRAPHICS::DRAW_SPRITE(func_220(Global_4354.f_FCD), func_218(Global_4354.f_FCD, 1), ((Global_4351 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar47 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
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
					func_222(Global_26CEC9.f_43, 1, 1, &fVar35, &fVar36, bParam7);
					fVar39 = (((Global_4351 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_214(fVar39);
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
				func_197(Global_4351, (fVar47 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
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
				func_214(fVar39);
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
					func_222(Global_26CEC9.f_43, 1, 1, &fVar35, &fVar36, bParam7);
					func_213(Global_26CEC9.f_43, 1, &iVar44, &iVar45, &iVar46);
					GRAPHICS::DRAW_SPRITE(func_220(Global_26CEC9.f_43), func_218(Global_26CEC9.f_43, 1), ((Global_4351 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar47 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
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
			func_208(iVar55, iParam1, 0, 0, 0, 0, bParam4, 1, 0);
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
					func_195(bVar31, 1, 0, 0, 0, 0);
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
												func_195(bVar31, Global_4354.f_432[iVar24], Global_4354.f_52D[iVar24], bVar51, iVar68, bVar48);
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
													if (func_222(Global_4354.f_F03[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36, bParam7))
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
											if (func_222(26, 1, 0, &fVar35, &fVar36, bParam7))
											{
												if (Global_4354.f_1108[iVar8] == 2)
												{
													fVar39 = (fVar39 - (fVar35 * 2f));
												}
												fVar42 = (fVar35 * 0.5f);
												if (func_222(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_213(26, 1, &iVar44, &iVar45, &iVar46);
													GRAPHICS::DRAW_SPRITE(func_220(26), func_218(26, 1), ((fVar33 + fVar39) + fVar42), ((fVar34 - 0.00277776f) + (fVar52 * 0.5f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
												}
											}
											if (func_222(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar39 = (fVar39 + fVar35);
												fVar42 = (fVar35 * 0.5f);
												if (func_222(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_213(27, 1, &iVar44, &iVar45, &iVar46);
													GRAPHICS::DRAW_SPRITE(func_220(27), func_218(27, 1), (((fVar33 + fVar39) + fVar42) + (fVar40 + fVar41)), ((fVar34 - 0.00277776f) + (fVar52 * 0.5f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
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
											func_195(bVar31, Global_4354.f_432[iVar24], Global_4354.f_52D[iVar24], bVar51, 0, bVar48);
											if (Global_4354.f_1C23 && Global_4354.f_1C24 == iVar6)
											{
												func_207(bVar31);
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
													if (func_222(Global_4354.f_F03[(iVar22 + iVar28)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar39 = (fVar39 + (fVar35 * 0.5f));
														if (func_222(Global_4354.f_F03[(iVar22 + iVar28)], bVar31, 1, &fVar35, &fVar36, bParam7))
														{
															func_213(Global_4354.f_F03[(iVar22 + iVar28)], bVar31, &iVar44, &iVar45, &iVar46);
															if (Global_4354.f_1108[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_220(Global_4354.f_F03[(iVar22 + iVar28)]), func_218(Global_4354.f_F03[(iVar22 + iVar28)], bVar31), (((fVar33 + fVar39) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar52 * 0.5f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_220(Global_4354.f_F03[(iVar22 + iVar28)]), func_218(Global_4354.f_F03[(iVar22 + iVar28)], bVar31), ((fVar33 + fVar39) - (0.00078125f * 8f)), ((fVar34 - 0.00277776f) + (fVar52 * 0.5f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
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
													if (func_222(Global_4354.f_F03[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar39 = (fVar39 + (fVar35 * 0.5f));
														if (func_222(Global_4354.f_F03[(iVar22 + iVar14)], bVar31, 1, &fVar35, &fVar36, bParam7))
														{
															func_213(Global_4354.f_F03[(iVar22 + iVar14)], bVar31, &iVar44, &iVar45, &iVar46);
															if (Global_4354.f_F03[(iVar22 + iVar14)] == 30)
															{
																GRAPHICS::DRAW_SPRITE(func_220(Global_4354.f_F03[(iVar22 + iVar14)]), func_218(Global_4354.f_F03[(iVar22 + iVar14)], bVar31), (Global_4351 + (fVar35 * 0.5f)), (((fVar34 + 0.00277776f) + (fVar36 * 0.5f)) - (0.00078125f * 11f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
															}
															else if (Global_4354.f_1108[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_220(Global_4354.f_F03[(iVar22 + iVar14)]), func_218(Global_4354.f_F03[(iVar22 + iVar14)], bVar31), ((((fVar33 + fVar39) + fVar40) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar52 * 0.5f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_220(Global_4354.f_F03[(iVar22 + iVar14)]), func_218(Global_4354.f_F03[(iVar22 + iVar14)], bVar31), (((fVar33 + fVar39) + fVar40) - (0.00078125f * 12f)), ((fVar34 - 0.00277776f) + (fVar52 * 0.5f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
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
											func_195(bVar31, Global_4354.f_432[iVar24], Global_4354.f_52D[iVar24], bVar51, 0, 0);
											if (Global_4354.f_1C23 && Global_4354.f_1C24 == iVar6)
											{
												func_207(bVar31);
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
											if (func_222(26, 1, 0, &fVar35, &fVar36, bParam7))
											{
												if (Global_4354.f_1108[iVar8] == 2)
												{
													fVar39 = (fVar39 - (fVar35 * 2f));
												}
												fVar42 = (fVar35 * 0.5f);
												if (func_222(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_213(26, 1, &iVar44, &iVar45, &iVar46);
													GRAPHICS::DRAW_SPRITE(func_220(26), func_218(26, 1), ((fVar33 + fVar39) + fVar42), ((fVar34 - 0.00277776f) + (fVar52 * 0.5f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
												}
											}
											if (func_222(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar39 = (fVar39 + fVar35);
												fVar42 = (fVar35 * 0.5f);
												if (func_222(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_213(27, 1, &iVar44, &iVar45, &iVar46);
													GRAPHICS::DRAW_SPRITE(func_220(27), func_218(27, 1), (((fVar33 + fVar39) + fVar42) + (fVar40 + fVar41)), ((fVar34 - 0.00277776f) + (fVar52 * 0.5f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
												}
											}
										}
										func_195(bVar31, Global_4354.f_432[iVar24], Global_4354.f_52D[iVar24], bVar51, 0, 0);
										func_206((fVar33 + fVar39), fVar34, "NUMBER", Global_4354.f_D0C[iVar20], 0);
									}
									bVar38 = true;
									iVar20++;
									break;
								
								case 3:
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_4354.f_137B)
										{
											func_195(bVar31, Global_4354.f_432[iVar24], Global_4354.f_52D[iVar24], bVar51, 0, 0);
											if (Global_4354.f_1C23 && Global_4354.f_1C24 == iVar6)
											{
												func_207(bVar31);
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
											if (func_222(26, 1, 0, &fVar35, &fVar36, 0))
											{
												if (Global_4354.f_1108[iVar8] == 2)
												{
													fVar39 = (fVar39 - (fVar35 * 2f));
												}
												fVar42 = (fVar35 * 0.5f);
												if (func_222(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_213(26, 1, &iVar44, &iVar45, &iVar46);
													GRAPHICS::DRAW_SPRITE(func_220(26), func_218(26, 1), ((fVar33 + fVar39) + fVar42), ((fVar34 - 0.00277776f) + (fVar52 * 0.5f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
												}
											}
											if (func_222(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar39 = (fVar39 + fVar35);
												fVar42 = (fVar35 * 0.5f);
												if (func_222(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_213(27, 1, &iVar44, &iVar45, &iVar46);
													GRAPHICS::DRAW_SPRITE(func_220(27), func_218(27, 1), (((fVar33 + fVar39) + fVar42) + (fVar40 + fVar41)), ((fVar34 - 0.00277776f) + (fVar52 * 0.5f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
												}
											}
										}
										func_195(bVar31, Global_4354.f_432[iVar24], Global_4354.f_52D[iVar24], bVar51, 0, 0);
										func_205((fVar33 + fVar39), fVar34, "NUMBER", Global_4354.f_E07[iVar21], Global_4354.f_E85[iVar21]);
									}
									bVar38 = true;
									iVar21++;
									break;
								
								case 4:
									if (iVar5 == 1 && bVar32)
									{
										if (func_222(Global_4354.f_F03[iVar22], bVar31, 0, &fVar35, &fVar36, bParam7))
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
												if (func_222(26, 1, 0, &fVar35, &fVar36, bParam7))
												{
													if (Global_4354.f_1108[iVar8] == 2)
													{
														fVar39 = (fVar39 - (fVar35 * 2f));
													}
													fVar42 = (fVar35 * 0.5f);
													if (func_222(26, 1, 1, &fVar35, &fVar36, bParam7))
													{
														func_213(26, 1, &iVar44, &iVar45, &iVar46);
														GRAPHICS::DRAW_SPRITE(func_220(26), func_218(26, 1), ((fVar33 + fVar39) + fVar42), ((fVar34 - 0.00277776f) + (fVar52 * 0.5f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
													}
												}
												if (func_222(27, 1, 0, &fVar35, &fVar36, bParam7))
												{
													fVar39 = (fVar39 + fVar35);
													fVar42 = (fVar35 * 0.5f);
													if (func_222(27, 1, 1, &fVar35, &fVar36, bParam7))
													{
														func_213(27, 1, &iVar44, &iVar45, &iVar46);
														GRAPHICS::DRAW_SPRITE(func_220(27), func_218(27, 1), (((fVar33 + fVar39) + fVar42) + (fVar40 + fVar41)), ((fVar34 - 0.00277776f) + (fVar52 * 0.5f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
													}
												}
											}
											if (func_222(Global_4354.f_F03[iVar22], bVar31, 1, &fVar35, &fVar36, bParam7))
											{
												func_213(Global_4354.f_F03[iVar22], bVar31, &iVar44, &iVar45, &iVar46);
												GRAPHICS::DRAW_SPRITE(func_220(Global_4354.f_F03[iVar22]), func_218(Global_4354.f_F03[iVar22], bVar31), ((fVar33 + fVar39) + (fVar35 * 0.5f)), ((fVar34 - 0.00277776f) + (fVar52 * 0.5f)), (fVar35 * func_204(Global_4354.f_F03[iVar22])), (fVar36 * func_204(Global_4354.f_F03[iVar22])), 0f, iVar44, iVar45, iVar46, 255, 0);
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
									if (func_222(26, 1, 1, &fVar35, &fVar36, bParam7))
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
		func_704();
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
		func_203(1);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_203(int iParam0)//Position - 0x175EF
{
	Global_1446E8.f_2F4 = iParam0;
}

float func_204(int iParam0)//Position - 0x17600
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

void func_205(float fParam0, float fParam1, char* sParam2, var uParam3, var uParam4)//Position - 0x17669
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_FLOAT(uParam3, uParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

void func_206(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x17688
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam4);
}

void func_207(bool bParam0)//Position - 0x176A6
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

void func_208(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x176EC
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_81(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_199(bParam4, bParam8))
	{
		return;
	}
	if (func_211())
	{
		return;
	}
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_70(PLAYER::PLAYER_ID(), 0))
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
					func_210(&(Global_4354.f_FD0[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && MISC::GET_HASH_KEY(&(Global_4354.f_1091[iVar2 /*4*/])) == MISC::GET_HASH_KEY("PREV"))
					{
						func_210(&(Global_4354.f_FD0[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_4354.f_10C2[iVar1] == -1)
					{
						func_209(&(Global_4354.f_1091[iVar1 /*4*/]));
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
				func_210(&Global_26CEC9);
				if (Global_26CEC9.f_14 == -1)
				{
					func_209(&(Global_26CEC9.f_10));
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

void func_209(char* sParam0)//Position - 0x17BC6
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_210(var uParam0)//Position - 0x17BD8
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(uParam0);
}

int func_211()//Position - 0x17BE6
{
	struct<3> Var0;
	
	if (Global_3839.f_1 > 3)
	{
		return 1;
	}
	if (func_212())
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

int func_212()//Position - 0x17C54
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_213(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4)//Position - 0x17C6E
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

void func_214(float fParam0)//Position - 0x17D22
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

void func_215(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x17D81
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(uParam3);
	HUD::ADD_TEXT_COMPONENT_INTEGER(uParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

float func_216(char* sParam0, int iParam1, int iParam2)//Position - 0x17DA4
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
	func_217();
	HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(uParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2);
	return HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
}

void func_217()//Position - 0x17DE6
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

var func_218(int iParam0, bool bParam1)//Position - 0x17E70
{
	char* sVar0[2];
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_4354.f_17A0[iParam0 /*16*/])))
	{
		return func_219(&(Global_4354.f_17A0[iParam0 /*16*/]));
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

var func_219(var uParam0)//Position - 0x18250
{
	return uParam0;
}

char* func_220(int iParam0)//Position - 0x1825A
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_4354.f_148F[iParam0 /*16*/])))
	{
		return func_219(&(Global_4354.f_148F[iParam0 /*16*/]));
	}
	return "CommonMenu";
}

int func_221()//Position - 0x18289
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

int func_222(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)//Position - 0x182BB
{
	var uVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	struct<3> Var7;
	
	uVar0 = func_220(iParam0);
	sVar1 = func_218(iParam0, bParam1);
	if (MISC::GET_HASH_KEY(sVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar2, &iVar3);
			fVar5 = GRAPHICS::_GET_ASPECT_RATIO(0);
			if (func_221())
			{
				iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar5));
			}
			fVar6 = (SYSTEM::TO_FLOAT(iVar2) / SYSTEM::TO_FLOAT(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_221())
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
		Var7.x = (Var7.x * (func_223(iParam0) / fVar4));
		Var7.f_1 = (Var7.f_1 * (func_223(iParam0) / fVar4));
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

float func_223(int iParam0)//Position - 0x18422
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

int func_224(var uParam0, bool bParam1)//Position - 0x184BB
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 2;
	if (Global_1C171A.f_2 + 5 < MISC::GET_FRAME_COUNT() && Global_1C171A.f_2 > 0)
	{
		func_184(&Global_1C171A);
		func_184(&(Global_1C171A.f_31));
		*uParam0 = 0;
		Global_1C171A.f_2 = 0;
		func_235(0);
	}
	Global_1C171A.f_2 = MISC::GET_FRAME_COUNT();
	iVar1 = -1;
	if (MISC::IS_ORBIS_VERSION())
	{
		if (NETWORK::_0xBD545D44CCE70597() == 0)
		{
			iVar1 = NETWORK::_0x74FB3E29E6D10FA9();
		}
	}
	if ((MISC::IS_ORBIS_VERSION() && (((iVar1 == 4 || iVar1 == 2) || iVar1 == 1) || iVar1 == 5)) || (!func_233() && NETWORK::NETWORK_IS_SIGNED_ONLINE()))
	{
		if (NETWORK::_0x8D11E61A4ABF49CC())
		{
			func_230(&(Global_1C171A.f_3), func_232(&(Global_1C171A.f_3)));
			if (!MISC::IS_BIT_SET(*uParam0, 4))
			{
				MISC::SET_BIT(uParam0, 4);
				StringCopy(&(Global_1C171A.f_3.f_1), "", 64);
				func_228(&(Global_1C171A.f_3), 0);
			}
		}
		else
		{
			if (iVar1 == 4)
			{
				HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "HUD_PROFILECHNG", iVar0, 0, 0, -1, 0, 0, 1);
			}
			else if (iVar1 == 2)
			{
				HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "HUD_GAMEUPD_G", iVar0, 0, 0, -1, 0, 0, 1);
			}
			else if (iVar1 == 1)
			{
				HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "HUD_SYSTUPD_G", iVar0, 0, 0, -1, 0, 0, 1);
			}
			else if (iVar1 == 5)
			{
				HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1);
			}
			else if (!func_233())
			{
				HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "SCLB_NO_ROS", iVar0, 0, 0, -1, 0, 0, 1);
			}
			if (!MISC::IS_BIT_SET(*uParam0, 0))
			{
				if (!PAD::IS_CONTROL_PRESSED(2, 201))
				{
					MISC::SET_BIT(uParam0, 0);
				}
			}
			else if (PAD::IS_CONTROL_JUST_RELEASED(2, 201))
			{
				func_184(&(Global_1C171A.f_31));
				func_184(&Global_1C171A);
				*uParam0 = 0;
				Global_1C171A.f_2 = 0;
				func_235(0);
				return 1;
			}
		}
	}
	else
	{
		func_230(&(Global_1C171A.f_3), func_232(&(Global_1C171A.f_3)));
		if ((func_227(&(Global_1C171A.f_31)) && !func_225(&(Global_1C171A.f_31), 2000, 1)) && !NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			MISC::SET_BIT(uParam0, 3);
			StringCopy(&(Global_1C171A.f_3.f_1), "", 64);
			func_228(&(Global_1C171A.f_3), 0);
		}
		else if (!MISC::IS_BIT_SET(*uParam0, 3))
		{
			if (!MISC::IS_BIT_SET(*uParam0, 1))
			{
				PLAYER::DISPLAY_SYSTEM_SIGNIN_UI(0);
				MISC::SET_BIT(uParam0, 1);
				StringCopy(&(Global_1C171A.f_3.f_1), "", 64);
				func_228(&(Global_1C171A.f_3), 0);
			}
		}
		if (func_227(&Global_1C171A))
		{
			if (!func_225(&Global_1C171A, 4000, 1))
			{
				bVar2 = true;
			}
		}
		if (!bVar2)
		{
			if (bParam1)
			{
				if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
				{
					if (NETWORK::NETWORK_IS_CABLE_CONNECTED())
					{
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "STORE_NOT_ONL", iVar0, 0, 0, -1, 0, 0, 1);
					}
					else
					{
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1);
					}
					if (!PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
					{
						if (!MISC::IS_BIT_SET(*uParam0, 0))
						{
							if (!PAD::IS_CONTROL_PRESSED(2, 201))
							{
								MISC::SET_BIT(uParam0, 0);
							}
						}
						else if (PAD::IS_CONTROL_JUST_RELEASED(2, 201))
						{
							func_184(&Global_1C171A);
							*uParam0 = 0;
							Global_1C171A.f_2 = 0;
							func_235(0);
							return 1;
						}
					}
				}
				else
				{
					func_184(&Global_1C171A);
					*uParam0 = 0;
					Global_1C171A.f_2 = 0;
					func_235(0);
					return 1;
				}
			}
			else if (MISC::IS_BIT_SET(*uParam0, 3))
			{
				if (NETWORK::NETWORK_IS_CABLE_CONNECTED())
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "SCLB_SIGN_OUT", iVar0, 0, 0, -1, 0, 0, 1);
				}
				else
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1);
				}
				if (!MISC::IS_BIT_SET(*uParam0, 0))
				{
					if (!PAD::IS_CONTROL_PRESSED(2, 201))
					{
						MISC::SET_BIT(uParam0, 0);
					}
				}
				else if (PAD::IS_CONTROL_JUST_RELEASED(2, 201))
				{
					func_184(&(Global_1C171A.f_31));
					func_184(&Global_1C171A);
					*uParam0 = 0;
					Global_1C171A.f_2 = 0;
					func_235(0);
					return 1;
				}
			}
			else
			{
				if (NETWORK::NETWORK_IS_CABLE_CONNECTED())
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "SCLB_NOT_ONL", iVar0, 0, 0, -1, 0, 0, 1);
				}
				else
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1);
				}
				if (!PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
				{
					if (!MISC::IS_BIT_SET(*uParam0, 0))
					{
						if (!PAD::IS_CONTROL_PRESSED(2, 201))
						{
							MISC::SET_BIT(uParam0, 0);
						}
					}
					else if (PAD::IS_CONTROL_JUST_RELEASED(2, 201))
					{
						func_184(&(Global_1C171A.f_31));
						func_184(&Global_1C171A);
						*uParam0 = 0;
						Global_1C171A.f_2 = 0;
						func_235(0);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_225(var uParam0, int iParam1, bool bParam2)//Position - 0x18921
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_226(uParam0, bParam2, 0);
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

void func_226(var uParam0, bool bParam1, bool bParam2)//Position - 0x1897F
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

bool func_227(var uParam0)//Position - 0x189C4
{
	return uParam0->f_1;
}

void func_228(var uParam0, bool bParam1)//Position - 0x189D0
{
	func_229(uParam0);
	if (bParam1)
	{
		func_235(0);
	}
	uParam0->f_23 = 1;
}

void func_229(var uParam0)//Position - 0x189ED
{
	struct<46> Var0;
	
	Var0.f_29 = 1;
	*uParam0 = { Var0 };
}

void func_230(var uParam0, int iParam1)//Position - 0x18A08
{
	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_231(uParam0);
	}
	if (*uParam0 == 0)
	{
		if (uParam0->f_24)
		{
			HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(&(uParam0->f_1));
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_21);
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_22);
			HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(uParam0->f_29);
		}
		else if (uParam0->f_25)
		{
			HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(&(uParam0->f_1));
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_21);
			HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(uParam0->f_29);
		}
		else if (uParam0->f_27)
		{
			HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(&(uParam0->f_1));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_11));
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_21);
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_22);
			HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(uParam0->f_29);
		}
		else if (uParam0->f_26)
		{
			HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(&(uParam0->f_1));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_11));
			HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(uParam0->f_29);
		}
		else if (uParam0->f_28)
		{
			HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(&(uParam0->f_1));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(uParam0->f_21, 70);
			HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(uParam0->f_29);
		}
		else
		{
			HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(&(uParam0->f_1));
			HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(uParam0->f_29);
		}
		*uParam0 = 1;
	}
	if (*uParam0 == 1)
	{
	}
}

void func_231(var uParam0)//Position - 0x18B06
{
	uParam0->f_23 = 0;
}

int func_232(var uParam0)//Position - 0x18B13
{
	return uParam0->f_23;
}

int func_233()//Position - 0x18B1F
{
	if (func_234())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_234()//Position - 0x18B3F
{
	return Global_2528EC;
}

void func_235(bool bParam0)//Position - 0x18B4B
{
	HUD::BUSYSPINNER_OFF();
	if (bParam0)
	{
		HUD::PRELOAD_BUSYSPINNER();
	}
}

char* func_236(int iParam0)//Position - 0x18B60
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

bool func_237()//Position - 0x18E43
{
	return NETWORK::NETWORK_IS_CABLE_CONNECTED();
}

float func_238(int iParam0, var uParam1)//Position - 0x18E4F
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 0f;
	fVar1 = 0f;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_157())
	{
		return 1f;
	}
	if (func_240() || func_239())
	{
		if ((((((iParam0 == -572349828 || iParam0 == 392730790) || iParam0 == -947031628) || iParam0 == -572349828) || iParam0 == -1887867191) || iParam0 == -837150131) || iParam0 == -344484024)
		{
			*uParam1 = 0;
		}
	}
	if (!Global_10A95)
	{
		iVar2 = func_144(iParam0);
		if (iVar2 == 3)
		{
			fVar1 = (fVar1 + 0.1f);
		}
		else if (iVar2 == 2)
		{
			fVar1 = (fVar1 + 0.15f);
		}
		else if (iVar2 == 1)
		{
			fVar1 = (fVar1 + 0.25f);
		}
	}
	if (iLocal_49 == 1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			fVar1 = (fVar1 + (SYSTEM::TO_FLOAT(Global_40001.f_68) / 100f));
		}
	}
	if (iLocal_49 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (func_95())
			{
				fVar1 = (fVar1 + (SYSTEM::TO_FLOAT(Global_40001.f_68) / 100f));
				iLocal_49 = 1;
			}
			else
			{
				iLocal_49 = -1;
			}
		}
	}
	fVar1 = (fVar1 + 0.2f);
	fVar0 = (1f - fVar1);
	*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * fVar0));
	return fVar0;
}

int func_239()//Position - 0x18FA2
{
	return 1;
}

int func_240()//Position - 0x18FAB
{
	return 1;
}

int func_241(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x18FB4
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (Global_10A95)
	{
		iVar1 = func_259(iParam0, iParam1, iParam2);
		if (iVar1 != 0)
		{
			if (func_248(iVar1, -1))
			{
				iVar0 = 1;
			}
		}
		else
		{
			iVar0 = 1;
		}
	}
	else
	{
		iVar1 = func_259(iParam0, iParam1, iParam2);
		if (iVar1 != 0)
		{
			if (func_242(func_147(), iVar1))
			{
				iVar0 = 1;
			}
		}
		else
		{
			iVar0 = 1;
		}
	}
	*iParam4 = iParam1 == iParam3;
	return iVar0;
}

int func_242(int iParam0, int iParam1)//Position - 0x19020
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (func_63(iParam0))
	{
		uVar0 = func_246(iParam0, iParam1);
		iVar1 = func_244(iParam1);
		iVar2 = func_243(iVar1);
		return MISC::IS_BIT_SET(uVar0, iVar2);
	}
	return 0;
}

int func_243(int iParam0)//Position - 0x19057
{
	return (iParam0 % 32);
}

int func_244(int iParam0)//Position - 0x19064
{
	return func_245(iParam0);
}

int func_245(int iParam0)//Position - 0x19072
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
		
		case 16:
			return 7;
			break;
		
		case 17:
			return 8;
			break;
		
		case 18:
			return 9;
			break;
		
		case 19:
			return 10;
			break;
		
		case 20:
			return 11;
			break;
		
		case 21:
			return 12;
			break;
		
		case 22:
			return 13;
			break;
		
		case 23:
			return 14;
			break;
		
		case 24:
			return 15;
			break;
		
		case 25:
			return 16;
			break;
		
		case 26:
			return 17;
			break;
		
		case 27:
			return 18;
			break;
		
		case 28:
			return 19;
			break;
		
		case 29:
			return 20;
			break;
		
		case 30:
			return 21;
			break;
		
		case 31:
			return 22;
			break;
		
		case 32:
			return 23;
			break;
		
		case 33:
			return 24;
			break;
		
		case 34:
			return 25;
			break;
		
		case 35:
			return 26;
			break;
		
		case 36:
			return 27;
			break;
		
		case 37:
			return 28;
			break;
		
		case 38:
			return 29;
			break;
		
		case 39:
			return 30;
			break;
		
		case 40:
			return 31;
			break;
		
		case 41:
			return 32;
			break;
		
		case 42:
			return 33;
			break;
		
		case 43:
			return 34;
			break;
		
		case 44:
			return 35;
			break;
		
		case 45:
			return 36;
			break;
		
		case 46:
			return 37;
			break;
		
		case 47:
			return 38;
			break;
		
		case 48:
			return 39;
			break;
		
		case 49:
			return 40;
			break;
		
		case 50:
			return 41;
			break;
		
		case 51:
			return 42;
			break;
		
		case 52:
			return 43;
			break;
		
		case 53:
			return 44;
			break;
		
		case 54:
			return 45;
			break;
		
		case 55:
			return 46;
			break;
		
		case 56:
			return 47;
			break;
		
		case 57:
			return 48;
			break;
		
		case 58:
			return 49;
			break;
		
		case 59:
			return 50;
			break;
		
		case 60:
			return 51;
			break;
		
		case 61:
			return 52;
			break;
		
		case 62:
			return 53;
			break;
		
		case 63:
			return 54;
			break;
		
		case 64:
			return 55;
			break;
		
		case 65:
			return 56;
			break;
		
		case 66:
			return 57;
			break;
		
		case 67:
			return 58;
			break;
		
		case 68:
			return 59;
			break;
		
		case 69:
			return 60;
			break;
		
		case 70:
			return 61;
			break;
		
		case 71:
			return 62;
			break;
		
		case 72:
			return 63;
			break;
		
		case 73:
			return 64;
			break;
		
		case 74:
			return 65;
			break;
		
		case 75:
			return 66;
			break;
		
		case 76:
			return 67;
			break;
		
		case 77:
			return 68;
			break;
		
		case 78:
			return 69;
			break;
		
		case joaat("mpsv_lp0_31"):
			return 70;
			break;
		
		case 80:
			return 71;
			break;
		
		case 81:
			return 72;
			break;
		
		case 82:
			return 73;
			break;
		
		case 83:
			return 74;
			break;
		
		case 84:
			return 75;
			break;
		
		case 85:
			return 76;
			break;
		
		case 86:
			return 77;
			break;
		
		case 87:
			return 78;
			break;
		
		case 88:
			return 79;
			break;
		
		case 89:
			return 80;
			break;
		
		case 90:
			return 81;
			break;
		
		case 91:
			return 82;
			break;
		
		case 92:
			return 83;
			break;
		
		case 93:
			return 84;
			break;
		
		case 94:
			return 85;
			break;
		
		case 95:
			return 86;
			break;
		
		case 96:
			return 87;
			break;
		
		case 97:
			return 88;
			break;
		
		case 98:
			return 89;
			break;
		
		case 99:
			return 90;
			break;
		
		case 100:
			return 91;
			break;
		
		case 101:
			return 92;
			break;
		
		case 102:
			return 93;
			break;
		
		case 103:
			return 94;
			break;
		
		case 104:
			return 95;
			break;
		
		case 105:
			return 96;
			break;
		
		case 106:
			return 97;
			break;
		
		case 107:
			return 98;
			break;
		
		case 108:
			return 99;
			break;
		
		case 109:
			return 100;
			break;
		
		case 110:
			return 101;
			break;
		
		case 111:
			return 102;
			break;
		
		case 112:
			return 103;
			break;
		
		case 113:
			return 104;
			break;
		
		case 114:
			return 105;
			break;
		
		case 115:
			return 106;
			break;
		
		case 116:
			return 107;
			break;
		
		case 117:
			return 108;
			break;
		
		case 118:
			return 109;
			break;
		
		case 119:
			return 110;
			break;
		
		case 120:
			return 111;
			break;
		
		case 121:
			return 112;
			break;
		
		case 122:
			return 113;
			break;
		
		case 123:
			return 114;
			break;
		
		case 124:
			return 115;
			break;
		
		case 125:
			return 116;
			break;
		
		case 126:
			return 117;
			break;
		
		case 127:
			return 118;
			break;
		
		case 128:
			return 119;
			break;
		
		case 129:
			return 120;
			break;
		
		case 130:
			return 121;
			break;
		
		case 131:
			return 122;
			break;
		
		case 132:
			return 123;
			break;
		
		case 133:
			return 124;
			break;
		
		case 134:
			return 125;
			break;
		
		case 135:
			return 126;
			break;
		
		case 136:
			return 127;
			break;
		
		case 137:
			return 128;
			break;
		
		case 138:
			return 129;
			break;
		
		case 139:
			return 130;
			break;
		
		case 140:
			return 131;
			break;
		
		case 141:
			return 132;
			break;
		
		case 142:
			return 133;
			break;
		
		case 143:
			return 134;
			break;
		
		case 144:
			return 135;
			break;
		
		case 145:
			return 136;
			break;
		
		case 146:
			return 137;
			break;
		
		case 147:
			return 138;
			break;
		
		case 148:
			return 139;
			break;
		
		case 149:
			return 140;
			break;
		
		case 150:
			return 141;
			break;
		
		case 151:
			return 142;
			break;
		
		case 152:
			return 143;
			break;
		
		case 153:
			return 144;
			break;
		
		case 154:
			return 145;
			break;
		
		case 155:
			return 146;
			break;
		
		case 156:
			return 147;
			break;
		
		case 157:
			return 148;
			break;
		
		case 158:
			return 149;
			break;
		
		case 159:
			return 150;
			break;
		
		case 160:
			return 151;
			break;
		
		case 8:
			return 152;
			break;
		
		case 9:
			return 153;
			break;
		
		case 10:
			return 154;
			break;
		
		case 11:
			return 155;
			break;
		
		case 12:
			return 156;
			break;
		
		case 13:
			return 157;
			break;
		
		case 14:
			return 158;
			break;
		
		case 15:
			return 159;
			break;
		
		case 185:
			return 178;
			break;
		
		case 186:
			return 179;
			break;
		
		case 187:
			return 180;
			break;
		
		case 188:
			return 181;
			break;
		
		case 189:
			return 182;
			break;
		
		case 190:
			return 183;
			break;
		
		case 161:
			return 172;
			break;
		
		case 162:
			return 173;
			break;
		
		case 163:
			return 174;
			break;
		
		case 164:
			return 175;
			break;
		
		case 165:
			return 176;
			break;
		
		case 166:
			return 177;
			break;
		
		case 179:
			return 166;
			break;
		
		case 180:
			return 167;
			break;
		
		case 181:
			return 168;
			break;
		
		case 182:
			return 169;
			break;
		
		case 183:
			return 170;
			break;
		
		case 184:
			return 171;
			break;
		
		case 173:
			return 160;
			break;
		
		case 174:
			return 161;
			break;
		
		case 175:
			return 162;
			break;
		
		case 176:
			return 163;
			break;
		
		case 177:
			return 164;
			break;
		
		case 178:
			return 165;
			break;
		
		case 191:
			return 184;
			break;
		
		case 192:
			return 185;
			break;
		
		case 193:
			return 186;
			break;
		
		case 194:
			return 187;
			break;
		
		case 216:
			return 188;
			break;
	}
	switch (iParam0)
	{
		case 195:
			return 196;
			break;
		
		case 196:
			return 197;
			break;
		
		case 197:
			return 198;
			break;
		
		case 198:
			return 199;
			break;
		
		case 199:
			return 200;
			break;
		
		case 200:
			return 201;
			break;
		
		case 201:
			return 202;
			break;
		
		case 202:
			return 189;
			break;
		
		case 203:
			return 190;
			break;
		
		case 204:
			return 191;
			break;
		
		case 205:
			return 192;
			break;
		
		case 206:
			return 193;
			break;
		
		case 207:
			return 194;
			break;
		
		case 208:
			return 195;
			break;
		
		case 209:
			return 217;
			break;
		
		case 210:
			return 218;
			break;
		
		case 211:
			return 219;
			break;
		
		case 212:
			return 220;
			break;
		
		case 213:
			return 221;
			break;
		
		case 214:
			return 222;
			break;
		
		case 215:
			return 223;
			break;
		
		case 224:
			return 210;
			break;
		
		case 225:
			return 211;
			break;
		
		case 226:
			return 212;
			break;
		
		case 227:
			return 213;
			break;
		
		case 228:
			return 214;
			break;
		
		case 229:
			return 215;
			break;
		
		case 230:
			return 216;
			break;
		
		case 217:
			return 203;
			break;
		
		case 218:
			return 204;
			break;
		
		case 219:
			return 205;
			break;
		
		case 220:
			return 206;
			break;
		
		case 221:
			return 207;
			break;
		
		case 222:
			return 208;
			break;
		
		case 223:
			return 209;
			break;
		
		case 232:
			return 231;
			break;
		
		case 233:
			return 232;
			break;
		
		case 234:
			return 233;
			break;
		
		case 235:
			return 234;
			break;
		
		case 236:
			return 235;
			break;
		
		case 237:
			return 236;
			break;
		
		case 231:
			return 237;
			break;
		
		case 238:
			return 245;
			break;
		
		case 239:
			return 246;
			break;
		
		case 240:
			return 247;
			break;
		
		case 241:
			return 248;
			break;
		
		case 242:
			return 249;
			break;
		
		case 243:
			return 250;
			break;
		
		case 244:
			return 251;
			break;
		
		case 245:
			return 252;
			break;
		
		case 246:
			return 253;
			break;
		
		case 247:
			return 254;
			break;
		
		case 248:
			return 224;
			break;
		
		case 249:
			return 225;
			break;
		
		case 250:
			return 226;
			break;
		
		case 251:
			return 227;
			break;
		
		case 252:
			return 228;
			break;
		
		case 253:
			return 229;
			break;
		
		case 254:
			return 230;
			break;
		
		case 255:
			return 255;
			break;
		
		case 256:
			return 256;
			break;
		
		case 257:
			return 257;
			break;
		
		case 258:
			return 258;
			break;
		
		case 259:
			return 259;
			break;
		
		case 260:
			return 260;
			break;
		
		case 261:
			return 261;
			break;
		
		case 262:
			return 262;
			break;
		
		case 263:
			return 263;
			break;
		
		case 264:
			return 264;
			break;
		
		case 265:
			return 265;
			break;
	}
	switch (iParam0)
	{
		case 267:
			return 238;
			break;
		
		case 268:
			return 239;
			break;
		
		case 269:
			return 240;
			break;
		
		case 270:
			return 241;
			break;
		
		case 271:
			return 242;
			break;
		
		case 272:
			return 243;
			break;
		
		case 266:
			return 244;
			break;
		
		case 274:
			return 266;
			break;
		
		case 275:
			return 267;
			break;
		
		case 276:
			return 268;
			break;
		
		case 277:
			return 269;
			break;
		
		case 278:
			return 270;
			break;
		
		case 279:
			return 271;
			break;
		
		case 273:
			return 272;
			break;
		
		case 281:
			return 273;
			break;
		
		case 282:
			return 274;
			break;
		
		case 283:
			return 275;
			break;
		
		case 284:
			return 276;
			break;
		
		case 285:
			return 277;
			break;
		
		case 286:
			return 278;
			break;
		
		case 280:
			return 279;
			break;
		
		case 287:
			return 280;
			break;
		
		case 288:
			return 281;
			break;
		
		case 289:
			return 282;
			break;
		
		case 290:
			return 283;
			break;
		
		case 291:
			return 284;
			break;
		
		case 292:
			return 285;
			break;
		
		case 293:
			return 286;
			break;
		
		case 294:
			return 287;
			break;
		
		case 295:
			return 288;
			break;
		
		case 296:
			return 289;
			break;
		
		case 297:
			return 290;
			break;
		
		case 298:
			return 291;
			break;
		
		case 299:
			return 292;
			break;
		
		case 300:
			return 293;
			break;
		
		case 301:
			return 294;
			break;
		
		case 302:
			return 295;
			break;
		
		case 303:
			return 296;
			break;
		
		case 304:
			return 297;
			break;
		
		case 305:
			return 298;
			break;
		
		case 306:
			return 299;
			break;
		
		case 307:
			return 300;
			break;
		
		case 308:
			return 301;
			break;
		
		case 309:
			return 302;
			break;
		
		case 310:
			return 303;
			break;
		
		case 311:
			return 304;
			break;
		
		case 312:
			return 305;
			break;
		
		case 313:
			return 306;
			break;
		
		case 314:
			return 307;
			break;
		
		case 315:
			return 308;
			break;
		
		case 316:
			return 309;
			break;
		
		case 317:
			return 310;
			break;
		
		case 318:
			return 311;
			break;
		
		case 319:
			return 312;
			break;
		
		case 320:
			return 313;
			break;
		
		case 321:
			return 314;
			break;
		
		case 322:
			return 315;
			break;
		
		case 323:
			return 316;
			break;
	}
	switch (iParam0)
	{
		case 345:
			return 338;
			break;
		
		case 346:
			return 339;
			break;
		
		case 347:
			return 340;
			break;
		
		case 348:
			return 341;
			break;
		
		case 349:
			return 342;
			break;
		
		case 350:
			return 343;
			break;
		
		case 351:
			return 344;
			break;
		
		case 352:
			return 345;
			break;
		
		case 353:
			return 346;
			break;
		
		case 354:
			return 347;
			break;
		
		case 355:
			return 348;
			break;
		
		case 356:
			return 349;
			break;
		
		case 357:
			return 350;
			break;
		
		case 358:
			return 351;
			break;
		
		case 359:
			return 352;
			break;
		
		case 360:
			return 353;
			break;
		
		case 361:
			return 354;
			break;
		
		case 362:
			return 355;
			break;
		
		case 363:
			return 356;
			break;
		
		case 364:
			return 357;
			break;
	}
	switch (iParam0)
	{
		case 325:
			return 317;
			break;
		
		case 326:
			return 318;
			break;
		
		case 327:
			return 319;
			break;
		
		case 328:
			return 320;
			break;
		
		case 329:
			return 321;
			break;
		
		case 330:
			return 322;
			break;
		
		case 324:
			return 323;
			break;
		
		case 332:
			return 324;
			break;
		
		case 333:
			return 325;
			break;
		
		case 334:
			return 326;
			break;
		
		case 335:
			return 327;
			break;
		
		case 336:
			return 328;
			break;
		
		case 337:
			return 329;
			break;
		
		case 331:
			return 330;
			break;
		
		case 366:
			return 370;
			break;
		
		case 367:
			return 371;
			break;
		
		case 368:
			return 372;
			break;
		
		case 369:
			return 373;
			break;
		
		case 370:
			return 374;
			break;
		
		case 371:
			return 375;
			break;
		
		case 365:
			return 376;
			break;
		
		case 338:
			return 358;
			break;
		
		case 339:
			return 359;
			break;
		
		case 340:
			return 360;
			break;
		
		case 341:
			return 361;
			break;
		
		case 342:
			return 362;
			break;
		
		case 343:
			return 363;
			break;
		
		case 344:
			return 364;
			break;
		
		case 372:
			return 365;
			break;
		
		case 373:
			return 366;
			break;
		
		case 374:
			return 367;
			break;
		
		case 375:
			return 368;
			break;
		
		case 376:
			return 369;
			break;
		
		case 377:
			return 383;
			break;
		
		case 378:
			return 377;
			break;
		
		case 379:
			return 378;
			break;
		
		case 380:
			return 379;
			break;
		
		case 381:
			return 380;
			break;
		
		case 382:
			return 381;
			break;
		
		case 383:
			return 382;
			break;
	}
	return 146;
}

var func_246(int iParam0, int iParam1)//Position - 0x1A5AE
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = func_244(iParam1);
	iVar2 = func_247(iVar1);
	switch (iVar2)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_0"), &uVar0, -1);
					break;
				
				case 1:
					STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_0"), &uVar0, -1);
					break;
				
				case 2:
					STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_0"), &uVar0, -1);
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_1"), &uVar0, -1);
					break;
				
				case 1:
					STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_1"), &uVar0, -1);
					break;
				
				case 2:
					STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_1"), &uVar0, -1);
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_2"), &uVar0, -1);
					break;
				
				case 1:
					STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_2"), &uVar0, -1);
					break;
				
				case 2:
					STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_2"), &uVar0, -1);
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_3"), &uVar0, -1);
					break;
				
				case 1:
					STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_3"), &uVar0, -1);
					break;
				
				case 2:
					STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_3"), &uVar0, -1);
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_4"), &uVar0, -1);
					break;
				
				case 1:
					STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_4"), &uVar0, -1);
					break;
				
				case 2:
					STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_4"), &uVar0, -1);
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_5"), &uVar0, -1);
					break;
				
				case 1:
					STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_5"), &uVar0, -1);
					break;
				
				case 2:
					STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_5"), &uVar0, -1);
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_6"), &uVar0, -1);
					break;
				
				case 1:
					STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_6"), &uVar0, -1);
					break;
				
				case 2:
					STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_6"), &uVar0, -1);
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_7"), &uVar0, -1);
					break;
				
				case 1:
					STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_7"), &uVar0, -1);
					break;
				
				case 2:
					STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_7"), &uVar0, -1);
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_8"), &uVar0, -1);
					break;
				
				case 1:
					STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_8"), &uVar0, -1);
					break;
				
				case 2:
					STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_8"), &uVar0, -1);
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_9"), &uVar0, -1);
					break;
				
				case 1:
					STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_9"), &uVar0, -1);
					break;
				
				case 2:
					STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_9"), &uVar0, -1);
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_10"), &uVar0, -1);
					break;
				
				case 1:
					STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_10"), &uVar0, -1);
					break;
				
				case 2:
					STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_10"), &uVar0, -1);
					break;
			}
			break;
		
		case 11:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_11"), &uVar0, -1);
					break;
				
				case 1:
					STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_11"), &uVar0, -1);
					break;
				
				case 2:
					STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_11"), &uVar0, -1);
					break;
			}
			break;
		
		case 12:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_12"), &uVar0, -1);
					break;
				
				case 1:
					STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_12"), &uVar0, -1);
					break;
				
				case 2:
					STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_12"), &uVar0, -1);
					break;
			}
			break;
		
		default:
			break;
	}
	return uVar0;
}

int func_247(int iParam0)//Position - 0x1A9FC
{
	return (iParam0 / 32);
}

bool func_248(int iParam0, int iParam1)//Position - 0x1AA09
{
	var uVar0;
	int iVar1;
	
	if (func_252())
	{
		return 0;
	}
	uVar0 = func_249(iParam0, iParam1);
	iVar1 = func_244(iParam0);
	return MISC::IS_BIT_SET(uVar0, func_243(iVar1));
}

int func_249(int iParam0, int iParam1)//Position - 0x1AA3A
{
	int iVar0;
	
	iVar0 = func_18(func_250(iParam0), iParam1, 0);
	return iVar0;
}

int func_250(int iParam0)//Position - 0x1AA53
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_244(iParam0);
	iVar1 = func_132(iVar0);
	if ((func_22() == 0 || func_251() == 0) || (func_22() == 999 && func_251() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 789;
				break;
			
			case 1:
				return 790;
				break;
			
			case 2:
				return 791;
				break;
			
			case 3:
				return 792;
				break;
			
			case 4:
				return 793;
				break;
			
			case 5:
				return 794;
				break;
			
			case 6:
				return 795;
				break;
			
			case 7:
				return 796;
				break;
			
			case 8:
				return 797;
				break;
			
			case 9:
				return 2036;
				break;
			
			case 10:
				return 2048;
				break;
			
			case 11:
				return 2075;
				break;
			
			case 12:
				return 2387;
				break;
			}
	}
	return 2903;
}

int func_251()//Position - 0x1AB68
{
	return Global_5F7D;
}

bool func_252()//Position - 0x1AB73
{
	return Global_141424;
}

bool func_253(int iParam0)//Position - 0x1AB7F
{
	return MISC::IS_BIT_SET(Global_182604[iParam0 /*324*/].f_74, 22);
}

bool func_254(int iParam0)//Position - 0x1AB98
{
	var uVar0;
	int iVar1;
	
	uVar0 = func_255(iParam0);
	iVar1 = iParam0;
	return MISC::IS_BIT_SET(uVar0, func_129(iVar1));
}

int func_255(var uParam0)//Position - 0x1ABB8
{
	int iVar0;
	
	iVar0 = func_18(func_256(uParam0), -1, 0);
	return iVar0;
}

int func_256(var uParam0)//Position - 0x1ABD0
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_132(iVar0);
	switch (iVar1)
	{
		case 0:
			return 1277;
			break;
	}
	return 1277;
}

int func_257()//Position - 0x1ABFD
{
	struct<13> Var0;
	
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if ((NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::NETWORK_IS_SIGNED_IN()) && NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
		{
			Var0 = { func_258() };
			if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<13> func_258()//Position - 0x1AC45
{
	struct<13> Var0;
	
	NETWORK::NETWORK_GET_LOCAL_HANDLE(&Var0, 13);
	return Var0;
}

int func_259(int iParam0, int iParam1, int iParam2)//Position - 0x1AC5A
{
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 76;
					break;
				
				case 2:
					return 16;
					break;
				
				case 3:
					return 136;
					break;
				
				case 4:
					return 56;
					break;
				
				case 5:
					return 116;
					break;
				
				case 6:
					return 96;
					break;
				
				case 7:
					return 36;
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 77;
					break;
				
				case 2:
					return 17;
					break;
				
				case 3:
					return 137;
					break;
				
				case 4:
					return 57;
					break;
				
				case 5:
					return 117;
					break;
				
				case 6:
					return 97;
					break;
				
				case 7:
					return 37;
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 78;
					break;
				
				case 2:
					return 18;
					break;
				
				case 3:
					return 138;
					break;
				
				case 4:
					return 58;
					break;
				
				case 5:
					return 118;
					break;
				
				case 6:
					return 98;
					break;
				
				case 7:
					return 38;
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 79;
					break;
				
				case 2:
					return 19;
					break;
				
				case 3:
					return 139;
					break;
				
				case 4:
					return 59;
					break;
				
				case 5:
					return 119;
					break;
				
				case 6:
					return 99;
					break;
				
				case 7:
					return 39;
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 80;
					break;
				
				case 2:
					return 20;
					break;
				
				case 3:
					return 140;
					break;
				
				case 4:
					return 60;
					break;
				
				case 5:
					return 120;
					break;
				
				case 6:
					return 100;
					break;
				
				case 7:
					return 40;
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 81;
					break;
				
				case 2:
					return 21;
					break;
				
				case 3:
					return 141;
					break;
				
				case 4:
					return 61;
					break;
				
				case 5:
					return 121;
					break;
				
				case 6:
					return 101;
					break;
				
				case 7:
					return 41;
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 82;
					break;
				
				case 2:
					return 22;
					break;
				
				case 3:
					return 142;
					break;
				
				case 4:
					return 62;
					break;
				
				case 5:
					return 122;
					break;
				
				case 6:
					return 102;
					break;
				
				case 7:
					return 42;
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 208;
					break;
				
				case 2:
					return 202;
					break;
				
				case 3:
					return 203;
					break;
				
				case 4:
					return 204;
					break;
				
				case 5:
					return 205;
					break;
				
				case 6:
					return 206;
					break;
				
				case 7:
					return 207;
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 215;
					break;
				
				case 2:
					return 209;
					break;
				
				case 3:
					return 210;
					break;
				
				case 4:
					return 211;
					break;
				
				case 5:
					return 212;
					break;
				
				case 6:
					return 213;
					break;
				
				case 7:
					return 214;
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 83;
					break;
				
				case 2:
					return 23;
					break;
				
				case 3:
					return 143;
					break;
				
				case 4:
					return 63;
					break;
				
				case 5:
					return 123;
					break;
				
				case 6:
					return 103;
					break;
				
				case 7:
					return 43;
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 84;
					break;
				
				case 2:
					return 24;
					break;
				
				case 3:
					return 144;
					break;
				
				case 4:
					return 64;
					break;
				
				case 5:
					return 124;
					break;
				
				case 6:
					return 104;
					break;
				
				case 7:
					return 44;
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 85;
					break;
				
				case 2:
					return 25;
					break;
				
				case 3:
					return 145;
					break;
				
				case 4:
					return 65;
					break;
				
				case 5:
					return 125;
					break;
				
				case 6:
					return 105;
					break;
				
				case 7:
					return 45;
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 87;
					break;
				
				case 2:
					return 27;
					break;
				
				case 3:
					return 147;
					break;
				
				case 4:
					return 67;
					break;
				
				case 5:
					return 127;
					break;
				
				case 6:
					return 107;
					break;
				
				case 7:
					return 47;
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 86;
					break;
				
				case 2:
					return 26;
					break;
				
				case 3:
					return 146;
					break;
				
				case 4:
					return 66;
					break;
				
				case 5:
					return 126;
					break;
				
				case 6:
					return 106;
					break;
				
				case 7:
					return 46;
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 88;
					break;
				
				case 2:
					return 28;
					break;
				
				case 3:
					return 148;
					break;
				
				case 4:
					return 68;
					break;
				
				case 5:
					return 128;
					break;
				
				case 6:
					return 108;
					break;
				
				case 7:
					return 48;
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 91;
					break;
				
				case 2:
					return 31;
					break;
				
				case 3:
					return 151;
					break;
				
				case 4:
					return 71;
					break;
				
				case 5:
					return 131;
					break;
				
				case 6:
					return 111;
					break;
				
				case 7:
					return 51;
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 92;
					break;
				
				case 2:
					return 32;
					break;
				
				case 3:
					return 152;
					break;
				
				case 4:
					return 72;
					break;
				
				case 5:
					return 132;
					break;
				
				case 6:
					return 112;
					break;
				
				case 7:
					return 52;
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 93;
					break;
				
				case 2:
					return 33;
					break;
				
				case 3:
					return 153;
					break;
				
				case 4:
					return 73;
					break;
				
				case 5:
					return 133;
					break;
				
				case 6:
					return 113;
					break;
				
				case 7:
					return 53;
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 95;
					break;
				
				case 2:
					return 35;
					break;
				
				case 3:
					return 155;
					break;
				
				case 4:
					return 75;
					break;
				
				case 5:
					return 135;
					break;
				
				case 6:
					return 115;
					break;
				
				case 7:
					return 55;
					break;
			}
			break;
		
		case joaat("weapon_rpg"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 94;
					break;
				
				case 2:
					return 34;
					break;
				
				case 3:
					return 154;
					break;
				
				case 4:
					return 74;
					break;
				
				case 5:
					return 134;
					break;
				
				case 6:
					return 114;
					break;
				
				case 7:
					return 54;
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 194;
					break;
				
				case 2:
					return 173;
					break;
				
				case 3:
					return 174;
					break;
				
				case 4:
					return 175;
					break;
				
				case 5:
					return 176;
					break;
				
				case 6:
					return 177;
					break;
				
				case 7:
					return 178;
					break;
			}
			break;
		
		case -572349828:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 193;
					break;
				
				case 2:
					return 179;
					break;
				
				case 3:
					return 180;
					break;
				
				case 4:
					return 181;
					break;
				
				case 5:
					return 182;
					break;
				
				case 6:
					return 183;
					break;
				
				case 7:
					return 184;
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 192;
					break;
				
				case 2:
					return 161;
					break;
				
				case 3:
					return 162;
					break;
				
				case 4:
					return 163;
					break;
				
				case 5:
					return 164;
					break;
				
				case 6:
					return 165;
					break;
				
				case 7:
					return 166;
					break;
			}
			break;
		
		case -947031628:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 191;
					break;
				
				case 2:
					return 185;
					break;
				
				case 3:
					return 186;
					break;
				
				case 4:
					return 187;
					break;
				
				case 5:
					return 188;
					break;
				
				case 6:
					return 189;
					break;
				
				case 7:
					return 190;
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 201;
					break;
				
				case 2:
					return 195;
					break;
				
				case 3:
					return 196;
					break;
				
				case 4:
					return 197;
					break;
				
				case 5:
					return 198;
					break;
				
				case 6:
					return 199;
					break;
				
				case 7:
					return 200;
					break;
			}
			break;
		
		case joaat("weapon_heavypistol"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 230;
					break;
				
				case 2:
					return 224;
					break;
				
				case 3:
					return 225;
					break;
				
				case 4:
					return 226;
					break;
				
				case 5:
					return 227;
					break;
				
				case 6:
					return 228;
					break;
				
				case 7:
					return 229;
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 223;
					break;
				
				case 2:
					return 217;
					break;
				
				case 3:
					return 218;
					break;
				
				case 4:
					return 219;
					break;
				
				case 5:
					return 220;
					break;
				
				case 6:
					return 221;
					break;
				
				case 7:
					return 222;
					break;
			}
			break;
		
		case joaat("weapon_gusenberg"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 231;
					break;
				
				case 2:
					return 232;
					break;
				
				case 3:
					return 233;
					break;
				
				case 4:
					return 234;
					break;
				
				case 5:
					return 235;
					break;
				
				case 6:
					return 236;
					break;
				
				case 7:
					return 237;
					break;
			}
			break;
		
		case joaat("gadget_parachute"):
			if (iParam2 == 1)
			{
				switch (iParam1)
				{
					case 0:
						return 255;
						break;
					
					case 1:
						return 256;
						break;
					
					case 2:
						return 257;
						break;
					
					case 3:
						return 258;
						break;
					
					case 4:
						return 259;
						break;
					
					case 5:
						return 260;
						break;
					
					case 6:
						return 261;
						break;
					
					case 7:
						return 262;
						break;
					
					case 8:
						return 305;
						break;
					
					case 9:
						return 306;
						break;
					
					case 10:
						return 307;
						break;
					
					case 11:
						return 308;
						break;
					
					case 12:
						return 309;
						break;
					
					case 13:
						return 310;
						break;
					
					case 14:
						return 311;
						break;
					
					case 15:
						return 312;
						break;
					
					case 16:
						return 313;
						break;
					
					case 17:
						return 314;
						break;
					
					case 18:
						return 315;
						break;
					
					case 19:
						return 316;
						break;
					
					case 20:
						return 317;
						break;
					
					case 21:
						return 318;
						break;
					
					case 22:
						return 319;
						break;
					
					case 23:
						return 320;
						break;
					
					case 24:
						return 321;
						break;
					
					case 25:
						return 322;
						break;
					
					case 26:
						return 323;
						break;
					
					case 27:
						return 345;
						break;
					
					case 28:
						return 346;
						break;
					
					case 29:
						return 347;
						break;
					
					case 30:
						return 348;
						break;
					
					case 31:
						return 349;
						break;
					
					case 32:
						return 350;
						break;
					
					case 33:
						return 351;
						break;
					
					case 34:
						return 352;
						break;
					
					case 35:
						return 353;
						break;
					
					case 36:
						return 354;
						break;
					
					case 37:
						return 355;
						break;
					
					case 38:
						return 356;
						break;
					
					case 39:
						return 357;
						break;
					
					case 40:
						return 358;
						break;
					
					case 41:
						return 359;
						break;
					
					case 42:
						return 360;
						break;
					
					case 43:
						return 361;
						break;
					
					case 44:
						return 362;
						break;
					
					case 45:
						return 363;
						break;
					
					case 46:
						return 364;
						break;
					
					case 47:
						return 372;
						break;
					
					case 48:
						return 373;
						break;
					
					case 49:
						return 374;
						break;
					
					case 50:
						return 375;
						break;
					
					case 51:
						return 376;
						break;
				}
			}
			else if (iParam2 == 2)
			{
				switch (iParam1)
				{
					case 0:
						return 8;
						break;
					
					case 1:
						return 9;
						break;
					
					case 2:
						return 10;
						break;
					
					case 3:
						return 11;
						break;
					
					case 4:
						return 12;
						break;
					
					case 5:
						return 13;
						break;
					
					case 6:
						return 14;
						break;
					
					case 7:
						return 15;
						break;
					
					case 8:
						return 263;
						break;
					
					case 9:
						return 264;
						break;
					
					case 10:
						return 265;
						break;
					
					case 11:
						return 302;
						break;
					
					case 12:
						return 303;
						break;
					
					case 13:
						return 304;
						break;
				}
			}
			else if (iParam2 == 3)
			{
				switch (iParam1)
				{
					case 0:
						return 288;
						break;
					
					case 1:
						return 289;
						break;
					
					case 2:
						return 290;
						break;
					
					case 3:
						return 291;
						break;
					
					case 4:
						return 292;
						break;
					
					case 5:
						return 293;
						break;
					
					case 6:
						return 294;
						break;
					
					case 7:
						return 295;
						break;
					
					case 8:
						return 296;
						break;
					
					case 9:
						return 297;
						break;
					
					case 10:
						return 298;
						break;
					
					case 11:
						return 299;
						break;
					
					case 12:
						return 300;
						break;
					
					case 13:
						return 301;
						break;
				}
			}
			else if (iParam2 == 4)
			{
				switch (iParam1)
				{
					case 0:
						break;
					
					case 1:
						return 2;
						break;
					
					case 2:
						return 3;
						break;
					
					case 3:
						return 4;
						break;
					
					case 4:
						return 7;
						break;
					
					case 5:
						return 6;
						break;
					
					case 6:
						return 216;
						break;
					
					case 7:
						return 287;
						break;
					}
			}
			break;
		
		case joaat("weapon_vintagepistol"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 254;
					break;
				
				case 2:
					return 248;
					break;
				
				case 3:
					return 249;
					break;
				
				case 4:
					return 250;
					break;
				
				case 5:
					return 251;
					break;
				
				case 6:
					return 252;
					break;
				
				case 7:
					return 253;
					break;
			}
			break;
		
		case joaat("weapon_musket"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 266;
					break;
				
				case 2:
					return 267;
					break;
				
				case 3:
					return 268;
					break;
				
				case 4:
					return 269;
					break;
				
				case 5:
					return 270;
					break;
				
				case 6:
					return 271;
					break;
				
				case 7:
					return 272;
					break;
			}
			break;
		
		case joaat("weapon_firework"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 273;
					break;
				
				case 2:
					return 274;
					break;
				
				case 3:
					return 275;
					break;
				
				case 4:
					return 276;
					break;
				
				case 5:
					return 277;
					break;
				
				case 6:
					return 278;
					break;
				
				case 7:
					return 279;
					break;
			}
			break;
		
		case joaat("weapon_flaregun"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 280;
					break;
				
				case 2:
					return 281;
					break;
				
				case 3:
					return 282;
					break;
				
				case 4:
					return 283;
					break;
				
				case 5:
					return 284;
					break;
				
				case 6:
					return 285;
					break;
				
				case 7:
					return 286;
					break;
			}
			break;
		
		case joaat("weapon_heavyshotgun"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 324;
					break;
				
				case 2:
					return 325;
					break;
				
				case 3:
					return 326;
					break;
				
				case 4:
					return 327;
					break;
				
				case 5:
					return 328;
					break;
				
				case 6:
					return 329;
					break;
				
				case 7:
					return 330;
					break;
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 331;
					break;
				
				case 2:
					return 332;
					break;
				
				case 3:
					return 333;
					break;
				
				case 4:
					return 334;
					break;
				
				case 5:
					return 335;
					break;
				
				case 6:
					return 336;
					break;
				
				case 7:
					return 337;
					break;
			}
			break;
		
		case joaat("weapon_hominglauncher"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 365;
					break;
				
				case 2:
					return 366;
					break;
				
				case 3:
					return 367;
					break;
				
				case 4:
					return 368;
					break;
				
				case 5:
					return 369;
					break;
				
				case 6:
					return 370;
					break;
				
				case 7:
					return 371;
					break;
			}
			break;
		
		case joaat("weapon_railgun"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 344;
					break;
				
				case 2:
					return 338;
					break;
				
				case 3:
					return 339;
					break;
				
				case 4:
					return 340;
					break;
				
				case 5:
					return 341;
					break;
				
				case 6:
					return 342;
					break;
				
				case 7:
					return 343;
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 377;
					break;
				
				case 2:
					return 378;
					break;
				
				case 3:
					return 379;
					break;
				
				case 4:
					return 380;
					break;
				
				case 5:
					return 381;
					break;
				
				case 6:
					return 382;
					break;
				
				case 7:
					return 383;
					break;
			}
			break;
	}
	return 0;
}

char* func_260(int iParam0)//Position - 0x1C3E2
{
	struct<24> Var0;
	
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			return "WTT_PIST";
			break;
		
		case joaat("weapon_combatpistol"):
			return "WTT_PIST_CBT";
			break;
		
		case joaat("weapon_appistol"):
			return "WTT_PIST_AP";
			break;
		
		case joaat("weapon_smg"):
			return "WTT_SMG";
			break;
		
		case joaat("weapon_microsmg"):
			return "WTT_SMG_MCR";
			break;
		
		case joaat("weapon_assaultrifle"):
			return "WTT_RIFLE_ASL";
			break;
		
		case joaat("weapon_carbinerifle"):
			return "WTT_RIFLE_CBN";
			break;
		
		case joaat("weapon_advancedrifle"):
			return "WTT_RIFLE_ADV";
			break;
		
		case joaat("weapon_mg"):
			return "WTT_MG";
			break;
		
		case joaat("weapon_combatmg"):
			return "WTT_MG_CBT";
			break;
		
		case joaat("weapon_pumpshotgun"):
			return "WTT_SG_PMP";
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			return "WTT_SG_SOF";
			break;
		
		case joaat("weapon_assaultshotgun"):
			return "WTT_SG_ASL";
			break;
		
		case joaat("weapon_heavysniper"):
			return "WTT_SNIP_HVY";
			break;
		
		case joaat("weapon_remotesniper"):
			return "WTT_SNIP_RMT";
			break;
		
		case joaat("weapon_sniperrifle"):
			return "WTT_SNIP_RIF";
			break;
		
		case joaat("weapon_grenadelauncher"):
			return "WTT_GL";
			break;
		
		case joaat("weapon_rpg"):
			return "WTT_RPG";
			break;
		
		case joaat("weapon_minigun"):
			return "WTT_MINIGUN";
			break;
		
		case joaat("weapon_assaultsmg"):
			return "WTT_SMG_ASL";
			break;
		
		case joaat("weapon_bullpupshotgun"):
			return "WTT_SG_BLP";
			break;
		
		case joaat("weapon_pistol50"):
			return "WTT_PIST_50";
			break;
		
		case joaat("weapon_bottle"):
			return "WTT_BOTTLE";
			break;
		
		case joaat("weapon_gusenberg"):
			return "WTT_GUSENBERG";
			break;
		
		case joaat("weapon_snspistol"):
			return "WTT_SNSPISTOL";
			break;
		
		case joaat("weapon_vintagepistol"):
			return "WTT_VPISTOL";
			break;
		
		case joaat("weapon_dagger"):
			return "WTT_DAGGER";
			break;
		
		case joaat("weapon_flaregun"):
			return "WTT_FLAREGUN";
			break;
		
		case joaat("weapon_musket"):
			return "WTT_MUSKET";
			break;
		
		case joaat("weapon_firework"):
			return "WTT_FWRKLNCHR";
			break;
		
		case joaat("weapon_marksmanrifle"):
			return "WTT_HMKRIFLE";
			break;
		
		case joaat("weapon_heavyshotgun"):
			return "WTT_HVYSHOT";
			break;
		
		case joaat("weapon_proxmine"):
			return "WTT_PRXMINE";
			break;
		
		case joaat("weapon_hominglauncher"):
			return "WTT_HOMLNCH";
			break;
		
		case joaat("weapon_combatpdw"):
			return "WTT_COMBATPDW";
			break;
		
		case joaat("weapon_knuckle"):
			return "WTT_KNUCKLE";
			break;
		
		case joaat("weapon_marksmanpistol"):
			return "WTT_MKPISTOL";
			break;
		
		default:
			if (func_55(iParam0, &Var0) != -1)
			{
				return func_156(&(Var0.f_17));
			}
			break;
	}
	return "WT_INVALID";
}

int func_261(int iParam0)//Position - 0x1C65F
{
	int iVar0;
	
	switch (iParam0)
	{
		case joaat("weapon_knife"):
			iVar0 = 182;
			break;
		
		case joaat("weapon_pistol"):
			iVar0 = 247;
			break;
		
		case joaat("weapon_combatpistol"):
			iVar0 = 257;
			break;
		
		case joaat("weapon_appistol"):
			iVar0 = 277;
			break;
		
		case joaat("weapon_microsmg"):
			iVar0 = 287;
			break;
		
		case joaat("weapon_smg"):
			iVar0 = 297;
			break;
		
		case joaat("weapon_assaultrifle"):
			iVar0 = 316;
			break;
		
		case joaat("weapon_carbinerifle"):
			iVar0 = 325;
			break;
		
		case joaat("weapon_specialcarbine"):
			iVar0 = 2457;
			break;
		
		case joaat("weapon_advancedrifle"):
			iVar0 = 334;
			break;
		
		case joaat("weapon_mg"):
			iVar0 = 343;
			break;
		
		case joaat("weapon_combatmg"):
			iVar0 = 352;
			break;
		
		case joaat("weapon_pumpshotgun"):
			iVar0 = 370;
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			iVar0 = 380;
			break;
		
		case joaat("weapon_assaultshotgun"):
			iVar0 = 398;
			break;
		
		case joaat("weapon_stungun"):
			iVar0 = 408;
			break;
		
		case joaat("weapon_sniperrifle"):
			iVar0 = 417;
			break;
		
		case joaat("weapon_heavysniper"):
			iVar0 = 426;
			break;
		
		case joaat("weapon_grenadelauncher"):
			iVar0 = 435;
			break;
		
		case joaat("weapon_rpg"):
			iVar0 = 442;
			break;
		
		case joaat("weapon_minigun"):
			iVar0 = 451;
			break;
		
		case joaat("weapon_grenade"):
			iVar0 = 459;
			break;
		
		case joaat("weapon_smokegrenade"):
			iVar0 = 468;
			break;
		
		case joaat("weapon_stickybomb"):
			iVar0 = 476;
			break;
		
		case joaat("weapon_molotov"):
			iVar0 = 485;
			break;
		
		case joaat("weapon_petrolcan"):
			return 0;
			break;
		
		case joaat("weapon_nightstick"):
			iVar0 = 190;
			break;
		
		case joaat("weapon_pistol50"):
			iVar0 = 267;
			break;
		
		case -572349828:
			iVar0 = 361;
			break;
		
		case joaat("weapon_assaultsmg"):
			iVar0 = 307;
			break;
		
		case 392730790:
			return 0;
			break;
		
		case joaat("weapon_hammer"):
			iVar0 = 218;
			break;
		
		case joaat("weapon_bullpupshotgun"):
			iVar0 = 389;
			break;
		
		case joaat("weapon_bottle"):
			iVar0 = 1724;
			break;
		
		case joaat("weapon_snspistol"):
			iVar0 = 1734;
			break;
		
		case joaat("weapon_heavypistol"):
			iVar0 = 2447;
			break;
		
		case joaat("weapon_bullpuprifle"):
			iVar0 = 2467;
			break;
		
		case joaat("weapon_gusenberg"):
			iVar0 = 2477;
			break;
		
		case joaat("weapon_vintagepistol"):
			iVar0 = 2760;
			break;
		
		case joaat("weapon_dagger"):
			iVar0 = 2750;
			break;
		
		case joaat("weapon_musket"):
			iVar0 = 2780;
			break;
		
		case joaat("weapon_firework"):
			iVar0 = 2770;
			break;
		
		case joaat("weapon_heavyshotgun"):
			iVar0 = 2858;
			break;
		
		case joaat("weapon_marksmanrifle"):
			iVar0 = 2868;
			break;
		
		case joaat("weapon_proxmine"):
			iVar0 = 2884;
			break;
		
		case joaat("weapon_hominglauncher"):
			iVar0 = 2892;
			break;
		
		case joaat("weapon_hatchet"):
			iVar0 = 2876;
			break;
		
		case joaat("weapon_combatpdw"):
			iVar0 = 2893;
			break;
		
		default:
			return 0;
			break;
	}
	return func_18(iVar0, -1, 0);
}

bool func_262(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4)//Position - 0x1C917
{
	StringCopy(sParam2, "", 16);
	*uParam3 = -1;
	*uParam4 = 0;
	switch (iParam0)
	{
		case joaat("gadget_parachute"):
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, "PD_TINT0", 16);
					*uParam3 = -1;
					*uParam4 = 0;
					break;
				
				case 1:
					StringCopy(sParam2, "PD_TINT0", 16);
					*uParam3 = -1;
					*uParam4 = 0;
					break;
				
				case 2:
					StringCopy(sParam2, "PD_TINT0", 16);
					*uParam3 = -1;
					*uParam4 = 0;
					break;
				
				case 3:
					StringCopy(sParam2, "PD_TINT0", 16);
					*uParam3 = -1;
					*uParam4 = 0;
					break;
				
				case 4:
					StringCopy(sParam2, "PD_TINT0", 16);
					*uParam3 = -1;
					*uParam4 = 0;
					break;
				
				case 5:
					StringCopy(sParam2, "PD_TINT0", 16);
					*uParam3 = -1;
					*uParam4 = 0;
					break;
				
				case 6:
					StringCopy(sParam2, "PD_TINT0", 16);
					*uParam3 = -1;
					*uParam4 = 0;
					break;
				
				case 7:
					StringCopy(sParam2, "PD_TINT0", 16);
					*uParam3 = -1;
					*uParam4 = 0;
					break;
				
				case 8:
					StringCopy(sParam2, "PD_TINT0", 16);
					*uParam3 = -1;
					*uParam4 = 0;
					break;
				
				case 9:
					StringCopy(sParam2, "PD_TINT0", 16);
					*uParam3 = -1;
					*uParam4 = 0;
					break;
				
				case 10:
					StringCopy(sParam2, "PD_TINT0", 16);
					*uParam3 = -1;
					*uParam4 = 0;
					break;
				
				case 11:
					StringCopy(sParam2, "PD_TINT0", 16);
					*uParam3 = -1;
					*uParam4 = 0;
					break;
				
				case 12:
					StringCopy(sParam2, "PD_TINT1", 16);
					*uParam3 = -1;
					*uParam4 = 0;
					break;
				
				case 13:
					StringCopy(sParam2, "PD_TINT2", 16);
					*uParam3 = -1;
					*uParam4 = 0;
					break;
				
				case 14:
					StringCopy(sParam2, "PD_TINT3", 16);
					*uParam3 = -1;
					*uParam4 = 0;
					break;
				
				case 15:
					StringCopy(sParam2, "PD_TINT4", 16);
					*uParam3 = -1;
					*uParam4 = 0;
					break;
				
				case 16:
					StringCopy(sParam2, "PD_TINT5", 16);
					*uParam3 = -1;
					*uParam4 = 0;
					break;
				
				case 17:
					StringCopy(sParam2, "PD_TINT6", 16);
					*uParam3 = -1;
					*uParam4 = 0;
					break;
				
				case 18:
					StringCopy(sParam2, "PD_TINT7", 16);
					*uParam3 = -1;
					*uParam4 = 0;
					break;
				
				case 19:
					StringCopy(sParam2, "PD_TINT8", 16);
					*uParam3 = -1;
					*uParam4 = 0;
					break;
				
				case 20:
					StringCopy(sParam2, "PD_TINT9", 16);
					*uParam3 = -1;
					*uParam4 = 0;
					break;
				
				case 21:
					StringCopy(sParam2, "PD_TINT10", 16);
					*uParam3 = -1;
					*uParam4 = 0;
					break;
				
				case 22:
					StringCopy(sParam2, "PD_TINT11", 16);
					*uParam3 = -1;
					*uParam4 = 0;
					break;
				
				case 23:
					StringCopy(sParam2, "PD_TINT12", 16);
					*uParam3 = -1;
					*uParam4 = 0;
					break;
				
				case 24:
					StringCopy(sParam2, "PD_TINT13", 16);
					*uParam3 = -1;
					*uParam4 = 0;
					break;
				
				case 25:
					StringCopy(sParam2, "PD_TINT14", 16);
					*uParam3 = -1;
					*uParam4 = 0;
					break;
			}
			break;
		
		default:
			if (iParam0 == -61829581)
			{
				switch (iParam1)
				{
					case 0:
						StringCopy(sParam2, "", 16);
						*uParam3 = -1;
						*uParam4 = 0;
						break;
					
					case 1:
						StringCopy(sParam2, "", 16);
						*uParam3 = -1;
						*uParam4 = 0;
						break;
					
					case 2:
						StringCopy(sParam2, "", 16);
						*uParam3 = -1;
						*uParam4 = 0;
						break;
					
					case 3:
						StringCopy(sParam2, "", 16);
						*uParam3 = -1;
						*uParam4 = 0;
						break;
					
					case 4:
						StringCopy(sParam2, "", 16);
						*uParam3 = -1;
						*uParam4 = 0;
						break;
					
					case 5:
						StringCopy(sParam2, "", 16);
						*uParam3 = -1;
						*uParam4 = 0;
						break;
					
					case 6:
						StringCopy(sParam2, "", 16);
						*uParam3 = -1;
						*uParam4 = 0;
						break;
					
					case 7:
						StringCopy(sParam2, "", 16);
						*uParam3 = -1;
						*uParam4 = 0;
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						StringCopy(sParam2, "", 16);
						*uParam3 = -1;
						*uParam4 = 0;
						break;
					
					case 1:
						StringCopy(sParam2, "GSM_TINT_KILL", 16);
						*uParam3 = 200;
						*uParam4 = 1;
						break;
					
					case 2:
						StringCopy(sParam2, "GSM_TINT_CASH", 16);
						*uParam3 = -1;
						*uParam4 = 0;
						break;
					
					case 3:
						StringCopy(sParam2, "GSM_TINT_RANK", 16);
						*uParam3 = 50;
						*uParam4 = 0;
						break;
					
					case 4:
						StringCopy(sParam2, "GSM_TINT_KILL", 16);
						*uParam3 = 100;
						*uParam4 = 1;
						break;
					
					case 5:
						StringCopy(sParam2, "GSM_TINT_KILL", 16);
						*uParam3 = 600;
						*uParam4 = 1;
						break;
					
					case 6:
						StringCopy(sParam2, "GSM_TINT_KILL", 16);
						*uParam3 = 400;
						*uParam4 = 1;
						break;
					
					case 7:
						StringCopy(sParam2, "GSM_TINT_AWARD", 16);
						*uParam3 = -1;
						*uParam4 = 0;
						break;
					}
			}
			break;
	}
	return MISC::GET_HASH_KEY(sParam2) != 0;
}

int func_263(int iParam0, int iParam1, int iParam2)//Position - 0x1CD79
{
	var uVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	
	if (iParam0 != 0)
	{
		if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == joaat("gadget_parachute")) && func_268(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
		if (iParam2 == 5)
		{
			return 1;
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if ((((((((iParam0 == -572349828 || iParam0 == 392730790) || iParam0 == joaat("weapon_bullpupshotgun")) || iParam0 == -947031628) || iParam0 == -344484024) || iParam0 == joaat("weapon_pistol50")) || iParam0 == -1887867191) || iParam0 == -837150131) || iParam0 == joaat("weapon_hammer"))
			{
				return 1;
			}
		}
		else if (((((((((iParam0 == -572349828 || iParam0 == joaat("weapon_assaultsmg")) || iParam0 == 392730790) || iParam0 == joaat("weapon_bullpupshotgun")) || iParam0 == -947031628) || iParam0 == -344484024) || iParam0 == joaat("weapon_pistol50")) || iParam0 == -1887867191) || iParam0 == -837150131) || iParam0 == joaat("weapon_hammer"))
		{
			return 1;
		}
		iVar1 = func_55(iParam0, &uVar0);
		if (iVar1 != -1)
		{
			return 1;
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if ((iParam0 == joaat("gadget_parachute") && iParam2 == 4) && iParam1 == 6)
			{
				if (!func_254(6))
				{
					return 0;
				}
			}
			if ((iParam0 == joaat("gadget_parachute") && iParam2 == 4) && iParam1 == 7)
			{
				if (!func_61() || (!Global_40001.f_17E2 && !func_265(3602, -1, -1)))
				{
					return 0;
				}
			}
			if ((iParam0 != joaat("gadget_parachute") && iParam2 == 0) && iParam1 == 2)
			{
				iVar2 = func_259(iParam0, iParam1, iParam2);
				if (func_302(iVar2) || func_254(14))
				{
					return 1;
				}
			}
			iVar2 = func_259(iParam0, iParam1, iParam2);
			if (iVar2 != 0)
			{
				return func_302(iVar2);
			}
			if (iParam0 == joaat("weapon_flaregun"))
			{
				StringCopy(&Var3, "WT_FLAREGUN", 16);
				return !func_264(Var3);
			}
		}
	}
	return 1;
}

int func_264(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3)//Position - 0x1CFD3
{
	switch (MISC::GET_HASH_KEY(&cParam0))
	{
		case joaat("WT_FLAREGUN"):
			return !func_265(3755, -1, -1);
			break;
		
		case -1433279578:
			return !func_265(3760, -1, -1);
			break;
		
		case -993451163:
		case 406336869:
			return !func_265(3757, -1, -1);
			break;
		
		case joaat("CLO_HST_B_1_0"):
			return !func_265(3756, -1, -1);
			break;
		
		case 1643425118:
			return !func_265(3758, -1, -1);
			break;
		
		case -334550899:
			return !func_265(3759, -1, -1);
			break;
	}
	return 0;
}

int func_265(int iParam0, int iParam1, int iParam2)//Position - 0x1D071
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_20();
	}
	iVar1 = func_267(iParam0, iParam1);
	uVar2 = func_266(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_266(int iParam0)//Position - 0x1D0AE
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

int func_267(int iParam0, int iParam1)//Position - 0x1D20E
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_20();
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

bool func_268(int iParam0)//Position - 0x1D359
{
	return Global_24D5B9[iParam0 /*254*/].f_72 == 2;
}

int func_269(int iParam0, int iParam1, int iParam2)//Position - 0x1D36D
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_10A95)
	{
		if (func_276(iParam0, iParam1, -1))
		{
			iVar0 = 1;
		}
	}
	else if (func_270(func_147(), iParam1, iParam0))
	{
		iVar0 = 1;
	}
	*iParam2 = WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam1, iParam0);
	return iVar0;
}

int func_270(int iParam0, int iParam1, int iParam2)//Position - 0x1D3B4
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (func_63(iParam0))
	{
		uVar0 = func_274(iParam0, iParam1, iParam2);
		iVar1 = func_272(iParam2, iParam1);
		iVar2 = func_271(iVar1);
		return MISC::IS_BIT_SET(uVar0, iVar2);
	}
	return 0;
}

int func_271(int iParam0)//Position - 0x1D3EF
{
	return (iParam0 % 32);
}

int func_272(int iParam0, int iParam1)//Position - 0x1D3FC
{
	return func_273(iParam0, iParam1);
}

int func_273(int iParam0, int iParam1)//Position - 0x1D40C
{
	switch (iParam1)
	{
		case joaat("weapon_pistol"):
			switch (iParam0)
			{
				case joaat("component_pistol_clip_01"):
					return 1;
					break;
				
				case joaat("component_pistol_clip_02"):
					return 2;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 3;
					break;
				
				case joaat("component_at_pi_supp_02"):
					return 4;
					break;
				
				case joaat("component_pistol_varmod_luxe"):
					return 175;
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam0)
			{
				case joaat("component_combatpistol_clip_01"):
					return 5;
					break;
				
				case joaat("component_combatpistol_clip_02"):
					return 6;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 7;
					break;
				
				case joaat("component_at_pi_supp"):
					return 8;
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam0)
			{
				case joaat("component_appistol_clip_01"):
					return 11;
					break;
				
				case joaat("component_appistol_clip_02"):
					return 12;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 13;
					break;
				
				case joaat("component_at_pi_supp"):
					return 14;
					break;
				
				case joaat("component_appistol_varmod_luxe"):
					return 164;
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam0)
			{
				case joaat("component_microsmg_clip_01"):
					return 15;
					break;
				
				case joaat("component_microsmg_clip_02"):
					return 16;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 17;
					break;
				
				case joaat("component_at_scope_macro"):
					return 18;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 19;
					break;
				
				case joaat("component_microsmg_varmod_luxe"):
					return 174;
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam0)
			{
				case joaat("component_smg_clip_01"):
					return 22;
					break;
				
				case joaat("component_smg_clip_02"):
					return 23;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 24;
					break;
				
				case joaat("component_at_scope_macro_02"):
					return 25;
					break;
				
				case joaat("component_at_pi_supp"):
					return 26;
					break;
				
				case joaat("component_smg_varmod_luxe"):
					return 179;
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam0)
			{
				case joaat("component_assaultrifle_clip_01"):
					return 27;
					break;
				
				case joaat("component_assaultrifle_clip_02"):
					return 28;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 29;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 30;
					break;
				
				case joaat("component_at_scope_macro"):
					return 31;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 32;
					break;
				
				case joaat("component_assaultrifle_varmod_luxe"):
					return 165;
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam0)
			{
				case joaat("component_carbinerifle_clip_01"):
					return 33;
					break;
				
				case joaat("component_carbinerifle_clip_02"):
					return 34;
					break;
				
				case joaat("component_at_railcover_01"):
					return 35;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 36;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 37;
					break;
				
				case joaat("component_at_scope_medium"):
					return 38;
					break;
				
				case joaat("component_at_ar_supp"):
					return 39;
					break;
				
				case joaat("component_carbinerifle_varmod_luxe"):
					return 168;
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam0)
			{
				case joaat("component_advancedrifle_clip_01"):
					return 44;
					break;
				
				case joaat("component_advancedrifle_clip_02"):
					return 45;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 47;
					break;
				
				case joaat("component_at_scope_small"):
					return 48;
					break;
				
				case joaat("component_at_ar_supp"):
					return 49;
					break;
				
				case joaat("component_advancedrifle_varmod_luxe"):
					return 163;
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam0)
			{
				case joaat("component_mg_clip_01"):
					return 50;
					break;
				
				case joaat("component_mg_clip_02"):
					return 51;
					break;
				
				case joaat("component_at_scope_small_02"):
					return 52;
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam0)
			{
				case joaat("component_combatmg_clip_01"):
					return 53;
					break;
				
				case joaat("component_combatmg_clip_02"):
					return 54;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 55;
					break;
				
				case joaat("component_at_scope_medium"):
					return 56;
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam0)
			{
				case joaat("component_at_sr_supp"):
					return 59;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 60;
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam0)
			{
				case joaat("component_assaultshotgun_clip_01"):
					return 64;
					break;
				
				case joaat("component_assaultshotgun_clip_02"):
					return 65;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 66;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 67;
					break;
				
				case joaat("component_at_ar_supp"):
					return 68;
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam0)
			{
				case joaat("component_sniperrifle_clip_01"):
					return 69;
					break;
				
				case joaat("component_at_scope_large"):
					return 70;
					break;
				
				case joaat("component_at_scope_max"):
					return 71;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 72;
					break;
				
				case joaat("component_sniperrifle_varmod_luxe"):
					return 180;
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam0)
			{
				case joaat("component_heavysniper_clip_01"):
					return 76;
					break;
				
				case joaat("component_at_scope_max"):
					return 77;
					break;
				
				case joaat("component_at_scope_large"):
					return 82;
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam0)
			{
				case joaat("component_at_ar_afgrip"):
					return 78;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 79;
					break;
				
				case joaat("component_at_scope_small"):
					return 80;
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam0)
			{
				case joaat("component_minigun_clip_01"):
					return 81;
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam0)
			{
				case joaat("component_assaultsmg_clip_01"):
					return 83;
					break;
				
				case joaat("component_assaultsmg_clip_02"):
					return 84;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 85;
					break;
				
				case joaat("component_at_scope_macro"):
					return 86;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 87;
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam0)
			{
				case joaat("component_at_ar_afgrip"):
					return 88;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 89;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 90;
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam0)
			{
				case joaat("component_pistol50_clip_01"):
					return 91;
					break;
				
				case joaat("component_pistol50_clip_02"):
					return 92;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 93;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 94;
					break;
				
				case joaat("component_pistol50_varmod_luxe"):
					return 176;
					break;
			}
			break;
		
		case 392730790:
			switch (iParam0)
			{
				case 195735895:
					return 95;
					break;
				
				case joaat("component_at_scope_large"):
					return 96;
					break;
				
				case joaat("component_at_scope_max"):
					return 97;
					break;
				
				case joaat("component_at_ar_supp"):
					return 98;
					break;
			}
			break;
		
		case -947031628:
			switch (iParam0)
			{
				case 1525977990:
					return 99;
					break;
				
				case 1824470811:
					return 100;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 101;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 102;
					break;
				
				case joaat("component_at_scope_medium"):
					return 103;
					break;
				
				case joaat("component_at_ar_supp"):
					return 104;
					break;
			}
			break;
		
		case -572349828:
			switch (iParam0)
			{
				case -890514874:
					return 105;
					break;
				
				case -507117574:
					return 106;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 107;
					break;
				
				case joaat("component_at_scope_medium"):
					return 108;
					break;
			}
			break;
		
		case -1887867191:
			switch (iParam0)
			{
				case -124428919:
					return 109;
					break;
				
				case 1048471894:
					return 110;
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam0)
			{
				case joaat("component_specialcarbine_clip_01"):
					return 111;
					break;
				
				case joaat("component_specialcarbine_clip_02"):
					return 112;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 113;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 114;
					break;
				
				case joaat("component_at_scope_medium"):
					return 115;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 116;
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam0)
			{
				case joaat("component_snspistol_clip_01"):
					return 117;
					break;
				
				case joaat("component_snspistol_clip_02"):
					return 118;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 119;
					break;
				
				case joaat("component_at_pi_supp"):
					return 120;
					break;
			}
			break;
		
		case joaat("weapon_heavypistol"):
			switch (iParam0)
			{
				case joaat("component_heavypistol_clip_01"):
					return 121;
					break;
				
				case joaat("component_heavypistol_clip_02"):
					return 122;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 123;
					break;
				
				case joaat("component_at_pi_supp"):
					return 124;
					break;
				
				case joaat("component_heavypistol_varmod_luxe"):
					return 171;
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam0)
			{
				case joaat("component_bullpuprifle_clip_01"):
					return 131;
					break;
				
				case joaat("component_bullpuprifle_clip_02"):
					return 132;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 127;
					break;
				
				case joaat("component_at_ar_supp"):
					return 128;
					break;
				
				case joaat("component_at_scope_small"):
					return 129;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 130;
					break;
			}
			break;
		
		case joaat("weapon_gusenberg"):
			switch (iParam0)
			{
				case joaat("component_gusenberg_clip_01"):
					return 125;
					break;
				
				case joaat("component_gusenberg_clip_02"):
					return 126;
					break;
			}
			break;
		
		case joaat("weapon_vintagepistol"):
			switch (iParam0)
			{
				case joaat("component_vintagepistol_clip_01"):
					return 133;
					break;
				
				case joaat("component_vintagepistol_clip_02"):
					return 134;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 135;
					break;
				
				case joaat("component_at_pi_supp"):
					return 136;
					break;
			}
			break;
		
		case joaat("weapon_heavyshotgun"):
			switch (iParam0)
			{
				case joaat("component_heavyshotgun_clip_01"):
					return 137;
					break;
				
				case joaat("component_heavyshotgun_clip_02"):
					return 140;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 145;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 146;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 147;
					break;
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			switch (iParam0)
			{
				case joaat("component_marksmanrifle_clip_01"):
					return 138;
					break;
				
				case joaat("component_marksmanrifle_clip_02"):
					return 139;
					break;
				
				case joaat("component_at_scope_large_fixed_zoom"):
					return 141;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 142;
					break;
				
				case joaat("component_at_ar_supp"):
					return 143;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 144;
					break;
				
				case joaat("component_marksmanrifle_varmod_luxe"):
					return 172;
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam0)
			{
				case joaat("component_combatpdw_clip_01"):
					return 149;
					break;
				
				case joaat("component_combatpdw_clip_02"):
					return 150;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 151;
					break;
				
				case joaat("component_at_scope_small"):
					return 152;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 153;
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam0)
			{
				case joaat("component_sawnoffshotgun_varmod_luxe"):
					return 178;
					break;
			}
			break;
	}
	return 0;
}

var func_274(int iParam0, int iParam1, int iParam2)//Position - 0x1DE2F
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = func_272(iParam2, iParam1);
	iVar2 = func_275(iVar1);
	switch (iVar2)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_0"), &uVar0, -1);
					break;
				
				case 1:
					STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_0"), &uVar0, -1);
					break;
				
				case 2:
					STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_0"), &uVar0, -1);
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_1"), &uVar0, -1);
					break;
				
				case 1:
					STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_1"), &uVar0, -1);
					break;
				
				case 2:
					STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_1"), &uVar0, -1);
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_2"), &uVar0, -1);
					break;
				
				case 1:
					STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_2"), &uVar0, -1);
					break;
				
				case 2:
					STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_2"), &uVar0, -1);
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_3"), &uVar0, -1);
					break;
				
				case 1:
					STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_3"), &uVar0, -1);
					break;
				
				case 2:
					STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_3"), &uVar0, -1);
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_4"), &uVar0, -1);
					break;
				
				case 1:
					STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_4"), &uVar0, -1);
					break;
				
				case 2:
					STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_4"), &uVar0, -1);
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_5"), &uVar0, -1);
					break;
				
				case 1:
					STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_5"), &uVar0, -1);
					break;
				
				case 2:
					STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_5"), &uVar0, -1);
					break;
			}
			break;
		
		default:
			break;
	}
	return uVar0;
}

int func_275(int iParam0)//Position - 0x1E041
{
	return (iParam0 / 32);
}

bool func_276(int iParam0, int iParam1, int iParam2)//Position - 0x1E04E
{
	var uVar0;
	int iVar1;
	
	if (func_252())
	{
		return 0;
	}
	uVar0 = func_277(iParam0, iParam1, iParam2);
	iVar1 = func_272(iParam0, iParam1);
	return MISC::IS_BIT_SET(uVar0, func_129(iVar1));
}

int func_277(int iParam0, int iParam1, int iParam2)//Position - 0x1E083
{
	int iVar0;
	
	iVar0 = func_18(func_278(iParam0, iParam1), iParam2, 0);
	return iVar0;
}

int func_278(int iParam0, int iParam1)//Position - 0x1E09E
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_272(iParam0, iParam1);
	iVar1 = func_132(iVar0);
	if ((func_22() == 0 || func_251() == 0) || (func_22() == 999 && func_251() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 798;
				break;
			
			case 1:
				return 799;
				break;
			
			case 2:
				return 800;
				break;
			
			case 3:
				return 801;
				break;
			
			case 4:
				return 1737;
				break;
			
			case 5:
				return 2389;
				break;
			}
	}
	return 2903;
}

bool func_279(int iParam0, int iParam1, char* sParam2, char* sParam3)//Position - 0x1E14C
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<15> Var3;
	
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, func_167(joaat("component_pistol_clip_01"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_pistol_clip_01"), iParam0), 16);
					break;
				
				case 1:
					StringCopy(sParam2, func_167(joaat("component_pistol_clip_02"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_pistol_clip_02"), iParam0), 16);
					break;
				
				case 2:
					StringCopy(sParam2, func_167(joaat("component_at_pi_flsh"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_at_pi_flsh"), iParam0), 16);
					break;
				
				case 3:
					StringCopy(sParam2, func_167(joaat("component_at_pi_supp_02"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_at_pi_supp_02"), iParam0), 16);
					break;
				
				case 4:
					StringCopy(sParam2, func_167(joaat("component_pistol_varmod_luxe"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_pistol_varmod_luxe"), iParam0), 16);
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, func_167(joaat("component_combatpistol_clip_01"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_combatpistol_clip_01"), iParam0), 16);
					break;
				
				case 1:
					StringCopy(sParam2, func_167(joaat("component_combatpistol_clip_02"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_combatpistol_clip_02"), iParam0), 16);
					break;
				
				case 2:
					StringCopy(sParam2, func_167(joaat("component_at_pi_flsh"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_at_pi_flsh"), iParam0), 16);
					break;
				
				case 3:
					StringCopy(sParam2, func_167(joaat("component_at_pi_supp"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_at_pi_supp"), iParam0), 16);
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, func_167(joaat("component_appistol_clip_01"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_appistol_clip_01"), iParam0), 16);
					break;
				
				case 1:
					StringCopy(sParam2, func_167(joaat("component_appistol_clip_02"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_appistol_clip_02"), iParam0), 16);
					break;
				
				case 2:
					StringCopy(sParam2, func_167(joaat("component_at_pi_flsh"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_at_pi_flsh"), iParam0), 16);
					break;
				
				case 3:
					StringCopy(sParam2, func_167(joaat("component_at_pi_supp"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_at_pi_supp"), iParam0), 16);
					break;
				
				case 4:
					StringCopy(sParam2, func_167(joaat("component_appistol_varmod_luxe"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_appistol_varmod_luxe"), iParam0), 16);
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, func_167(joaat("component_microsmg_clip_01"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_microsmg_clip_01"), iParam0), 16);
					break;
				
				case 1:
					StringCopy(sParam2, func_167(joaat("component_microsmg_clip_02"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_microsmg_clip_02"), iParam0), 16);
					break;
				
				case 2:
					StringCopy(sParam2, func_167(joaat("component_at_pi_flsh"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_at_pi_flsh"), iParam0), 16);
					break;
				
				case 3:
					StringCopy(sParam2, func_167(joaat("component_at_scope_macro"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_at_scope_macro"), iParam0), 16);
					break;
				
				case 4:
					StringCopy(sParam2, func_167(joaat("component_at_ar_supp_02"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_at_ar_supp_02"), iParam0), 16);
					break;
				
				case 5:
					StringCopy(sParam2, func_167(joaat("component_microsmg_varmod_luxe"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_microsmg_varmod_luxe"), iParam0), 16);
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, func_167(joaat("component_smg_clip_01"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_smg_clip_01"), iParam0), 16);
					break;
				
				case 1:
					StringCopy(sParam2, func_167(joaat("component_smg_clip_02"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_smg_clip_02"), iParam0), 16);
					break;
				
				case 2:
					StringCopy(sParam2, func_167(joaat("component_at_ar_flsh"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_at_ar_flsh"), iParam0), 16);
					break;
				
				case 3:
					StringCopy(sParam2, func_167(joaat("component_at_scope_macro_02"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_at_scope_macro_02"), iParam0), 16);
					break;
				
				case 4:
					StringCopy(sParam2, func_167(joaat("component_at_pi_supp"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_at_pi_supp"), iParam0), 16);
					break;
				
				case 5:
					StringCopy(sParam2, func_167(joaat("component_smg_varmod_luxe"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_smg_varmod_luxe"), iParam0), 16);
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, func_167(joaat("component_assaultrifle_clip_01"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_assaultrifle_clip_01"), iParam0), 16);
					break;
				
				case 1:
					StringCopy(sParam2, func_167(joaat("component_assaultrifle_clip_02"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_assaultrifle_clip_02"), iParam0), 16);
					break;
				
				case 2:
					StringCopy(sParam2, func_167(joaat("component_at_ar_afgrip"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_at_ar_afgrip"), iParam0), 16);
					break;
				
				case 3:
					StringCopy(sParam2, func_167(joaat("component_at_ar_flsh"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_at_ar_flsh"), iParam0), 16);
					break;
				
				case 4:
					StringCopy(sParam2, func_167(joaat("component_at_scope_macro"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_at_scope_macro"), iParam0), 16);
					break;
				
				case 5:
					StringCopy(sParam2, func_167(joaat("component_at_ar_supp_02"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_at_ar_supp_02"), iParam0), 16);
					break;
				
				case 6:
					StringCopy(sParam2, func_167(joaat("component_assaultrifle_varmod_luxe"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_assaultrifle_varmod_luxe"), iParam0), 16);
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, func_167(joaat("component_carbinerifle_clip_01"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_carbinerifle_clip_01"), iParam0), 16);
					break;
				
				case 1:
					StringCopy(sParam2, func_167(joaat("component_carbinerifle_clip_02"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_carbinerifle_clip_02"), iParam0), 16);
					break;
				
				case 2:
					StringCopy(sParam2, func_167(joaat("component_at_railcover_01"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_at_railcover_01"), iParam0), 16);
					break;
				
				case 3:
					StringCopy(sParam2, func_167(joaat("component_at_ar_afgrip"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_at_ar_afgrip"), iParam0), 16);
					break;
				
				case 4:
					StringCopy(sParam2, func_167(joaat("component_at_ar_flsh"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_at_ar_flsh"), iParam0), 16);
					break;
				
				case 5:
					StringCopy(sParam2, func_167(joaat("component_at_scope_medium"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_at_scope_medium"), iParam0), 16);
					break;
				
				case 6:
					StringCopy(sParam2, func_167(joaat("component_at_ar_supp"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_at_ar_supp"), iParam0), 16);
					break;
				
				case 7:
					StringCopy(sParam2, func_167(joaat("component_carbinerifle_varmod_luxe"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_carbinerifle_varmod_luxe"), iParam0), 16);
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, func_167(joaat("component_advancedrifle_clip_01"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_advancedrifle_clip_01"), iParam0), 16);
					break;
				
				case 1:
					StringCopy(sParam2, func_167(joaat("component_advancedrifle_clip_02"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_advancedrifle_clip_02"), iParam0), 16);
					break;
				
				case 2:
					StringCopy(sParam2, func_167(joaat("component_at_ar_flsh"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_at_ar_flsh"), iParam0), 16);
					break;
				
				case 3:
					StringCopy(sParam2, func_167(joaat("component_at_scope_small"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_at_scope_small"), iParam0), 16);
					break;
				
				case 4:
					StringCopy(sParam2, func_167(joaat("component_at_ar_supp"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_at_ar_supp"), iParam0), 16);
					break;
				
				case 5:
					StringCopy(sParam2, func_167(joaat("component_advancedrifle_varmod_luxe"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_advancedrifle_varmod_luxe"), iParam0), 16);
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, func_167(joaat("component_mg_clip_01"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_mg_clip_01"), iParam0), 16);
					break;
				
				case 1:
					StringCopy(sParam2, func_167(joaat("component_mg_clip_02"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_mg_clip_02"), iParam0), 16);
					break;
				
				case 2:
					StringCopy(sParam2, func_167(joaat("component_at_scope_small_02"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_at_scope_small_02"), iParam0), 16);
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, func_167(joaat("component_combatmg_clip_01"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_combatmg_clip_01"), iParam0), 16);
					break;
				
				case 1:
					StringCopy(sParam2, func_167(joaat("component_combatmg_clip_02"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_combatmg_clip_02"), iParam0), 16);
					break;
				
				case 2:
					StringCopy(sParam2, func_167(joaat("component_at_ar_afgrip"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_at_ar_afgrip"), iParam0), 16);
					break;
				
				case 3:
					StringCopy(sParam2, func_167(joaat("component_at_scope_medium"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_at_scope_medium"), iParam0), 16);
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, func_167(joaat("component_at_ar_flsh"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_at_ar_flsh"), iParam0), 16);
					break;
				
				case 1:
					StringCopy(sParam2, func_167(joaat("component_at_sr_supp"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_at_sr_supp"), iParam0), 16);
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, func_167(joaat("component_assaultshotgun_clip_01"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_assaultshotgun_clip_01"), iParam0), 16);
					break;
				
				case 1:
					StringCopy(sParam2, func_167(joaat("component_assaultshotgun_clip_02"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_assaultshotgun_clip_02"), iParam0), 16);
					break;
				
				case 2:
					StringCopy(sParam2, func_167(joaat("component_at_ar_afgrip"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_at_ar_afgrip"), iParam0), 16);
					break;
				
				case 3:
					StringCopy(sParam2, func_167(joaat("component_at_ar_flsh"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_at_ar_flsh"), iParam0), 16);
					break;
				
				case 4:
					StringCopy(sParam2, func_167(joaat("component_at_ar_supp"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_at_ar_supp"), iParam0), 16);
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, func_167(joaat("component_sniperrifle_clip_01"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_sniperrifle_clip_01"), iParam0), 16);
					break;
				
				case 1:
					StringCopy(sParam2, func_167(joaat("component_at_ar_supp_02"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_at_ar_supp_02"), iParam0), 16);
					break;
				
				case 2:
					StringCopy(sParam2, func_167(joaat("component_at_scope_large"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_at_scope_large"), iParam0), 16);
					break;
				
				case 3:
					StringCopy(sParam2, func_167(joaat("component_at_scope_max"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_at_scope_max"), iParam0), 16);
					break;
				
				case 4:
					StringCopy(sParam2, func_167(joaat("component_sniperrifle_varmod_luxe"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_sniperrifle_varmod_luxe"), iParam0), 16);
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, func_167(joaat("component_heavysniper_clip_01"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_heavysniper_clip_01"), iParam0), 16);
					break;
				
				case 1:
					StringCopy(sParam2, func_167(joaat("component_at_scope_large"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_at_scope_large"), iParam0), 16);
					break;
				
				case 2:
					StringCopy(sParam2, func_167(joaat("component_at_scope_max"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_at_scope_max"), iParam0), 16);
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, func_167(joaat("component_at_ar_afgrip"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_at_ar_afgrip"), iParam0), 16);
					break;
				
				case 1:
					StringCopy(sParam2, func_167(joaat("component_at_ar_flsh"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_at_ar_flsh"), iParam0), 16);
					break;
				
				case 2:
					StringCopy(sParam2, func_167(joaat("component_at_scope_small"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_at_scope_small"), iParam0), 16);
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, func_167(joaat("component_minigun_clip_01"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_minigun_clip_01"), iParam0), 16);
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, func_167(joaat("component_assaultsmg_clip_01"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_assaultsmg_clip_01"), iParam0), 16);
					break;
				
				case 1:
					StringCopy(sParam2, func_167(joaat("component_assaultsmg_clip_02"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_assaultsmg_clip_02"), iParam0), 16);
					break;
				
				case 2:
					StringCopy(sParam2, func_167(joaat("component_at_ar_flsh"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_at_ar_flsh"), iParam0), 16);
					break;
				
				case 3:
					StringCopy(sParam2, func_167(joaat("component_at_scope_macro"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_at_scope_macro"), iParam0), 16);
					break;
				
				case 4:
					StringCopy(sParam2, func_167(joaat("component_at_ar_supp_02"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_at_ar_supp_02"), iParam0), 16);
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, func_167(joaat("component_at_ar_afgrip"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_at_ar_afgrip"), iParam0), 16);
					break;
				
				case 1:
					StringCopy(sParam2, func_167(joaat("component_at_ar_flsh"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_at_ar_flsh"), iParam0), 16);
					break;
				
				case 2:
					StringCopy(sParam2, func_167(joaat("component_at_ar_supp_02"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_at_ar_supp_02"), iParam0), 16);
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, func_167(joaat("component_pistol50_clip_01"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_pistol50_clip_01"), iParam0), 16);
					break;
				
				case 1:
					StringCopy(sParam2, func_167(joaat("component_pistol50_clip_02"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_pistol50_clip_02"), iParam0), 16);
					break;
				
				case 2:
					StringCopy(sParam2, func_167(joaat("component_at_pi_flsh"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_at_pi_flsh"), iParam0), 16);
					break;
				
				case 3:
					StringCopy(sParam2, func_167(joaat("component_at_ar_supp_02"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_at_ar_supp_02"), iParam0), 16);
					break;
				
				case 4:
					StringCopy(sParam2, func_167(joaat("component_pistol50_varmod_luxe"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_pistol50_varmod_luxe"), iParam0), 16);
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, func_167(joaat("component_sawnoffshotgun_varmod_luxe"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_sawnoffshotgun_varmod_luxe"), iParam0), 16);
					break;
			}
			break;
		
		case joaat("weapon_heavypistol"):
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, func_167(joaat("component_heavypistol_clip_01"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_heavypistol_clip_01"), iParam0), 16);
					break;
				
				case 1:
					StringCopy(sParam2, func_167(joaat("component_heavypistol_clip_02"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_heavypistol_clip_02"), iParam0), 16);
					break;
				
				case 2:
					StringCopy(sParam2, func_167(joaat("component_at_pi_flsh"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_at_pi_flsh"), iParam0), 16);
					break;
				
				case 3:
					StringCopy(sParam2, func_167(joaat("component_at_pi_supp"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_at_pi_supp"), iParam0), 16);
					break;
				
				case 4:
					StringCopy(sParam2, func_167(joaat("component_heavypistol_varmod_luxe"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_heavypistol_varmod_luxe"), iParam0), 16);
					break;
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, func_167(joaat("component_marksmanrifle_clip_01"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_marksmanrifle_clip_01"), iParam0), 16);
					break;
				
				case 1:
					StringCopy(sParam2, func_167(joaat("component_marksmanrifle_clip_02"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_marksmanrifle_clip_02"), iParam0), 16);
					break;
				
				case 2:
					StringCopy(sParam2, func_167(joaat("component_at_scope_large_fixed_zoom"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_at_scope_large_fixed_zoom"), iParam0), 16);
					break;
				
				case 3:
					StringCopy(sParam2, func_167(joaat("component_at_ar_flsh"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_at_ar_flsh"), iParam0), 16);
					break;
				
				case 4:
					StringCopy(sParam2, func_167(joaat("component_at_ar_supp"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_at_ar_supp"), iParam0), 16);
					break;
				
				case 5:
					StringCopy(sParam2, func_167(joaat("component_at_ar_afgrip"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_at_ar_afgrip"), iParam0), 16);
					break;
				
				case 6:
					StringCopy(sParam2, func_167(joaat("component_marksmanrifle_varmod_luxe"), iParam0), 16);
					StringCopy(sParam3, func_280(joaat("component_marksmanrifle_varmod_luxe"), iParam0), 16);
					break;
			}
			break;
		
		default:
			iVar0 = func_55(iParam0, &uVar2);
			if (iVar0 != -1)
			{
				iVar1 = 0;
				while (iVar1 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar0))
				{
					if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar0, iVar1, &Var3))
					{
						if (iVar1 == iParam1)
						{
							MemCopy(sParam2, {Var3.f_6}, 4);
							MemCopy(sParam3, {Var3.f_E}, 4);
						}
					}
					iVar1++;
				}
			}
			break;
	}
	return (MISC::GET_HASH_KEY(sParam2) != 0 || MISC::GET_HASH_KEY(sParam3) != 0);
}

char* func_280(int iParam0, int iParam1)//Position - 0x1F23E
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<15> Var3;
	
	switch (iParam0)
	{
		case 0:
			return "WCD_INVALID";
			break;
		
		case joaat("component_at_railcover_01"):
			return "WCD_AT_RAIL";
			break;
		
		case joaat("component_at_ar_afgrip"):
			return "WCD_GRIP";
			break;
		
		case joaat("component_at_pi_flsh"):
			return "WCD_FLASH";
			break;
		
		case joaat("component_at_ar_flsh"):
			return "WCD_FLASH";
			break;
		
		case joaat("component_at_scope_macro"):
			return "WCD_SCOPE_MAC";
			break;
		
		case joaat("component_at_scope_macro_02"):
			return "WCD_SCOPE_MAC";
			break;
		
		case joaat("component_at_scope_small"):
			return "WCD_SCOPE_SML";
			break;
		
		case joaat("component_at_scope_small_02"):
			return "WCD_SCOPE_SML";
			break;
		
		case joaat("component_at_scope_medium"):
			return "WCD_SCOPE_MED";
			break;
		
		case joaat("component_at_scope_large"):
			return "WCD_SCOPE_LRG";
			break;
		
		case joaat("component_at_scope_max"):
			return "WCD_SCOPE_MAX";
			break;
		
		case joaat("component_at_pi_supp"):
			return "WCD_PI_SUPP";
			break;
		
		case joaat("component_at_pi_supp_02"):
			return "WCD_PI_SUPP";
			break;
		
		case joaat("component_at_ar_supp"):
			return "WCD_AR_SUPP";
			break;
		
		case joaat("component_at_ar_supp_02"):
			return "WCD_AR_SUPP2";
			break;
		
		case joaat("component_at_sr_supp"):
			return "WCD_SR_SUPP";
			break;
		
		case joaat("component_pistol_clip_01"):
			return "WCD_P_CLIP1";
			break;
		
		case joaat("component_pistol_clip_02"):
			return "WCD_P_CLIP2";
			break;
		
		case joaat("component_combatpistol_clip_01"):
			return "WCD_CP_CLIP1";
			break;
		
		case joaat("component_combatpistol_clip_02"):
			return "WCD_CP_CLIP2";
			break;
		
		case joaat("component_appistol_clip_01"):
			return "WCD_AP_CLIP1";
			break;
		
		case joaat("component_appistol_clip_02"):
			return "WCD_AP_CLIP2";
			break;
		
		case joaat("component_microsmg_clip_01"):
			return "WCDMSMG_CLIP1";
			break;
		
		case joaat("component_microsmg_clip_02"):
			return "WCDMSMG_CLIP2";
			break;
		
		case joaat("component_smg_clip_01"):
			return "WCD_SMG_CLIP1";
			break;
		
		case joaat("component_smg_clip_02"):
			return "WCD_SMG_CLIP2";
			break;
		
		case joaat("component_assaultrifle_clip_01"):
			return "WCD_AR_CLIP1";
			break;
		
		case joaat("component_assaultrifle_clip_02"):
			return "WCD_AR_CLIP2";
			break;
		
		case joaat("component_carbinerifle_clip_01"):
			return "WCD_CR_CLIP1";
			break;
		
		case joaat("component_carbinerifle_clip_02"):
			return "WCD_CR_CLIP2";
			break;
		
		case joaat("component_advancedrifle_clip_01"):
			return "WCD_ADR_CLIP1";
			break;
		
		case joaat("component_advancedrifle_clip_02"):
			return "WCD_ADR_CLIP2";
			break;
		
		case joaat("component_mg_clip_01"):
			return "WCD_MG_CLIP1";
			break;
		
		case joaat("component_mg_clip_02"):
			return "WCD_MG_CLIP2";
			break;
		
		case joaat("component_combatmg_clip_01"):
			return "WCDCMG_CLIP1";
			break;
		
		case joaat("component_combatmg_clip_02"):
			return "WCDCMG_CLIP2";
			break;
		
		case joaat("component_assaultshotgun_clip_01"):
			return "WCD_AS_CLIP1";
			break;
		
		case joaat("component_assaultshotgun_clip_02"):
			return "WCD_AS_CLIP2";
			break;
		
		case joaat("component_sniperrifle_clip_01"):
			return "WCD_SR_CLIP1";
			break;
		
		case joaat("component_heavysniper_clip_01"):
			return "WCD_HS_CLIP1";
			break;
		
		case joaat("component_minigun_clip_01"):
			return "WCD_MIG_CLIP2";
			break;
		
		case joaat("component_assaultsmg_clip_01"):
			return "WCD_ASMG_CLIP1";
			break;
		
		case joaat("component_assaultsmg_clip_02"):
			return "WCD_ASMG_CLIP2";
			break;
		
		case joaat("component_pistol50_clip_01"):
			return "WCD_P50_CLIP1";
			break;
		
		case joaat("component_pistol50_clip_02"):
			return "WCD_P50_CLIP2";
			break;
		
		case joaat("component_assaultrifle_varmod_luxe"):
			return "WCD_VAR_AR";
			break;
		
		case joaat("component_advancedrifle_varmod_luxe"):
			return "WCD_VAR_ADR";
			break;
		
		case joaat("component_carbinerifle_varmod_luxe"):
			return "WCD_VAR_CR";
			break;
		
		case joaat("component_appistol_varmod_luxe"):
			return "WCD_VAR_AP";
			break;
		
		case joaat("component_pistol_varmod_luxe"):
			return "WCD_VAR_P";
			break;
		
		case joaat("component_pistol50_varmod_luxe"):
			return "WCD_VAR_P50";
			break;
		
		case joaat("component_heavypistol_varmod_luxe"):
			return "WCD_VAR_HPST";
			break;
		
		case joaat("component_smg_varmod_luxe"):
			return "WCD_VAR_SMG";
			break;
		
		case joaat("component_microsmg_varmod_luxe"):
			return "WCD_VAR_MSMG";
			break;
		
		case joaat("component_sawnoffshotgun_varmod_luxe"):
			return "WCD_VAR_SOF";
			break;
		
		case joaat("component_sniperrifle_varmod_luxe"):
			return "WCD_VAR_SNP";
			break;
		
		case joaat("component_marksmanrifle_varmod_luxe"):
			return "WCD_VAR_MKRF";
			break;
		
		case joaat("component_knuckle_varmod_pimp"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_knuckle_varmod_ballas"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_knuckle_varmod_dollar"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_knuckle_varmod_diamond"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_knuckle_varmod_hate"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_knuckle_varmod_love"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_knuckle_varmod_player"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_knuckle_varmod_king"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_knuckle_varmod_vagos"):
			return "WCD_VAR_DESC";
			break;
		
		default:
			if (iParam1 != 0)
			{
				iVar0 = func_55(iParam1, &uVar2);
				if (iVar0 != -1)
				{
					iVar1 = 0;
					while (iVar1 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar0))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar0, iVar1, &Var3))
						{
							if (Var3.f_3 == iParam0)
							{
								return func_156(&(Var3.f_E));
							}
						}
						iVar1++;
					}
				}
			}
			break;
	}
	return "WCD_INVALID";
}

int func_281(int iParam0, int iParam1)//Position - 0x1F6D2
{
	switch (iParam0)
	{
		case joaat("WAPClip"):
			if (iParam1 == joaat("weapon_pistol"))
			{
				return 3;
			}
			else if (iParam1 == joaat("weapon_combatpistol"))
			{
				return 10;
			}
			else if (iParam1 == joaat("weapon_appistol"))
			{
				return 34;
			}
			else if (iParam1 == joaat("weapon_microsmg"))
			{
				return 6;
			}
			else if (iParam1 == joaat("weapon_smg"))
			{
				return 12;
			}
			else if (iParam1 == joaat("weapon_assaultsmg"))
			{
				return 30;
			}
			else if (iParam1 == joaat("weapon_assaultrifle"))
			{
				return 25;
			}
			else if (iParam1 == joaat("weapon_carbinerifle"))
			{
				return 43;
			}
			else if (iParam1 == joaat("weapon_advancedrifle"))
			{
				return 71;
			}
			else if (iParam1 == joaat("weapon_assaultshotgun"))
			{
				return 38;
			}
			else if (iParam1 == joaat("weapon_mg"))
			{
				return 51;
			}
			else if (iParam1 == joaat("weapon_combatmg"))
			{
				return 81;
			}
			break;
		
		case 1170392792:
			if (iParam1 == joaat("weapon_pistol"))
			{
				return 4;
			}
			else if (iParam1 == joaat("weapon_combatpistol"))
			{
				return 11;
			}
			else if (iParam1 == joaat("weapon_appistol"))
			{
				return 35;
			}
			else if (iParam1 == joaat("weapon_microsmg"))
			{
				return 7;
			}
			else if (iParam1 == joaat("weapon_smg"))
			{
				return 13;
			}
			else if (iParam1 == joaat("weapon_assaultsmg"))
			{
				return 31;
			}
			else if (iParam1 == joaat("weapon_assaultrifle"))
			{
				return 27;
			}
			else if (iParam1 == joaat("weapon_carbinerifle"))
			{
				return 45;
			}
			else if (iParam1 == joaat("weapon_advancedrifle"))
			{
				return 72;
			}
			else if (iParam1 == joaat("weapon_pumpshotgun"))
			{
				return 18;
			}
			else if (iParam1 == joaat("weapon_assaultshotgun"))
			{
				return 40;
			}
			else if (iParam1 == joaat("weapon_grenadelauncher"))
			{
				return 62;
			}
			break;
		
		case joaat("WAPScop"):
			if (iParam1 == joaat("weapon_microsmg"))
			{
				return 8;
			}
			else if (iParam1 == joaat("weapon_smg"))
			{
				return 14;
			}
			else if (iParam1 == joaat("weapon_assaultsmg"))
			{
				return 32;
			}
			else if (iParam1 == joaat("weapon_assaultrifle"))
			{
				return 28;
			}
			else if (iParam1 == joaat("weapon_carbinerifle"))
			{
				return 46;
			}
			else if (iParam1 == joaat("weapon_advancedrifle"))
			{
				return 73;
			}
			else if (iParam1 == joaat("weapon_mg"))
			{
				return 52;
			}
			else if (iParam1 == joaat("weapon_combatmg"))
			{
				return 83;
			}
			else if (iParam1 == joaat("weapon_sniperrifle"))
			{
				return 23;
			}
			else if (iParam1 == joaat("weapon_heavysniper"))
			{
				return 91;
			}
			else if (iParam1 == joaat("weapon_grenadelauncher"))
			{
				return 63;
			}
			break;
		
		case joaat("WAPRail"):
			if (iParam1 == joaat("weapon_sniperrifle"))
			{
				return 23;
			}
			else if (iParam1 == joaat("weapon_heavysniper"))
			{
				return 92;
			}
			break;
		
		case joaat("WAPGrip"):
			if (iParam1 == joaat("weapon_assaultrifle"))
			{
				return 26;
			}
			else if (iParam1 == joaat("weapon_carbinerifle"))
			{
				return 44;
			}
			else if (iParam1 == joaat("weapon_assaultshotgun"))
			{
				return 39;
			}
			else if (iParam1 == joaat("weapon_combatmg"))
			{
				return 82;
			}
			else if (iParam1 == joaat("weapon_grenadelauncher"))
			{
				return 61;
			}
			break;
		
		case joaat("WAPSupp"):
			if (iParam1 == joaat("weapon_pistol"))
			{
				return 5;
			}
			else if (iParam1 == joaat("weapon_combatpistol"))
			{
				return 12;
			}
			else if (iParam1 == joaat("weapon_appistol"))
			{
				return 36;
			}
			else if (iParam1 == joaat("weapon_microsmg"))
			{
				return 9;
			}
			else if (iParam1 == joaat("weapon_smg"))
			{
				return 15;
			}
			else if (iParam1 == joaat("weapon_assaultsmg"))
			{
				return 33;
			}
			else if (iParam1 == joaat("weapon_assaultrifle"))
			{
				return 29;
			}
			else if (iParam1 == joaat("weapon_carbinerifle"))
			{
				return 47;
			}
			else if (iParam1 == joaat("weapon_advancedrifle"))
			{
				return 74;
			}
			else if (iParam1 == joaat("weapon_pumpshotgun"))
			{
				return 19;
			}
			else if (iParam1 == joaat("weapon_assaultshotgun"))
			{
				return 41;
			}
			else if (iParam1 == joaat("weapon_sniperrifle"))
			{
				return 22;
			}
			break;
		
		case 1731751835:
			if (iParam1 == joaat("weapon_sniperrifle"))
			{
				return 23;
			}
			else if (iParam1 == joaat("weapon_heavysniper"))
			{
				return 92;
			}
			break;
		
		case -1441477783:
			return 0;
			break;
	}
	return 0;
}

bool func_282(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4)//Position - 0x1FB04
{
	int iVar0;
	
	StringCopy(sParam3, "", 16);
	StringCopy(sParam4, "", 16);
	iVar0 = -1;
	switch (iParam1)
	{
		case 0:
			switch (iParam2)
			{
				case 0:
					StringCopy(sParam3, func_155(joaat("gadget_parachute"), 0), 16);
					StringCopy(sParam4, func_283(joaat("gadget_parachute")), 16);
					break;
			}
			break;
		
		case 1:
			switch (iParam2)
			{
				case 0:
					StringCopy(sParam3, func_155(joaat("weapon_microsmg"), 0), 16);
					StringCopy(sParam4, func_283(joaat("weapon_microsmg")), 16);
					break;
				
				case 1:
					StringCopy(sParam3, func_155(joaat("weapon_smg"), 0), 16);
					StringCopy(sParam4, func_283(joaat("weapon_smg")), 16);
					break;
			}
			break;
		
		case 2:
			switch (iParam2)
			{
				case 0:
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						StringCopy(sParam3, func_155(joaat("weapon_assaultsmg"), 0), 16);
						StringCopy(sParam4, func_283(joaat("weapon_assaultsmg")), 16);
					}
					else
					{
						StringCopy(sParam3, func_155(joaat("weapon_sawnoffshotgun"), 0), 16);
						StringCopy(sParam4, func_283(joaat("weapon_sawnoffshotgun")), 16);
					}
					break;
				
				case 1:
					StringCopy(sParam3, func_155(joaat("weapon_pumpshotgun"), 0), 16);
					StringCopy(sParam4, func_283(joaat("weapon_pumpshotgun")), 16);
					break;
				
				case 2:
					StringCopy(sParam3, func_155(joaat("weapon_assaultshotgun"), 0), 16);
					StringCopy(sParam4, func_283(joaat("weapon_assaultshotgun")), 16);
					break;
			}
			break;
		
		case 3:
			switch (iParam2)
			{
				case 0:
					StringCopy(sParam3, func_155(joaat("weapon_assaultrifle"), 0), 16);
					StringCopy(sParam4, func_283(joaat("weapon_assaultrifle")), 16);
					break;
				
				case 1:
					StringCopy(sParam3, func_155(joaat("weapon_carbinerifle"), 0), 16);
					StringCopy(sParam4, func_283(joaat("weapon_carbinerifle")), 16);
					break;
				
				case 2:
					StringCopy(sParam3, func_155(joaat("weapon_advancedrifle"), 0), 16);
					StringCopy(sParam4, func_283(joaat("weapon_advancedrifle")), 16);
					break;
			}
			break;
		
		case 4:
			switch (iParam2)
			{
				case 0:
					StringCopy(sParam3, func_155(joaat("weapon_sniperrifle"), 0), 16);
					StringCopy(sParam4, func_283(joaat("weapon_sniperrifle")), 16);
					break;
				
				case 1:
					StringCopy(sParam3, func_155(joaat("weapon_heavysniper"), 0), 16);
					StringCopy(sParam4, func_283(joaat("weapon_heavysniper")), 16);
					break;
			}
			break;
		
		case 5:
			switch (iParam2)
			{
				case 0:
					StringCopy(sParam3, func_155(joaat("weapon_mg"), 0), 16);
					StringCopy(sParam4, func_283(joaat("weapon_mg")), 16);
					break;
				
				case 1:
					StringCopy(sParam3, func_155(joaat("weapon_combatmg"), 0), 16);
					StringCopy(sParam4, func_283(joaat("weapon_combatmg")), 16);
					break;
			}
			break;
		
		case 6:
			switch (iParam2)
			{
				case 0:
					StringCopy(sParam3, func_155(joaat("weapon_rpg"), 0), 16);
					StringCopy(sParam4, func_283(joaat("weapon_rpg")), 16);
					break;
				
				case 1:
					StringCopy(sParam3, func_155(joaat("weapon_grenadelauncher"), 0), 16);
					StringCopy(sParam4, func_283(joaat("weapon_grenadelauncher")), 16);
					break;
				
				case 2:
					StringCopy(sParam3, func_155(joaat("weapon_minigun"), 0), 16);
					StringCopy(sParam4, func_283(joaat("weapon_minigun")), 16);
					break;
			}
			break;
		
		case 7:
			switch (iParam2)
			{
				case 0:
					StringCopy(sParam3, func_155(joaat("weapon_knife"), 0), 16);
					StringCopy(sParam4, func_283(joaat("weapon_knife")), 16);
					break;
				
				case 1:
					StringCopy(sParam3, func_155(joaat("weapon_nightstick"), 0), 16);
					StringCopy(sParam4, func_283(joaat("weapon_nightstick")), 16);
					break;
			}
			break;
		
		case 8:
			switch (iParam2)
			{
				case 0:
					StringCopy(sParam3, func_155(joaat("weapon_stungun"), 0), 16);
					StringCopy(sParam4, func_283(joaat("weapon_stungun")), 16);
					break;
				
				case 1:
					StringCopy(sParam3, func_155(joaat("weapon_appistol"), 0), 16);
					StringCopy(sParam4, func_283(joaat("weapon_appistol")), 16);
					break;
				
				case 2:
					StringCopy(sParam3, func_155(joaat("weapon_combatpistol"), 0), 16);
					StringCopy(sParam4, func_283(joaat("weapon_combatpistol")), 16);
					break;
				
				case 3:
					StringCopy(sParam3, func_155(joaat("weapon_pistol"), 0), 16);
					StringCopy(sParam4, func_283(joaat("weapon_pistol")), 16);
					break;
			}
			break;
		
		case 9:
			switch (iParam2)
			{
				case 0:
					StringCopy(sParam3, func_155(joaat("weapon_smokegrenade"), 0), 16);
					StringCopy(sParam4, func_283(joaat("weapon_smokegrenade")), 16);
					break;
				
				case 1:
					StringCopy(sParam3, func_155(joaat("weapon_grenade"), 0), 16);
					StringCopy(sParam4, func_283(joaat("weapon_grenade")), 16);
					break;
				
				case 2:
					StringCopy(sParam3, func_155(joaat("weapon_stickybomb"), 0), 16);
					StringCopy(sParam4, func_283(joaat("weapon_stickybomb")), 16);
					break;
			}
			break;
		
		case 10:
			switch (iParam2)
			{
				case 0:
					StringCopy(sParam3, func_155(joaat("weapon_petrolcan"), 0), 16);
					StringCopy(sParam4, func_283(joaat("weapon_petrolcan")), 16);
					break;
			}
			break;
		
		case 11:
			switch (iParam2)
			{
				case 0:
					StringCopy(sParam3, func_155((*uParam0)[0], 0), 16);
					StringCopy(sParam4, func_283((*uParam0)[0]), 16);
					iVar0 = 0;
					break;
				
				case 1:
					StringCopy(sParam3, func_155((*uParam0)[1], 0), 16);
					StringCopy(sParam4, func_283((*uParam0)[1]), 16);
					iVar0 = 1;
					break;
				
				case 2:
					StringCopy(sParam3, func_155((*uParam0)[2], 0), 16);
					StringCopy(sParam4, func_283((*uParam0)[2]), 16);
					iVar0 = 2;
					break;
				
				case 3:
					StringCopy(sParam3, func_155((*uParam0)[3], 0), 16);
					StringCopy(sParam4, func_283((*uParam0)[3]), 16);
					iVar0 = 3;
					break;
				
				case 4:
					StringCopy(sParam3, func_155((*uParam0)[4], 0), 16);
					StringCopy(sParam4, func_283((*uParam0)[4]), 16);
					iVar0 = 4;
					break;
				
				case 5:
					StringCopy(sParam3, func_155((*uParam0)[5], 0), 16);
					StringCopy(sParam4, func_283((*uParam0)[5]), 16);
					iVar0 = 5;
					break;
			}
			break;
		
		case 12:
			switch (iParam2)
			{
				case 0:
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						StringCopy(sParam3, func_155((*uParam0)[7], 0), 16);
						StringCopy(sParam4, func_283((*uParam0)[7]), 16);
						iVar0 = 7;
					}
					else
					{
						StringCopy(sParam3, func_155((*uParam0)[6], 0), 16);
						StringCopy(sParam4, func_283((*uParam0)[6]), 16);
						iVar0 = 6;
					}
					break;
				
				case 1:
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						StringCopy(sParam3, func_155((*uParam0)[9], 0), 16);
						StringCopy(sParam4, func_283((*uParam0)[9]), 16);
						iVar0 = 9;
					}
					else
					{
						StringCopy(sParam3, func_155((*uParam0)[7], 0), 16);
						StringCopy(sParam4, func_283((*uParam0)[7]), 16);
						iVar0 = 7;
					}
					break;
				
				case 2:
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						StringCopy(sParam3, func_155((*uParam0)[10], 0), 16);
						StringCopy(sParam4, func_283((*uParam0)[10]), 16);
						iVar0 = 10;
					}
					else
					{
						StringCopy(sParam3, func_155((*uParam0)[8], 0), 16);
						StringCopy(sParam4, func_283((*uParam0)[8]), 16);
						iVar0 = 8;
					}
					break;
				
				case 3:
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						StringCopy(sParam3, func_155((*uParam0)[8], 0), 16);
						StringCopy(sParam4, func_283((*uParam0)[8]), 16);
						iVar0 = 8;
					}
					else
					{
						StringCopy(sParam3, func_155((*uParam0)[10], 0), 16);
						StringCopy(sParam4, func_283((*uParam0)[10]), 16);
						iVar0 = 10;
					}
					break;
				
				case 4:
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						StringCopy(sParam3, func_155((*uParam0)[6], 0), 16);
						StringCopy(sParam4, func_283((*uParam0)[6]), 16);
						iVar0 = 6;
					}
					else
					{
						StringCopy(sParam3, func_155((*uParam0)[11], 0), 16);
						StringCopy(sParam4, func_283((*uParam0)[11]), 16);
						iVar0 = 11;
					}
					break;
				
				case 5:
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						StringCopy(sParam3, func_155((*uParam0)[11], 0), 16);
						StringCopy(sParam4, func_283((*uParam0)[11]), 16);
						iVar0 = 11;
					}
					else
					{
						StringCopy(sParam3, func_155((*uParam0)[9], 0), 16);
						StringCopy(sParam4, func_283((*uParam0)[9]), 16);
						iVar0 = 9;
					}
					break;
			}
			break;
		
		case 13:
			switch (iParam2)
			{
				case 0:
					StringCopy(sParam3, func_155((*uParam0)[12], 0), 16);
					StringCopy(sParam4, func_283((*uParam0)[12]), 16);
					iVar0 = 13;
					break;
				
				case 1:
					StringCopy(sParam3, func_155((*uParam0)[13], 0), 16);
					StringCopy(sParam4, func_283((*uParam0)[13]), 16);
					iVar0 = 12;
					break;
				
				case 2:
					StringCopy(sParam3, func_155((*uParam0)[14], 0), 16);
					StringCopy(sParam4, func_283((*uParam0)[14]), 16);
					iVar0 = 14;
					break;
				
				case 3:
					StringCopy(sParam3, func_155((*uParam0)[15], 0), 16);
					StringCopy(sParam4, func_283((*uParam0)[15]), 16);
					iVar0 = 15;
					break;
				
				case 4:
					StringCopy(sParam3, func_155((*uParam0)[16], 0), 16);
					StringCopy(sParam4, func_283((*uParam0)[16]), 16);
					iVar0 = 16;
					break;
				
				case 5:
					StringCopy(sParam3, func_155((*uParam0)[17], 0), 16);
					StringCopy(sParam4, func_283((*uParam0)[17]), 16);
					iVar0 = 17;
					break;
			}
			break;
		
		case 14:
			switch (iParam2)
			{
				case 0:
					StringCopy(sParam3, func_155((*uParam0)[18], 0), 16);
					StringCopy(sParam4, func_283((*uParam0)[18]), 16);
					iVar0 = 18;
					break;
				
				case 1:
					StringCopy(sParam3, func_155((*uParam0)[19], 0), 16);
					StringCopy(sParam4, func_283((*uParam0)[19]), 16);
					iVar0 = 19;
					break;
				
				case 2:
					StringCopy(sParam3, func_155((*uParam0)[20], 0), 16);
					StringCopy(sParam4, func_283((*uParam0)[20]), 16);
					iVar0 = 20;
					break;
				
				case 3:
					StringCopy(sParam3, func_155((*uParam0)[21], 0), 16);
					StringCopy(sParam4, func_283((*uParam0)[21]), 16);
					iVar0 = 21;
					break;
				
				case 4:
					StringCopy(sParam3, func_155((*uParam0)[22], 0), 16);
					StringCopy(sParam4, func_283((*uParam0)[22]), 16);
					iVar0 = 22;
					break;
				
				case 5:
					StringCopy(sParam3, func_155((*uParam0)[23], 0), 16);
					StringCopy(sParam4, func_283((*uParam0)[23]), 16);
					iVar0 = 23;
					break;
			}
			break;
		
		case 15:
			switch (iParam2)
			{
				case 0:
					StringCopy(sParam3, "WT_BA_0", 16);
					StringCopy(sParam4, "WTD_BA_0", 16);
					break;
				
				case 1:
					StringCopy(sParam3, "WT_BA_1", 16);
					StringCopy(sParam4, "WTD_BA_1", 16);
					break;
				
				case 2:
					StringCopy(sParam3, "WT_BA_2", 16);
					StringCopy(sParam4, "WTD_BA_2", 16);
					break;
				
				case 3:
					StringCopy(sParam3, "WT_BA_3", 16);
					StringCopy(sParam4, "WTD_BA_3", 16);
					break;
				
				case 4:
					StringCopy(sParam3, "WT_BA_4", 16);
					StringCopy(sParam4, "WTD_BA_4", 16);
					break;
			}
			break;
	}
	if (iVar0 != -1)
	{
		if ((*uParam0)[iVar0] == -61829581)
		{
			StringCopy(sParam3, "FW_WEAP", 16);
			StringCopy(sParam4, "FW_DESC", 16);
		}
	}
	return (MISC::GET_HASH_KEY(sParam3) != 0 || MISC::GET_HASH_KEY(sParam4) != 0);
}

char* func_283(int iParam0)//Position - 0x2057C
{
	struct<16> Var0;
	
	switch (iParam0)
	{
		case 0:
			return "";
			break;
		
		case joaat("weapon_unarmed"):
			return "";
			break;
		
		case joaat("weapon_pistol"):
			return "WT_PIST_DESC";
			break;
		
		case joaat("weapon_combatpistol"):
			return "WTD_PIST_CBT";
			break;
		
		case joaat("weapon_appistol"):
			return "WTD_PIST_AP";
			break;
		
		case joaat("weapon_smg"):
			return "WTD_SMG";
			break;
		
		case joaat("weapon_microsmg"):
			return "WTD_SMG_MCR";
			break;
		
		case joaat("weapon_assaultrifle"):
			return "WTD_RIFLE_ASL";
			break;
		
		case joaat("weapon_carbinerifle"):
			return "WTD_RIFLE_CBN";
			break;
		
		case joaat("weapon_advancedrifle"):
			return "WTD_RIFLE_ADV";
			break;
		
		case joaat("weapon_mg"):
			return "WTD_MG";
			break;
		
		case joaat("weapon_combatmg"):
			return "WTD_MG_CBT";
			break;
		
		case joaat("weapon_pumpshotgun"):
			return "WTD_SG_PMP";
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			return "WTD_SG_SOF";
			break;
		
		case joaat("weapon_assaultshotgun"):
			return "WTD_SG_ASL";
			break;
		
		case joaat("weapon_heavysniper"):
			return "WTD_SNIP_HVY";
			break;
		
		case joaat("weapon_remotesniper"):
			return "WTD_SNIP_RMT";
			break;
		
		case joaat("weapon_sniperrifle"):
			return "WTD_SNIP_RIF";
			break;
		
		case joaat("weapon_grenadelauncher"):
			return "WTD_GL";
			break;
		
		case joaat("weapon_rpg"):
			return "WTD_RPG";
			break;
		
		case joaat("weapon_minigun"):
			return "WTD_MINIGUN";
			break;
		
		case joaat("weapon_grenade"):
			return "WTD_GNADE";
			break;
		
		case joaat("weapon_smokegrenade"):
			return "WTD_GNADE_SMK";
			break;
		
		case joaat("weapon_stickybomb"):
			return "WTD_GNADE_STK";
			break;
		
		case joaat("weapon_molotov"):
			return "WTD_MOLOTOV";
			break;
		
		case joaat("weapon_stungun"):
			return "WTD_STUN";
			break;
		
		case joaat("weapon_petrolcan"):
			return "WTD_PETROL";
			break;
		
		case joaat("weapon_digiscanner"):
			return "WTD_DIGI";
			break;
		
		case joaat("weapon_electric_fence"):
			return "WTD_ELCFEN";
			break;
		
		case joaat("vehicle_weapon_tank"):
			return "";
			break;
		
		case joaat("vehicle_weapon_space_rocket"):
			return "";
			break;
		
		case joaat("vehicle_weapon_player_laser"):
			return "";
			break;
		
		case joaat("object"):
			return "";
			break;
		
		case joaat("gadget_parachute"):
			return "WTD_PARA";
			break;
		
		case joaat("AMMO_RPG"):
			return "";
			break;
		
		case joaat("AMMO_TANK"):
			return "";
			break;
		
		case joaat("AMMO_SPACE_ROCKET"):
			return "";
			break;
		
		case joaat("AMMO_PLAYER_LASER"):
			return "";
			break;
		
		case joaat("AMMO_ENEMY_LASER"):
			return "";
			break;
		
		case joaat("weapon_knife"):
			return "WTD_KNIFE";
			break;
		
		case joaat("weapon_nightstick"):
			return "WTD_NGTSTK";
			break;
		
		case joaat("weapon_hammer"):
			return "WTD_HAMMER";
			break;
		
		case joaat("weapon_bat"):
			return "WTD_BAT";
			break;
		
		case joaat("weapon_crowbar"):
			return "WTD_CROWBAR";
			break;
		
		case joaat("weapon_golfclub"):
			return "WTD_GOLFCLUB";
			break;
		
		case joaat("weapon_rammed_by_car"):
			return "";
			break;
		
		case joaat("weapon_run_over_by_car"):
			return "";
			break;
		
		case joaat("weapon_assaultsmg"):
			return "WTD_SMG_ASL";
			break;
		
		case joaat("weapon_bullpupshotgun"):
			return "WTD_SG_BLP";
			break;
		
		case joaat("weapon_pistol50"):
			return "WTD_PIST_50";
			break;
		
		case joaat("weapon_vintagepistol"):
			return "WTD_VPISTOL";
			break;
		
		case joaat("weapon_dagger"):
			return "WTD_DAGGER";
			break;
		
		case joaat("weapon_proxmine"):
			return "WTD_PRXMINE";
			break;
		
		case joaat("weapon_hominglauncher"):
			return "WTD_HOMLNCH";
			break;
		
		default:
			if (func_55(iParam0, &Var0) != -1)
			{
				return func_156(&(Var0.f_F));
			}
			break;
	}
	return "WT_INVALID";
}

void func_284(var uParam0, char* sParam1, int iParam2)//Position - 0x208EF
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		func_285(uParam0);
	}
	else
	{
		StringCopy(&(uParam0->f_B), sParam1, 16);
		uParam0->f_10 = 1;
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			uParam0->f_7 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam2);
		}
		else
		{
			uParam0->f_6 = (MISC::GET_GAME_TIMER() + iParam2);
		}
	}
}

int func_285(var uParam0)//Position - 0x2093A
{
	StringCopy(&(uParam0->f_B), "", 16);
	if (uParam0->f_10)
	{
		uParam0->f_10 = 0;
		return 1;
	}
	return 0;
}

void func_286(int iParam0, int iParam1)//Position - 0x2095B
{
	if (!func_295(iParam0, iParam1))
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_290(iParam1, 1);
	}
	else
	{
		func_287(iParam0, iParam1, 1);
	}
}

void func_287(int iParam0, int iParam1, bool bParam2)//Position - 0x2098C
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_63(iParam0))
	{
		iVar0 = func_289(iParam0, iParam1);
		iVar1 = func_244(iParam1);
		iVar2 = func_243(iVar1);
		if (bParam2)
		{
			MISC::SET_BIT(&iVar0, iVar2);
		}
		else
		{
			MISC::CLEAR_BIT(&iVar0, iVar2);
		}
		func_288(iParam0, iParam1, iVar0);
	}
}

void func_288(int iParam0, int iParam1, int iParam2)//Position - 0x209D9
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_244(iParam1);
	iVar1 = func_247(iVar0);
	switch (iVar1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_tint_view_0"), iParam2, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_tint_view_0"), iParam2, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_tint_view_0"), iParam2, 1);
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_tint_view_1"), iParam2, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_tint_view_1"), iParam2, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_tint_view_1"), iParam2, 1);
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_tint_view_2"), iParam2, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_tint_view_2"), iParam2, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_tint_view_2"), iParam2, 1);
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_tint_view_3"), iParam2, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_tint_view_3"), iParam2, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_tint_view_3"), iParam2, 1);
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_tint_view_4"), iParam2, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_tint_view_4"), iParam2, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_tint_view_4"), iParam2, 1);
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_tint_view_5"), iParam2, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_tint_view_5"), iParam2, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_tint_view_5"), iParam2, 1);
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_tint_view_6"), iParam2, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_tint_view_6"), iParam2, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_tint_view_6"), iParam2, 1);
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_tint_view_7"), iParam2, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_tint_view_7"), iParam2, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_tint_view_7"), iParam2, 1);
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_tint_view_8"), iParam2, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_tint_view_8"), iParam2, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_tint_view_8"), iParam2, 1);
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_tint_view_9"), iParam2, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_tint_view_9"), iParam2, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_tint_view_9"), iParam2, 1);
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_tint_view_10"), iParam2, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_tint_view_10"), iParam2, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_tint_view_10"), iParam2, 1);
					break;
			}
			break;
		
		case 11:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_tint_view_11"), iParam2, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_tint_view_11"), iParam2, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_tint_view_11"), iParam2, 1);
					break;
			}
			break;
		
		case 12:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_tint_view_12"), iParam2, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_tint_view_12"), iParam2, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_tint_view_12"), iParam2, 1);
					break;
			}
			break;
		
		default:
			break;
	}
}

var func_289(int iParam0, int iParam1)//Position - 0x20E25
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = func_244(iParam1);
	iVar2 = func_247(iVar1);
	switch (iVar2)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("sp0_weap_tint_view_0"), &uVar0, -1);
					break;
				
				case 1:
					STATS::STAT_GET_INT(joaat("sp1_weap_tint_view_0"), &uVar0, -1);
					break;
				
				case 2:
					STATS::STAT_GET_INT(joaat("sp2_weap_tint_view_0"), &uVar0, -1);
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("sp0_weap_tint_view_1"), &uVar0, -1);
					break;
				
				case 1:
					STATS::STAT_GET_INT(joaat("sp1_weap_tint_view_1"), &uVar0, -1);
					break;
				
				case 2:
					STATS::STAT_GET_INT(joaat("sp2_weap_tint_view_1"), &uVar0, -1);
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("sp0_weap_tint_view_2"), &uVar0, -1);
					break;
				
				case 1:
					STATS::STAT_GET_INT(joaat("sp1_weap_tint_view_2"), &uVar0, -1);
					break;
				
				case 2:
					STATS::STAT_GET_INT(joaat("sp2_weap_tint_view_2"), &uVar0, -1);
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("sp0_weap_tint_view_3"), &uVar0, -1);
					break;
				
				case 1:
					STATS::STAT_GET_INT(joaat("sp1_weap_tint_view_3"), &uVar0, -1);
					break;
				
				case 2:
					STATS::STAT_GET_INT(joaat("sp2_weap_tint_view_3"), &uVar0, -1);
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("sp0_weap_tint_view_4"), &uVar0, -1);
					break;
				
				case 1:
					STATS::STAT_GET_INT(joaat("sp1_weap_tint_view_4"), &uVar0, -1);
					break;
				
				case 2:
					STATS::STAT_GET_INT(joaat("sp2_weap_tint_view_4"), &uVar0, -1);
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("sp0_weap_tint_view_5"), &uVar0, -1);
					break;
				
				case 1:
					STATS::STAT_GET_INT(joaat("sp1_weap_tint_view_5"), &uVar0, -1);
					break;
				
				case 2:
					STATS::STAT_GET_INT(joaat("sp2_weap_tint_view_5"), &uVar0, -1);
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("sp0_weap_tint_view_6"), &uVar0, -1);
					break;
				
				case 1:
					STATS::STAT_GET_INT(joaat("sp1_weap_tint_view_6"), &uVar0, -1);
					break;
				
				case 2:
					STATS::STAT_GET_INT(joaat("sp2_weap_tint_view_6"), &uVar0, -1);
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("sp0_weap_tint_view_7"), &uVar0, -1);
					break;
				
				case 1:
					STATS::STAT_GET_INT(joaat("sp1_weap_tint_view_7"), &uVar0, -1);
					break;
				
				case 2:
					STATS::STAT_GET_INT(joaat("sp2_weap_tint_view_7"), &uVar0, -1);
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("sp0_weap_tint_view_8"), &uVar0, -1);
					break;
				
				case 1:
					STATS::STAT_GET_INT(joaat("sp1_weap_tint_view_8"), &uVar0, -1);
					break;
				
				case 2:
					STATS::STAT_GET_INT(joaat("sp2_weap_tint_view_8"), &uVar0, -1);
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("sp0_weap_tint_view_9"), &uVar0, -1);
					break;
				
				case 1:
					STATS::STAT_GET_INT(joaat("sp1_weap_tint_view_9"), &uVar0, -1);
					break;
				
				case 2:
					STATS::STAT_GET_INT(joaat("sp2_weap_tint_view_9"), &uVar0, -1);
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("sp0_weap_tint_view_10"), &uVar0, -1);
					break;
				
				case 1:
					STATS::STAT_GET_INT(joaat("sp1_weap_tint_view_10"), &uVar0, -1);
					break;
				
				case 2:
					STATS::STAT_GET_INT(joaat("sp2_weap_tint_view_10"), &uVar0, -1);
					break;
			}
			break;
		
		case 11:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("sp0_weap_tint_view_11"), &uVar0, -1);
					break;
				
				case 1:
					STATS::STAT_GET_INT(joaat("sp1_weap_tint_view_11"), &uVar0, -1);
					break;
				
				case 2:
					STATS::STAT_GET_INT(joaat("sp2_weap_tint_view_11"), &uVar0, -1);
					break;
			}
			break;
		
		case 12:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("sp0_weap_tint_view_12"), &uVar0, -1);
					break;
				
				case 1:
					STATS::STAT_GET_INT(joaat("sp1_weap_tint_view_12"), &uVar0, -1);
					break;
				
				case 2:
					STATS::STAT_GET_INT(joaat("sp2_weap_tint_view_12"), &uVar0, -1);
					break;
			}
			break;
		
		default:
			break;
	}
	return uVar0;
}

void func_290(int iParam0, bool bParam1)//Position - 0x21273
{
	if (bParam1)
	{
		if (!func_294(iParam0))
		{
			func_291(iParam0, 1);
		}
	}
	else if (func_294(iParam0))
	{
		func_291(iParam0, 0);
	}
}

void func_291(int iParam0, bool bParam1)//Position - 0x212A4
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_293(iParam0);
	iVar1 = iParam0;
	if (iVar1 > -1)
	{
		if (bParam1)
		{
			MISC::SET_BIT(&iVar0, func_129(iVar1));
		}
		else
		{
			MISC::CLEAR_BIT(&iVar0, func_129(iVar1));
		}
		func_177(func_292(iParam0), iVar0, -1, 1);
	}
}

int func_292(var uParam0)//Position - 0x212EF
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_132(iVar0);
	if ((func_22() == 0 || func_251() == 0) || (func_22() == 999 && func_251() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 702;
				break;
			
			case 1:
				return 703;
				break;
			
			case 2:
				return 704;
				break;
			
			case 3:
				return 705;
				break;
			
			case 4:
				return 706;
				break;
			
			case 5:
				return 707;
				break;
			
			case 6:
				return 708;
				break;
			
			case 7:
				return 709;
				break;
			
			case 8:
				return 710;
				break;
			
			case 9:
				return 2039;
				break;
			
			case 10:
				return 2051;
				break;
			
			case 11:
				return 2078;
				break;
			
			case 12:
				return 2386;
				break;
			}
	}
	return 2903;
}

int func_293(var uParam0)//Position - 0x21400
{
	int iVar0;
	
	iVar0 = func_18(func_292(uParam0), -1, 0);
	return iVar0;
}

bool func_294(int iParam0)//Position - 0x21418
{
	var uVar0;
	int iVar1;
	
	if (func_252())
	{
		return 0;
	}
	uVar0 = func_293(iParam0);
	iVar1 = iParam0;
	return MISC::IS_BIT_SET(uVar0, func_129(iVar1));
}

int func_295(int iParam0, int iParam1)//Position - 0x21443
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_302(iParam1) && !func_294(iParam1))
		{
			return 1;
		}
	}
	else if (!func_296(iParam0, iParam1))
	{
		return 1;
	}
	return 0;
}

int func_296(int iParam0, int iParam1)//Position - 0x2147F
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (func_63(iParam0))
	{
		uVar0 = func_289(iParam0, iParam1);
		iVar1 = func_244(iParam1);
		iVar2 = func_243(iVar1);
		return MISC::IS_BIT_SET(uVar0, iVar2);
	}
	return 0;
}

int func_297(int iParam0)//Position - 0x214B6
{
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			return 0;
			break;
		
		case joaat("weapon_knife"):
			return 0;
			break;
		
		case joaat("weapon_microsmg"):
			return 5;
			break;
		
		case joaat("weapon_assaultsmg"):
			return 29;
			break;
		
		case joaat("weapon_nightstick"):
			return 3;
			break;
		
		case joaat("weapon_combatpistol"):
			return 9;
			break;
		
		case joaat("weapon_smg"):
			return 11;
			break;
		
		case joaat("weapon_assaultrifle"):
			return 24;
			break;
		
		case joaat("weapon_sniperrifle"):
			return 21;
			break;
		
		case joaat("weapon_stickybomb"):
			return 19;
			break;
		
		case joaat("weapon_petrolcan"):
			return 20;
			break;
		
		case joaat("weapon_pumpshotgun"):
			return 17;
			break;
		
		case joaat("weapon_appistol"):
			return 33;
			break;
		
		case joaat("weapon_smokegrenade"):
			return 13;
			break;
		
		case joaat("weapon_grenade"):
			return 15;
			break;
		
		case joaat("weapon_carbinerifle"):
			if (func_265(3741, -1, -1))
			{
				return 0;
			}
			else
			{
				return 42;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			return 37;
			break;
		
		case joaat("weapon_molotov"):
			if (func_265(3741, -1, -1))
			{
				return 0;
			}
			else
			{
				return 31;
			}
			break;
		
		case joaat("weapon_mg"):
			return 50;
			break;
		
		case joaat("weapon_advancedrifle"):
			return 70;
			break;
		
		case joaat("weapon_combatmg"):
			return 80;
			break;
		
		case joaat("weapon_grenadelauncher"):
			return 60;
			break;
		
		case joaat("weapon_heavysniper"):
			return 90;
			break;
		
		case joaat("weapon_rpg"):
			return 100;
			break;
		
		case joaat("weapon_minigun"):
			return 120;
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			return 0;
			break;
		
		case joaat("weapon_golfclub"):
			return 0;
			break;
		
		case joaat("weapon_crowbar"):
			return 0;
			break;
		
		case joaat("weapon_bat"):
			return 0;
			break;
	}
	return 0;
}

void func_298(int iParam0)//Position - 0x2167A
{
	if (Global_26CEC9.f_3E >= 3 || Global_26CEC9.f_3D >= 4)
	{
		return;
	}
	Global_26CEC9.f_19[Global_26CEC9.f_3D] = 2;
	Global_26CEC9.f_3D++;
	Global_26CEC9.f_1E[Global_26CEC9.f_3E] = iParam0;
	Global_26CEC9.f_3E++;
}

void func_299(char* sParam0, int iParam1, int iParam2)//Position - 0x216D9
{
	int iVar0;
	
	StringCopy(&(Global_26CEC9.f_15), sParam0, 16);
	Global_26CEC9.f_3D = 0;
	Global_26CEC9.f_3E = 0;
	Global_26CEC9.f_3F = 0;
	Global_26CEC9.f_40 = 0;
	Global_26CEC9.f_41 = iParam1;
	Global_26CEC9.f_42 = MISC::GET_GAME_TIMER();
	Global_26CEC9.f_43 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_26CEC9.f_19[iVar0] = 0;
		iVar0++;
	}
}

void func_300(int iParam0)//Position - 0x2173E
{
	if (Global_4354.f_FC8 >= 3 || Global_4354.f_FC7 >= 4)
	{
		return;
	}
	Global_4354.f_F85[Global_4354.f_FC7] = 2;
	Global_4354.f_FC7++;
	Global_4354.f_F8A[Global_4354.f_FC8] = iParam0;
	Global_4354.f_FC8++;
}

int func_301(int iParam0)//Position - 0x2179D
{
	switch (iParam0)
	{
		case 1:
			return 11;
			break;
		
		case 256:
			return 11;
			break;
		
		case 257:
			return 11;
			break;
		
		case 258:
			return 11;
			break;
		
		case 259:
			return 11;
			break;
		
		case 260:
			return 11;
			break;
		
		case 261:
			return 11;
			break;
		
		case 262:
			return 11;
			break;
		
		case 305:
			return 11;
			break;
		
		case 306:
			return 11;
			break;
		
		case 307:
			return 11;
			break;
		
		case 308:
			return 11;
			break;
		
		case 309:
			return 11;
			break;
		
		case 310:
			return 11;
			break;
		
		case 311:
			return 11;
			break;
		
		case 312:
			return 11;
			break;
		
		case 313:
			return 11;
			break;
		
		case 314:
			return 11;
			break;
		
		case 315:
			return 11;
			break;
		
		case 316:
			return 11;
			break;
		
		case 317:
			return 11;
			break;
		
		case 318:
			return 11;
			break;
		
		case 319:
			return 11;
			break;
		
		case 320:
			return 11;
			break;
		
		case 321:
			return 11;
			break;
		
		case 322:
			return 11;
			break;
		
		case 323:
			return 11;
			break;
		
		case 263:
			return 11;
			break;
		
		case 264:
			return 11;
			break;
		
		case 265:
			return 11;
			break;
		
		case 302:
			return 11;
			break;
		
		case 303:
			return 11;
			break;
		
		case 304:
			return 11;
			break;
		
		case 296:
			return 11;
			break;
		
		case 297:
			return 11;
			break;
		
		case 298:
			return 11;
			break;
		
		case 299:
			return 11;
			break;
		
		case 300:
			return 11;
			break;
		
		case 301:
			return 11;
			break;
		
		case 156:
			return 5;
			break;
		
		case 157:
			return 10;
			break;
		
		case 158:
			return 15;
			break;
		
		case 159:
			return 20;
			break;
		
		case 160:
			return 25;
			break;
		
		case 2:
			return 27;
			break;
		
		case 3:
			return 24;
			break;
		
		case 4:
			return 22;
			break;
		
		case 6:
			return 15;
			break;
		
		case 7:
			return 18;
			break;
		
		case 8:
			return 44;
			break;
		
		case 9:
			return 16;
			break;
		
		case 10:
			return 23;
			break;
		
		case 11:
			return 38;
			break;
		
		case 12:
			return 32;
			break;
		
		case 13:
			return 11;
			break;
		
		case 14:
			return 56;
			break;
		
		case 15:
			return 28;
			break;
		
		case 288:
			return 44;
			break;
		
		case 289:
			return 16;
			break;
		
		case 290:
			return 23;
			break;
		
		case 291:
			return 38;
			break;
		
		case 292:
			return 32;
			break;
		
		case 293:
			return 11;
			break;
		
		case 294:
			return 56;
			break;
		
		case 295:
			return 28;
			break;
		
		case 17:
			return 75;
			break;
		
		case 136:
			return 50;
			break;
		
		case 137:
			return 50;
			break;
		
		case 138:
			return 50;
			break;
		
		case 139:
			return 50;
			break;
		
		case 140:
			return 50;
			break;
		
		case 141:
			return 50;
			break;
		
		case 142:
			return 50;
			break;
		
		case 143:
			return 50;
			break;
		
		case 144:
			return 50;
			break;
		
		case 145:
			return 50;
			break;
		
		case 146:
			return 50;
			break;
		
		case 147:
			return 50;
			break;
		
		case 148:
			return 50;
			break;
		
		case 149:
			return 50;
			break;
		
		case 150:
			return 50;
			break;
		
		case 151:
			return 50;
			break;
		
		case 152:
			return 50;
			break;
		
		case 153:
			return 50;
			break;
		
		case 154:
			return 50;
			break;
		
		case 155:
			return 50;
			break;
		
		case 36:
			return 100;
			break;
		
		case 238:
			if (Global_40001.f_B0C > -1)
			{
				return Global_40001.f_B0C;
			}
			else
			{
				return 0;
			}
			break;
		
		case 239:
			if (Global_40001.f_B0D > -1)
			{
				return Global_40001.f_B0D;
			}
			else
			{
				return 15;
			}
			break;
		
		case 240:
			if (Global_40001.f_B0E > -1)
			{
				return Global_40001.f_B0E;
			}
			else
			{
				return 30;
			}
			break;
		
		case 241:
			if (Global_40001.f_B0F > -1)
			{
				return Global_40001.f_B0F;
			}
			else
			{
				return 45;
			}
			break;
		
		case 242:
			if (Global_40001.f_B10 > -1)
			{
				return Global_40001.f_B10;
			}
			else
			{
				return 60;
			}
			break;
		
		case 243:
			if (Global_40001.f_B11 > -1)
			{
				return Global_40001.f_B11;
			}
			else
			{
				return 75;
			}
			break;
		
		case 244:
			if (Global_40001.f_B12 > -1)
			{
				return Global_40001.f_B12;
			}
			else
			{
				return 90;
			}
			break;
		
		case 245:
			if (Global_40001.f_B13 > -1)
			{
				return Global_40001.f_B13;
			}
			else
			{
				return 105;
			}
			break;
		
		case 246:
			if (Global_40001.f_B14 > -1)
			{
				return Global_40001.f_B14;
			}
			else
			{
				return 130;
			}
			break;
		
		case 247:
			if (Global_40001.f_B15 > -1)
			{
				return Global_40001.f_B15;
			}
			else
			{
				return 145;
			}
			break;
	}
	switch (iParam0)
	{
		case 345:
			return 11;
			break;
		
		case 346:
			return 11;
			break;
		
		case 347:
			return 11;
			break;
		
		case 348:
			return 11;
			break;
		
		case 349:
			return 11;
			break;
		
		case 350:
			return 11;
			break;
		
		case 351:
			return 11;
			break;
		
		case 352:
			return 11;
			break;
		
		case 353:
			return 11;
			break;
		
		case 354:
			return 11;
			break;
		
		case 355:
			return 11;
			break;
		
		case 356:
			return 11;
			break;
		
		case 357:
			return 11;
			break;
		
		case 358:
			return 11;
			break;
		
		case 359:
			return 11;
			break;
		
		case 360:
			return 11;
			break;
		
		case 361:
			return 11;
			break;
		
		case 362:
			return 11;
			break;
		
		case 363:
			return 11;
			break;
		
		case 364:
			return 11;
			break;
	}
	switch (iParam0)
	{
		case 56:
			return 100;
		
		case 57:
			return 100;
		
		case 58:
			return 100;
		
		case 59:
			return 100;
		
		case 60:
			return 100;
		
		case 61:
			return 100;
		
		case 62:
			return 100;
		
		case 63:
			return 100;
		
		case 64:
			return 100;
		
		case 65:
			return 100;
		
		case 66:
			return 100;
		
		case 67:
			return 100;
		
		case 68:
			return 100;
		
		case 69:
			return 100;
		
		case 70:
			return 100;
		
		case 71:
			return 100;
		
		case 72:
			return 100;
		
		case 73:
			return 100;
		
		case 74:
			return 100;
		
		case 75:
			return 100;
		
		case 76:
			return 200;
		
		case 77:
			return 200;
		
		case 78:
			return 200;
		
		case joaat("mpsv_lp0_31"):
			return 200;
		
		case 80:
			return 200;
		
		case 81:
			return 200;
		
		case 82:
			return 200;
		
		case 83:
			return 200;
		
		case 84:
			return 200;
		
		case 85:
			return 200;
		
		case 86:
			return 200;
		
		case 87:
			return 200;
		
		case 88:
			return 200;
		
		case 89:
			return 200;
		
		case 90:
			return 200;
		
		case 91:
			return 200;
		
		case 92:
			return 200;
		
		case 93:
			return 200;
		
		case 94:
			return 200;
		
		case 95:
			return 200;
		
		case 96:
			return 400;
		
		case 97:
			return 400;
		
		case 98:
			return 400;
		
		case 99:
			return 400;
		
		case 100:
			return 400;
		
		case 101:
			return 400;
		
		case 102:
			return 400;
		
		case 103:
			return 400;
		
		case 104:
			return 400;
		
		case 105:
			return 400;
		
		case 106:
			return 400;
		
		case 107:
			return 400;
		
		case 108:
			return 400;
		
		case 109:
			return 400;
		
		case 110:
			return 400;
		
		case 111:
			return 400;
		
		case 112:
			return 400;
		
		case 113:
			return 400;
		
		case 114:
			return 400;
		
		case 115:
			return 400;
		
		case 116:
			return 600;
		
		case 117:
			return 600;
		
		case 118:
			return 600;
		
		case 119:
			return 600;
		
		case 120:
			return 600;
		
		case 121:
			return 600;
		
		case 122:
			return 600;
		
		case 123:
			return 600;
		
		case 124:
			return 600;
		
		case 125:
			return 600;
		
		case 126:
			return 600;
		
		case 127:
			return 600;
		
		case 128:
			return 600;
		
		case 129:
			return 600;
		
		case 130:
			return 600;
		
		case 131:
			return 600;
		
		case 132:
			return 600;
		
		case 133:
			return 600;
		
		case 134:
			return 600;
		
		case 135:
			return 600;
		
		default:
	}
	switch (iParam0)
	{
		case 161:
			return 75;
		
		case 162:
			return 50;
		
		case 163:
			return 100;
		
		case 164:
			return 600;
		
		case 165:
			return 400;
		
		case 166:
			return 100;
		
		case 167:
			return 75;
		
		case 168:
			return 50;
		
		case 169:
			return 100;
		
		case 170:
			return 600;
		
		case 171:
			return 400;
		
		case 172:
			return 100;
		
		case 173:
			return 75;
		
		case 174:
			return 50;
		
		case 175:
			return 100;
		
		case 176:
			return 600;
		
		case 177:
			return 400;
		
		case 178:
			return 100;
		
		case 179:
			return 75;
		
		case 180:
			return 50;
		
		case 181:
			return 100;
		
		case 182:
			return 600;
		
		case 183:
			return 400;
		
		case 184:
			return 100;
		
		default:
	}
	switch (iParam0)
	{
		case 185:
			return 75;
		
		case 186:
			return 50;
		
		case 187:
			return 100;
		
		case 188:
			return 600;
		
		case 189:
			return 400;
		
		case 190:
			return 100;
		
		case 191:
			return 200;
		
		case 192:
			return 200;
		
		case 193:
			return 200;
		
		case 194:
			return 200;
		
		case 195:
			return 75;
		
		case 196:
			return 50;
		
		case 197:
			return 100;
		
		case 198:
			return 600;
		
		case 199:
			return 400;
		
		case 200:
			return 100;
		
		case 201:
			return 200;
		
		case 202:
			return 75;
		
		case 203:
			return 50;
		
		case 204:
			return 100;
		
		case 205:
			return 600;
		
		case 206:
			return 400;
		
		case 207:
			return 100;
		
		case 208:
			return 200;
		
		case 209:
			return 75;
		
		case 210:
			return 50;
		
		case 211:
			return 100;
		
		case 212:
			return 600;
		
		case 213:
			return 400;
		
		case 214:
			return 100;
		
		case 215:
			return 200;
		
		case 224:
			return 75;
		
		case 225:
			return 50;
		
		case 226:
			return 100;
		
		case 227:
			return 600;
		
		case 228:
			return 400;
		
		case 229:
			return 100;
		
		case 230:
			return 200;
		
		case 231:
			return 75;
		
		case 232:
			return 50;
		
		case 233:
			return 100;
		
		case 234:
			return 600;
		
		case 235:
			return 400;
		
		case 236:
			return 100;
		
		case 237:
			return 200;
		
		default:
	}
	switch (iParam0)
	{
		case 266:
			return 75;
		
		case 267:
			return 50;
		
		case 268:
			return 100;
		
		case 269:
			return 600;
		
		case 270:
			return 400;
		
		case 271:
			return 100;
		
		case 272:
			return 200;
		
		case 273:
			return 75;
		
		case 274:
			return 50;
		
		case 275:
			return 100;
		
		case 276:
			return 600;
		
		case 277:
			return 400;
		
		case 278:
			return 100;
		
		case 279:
			return 200;
		
		case 280:
			return 75;
		
		case 281:
			return 50;
		
		case 282:
			return 100;
		
		case 283:
			return 600;
		
		case 284:
			return 400;
		
		case 285:
			return 100;
		
		case 286:
			return 200;
		
		case 324:
			return 75;
		
		case 325:
			return 50;
		
		case 326:
			return 100;
		
		case 327:
			return 600;
		
		case 328:
			return 400;
		
		case 329:
			return 100;
		
		case 330:
			return 200;
		
		case 331:
			return 75;
		
		case 332:
			return 50;
		
		case 333:
			return 100;
		
		case 334:
			return 600;
		
		case 335:
			return 400;
		
		case 336:
			return 100;
		
		case 337:
			return 200;
		
		case 338:
			return 75;
		
		case 339:
			return 50;
		
		case 340:
			return 100;
		
		case 341:
			return 600;
		
		case 342:
			return 400;
		
		case 343:
			return 100;
		
		case 344:
			return 200;
		
		case 372:
			return 11;
		
		case 373:
			return 11;
		
		case 374:
			return 11;
		
		case 375:
			return 11;
		
		case 376:
			return 11;
		
		default:
	}
	return 0;
}

bool func_302(int iParam0)//Position - 0x227D8
{
	var uVar0;
	int iVar1;
	
	if (func_252())
	{
		return 0;
	}
	uVar0 = func_303(iParam0);
	iVar1 = iParam0;
	return MISC::IS_BIT_SET(uVar0, func_129(iVar1));
}

var func_303(var uParam0)//Position - 0x22803
{
	var uVar0;
	
	uVar0 = func_18(func_304(uParam0, 999), -1, 0);
	return uVar0;
}

int func_304(var uParam0, int iParam1)//Position - 0x2281E
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_132(iVar0);
	if (((func_22() == 0 || func_251() == 0) || iParam1 == 0) || (func_22() == 999 && func_251() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 684;
				break;
			
			case 1:
				return 685;
				break;
			
			case 2:
				return 686;
				break;
			
			case 3:
				return 687;
				break;
			
			case 4:
				return 688;
				break;
			
			case 5:
				return 689;
				break;
			
			case 6:
				return 690;
				break;
			
			case 7:
				return 691;
				break;
			
			case 8:
				return 692;
				break;
			
			case 9:
				return 2037;
				break;
			
			case 10:
				return 2049;
				break;
			
			case 11:
				return 2076;
				break;
			
			case 12:
				return 2384;
				break;
			}
	}
	return 2903;
}

bool func_305(char* sParam0, int iParam1, int iParam2, int iParam3)//Position - 0x22939
{
	var uVar0;
	char* sVar1;
	int iVar2;
	float fVar3;
	
	func_306(sParam0, "", "", -1, -1, 0);
	switch (iParam1)
	{
		case joaat("gadget_parachute"):
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				switch (iParam2)
				{
					case 0:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 1:
						func_306(sParam0, "PS_BAG_47", "PD_CONTENT_11", 9000, 47, 1);
						break;
					
					case 2:
						func_306(sParam0, "PS_BAG_49", "PD_CONTENT_11", 9000, 49, 1);
						break;
					
					case 3:
						func_306(sParam0, "PS_BAG_51", "PD_CONTENT_11", 9000, 51, 1);
						break;
					
					case 4:
						func_306(sParam0, "PS_BAG_48", "PD_CONTENT_11", 9000, 48, 1);
						break;
					
					case 5:
						func_306(sParam0, "PS_BAG_50", "PD_CONTENT_11", 9000, 50, 1);
						break;
					
					case 6:
						func_306(sParam0, "PS_BAG_13", "PD_CONTENT_9", 0, 13, 1);
						break;
					
					case 7:
						func_306(sParam0, "PS_BAG_22", "PD_CONTENT_9", 15000, 22, 1);
						break;
					
					case 8:
						func_306(sParam0, "PS_BAG_2", "PD_CONTENT_9", 15000, 2, 1);
						break;
					
					case 9:
						func_306(sParam0, "PS_BAG_20", "PD_CONTENT_9", 15000, 20, 1);
						break;
					
					case 10:
						func_306(sParam0, "PS_BAG_18", "PD_CONTENT_9", 15000, 18, 1);
						break;
					
					case 11:
						func_306(sParam0, "PS_BAG_3", "PD_CONTENT_9", 15000, 3, 1);
						break;
					
					case 12:
						func_306(sParam0, "PS_BAG_5", "PD_CONTENT_9", 15000, 5, 1);
						break;
					
					case 13:
						func_306(sParam0, "PS_BAG_31", "PD_CONTENT_10", 15000, 31, 1);
						break;
					
					case 14:
						func_306(sParam0, "PS_BAG_15", "PD_CONTENT_9", 15000, 15, 1);
						break;
					
					case 15:
						func_306(sParam0, "PS_BAG_32", "PD_CONTENT_10", 15000, 32, 1);
						break;
					
					case 16:
						func_306(sParam0, "PS_BAG_33", "PD_CONTENT_10", 15000, 33, 1);
						break;
					
					case 17:
						func_306(sParam0, "PS_BAG_28", "PD_CONTENT_10", 15000, 28, 1);
						break;
					
					case 18:
						func_306(sParam0, "PS_BAG_26", "PD_CONTENT_9", 15000, 26, 1);
						break;
					
					case 19:
						func_306(sParam0, "PS_BAG_27", "PD_CONTENT_10", 15000, 27, 1);
						break;
					
					case 20:
						func_306(sParam0, "PS_BAG_6", "PD_CONTENT_9", 15000, 6, 1);
						break;
					
					case 21:
						func_306(sParam0, "PS_BAG_7", "PD_CONTENT_9", 15000, 7, 1);
						break;
					
					case 22:
						func_306(sParam0, "PS_BAG_34", "PD_CONTENT_10", 15000, 34, 1);
						break;
					
					case 23:
						func_306(sParam0, "PS_BAG_24", "PD_CONTENT_9", 15000, 24, 1);
						break;
					
					case 24:
						func_306(sParam0, "PS_BAG_46", "PD_CONTENT_10", 15000, 46, 1);
						break;
					
					case 25:
						func_306(sParam0, "PS_BAG_11", "PD_CONTENT_9", 15000, 11, 1);
						break;
					
					case 26:
						func_306(sParam0, "PS_BAG_14", "PD_CONTENT_9", 15000, 14, 1);
						break;
					
					case 27:
						func_306(sParam0, "PS_BAG_8", "PD_CONTENT_9", 15000, 8, 1);
						break;
					
					case 28:
						func_306(sParam0, "PS_BAG_35", "PD_CONTENT_10", 15000, 35, 1);
						break;
					
					case 29:
						func_306(sParam0, "PS_BAG_36", "PD_CONTENT_10", 15000, 36, 1);
						break;
					
					case 30:
						func_306(sParam0, "PS_BAG_19", "PD_CONTENT_9", 15000, 19, 1);
						break;
					
					case 31:
						func_306(sParam0, "PS_BAG_29", "PD_CONTENT_10", 15000, 29, 1);
						break;
					
					case 32:
						func_306(sParam0, "PS_BAG_37", "PD_CONTENT_10", 15000, 37, 1);
						break;
					
					case 33:
						func_306(sParam0, "PS_BAG_38", "PD_CONTENT_10", 15000, 38, 1);
						break;
					
					case 34:
						func_306(sParam0, "PS_BAG_16", "PD_CONTENT_9", 15000, 16, 1);
						break;
					
					case 35:
						func_306(sParam0, "PS_BAG_45", "PD_CONTENT_10", 15000, 45, 1);
						break;
					
					case 36:
						func_306(sParam0, "PS_BAG_39", "PD_CONTENT_10", 15000, 39, 1);
						break;
					
					case 37:
						func_306(sParam0, "PS_BAG_30", "PD_CONTENT_10", 15000, 30, 1);
						break;
					
					case 38:
						func_306(sParam0, "PS_BAG_40", "PD_CONTENT_10", 15000, 40, 1);
						break;
					
					case 39:
						func_306(sParam0, "PS_BAG_21", "PD_CONTENT_9", 15000, 21, 1);
						break;
					
					case 40:
						func_306(sParam0, "PS_BAG_9", "PD_CONTENT_9", 15000, 9, 1);
						break;
					
					case 41:
						func_306(sParam0, "PS_BAG_41", "PD_CONTENT_10", 15000, 41, 1);
						break;
					
					case 42:
						func_306(sParam0, "PS_BAG_42", "PD_CONTENT_10", 15000, 42, 1);
						break;
					
					case 43:
						func_306(sParam0, "PS_BAG_43", "PD_CONTENT_10", 15000, 43, 1);
						break;
					
					case 44:
						func_306(sParam0, "PS_BAG_44", "PD_CONTENT_10", 15000, 44, 1);
						break;
					
					case 45:
						func_306(sParam0, "PS_BAG_4", "PD_CONTENT_9", 15000, 4, 1);
						break;
					
					case 46:
						func_306(sParam0, "PS_BAG_17", "PD_CONTENT_9", 15000, 17, 1);
						break;
					
					case 47:
						func_306(sParam0, "PS_BAG_12", "PD_CONTENT_9", 15000, 12, 1);
						break;
					
					case 48:
						func_306(sParam0, "PS_BAG_23", "PD_CONTENT_9", 15000, 23, 1);
						break;
					
					case 49:
						func_306(sParam0, "PS_BAG_10", "PD_CONTENT_9", 15000, 10, 1);
						break;
					
					case 50:
						func_306(sParam0, "PS_BAG_1", "PD_CONTENT_9", 15000, 1, 1);
						break;
					
					case 51:
						func_306(sParam0, "PS_BAG_25", "PD_CONTENT_9", 15000, 25, 1);
						break;
					
					case 52:
						func_306(sParam0, "PS_CAN_0", "PSD_CAN_0", 21500, 8, 2);
						break;
					
					case 53:
						func_306(sParam0, "PS_CAN_1", "PSD_CAN_1", 22100, 9, 2);
						break;
					
					case 54:
						func_306(sParam0, "PS_CAN_2", "PSD_CAN_2", 23900, 10, 2);
						break;
					
					case 55:
						func_306(sParam0, "PS_CAN_3", "PSD_CAN_3", 24800, 11, 2);
						break;
					
					case 56:
						func_306(sParam0, "PS_CAN_4", "PSD_CAN_4", 21000, 12, 2);
						break;
					
					case 57:
						func_306(sParam0, "PS_CAN_5", "PSD_CAN_5", 25000, 13, 2);
						break;
					
					case 58:
						func_306(sParam0, "PM_TINT5", "PD_TINT5", 18500, 5, 2);
						break;
					
					case 59:
						func_306(sParam0, "PM_TINT1", "PD_TINT1", 19250, 1, 2);
						break;
					
					case 60:
						func_306(sParam0, "PM_TINT2", "PD_TINT2", 18750, 2, 2);
						break;
					
					case 61:
						func_306(sParam0, "PM_TINT7", "PD_TINT7", 19000, 7, 2);
						break;
					
					case 62:
						func_306(sParam0, "PM_TINT4", "PD_TINT4", 12500, 4, 2);
						break;
					
					case 63:
						func_306(sParam0, "PM_TINT3", "PD_TINT3", 19500, 3, 2);
						break;
					
					case 64:
						func_306(sParam0, "PM_TINT0", "PD_TINT0", 19750, 0, 2);
						break;
					
					case 65:
						func_306(sParam0, "PM_TINT6", "PD_TINT6", 20000, 6, 2);
						break;
					
					case 66:
						func_306(sParam0, "PS_CAN_0", "PSD_CAN_0_R", 10750, 8, 3);
						break;
					
					case 67:
						func_306(sParam0, "PS_CAN_1", "PSD_CAN_1_R", 11050, 9, 3);
						break;
					
					case 68:
						func_306(sParam0, "PS_CAN_2", "PSD_CAN_2_R", 11950, 10, 3);
						break;
					
					case 69:
						func_306(sParam0, "PS_CAN_3", "PSD_CAN_3_R", 12400, 11, 3);
						break;
					
					case 70:
						func_306(sParam0, "PS_CAN_4", "PSD_CAN_4_R", 10500, 12, 3);
						break;
					
					case 71:
						func_306(sParam0, "PS_CAN_5", "PSD_CAN_5_R", 12500, 13, 3);
						break;
					
					case 72:
						func_306(sParam0, "PM_TINT5", "PD_TINT5_R", 9250, 5, 3);
						break;
					
					case 73:
						func_306(sParam0, "PM_TINT1", "PD_TINT1_R", 9625, 1, 3);
						break;
					
					case 74:
						func_306(sParam0, "PM_TINT2", "PD_TINT2_R", 9375, 2, 3);
						break;
					
					case 75:
						func_306(sParam0, "PM_TINT7", "PD_TINT7_R", 9500, 7, 3);
						break;
					
					case 76:
						func_306(sParam0, "PM_TINT4", "PD_TINT4_R", 6250, 4, 3);
						break;
					
					case 77:
						func_306(sParam0, "PM_TINT3", "PD_TINT3_R", 9750, 3, 3);
						break;
					
					case 78:
						func_306(sParam0, "PM_TINT0", "PD_TINT0_R", 9875, 0, 3);
						break;
					
					case joaat("mpsv_lp0_31"):
						func_306(sParam0, "PM_TINT6", "PD_TINT6_R", 10000, 6, 3);
						break;
					
					case 80:
						func_306(sParam0, "PM_TINT8", "PD_TINT8", 100, 0, 4);
						break;
					
					case 81:
						func_306(sParam0, "PM_TINT9", "PD_TINT9", 14300, 1, 4);
						break;
					
					case 82:
						func_306(sParam0, "PM_TINT10", "PD_TINT10", 14475, 2, 4);
						break;
					
					case 83:
						func_306(sParam0, "PM_TINT11", "PD_TINT11", 14650, 3, 4);
						break;
					
					case 84:
						func_306(sParam0, "PM_TINT12", "PD_TINT12", 14825, 4, 4);
						break;
					
					case 85:
						func_306(sParam0, "PM_TINT13", "PD_TINT13", 15000, 5, 4);
						break;
					
					case 86:
						func_306(sParam0, "PM_TINT14", "PD_TINT14", 25000, 6, 4);
						break;
					
					case 87:
						func_306(sParam0, "PM_TINT15", "PD_TINT15", 30000, 7, 4);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 1:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 2:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 3:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 4:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 5:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 6:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 7:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 8:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 9:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 10:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 11:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 12:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 13:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 14:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 15:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 16:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 17:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 18:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 19:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 20:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 21:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 22:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 23:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 24:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 25:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 26:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 27:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 28:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 29:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 30:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 31:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 32:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 33:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 34:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 35:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 36:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 37:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 38:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 39:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 40:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 41:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 42:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 43:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 44:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 45:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 46:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 47:
						func_306(sParam0, "PS_CAN_0", "PSD_CAN_0", 2750, 8, 2);
						break;
					
					case 48:
						func_306(sParam0, "PS_CAN_1", "PSD_CAN_1", 2750, 9, 2);
						break;
					
					case 49:
						func_306(sParam0, "PS_CAN_2", "PSD_CAN_2", 2750, 10, 2);
						break;
					
					case 50:
						func_306(sParam0, "PS_CAN_3", "PSD_CAN_3", 2750, 11, 2);
						break;
					
					case 51:
						func_306(sParam0, "PS_CAN_4", "PSD_CAN_4", 2750, 12, 2);
						break;
					
					case 52:
						func_306(sParam0, "PS_CAN_5", "PSD_CAN_5", 2750, 13, 2);
						break;
					
					case 53:
						func_306(sParam0, "PM_TINT5", "PD_TINT5", 250, 5, 2);
						break;
					
					case 54:
						func_306(sParam0, "PM_TINT1", "PD_TINT1", 500, 1, 2);
						break;
					
					case 55:
						func_306(sParam0, "PM_TINT2", "PD_TINT2", 1000, 2, 2);
						break;
					
					case 56:
						func_306(sParam0, "PM_TINT7", "PD_TINT7", 1250, 7, 2);
						break;
					
					case 57:
						func_306(sParam0, "PM_TINT4", "PD_TINT4", 1500, 4, 2);
						break;
					
					case 58:
						func_306(sParam0, "PM_TINT3", "PD_TINT3", 1750, 3, 2);
						break;
					
					case 59:
						func_306(sParam0, "PM_TINT0", "PD_TINT0", 2000, 0, 2);
						break;
					
					case 60:
						func_306(sParam0, "PM_TINT6", "PD_TINT6", 2500, 6, 2);
						break;
					
					case 61:
						func_306(sParam0, "PS_CAN_0", "PSD_CAN_0_R", 1375, 8, 3);
						break;
					
					case 62:
						func_306(sParam0, "PS_CAN_1", "PSD_CAN_1_R", 1375, 9, 3);
						break;
					
					case 63:
						func_306(sParam0, "PS_CAN_2", "PSD_CAN_2_R", 1375, 10, 3);
						break;
					
					case 64:
						func_306(sParam0, "PS_CAN_3", "PSD_CAN_3_R", 1375, 11, 3);
						break;
					
					case 65:
						func_306(sParam0, "PS_CAN_4", "PSD_CAN_4_R", 1375, 12, 3);
						break;
					
					case 66:
						func_306(sParam0, "PS_CAN_5", "PSD_CAN_5_R", 1375, 13, 3);
						break;
					
					case 67:
						func_306(sParam0, "PM_TINT5", "PD_TINT5_R", 125, 5, 3);
						break;
					
					case 68:
						func_306(sParam0, "PM_TINT1", "PD_TINT1_R", 250, 1, 3);
						break;
					
					case 69:
						func_306(sParam0, "PM_TINT2", "PD_TINT2_R", 500, 2, 3);
						break;
					
					case 70:
						func_306(sParam0, "PM_TINT7", "PD_TINT7_R", 625, 7, 3);
						break;
					
					case 71:
						func_306(sParam0, "PM_TINT4", "PD_TINT4_R", 750, 4, 3);
						break;
					
					case 72:
						func_306(sParam0, "PM_TINT3", "PD_TINT3_R", 875, 3, 3);
						break;
					
					case 73:
						func_306(sParam0, "PM_TINT0", "PD_TINT0_R", 1000, 0, 3);
						break;
					
					case 74:
						func_306(sParam0, "PM_TINT6", "PD_TINT6_R", 1250, 6, 3);
						break;
					
					case 75:
						func_306(sParam0, "PM_TINT8", "PD_TINT8", 100, 0, 4);
						break;
					
					case 76:
						func_306(sParam0, "PM_TINT9", "PD_TINT9", 14300, 1, 4);
						break;
					
					case 77:
						func_306(sParam0, "PM_TINT10", "PD_TINT10", 14475, 2, 4);
						break;
					
					case 78:
						func_306(sParam0, "PM_TINT11", "PD_TINT11", 14650, 3, 4);
						break;
					
					case joaat("mpsv_lp0_31"):
						func_306(sParam0, "PM_TINT12", "PD_TINT12", 14825, 4, 4);
						break;
					
					case 80:
						func_306(sParam0, "PM_TINT13", "PD_TINT13", 15000, 5, 4);
						break;
					}
			}
			break;
		
		default:
			if (iParam1 == -61829581)
			{
				switch (iParam2)
				{
					case 0:
						func_306(sParam0, "FW_TINT0", "FWD_TYPE1", Global_40001.f_17E6, 0, 5);
						break;
					
					case 1:
						func_306(sParam0, "FW_TINT1", "FWD_TYPE1", Global_40001.f_17E6, 1, 5);
						break;
					
					case 2:
						func_306(sParam0, "FW_TINT2", "FWD_TYPE1", Global_40001.f_17E6, 2, 5);
						break;
					
					case 3:
						func_306(sParam0, "FW_TINT3", "FWD_TYPE2", Global_40001.f_17E7, 3, 5);
						break;
					
					case 4:
						func_306(sParam0, "FW_TINT4", "FWD_TYPE2", Global_40001.f_17E7, 4, 5);
						break;
					
					case 5:
						func_306(sParam0, "FW_TINT5", "FWD_TYPE2", Global_40001.f_17E7, 5, 5);
						break;
					
					case 6:
						func_306(sParam0, "FW_TINT6", "FWD_TYPE3", Global_40001.f_17E8, 6, 5);
						break;
					
					case 7:
						func_306(sParam0, "FW_TINT7", "FWD_TYPE3", Global_40001.f_17E8, 7, 5);
						break;
					
					case 8:
						func_306(sParam0, "FW_TINT8", "FWD_TYPE3", Global_40001.f_17E8, 8, 5);
						break;
					
					case 9:
						func_306(sParam0, "FW_TINT9", "FWD_TYPE4", Global_40001.f_17E9, 9, 5);
						break;
					
					case 10:
						func_306(sParam0, "FW_TINT10", "FWD_TYPE4", Global_40001.f_17E9, 10, 5);
						break;
					
					case 11:
						func_306(sParam0, "FW_TINT11", "FWD_TYPE4", Global_40001.f_17E9, 11, 5);
						break;
				}
			}
			else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || func_55(iParam1, &uVar0) != -1)
			{
				switch (iParam2)
				{
					case 0:
						if ((iParam1 == joaat("weapon_musket") || iParam1 == joaat("weapon_flaregun")) || iParam1 == joaat("weapon_firework"))
						{
							func_306(sParam0, "WM_TINTDF", "", 500, 0, 0);
						}
						else
						{
							func_306(sParam0, "WM_TINT0", "", 500, 0, 0);
						}
						break;
					
					case 1:
						func_306(sParam0, "WM_TINT4", "", 5000, 4, 0);
						break;
					
					case 2:
						func_306(sParam0, "WM_TINT1", "", 5250, 1, 0);
						break;
					
					case 3:
						func_306(sParam0, "WM_TINT6", "", 5500, 6, 0);
						break;
					
					case 4:
						func_306(sParam0, "WM_TINT5", "", 5750, 5, 0);
						break;
					
					case 5:
						func_306(sParam0, "WM_TINT3", "", 7500, 3, 0);
						break;
					
					case 6:
						func_306(sParam0, "WM_TINT2", "", 10000, 2, 0);
						break;
					
					case 7:
						func_306(sParam0, "WM_TINT7", "", 12500, 7, 0);
						break;
					
					case 8:
						func_306(sParam0, "WM_TINT8", "", 15000, 8, 0);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_306(sParam0, "WM_TINT0", "", 500, 0, 0);
						break;
					
					case 1:
						func_306(sParam0, "WM_TINT4", "", 100, 4, 0);
						break;
					
					case 2:
						func_306(sParam0, "WM_TINT1", "", 200, 1, 0);
						break;
					
					case 3:
						func_306(sParam0, "WM_TINT6", "", 400, 6, 0);
						break;
					
					case 4:
						func_306(sParam0, "WM_TINT5", "", 600, 5, 0);
						break;
					
					case 5:
						func_306(sParam0, "WM_TINT3", "", 800, 3, 0);
						break;
					
					case 6:
						func_306(sParam0, "WM_TINT2", "", 1000, 2, 0);
						break;
					
					case 7:
						func_306(sParam0, "WM_TINT7", "", 1500, 7, 0);
						break;
					
					case 8:
						func_306(sParam0, "WM_TINT8", "", 2000, 8, 0);
						break;
					}
			}
			break;
	}
	if (iParam3 && sParam0->f_8 != -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			switch (iParam1)
			{
				case joaat("gadget_parachute"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = Global_40001.f_1C0F;
							break;
						
						case 2:
							sParam0->f_8 = Global_40001.f_1C11;
							break;
						
						case 3:
							sParam0->f_8 = Global_40001.f_1C13;
							break;
						
						case 4:
							sParam0->f_8 = Global_40001.f_1C10;
							break;
						
						case 5:
							sParam0->f_8 = Global_40001.f_1C12;
							break;
						
						case 6:
							sParam0->f_8 = Global_40001.f_18F8;
							break;
						
						case 7:
							sParam0->f_8 = Global_40001.f_195C;
							break;
						
						case 8:
							sParam0->f_8 = Global_40001.f_18F3;
							break;
						
						case 9:
							sParam0->f_8 = Global_40001.f_195A;
							break;
						
						case 10:
							sParam0->f_8 = Global_40001.f_1958;
							break;
						
						case 11:
							sParam0->f_8 = Global_40001.f_18F5;
							break;
						
						case 12:
							sParam0->f_8 = Global_40001.f_18EF;
							break;
						
						case 13:
							sParam0->f_8 = Global_40001.f_1A0A;
							break;
						
						case 14:
							sParam0->f_8 = Global_40001.f_1955;
							break;
						
						case 15:
							sParam0->f_8 = Global_40001.f_1A0B;
							break;
						
						case 16:
							sParam0->f_8 = Global_40001.f_1A0C;
							break;
						
						case 17:
							sParam0->f_8 = Global_40001.f_1A07;
							break;
						
						case 18:
							sParam0->f_8 = Global_40001.f_1960;
							break;
						
						case 19:
							sParam0->f_8 = Global_40001.f_1A06;
							break;
						
						case 20:
							sParam0->f_8 = Global_40001.f_18F0;
							break;
						
						case 21:
							sParam0->f_8 = Global_40001.f_18F1;
							break;
						
						case 22:
							sParam0->f_8 = Global_40001.f_1A0D;
							break;
						
						case 23:
							sParam0->f_8 = Global_40001.f_195E;
							break;
						
						case 24:
							sParam0->f_8 = Global_40001.f_1A19;
							break;
						
						case 25:
							sParam0->f_8 = Global_40001.f_1952;
							break;
						
						case 26:
							sParam0->f_8 = Global_40001.f_1954;
							break;
						
						case 27:
							sParam0->f_8 = Global_40001.f_18F4;
							break;
						
						case 28:
							sParam0->f_8 = Global_40001.f_1A0E;
							break;
						
						case 29:
							sParam0->f_8 = Global_40001.f_1A0F;
							break;
						
						case 30:
							sParam0->f_8 = Global_40001.f_1959;
							break;
						
						case 31:
							sParam0->f_8 = Global_40001.f_1A08;
							break;
						
						case 32:
							sParam0->f_8 = Global_40001.f_1A10;
							break;
						
						case 33:
							sParam0->f_8 = Global_40001.f_1A11;
							break;
						
						case 34:
							sParam0->f_8 = Global_40001.f_1956;
							break;
						
						case 35:
							sParam0->f_8 = Global_40001.f_1A18;
							break;
						
						case 36:
							sParam0->f_8 = Global_40001.f_1A12;
							break;
						
						case 37:
							sParam0->f_8 = Global_40001.f_1A09;
							break;
						
						case 38:
							sParam0->f_8 = Global_40001.f_1A13;
							break;
						
						case 39:
							sParam0->f_8 = Global_40001.f_195B;
							break;
						
						case 40:
							sParam0->f_8 = Global_40001.f_18EE;
							break;
						
						case 41:
							sParam0->f_8 = Global_40001.f_1A14;
							break;
						
						case 42:
							sParam0->f_8 = Global_40001.f_1A15;
							break;
						
						case 43:
							sParam0->f_8 = Global_40001.f_1A16;
							break;
						
						case 44:
							sParam0->f_8 = Global_40001.f_1A17;
							break;
						
						case 45:
							sParam0->f_8 = Global_40001.f_18F2;
							break;
						
						case 46:
							sParam0->f_8 = Global_40001.f_1957;
							break;
						
						case 47:
							sParam0->f_8 = Global_40001.f_1953;
							break;
						
						case 48:
							sParam0->f_8 = Global_40001.f_195D;
							break;
						
						case 49:
							sParam0->f_8 = Global_40001.f_18ED;
							break;
						
						case 50:
							sParam0->f_8 = Global_40001.f_18EC;
							break;
						
						case 51:
							sParam0->f_8 = Global_40001.f_195F;
							break;
						
						case 52:
							sParam0->f_8 = Global_40001.f_18E6;
							break;
						
						case 53:
							sParam0->f_8 = Global_40001.f_18E7;
							break;
						
						case 54:
							sParam0->f_8 = Global_40001.f_18E8;
							break;
						
						case 55:
							sParam0->f_8 = Global_40001.f_18E9;
							break;
						
						case 56:
							sParam0->f_8 = Global_40001.f_18EA;
							break;
						
						case 57:
							sParam0->f_8 = Global_40001.f_18EB;
							break;
						
						case 58:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A56));
							break;
						
						case 59:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A52));
							break;
						
						case 60:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A53));
							break;
						
						case 61:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A58));
							break;
						
						case 62:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A55));
							break;
						
						case 63:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A54));
							break;
						
						case 64:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A51));
							break;
						
						case 65:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A57));
							break;
						
						case 66:
							sParam0->f_8 = (Global_40001.f_18E6 / 2);
							break;
						
						case 67:
							sParam0->f_8 = (Global_40001.f_18E7 / 2);
							break;
						
						case 68:
							sParam0->f_8 = (Global_40001.f_18E8 / 2);
							break;
						
						case 69:
							sParam0->f_8 = (Global_40001.f_18E9 / 2);
							break;
						
						case 70:
							sParam0->f_8 = (Global_40001.f_18EA / 2);
							break;
						
						case 71:
							sParam0->f_8 = (Global_40001.f_18EB / 2);
							break;
						
						case 72:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A56));
							break;
						
						case 73:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A52));
							break;
						
						case 74:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A53));
							break;
						
						case 75:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A58));
							break;
						
						case 76:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A55));
							break;
						
						case 77:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A54));
							break;
						
						case 78:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A51));
							break;
						
						case joaat("mpsv_lp0_31"):
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A57));
							break;
						
						case 80:
							break;
						
						case 81:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A4B));
							break;
						
						case 82:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A4C));
							break;
						
						case 83:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A4D));
							break;
						
						case 84:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A50));
							break;
						
						case 85:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A4F));
							break;
						
						case 86:
							break;
						
						case 87:
							sParam0->f_8 = Global_40001.f_17FF;
							break;
					}
					break;
				
				case joaat("weapon_assaultsmg"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = Global_40001.f_15A8;
							break;
						
						case 2:
							sParam0->f_8 = Global_40001.f_15A9;
							break;
						
						case 3:
							sParam0->f_8 = Global_40001.f_15AA;
							break;
						
						case 4:
							sParam0->f_8 = Global_40001.f_15AB;
							break;
						
						case 5:
							sParam0->f_8 = Global_40001.f_15AC;
							break;
						
						case 6:
							sParam0->f_8 = Global_40001.f_15AD;
							break;
						
						case 7:
							sParam0->f_8 = Global_40001.f_15AE;
							break;
					}
					break;
				
				case joaat("weapon_snspistol"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = Global_40001.f_1519;
							break;
						
						case 2:
							sParam0->f_8 = Global_40001.f_151A;
							break;
						
						case 3:
							sParam0->f_8 = Global_40001.f_151B;
							break;
						
						case 4:
							sParam0->f_8 = Global_40001.f_151C;
							break;
						
						case 5:
							sParam0->f_8 = Global_40001.f_151D;
							break;
						
						case 6:
							sParam0->f_8 = Global_40001.f_1517;
							break;
						
						case 7:
							sParam0->f_8 = Global_40001.f_1518;
							break;
					}
					break;
				
				case joaat("weapon_specialcarbine"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = Global_40001.f_1520;
							break;
						
						case 2:
							sParam0->f_8 = Global_40001.f_1521;
							break;
						
						case 3:
							sParam0->f_8 = Global_40001.f_1522;
							break;
						
						case 4:
							sParam0->f_8 = Global_40001.f_1523;
							break;
						
						case 5:
							sParam0->f_8 = Global_40001.f_1524;
							break;
						
						case 6:
							sParam0->f_8 = Global_40001.f_151E;
							break;
						
						case 7:
							sParam0->f_8 = Global_40001.f_151F;
							break;
					}
					break;
				
				case joaat("weapon_heavypistol"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = Global_40001.f_1527;
							break;
						
						case 2:
							sParam0->f_8 = Global_40001.f_1528;
							break;
						
						case 3:
							sParam0->f_8 = Global_40001.f_1529;
							break;
						
						case 4:
							sParam0->f_8 = Global_40001.f_152A;
							break;
						
						case 5:
							sParam0->f_8 = Global_40001.f_152B;
							break;
						
						case 6:
							sParam0->f_8 = Global_40001.f_1525;
							break;
						
						case 7:
							sParam0->f_8 = Global_40001.f_1526;
							break;
					}
					break;
				
				case joaat("weapon_bullpuprifle"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = Global_40001.f_152E;
							break;
						
						case 2:
							sParam0->f_8 = Global_40001.f_152F;
							break;
						
						case 3:
							sParam0->f_8 = Global_40001.f_1530;
							break;
						
						case 4:
							sParam0->f_8 = Global_40001.f_1531;
							break;
						
						case 5:
							sParam0->f_8 = Global_40001.f_1532;
							break;
						
						case 6:
							sParam0->f_8 = Global_40001.f_152C;
							break;
						
						case 7:
							sParam0->f_8 = Global_40001.f_152D;
							break;
					}
					break;
				
				case joaat("weapon_vintagepistol"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = Global_40001.f_1A1D;
							break;
						
						case 2:
							sParam0->f_8 = Global_40001.f_1A1E;
							break;
						
						case 3:
							sParam0->f_8 = Global_40001.f_1A1F;
							break;
						
						case 4:
							sParam0->f_8 = Global_40001.f_1A20;
							break;
						
						case 5:
							sParam0->f_8 = Global_40001.f_1A21;
							break;
						
						case 6:
							sParam0->f_8 = Global_40001.f_1A1B;
							break;
						
						case 7:
							sParam0->f_8 = Global_40001.f_1A1C;
							break;
					}
					break;
				
				case joaat("weapon_heavyshotgun"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = Global_40001.f_1A2B;
							break;
						
						case 2:
							sParam0->f_8 = Global_40001.f_1A2C;
							break;
						
						case 3:
							sParam0->f_8 = Global_40001.f_1A2D;
							break;
						
						case 4:
							sParam0->f_8 = Global_40001.f_1A2E;
							break;
						
						case 5:
							sParam0->f_8 = Global_40001.f_1A2F;
							break;
						
						case 6:
							sParam0->f_8 = Global_40001.f_1A29;
							break;
						
						case 7:
							sParam0->f_8 = Global_40001.f_1A2A;
							break;
					}
					break;
				
				case joaat("weapon_marksmanrifle"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = Global_40001.f_1A24;
							break;
						
						case 2:
							sParam0->f_8 = Global_40001.f_1A25;
							break;
						
						case 3:
							sParam0->f_8 = Global_40001.f_1A26;
							break;
						
						case 4:
							sParam0->f_8 = Global_40001.f_1A27;
							break;
						
						case 5:
							sParam0->f_8 = Global_40001.f_1A28;
							break;
						
						case 6:
							sParam0->f_8 = Global_40001.f_1A22;
							break;
						
						case 7:
							sParam0->f_8 = Global_40001.f_1A23;
							break;
					}
					break;
				
				case joaat("weapon_pistol"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A81));
							break;
						
						case 2:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A95));
							break;
						
						case 3:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_AA9));
							break;
						
						case 4:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_ABD));
							break;
						
						case 5:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_AD1));
							break;
						
						case 6:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A59));
							break;
						
						case 7:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A6D));
							break;
					}
					break;
				
				case joaat("weapon_combatpistol"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A82));
							break;
						
						case 2:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A96));
							break;
						
						case 3:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_AAA));
							break;
						
						case 4:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_ABE));
							break;
						
						case 5:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_AD2));
							break;
						
						case 6:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A5A));
							break;
						
						case 7:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A6E));
							break;
					}
					break;
				
				case joaat("weapon_appistol"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A83));
							break;
						
						case 2:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A97));
							break;
						
						case 3:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_AAB));
							break;
						
						case 4:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_ABF));
							break;
						
						case 5:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_AD3));
							break;
						
						case 6:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A5B));
							break;
						
						case 7:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A6F));
							break;
					}
					break;
				
				case joaat("weapon_microsmg"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A84));
							break;
						
						case 2:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A98));
							break;
						
						case 3:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_AAC));
							break;
						
						case 4:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_AC0));
							break;
						
						case 5:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_AD4));
							break;
						
						case 6:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A5C));
							break;
						
						case 7:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A70));
							break;
					}
					break;
				
				case joaat("weapon_smg"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A85));
							break;
						
						case 2:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A99));
							break;
						
						case 3:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_AAD));
							break;
						
						case 4:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_AC1));
							break;
						
						case 5:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_AD5));
							break;
						
						case 6:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A5D));
							break;
						
						case 7:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A71));
							break;
					}
					break;
				
				case joaat("weapon_assaultrifle"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A84));
							break;
						
						case 2:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A98));
							break;
						
						case 3:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_AAC));
							break;
						
						case 4:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_AC0));
							break;
						
						case 5:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_AD4));
							break;
						
						case 6:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A5C));
							break;
						
						case 7:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A70));
							break;
					}
					break;
				
				case joaat("weapon_carbinerifle"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A87));
							break;
						
						case 2:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A9B));
							break;
						
						case 3:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_AAF));
							break;
						
						case 4:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_AC3));
							break;
						
						case 5:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_AD7));
							break;
						
						case 6:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A5F));
							break;
						
						case 7:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A73));
							break;
					}
					break;
				
				case joaat("weapon_advancedrifle"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A88));
							break;
						
						case 2:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A9C));
							break;
						
						case 3:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_AB0));
							break;
						
						case 4:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_AC4));
							break;
						
						case 5:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_AD8));
							break;
						
						case 6:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A60));
							break;
						
						case 7:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A74));
							break;
					}
					break;
				
				case joaat("weapon_mg"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A89));
							break;
						
						case 2:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A9D));
							break;
						
						case 3:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_AB1));
							break;
						
						case 4:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_AC5));
							break;
						
						case 5:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_AD9));
							break;
						
						case 6:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A61));
							break;
						
						case 7:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A75));
							break;
					}
					break;
				
				case joaat("weapon_combatmg"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A8A));
							break;
						
						case 2:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A9E));
							break;
						
						case 3:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_AB2));
							break;
						
						case 4:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_AC6));
							break;
						
						case 5:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_ADA));
							break;
						
						case 6:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A62));
							break;
						
						case 7:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A76));
							break;
					}
					break;
				
				case joaat("weapon_pumpshotgun"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A8B));
							break;
						
						case 2:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A9F));
							break;
						
						case 3:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_AB3));
							break;
						
						case 4:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_AC7));
							break;
						
						case 5:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_ADB));
							break;
						
						case 6:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A63));
							break;
						
						case 7:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A77));
							break;
					}
					break;
				
				case joaat("weapon_sawnoffshotgun"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A8C));
							break;
						
						case 2:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_AA0));
							break;
						
						case 3:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_AB4));
							break;
						
						case 4:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_AC8));
							break;
						
						case 5:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_ADC));
							break;
						
						case 6:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A64));
							break;
						
						case 7:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A78));
							break;
					}
					break;
				
				case joaat("weapon_assaultshotgun"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A8D));
							break;
						
						case 2:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_AA1));
							break;
						
						case 3:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_AB5));
							break;
						
						case 4:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_AC9));
							break;
						
						case 5:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_ADD));
							break;
						
						case 6:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A65));
							break;
						
						case 7:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A79));
							break;
					}
					break;
				
				case joaat("weapon_stungun"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A8F));
							break;
						
						case 2:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_AA3));
							break;
						
						case 3:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_AB7));
							break;
						
						case 4:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_ACB));
							break;
						
						case 5:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_ADF));
							break;
						
						case 6:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A67));
							break;
						
						case 7:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A7B));
							break;
					}
					break;
				
				case joaat("weapon_sniperrifle"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A90));
							break;
						
						case 2:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_AA4));
							break;
						
						case 3:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_AB8));
							break;
						
						case 4:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_ACC));
							break;
						
						case 5:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_AE0));
							break;
						
						case 6:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A68));
							break;
						
						case 7:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A7C));
							break;
					}
					break;
				
				case joaat("weapon_heavysniper"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A91));
							break;
						
						case 2:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_AA5));
							break;
						
						case 3:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_AB9));
							break;
						
						case 4:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_ACD));
							break;
						
						case 5:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_AE1));
							break;
						
						case 6:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A69));
							break;
						
						case 7:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A7D));
							break;
					}
					break;
				
				case joaat("weapon_grenadelauncher"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A92));
							break;
						
						case 2:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_AA6));
							break;
						
						case 3:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_ABA));
							break;
						
						case 4:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_ACE));
							break;
						
						case 5:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_AE2));
							break;
						
						case 6:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A6A));
							break;
						
						case 7:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A7E));
							break;
					}
					break;
				
				case joaat("weapon_rpg"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A93));
							break;
						
						case 2:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_AA7));
							break;
						
						case 3:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_ABB));
							break;
						
						case 4:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_ACF));
							break;
						
						case 5:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_AE3));
							break;
						
						case 6:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A6B));
							break;
						
						case 7:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A7F));
							break;
					}
					break;
				
				case joaat("weapon_minigun"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A94));
							break;
						
						case 2:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_AA8));
							break;
						
						case 3:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_ABC));
							break;
						
						case 4:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_AD0));
							break;
						
						case 5:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_AE4));
							break;
						
						case 6:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A6C));
							break;
						
						case 7:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_A80));
							break;
					}
					break;
				
				default:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_110B));
							break;
						
						case 2:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_110E));
							break;
						
						case 3:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_110A));
							break;
						
						case 4:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_110C));
							break;
						
						case 5:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_110F));
							break;
						
						case 6:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_1110));
							break;
						
						case 7:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_40001.f_110D));
					}
					break;
			}
			sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_42055.f_8));
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_157())
		{
			iVar2 = 2;
			if (iParam1 == joaat("gadget_parachute"))
			{
				iVar2 = sParam0->f_A;
			}
			func_154(&sVar1, *sParam0, ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 3, iVar2, func_150(iParam1), -1, -1);
			if (NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS(&sVar1))
			{
				sParam0->f_8 = NETSHOPPING::NET_GAMESERVER_GET_PRICE(MISC::GET_HASH_KEY(&sVar1), 1671640801, 1);
			}
		}
		if (func_59() && (func_159() || func_160()))
		{
			if (iParam1 == joaat("weapon_pistol50") || iParam1 == joaat("weapon_bullpupshotgun"))
			{
				sParam0->f_8 = 0;
			}
		}
		fVar3 = func_238(iParam1, &(sParam0->f_8));
		if (fVar3 != 1f)
		{
		}
	}
	return sParam0->f_8 != -1;
}

void func_306(char* sParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x261D8
{
	StringCopy(sParam0, sParam1, 16);
	StringCopy(&(sParam0->f_4), sParam2, 16);
	sParam0->f_8 = iParam3;
	sParam0->f_9 = iParam4;
	sParam0->f_A = iParam5;
}

int func_307(int iParam0, int iParam1)//Position - 0x26200
{
	if (iParam0 == joaat("gadget_parachute"))
	{
		return iParam1;
	}
	if (iParam0 == -61829581)
	{
		return iParam1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return iParam1;
	}
	else if (func_240() || func_239())
	{
		return iParam1;
	}
	else if (iParam1 == 0)
	{
		return 0;
	}
	else if (iParam1 == 1)
	{
		return 1;
	}
	else if (iParam1 == 2)
	{
		return 4;
	}
	return -1;
}

void func_308(char* sParam0)//Position - 0x26273
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

void func_309(char* sParam0, int iParam1, int iParam2)//Position - 0x262D4
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

int func_310(int iParam0)//Position - 0x26339
{
	switch (iParam0)
	{
		case joaat("weapon_assaultrifle"):
			return joaat("component_assaultrifle_varmod_luxe");
		
		case joaat("weapon_advancedrifle"):
			return joaat("component_advancedrifle_varmod_luxe");
		
		case joaat("weapon_carbinerifle"):
			return joaat("component_carbinerifle_varmod_luxe");
		
		case joaat("weapon_appistol"):
			return joaat("component_appistol_varmod_luxe");
		
		case joaat("weapon_pistol"):
			return joaat("component_pistol_varmod_luxe");
		
		case joaat("weapon_pistol50"):
			return joaat("component_pistol50_varmod_luxe");
		
		case joaat("weapon_heavypistol"):
			return joaat("component_heavypistol_varmod_luxe");
		
		case joaat("weapon_smg"):
			return joaat("component_smg_varmod_luxe");
		
		case joaat("weapon_microsmg"):
			return joaat("component_microsmg_varmod_luxe");
		
		case joaat("weapon_sawnoffshotgun"):
			return joaat("component_sawnoffshotgun_varmod_luxe");
		
		case joaat("weapon_sniperrifle"):
			return joaat("component_sniperrifle_varmod_luxe");
		
		case joaat("weapon_marksmanrifle"):
			return joaat("component_marksmanrifle_varmod_luxe");
		
		default:
	}
	return 0;
}

int func_311(int iParam0)//Position - 0x263F1
{
	if (((((((((((iParam0 == joaat("weapon_assaultrifle") || iParam0 == joaat("weapon_advancedrifle")) || iParam0 == joaat("weapon_carbinerifle")) || iParam0 == joaat("weapon_appistol")) || iParam0 == joaat("weapon_pistol")) || iParam0 == joaat("weapon_pistol50")) || iParam0 == joaat("weapon_heavypistol")) || iParam0 == joaat("weapon_smg")) || iParam0 == joaat("weapon_microsmg")) || iParam0 == joaat("weapon_sawnoffshotgun")) || iParam0 == joaat("weapon_sniperrifle")) || iParam0 == joaat("weapon_marksmanrifle"))
	{
		return 1;
	}
	return 0;
}

int func_312()//Position - 0x264A3
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	PLAYER::GET_PLAYER_PARACHUTE_SMOKE_TRAIL_COLOR(PLAYER::PLAYER_ID(), &iVar0, &iVar1, &iVar2);
	if ((iVar0 == 255 && iVar1 == 255) && iVar2 == 255)
	{
		return 0;
	}
	else if ((iVar0 == 255 && iVar1 == 0) && iVar2 == 0)
	{
		return 1;
	}
	else if ((iVar0 == 255 && iVar1 == 165) && iVar2 == 0)
	{
		return 2;
	}
	else if ((iVar0 == 255 && iVar1 == 255) && iVar2 == 0)
	{
		return 3;
	}
	else if ((iVar0 == 0 && iVar1 == 0) && iVar2 == 255)
	{
		return 4;
	}
	else if ((iVar0 == 20 && iVar1 == 20) && iVar2 == 20)
	{
		return 5;
	}
	else if (((((iVar0 == Global_1418C4 && iVar1 == Global_1418C5) && iVar2 == Global_1418C6) && Global_1418C3) && func_257()) && func_254(6))
	{
		return 6;
	}
	else if ((iVar0 == 0 && iVar1 == 0) && iVar2 == 0)
	{
		return 7;
	}
	return 0;
}

int func_313(int iParam0, int iParam1)//Position - 0x265E8
{
	int iVar0;
	
	*iParam1 = -1;
	iVar0 = 0;
	while (func_305(&Local_234, iParam0, func_307(iParam0, iVar0), 1))
	{
		if (func_314(iParam0, Local_234.f_9, Local_234.f_A))
		{
			*iParam1 = iVar0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_314(int iParam0, int iParam1, int iParam2)//Position - 0x26632
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam0 == -61829581)
	{
		return 1;
	}
	if (iParam0 == joaat("gadget_parachute"))
	{
		if (!bLocal_221)
		{
			if ((((iLocal_222 == 0 && iParam2 != 2) || (iLocal_222 == 1 && iParam2 != 3)) || (iLocal_222 == 2 && iParam2 != 4)) || (iLocal_222 == 3 && iParam2 != 1))
			{
				return 0;
			}
		}
		if (iParam2 == 4 && iParam1 == 7)
		{
			if ((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || !func_61()) || (!Global_40001.f_17E2 && !func_265(3602, -1, -1)))
			{
				return 0;
			}
		}
		if (iParam2 == 1 && iParam1 == 13)
		{
			if (!func_265(3609, -1, -1))
			{
				return 0;
			}
		}
		if (iParam2 == 2 || iParam2 == 3)
		{
			if (iParam1 >= 8)
			{
				if (!func_316())
				{
					return 0;
				}
			}
		}
		if (iParam2 == 1)
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				return 0;
			}
			if (iParam1 >= 27)
			{
				if (!func_315())
				{
					return 0;
				}
			}
			else if (!func_316())
			{
				return 0;
			}
		}
		return 1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (iParam1 >= 0 && iParam1 < WEAPON::GET_WEAPON_TINT_COUNT(iParam0))
		{
			return 1;
		}
	}
	else if (func_240() || func_239())
	{
		if (iParam1 >= 0 && iParam1 < WEAPON::GET_WEAPON_TINT_COUNT(iParam0))
		{
			return 1;
		}
	}
	else if (iParam1 >= 0 && iParam1 < WEAPON::GET_WEAPON_TINT_COUNT(iParam0))
	{
		if ((iParam1 == 0 || iParam1 == 4) || iParam1 == 5)
		{
			return 1;
		}
	}
	return 0;
}

bool func_315()//Position - 0x267FB
{
	return DLC::IS_DLC_PRESENT(-1005876368);
}

bool func_316()//Position - 0x2680C
{
	return DLC::IS_DLC_PRESENT(1428761799);
}

int func_317(int iParam0, int iParam1)//Position - 0x2681D
{
	int iVar0;
	
	*iParam1 = -1;
	iVar0 = 0;
	while (func_164(&Local_232, iParam0, iVar0, 1))
	{
		if (Local_232.f_2 != -1)
		{
			*iParam1 = iVar0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_318()//Position - 0x26857
{
	bool bVar0;
	int iVar1;
	struct<3> Var2;
	bool bVar3;
	int iVar4;
	
	if (func_42(1))
	{
		bVar0 = false;
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), uLocal_180[0]))
			{
				iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(3500, 5000);
				uLocal_180[0] = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iVar1);
				bVar0 = true;
			}
		}
		else if ((MISC::GET_GAME_TIMER() - iLocal_181[0]) > 0)
		{
			iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(3500, 5000);
			iLocal_181[0] = (MISC::GET_GAME_TIMER() + iVar1);
			bVar0 = true;
		}
		if (bVar0)
		{
			func_320(Local_131, &Var2, MISC::GET_RANDOM_INT_IN_RANGE(0, 10));
			TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), Var2 + Vector(MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 0.05f), MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 0.05f), MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 0.05f)), iVar1 + 1000, 1, 2);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_131.f_C) && !PED::IS_PED_INJURED(Local_131.f_C))
	{
		if (iLocal_183)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 500), uLocal_180[1]))
				{
					uLocal_180[1] = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), MISC::GET_RANDOM_INT_IN_RANGE(400, 600));
				}
			}
			else if (MISC::GET_GAME_TIMER() + 500 < iLocal_181[1])
			{
				iLocal_181[1] = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(400, 600));
			}
			iLocal_183 = 0;
		}
		bVar3 = false;
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), uLocal_180[1]))
			{
				iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(9000, 12000);
				uLocal_180[1] = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iVar4);
				bVar3 = true;
			}
		}
		else if ((MISC::GET_GAME_TIMER() - iLocal_181[1]) > 0)
		{
			iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(9000, 12000);
			iLocal_181[1] = (MISC::GET_GAME_TIMER() + iVar4);
			bVar3 = true;
		}
		if (bVar3)
		{
			if (iLocal_182 > 0 && !func_89(Local_184, 0f, 0f, 0f))
			{
				if (func_319(0))
				{
					TASK::TASK_LOOK_AT_COORD(Local_131.f_C, Local_184, iVar4 + 1000, 1, 2);
					iLocal_182 = 0;
				}
			}
			else if (func_319(0))
			{
				TASK::TASK_LOOK_AT_COORD(Local_131.f_C, CAM::GET_FINAL_RENDERED_CAM_COORD(), iVar4 + 1000, 1, 2);
				iLocal_182++;
			}
		}
	}
}

int func_319(bool bParam0)//Position - 0x26A64
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_90))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_90))
			{
				return 1;
			}
			else if (bParam0)
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_90);
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_320(int iParam0, var uParam1, int iParam2)//Position - 0x26AA0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	func_321(uParam1, "WEAP_GROUP", 0f, 0f, 0f);
	iVar0 = MISC::GET_HASH_KEY("v_gun");
	iVar1 = MISC::GET_HASH_KEY("v_gun2");
	iVar2 = MISC::GET_HASH_KEY(func_5(iParam0));
	if (iVar2 == iVar0)
	{
		switch (iParam2)
		{
			case 0:
				func_321(uParam1, "WEAP_EX", 19.73f, -1103.07f, 31.28f);
				break;
			
			case 1:
				func_321(uParam1, "WEAP_SMG", 19.56f, -1103.01f, 30.6f);
				break;
			
			case 2:
				func_321(uParam1, "WEAP_SG", 20.65f, -1103.41f, 30.88f);
				break;
			
			case 3:
				func_321(uParam1, "WEAP_AR", 21.71f, -1103.8f, 30.89f);
				break;
			
			case 4:
				func_321(uParam1, "WEAP_SR", 22.83f, -1104.21f, 30.68f);
				break;
			
			case 5:
				func_321(uParam1, "WEAP_LMG", 24.21f, -1104.71f, 30.85f);
				break;
			
			case 6:
				func_321(uParam1, "WEAP_S", 25.54f, -1105.19f, 30.87f);
				break;
			
			case 7:
				func_321(uParam1, "WEAP_K", 20.12f, -1105.39f, 29.52f);
				break;
			
			case 8:
				func_321(uParam1, "WEAP_HG", 22.1f, -1106.02f, 29.52f);
				break;
			
			case 9:
				func_321(uParam1, "WEAP_T", 23.1f, -1107.91f, 29.52f);
				break;
			
			case 10:
				func_321(uParam1, "WEAP_P", 23.24f, -1109.05f, 29.61f);
				break;
			
			case 11:
				func_321(uParam1, "WEAP_DLC1", 25.86f, -1106.09f, 30.79f);
				break;
			
			case 12:
				func_321(uParam1, "WEAP_DLC1", 25.27f, -1107.15f, 30.79f);
				break;
			
			case 13:
				func_321(uParam1, "WEAP_DLC1", 24.7f, -1108.16f, 30.79f);
				break;
			
			case 14:
				func_321(uParam1, "WEAP_DLC1", 24.14f, -1109.15f, 30.79f);
				break;
			
			case 15:
				func_321(uParam1, "WEAP_EX", 16.28f, -1109.51f, 30.32f);
				break;
		}
	}
	else if (iVar2 == iVar1)
	{
		switch (iParam2)
		{
			case 0:
				func_321(uParam1, "WEAP_EX", 1688.93f, 3759.28f, 36.21f);
				break;
			
			case 1:
				func_321(uParam1, "WEAP_SMG", 1688.81f, 3759.15f, 35.52f);
				break;
			
			case 2:
				func_321(uParam1, "WEAP_SG", 1689.59f, 3759.99f, 35.8f);
				break;
			
			case 3:
				func_321(uParam1, "WEAP_AR", 1690.33f, 3760.8f, 35.78f);
				break;
			
			case 4:
				func_321(uParam1, "WEAP_SR", 1691.17f, 3761.71f, 35.61f);
				break;
			
			case 5:
				func_321(uParam1, "WEAP_LMG", 1692.14f, 3762.77f, 35.81f);
				break;
			
			case 6:
				func_321(uParam1, "WEAP_S", 1693.12f, 3763.84f, 35.83f);
				break;
			
			case 7:
				func_321(uParam1, "WEAP_K", 1691.01f, 3758.37f, 34.43f);
				break;
			
			case 8:
				func_321(uParam1, "WEAP_HG", 1692.58f, 3760.34f, 34.43f);
				break;
			
			case 9:
				func_321(uParam1, "WEAP_T", 1694.65f, 3760.45f, 34.43f);
				break;
			
			case 10:
				func_321(uParam1, "WEAP_P", 1695.65f, 3759.79f, 34.43f);
				break;
			
			case 11:
				func_321(uParam1, "WEAP_DLC1", 1694.07f, 3763.93f, 35.77f);
				break;
			
			case 12:
				func_321(uParam1, "WEAP_DLC1", 1694.88f, 3763.19f, 35.77f);
				break;
			
			case 13:
				func_321(uParam1, "WEAP_DLC1", 1695.77f, 3762.38f, 35.77f);
				break;
			
			case 14:
				func_321(uParam1, "WEAP_DLC1", 1696.65f, 3761.56f, 35.77f);
				break;
			
			case 15:
				func_321(uParam1, "WEAP_EX", 1693.5f, 3753.65f, 35.21f);
				break;
			}
	}
	if (iVar2 == iVar0)
	{
		iVar3 = 28;
	}
	else if (iVar2 == iVar1)
	{
		iVar3 = 29;
	}
	func_91(iVar3, iParam0, uParam1);
}

void func_321(var uParam0, char* sParam1, struct<3> Param2)//Position - 0x26F55
{
	*uParam0 = { Param2 };
	StringCopy(&(uParam0->f_3), sParam1, 16);
}

void func_322()//Position - 0x26F6D
{
	float fVar0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	struct<3> Var4;
	float fVar5;
	struct<3> Var6;
	float fVar7;
	
	if (CAM::DOES_CAM_EXIST(Local_131.f_26[Local_131.f_67.f_4 /*12*/]))
	{
		Var1 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
		Var2 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
		fVar3 = CAM::GET_FINAL_RENDERED_CAM_FOV();
		Var4 = { Var1 + Local_131.f_26[Local_131.f_67.f_4 /*12*/].f_1 - Var1 * Vector(0.2f, 0.2f, 0.2f) };
		fVar5 = (fVar3 + ((Local_131.f_26[Local_131.f_67.f_4 /*12*/].f_7 - fVar3) * 0.2f));
		if (bLocal_223)
		{
			Var4 = { Var1 + Local_131.f_AA.f_2A - Var1 * Vector(0.2f, 0.2f, 0.2f) };
			fVar7 = (Local_131.f_AA.f_2D.f_2 - Var2.f_2);
			while (fVar7 < -180f)
			{
				fVar7 = (fVar7 + 360f);
			}
			while (fVar7 > 180f)
			{
				fVar7 = (fVar7 - 360f);
			}
			Var6.x = (Var2.x + ((Local_131.f_AA.f_2D - Var2.x) * 0.2f));
			Var6.f_1 = (Var2.f_1 + ((Local_131.f_AA.f_2D.f_1 - Var2.f_1) * 0.2f));
			Var6.f_2 = (Var2.f_2 + (fVar7 * 0.2f));
		}
		else
		{
			fVar7 = (Local_131.f_26[Local_131.f_67.f_4 /*12*/].f_4.f_2 - Var2.f_2);
			while (fVar7 < -180f)
			{
				fVar7 = (fVar7 + 360f);
			}
			while (fVar7 > 180f)
			{
				fVar7 = (fVar7 - 360f);
			}
			Var6.x = (Var2.x + ((Local_131.f_26[Local_131.f_67.f_4 /*12*/].f_4 - Var2.x) * 0.2f));
			Var6.f_1 = (Var2.f_1 + ((Local_131.f_26[Local_131.f_67.f_4 /*12*/].f_4.f_1 - Var2.f_1) * 0.2f));
			Var6.f_2 = (Var2.f_2 + (fVar7 * 0.2f));
		}
		if ((((PAD::_IS_USING_KEYBOARD(2) && Local_131.f_67.f_3 != 15) && iLocal_225 == 0) && iLocal_165 == 0) && Local_131.f_67.f_5 == 0)
		{
			if (iLocal_231 == 0)
			{
				if (Global_26CF0F > (1f - 0.05f))
				{
					iLocal_226 = 1;
					fVar7 = ((0.05f - (1f - Global_26CF0F)) * -30f);
					HUD::_SET_MOUSE_CURSOR_SPRITE(7);
				}
				else if (Global_26CF0F < 0.05f)
				{
					iLocal_226 = 1;
					fVar7 = ((0.05f - Global_26CF0F) * 30f);
					HUD::_SET_MOUSE_CURSOR_SPRITE(6);
				}
				else if (iLocal_226)
				{
					fVar7 = 0f;
				}
				if (Global_26CF10 > (1f - 0.03f))
				{
					iLocal_226 = 1;
					fVar0 = ((0.03f - (1f - Global_26CF10)) * -30f);
					HUD::_SET_MOUSE_CURSOR_SPRITE(9);
				}
				else if (Global_26CF10 < 0.03f)
				{
					iLocal_226 = 1;
					fVar0 = ((0.03f - Global_26CF10) * 30f);
					HUD::_SET_MOUSE_CURSOR_SPRITE(8);
				}
				else if (iLocal_226)
				{
					fVar0 = 0f;
				}
			}
			else if (((!Global_26CF0F > (1f - 0.05f) && !Global_26CF0F < 0.05f) && !Global_26CF10 > (1f - 0.03f)) && !Global_26CF10 < 0.03f)
			{
				iLocal_231 = 0;
			}
		}
		else
		{
			iLocal_226 = 0;
		}
		if (iLocal_226 && MISC::IS_PC_VERSION())
		{
			Var6.x = func_323((Var2.x + fVar0), -9.2f, 12.7f);
			Var6.f_1 = (Var2.f_1 + ((Local_131.f_26[Local_131.f_67.f_4 /*12*/].f_4.f_1 - Var2.f_1) * 0.2f));
			if (fLocal_228 < -80f)
			{
				Var6.f_2 = (Var2.f_2 + fVar7);
				if (Var6.f_2 < 0f && Var6.f_2 > fLocal_228)
				{
					Var6.f_2 = fLocal_228;
				}
				else if (Var6.f_2 > 0f && Var6.f_2 < fLocal_229)
				{
					Var6.f_2 = fLocal_229;
				}
			}
			else if (fLocal_228 > fLocal_229)
			{
				Var6.f_2 = func_323((Var2.f_2 + fVar7), fLocal_229, fLocal_228);
			}
			else
			{
				Var6.f_2 = func_323((Var2.f_2 + fVar7), fLocal_228, fLocal_229);
			}
		}
		else
		{
			Var6.x = (Var2.x + ((Local_131.f_26[Local_131.f_67.f_4 /*12*/].f_4 - Var2.x) * 0.2f));
			Var6.f_1 = (Var2.f_1 + ((Local_131.f_26[Local_131.f_67.f_4 /*12*/].f_4.f_1 - Var2.f_1) * 0.2f));
			Var6.f_2 = (Var2.f_2 + (fVar7 * 0.2f));
		}
		CAM::SET_CAM_COORD(Local_131.f_26[Local_131.f_67.f_4 /*12*/], Var4);
		CAM::SET_CAM_ROT(Local_131.f_26[Local_131.f_67.f_4 /*12*/], Var6, 2);
		CAM::SET_CAM_FOV(Local_131.f_26[Local_131.f_67.f_4 /*12*/], fVar5);
	}
}

float func_323(float fParam0, float fParam1, float fParam2)//Position - 0x273D9
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

void func_324()//Position - 0x27400
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<25> Var6;
	int iVar7;
	bool bVar8;
	struct<3> Var9;
	struct<3> Var10;
	float fVar11;
	struct<5> Var12;
	struct<3> Var13;
	struct<3> Var14;
	
	iVar0 = 1;
	iVar5 = -1;
	if (Local_131.f_67.f_3 != -1 && Local_131.f_67.f_1 != -1)
	{
		iVar5 = (Local_131.f_67.f_3 * 6 + Local_131.f_67.f_1);
		if (!MISC::IS_BIT_SET(Local_131.f_DA.f_61[(iVar5 / 32)], (iVar5 % 32)))
		{
			MISC::SET_BIT(&(Local_131.f_DA.f_61[(iVar5 / 32)]), (iVar5 % 32));
			iLocal_215[iLocal_216] = iVar5;
			iLocal_216++;
		}
	}
	iVar7 = iLocal_216;
	iLocal_216 = 0;
	fVar11 = 0.6f;
	iVar4 = 0;
	while (iVar4 < iVar7)
	{
		iVar3 = iLocal_215[iVar4];
		bVar8 = true;
		iVar1 = (iVar3 / 6);
		iVar2 = (iVar3 % 6);
		if (ENTITY::DOES_ENTITY_EXIST(Local_131.f_DA[iVar3]))
		{
			if (func_84(Local_131, &Global_26CE2D, &Var6, iVar1, iVar2, 0))
			{
				func_340(&(Local_131.f_DA[iVar3]), &(Local_131.f_DA.f_66[iVar3 /*3*/]), &bVar8, &Var6, iVar5 == iVar3);
				if (iVar5 == iVar3)
				{
					func_327(&(Local_131.f_DA[iVar3]), &Var6);
					if (func_164(&Var12, Var6, (Local_131.f_67.f_2 - 1), 0))
					{
						if ((Var12.f_4 == -1441477783 && !iLocal_217) && Local_131.f_67.f_2 < 21)
						{
							iLocal_217 = 1;
							Var10 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var6.f_1, Var6.f_4.f_2, Var6.f_7) };
							Var9 = { Local_131.f_26[Local_131.f_67.f_4 /*12*/].f_1 };
							Local_131.f_26[Local_131.f_67.f_4 /*12*/].f_1 = { Local_131.f_26[Local_131.f_67.f_4 /*12*/].f_1 + Var10 - Var9 * Vector(fVar11, fVar11, fVar11) };
						}
						else if (Var12.f_4 != -1441477783)
						{
							if (iLocal_217)
							{
								iLocal_217 = 0;
								Local_131.f_67.f_11 = 0;
							}
						}
					}
					else if (iLocal_217)
					{
						if (Var12.f_4 != -1441477783)
						{
							iLocal_217 = 0;
							Local_131.f_67.f_11 = 0;
						}
					}
				}
			}
		}
		else
		{
			bVar8 = false;
		}
		if (bVar8)
		{
			MISC::SET_BIT(&(Local_131.f_DA.f_61[(iVar3 / 32)]), (iVar3 % 32));
			iLocal_215[iLocal_216] = iVar3;
			iLocal_216++;
		}
		else
		{
			MISC::CLEAR_BIT(&(Local_131.f_DA.f_61[(iVar3 / 32)]), (iVar3 % 32));
		}
		iVar4++;
	}
	if (bLocal_193)
	{
		iVar1 = 0;
		while (iVar1 < 16)
		{
			iVar2 = 0;
			while (iVar2 < 6)
			{
				func_84(Local_131, &Global_26CE2D, &Var6, iVar1, iVar2, 0);
				if (func_685(Var6, Var6.f_18))
				{
					iLocal_186 = iVar1;
					iLocal_187 = iVar2;
					if (!func_699(0, 1, 1))
					{
						iVar0 = 0;
					}
				}
				iVar2++;
			}
			iVar1++;
		}
	}
	if (Local_131 == 28)
	{
		STREAMING::REQUEST_MODEL(joaat("v_lirg_gunlight"));
		iLocal_119 = 1;
		if (STREAMING::HAS_MODEL_LOADED(joaat("v_lirg_gunlight")))
		{
			if ((((Local_131.f_67.f_3 != 7 && Local_131.f_67.f_3 != 9) && Local_131.f_67.f_3 != 10) && Local_131.f_67.f_3 != 15) && func_84(Local_131, &Global_26CE2D, &Var6, Local_131.f_67.f_3, Local_131.f_67.f_1, 0))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_118))
				{
					Var13 = { Var6.f_1 + func_326(Local_131, Local_131.f_67.f_3) };
					Var14 = { func_325(Local_131, Local_131.f_67.f_3) };
					iLocal_118 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("v_lirg_gunlight"), Var6.f_1, 0, 1, 0);
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_118, Var13, 0, 0, 1);
					ENTITY::SET_ENTITY_ROTATION(iLocal_118, Var14, 2, 1);
					iLocal_120 = 0;
				}
				else if (iLocal_120)
				{
					Var13 = { Var6.f_1 + func_326(Local_131, Local_131.f_67.f_3) };
					Var14 = { func_325(Local_131, Local_131.f_67.f_3) };
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_118, Var13, 0, 0, 1);
					ENTITY::SET_ENTITY_ROTATION(iLocal_118, Var14, 2, 1);
					iLocal_120 = 0;
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iLocal_118))
			{
				OBJECT::DELETE_OBJECT(&iLocal_118);
			}
		}
	}
	if (iVar0 && bLocal_193)
	{
		iLocal_177 = 1;
		bLocal_193 = false;
	}
}

Vector3 func_325(int iParam0, int iParam1)//Position - 0x277D6
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	Var0 = { 0f, 0f, 0f };
	iVar1 = MISC::GET_HASH_KEY("v_gun");
	iVar2 = MISC::GET_HASH_KEY("v_gun2");
	iVar3 = MISC::GET_HASH_KEY(func_5(iParam0));
	if (iVar3 == iVar1)
	{
		switch (iParam1)
		{
			case 0:
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			case 6:
				Var0.x = 0f;
				Var0.f_1 = 0f;
				Var0.f_2 = 342.75f;
				break;
			
			case 8:
				Var0.x = 0f;
				Var0.f_1 = 1.71f;
				Var0.f_2 = -0.09f;
				break;
			
			case 11:
			case 12:
			case 13:
			case 14:
				Var0.x = 0f;
				Var0.f_1 = 0f;
				Var0.f_2 = 269f;
				break;
			}
	}
	if (iVar3 == iVar1)
	{
		iVar4 = 28;
	}
	else if (iVar3 == iVar2)
	{
		iVar4 = 29;
	}
	func_87(iVar4, iParam0, &Var0);
	return Var0;
}

Vector3 func_326(int iParam0, int iParam1)//Position - 0x278C0
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	Var0 = { 0f, 0f, 0f };
	iVar1 = MISC::GET_HASH_KEY("v_gun");
	iVar2 = MISC::GET_HASH_KEY("v_gun2");
	iVar3 = MISC::GET_HASH_KEY(func_5(iParam0));
	if (iVar3 == iVar1)
	{
		switch (iParam1)
		{
			case 0:
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			case 6:
				Var0.x = 0.225f;
				Var0.f_1 = 0.368f;
				Var0.f_2 = -0.408f;
				break;
			
			case 8:
				Var0.x = 0f;
				Var0.f_1 = 0f;
				Var0.f_2 = 0f;
				break;
			
			case 11:
			case 12:
			case 13:
			case 14:
				Var0.x = 0.945f;
				Var0.f_1 = -0.128f;
				Var0.f_2 = -0.478f;
				break;
			}
	}
	if (iVar3 == iVar1)
	{
		iVar4 = 28;
	}
	else if (iVar3 == iVar2)
	{
		iVar4 = 29;
	}
	func_91(iVar4, iParam0, &Var0);
	return Var0;
}

void func_327(var uParam0, int iParam1)//Position - 0x279B2
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<6> Var4;
	struct<6> Var5;
	
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		func_164(&Var5, *iParam1, (Local_131.f_67.f_2 - 1), 0);
		if (iParam1->f_18 == 0)
		{
			if (ENTITY::GET_ENTITY_MODEL(*uParam0) == WEAPON::GET_WEAPONTYPE_MODEL(*iParam1) || ENTITY::GET_ENTITY_MODEL(*uParam0) == func_339(*iParam1))
			{
				if (func_337(*iParam1, 0) != 0)
				{
					if (Local_131.f_67.f_2 > ((21 + func_337(*iParam1, 1)) - 1) || Local_131.f_67.f_2 < 21)
					{
						if (WEAPON::GET_WEAPON_OBJECT_TINT_INDEX(*uParam0) != 0)
						{
							WEAPON::SET_WEAPON_OBJECT_TINT_INDEX(*uParam0, 0);
						}
					}
					else if (ENTITY::GET_ENTITY_MODEL(*uParam0) == WEAPON::GET_WEAPONTYPE_MODEL(*iParam1))
					{
						iVar1 = 0;
						while (iVar1 < WEAPON::GET_WEAPON_TINT_COUNT(*iParam1))
						{
							if (func_305(&Local_234, *iParam1, iVar1, 0))
							{
								if (Local_234.f_A == 0)
								{
									if (func_307(*iParam1, (Local_131.f_67.f_2 - 21)) == iVar1 && WEAPON::GET_WEAPON_OBJECT_TINT_INDEX(*uParam0) != Local_234.f_9)
									{
										WEAPON::SET_WEAPON_OBJECT_TINT_INDEX(*uParam0, Local_234.f_9);
									}
								}
							}
							iVar1++;
						}
					}
				}
				while (func_164(&Var4, *iParam1, iVar0, 0))
				{
					if (Var4 != 0)
					{
						bVar2 = false;
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), *iParam1, 0))
						{
							if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), *iParam1, Var4))
							{
								if (Var4.f_4 == -1441477783)
								{
									if (Local_131.f_67.f_2 < 21)
									{
										bVar2 = true;
									}
									else
									{
										bVar2 = false;
									}
								}
								else
								{
									bVar2 = true;
								}
							}
						}
						else if (Var4.f_1)
						{
							bVar2 = true;
						}
						if (Local_131.f_67.f_5 == 1)
						{
							if ((Local_131.f_67.f_2 - 1) == iVar0)
							{
								bVar2 = true;
							}
							if ((Local_131.f_67.f_2 - 1) != iVar0)
							{
								if (Var4.f_4 == Var5.f_4 && Var4.f_5 != Var5.f_5)
								{
									bVar2 = false;
								}
							}
						}
						if (bVar2)
						{
							if (!WEAPON::HAS_WEAPON_GOT_WEAPON_COMPONENT(*uParam0, Var4))
							{
								if (Var4.f_4 == -1441477783 && ENTITY::GET_ENTITY_MODEL(*uParam0) == WEAPON::GET_WEAPONTYPE_MODEL(*iParam1))
								{
									if (Var4.f_4 == -1441477783)
									{
										if (func_336(*iParam1))
										{
											if (WEAPON::HAS_WEAPON_GOT_WEAPON_COMPONENT(*uParam0, func_335(*iParam1, 0)))
											{
												WEAPON::REMOVE_WEAPON_COMPONENT_FROM_WEAPON_OBJECT(*uParam0, func_335(*iParam1, 0));
											}
										}
										if (*iParam1 == joaat("weapon_marksmanrifle"))
										{
											WEAPON::REMOVE_WEAPON_COMPONENT_FROM_WEAPON_OBJECT(*uParam0, joaat("component_at_scope_large_fixed_zoom"));
										}
										if (*iParam1 == joaat("weapon_sniperrifle"))
										{
											if (WEAPON::HAS_WEAPON_GOT_WEAPON_COMPONENT(*uParam0, joaat("component_at_scope_large")))
											{
												WEAPON::REMOVE_WEAPON_COMPONENT_FROM_WEAPON_OBJECT(*uParam0, joaat("component_at_scope_large"));
											}
										}
									}
									iVar3 = WEAPON::GET_WEAPON_COMPONENT_TYPE_MODEL(Var4);
									func_328(uParam0, iParam1, ENTITY::GET_ENTITY_COORDS(*uParam0, 0), ENTITY::GET_ENTITY_ROTATION(*uParam0, 2), iVar3);
								}
								WEAPON::GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(*uParam0, Var4);
								if (Var4.f_4 == -1441477783)
								{
									if (func_336(*iParam1))
									{
										WEAPON::GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(*uParam0, func_335(*iParam1, 0));
									}
									if (*iParam1 == joaat("weapon_marksmanrifle"))
									{
										WEAPON::GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(*uParam0, joaat("component_at_scope_large_fixed_zoom"));
									}
									if (*iParam1 == joaat("weapon_sniperrifle"))
									{
										WEAPON::GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(*uParam0, joaat("component_at_scope_large"));
									}
								}
							}
						}
						else if (WEAPON::HAS_WEAPON_GOT_WEAPON_COMPONENT(*uParam0, Var4))
						{
							WEAPON::REMOVE_WEAPON_COMPONENT_FROM_WEAPON_OBJECT(*uParam0, Var4);
							if (Var4.f_4 == -1441477783 && ENTITY::GET_ENTITY_MODEL(*uParam0) == func_339(*iParam1))
							{
								func_328(uParam0, iParam1, ENTITY::GET_ENTITY_COORDS(*uParam0, 0), ENTITY::GET_ENTITY_ROTATION(*uParam0, 2), 0);
							}
						}
					}
					iVar0++;
				}
			}
		}
	}
}

void func_328(var uParam0, var uParam1, struct<3> Param2, struct<3> Param3, int iParam4)//Position - 0x27D00
{
	func_334(uParam0);
	if (iParam4 == func_339(*uParam1))
	{
		if (!func_333(uParam1->f_D) && !func_333(uParam1->f_10))
		{
			*uParam0 = WEAPON::CREATE_WEAPON_OBJECT(*uParam1, func_329(*uParam1), uParam1->f_D, 1, 1f, iParam4);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(*uParam0, uParam1->f_D, 0, 0, 1);
			ENTITY::SET_ENTITY_ROTATION(*uParam0, uParam1->f_10, 2, 0);
		}
		else
		{
			*uParam0 = WEAPON::CREATE_WEAPON_OBJECT(*uParam1, func_329(*uParam1), Param2, 1, 1f, iParam4);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(*uParam0, Param2, 0, 0, 1);
			ENTITY::SET_ENTITY_ROTATION(*uParam0, Param3, 2, 0);
		}
	}
	else
	{
		*uParam0 = WEAPON::CREATE_WEAPON_OBJECT(*uParam1, func_329(*uParam1), Param2, 1, 1f, iParam4);
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(*uParam0, Param2, 0, 0, 1);
		ENTITY::SET_ENTITY_ROTATION(*uParam0, Param3, 2, 0);
	}
}

int func_329(int iParam0)//Position - 0x27DE0
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = WEAPON::GET_MAX_AMMO_IN_CLIP(PLAYER::PLAYER_PED_ID(), iParam0, 1) * 4;
	if (func_332(iParam0))
	{
		iVar0 = func_330(iParam0);
	}
	return iVar0;
}

int func_330(int iParam0)//Position - 0x27E0D
{
	int iVar0;
	
	iVar0 = func_331(iParam0, 2);
	switch (iParam0)
	{
		case joaat("weapon_minigun"):
			iVar0 = 200;
			break;
		
		case joaat("weapon_grenadelauncher"):
			iVar0 = 10;
			break;
		
		case joaat("weapon_rpg"):
		case joaat("weapon_firework"):
			iVar0 = 5;
			break;
		
		case joaat("weapon_musket"):
		case joaat("weapon_grenade"):
		case joaat("weapon_stickybomb"):
			iVar0 = 8;
			break;
	}
	return iVar0;
}

int func_331(int iParam0, int iParam1)//Position - 0x27E6C
{
	if (iParam0 != 0)
	{
		return (WEAPON::GET_WEAPON_CLIP_SIZE(iParam0) * iParam1);
	}
	return 0;
}

int func_332(int iParam0)//Position - 0x27E87
{
	switch (iParam0)
	{
		case joaat("weapon_minigun"):
			return 1;
			break;
		
		case joaat("weapon_grenadelauncher"):
			return 1;
			break;
		
		case joaat("weapon_rpg"):
			return 1;
			break;
		
		case joaat("weapon_musket"):
			return 1;
			break;
		
		case joaat("weapon_firework"):
			return 1;
			break;
		
		case joaat("weapon_grenade"):
			return 1;
			break;
		
		case joaat("weapon_stickybomb"):
			return 1;
			break;
	}
	return 0;
}

int func_333(struct<3> Param0)//Position - 0x27EF2
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_334(var uParam0)//Position - 0x27F1C
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

int func_335(int iParam0, int iParam1)//Position - 0x27F47
{
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0:
					return joaat("component_pistol_clip_01");
				
				case 1:
					return joaat("component_pistol_clip_02");
				
				case 2:
					return joaat("component_at_pi_flsh");
				
				case 3:
					return joaat("component_at_pi_supp_02");
				
				case 4:
					return joaat("component_pistol_varmod_luxe");
				
				default:
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam1)
			{
				case 0:
					return joaat("component_appistol_clip_01");
				
				case 1:
					return joaat("component_appistol_clip_02");
				
				case 2:
					return joaat("component_at_pi_flsh");
				
				case 3:
					return joaat("component_at_pi_supp");
				
				case 4:
					return joaat("component_appistol_varmod_luxe");
				
				default:
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam1)
			{
				case 0:
					return joaat("component_microsmg_clip_01");
				
				case 1:
					return joaat("component_microsmg_clip_02");
				
				case 2:
					return joaat("component_at_pi_flsh");
				
				case 3:
					return joaat("component_at_scope_macro");
				
				case 4:
					return joaat("component_at_ar_supp_02");
				
				case 5:
					return joaat("component_microsmg_varmod_luxe");
				
				default:
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam1)
			{
				case 0:
					return joaat("component_smg_clip_01");
				
				case 1:
					return joaat("component_smg_clip_02");
				
				case 2:
					return joaat("component_at_ar_flsh");
				
				case 3:
					return joaat("component_at_scope_macro_02");
				
				case 4:
					return joaat("component_at_pi_supp");
				
				case 5:
					return joaat("component_smg_varmod_luxe");
				
				default:
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0:
					return joaat("component_assaultrifle_clip_01");
				
				case 1:
					return joaat("component_assaultrifle_clip_02");
				
				case 2:
					return joaat("component_at_ar_afgrip");
				
				case 3:
					return joaat("component_at_ar_flsh");
				
				case 4:
					return joaat("component_at_scope_macro");
				
				case 5:
					return joaat("component_at_ar_supp_02");
				
				case 6:
					return joaat("component_assaultrifle_varmod_luxe");
				
				default:
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0:
					return joaat("component_carbinerifle_clip_01");
				
				case 1:
					return joaat("component_carbinerifle_clip_02");
				
				case 2:
					return joaat("component_at_railcover_01");
				
				case 3:
					return joaat("component_at_ar_afgrip");
				
				case 4:
					return joaat("component_at_ar_flsh");
				
				case 5:
					return joaat("component_at_scope_medium");
				
				case 6:
					return joaat("component_at_ar_supp");
				
				case 7:
					return joaat("component_carbinerifle_varmod_luxe");
				
				default:
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam1)
			{
				case 0:
					return joaat("component_advancedrifle_clip_01");
				
				case 1:
					return joaat("component_advancedrifle_clip_02");
				
				case 2:
					return joaat("component_at_ar_flsh");
				
				case 3:
					return joaat("component_at_scope_small");
				
				case 4:
					return joaat("component_at_ar_supp");
				
				case 5:
					return joaat("component_advancedrifle_varmod_luxe");
				
				default:
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam1)
			{
				case 0:
					return joaat("component_sniperrifle_clip_01");
				
				case 1:
					return joaat("component_at_ar_supp_02");
				
				case 2:
					return joaat("component_at_scope_large");
				
				case 3:
					return joaat("component_at_scope_max");
				
				case 4:
					return joaat("component_sniperrifle_varmod_luxe");
				
				default:
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam1)
			{
				case 0:
					return joaat("component_pistol50_clip_01");
				
				case 1:
					return joaat("component_pistol50_clip_02");
				
				case 2:
					return joaat("component_at_pi_flsh");
				
				case 3:
					return joaat("component_at_ar_supp_02");
				
				case 4:
					return joaat("component_pistol50_varmod_luxe");
				
				default:
			}
			break;
		
		case joaat("weapon_heavypistol"):
			switch (iParam1)
			{
				case 0:
					return joaat("component_heavypistol_clip_01");
				
				case 1:
					return joaat("component_heavypistol_clip_02");
				
				case 2:
					return joaat("component_at_pi_flsh");
				
				case 3:
					return joaat("component_at_pi_supp");
				
				case 4:
					return joaat("component_heavypistol_varmod_luxe");
				
				default:
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			switch (iParam1)
			{
				case 0:
					return joaat("component_marksmanrifle_clip_01");
				
				case 1:
					return joaat("component_marksmanrifle_clip_02");
				
				case 2:
					return joaat("component_at_scope_large_fixed_zoom");
				
				case 3:
					return joaat("component_at_ar_flsh");
				
				case 4:
					return joaat("component_at_ar_supp");
				
				case 5:
					return joaat("component_at_ar_afgrip");
				
				case 6:
					return joaat("component_marksmanrifle_varmod_luxe");
				
				default:
			}
			break;
	}
	return 0;
}

int func_336(int iParam0)//Position - 0x283AE
{
	if ((((((((((iParam0 == joaat("weapon_assaultrifle") || iParam0 == joaat("weapon_advancedrifle")) || iParam0 == joaat("weapon_carbinerifle")) || iParam0 == joaat("weapon_appistol")) || iParam0 == joaat("weapon_pistol")) || iParam0 == joaat("weapon_pistol50")) || iParam0 == joaat("weapon_heavypistol")) || iParam0 == joaat("weapon_smg")) || iParam0 == joaat("weapon_microsmg")) || iParam0 == joaat("weapon_sniperrifle")) || iParam0 == joaat("weapon_marksmanrifle"))
	{
		return 1;
	}
	return 0;
}

int func_337(int iParam0, bool bParam1)//Position - 0x28452
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 == joaat("gadget_parachute"))
	{
		iVar0 += 52;
		iVar0 += 14;
		iVar0 += 14;
	}
	else if (iParam0 == -61829581)
	{
		iVar0 = 12;
	}
	else if (WEAPON::GET_WEAPON_TINT_COUNT(iParam0) > 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0 = WEAPON::GET_WEAPON_TINT_COUNT(iParam0);
		}
		else if (func_240() || func_239())
		{
			iVar0 = WEAPON::GET_WEAPON_TINT_COUNT(iParam0);
		}
		else
		{
			iVar0 = 3;
		}
	}
	if (bParam1)
	{
		if (iParam0 == joaat("gadget_parachute"))
		{
			iVar1 = func_338();
		}
	}
	return (iVar0 + iVar1);
}

int func_338()//Position - 0x284EF
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_61() && (Global_40001.f_17E2 || func_265(3602, -1, -1)))
		{
			return 8;
		}
		return 7;
	}
	return 6;
}

int func_339(int iParam0)//Position - 0x2852A
{
	switch (iParam0)
	{
		case joaat("weapon_assaultrifle"):
			return WEAPON::GET_WEAPON_COMPONENT_TYPE_MODEL(joaat("component_assaultrifle_varmod_luxe"));
		
		case joaat("weapon_advancedrifle"):
			return WEAPON::GET_WEAPON_COMPONENT_TYPE_MODEL(joaat("component_advancedrifle_varmod_luxe"));
		
		case joaat("weapon_carbinerifle"):
			return WEAPON::GET_WEAPON_COMPONENT_TYPE_MODEL(joaat("component_carbinerifle_varmod_luxe"));
		
		case joaat("weapon_appistol"):
			return WEAPON::GET_WEAPON_COMPONENT_TYPE_MODEL(joaat("component_appistol_varmod_luxe"));
		
		case joaat("weapon_pistol"):
			return WEAPON::GET_WEAPON_COMPONENT_TYPE_MODEL(joaat("component_pistol_varmod_luxe"));
		
		case joaat("weapon_pistol50"):
			return WEAPON::GET_WEAPON_COMPONENT_TYPE_MODEL(joaat("component_pistol50_varmod_luxe"));
		
		case joaat("weapon_heavypistol"):
			return WEAPON::GET_WEAPON_COMPONENT_TYPE_MODEL(joaat("component_heavypistol_varmod_luxe"));
		
		case joaat("weapon_smg"):
			return WEAPON::GET_WEAPON_COMPONENT_TYPE_MODEL(joaat("component_smg_varmod_luxe"));
		
		case joaat("weapon_microsmg"):
			return WEAPON::GET_WEAPON_COMPONENT_TYPE_MODEL(joaat("component_microsmg_varmod_luxe"));
		
		case joaat("weapon_sawnoffshotgun"):
			return WEAPON::GET_WEAPON_COMPONENT_TYPE_MODEL(joaat("component_sawnoffshotgun_varmod_luxe"));
		
		case joaat("weapon_sniperrifle"):
			return WEAPON::GET_WEAPON_COMPONENT_TYPE_MODEL(joaat("component_sniperrifle_varmod_luxe"));
		
		case joaat("weapon_marksmanrifle"):
			return WEAPON::GET_WEAPON_COMPONENT_TYPE_MODEL(joaat("component_marksmanrifle_varmod_luxe"));
		
		default:
	}
	return 0;
}

void func_340(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x28612
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	struct<3> Var9;
	struct<3> Var10;
	struct<3> Var11;
	struct<3> Var12;
	struct<3> Var13;
	
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(*uParam0, 1) };
		if (bParam4)
		{
			Var1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(iParam3->f_1, iParam3->f_4.f_2, iParam3->f_7) };
			Var2 = { Var0 };
			Var2 = { Var2 + Var1 - Var0 * Vector(0.25f, 0.25f, 0.25f) };
			if (((Var2.x > (Var1.x - 0.01f) && Var2.x < (Var1.x + 0.01f)) && Var2.f_1 > (Var1.f_1 - 0.01f)) && Var2.f_1 < (Var1.f_1 + 0.01f))
			{
				if (iLocal_168)
				{
					SYSTEM::SETTIMERB(1);
					iLocal_168 = 0;
				}
				Var2.f_2 = (Var2.f_2 + (SYSTEM::SIN(SYSTEM::TO_FLOAT((SYSTEM::TIMERB() / 8))) * 0.003f));
			}
			ENTITY::SET_ENTITY_COORDS(*uParam0, Var2, 1, 0, 0, 1);
			if (bLocal_178)
			{
				if (!PAD::_IS_USING_KEYBOARD(2))
				{
					func_342(&uVar4, &uVar5, &iVar6, &iVar7, 0);
					if (iLocal_166)
					{
						if (((iVar7 > -64 && iVar7 < 64) && iVar6 > -64) && iVar6 < 64)
						{
							iLocal_166 = 0;
						}
						else
						{
							iVar7 = 0;
							iVar6 = 0;
						}
					}
					if (PAD::IS_LOOK_INVERTED())
					{
						iVar7 = (iVar7 * -1);
					}
					if (((iVar6 < -32 || iVar6 > 32) || iVar7 < -32) || iVar7 > 32)
					{
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							uLocal_164 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 300);
						}
						else
						{
							iLocal_163 = MISC::GET_GAME_TIMER() + 300;
						}
						iLocal_165 = 1;
					}
					else if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), uLocal_164)) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - iLocal_163) > 0))
					{
						iLocal_165 = 0;
					}
					if ((iVar6 < 32 && iVar6 > -32) && (iVar7 < 32 && iVar7 > -32))
					{
						if (iVar6 < 32 && iVar6 > -32)
						{
							iVar6 = 0;
						}
						else if (iVar6 < 0)
						{
							iVar6 = (iVar6 - 32);
						}
						else
						{
							iVar6 += 32;
						}
						if (iVar7 < 32 && iVar7 > -32)
						{
							iVar7 = 0;
						}
						else if (iVar7 < 0)
						{
							iVar7 = (iVar7 - 32);
						}
						else
						{
							iVar7 += 32;
						}
					}
					if (*iParam3 == joaat("gadget_parachute"))
					{
						iVar7 = (iVar7 * -1);
					}
					Var3 = { iParam3->f_4 + iParam3->f_A };
					Var3.x = (Var3.x + (IntToFloat(iVar7) * 0.5f));
					Var3.f_2 = (Var3.f_2 + (IntToFloat(iVar6) * 0.35f));
				}
				else
				{
					iVar8 = 0;
					if (Local_131.f_67.f_5 == 1)
					{
						if (Global_26CF15 == -1)
						{
							if (PAD::IS_CONTROL_PRESSED(2, 237))
							{
								iVar8 = 1;
								HUD::_SET_MOUSE_CURSOR_SPRITE(4);
							}
							else
							{
								HUD::_SET_MOUSE_CURSOR_SPRITE(3);
								iVar8 = 0;
							}
						}
						else if (Global_26CF15 > -1)
						{
							HUD::_SET_MOUSE_CURSOR_SPRITE(1);
							iVar8 = 0;
						}
						else if (Global_26CF15 == -2 || Global_26CF15 == -3)
						{
							HUD::_SET_MOUSE_CURSOR_SPRITE(1);
							iVar8 = 0;
						}
						else
						{
							HUD::_SET_MOUSE_CURSOR_SPRITE(2);
							iVar8 = 0;
						}
					}
					else if (iLocal_225 == 1)
					{
						if (Global_26CF15 == -1)
						{
							HUD::_SET_MOUSE_CURSOR_SPRITE(4);
							iVar8 = 1;
						}
					}
					if (iVar8 == 1)
					{
						Var3 = { iParam3->f_4 + iParam3->f_A };
						Local_230.x = (Local_230.x + (Global_26CF14 * 400f));
						if (Local_230.x < -64f)
						{
							Local_230.x = -64f;
						}
						else if (Local_230.x > 64f)
						{
							Local_230.x = 64f;
						}
						if (*iParam3 == joaat("gadget_parachute"))
						{
							Local_230.f_2 = (Local_230.f_2 + func_323((-Global_26CF13 * 400f), -32f, 32f));
						}
						else
						{
							Local_230.f_2 = (Local_230.f_2 + func_323((Global_26CF13 * 400f), -32f, 32f));
						}
						if (Local_230.f_2 < -32f)
						{
							Local_230.f_2 = -32f;
						}
						else if (Local_230.f_2 > 32f)
						{
							Local_230.f_2 = 32f;
						}
						Var3 = { Var3 + Local_230 };
					}
					else
					{
						Var3 = { iParam3->f_4 + iParam3->f_A };
					}
				}
				Var9 = { *uParam1 };
				Var9 = { Var9 + Var3 - *uParam1 * Vector(0.25f, 0.25f, 0.25f) };
				ENTITY::SET_ENTITY_ROTATION(*uParam0, Var9, 2, 1);
				*uParam1 = { Var9 };
			}
		}
		if (!bParam4)
		{
			Var10 = { iParam3->f_1 };
			Var11 = { Var0 };
			Var11 = { Var11 + Var10 - Var0 * Vector(0.35f, 0.35f, 0.35f) };
			ENTITY::SET_ENTITY_COORDS(*uParam0, Var11, 1, 0, 0, 1);
			Var12 = { iParam3->f_4 };
			Var13 = { *uParam1 };
			Var13 = { Var13 + Var12 - *uParam1 * Vector(0.3f, 0.3f, 0.3f) };
			ENTITY::SET_ENTITY_ROTATION(*uParam0, Var13, 2, 1);
			*uParam1 = { Var13 };
			if (func_341(Var0, Var10, 0.01f))
			{
				if (func_341(*uParam1, Var12, 0.1f))
				{
					*iParam2 = 0;
				}
			}
		}
	}
}

int func_341(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0x28B17
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

void func_342(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x28B63
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

void func_343()//Position - 0x28C38
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
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
	int iVar20;
	int iVar21;
	bool bVar22;
	char cVar23[16];
	struct<4> Var24;
	char[] cVar25[8];
	struct<26> Var26;
	struct<26> Var27;
	var uVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	int iVar57;
	int iVar58;
	int iVar59;
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	int iVar64;
	int iVar65;
	int iVar66;
	int iVar67;
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	int iVar75;
	float fVar76;
	int iVar77;
	float fVar78;
	var uVar79;
	float fVar80;
	struct<3> Var81;
	struct<3> Var82;
	float fVar83;
	
	func_629(&(Local_131.f_261), 300);
	func_342(&iVar0, &iVar1, &uVar2, &uVar3, 0);
	if (Local_131.f_67.f_A != 0)
	{
		if (SYSTEM::TIMERA() > 300 || (((iVar1 > -64 && iVar1 < 64) && iVar0 > -64) && iVar0 < 64))
		{
			Local_131.f_67.f_A = 0;
		}
		else
		{
			iVar0 = 0;
			iVar1 = 0;
		}
	}
	bVar4 = (PAD::IS_CONTROL_PRESSED(2, 207) || Local_131.f_67.f_5 == 1);
	bVar5 = PAD::IS_CONTROL_JUST_PRESSED(2, 201);
	bVar6 = (PAD::IS_CONTROL_JUST_PRESSED(2, 202) || func_628());
	bVar7 = PAD::IS_CONTROL_JUST_PRESSED(2, 203);
	bVar8 = PAD::IS_CONTROL_JUST_PRESSED(2, 204);
	bVar9 = ((iVar0 < -64 || PAD::IS_CONTROL_JUST_PRESSED(2, 189)) || (PAD::IS_CONTROL_PRESSED(2, 189) && Local_131.f_261.f_A));
	bVar10 = ((iVar0 > 64 || PAD::IS_CONTROL_JUST_PRESSED(2, 190)) || (PAD::IS_CONTROL_PRESSED(2, 190) && Local_131.f_261.f_B));
	bVar11 = ((iVar1 < -64 || PAD::IS_CONTROL_JUST_PRESSED(2, 188)) || (PAD::IS_CONTROL_PRESSED(2, 188) && Local_131.f_261.f_8));
	bVar12 = ((iVar1 > 64 || PAD::IS_CONTROL_JUST_PRESSED(2, 187)) || (PAD::IS_CONTROL_PRESSED(2, 187) && Local_131.f_261.f_9));
	bVar13 = (((iVar0 < -64 || iVar0 > 64) || iVar1 < -64) || iVar1 > 64);
	if (PAD::_IS_USING_KEYBOARD_2(2))
	{
		if (func_627(Local_131.f_261.f_9, 0, 0))
		{
			bVar12 = true;
		}
		if (func_626(Local_131.f_261.f_8, 0, 0))
		{
			bVar11 = true;
		}
	}
	if (!bVar13)
	{
		if (bVar9)
		{
			iVar0 = -1;
			Local_131.f_261.f_A = 0;
			Local_131.f_261.f_5 = 0;
			Local_131.f_261.f_15 = MISC::GET_GAME_TIMER();
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				Local_131.f_261.f_19 = NETWORK::GET_NETWORK_TIME();
			}
		}
		else if (bVar10)
		{
			iVar0 = 1;
			Local_131.f_261.f_B = 0;
			Local_131.f_261.f_5 = 0;
			Local_131.f_261.f_15 = MISC::GET_GAME_TIMER();
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				Local_131.f_261.f_19 = NETWORK::GET_NETWORK_TIME();
			}
		}
		else
		{
			iVar0 = 0;
		}
		if (bVar11)
		{
			iVar1 = -1;
			Local_131.f_261.f_8 = 0;
			Local_131.f_261.f_4 = 0;
			Local_131.f_261.f_14 = MISC::GET_GAME_TIMER();
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				Local_131.f_261.f_18 = NETWORK::GET_NETWORK_TIME();
			}
		}
		else if (bVar12)
		{
			iVar1 = 1;
			Local_131.f_261.f_9 = 0;
			Local_131.f_261.f_4 = 0;
			Local_131.f_261.f_14 = MISC::GET_GAME_TIMER();
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				Local_131.f_261.f_18 = NETWORK::GET_NETWORK_TIME();
			}
		}
		else
		{
			iVar1 = 0;
		}
	}
	if (!bVar4)
	{
		bLocal_167 = false;
	}
	else if (bLocal_167)
	{
		bVar4 = false;
	}
	if ((((((((((((bVar4 || iLocal_165) || Local_131.f_67.f_11) || bVar5) || bVar6) || bVar8) || bVar9) || bVar10) || bVar11) || bVar12) || bVar7) || PAD::_IS_USING_KEYBOARD_2(2)) || Local_131.f_67.f_19)
	{
	}
	else
	{
		return;
	}
	if ((MISC::GET_GAME_TIMER() - iLocal_169) < 500)
	{
		return;
	}
	bVar14 = false;
	bVar15 = false;
	bVar16 = false;
	bVar17 = false;
	bVar18 = false;
	bVar19 = false;
	iVar20 = 0;
	iVar21 = 0;
	bVar22 = true;
	func_84(Local_131, &Global_26CE2D, &Var26, Local_131.f_67.f_3, Local_131.f_67.f_1, 0);
	func_320(Local_131, &uVar28, Local_131.f_67.f_3);
	iVar29 = 0;
	iVar30 = -1;
	iVar31 = -1;
	iVar35 = 0;
	iVar36 = 0;
	if (Local_131.f_67.f_19)
	{
		bVar5 = false;
		bVar6 = false;
		bVar8 = false;
		bVar9 = false;
		bVar10 = false;
		bVar11 = false;
		bVar12 = false;
		bVar7 = false;
	}
	func_625();
	if (bLocal_178 || Local_131.f_67.f_19)
	{
		if (PAD::_IS_USING_KEYBOARD(2))
		{
			HUD::_SET_MOUSE_CURSOR_ACTIVE_THIS_FRAME();
		}
		switch (Local_131.f_67.f_5)
		{
			case 0:
				if (MISC::IS_PC_VERSION() && !Local_131.f_67.f_19)
				{
					func_622(1, 0, 0, 1);
					if (Global_26CF15 > -1)
					{
						if (iLocal_225 == 0)
						{
							HUD::_SET_MOUSE_CURSOR_SPRITE(1);
						}
					}
					else if (Global_26CF15 == -4)
					{
						HUD::_SET_MOUSE_CURSOR_SPRITE(2);
					}
					if (func_621())
					{
						iVar36 = 1;
					}
					else if (Global_26CF15 == -1)
					{
						if (func_615(&Var27, &iVar31, &iVar30, &(Local_131.f_67)))
						{
							if (iVar31 == Local_131.f_67.f_3 && iVar30 == Local_131.f_67.f_1)
							{
								if (!iLocal_225)
								{
									HUD::_SET_MOUSE_CURSOR_SPRITE(3);
									if (iLocal_227 == 1)
									{
										if (!PAD::IS_CONTROL_PRESSED(2, 237))
										{
											iLocal_227 = 0;
										}
									}
									else if (PAD::IS_CONTROL_PRESSED(2, 237))
									{
										iLocal_225 = 1;
										iLocal_226 = 0;
									}
								}
							}
							else
							{
								HUD::_SET_MOUSE_CURSOR_SPRITE(5);
								if (PAD::IS_CONTROL_JUST_PRESSED(2, 237))
								{
									iLocal_226 = 0;
									iLocal_225 = 0;
									iLocal_227 = 1;
									iVar35 = 1;
									Var26 = { Var27 };
								}
							}
						}
						else if (!iLocal_225)
						{
							HUD::_SET_MOUSE_CURSOR_SPRITE(1);
						}
					}
					if (iLocal_225 == 1)
					{
						bVar4 = true;
						if (!PAD::IS_CONTROL_PRESSED(2, 237))
						{
							iLocal_225 = 0;
							bVar4 = false;
						}
					}
				}
				if (bVar8)
				{
					iLocal_196 = 0;
					iLocal_197 = 1;
					StringCopy(&cLocal_198, "", 64);
				}
				else if (iVar35 == 1)
				{
					Local_131.f_67.f_3 = iVar31;
					Local_131.f_67.f_1 = iVar30;
					bLocal_214 = false;
					iLocal_168 = 1;
					iLocal_183 = 1;
					bVar14 = true;
					iLocal_177 = 1;
					iLocal_108 = 1;
					Local_131.f_67.f_10 = 0;
					func_635(&Local_131, &(Local_131.f_67), &Var26, 0);
					iLocal_120 = 1;
					iVar35 = 0;
				}
				else if ((bVar5 || iVar36) || Local_131.f_67.f_19)
				{
					iVar36 = 0;
					bVar19 = false;
					Local_131.f_67.f_10 = 0;
					if (func_84(Local_131, &Global_26CE2D, &Var26, Local_131.f_67.f_3, Local_131.f_67.f_1, 1))
					{
						if (Var26.f_18 == 7)
						{
							if (Var26.f_17 == -1)
							{
							}
							else
							{
								iLocal_196 = 0;
								iLocal_197 = 1;
								StringCopy(&cLocal_198, NETWORK::GET_COMMERCE_ITEM_ID(Global_26CE2D.f_1A[Var26.f_17]), 64);
							}
						}
						else if (MISC::IS_BIT_SET(Local_131.f_285, 7))
						{
							if ((!MISC::IS_BIT_SET(Local_131.f_285, 0) && !MISC::IS_BIT_SET(Local_131.f_285, 1)) && !(Var26.f_18 == 3 && PED::GET_PED_ARMOUR(PLAYER::PLAYER_PED_ID()) > SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(PLAYER::GET_PLAYER_MAX_ARMOUR(PLAYER::PLAYER_ID())) / 100f) * IntToFloat(Var26.f_16)))))
							{
								if (func_614(Var26, Var26.f_13))
								{
									StringCopy(&cVar23, "GSM_EQUIP", 16);
								}
								else if (Var26.f_18 == 3)
								{
									if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
									{
										StringCopy(&cVar23, "GSM_PURCHASE_A", 16);
										bVar19 = true;
									}
									else
									{
										StringCopy(&cVar23, "GSM_PURCHASE", 16);
									}
								}
								else
								{
									StringCopy(&cVar23, "", 16);
								}
								if (func_557(0, Var26.f_13, Var26, Var26.f_18, 0, Local_131, 0, 0, joaat("AMMO_PISTOL"), 1))
								{
									Global_26C413 = 1;
									Local_131.f_67.f_17 = 1;
									iVar21 = Var26;
									if (Var26.f_18 == 1)
									{
										WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), Var26, 1, 0, 0);
										func_284(&(Local_131.f_67), &cVar23, 3000);
										iLocal_177 = 1;
										if (Global_10A95)
										{
											if (func_556(Var26, &iVar37))
											{
												func_553(iVar37, 1, -1);
												func_523(func_552(Var26));
											}
										}
									}
									else if (Var26.f_18 == 5)
									{
										WEAPON::GET_MAX_AMMO(PLAYER::PLAYER_PED_ID(), Var26, &iVar38);
										WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), Var26, iVar38, 0, 0);
										func_284(&(Local_131.f_67), &cVar23, 3000);
										iLocal_177 = 1;
										if (Global_10A95)
										{
											if (func_556(Var26, &iVar39))
											{
												func_553(iVar39, 1, -1);
												func_523(func_552(Var26));
											}
										}
									}
									else if (Var26.f_18 == 3)
									{
										if (PED::GET_PED_ARMOUR(PLAYER::PLAYER_PED_ID()) < SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(PLAYER::GET_PLAYER_MAX_ARMOUR(PLAYER::PLAYER_ID())) / 100f) * IntToFloat(Var26.f_16))))
										{
											PED::SET_PED_ARMOUR(PLAYER::PLAYER_PED_ID(), SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(PLAYER::GET_PLAYER_MAX_ARMOUR(PLAYER::PLAYER_ID())) / 100f) * IntToFloat(Var26.f_16))));
										}
										if (bVar19)
										{
											func_284(&(Local_131.f_67), &cVar23, 30000);
										}
										else
										{
											func_284(&(Local_131.f_67), &cVar23, 3000);
										}
										iLocal_177 = 1;
										if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
										{
											iVar40 = func_18(1740, -1, 0);
											if (iVar40 == 1)
											{
												iVar41 = func_520(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), func_521(PLAYER::PLAYER_PED_ID(), 11));
												if (iVar41 != 0)
												{
													iVar41 = (iVar41 + func_519(Var26.f_16));
												}
												Global_26CB8C = iVar41;
											}
										}
									}
									else if (Var26.f_18 == 2)
									{
										WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), Var26, 1, 0, 0);
										func_284(&(Local_131.f_67), &cVar23, 3000);
										if (Global_10A95)
										{
											if (func_556(Var26, &iVar42))
											{
												func_553(iVar42, 1, -1);
												func_523(func_552(Var26));
											}
										}
										iLocal_177 = 1;
									}
									else if (Var26.f_18 == 4)
									{
										WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), Var26, 1, 0, 0);
										if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
										{
											func_517(func_147(), 13, 1);
										}
										else
										{
											func_515(13, 1, -1);
										}
										iVar32 = 5;
										iVar34 = 0;
										iVar33 = 0;
										if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
										{
											iVar32 = func_18(573, -1, 0);
											iVar34 = func_18(2024, -1, 0);
											iVar33 = func_18(1433, -1, 0);
											if (iVar32 == 0 && !func_294(13))
											{
												iVar32 = 5;
											}
										}
										else
										{
											iVar43 = func_147();
											if (iVar43 == 0)
											{
												STATS::STAT_GET_INT(joaat("sp0_parachute_current_tint"), &iVar32, -1);
											}
											else if (iVar43 == 1)
											{
												STATS::STAT_GET_INT(joaat("sp1_parachute_current_tint"), &iVar32, -1);
											}
											else if (iVar43 == 2)
											{
												STATS::STAT_GET_INT(joaat("sp2_parachute_current_tint"), &iVar32, -1);
											}
										}
										if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
										{
											func_512(iVar34, 1);
										}
										else
										{
											PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), iVar34);
											PLAYER::CLEAR_PLAYER_PARACHUTE_MODEL_OVERRIDE(PLAYER::PLAYER_ID());
											PLAYER::CLEAR_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID());
										}
										PLAYER::SET_PLAYER_PARACHUTE_TINT_INDEX(PLAYER::PLAYER_ID(), iVar32);
										if (func_315())
										{
											PLAYER::SET_PLAYER_PARACHUTE_MODEL_OVERRIDE(PLAYER::PLAYER_ID(), joaat("lts_p_para_pilot2_sp_s"));
										}
										else if (func_316())
										{
											PLAYER::SET_PLAYER_PARACHUTE_MODEL_OVERRIDE(PLAYER::PLAYER_ID(), joaat("pil_p_para_pilot_sp_s"));
										}
										if (iVar33 == 0)
										{
											PLAYER::SET_PLAYER_PARACHUTE_SMOKE_TRAIL_COLOR(PLAYER::PLAYER_ID(), 255, 255, 255);
											PLAYER::SET_PLAYER_CAN_LEAVE_PARACHUTE_SMOKE_TRAIL(PLAYER::PLAYER_ID(), false);
										}
										if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
										{
											if (((((((((((((func_248(288, -1) || func_248(289, -1)) || func_248(290, -1)) || func_248(291, -1)) || func_248(292, -1)) || func_248(293, -1)) || func_248(294, -1)) || func_248(295, -1)) || func_248(296, -1)) || func_248(297, -1)) || func_248(298, -1)) || func_248(299, -1)) || func_248(300, -1)) || func_248(301, -1))
											{
												func_507(-1, 0);
											}
										}
										else
										{
											iVar44 = func_147();
											if (((((((((((((func_242(iVar44, 288) || func_242(iVar44, 289)) || func_242(iVar44, 290)) || func_242(iVar44, 291)) || func_242(iVar44, 292)) || func_242(iVar44, 293)) || func_242(iVar44, 294)) || func_242(iVar44, 295)) || func_242(iVar44, 296)) || func_242(iVar44, 297)) || func_242(iVar44, 298)) || func_242(iVar44, 299)) || func_242(iVar44, 300)) || func_242(iVar44, 301))
											{
												func_507(iVar32, 0);
											}
										}
										func_286(func_147(), 255);
										func_286(func_147(), 13);
										func_284(&(Local_131.f_67), &cVar23, 3000);
										iLocal_177 = 1;
									}
									else if (Var26.f_18 == 0)
									{
										if (Var26.f_19 == 0)
										{
											WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), Var26, 1, 0, 0);
										}
										else
										{
											WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), Var26, Var26.f_16 * 4, 0, 0);
											WEAPON::SET_PED_WEAPON_TINT_INDEX(PLAYER::PLAYER_PED_ID(), Var26, 0);
											while (func_164(&Local_232, Var26, iVar45, 0))
											{
												if (Local_232.f_1)
												{
													if (!WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), Var26, Local_232))
													{
														WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(PLAYER::PLAYER_PED_ID(), Var26, Local_232);
													}
												}
												else if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), Var26, Local_232))
												{
													WEAPON::REMOVE_WEAPON_COMPONENT_FROM_PED(PLAYER::PLAYER_PED_ID(), Var26, Local_232);
												}
												iVar45++;
											}
										}
										func_284(&(Local_131.f_67), &cVar23, 3000);
										if (Global_10A95)
										{
											if (func_556(Var26, &iVar46))
											{
												func_553(iVar46, Var26.f_16 * 4, -1);
												func_523(func_552(Var26));
											}
										}
										if (func_506(PLAYER::PLAYER_PED_ID(), Var26))
										{
											func_494(29, 1);
										}
										iLocal_177 = 1;
									}
									if ((MISC::IS_BIT_SET(Local_131.f_285, 4) || MISC::IS_BIT_SET(Local_131.f_285, 3)) || MISC::IS_BIT_SET(Local_131.f_285, 5))
									{
										Local_131.f_67.f_5 = 1;
										bLocal_221 = Var26.f_18 == 4;
										Local_131.f_67.f_2 = -1;
									}
								}
								else if (!Local_131.f_67.f_19)
								{
									if (Local_131.f_67.f_15)
									{
										bVar15 = true;
										func_284(&(Local_131.f_67), "GSM_AFFORD", 3000);
										func_493(MISC::GET_HASH_KEY(&(Global_15F9E.f_4EB)), Global_15F9E.f_4EF, MISC::GET_HASH_KEY(func_236(Local_131)));
										func_491(0, 10, 3);
									}
									else
									{
										bVar15 = true;
										func_284(&(Local_131.f_67), "GSM_LOCK", 3000);
									}
								}
							}
							else if (MISC::IS_BIT_SET(Local_131.f_285, 13))
							{
								if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Var26.f_18 == 3)
								{
									StringCopy(&cVar23, "GSM_PURCH_INV_A", 16);
									bVar19 = true;
								}
								else
								{
									StringCopy(&cVar23, "GSM_PURCH_INV", 16);
								}
								if (func_557(0, Var26.f_13, Var26, Var26.f_18, 0, Local_131, 0, 0, joaat("AMMO_PISTOL"), 1))
								{
									Global_26C413 = 1;
									Local_131.f_67.f_17 = 1;
									iVar21 = Var26;
									if (Var26.f_18 == 3)
									{
										if (Local_131.f_67.f_1 == 0)
										{
											iVar47 = func_18(1865, -1, 0);
											iVar47++;
											func_177(1865, iVar47, -1, 1);
										}
										else if (Local_131.f_67.f_1 == 1)
										{
											iVar47 = func_18(1866, -1, 0);
											iVar47++;
											func_177(1866, iVar47, -1, 1);
										}
										else if (Local_131.f_67.f_1 == 2)
										{
											iVar47 = func_18(1867, -1, 0);
											iVar47++;
											func_177(1867, iVar47, -1, 1);
										}
										else if (Local_131.f_67.f_1 == 3)
										{
											iVar47 = func_18(1868, -1, 0);
											iVar47++;
											func_177(1868, iVar47, -1, 1);
										}
										else if (Local_131.f_67.f_1 == 4)
										{
											iVar47 = func_18(1869, -1, 0);
											iVar47++;
											func_177(1869, iVar47, -1, 1);
										}
										if (bVar19)
										{
											func_284(&(Local_131.f_67), &cVar23, 30000);
										}
										else
										{
											func_284(&(Local_131.f_67), &cVar23, 3000);
										}
										iLocal_177 = 1;
										if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
										{
										}
									}
								}
								else if (!Local_131.f_67.f_19)
								{
									if (Local_131.f_67.f_15)
									{
										bVar15 = true;
										func_284(&(Local_131.f_67), "GSM_AFFORD", 3000);
										func_493(MISC::GET_HASH_KEY(&(Global_15F9E.f_4EB)), Global_15F9E.f_4EF, MISC::GET_HASH_KEY(func_236(Local_131)));
										func_491(0, 10, 3);
									}
									else
									{
										bVar15 = true;
										func_284(&(Local_131.f_67), "GSM_LOCK", 3000);
									}
								}
							}
							else if ((MISC::IS_BIT_SET(Local_131.f_285, 4) || MISC::IS_BIT_SET(Local_131.f_285, 3)) || MISC::IS_BIT_SET(Local_131.f_285, 5))
							{
								Local_131.f_67.f_5 = 1;
								bLocal_221 = Var26.f_18 == 4;
								Local_131.f_67.f_2 = -1;
								Local_131.f_67.f_10 = 0;
								iLocal_177 = 1;
								iVar20 = Var26;
							}
							else if (Var26.f_18 == 3 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
							{
								bVar15 = true;
								if (((((((((!func_302(247) || !func_302(246)) || !func_302(245)) || !func_302(244)) || !func_302(243)) || !func_302(242)) || !func_302(241)) || !func_302(240)) || !func_302(239)) || !func_302(238))
								{
									func_284(&(Local_131.f_67), "GSM_INV_FULL", 3000);
								}
								else
								{
									func_284(&(Local_131.f_67), "GSM_INV_FULL2", 3000);
								}
							}
							else if (Var26.f_18 == 3 && PED::GET_PED_ARMOUR(PLAYER::PLAYER_PED_ID()) > SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(PLAYER::GET_PLAYER_MAX_ARMOUR(PLAYER::PLAYER_ID())) / 100f) * IntToFloat(Var26.f_16))))
							{
								bVar15 = true;
								func_284(&(Local_131.f_67), "GSM_ARMOR", 3000);
							}
							else if (Var26.f_19 == 0)
							{
								bVar15 = true;
								func_284(&(Local_131.f_67), "GSM_HAVE", 3000);
							}
							else if (Var26.f_18 == 2)
							{
								if (MISC::IS_BIT_SET(Local_131.f_285, 1))
								{
									if (func_557(1, Var26.f_14, Var26, Var26.f_18, 0, Local_131, 0, 0, joaat("AMMO_PISTOL"), 1))
									{
										Global_26C413 = 1;
										Local_131.f_67.f_17 = 1;
										WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), Var26, 1, 0, 0);
										iVar21 = Var26;
										func_284(&(Local_131.f_67), "GSM_PURCHASE", 3000);
										if (Global_10A95)
										{
											if (func_556(Var26, &iVar48))
											{
												func_553(iVar48, 1, -1);
												func_523(func_552(Var26));
											}
										}
										iLocal_177 = 1;
									}
									else if (!Local_131.f_67.f_19)
									{
										if (Local_131.f_67.f_15)
										{
											bVar15 = true;
											func_284(&(Local_131.f_67), "GSM_AFFORD", 3000);
											func_493(MISC::GET_HASH_KEY(&(Global_15F9E.f_4EB)), Global_15F9E.f_4EF, MISC::GET_HASH_KEY(func_236(Local_131)));
											func_491(0, 10, 3);
										}
										else
										{
											bVar15 = true;
											func_284(&(Local_131.f_67), "GSM_LOCK", 3000);
										}
									}
								}
								else
								{
									bVar15 = true;
									func_284(&(Local_131.f_67), "GSM_FULL", 3000);
								}
							}
							else if (Var26.f_18 == 0)
							{
								if ((MISC::IS_BIT_SET(Local_131.f_285, 4) || MISC::IS_BIT_SET(Local_131.f_285, 3)) || MISC::IS_BIT_SET(Local_131.f_285, 5))
								{
									Local_131.f_67.f_5 = 1;
									bLocal_221 = Var26.f_18 == 4;
									Local_131.f_67.f_2 = -1;
									Local_131.f_67.f_10 = 0;
									iLocal_177 = 1;
								}
							}
						}
						else
						{
							if (Global_10A95)
							{
								if (!func_685(Var26, Var26.f_18))
								{
									func_284(&(Local_131.f_67), "GSM_BLOCK_MP", 3000);
								}
								else if (!func_60(1, 1) && Var26 == joaat("weapon_sawnoffshotgun"))
								{
									func_284(&(Local_131.f_67), "GSM_LOCK", 3000);
								}
								else
								{
									func_284(&(Local_131.f_67), "GSM_LOCK_FM", 3000);
								}
							}
							else
							{
								func_284(&(Local_131.f_67), "GSM_LOCK", 3000);
							}
							if (MISC::GET_RANDOM_INT_IN_RANGE(0, 3) == 0)
							{
								func_490(&(Local_131.f_286), 12, 1);
							}
							bVar15 = true;
						}
					}
				}
				else if (bVar6)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Var26.f_18 == 3)
					{
						if (PED::HAS_PED_HEAD_BLEND_FINISHED(PLAYER::PLAYER_PED_ID()) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
						{
							func_24("HAS_PED_HEAD_BLEND_FINISHED = TRUE", -1);
							PED::FINALIZE_HEAD_BLEND(PLAYER::PLAYER_PED_ID());
							AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_AMMO_SHOP_SOUNDSET", 1);
							Local_131.f_67.f_1F = 6;
						}
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_AMMO_SHOP_SOUNDSET", 1);
						Local_131.f_67.f_1F = 6;
					}
				}
				else if (((bVar11 || bVar12) || bVar9) || bVar10)
				{
					if (func_487(func_488(iVar0, -iVar1), Var26, Local_131.f_67.f_3, Local_131.f_67.f_1, &iVar29, &iVar31, &iVar30))
					{
						iLocal_120 = 1;
						iLocal_226 = 0;
						iLocal_231 = 1;
						iVar49 = 0;
						while (iVar49 < 16)
						{
							iVar50 = 0;
							while (iVar50 < 6)
							{
								if (func_84(Local_131, &Global_26CE2D, &Var26, iVar49, iVar50, 0))
								{
									if (Var26 == iVar29 || (iVar30 == iVar50 && iVar31 == iVar49))
									{
										Local_131.f_67.f_1 = iVar50;
										Local_131.f_67.f_3 = iVar49;
										bLocal_214 = false;
										iLocal_168 = 1;
										iLocal_183 = 1;
										bVar14 = true;
										iLocal_177 = 1;
										iLocal_108 = 1;
										Local_131.f_67.f_10 = 0;
										func_635(&Local_131, &(Local_131.f_67), &Var26, 0);
										if (bVar13)
										{
											SYSTEM::SETTIMERA(0);
											Local_131.f_67.f_A = 1;
										}
									}
								}
								iVar50++;
							}
							iVar49++;
						}
					}
				}
				break;
			
			case 1:
				if (PAD::_IS_USING_KEYBOARD(2) && !Local_131.f_67.f_19)
				{
					func_622(0, 0, 0, 1);
					if (Global_26CF15 > -1)
					{
						HUD::_SET_MOUSE_CURSOR_SPRITE(1);
					}
					else if (Global_26CF15 == -4)
					{
						HUD::_SET_MOUSE_CURSOR_SPRITE(2);
					}
					if (func_621() && !bLocal_221)
					{
						if (Global_26CF15 == Local_131.f_67.f_2)
						{
							iVar36 = 1;
						}
						else
						{
							if (MISC::IS_BIT_SET(Local_131.f_285, 4) && Global_26CF15 == 0)
							{
								Local_131.f_67.f_2 = Global_26CF15;
								iLocal_177 = 1;
								bVar14 = true;
							}
							else if (MISC::IS_BIT_SET(Local_131.f_285, 3) && Global_26CF15 < 21)
							{
								if (!func_486(func_147(), Var26, Local_232))
								{
									func_470(func_147(), Var26, Local_232);
								}
								Local_131.f_67.f_2 = Global_26CF15;
								iLocal_177 = 1;
								bVar14 = true;
								Local_131.f_67.f_10 = 0;
							}
							else if (MISC::IS_BIT_SET(Local_131.f_285, 5))
							{
								if (func_305(&Local_234, Var26, func_307(Var26, (Local_131.f_67.f_2 - 21)), 1))
								{
									iVar51 = func_259(Var26, Local_234.f_9, Local_234.f_A);
									if (iVar51 != 0)
									{
										func_286(func_147(), iVar51);
									}
								}
								Local_131.f_67.f_2 = Global_26CF15;
								iLocal_177 = 1;
								bVar14 = true;
								Local_131.f_67.f_10 = 0;
							}
							func_469(Local_131.f_67.f_2, 0, 1);
						}
					}
				}
				if (bLocal_221)
				{
					if (func_621())
					{
						if (Global_26CF15 == iLocal_222)
						{
							bVar5 = true;
						}
						else
						{
							bVar14 = true;
							iLocal_222 = Global_26CF15;
							func_469(iLocal_222, 0, 1);
						}
					}
					if (bVar11)
					{
						iLocal_222 = (iLocal_222 - 1);
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							if (iLocal_222 < 0)
							{
								iLocal_222 = 3;
							}
						}
						else if (iLocal_222 < 0)
						{
							iLocal_222 = 2;
						}
						bVar14 = true;
						bVar14 = true;
						func_469(iLocal_222, 0, 1);
						if (bVar13)
						{
							SYSTEM::SETTIMERA(0);
							Local_131.f_67.f_A = 1;
						}
					}
					else if (bVar12)
					{
						iLocal_222++;
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							if (iLocal_222 > 3)
							{
								iLocal_222 = 0;
							}
						}
						else if (iLocal_222 > 2)
						{
							iLocal_222 = 0;
						}
						bVar14 = true;
						func_469(iLocal_222, 0, 1);
						if (bVar13)
						{
							SYSTEM::SETTIMERA(0);
							Local_131.f_67.f_A = 1;
						}
					}
					else if (bVar5)
					{
						Local_131.f_67.f_5 = 1;
						bLocal_221 = false;
						Local_131.f_67.f_2 = -1;
						Local_131.f_67.f_10 = 0;
						iLocal_177 = 1;
						iVar20 = Var26;
						if (ENTITY::DOES_ENTITY_EXIST(Local_235.f_2) && !PED::IS_PED_INJURED(Local_235.f_2))
						{
							iLocal_224 = 0;
							PED::SET_PED_COMPONENT_VARIATION(Local_235.f_2, 5, func_465(Local_235.f_2, iLocal_224), func_464(Local_235.f_2, iLocal_224), func_463(Local_235.f_2, iLocal_224));
							PED::SET_PED_RESET_FLAG(Local_235.f_2, 177, 1);
						}
					}
					else if (bVar6)
					{
						Local_131.f_67.f_10 = 0;
						AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_AMMO_SHOP_SOUNDSET", 1);
						Local_131.f_67.f_5 = 0;
						Local_131.f_67.f_2 = -1;
						iLocal_177 = 1;
						iLocal_222 = 0;
					}
				}
				else if (bVar11)
				{
					if (MISC::IS_BIT_SET(Local_131.f_285, 9))
					{
						if (MISC::IS_BIT_SET(Local_131.f_285, 5))
						{
							if (func_462(Var26, &iVar52))
							{
								Local_131.f_67.f_2 = iVar52 + 21;
								iLocal_177 = 1;
								bVar14 = true;
								Local_131.f_67.f_10 = 0;
							}
						}
						else if (MISC::IS_BIT_SET(Local_131.f_285, 3))
						{
							if (func_461(Var26, &iVar52))
							{
								Local_131.f_67.f_2 = iVar52 + 1;
								iLocal_177 = 1;
								bVar14 = true;
								Local_131.f_67.f_10 = 0;
							}
							else if (MISC::IS_BIT_SET(Local_131.f_285, 4))
							{
								Local_131.f_67.f_2 = 0;
								iLocal_177 = 1;
								bVar14 = true;
								Local_131.f_67.f_10 = 0;
							}
						}
						else
						{
							Local_131.f_67.f_2 = 0;
							iLocal_177 = 1;
							bVar14 = true;
							Local_131.f_67.f_10 = 0;
						}
					}
					else if (MISC::IS_BIT_SET(Local_131.f_285, 10))
					{
						if (!func_486(func_147(), Var26, Local_232))
						{
							func_470(func_147(), Var26, Local_232);
						}
						iVar52 = (Local_131.f_67.f_2 - 1);
						if (func_460(Var26, &iVar52))
						{
							Local_131.f_67.f_2 = iVar52 + 1;
							iLocal_177 = 1;
							bVar14 = true;
							Local_131.f_67.f_10 = 0;
						}
						else if (MISC::IS_BIT_SET(Local_131.f_285, 4))
						{
							Local_131.f_67.f_2 = 0;
							iLocal_177 = 1;
							bVar14 = true;
							Local_131.f_67.f_10 = 0;
						}
						else if (MISC::IS_BIT_SET(Local_131.f_285, 5))
						{
							func_462(Var26, &iVar52);
							Local_131.f_67.f_2 = (21 + iVar52);
							iLocal_177 = 1;
							bVar14 = true;
							Local_131.f_67.f_10 = 0;
						}
						else
						{
							func_317(Var26, &iVar52);
							Local_131.f_67.f_2 = (1 + iVar52);
							iLocal_177 = 1;
							bVar14 = true;
							Local_131.f_67.f_10 = 0;
						}
					}
					else if (MISC::IS_BIT_SET(Local_131.f_285, 11))
					{
						if (func_305(&Local_234, Var26, func_307(Var26, (Local_131.f_67.f_2 - 21)), 1))
						{
							iVar53 = func_259(Var26, Local_234.f_9, Local_234.f_A);
							if (iVar53 != 0)
							{
								func_286(func_147(), iVar53);
							}
						}
						iLocal_224 = Local_234.f_9;
						iVar52 = (Local_131.f_67.f_2 - 21);
						if (func_459(Var26, &iVar52))
						{
							Local_131.f_67.f_2 = iVar52 + 21;
							iLocal_177 = 1;
							bVar14 = true;
							Local_131.f_67.f_10 = 0;
						}
						else if (MISC::IS_BIT_SET(Local_131.f_285, 3))
						{
							if (func_461(Var26, &iVar52))
							{
								Local_131.f_67.f_2 = iVar52 + 1;
								iLocal_177 = 1;
								bVar14 = true;
								Local_131.f_67.f_10 = 0;
							}
							else if (MISC::IS_BIT_SET(Local_131.f_285, 4))
							{
								Local_131.f_67.f_2 = 0;
								iLocal_177 = 1;
								bVar14 = true;
								Local_131.f_67.f_10 = 0;
							}
						}
						else if (MISC::IS_BIT_SET(Local_131.f_285, 4))
						{
							Local_131.f_67.f_2 = 0;
							iLocal_177 = 1;
							bVar14 = true;
							Local_131.f_67.f_10 = 0;
						}
						else
						{
							func_462(Var26, &iVar52);
							Local_131.f_67.f_2 = (21 + iVar52);
							iLocal_177 = 1;
							bVar14 = true;
							Local_131.f_67.f_10 = 0;
						}
					}
					func_469(Local_131.f_67.f_2, 0, 1);
					iLocal_176 = func_458();
					if (bVar13)
					{
						SYSTEM::SETTIMERA(0);
						Local_131.f_67.f_A = 1;
					}
				}
				else if (bVar12)
				{
					if (MISC::IS_BIT_SET(Local_131.f_285, 9))
					{
						if (MISC::IS_BIT_SET(Local_131.f_285, 3))
						{
							func_317(Var26, &iVar54);
							Local_131.f_67.f_2 = (1 + iVar54);
							iLocal_177 = 1;
							bVar14 = true;
							Local_131.f_67.f_10 = 0;
						}
						else if (MISC::IS_BIT_SET(Local_131.f_285, 5))
						{
							func_313(Var26, &iVar54);
							Local_131.f_67.f_2 = (21 + iVar54);
							iLocal_177 = 1;
							bVar14 = true;
							Local_131.f_67.f_10 = 0;
						}
						else
						{
							Local_131.f_67.f_2 = 0;
							iLocal_177 = 1;
							bVar14 = true;
							Local_131.f_67.f_10 = 0;
						}
					}
					else if (MISC::IS_BIT_SET(Local_131.f_285, 10))
					{
						if (!func_486(func_147(), Var26, Local_232))
						{
							func_470(func_147(), Var26, Local_232);
						}
						iVar54 = (Local_131.f_67.f_2 - 1);
						if (func_457(Var26, &iVar54))
						{
							Local_131.f_67.f_2 = iVar54 + 1;
							iLocal_177 = 1;
							bVar14 = true;
							Local_131.f_67.f_10 = 0;
						}
						else if (MISC::IS_BIT_SET(Local_131.f_285, 5))
						{
							func_313(Var26, &iVar54);
							Local_131.f_67.f_2 = (21 + iVar54);
							iLocal_177 = 1;
							bVar14 = true;
							Local_131.f_67.f_10 = 0;
						}
						else if (MISC::IS_BIT_SET(Local_131.f_285, 4))
						{
							Local_131.f_67.f_2 = 0;
							iLocal_177 = 1;
							bVar14 = true;
							Local_131.f_67.f_10 = 0;
						}
						else
						{
							func_317(Var26, &iVar54);
							Local_131.f_67.f_2 = (1 + iVar54);
							iLocal_177 = 1;
							bVar14 = true;
							Local_131.f_67.f_10 = 0;
						}
					}
					else if (MISC::IS_BIT_SET(Local_131.f_285, 11))
					{
						if (func_305(&Local_234, Var26, func_307(Var26, (Local_131.f_67.f_2 - 21)), 1))
						{
							iVar55 = func_259(Var26, Local_234.f_9, Local_234.f_A);
							if (iVar55 != 0)
							{
								func_286(func_147(), iVar55);
							}
						}
						iLocal_224 = Local_234.f_9;
						iVar54 = (Local_131.f_67.f_2 - 21);
						if (func_456(Var26, &iVar54))
						{
							Local_131.f_67.f_2 = iVar54 + 21;
							iLocal_177 = 1;
							bVar14 = true;
							Local_131.f_67.f_10 = 0;
						}
						else if (MISC::IS_BIT_SET(Local_131.f_285, 4))
						{
							Local_131.f_67.f_2 = 0;
							iLocal_177 = 1;
							bVar14 = true;
							Local_131.f_67.f_10 = 0;
						}
						else if (MISC::IS_BIT_SET(Local_131.f_285, 3))
						{
							func_317(Var26, &iVar54);
							Local_131.f_67.f_2 = (1 + iVar54);
							iLocal_177 = 1;
							bVar14 = true;
							Local_131.f_67.f_10 = 0;
						}
						else
						{
							func_313(Var26, &iVar54);
							Local_131.f_67.f_2 = (21 + iVar54);
							iLocal_177 = 1;
							bVar14 = true;
							Local_131.f_67.f_10 = 0;
						}
					}
					func_469(Local_131.f_67.f_2, 0, 1);
					iLocal_176 = func_458();
					if (bVar13)
					{
						SYSTEM::SETTIMERA(0);
						Local_131.f_67.f_A = 1;
					}
				}
				else if ((bVar5 || iVar36) || Local_131.f_67.f_19)
				{
					Local_131.f_67.f_10 = 0;
					if (func_84(Local_131, &Global_26CE2D, &Var26, Local_131.f_67.f_3, Local_131.f_67.f_1, 1))
					{
						if (MISC::IS_BIT_SET(Local_131.f_285, 9))
						{
							if (!MISC::IS_BIT_SET(Local_131.f_285, 2))
							{
								iVar56 = Var26.f_14;
								iVar57 = Var26.f_16;
								if (Var26.f_18 == 0 && Var26 != joaat("weapon_railgun"))
								{
									iVar57 *= 2;
								}
								iVar58 = iVar57;
								if (func_158())
								{
									if (Var26.f_15)
									{
										Var26.f_14 = (Var26.f_14 * iVar57);
									}
								}
								if (bLocal_214)
								{
									if (func_158() && Var26.f_15)
									{
										iVar56 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar56) * func_455(Var26, iVar57)) * IntToFloat(iVar57)));
									}
									else
									{
										iVar56 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar56) * func_455(Var26, iVar57)));
									}
									iVar57 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar57) * func_455(Var26, iVar57)));
								}
								else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
								{
									func_454(Var26, &(Var26.f_14), &iVar57);
									iVar56 = Var26.f_14;
								}
								if (func_158() && Var26.f_15)
								{
									iVar59 = iVar57;
								}
								else if (bLocal_214)
								{
									iVar59 = SYSTEM::FLOOR(func_455(Var26, iVar58));
								}
								else
								{
									iVar59 = 1;
								}
								if (func_557(1, iVar56, Var26, Var26.f_18, 0, Local_131, iVar58, iVar57, Var26.f_19, iVar59))
								{
									Global_26C413 = 1;
									Local_131.f_67.f_17 = 1;
									WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), Var26, iVar57, 0, 0);
									bVar18 = true;
									iVar21 = Var26;
									func_284(&(Local_131.f_67), "GSM_PURCHASE", 3000);
									if (Global_10A95)
									{
										if (func_556(Var26, &iVar60))
										{
											func_553(iVar60, iVar57, -1);
											func_523(func_552(Var26));
										}
									}
									iLocal_177 = 1;
								}
								else if (!Local_131.f_67.f_19)
								{
									if (Local_131.f_67.f_15)
									{
										bVar15 = true;
										func_284(&(Local_131.f_67), "GSM_AFFORD", 3000);
										func_493(MISC::GET_HASH_KEY(&(Global_15F9E.f_4EB)), Global_15F9E.f_4EF, MISC::GET_HASH_KEY(func_236(Local_131)));
										func_491(0, 10, 3);
									}
									else
									{
										bVar15 = true;
										func_284(&(Local_131.f_67), "GSM_LOCK", 3000);
									}
								}
							}
							else
							{
								bVar15 = true;
								func_284(&(Local_131.f_67), "GSM_FULL", 3000);
							}
						}
						else if (MISC::IS_BIT_SET(Local_131.f_285, 11))
						{
							if (func_305(&Local_234, Var26, func_307(Var26, (Local_131.f_67.f_2 - 21)), 1))
							{
								if (MISC::IS_BIT_SET(Local_131.f_285, 8))
								{
									if (Var26 == -61829581 && MISC::IS_BIT_SET(Local_131.f_285, 2))
									{
										bVar15 = true;
										func_284(&(Local_131.f_67), "GSM_FULL", 3000);
									}
									else if (!MISC::IS_BIT_SET(Local_131.f_285, 0))
									{
										if (func_557(3, Local_234.f_8, Var26, Var26.f_18, 0, Local_131, 0, 0, joaat("AMMO_PISTOL"), 1))
										{
											Global_26C413 = 1;
											if (func_311(Var26))
											{
												if (func_164(&Local_232, Var26, func_453(Var26), 0))
												{
													if (Local_232 == func_310(Var26))
													{
														if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), Var26, Local_232))
														{
															WEAPON::REMOVE_WEAPON_COMPONENT_FROM_PED(PLAYER::PLAYER_PED_ID(), Var26, Local_232);
															func_452(Var26);
															if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
															{
																func_447(Local_232, Var26, 0);
															}
															func_284(&(Local_131.f_67), "GSM_REMOVE", 3000);
															Local_131.f_67.f_17 = 1;
															bVar17 = true;
														}
													}
												}
											}
											if (Local_234.f_A == 0)
											{
												WEAPON::SET_PED_WEAPON_TINT_INDEX(PLAYER::PLAYER_PED_ID(), Var26, Local_234.f_9);
												iLocal_172 = Local_234.f_9;
											}
											else if (Local_234.f_A == 2)
											{
												PLAYER::SET_PLAYER_PARACHUTE_TINT_INDEX(PLAYER::PLAYER_ID(), Local_234.f_9);
												if (func_315())
												{
													PLAYER::SET_PLAYER_PARACHUTE_MODEL_OVERRIDE(PLAYER::PLAYER_ID(), joaat("lts_p_para_pilot2_sp_s"));
												}
												else if (func_316())
												{
													PLAYER::SET_PLAYER_PARACHUTE_MODEL_OVERRIDE(PLAYER::PLAYER_ID(), joaat("pil_p_para_pilot_sp_s"));
												}
												if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
												{
													func_177(573, Local_234.f_9, -1, 1);
												}
												else
												{
													iVar61 = func_147();
													if (iVar61 == 0)
													{
														STATS::STAT_SET_INT(joaat("sp0_parachute_current_tint"), Local_234.f_9, 1);
													}
													else if (iVar61 == 1)
													{
														STATS::STAT_SET_INT(joaat("sp1_parachute_current_tint"), Local_234.f_9, 1);
													}
													else if (iVar61 == 2)
													{
														STATS::STAT_SET_INT(joaat("sp2_parachute_current_tint"), Local_234.f_9, 1);
													}
												}
												iLocal_172 = Local_234.f_9;
											}
											else if (Local_234.f_A == 3)
											{
												func_507(Local_234.f_9, 1);
												iLocal_173 = Local_234.f_9;
											}
											else if (Local_234.f_A == 1)
											{
												func_512(Local_234.f_9, 1);
												iLocal_175 = Local_234.f_9;
											}
											else if (Local_234.f_A == 4)
											{
												func_446(Local_234.f_9, &iVar62, &iVar63, &iVar64);
												PLAYER::SET_PLAYER_PARACHUTE_SMOKE_TRAIL_COLOR(PLAYER::PLAYER_ID(), iVar62, iVar63, iVar64);
												PLAYER::SET_PLAYER_CAN_LEAVE_PARACHUTE_SMOKE_TRAIL(PLAYER::PLAYER_ID(), Local_234.f_9 > 0);
												if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
												{
													func_177(1433, Local_234.f_9, -1, 1);
												}
												iLocal_174 = Local_234.f_9;
												if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
												{
													func_441(6, Local_234.f_9 == 6);
													if (Local_234.f_9 == 7)
													{
														func_440(3602, 1, -1, 1);
													}
												}
											}
											else if (Local_234.f_A == 5)
											{
												iVar65 = 0;
												if (Local_234.f_9 == 0)
												{
													iVar65 = func_18(2782, -1, 0);
												}
												else if (Local_234.f_9 == 1)
												{
													iVar65 = func_18(2781, -1, 0);
												}
												else if (Local_234.f_9 == 2)
												{
													iVar65 = func_18(2783, -1, 0);
												}
												else if (Local_234.f_9 == 3)
												{
													iVar65 = func_18(2785, -1, 0);
												}
												else if (Local_234.f_9 == 4)
												{
													iVar65 = func_18(2784, -1, 0);
												}
												else if (Local_234.f_9 == 5)
												{
													iVar65 = func_18(2786, -1, 0);
												}
												else if (Local_234.f_9 == 6)
												{
													iVar65 = func_18(2788, -1, 0);
												}
												else if (Local_234.f_9 == 7)
												{
													iVar65 = func_18(2787, -1, 0);
												}
												else if (Local_234.f_9 == 8)
												{
													iVar65 = func_18(2789, -1, 0);
												}
												else if (Local_234.f_9 == 9)
												{
													iVar65 = func_18(2791, -1, 0);
												}
												else if (Local_234.f_9 == 10)
												{
													iVar65 = func_18(2790, -1, 0);
												}
												else if (Local_234.f_9 == 11)
												{
													iVar65 = func_18(2792, -1, 0);
												}
												iVar65++;
												if (Local_234.f_9 == 0)
												{
													func_177(2782, iVar65, -1, 1);
												}
												else if (Local_234.f_9 == 1)
												{
													func_177(2781, iVar65, -1, 1);
												}
												else if (Local_234.f_9 == 2)
												{
													func_177(2783, iVar65, -1, 1);
												}
												else if (Local_234.f_9 == 3)
												{
													func_177(2785, iVar65, -1, 1);
												}
												else if (Local_234.f_9 == 4)
												{
													func_177(2784, iVar65, -1, 1);
												}
												else if (Local_234.f_9 == 5)
												{
													func_177(2786, iVar65, -1, 1);
												}
												else if (Local_234.f_9 == 6)
												{
													func_177(2788, iVar65, -1, 1);
												}
												else if (Local_234.f_9 == 7)
												{
													func_177(2787, iVar65, -1, 1);
												}
												else if (Local_234.f_9 == 8)
												{
													func_177(2789, iVar65, -1, 1);
												}
												else if (Local_234.f_9 == 9)
												{
													func_177(2791, iVar65, -1, 1);
												}
												else if (Local_234.f_9 == 10)
												{
													func_177(2790, iVar65, -1, 1);
												}
												else if (Local_234.f_9 == 11)
												{
													func_177(2792, iVar65, -1, 1);
												}
											}
											if (Var26 == joaat("gadget_parachute"))
											{
												WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), Var26, 1, 0, 0);
											}
											if (func_506(PLAYER::PLAYER_PED_ID(), Var26))
											{
												func_494(29, 1);
											}
											func_434(Var26);
											Local_131.f_67.f_17 = 1;
											iVar21 = Var26;
											func_284(&(Local_131.f_67), "GSM_PURCHASE", 3000);
										}
										else if (!Local_131.f_67.f_19)
										{
											if (Local_131.f_67.f_15)
											{
												bVar15 = true;
												func_284(&(Local_131.f_67), "GSM_AFFORD", 3000);
												func_493(MISC::GET_HASH_KEY(&(Global_15F9E.f_4EB)), Global_15F9E.f_4EF, MISC::GET_HASH_KEY(func_236(Local_131)));
												func_491(0, 10, 3);
											}
											else
											{
												bVar15 = true;
												func_284(&(Local_131.f_67), "GSM_LOCK", 3000);
											}
										}
									}
									else if (!MISC::IS_BIT_SET(Local_131.f_285, 6))
									{
										if (func_311(Var26))
										{
											if (func_164(&Local_232, Var26, func_453(Var26), 0))
											{
												if (Local_232 == func_310(Var26))
												{
													if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), Var26, Local_232))
													{
														WEAPON::REMOVE_WEAPON_COMPONENT_FROM_PED(PLAYER::PLAYER_PED_ID(), Var26, Local_232);
														func_452(Var26);
														if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
														{
															func_447(Local_232, Var26, 0);
														}
														func_284(&(Local_131.f_67), "GSM_REMOVE", 3000);
														Local_131.f_67.f_17 = 1;
														bVar17 = true;
													}
												}
											}
										}
										if (Local_234.f_A == 0)
										{
											WEAPON::SET_PED_WEAPON_TINT_INDEX(PLAYER::PLAYER_PED_ID(), Var26, Local_234.f_9);
											iLocal_172 = Local_234.f_9;
										}
										else if (Local_234.f_A == 2)
										{
											PLAYER::SET_PLAYER_PARACHUTE_TINT_INDEX(PLAYER::PLAYER_ID(), Local_234.f_9);
											if (func_315())
											{
												PLAYER::SET_PLAYER_PARACHUTE_MODEL_OVERRIDE(PLAYER::PLAYER_ID(), joaat("lts_p_para_pilot2_sp_s"));
											}
											else if (func_316())
											{
												PLAYER::SET_PLAYER_PARACHUTE_MODEL_OVERRIDE(PLAYER::PLAYER_ID(), joaat("pil_p_para_pilot_sp_s"));
											}
											if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
											{
												func_177(573, Local_234.f_9, -1, 1);
											}
											else
											{
												iVar66 = func_147();
												if (iVar66 == 0)
												{
													STATS::STAT_SET_INT(joaat("sp0_parachute_current_tint"), Local_234.f_9, 1);
												}
												else if (iVar66 == 1)
												{
													STATS::STAT_SET_INT(joaat("sp1_parachute_current_tint"), Local_234.f_9, 1);
												}
												else if (iVar66 == 2)
												{
													STATS::STAT_SET_INT(joaat("sp2_parachute_current_tint"), Local_234.f_9, 1);
												}
											}
											iLocal_172 = Local_234.f_9;
										}
										else if (Local_234.f_A == 3)
										{
											func_507(Local_234.f_9, 1);
											iLocal_173 = Local_234.f_9;
										}
										else if (Local_234.f_A == 1)
										{
											func_512(Local_234.f_9, 1);
											iLocal_175 = Local_234.f_9;
										}
										else if (Local_234.f_A == 4)
										{
											func_446(Local_234.f_9, &iVar67, &iVar68, &iVar69);
											PLAYER::SET_PLAYER_PARACHUTE_SMOKE_TRAIL_COLOR(PLAYER::PLAYER_ID(), iVar67, iVar68, iVar69);
											PLAYER::SET_PLAYER_CAN_LEAVE_PARACHUTE_SMOKE_TRAIL(PLAYER::PLAYER_ID(), Local_234.f_9 > 0);
											iLocal_174 = Local_234.f_9;
											if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
											{
												func_441(6, Local_234.f_9 == 6);
											}
										}
										else if (Local_234.f_A == 5)
										{
											iVar70 = 0;
											if (Local_234.f_9 == 0)
											{
												iVar70 = func_18(2782, -1, 0);
											}
											else if (Local_234.f_9 == 1)
											{
												iVar70 = func_18(2781, -1, 0);
											}
											else if (Local_234.f_9 == 2)
											{
												iVar70 = func_18(2783, -1, 0);
											}
											else if (Local_234.f_9 == 3)
											{
												iVar70 = func_18(2785, -1, 0);
											}
											else if (Local_234.f_9 == 4)
											{
												iVar70 = func_18(2784, -1, 0);
											}
											else if (Local_234.f_9 == 5)
											{
												iVar70 = func_18(2786, -1, 0);
											}
											else if (Local_234.f_9 == 6)
											{
												iVar70 = func_18(2788, -1, 0);
											}
											else if (Local_234.f_9 == 7)
											{
												iVar70 = func_18(2787, -1, 0);
											}
											else if (Local_234.f_9 == 8)
											{
												iVar70 = func_18(2789, -1, 0);
											}
											else if (Local_234.f_9 == 9)
											{
												iVar70 = func_18(2791, -1, 0);
											}
											else if (Local_234.f_9 == 10)
											{
												iVar70 = func_18(2790, -1, 0);
											}
											else if (Local_234.f_9 == 11)
											{
												iVar70 = func_18(2792, -1, 0);
											}
											iVar70++;
											if (Local_234.f_9 == 0)
											{
												func_177(2782, iVar70, -1, 1);
											}
											else if (Local_234.f_9 == 1)
											{
												func_177(2781, iVar70, -1, 1);
											}
											else if (Local_234.f_9 == 2)
											{
												func_177(2783, iVar70, -1, 1);
											}
											else if (Local_234.f_9 == 3)
											{
												func_177(2785, iVar70, -1, 1);
											}
											else if (Local_234.f_9 == 4)
											{
												func_177(2784, iVar70, -1, 1);
											}
											else if (Local_234.f_9 == 5)
											{
												func_177(2786, iVar70, -1, 1);
											}
											else if (Local_234.f_9 == 6)
											{
												func_177(2788, iVar70, -1, 1);
											}
											else if (Local_234.f_9 == 7)
											{
												func_177(2787, iVar70, -1, 1);
											}
											else if (Local_234.f_9 == 8)
											{
												func_177(2789, iVar70, -1, 1);
											}
											else if (Local_234.f_9 == 9)
											{
												func_177(2791, iVar70, -1, 1);
											}
											else if (Local_234.f_9 == 10)
											{
												func_177(2790, iVar70, -1, 1);
											}
											else if (Local_234.f_9 == 11)
											{
												func_177(2792, iVar70, -1, 1);
											}
										}
										func_434(Var26);
										func_284(&(Local_131.f_67), "GSM_EQUIP", 3000);
										Local_131.f_67.f_17 = 1;
										bVar16 = true;
										if (func_506(PLAYER::PLAYER_PED_ID(), Var26))
										{
											func_494(29, 1);
										}
									}
									else
									{
										bVar15 = true;
										func_284(&(Local_131.f_67), "GSM_HAVE", 3000);
									}
								}
								else if (Global_10A95)
								{
									bVar15 = true;
									func_284(&(Local_131.f_67), "GSM_LOCK", 3000);
								}
								else
								{
									bVar15 = true;
									func_284(&(Local_131.f_67), "GSM_LOCK", 3000);
								}
							}
							iLocal_177 = 1;
						}
						else if (MISC::IS_BIT_SET(Local_131.f_285, 10))
						{
							if (func_164(&Local_232, Var26, (Local_131.f_67.f_2 - 1), 1))
							{
								if (MISC::IS_BIT_SET(Local_131.f_285, 8))
								{
									if (func_433(Var26, Local_232, Local_232.f_2))
									{
										StringCopy(&cVar23, "GSM_EQUIP", 16);
									}
									else
									{
										StringCopy(&cVar23, "GSM_PURCHASE", 16);
									}
									if (!MISC::IS_BIT_SET(Local_131.f_285, 0))
									{
										if (func_557(2, Local_232.f_2, Var26, Var26.f_18, Local_232, Local_131, 0, 0, joaat("AMMO_PISTOL"), 1))
										{
											Global_26C413 = 1;
											Local_131.f_67.f_17 = 1;
											if (Local_232 != 0)
											{
												if (Local_232.f_4 == -1441477783)
												{
													WEAPON::SET_PED_WEAPON_TINT_INDEX(PLAYER::PLAYER_PED_ID(), Var26, -1);
													iLocal_172 = -1;
													func_284(&(Local_131.f_67), "GSM_REMOVE", 3000);
												}
												WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(PLAYER::PLAYER_PED_ID(), Var26, Local_232);
												func_452(Var26);
												STATS::PLAYSTATS_WEAPON_MODE_CHANGE(Var26, Local_232, 0);
											}
											iVar21 = Var26;
											func_284(&(Local_131.f_67), &cVar23, 3000);
											if (func_506(PLAYER::PLAYER_PED_ID(), Var26))
											{
												func_494(29, 1);
											}
										}
										else if (!Local_131.f_67.f_19)
										{
											if (Local_131.f_67.f_15)
											{
												bVar15 = true;
												func_284(&(Local_131.f_67), "GSM_AFFORD", 3000);
												func_493(MISC::GET_HASH_KEY(&(Global_15F9E.f_4EB)), Global_15F9E.f_4EF, MISC::GET_HASH_KEY(func_236(Local_131)));
												func_491(0, 10, 3);
											}
											else
											{
												bVar15 = true;
												func_284(&(Local_131.f_67), "GSM_LOCK", 3000);
											}
										}
									}
									else if (!MISC::IS_BIT_SET(Local_131.f_285, 6))
									{
										if (Local_232 != 0)
										{
											if (Local_232.f_4 == -1441477783)
											{
												WEAPON::SET_PED_WEAPON_TINT_INDEX(PLAYER::PLAYER_PED_ID(), Var26, -1);
												iLocal_172 = -1;
												func_284(&(Local_131.f_67), "GSM_REMOVE", 3000);
											}
											WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(PLAYER::PLAYER_PED_ID(), Var26, Local_232);
											func_452(Var26);
											if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
											{
												func_447(Local_232, Var26, 1);
											}
											STATS::PLAYSTATS_WEAPON_MODE_CHANGE(Var26, Local_232, 0);
											func_284(&(Local_131.f_67), "GSM_EQUIP", 3000);
											Local_131.f_67.f_17 = 1;
											bVar16 = true;
											if (func_506(PLAYER::PLAYER_PED_ID(), Var26))
											{
												func_494(29, 1);
											}
										}
									}
									else if (MISC::IS_BIT_SET(Local_131.f_285, 12))
									{
										if (Local_232 != 0)
										{
											WEAPON::REMOVE_WEAPON_COMPONENT_FROM_PED(PLAYER::PLAYER_PED_ID(), Var26, Local_232);
											func_452(Var26);
											if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
											{
												func_447(Local_232, Var26, 0);
											}
											func_284(&(Local_131.f_67), "GSM_REMOVE", 3000);
											Local_131.f_67.f_17 = 1;
											bVar17 = true;
											if (Local_232.f_4 == -1441477783)
											{
												WEAPON::SET_PED_WEAPON_TINT_INDEX(PLAYER::PLAYER_PED_ID(), Var26, 0);
												iLocal_172 = 0;
												func_284(&(Local_131.f_67), "GSM_REMOVE", 3000);
											}
										}
									}
									else
									{
										bVar15 = true;
										func_284(&(Local_131.f_67), "GSM_NOTOGGLE", 3000);
									}
								}
								else if (Global_10A95)
								{
									bVar15 = true;
									func_284(&(Local_131.f_67), "GSM_LOCK_FM", 3000);
								}
								else
								{
									bVar15 = true;
									func_284(&(Local_131.f_67), "GSM_LOCK", 3000);
								}
							}
							iLocal_177 = 1;
						}
					}
				}
				else if (bVar7)
				{
					if (MISC::IS_BIT_SET(Local_131.f_285, 9))
					{
						if (func_84(Local_131, &Global_26CE2D, &Var26, Local_131.f_67.f_3, Local_131.f_67.f_1, 0))
						{
							if (Var26.f_18 == 0)
							{
								bLocal_214 = !bLocal_214;
								iLocal_177 = 1;
								AUDIO::PLAY_SOUND_FRONTEND(-1, "WEAPON_SELECT_OTHER", "HUD_AMMO_SHOP_SOUNDSET", 1);
							}
						}
					}
				}
				else if (bVar6)
				{
					if (MISC::IS_BIT_SET(Local_131.f_285, 10))
					{
						if (!func_486(func_147(), Var26, Local_232))
						{
							func_470(func_147(), Var26, Local_232);
						}
					}
					else if (MISC::IS_BIT_SET(Local_131.f_285, 11))
					{
						if (func_305(&Local_234, Var26, func_307(Var26, (Local_131.f_67.f_2 - 21)), 1))
						{
							iVar71 = func_259(Var26, Local_234.f_9, Local_234.f_A);
							if (iVar71 != 0)
							{
								func_286(func_147(), iVar71);
							}
						}
					}
					if (Var26 == joaat("gadget_parachute"))
					{
						Local_131.f_67.f_10 = 0;
						AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_AMMO_SHOP_SOUNDSET", 1);
						Local_131.f_67.f_5 = 1;
						bLocal_221 = true;
						iLocal_177 = 1;
						if (func_84(Local_131, &Global_26CE2D, &Var26, Local_131.f_67.f_3, Local_131.f_67.f_1, 0))
						{
							func_327(&(Local_131.f_DA[(Local_131.f_67.f_3 * 6 + Local_131.f_67.f_1)]), &Var26);
						}
					}
					else
					{
						Local_131.f_67.f_10 = 0;
						AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_AMMO_SHOP_SOUNDSET", 1);
						iLocal_217 = 0;
						Local_131.f_67.f_11 = 0;
						Local_131.f_67.f_5 = 0;
						Local_131.f_67.f_2 = -1;
						iLocal_177 = 1;
						if (func_84(Local_131, &Global_26CE2D, &Var26, Local_131.f_67.f_3, Local_131.f_67.f_1, 0))
						{
							func_327(&(Local_131.f_DA[(Local_131.f_67.f_3 * 6 + Local_131.f_67.f_1)]), &Var26);
						}
					}
				}
				break;
		}
		if (bVar14)
		{
			if (Local_131.f_67.f_5 == 0)
			{
				if (func_84(Local_131, &Global_26CE2D, &Var26, Local_131.f_67.f_3, Local_131.f_67.f_1, 1))
				{
					func_282(&Global_26CE2D, Local_131.f_67.f_3, Local_131.f_67.f_1, &Var24, &cVar25);
					func_432(Var24, Var26.f_13, Var26, 1, 0);
				}
			}
			else if (Local_131.f_67.f_5 == 1)
			{
				if (Local_131.f_67.f_2 == 0)
				{
					if (func_84(Local_131, &Global_26CE2D, &Var26, Local_131.f_67.f_3, Local_131.f_67.f_1, 1))
					{
						iVar72 = Var26.f_16;
						if (Var26.f_18 == 0)
						{
							iVar72 *= 2;
						}
						iVar73 = Var26.f_14;
						if (bLocal_214)
						{
							iVar73 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar73) * func_455(Var26, iVar72)));
							iVar72 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar72) * func_455(Var26, iVar72)));
						}
						func_152(Var26.f_19, iVar72, &Var24, 0);
						if (bLocal_214)
						{
							StringCopy(&Var24, "GS_BUY_AF", 16);
							func_432(Var24, iVar73, Var26, iVar72, 0);
						}
						else
						{
							func_432(Var24, iVar73, Var26, iVar72, 0);
						}
					}
					fVar76 = (1f - func_94(Var26, &iVar74, &iVar75));
					if (fVar76 != 0f)
					{
						func_299("GSHOP_DISC", 0, 0);
						func_298(SYSTEM::ROUND((fVar76 * 100f)));
					}
				}
				else if (Local_131.f_67.f_2 >= 1 && Local_131.f_67.f_2 < 21)
				{
					if (func_84(Local_131, &Global_26CE2D, &Var26, Local_131.f_67.f_3, Local_131.f_67.f_1, 0))
					{
						if (func_164(&Local_232, Var26, Local_131.f_67.f_2, 1))
						{
							func_279(Var26, (Local_131.f_67.f_2 - 1), &Var24, &cVar25);
							func_432(Var24, Local_232.f_2, Var26, 1, 0);
						}
					}
					fVar78 = (1f - func_166(Var26, &iVar77, 1065353216));
					if (fVar78 != 0f)
					{
						func_299("GSHOP_DISC", 0, 0);
						func_298(SYSTEM::ROUND((fVar78 * 100f)));
					}
				}
				else if (Local_131.f_67.f_2 >= 21)
				{
					if (func_84(Local_131, &Global_26CE2D, &Var26, Local_131.f_67.f_3, Local_131.f_67.f_1, 0))
					{
						if (func_305(&Local_234, Var26, func_307(Var26, (Local_131.f_67.f_2 - 21)), 1) && func_314(Var26, Local_234.f_9, Local_234.f_A))
						{
							func_432(Var24, Local_232.f_2, Var26, 1, 0);
						}
					}
					uVar79 = Local_232.f_2;
					fVar80 = (1f - func_238(Var26, &uVar79));
					if (fVar80 != 0f)
					{
						func_299("GSHOP_DISC", 0, 0);
						func_298(SYSTEM::ROUND((fVar80 * 100f)));
					}
				}
			}
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV", "HUD_AMMO_SHOP_SOUNDSET", 1);
		}
		if (iVar20 != 0)
		{
			func_683(iVar20);
		}
		if (iVar21 != 0)
		{
			if (bVar18)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "WEAPON_AMMO_PURCHASE", "HUD_AMMO_SHOP_SOUNDSET", 1);
			}
			else
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "WEAPON_PURCHASE", "HUD_AMMO_SHOP_SOUNDSET", 1);
			}
		}
		if (bVar16)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "WEAPON_ATTACHMENT_EQUIP", "HUD_AMMO_SHOP_SOUNDSET", 1);
			}
			else
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "WEAPON_PURCHASE", "HUD_AMMO_SHOP_SOUNDSET", 1);
			}
		}
		if (bVar17)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "WEAPON_ATTACHMENT_UNEQUIP", "HUD_AMMO_SHOP_SOUNDSET", 1);
			}
			else
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_AMMO_SHOP_SOUNDSET", 1);
			}
		}
		if (bVar15)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_AMMO_SHOP_SOUNDSET", 1);
		}
		if (bVar14 && Local_131.f_67.f_5 == 0)
		{
			Local_131.f_67.f_11 = 0;
			iLocal_165 = 0;
		}
		if (bVar22)
		{
			if (bVar4 || iLocal_165)
			{
				if (!Local_131.f_67.f_11)
				{
					if (func_84(Local_131, &Global_26CE2D, &Var26, Local_131.f_67.f_3, Local_131.f_67.f_1, 0))
					{
						func_635(&Local_131, &(Local_131.f_67), &Var26, 1);
						if (Local_131.f_67 == 0)
						{
							Local_131.f_26[Local_131.f_67.f_4 /*12*/].f_7 = (Local_131.f_26[Local_131.f_67.f_4 /*12*/].f_7 - 2f);
						}
						else if (Local_131.f_67 == 1)
						{
							Local_131.f_26[Local_131.f_67.f_4 /*12*/].f_7 = (Local_131.f_26[Local_131.f_67.f_4 /*12*/].f_7 - 1f);
						}
						Var81 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var26.f_1, Var26.f_4.f_2, Var26.f_7) };
						Var82 = { Local_131.f_26[Local_131.f_67.f_4 /*12*/].f_1 };
						fVar83 = 0.4f;
						Local_131.f_26[Local_131.f_67.f_4 /*12*/].f_1 = { Local_131.f_26[Local_131.f_67.f_4 /*12*/].f_1 + Var81 - Var82 * Vector(fVar83, fVar83, fVar83) };
						Local_131.f_67.f_11 = 1;
					}
				}
			}
			else if (Local_131.f_67.f_11)
			{
				if (func_84(Local_131, &Global_26CE2D, &Var26, Local_131.f_67.f_3, Local_131.f_67.f_1, 0))
				{
					func_635(&Local_131, &(Local_131.f_67), &Var26, 0);
					Local_131.f_67.f_11 = 0;
				}
			}
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_344();
			if (((Local_131.f_67.f_5 == 1 && Local_131.f_67.f_2 >= 21) && !bLocal_221) && iLocal_222 == 3)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_235.f_2) && !PED::IS_PED_INJURED(Local_235.f_2))
				{
					PED::SET_PED_COMPONENT_VARIATION(Local_235.f_2, 5, func_465(Local_235.f_2, iLocal_224), func_464(Local_235.f_2, iLocal_224), func_463(Local_235.f_2, iLocal_224));
					PED::SET_PED_RESET_FLAG(Local_235.f_2, 177, 1);
					ENTITY::SET_ENTITY_VISIBLE(Local_235.f_2, true);
					bLocal_223 = true;
				}
			}
			else if (bLocal_223)
			{
				ENTITY::SET_ENTITY_VISIBLE(Local_235.f_2, false);
				PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 5, 0, 0, 0);
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, 1);
				bLocal_223 = false;
			}
		}
	}
}

void func_344()//Position - 0x2BE36
{
	if (Global_10A95)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_694())
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_235.f_2))
				{
					Local_235.f_2 = PED::CLONE_PED(PLAYER::PLAYER_PED_ID(), 0, 0, 0);
					Global_26CC0B = Local_235.f_2;
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_235.f_2, Local_131.f_AA.f_1F, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(Local_235.f_2, Local_131.f_AA.f_22);
					ENTITY::SET_ENTITY_COLLISION(Local_235.f_2, false, 0);
					ENTITY::FREEZE_ENTITY_POSITION(Local_235.f_2, true);
					ENTITY::SET_ENTITY_VISIBLE(Local_235.f_2, false);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_235.f_2, 0, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_235.f_2, 1);
					func_345(&(Local_235.f_2), -1, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_235.f_2, 5, 0, 0, 0);
				}
			}
		}
	}
}

void func_345(var uParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x2BEEE
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
		iParam1 = func_20();
	}
	if (!bParam3)
	{
		PED::CLEAR_PED_DECORATIONS_LEAVE_SCARS(*uParam0);
	}
	iVar1 = func_431(*uParam0);
	bVar2 = func_429(*uParam0);
	bVar3 = func_427(*uParam0);
	bVar4 = func_354(*uParam0);
	iVar5 = 0;
	while (iVar5 < 127)
	{
		if (func_351(iVar5, iParam1))
		{
			if (func_348(&Var0, iVar5, iVar1, *uParam0, -1))
			{
				if (func_347(&Var0, Var0.f_8, bVar2, bVar3, bParam2, bVar4))
				{
					if (!bParam3)
					{
						PED::ADD_PED_DECORATION_FROM_HASHES(*uParam0, Var0.f_4, Var0.f_5);
					}
				}
			}
		}
		iVar5++;
	}
	if (func_351(123, -1))
	{
		if (PED::GET_PED_DECORATION_ZONE_FROM_HASHES(joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz")) != 7)
		{
			if (!bParam3)
			{
				PED::ADD_PED_DECORATION_FROM_HASHES(*uParam0, joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz"));
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
				if (func_351(iVar9, iParam1))
				{
					if (func_347(&(Var8.f_7), Var8.f_6, bVar2, bVar3, bParam2, bVar4))
					{
						if (!bParam3)
						{
							PED::ADD_PED_DECORATION_FROM_HASHES(*uParam0, Var8.f_2, Var8.f_3);
							func_346(*uParam0, Var8.f_2, Var8.f_3);
						}
					}
				}
			}
		}
		iVar6++;
	}
}

void func_346(var uParam0, int iParam1, int iParam2)//Position - 0x2C040
{
	switch (iParam1)
	{
		case joaat("mpHeist_overlays"):
			switch (iParam2)
			{
				case joaat("MP_Elite_M_Tshirt_1"):
					PED::ADD_PED_DECORATION_FROM_HASHES(uParam0, joaat("mpHeist_overlays"), joaat("MP_Elite_M_Tshirt_2"));
					break;
				
				case joaat("MP_Elite_F_Tshirt_1"):
					PED::ADD_PED_DECORATION_FROM_HASHES(uParam0, joaat("mpHeist_overlays"), joaat("MP_Elite_F_Tshirt_2"));
					break;
			}
			break;
		
		case joaat("mpLuxe_overlays"):
			switch (iParam2)
			{
				case joaat("MP_LUXE_TAT_029_M"):
					PED::ADD_PED_DECORATION_FROM_HASHES(uParam0, joaat("mpLuxe_overlays"), joaat("MP_LUXE_TAT_030_M"));
					PED::ADD_PED_DECORATION_FROM_HASHES(uParam0, joaat("mpLuxe_overlays"), joaat("MP_LUXE_TAT_031_M"));
					break;
				
				case joaat("MP_LUXE_TAT_029_F"):
					PED::ADD_PED_DECORATION_FROM_HASHES(uParam0, joaat("mpLuxe_overlays"), joaat("MP_LUXE_TAT_030_F"));
					PED::ADD_PED_DECORATION_FROM_HASHES(uParam0, joaat("mpLuxe_overlays"), joaat("MP_LUXE_TAT_031_F"));
					break;
			}
			break;
	}
}

int func_347(char* sParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x2C0F3
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
					if (func_351(13, -1))
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
					if (func_351(13, -1))
					{
					}
					else if (func_351(14, -1))
					{
					}
					else if (func_351(15, -1))
					{
					}
					else if (func_351(16, -1))
					{
					}
					else if (func_351(71, -1))
					{
					}
					else if (func_351(72, -1))
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

bool func_348(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x2C345
{
	int iVar0;
	int iVar1;
	
	func_350(sParam0, -1, 0, "", "", "", "", iParam2, -1, 0);
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
					func_350(sParam0, iParam1, iParam3, "TAT_MIC_01", "singleplayer_overlays", "MK_000", "", iParam2, 300, 3);
					break;
				
				case 1:
					func_350(sParam0, iParam1, iParam3, "TAT_MIC_02", "singleplayer_overlays", "MK_001", "", iParam2, 450, 0);
					break;
				
				case 2:
					func_350(sParam0, iParam1, iParam3, "TAT_MIC_03", "singleplayer_overlays", "MK_002", "", iParam2, 250, 4);
					break;
				
				case 3:
					func_350(sParam0, iParam1, iParam3, "TAT_MIC_04", "singleplayer_overlays", "MK_003", "", iParam2, 175, 0);
					break;
				
				case 4:
					func_350(sParam0, iParam1, iParam3, "TAT_MIC_06", "singleplayer_overlays", "MK_005", "", iParam2, 380, 0);
					break;
				
				case 5:
					func_350(sParam0, iParam1, iParam3, "TAT_MIC_07", "singleplayer_overlays", "MK_006", "", iParam2, 180, 0);
					break;
				
				case 6:
					func_350(sParam0, iParam1, iParam3, "TAT_MIC_08", "singleplayer_overlays", "MK_007", "", iParam2, 240, 0);
					break;
				
				case 7:
					func_350(sParam0, iParam1, iParam3, "TAT_MIC_10", "singleplayer_overlays", "MK_009", "", iParam2, 195, 0);
					break;
				
				case 8:
					func_350(sParam0, iParam1, iParam3, "TAT_MIC_11", "singleplayer_overlays", "MK_010", "", iParam2, 280, 6);
					break;
				
				case 9:
					if (func_240() || func_239())
					{
						iVar1 = 400;
						if (func_59() && (func_160() || func_159()))
						{
							iVar1 = 0;
						}
						func_350(sParam0, iParam1, iParam3, "TAT_MIC_12", "singleplayer_overlays", "MK_011", "", iParam2, iVar1, 2);
					}
					break;
				
				case 10:
					func_350(sParam0, iParam1, iParam3, "TAT_MIC_13", "singleplayer_overlays", "MK_012", "", iParam2, 320, 3);
					break;
				
				case 11:
					func_350(sParam0, iParam1, iParam3, "TAT_MIC_14", "singleplayer_overlays", "MK_013", "", iParam2, 500, 2);
					break;
				
				case 12:
					func_350(sParam0, iParam1, iParam3, "TAT_MIC_16", "singleplayer_overlays", "MK_015", "", iParam2, 220, 0);
					break;
				
				case 13:
					func_350(sParam0, iParam1, iParam3, "TAT_MIC_17", "singleplayer_overlays", "MK_016", "", iParam2, 320, 4);
					break;
				
				case 14:
					func_350(sParam0, iParam1, iParam3, "TAT_MIC_18", "singleplayer_overlays", "MK_017", "", iParam2, 140, 2);
					break;
				
				case 15:
					func_350(sParam0, iParam1, iParam3, "TAT_MIC_20", "singleplayer_overlays", "MK_019", "", iParam2, 350, 0);
					break;
				
				case 16:
					func_350(sParam0, iParam1, iParam3, "TAT_MIC_21", "singleplayer_overlays", "MK_020", "", iParam2, 350, 0);
					break;
				
				case 17:
					func_350(sParam0, iParam1, iParam3, "TAT_MIC_05", "singleplayer_overlays", "MK_004", "", iParam2, 120, 1);
					break;
				
				case 18:
					func_350(sParam0, iParam1, iParam3, "TAT_MIC_09", "singleplayer_overlays", "MK_008", "", iParam2, 99, 1);
					break;
				
				case 19:
					func_350(sParam0, iParam1, iParam3, "TAT_MIC_15", "singleplayer_overlays", "MK_014", "", iParam2, 400, 1);
					break;
				
				case 20:
					func_350(sParam0, iParam1, iParam3, "TAT_MIC_19", "singleplayer_overlays", "MK_018", "", iParam2, 420, 1);
					break;
				
				default:
					func_349(sParam0, iParam2, iParam1, 21);
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					if (func_240() || func_239())
					{
						iVar1 = 450;
						if (func_59() && (func_160() || func_159()))
						{
							iVar1 = 0;
						}
						func_350(sParam0, iParam1, iParam3, "TAT_FRA_01", "singleplayer_overlays", "fr_000", "", iParam2, iVar1, 0);
					}
					break;
				
				case 1:
					func_350(sParam0, iParam1, iParam3, "TAT_FRA_02", "singleplayer_overlays", "fr_001", "", iParam2, 230, 0);
					break;
				
				case 2:
					func_350(sParam0, iParam1, iParam3, "TAT_FRA_03", "singleplayer_overlays", "fr_002", "", iParam2, 310, 0);
					break;
				
				case 3:
					func_350(sParam0, iParam1, iParam3, "TAT_FRA_04", "singleplayer_overlays", "fr_003", "", iParam2, 260, 0);
					break;
				
				case 4:
					func_350(sParam0, iParam1, iParam3, "TAT_FRA_07", "singleplayer_overlays", "fr_006", "", iParam2, 240, 2);
					break;
				
				case 5:
					func_350(sParam0, iParam1, iParam3, "TAT_FRA_08", "singleplayer_overlays", "fr_007", "", iParam2, 190, 3);
					break;
				
				case 6:
					func_350(sParam0, iParam1, iParam3, "TAT_FRA_09", "singleplayer_overlays", "fr_008", "", iParam2, 200, 2);
					break;
				
				case 7:
					func_350(sParam0, iParam1, iParam3, "TAT_FRA_10", "singleplayer_overlays", "fr_009", "", iParam2, 225, 0);
					break;
				
				case 8:
					func_350(sParam0, iParam1, iParam3, "TAT_FRA_12", "singleplayer_overlays", "fr_011", "", iParam2, 195, 0);
					break;
				
				case 9:
					func_350(sParam0, iParam1, iParam3, "TAT_FRA_13", "singleplayer_overlays", "fr_012", "", iParam2, 275, 2);
					break;
				
				case 10:
					func_350(sParam0, iParam1, iParam3, "TAT_FRA_14", "singleplayer_overlays", "fr_013", "", iParam2, 80, 0);
					break;
				
				case 11:
					func_350(sParam0, iParam1, iParam3, "TAT_FRA_15", "singleplayer_overlays", "fr_014", "", iParam2, 95, 0);
					break;
				
				case 12:
					func_350(sParam0, iParam1, iParam3, "TAT_FRA_16", "singleplayer_overlays", "fr_015", "", iParam2, 300, 3);
					break;
				
				case 13:
					func_350(sParam0, iParam1, iParam3, "TAT_FRA_17", "singleplayer_overlays", "fr_016", "", iParam2, 450, 3);
					break;
				
				case 14:
					func_350(sParam0, iParam1, iParam3, "TAT_FRA_18", "singleplayer_overlays", "fr_017", "", iParam2, 345, 3);
					break;
				
				case 15:
					func_350(sParam0, iParam1, iParam3, "TAT_FRA_19", "singleplayer_overlays", "fr_018", "", iParam2, 550, 0);
					break;
				
				case 16:
					func_350(sParam0, iParam1, iParam3, "TAT_FRA_20", "singleplayer_overlays", "fr_019", "", iParam2, 200, 0);
					break;
				
				case 17:
					func_350(sParam0, iParam1, iParam3, "TAT_FRA_21", "singleplayer_overlays", "fr_020", "", iParam2, 180, 0);
					break;
				
				case 18:
					func_350(sParam0, iParam1, iParam3, "TAT_FRA_22", "singleplayer_overlays", "fr_021", "", iParam2, 140, 0);
					break;
				
				case 19:
					func_350(sParam0, iParam1, iParam3, "TAT_FRA_24", "singleplayer_overlays", "fr_023", "", iParam2, 245, 0);
					break;
				
				case 20:
					break;
				
				case 21:
					func_350(sParam0, iParam1, iParam3, "TAT_FRA_26", "singleplayer_overlays", "fr_025", "", iParam2, 370, 0);
					break;
				
				case 22:
					func_350(sParam0, iParam1, iParam3, "TAT_FRA_27", "singleplayer_overlays", "fr_026", "", iParam2, 350, 0);
					break;
				
				case 23:
					func_350(sParam0, iParam1, iParam3, "TAT_FRA_28", "singleplayer_overlays", "fr_027", "", iParam2, 310, 0);
					break;
				
				case 24:
					func_350(sParam0, iParam1, iParam3, "TAT_FRA_29", "singleplayer_overlays", "fr_028", "", iParam2, 210, 0);
					break;
				
				case 25:
					func_350(sParam0, iParam1, iParam3, "TAT_FRA_30", "singleplayer_overlays", "fr_029", "", iParam2, 245, 0);
					break;
				
				case 26:
					func_350(sParam0, iParam1, iParam3, "TAT_FRA_31", "singleplayer_overlays", "fr_030", "", iParam2, 85, 0);
					break;
				
				case 27:
					func_350(sParam0, iParam1, iParam3, "TAT_FRA_32", "singleplayer_overlays", "fr_031", "", iParam2, 210, 0);
					break;
				
				case 28:
					func_350(sParam0, iParam1, iParam3, "TAT_FRA_33", "singleplayer_overlays", "fr_032", "", iParam2, 225, 0);
					break;
				
				case 29:
					func_350(sParam0, iParam1, iParam3, "TAT_FRA_34", "singleplayer_overlays", "fr_033", "", iParam2, 145, 0);
					break;
				
				case 30:
					func_350(sParam0, iParam1, iParam3, "TAT_FRA_35", "singleplayer_overlays", "fr_034", "", iParam2, 230, 0);
					break;
				
				case 31:
					func_350(sParam0, iParam1, iParam3, "TAT_FRA_36", "singleplayer_overlays", "fr_035", "", iParam2, 195, 0);
					break;
				
				case 32:
					func_350(sParam0, iParam1, iParam3, "TAT_FRA_37", "singleplayer_overlays", "fr_036", "", iParam2, 255, 0);
					break;
				
				case 33:
					func_350(sParam0, iParam1, iParam3, "TAT_FRA_38", "singleplayer_overlays", "fr_037", "", iParam2, 300, 0);
					break;
				
				case 34:
					func_350(sParam0, iParam1, iParam3, "TAT_FRA_40", "singleplayer_overlays", "fr_039", "", iParam2, 300, 0);
					break;
				
				case 35:
					func_350(sParam0, iParam1, iParam3, "TAT_FRA_05", "singleplayer_overlays", "fr_004", "", iParam2, 255, 1);
					break;
				
				case 36:
					func_350(sParam0, iParam1, iParam3, "TAT_FRA_06", "singleplayer_overlays", "fr_005", "", iParam2, 175, 1);
					break;
				
				case 37:
					func_350(sParam0, iParam1, iParam3, "TAT_FRA_11", "singleplayer_overlays", "fr_010", "", iParam2, 520, 1);
					break;
				
				case 38:
					func_350(sParam0, iParam1, iParam3, "TAT_FRA_23", "singleplayer_overlays", "fr_022", "", iParam2, 125, 1);
					break;
				
				case 39:
					func_350(sParam0, iParam1, iParam3, "TAT_FRA_39", "singleplayer_overlays", "fr_038", "", iParam2, 365, 1);
					break;
				
				default:
					func_349(sParam0, iParam2, iParam1, 40);
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					func_350(sParam0, iParam1, iParam3, "TAT_TRV_01", "singleplayer_overlays", "tp_000", "", iParam2, 120, 0);
					break;
				
				case 1:
					func_350(sParam0, iParam1, iParam3, "TAT_TRV_02", "singleplayer_overlays", "tp_001", "", iParam2, 150, 3);
					break;
				
				case 2:
					func_350(sParam0, iParam1, iParam3, "TAT_TRV_03", "singleplayer_overlays", "tp_002", "", iParam2, 100, 0);
					break;
				
				case 3:
					func_350(sParam0, iParam1, iParam3, "TAT_TRV_04", "singleplayer_overlays", "tp_003", "", iParam2, 140, 0);
					break;
				
				case 4:
					func_350(sParam0, iParam1, iParam3, "TAT_TRV_05", "singleplayer_overlays", "tp_004", "", iParam2, 250, 0);
					break;
				
				case 5:
					if (func_240() || func_239())
					{
						iVar1 = 380;
						if (func_59() && (func_160() || func_159()))
						{
							iVar1 = 0;
						}
						func_350(sParam0, iParam1, iParam3, "TAT_TRV_06", "singleplayer_overlays", "tp_005", "", iParam2, iVar1, 3);
					}
					break;
				
				case 6:
					func_350(sParam0, iParam1, iParam3, "TAT_TRV_07", "singleplayer_overlays", "tp_006", "", iParam2, 120, 0);
					break;
				
				case 7:
					func_350(sParam0, iParam1, iParam3, "TAT_TRV_08", "singleplayer_overlays", "tp_007", "", iParam2, 250, 0);
					break;
				
				case 8:
					func_350(sParam0, iParam1, iParam3, "TAT_TRV_09", "singleplayer_overlays", "tp_008", "", iParam2, 50, 3);
					break;
				
				case 9:
					func_350(sParam0, iParam1, iParam3, "TAT_TRV_10", "singleplayer_overlays", "tp_009", "", iParam2, 135, 2);
					break;
				
				case 10:
					func_350(sParam0, iParam1, iParam3, "TAT_TRV_11", "singleplayer_overlays", "tp_010", "", iParam2, 245, 0);
					break;
				
				case 11:
					func_350(sParam0, iParam1, iParam3, "TAT_TRV_12", "singleplayer_overlays", "tp_011", "", iParam2, 280, 0);
					break;
				
				case 12:
					func_350(sParam0, iParam1, iParam3, "TAT_TRV_13", "singleplayer_overlays", "tp_012", "", iParam2, 65, 0);
					break;
				
				case 13:
					func_350(sParam0, iParam1, iParam3, "TAT_TRV_14", "singleplayer_overlays", "tp_013", "", iParam2, 150, 6);
					break;
				
				case 14:
					func_350(sParam0, iParam1, iParam3, "TAT_TRV_15", "singleplayer_overlays", "tp_014", "", iParam2, 200, 0);
					break;
				
				case 15:
					func_350(sParam0, iParam1, iParam3, "TAT_TRV_16", "singleplayer_overlays", "tp_015", "", iParam2, 145, 0);
					break;
				
				case 16:
					func_350(sParam0, iParam1, iParam3, "TAT_TRV_17", "singleplayer_overlays", "tp_016", "", iParam2, 290, 0);
					break;
				
				case 17:
					func_350(sParam0, iParam1, iParam3, "TAT_TRV_18", "singleplayer_overlays", "tp_017", "", iParam2, 350, 3);
					break;
				
				case 18:
					func_350(sParam0, iParam1, iParam3, "TAT_TRV_19", "singleplayer_overlays", "tp_018", "", iParam2, 70, 0);
					break;
				
				case 19:
					func_350(sParam0, iParam1, iParam3, "TAT_TRV_20", "singleplayer_overlays", "tp_019", "", iParam2, 180, 6);
					break;
				
				case 20:
					func_350(sParam0, iParam1, iParam3, "TAT_TRV_21", "singleplayer_overlays", "tp_020", "", iParam2, 230, 0);
					break;
				
				case 21:
					func_350(sParam0, iParam1, iParam3, "TAT_TRV_22", "singleplayer_overlays", "tp_021", "", iParam2, 200, 0);
					break;
				
				case 22:
					func_350(sParam0, iParam1, iParam3, "TAT_TRV_24", "singleplayer_overlays", "tp_023", "", iParam2, 240, 0);
					break;
				
				case 23:
					func_350(sParam0, iParam1, iParam3, "TAT_TRV_25", "singleplayer_overlays", "tp_024", "", iParam2, 195, 0);
					break;
				
				case 24:
					func_350(sParam0, iParam1, iParam3, "TAT_TRV_26", "singleplayer_overlays", "tp_025", "", iParam2, 225, 2);
					break;
				
				case 25:
					func_350(sParam0, iParam1, iParam3, "TAT_TRV_28", "singleplayer_overlays", "tp_027", "", iParam2, 175, 0);
					break;
				
				case 26:
					func_350(sParam0, iParam1, iParam3, "TAT_TRV_29", "singleplayer_overlays", "tp_028", "", iParam2, 65, 0);
					break;
				
				case 27:
					func_350(sParam0, iParam1, iParam3, "TAT_TRV_30", "singleplayer_overlays", "tp_029", "", iParam2, 50, 0);
					break;
				
				case 28:
					func_350(sParam0, iParam1, iParam3, "TAT_TRV_31", "singleplayer_overlays", "tp_030", "", iParam2, 70, 0);
					break;
				
				case 29:
					func_350(sParam0, iParam1, iParam3, "TAT_TRV_34", "singleplayer_overlays", "tp_033", "", iParam2, 70, 0);
					break;
				
				case 30:
					func_350(sParam0, iParam1, iParam3, "TAT_TRV_23", "singleplayer_overlays", "tp_022", "", iParam2, 500, 1);
					break;
				
				case 31:
					func_350(sParam0, iParam1, iParam3, "TAT_TRV_27", "singleplayer_overlays", "tp_026", "", iParam2, 300, 1);
					break;
				
				case 32:
					func_350(sParam0, iParam1, iParam3, "TAT_TRV_32", "singleplayer_overlays", "tp_031", "", iParam2, 190, 1);
					break;
				
				case 33:
					func_350(sParam0, iParam1, iParam3, "TAT_TRV_33", "singleplayer_overlays", "tp_032", "", iParam2, 129, 1);
					break;
				
				default:
					func_349(sParam0, iParam2, iParam1, 34);
					break;
			}
			break;
		
		case 3:
		case 4:
			switch (iParam1)
			{
				case 0:
					func_350(sParam0, iParam1, iParam3, "TAT_FM_008", "multiplayer_overlays", "000", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(20000) * Global_40001.f_B3D)), 0);
					break;
				
				case 1:
					func_350(sParam0, iParam1, iParam3, "TAT_FM_009", "multiplayer_overlays", "001", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1400) * Global_40001.f_B3E)), 2);
					break;
				
				case 2:
					func_350(sParam0, iParam1, iParam3, "TAT_FM_010", "multiplayer_overlays", "002", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(9750) * Global_40001.f_B3F)), 3);
					break;
				
				case 3:
					func_350(sParam0, iParam1, iParam3, "TAT_FM_011", "multiplayer_overlays", "003", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2150) * Global_40001.f_B40)), 0);
					break;
				
				case 4:
					func_350(sParam0, iParam1, iParam3, "TAT_FM_012", "multiplayer_overlays", "004", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_40001.f_B41)), 0);
					break;
				
				case 54:
					func_350(sParam0, iParam1, iParam3, "TAT_FM_013", "multiplayer_overlays", "005", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(12400) * Global_40001.f_B42)), 1);
					break;
				
				case 5:
					func_350(sParam0, iParam1, iParam3, "TAT_FM_014", "multiplayer_overlays", "006", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(3500) * Global_40001.f_B43)), 0);
					break;
				
				case 6:
					func_350(sParam0, iParam1, iParam3, "TAT_FM_015", "multiplayer_overlays", "007", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(4950) * Global_40001.f_B44)), 2);
					break;
				
				case 55:
					func_350(sParam0, iParam1, iParam3, "TAT_FM_016", "multiplayer_overlays", "008", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1350) * Global_40001.f_B45)), 1);
					break;
				
				case 7:
					func_350(sParam0, iParam1, iParam3, "TAT_FM_017", "multiplayer_overlays", "009", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1450) * Global_40001.f_B46)), 0);
					break;
				
				case 8:
					func_350(sParam0, iParam1, iParam3, "TAT_FM_018", "multiplayer_overlays", "010", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2700) * Global_40001.f_B47)), 7);
					break;
				
				case 9:
					func_350(sParam0, iParam1, iParam3, "TAT_FM_019", "multiplayer_overlays", "011", "rank", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1200) * Global_40001.f_B48)), 0);
					break;
				
				case 10:
					func_350(sParam0, iParam1, iParam3, "TAT_FM_020", "multiplayer_overlays", "012", "rank", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1500) * Global_40001.f_B49)), 0);
					break;
				
				case 11:
					func_350(sParam0, iParam1, iParam3, "TAT_FM_021", "multiplayer_overlays", "013", "rank", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2650) * Global_40001.f_B4A)), 0);
					break;
				
				case 56:
					func_350(sParam0, iParam1, iParam3, "TAT_FM_022", "multiplayer_overlays", "014", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1900) * Global_40001.f_B4B)), 1);
					break;
				
				case 12:
					func_350(sParam0, iParam1, iParam3, "TAT_FM_023", "multiplayer_overlays", "015", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(4950) * Global_40001.f_B4C)), 2);
					break;
				
				case 57:
					func_350(sParam0, iParam1, iParam3, "TAT_FM_024", "multiplayer_overlays", "016", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2400) * Global_40001.f_B4D)), 1);
					break;
				
				case 58:
					func_350(sParam0, iParam1, iParam3, "TAT_FM_025", "multiplayer_overlays", "017", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5100) * Global_40001.f_B4E)), 1);
					break;
				
				case 59:
					func_350(sParam0, iParam1, iParam3, "TAT_FM_026", "multiplayer_overlays", "018", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7400) * Global_40001.f_B4F)), 1);
					break;
				
				case 60:
					func_350(sParam0, iParam1, iParam3, "TAT_FM_027", "multiplayer_overlays", "019", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_40001.f_B50)), 1);
					break;
				
				case 17:
					func_350(sParam0, iParam1, iParam3, "TAT_FM_201", "multiplayer_overlays", "005", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2400) * Global_40001.f_B55)), 2);
					break;
				
				case 18:
					func_350(sParam0, iParam1, iParam3, "TAT_FM_202", "multiplayer_overlays", "006", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5100) * Global_40001.f_B56)), 2);
					break;
				
				case 19:
					func_350(sParam0, iParam1, iParam3, "TAT_FM_203", "multiplayer_overlays", "015", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(3600) * Global_40001.f_B57)), 2);
					break;
				
				case 20:
					func_350(sParam0, iParam1, iParam3, "TAT_FM_204", "multiplayer_overlays", "000", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_40001.f_B58)), 3);
					break;
				
				case 21:
					func_350(sParam0, iParam1, iParam3, "TAT_FM_205", "multiplayer_overlays", "001", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(12500) * Global_40001.f_B59)), 3);
					break;
				
				case 22:
					func_350(sParam0, iParam1, iParam3, "TAT_FM_206", "multiplayer_overlays", "003", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_40001.f_B5A)), 3);
					break;
				
				case 23:
					func_350(sParam0, iParam1, iParam3, "TAT_FM_207", "multiplayer_overlays", "014", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_40001.f_B5B)), 3);
					break;
				
				case 24:
					func_350(sParam0, iParam1, iParam3, "TAT_FM_208", "multiplayer_overlays", "018", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7500) * Global_40001.f_B5C)), 3);
					break;
				
				case 25:
					func_350(sParam0, iParam1, iParam3, "TAT_FM_209", "multiplayer_overlays", "002", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(3750) * Global_40001.f_B5D)), 2);
					break;
				
				case 26:
					func_350(sParam0, iParam1, iParam3, "TAT_FM_210", "multiplayer_overlays", "007", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(3750) * Global_40001.f_B5E)), 3);
					break;
				
				case 27:
					func_350(sParam0, iParam1, iParam3, "TAT_FM_211", "multiplayer_overlays", "008", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(4800) * Global_40001.f_B5F)), 3);
					break;
				
				case 28:
					func_350(sParam0, iParam1, iParam3, "TAT_FM_212", "multiplayer_overlays", "017", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(3500) * Global_40001.f_B60)), 3);
					break;
				
				case 61:
					func_350(sParam0, iParam1, iParam3, "TAT_FM_213", "multiplayer_overlays", "009", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(12350) * Global_40001.f_B61)), 1);
					break;
				
				case 62:
					func_350(sParam0, iParam1, iParam3, "TAT_FM_214", "multiplayer_overlays", "011", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1900) * Global_40001.f_B62)), 1);
					break;
				
				case 63:
					func_350(sParam0, iParam1, iParam3, "TAT_FM_215", "multiplayer_overlays", "013", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(4500) * Global_40001.f_B63)), 1);
					break;
				
				case 64:
					func_350(sParam0, iParam1, iParam3, "TAT_FM_216", "multiplayer_overlays", "016", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(12250) * Global_40001.f_B64)), 1);
					break;
				
				case 65:
					func_350(sParam0, iParam1, iParam3, "TAT_FM_217", "multiplayer_overlays", "019", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(12300) * Global_40001.f_B65)), 1);
					break;
				
				case 29:
					func_350(sParam0, iParam1, iParam3, "TAT_FM_218", "multiplayer_overlays", "010", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2500) * Global_40001.f_B66)), 0);
					break;
				
				case 30:
					func_350(sParam0, iParam1, iParam3, "TAT_FM_219", "multiplayer_overlays", "004", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_40001.f_B67)), 0);
					break;
				
				case 31:
					func_350(sParam0, iParam1, iParam3, "TAT_FM_220", "multiplayer_overlays", "012", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_40001.f_B68)), 0);
					break;
				
				case 66:
					func_350(sParam0, iParam1, iParam3, "TAT_FM_221", "multiplayer_overlays", "020", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7500) * Global_40001.f_B69)), 1);
					break;
				
				case 32:
					func_350(sParam0, iParam1, iParam3, "TAT_FM_222", "multiplayer_overlays", "021", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_40001.f_B6A)), 2);
					break;
				
				case 33:
					func_350(sParam0, iParam1, iParam3, "TAT_FM_223", "multiplayer_overlays", "022", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7300) * Global_40001.f_B6B)), 3);
					break;
				
				case 34:
					func_350(sParam0, iParam1, iParam3, "TAT_FM_224", "multiplayer_overlays", "023", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7250) * Global_40001.f_B6C)), 2);
					break;
				
				case 35:
					func_350(sParam0, iParam1, iParam3, "TAT_FM_225", "multiplayer_overlays", "024", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(11900) * Global_40001.f_B6D)), 0);
					break;
				
				case 36:
					func_350(sParam0, iParam1, iParam3, "TAT_FM_226", "multiplayer_overlays", "025", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2750) * Global_40001.f_B6E)), 0);
					break;
				
				case 37:
					func_350(sParam0, iParam1, iParam3, "TAT_FM_227", "multiplayer_overlays", "026", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1750) * Global_40001.f_B6F)), 0);
					break;
				
				case 38:
					func_350(sParam0, iParam1, iParam3, "TAT_FM_228", "multiplayer_overlays", "027", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7300) * Global_40001.f_B70)), 3);
					break;
				
				case 39:
					func_350(sParam0, iParam1, iParam3, "TAT_FM_229", "multiplayer_overlays", "028", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(3250) * Global_40001.f_B71)), 2);
					break;
				
				case 40:
					func_350(sParam0, iParam1, iParam3, "TAT_FM_230", "multiplayer_overlays", "029", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1000) * Global_40001.f_B72)), 0);
					break;
				
				case 67:
					func_350(sParam0, iParam1, iParam3, "TAT_FM_231", "multiplayer_overlays", "030", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_40001.f_B73)), 1);
					break;
				
				case 41:
					func_350(sParam0, iParam1, iParam3, "TAT_FM_232", "multiplayer_overlays", "031", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7500) * Global_40001.f_B74)), 2);
					break;
				
				case 68:
					func_350(sParam0, iParam1, iParam3, "TAT_FM_233", "multiplayer_overlays", "032", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5100) * Global_40001.f_B75)), 1);
					break;
				
				case 42:
					func_350(sParam0, iParam1, iParam3, "TAT_FM_234", "multiplayer_overlays", "033", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5050) * Global_40001.f_B76)), 0);
					break;
				
				case 43:
					func_350(sParam0, iParam1, iParam3, "TAT_FM_235", "multiplayer_overlays", "034", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2450) * Global_40001.f_B77)), 2);
					break;
				
				case 44:
					func_350(sParam0, iParam1, iParam3, "TAT_FM_236", "multiplayer_overlays", "035", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(4950) * Global_40001.f_B78)), 0);
					break;
				
				case 45:
					func_350(sParam0, iParam1, iParam3, "TAT_FM_237", "multiplayer_overlays", "036", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5100) * Global_40001.f_B79)), 0);
					break;
				
				case 46:
					func_350(sParam0, iParam1, iParam3, "TAT_FM_238", "multiplayer_overlays", "037", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(12250) * Global_40001.f_B7A)), 0);
					break;
				
				case 47:
					func_350(sParam0, iParam1, iParam3, "TAT_FM_239", "multiplayer_overlays", "038", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1150) * Global_40001.f_B7B)), 3);
					break;
				
				case 48:
					func_350(sParam0, iParam1, iParam3, "TAT_FM_240", "multiplayer_overlays", "039", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7500) * Global_40001.f_B7C)), 3);
					break;
				
				case 49:
					func_350(sParam0, iParam1, iParam3, "TAT_FM_241", "multiplayer_overlays", "040", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7600) * Global_40001.f_B7D)), 3);
					break;
				
				case 50:
					func_350(sParam0, iParam1, iParam3, "TAT_FM_242", "multiplayer_overlays", "041", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2600) * Global_40001.f_B7E)), 2);
					break;
				
				case 51:
					func_350(sParam0, iParam1, iParam3, "TAT_FM_243", "multiplayer_overlays", "042", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2500) * Global_40001.f_B7F)), 3);
					break;
				
				case 52:
					func_350(sParam0, iParam1, iParam3, "TAT_FM_244", "multiplayer_overlays", "043", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7450) * Global_40001.f_B80)), 3);
					break;
				
				case 53:
					func_350(sParam0, iParam1, iParam3, "TAT_FM_245", "multiplayer_overlays", "044", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7500) * Global_40001.f_B81)), 0);
					break;
				
				case 69:
					func_350(sParam0, iParam1, iParam3, "TAT_FM_246", "multiplayer_overlays", "045", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_40001.f_B82)), 1);
					break;
				
				case 70:
					func_350(sParam0, iParam1, iParam3, "TAT_FM_247", "multiplayer_overlays", "047", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2500) * Global_40001.f_B83)), 2);
					break;
			}
			if (iVar0 == joaat("mp_m_freemode_01"))
			{
				switch (iParam1)
				{
					case 73:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_001", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 74:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_002", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 75:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_003", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 76:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_004", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 77:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_005", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 78:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_006", "torsoDecal", iParam2, 100, 0);
						break;
					
					case joaat("mpsv_lp0_31"):
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_009", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 80:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_013", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 81:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_014", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 82:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_015", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 83:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_016", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 84:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_019", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 85:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_020", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 86:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_036", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 90:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_017", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 91:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_018", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 124:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_046", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 125:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_045", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 87:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_000", "torsoDecal", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(100) * Global_40001.f_B84)), 0);
						break;
					
					case 88:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_001", "torsoDecal", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(100) * Global_40001.f_B85)), 0);
						break;
					
					case 89:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_002", "torsoDecal", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(100) * Global_40001.f_B86)), 0);
						break;
					
					case 93:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 94:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_002", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 95:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_003", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 96:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_004", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 97:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_005", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 98:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_006", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 99:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_007", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 100:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_008", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 101:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_009", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 102:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_010", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 103:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_011", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 104:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_012", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 105:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_013", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 106:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_014", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 107:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_015", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 108:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 109:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 110:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 111:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 112:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 113:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 114:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGInd_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 115:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 116:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 117:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 123:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "mpBeach_overlays", "FM_Hair_Fuzz", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 13:
						func_350(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_A", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_40001.f_B51)), 0);
						break;
					
					case 14:
						func_350(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_B", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_40001.f_B52)), 0);
						break;
					
					case 15:
						func_350(sParam0, iParam1, iParam3, "TAT_FMM_CLB", "multiplayer_overlays", "000_C", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_40001.f_B53)), 2);
						break;
					
					case 16:
						func_350(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_D", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_40001.f_B54)), 0);
						break;
					
					case 71:
						func_350(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_E", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_40001.f_B54)), 0);
						break;
					
					case 72:
						func_350(sParam0, iParam1, iParam3, "TAT_FMM_CLB", "multiplayer_overlays", "000_F", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_40001.f_B54)), 0);
						break;
				}
			}
			else if (iVar0 == joaat("mp_f_freemode_01"))
			{
				switch (iParam1)
				{
					case 73:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_027_f", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 74:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_028_f", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 75:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_034_f", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 76:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_036_f", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 77:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_048", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 78:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_052", "torsoDecal", iParam2, 100, 0);
						break;
					
					case joaat("mpsv_lp0_31"):
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_053", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 80:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_054", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 81:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_055", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 82:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_056", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 83:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_058", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 84:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_067", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 85:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_068", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 92:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_051", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 87:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_000", "torsoDecal", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(100) * Global_40001.f_B84)), 0);
						break;
					
					case 88:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_001", "torsoDecal", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(100) * Global_40001.f_B85)), 0);
						break;
					
					case 89:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_002", "torsoDecal", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(100) * Global_40001.f_B86)), 0);
						break;
					
					case 93:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 94:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_002", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 95:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_003", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 96:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_004", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 97:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_005", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 98:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_006", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 99:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_007", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 100:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_008", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 101:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_009", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 102:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_010", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 103:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_011", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 104:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_012", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 105:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_013", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 106:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_014", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 107:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_015", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 108:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 109:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 110:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 111:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 112:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 113:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 114:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGInd_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 115:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 116:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 117:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 118:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 119:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 120:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 121:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 122:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 123:
						func_350(sParam0, iParam1, iParam3, "NO_LABEL", "mpBeach_overlays", "FM_Hair_Fuzz", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 13:
						func_350(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_A", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_40001.f_B51)), 0);
						break;
					
					case 14:
						func_350(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_B", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_40001.f_B52)), 0);
						break;
					
					case 15:
						func_350(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_C", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_40001.f_B53)), 2);
						break;
					
					case 16:
						func_350(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_D", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_40001.f_B54)), 0);
						break;
					}
			}
			break;
	}
	if ((iParam2 == 3 || iParam2 == 4) && iParam1 >= 129)
	{
		func_349(sParam0, iParam2, iParam1, 129);
	}
	if (iParam4 == 22)
	{
		sParam0->f_7 *= 2;
	}
	return sParam0->f_B != -1;
}

void func_349(char* sParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2F2EC
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

void func_350(char* sParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, int iParam7, int iParam8, int iParam9)//Position - 0x2F37E
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

bool func_351(int iParam0, int iParam1)//Position - 0x2F633
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_352(iParam0, iParam1);
	iVar1 = iParam0;
	return MISC::IS_BIT_SET(iVar0, func_129(iVar1));
}

int func_352(var uParam0, int iParam1)//Position - 0x2F655
{
	int iVar0;
	
	iVar0 = func_18(func_353(uParam0), iParam1, 0);
	return iVar0;
}

int func_353(var uParam0)//Position - 0x2F66E
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_132(iVar0);
	if ((func_22() == 0 || func_251() == 0) || (func_22() == 999 && func_251() == 999))
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

int func_354(int iParam0)//Position - 0x2F7BB
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
			iVar1 = func_18(1743, -1, 0);
			if (iVar0 > 15)
			{
				iVar2 = func_359(iParam0, 11, -1);
				if (iVar2 >= 256)
				{
					iVar3 = func_355(joaat("mp_f_freemode_01"), iVar2, 11, 4);
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
			iVar1 = func_18(1743, -1, 0);
			if (iVar0 > 15)
			{
				iVar4 = func_359(iParam0, 11, -1);
				if (iVar4 >= 256)
				{
					iVar5 = func_355(joaat("mp_f_freemode_01"), iVar4, 11, 4);
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

int func_355(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2F8ED
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
		iVar3 = (iParam1 - func_358(iParam0));
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
		iVar8 = (iParam1 - func_356(iParam0, func_357(iParam2)));
		if (iVar8 < 0)
		{
			return -1;
		}
		iVar9 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 6, -1, 0, -1, func_357(iParam2));
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

int func_356(int iParam0, int iParam1)//Position - 0x2F9E7
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

int func_357(int iParam0)//Position - 0x2FD8E
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

int func_358(int iParam0)//Position - 0x2FE3E
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

int func_359(int iParam0, int iParam1, int iParam2)//Position - 0x2FE9F
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (iParam1 == 12)
		{
			iVar0 = 0;
			while (iVar0 <= 53)
			{
				if (func_365(iParam0, iParam1, iVar0))
				{
					return iVar0;
				}
				iVar0++;
			}
		}
		else if (iParam1 == 13)
		{
			iVar1 = 0;
			while (iVar1 <= 19)
			{
				if (func_365(iParam0, iParam1, iVar1))
				{
					return iVar1;
				}
				iVar1++;
			}
			return 31;
		}
		else if (iParam1 == 14)
		{
			if (iParam2 == -1)
			{
			}
			else
			{
				return func_360(iParam0, iParam2);
			}
		}
		else
		{
			return func_521(iParam0, iParam1);
		}
	}
	return -99;
}

int func_360(int iParam0, int iParam1)//Position - 0x2FF40
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
		return func_364(iParam1);
	}
	iVar1 = PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, iParam1);
	return func_361(iParam0, iVar0, iVar1, iParam1);
}

int func_361(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2FF86
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
		return func_364(iParam3);
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar1 = FILES::GET_HASH_NAME_FOR_PROP(iParam0, iParam3, iParam1, iParam2);
	if (iVar1 != -1 && iVar1 != 0)
	{
		if (iVar0 == joaat("mp_m_freemode_01"))
		{
			return func_363(ENTITY::GET_ENTITY_MODEL(iParam0), iVar1, 14, 3);
		}
		else if (iVar0 == joaat("mp_f_freemode_01"))
		{
			return func_363(ENTITY::GET_ENTITY_MODEL(iParam0), iVar1, 14, 4);
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
					iVar3 = (iVar3 + func_362(iParam0, iParam3));
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
	return func_364(iParam3);
}

int func_362(int iParam0, int iParam1)//Position - 0x30083
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

int func_363(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x301C1
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
					return (func_358(iParam0) + iVar2);
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
		iVar7 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 6, -1, 0, -1, func_357(iParam2));
		iVar5 = 0;
		while (iVar5 < iVar7)
		{
			FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar5, &Var4);
			if (!FILES::IS_CONTENT_ITEM_LOCKED(Var4))
			{
				if (iParam1 == Var4.f_1)
				{
					return (func_356(iParam0, func_357(iParam2)) + iVar6);
				}
				iVar6++;
			}
			iVar5++;
		}
	}
	return -99;
}

int func_364(int iParam0)//Position - 0x302A1
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

int func_365(int iParam0, int iParam1, int iParam2)//Position - 0x30327
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	var uVar9;
	int iVar10;
	var uVar11;
	var uVar12;
	
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	Global_10A0A[1 /*14*/] = { func_381(iVar0, iParam1, iParam2) };
	uVar2 = Global_280004;
	uVar3 = Global_280005;
	if (!MISC::IS_BIT_SET(Global_10A0A[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar8 = { func_377(iVar0, iParam2) };
		iVar7 = 0;
		while (iVar7 < 7)
		{
			switch (iVar7)
			{
				case 0:
					iVar4 = 1;
					break;
				
				case 1:
					iVar4 = 4;
					break;
				
				case 2:
					iVar4 = 6;
					break;
				
				case 3:
					iVar4 = 7;
					break;
				
				case 4:
					iVar4 = 8;
					break;
				
				case 5:
					iVar4 = 11;
					break;
				
				case 6:
					iVar4 = 13;
					break;
			}
			if (uVar8[iVar4] != -99)
			{
				if (!func_365(iParam0, iVar4, uVar8[iVar4]))
				{
					Global_280004 = uVar2;
					Global_280005 = uVar3;
					return 0;
					if (iVar4 == 13)
					{
						uVar9 = { func_374(iVar0, uVar8[iVar4]) };
						iVar5 = 0;
						while (iVar5 <= 8)
						{
							if (!func_365(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_10A0A[2 /*14*/] = { func_381(iVar0, 14, iVar6) };
									if (Global_10A0A[2 /*14*/].f_C == iVar5)
									{
										if (func_365(iParam0, 14, iVar6))
										{
											if (!func_369(iVar0, iParam2, 14, iVar6, &uVar8, &(Global_10A0A[2 /*14*/])))
											{
												Global_280004 = uVar2;
												Global_280005 = uVar3;
												return 0;
											}
										}
									}
									iVar6++;
								}
							}
							iVar5++;
						}
					}
					else
					{
						iVar1 = func_521(iParam0, iVar4);
						Global_10A0A[2 /*14*/] = { func_381(iVar0, iVar4, iVar1) };
						if (!func_369(iVar0, iParam2, iVar4, iVar1, &uVar8, &(Global_10A0A[2 /*14*/])))
						{
							Global_280004 = uVar2;
							Global_280005 = uVar3;
							return 0;
						}
					}
				}
			}
			iVar7++;
		}
		if (uVar8[10] != 0 && uVar8[10] != joaat("0"))
		{
			if (func_18(1743, Global_10A08, 0) != uVar8[10])
			{
				Global_280004 = uVar2;
				Global_280005 = uVar3;
				return 0;
			}
		}
		Global_280004 = uVar2;
		Global_280005 = uVar3;
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar11 = { func_374(iVar0, iParam2) };
		iVar10 = 0;
		while (iVar10 <= 8)
		{
			if (!func_365(iParam0, 14, uVar11[iVar10]))
			{
				return 0;
			}
			iVar10++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (PED::GET_PED_PROP_INDEX(iParam0, Global_10A0A[1 /*14*/].f_C) == Global_10A0A[1 /*14*/].f_3 && (PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, Global_10A0A[1 /*14*/].f_C) == Global_10A0A[1 /*14*/].f_4 || Global_10A0A[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
	}
	else
	{
		if (Global_10A0A[1 /*14*/].f_3 == PED::GET_PED_DRAWABLE_VARIATION(iParam0, func_357(iParam1)) && Global_10A0A[1 /*14*/].f_4 == PED::GET_PED_TEXTURE_VARIATION(iParam0, func_357(iParam1)))
		{
			return 1;
		}
		if (iParam1 == 4)
		{
			if (func_368(iVar0, 11, func_521(iParam0, 11)))
			{
				if (func_367(iVar0, 4, iParam2, &uVar12))
				{
					return func_365(iParam0, 4, uVar12);
				}
			}
			else if (func_366(iVar0, 4, iParam2, &uVar12))
			{
				return func_365(iParam0, 4, uVar12);
			}
		}
	}
	return 0;
}

int func_366(int iParam0, int iParam1, int iParam2, var uParam3)//Position - 0x30698
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						iVar0 = func_355(iParam0, iParam2, iParam1, 4);
						if (iVar0 != -1)
						{
							iVar1 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar0);
							iVar2 = 0;
							while (iVar2 < iVar1)
							{
								FILES::GET_VARIANT_COMPONENT(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
								if (iVar5 == 4)
								{
									if (iVar3 != 0 && iVar3 != joaat("0"))
									{
										if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("DRESS_LEGS"), 0))
										{
											*uParam3 = func_363(iParam0, iVar3, iParam1, 4);
											return 1;
										}
									}
								}
								iVar2++;
							}
						}
					}
					break;
			}
			break;
	}
	return 0;
}

int func_367(int iParam0, int iParam1, int iParam2, var uParam3)//Position - 0x30741
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						iVar0 = func_355(iParam0, iParam2, iParam1, 4);
						if (iVar0 != -1)
						{
							iVar1 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar0);
							iVar2 = 0;
							while (iVar2 < iVar1)
							{
								FILES::GET_VARIANT_COMPONENT(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
								if (iVar5 == 4)
								{
									if (iVar3 != 0 && iVar3 != joaat("0"))
									{
										if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("DRESS_LEGS"), 0))
										{
											*uParam3 = func_363(iParam0, iVar3, iParam1, 4);
											return 1;
										}
									}
								}
								iVar2++;
							}
						}
					}
					break;
			}
			break;
	}
	return 0;
}

int func_368(int iParam0, int iParam1, int iParam2)//Position - 0x307E9
{
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 11:
					if (iParam2 >= 256)
					{
						return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_355(iParam0, iParam2, 11, 4), joaat("DRESS"), 0);
					}
					break;
			}
			break;
	}
	return 0;
}

int func_369(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)//Position - 0x30832
{
	var uVar0;
	int iVar1;
	
	if ((*uParam4)[iParam2] == iParam3)
	{
		return 1;
	}
	if (((*uParam4)[iParam2] == -99 && iParam2 != 14) && iParam2 != 13)
	{
		return 1;
	}
	if (iParam2 == 13 || (iParam2 == 14 && (*uParam4)[13] == 31))
	{
		if ((((((((iParam3 == 0 || iParam3 == 1) || iParam3 == 2) || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 6) || iParam3 == 7) || iParam3 == 8)
		{
			return 1;
		}
	}
	if (iParam3 == -99 || uParam5->f_1 == -1)
	{
		return 1;
	}
	if (iParam2 == 14)
	{
		uVar0 = { func_374(iParam0, (*uParam4)[13]) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			if (uVar0[iVar1] == iParam3)
			{
				return 1;
			}
			iVar1++;
		}
	}
	if (func_373(iParam0, iParam2, iParam3))
	{
		return 1;
	}
	if (iParam0 == joaat("player_zero"))
	{
		if (func_372(iParam0, iParam2, iParam3))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
		else if (func_371(iParam0, iParam2, iParam3))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 0)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
			}
			return 1;
		}
		else if (func_370(iParam0, iParam2, iParam3))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (func_372(iParam0, iParam2, iParam3))
		{
			if ((iParam1 == 3 || iParam1 == 5) || iParam1 == 7)
			{
				return 0;
			}
			return 1;
		}
		else if (func_371(iParam0, iParam2, iParam3))
		{
			if ((((iParam1 == 3 || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				if (iParam2 == 8)
				{
					if (iParam3 == 9)
					{
						if (iParam1 == 8 || iParam1 == 21)
						{
							return 1;
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
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 26)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 5 && iParam3 <= 10)
					{
						return 0;
					}
				}
			}
			else if (iParam2 == 14)
			{
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 26 && iParam3 <= 39)
					{
						return 0;
					}
				}
			}
			return 1;
		}
		else if (func_370(iParam0, iParam2, iParam3))
		{
			if (((((iParam1 == 3 || iParam1 == 3) || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				return 0;
			}
			return 1;
		}
		else if (iParam2 == 14)
		{
			if (iParam3 >= 159 && iParam3 <= 174)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 14 && iParam3 == 0)
			{
				return 1;
			}
		}
		if (func_372(iParam0, iParam2, iParam3))
		{
			if (((((iParam1 == 1 || iParam1 == 2) || iParam1 == 6) || iParam1 == 8) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
		else if (func_371(iParam0, iParam2, iParam3))
		{
			if (((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 15)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
			}
			return 1;
		}
		else if (func_370(iParam0, iParam2, iParam3))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

int func_370(int iParam0, int iParam1, int iParam2)//Position - 0x30E2D
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 == 16)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 == 40 || (iParam2 >= 41 && iParam2 <= 56)) || (iParam2 >= 64 && iParam2 <= 79))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 >= 17 && iParam2 <= 18) || (iParam2 >= 71 && iParam2 <= 86))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return 1;
					}
					else if (iParam2 >= 327)
					{
						return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_355(iParam0, iParam2, 14, 3), joaat("HAT"), 1) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_355(iParam0, iParam2, 14, 3), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_355(iParam0, iParam2, 1, 3), joaat("HAT"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_355(iParam0, iParam2, 1, 3), -1842686353, 0));
					}
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return 1;
					}
					else if (iParam2 >= 327)
					{
						return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_355(iParam0, iParam2, 14, 4), joaat("HAT"), 1) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_355(iParam0, iParam2, 14, 4), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_355(iParam0, iParam2, 1, 4), joaat("HAT"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_355(iParam0, iParam2, 1, 4), -1842686353, 0));
					}
					break;
			}
			break;
	}
	return 0;
}

int func_371(int iParam0, int iParam1, int iParam2)//Position - 0x31050
{
	var uVar0;
	var uVar1;
	
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
					uVar0 = func_355(iParam0, iParam2, 1, 3);
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(uVar0, joaat("HAT"), 0))
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
					uVar1 = func_355(iParam0, iParam2, 1, 4);
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(uVar1, joaat("HAT"), 0))
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

int func_372(int iParam0, int iParam1, int iParam2)//Position - 0x31445
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			if (iParam1 == 14)
			{
				if ((((((((iParam2 == 58 || iParam2 == 61) || (iParam2 >= 62 && iParam2 <= 69)) || (iParam2 >= 70 && iParam2 <= 79)) || (iParam2 >= 80 && iParam2 <= 89)) || iParam2 == 90) || (iParam2 >= 91 && iParam2 <= 102)) || (iParam2 >= 103 && iParam2 <= 110)) || iParam2 == 111)
				{
					return 1;
				}
			}
			break;
		
		case joaat("player_one"):
			if (iParam1 == 14)
			{
				if (((((((((((iParam2 >= 83 && iParam2 <= 92) || iParam2 == 93) || iParam2 == 94) || (iParam2 >= 95 && iParam2 <= 101)) || (iParam2 >= 102 && iParam2 <= 111)) || (iParam2 >= 112 && iParam2 <= 121)) || (iParam2 >= 122 && iParam2 <= 131)) || (iParam2 >= 132 && iParam2 <= 139)) || (iParam2 >= 140 && iParam2 <= 149)) || (iParam2 >= 150 && iParam2 <= 156)) || iParam2 == 157)
				{
					return 1;
				}
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 14)
			{
				if (((((((((iParam2 == 89 || (iParam2 >= 90 && iParam2 <= 99)) || (iParam2 >= 100 && iParam2 <= 109)) || iParam2 == 111) || iParam2 == 112) || (iParam2 >= 113 && iParam2 <= 122)) || (iParam2 >= 123 && iParam2 <= 132)) || (iParam2 >= 133 && iParam2 <= 142)) || (iParam2 >= 143 && iParam2 <= 152)) || iParam2 == 153)
				{
					return 1;
				}
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return 1;
				}
				else if (iParam2 >= 327)
				{
					return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_355(iParam0, iParam2, 14, 3), joaat("GLASSES"), 1);
				}
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return 1;
				}
				else if (iParam2 >= 327)
				{
					return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_355(iParam0, iParam2, 14, 4), joaat("GLASSES"), 1);
				}
			}
			break;
	}
	return 0;
}

int func_373(int iParam0, int iParam1, int iParam2)//Position - 0x31724
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 15)
					{
						return 1;
					}
					break;
				
				case 9:
					if (iParam2 == 6)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 1 || iParam2 == 10)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 4)
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

struct<10> func_374(int iParam0, int iParam1)//Position - 0x317BD
{
	int iVar0;
	struct<10> Var1;
	
	Var1 = 9;
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 31:
					func_376(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_376(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_376(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_376(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_376(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_376(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_376(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_376(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_376(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_376(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_376(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_375(&Var1, iParam0, iParam1, 10);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 31:
					func_376(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_376(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_376(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_376(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_376(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_376(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_376(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_376(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_376(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_376(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_375(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 31:
					func_376(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_376(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_376(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_376(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_376(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_376(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_376(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_376(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_376(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_376(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_375(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_376(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_376(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_376(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_376(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_376(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_376(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_376(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_376(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_376(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_376(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_376(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_376(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_376(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_376(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_376(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 14:
					func_376(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_376(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_376(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_376(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_376(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_376(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_376(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_376(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_376(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_376(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 24:
					func_376(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_375(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_376(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_376(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_376(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_376(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_376(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_376(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_376(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_376(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_376(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_376(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_376(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_376(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_376(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_376(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_376(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8);
					break;
				
				case 14:
					func_376(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_376(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_376(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_376(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_376(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_376(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_376(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_376(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_376(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_376(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_375(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
	}
	return Var1;
}

void func_375(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x320EC
{
	int iVar0;
	struct<4> Var1;
	struct<3> Var2;
	int iVar3;
	
	if (iParam2 != 0 && iParam2 != -99)
	{
		(*iParam0)[0] = 0;
		(*iParam0)[1] = 1;
		(*iParam0)[2] = 2;
		(*iParam0)[3] = 3;
		(*iParam0)[4] = 4;
		(*iParam0)[5] = 5;
		(*iParam0)[6] = 6;
		(*iParam0)[7] = 7;
		(*iParam0)[8] = 8;
		iVar0 = 0;
		if (iParam1 == joaat("player_zero"))
		{
			iVar0 = 0;
		}
		else if (iParam1 == joaat("player_one"))
		{
			iVar0 = 1;
		}
		else if (iParam1 == joaat("player_two"))
		{
			iVar0 = 2;
		}
		else if (iParam1 == joaat("mp_m_freemode_01"))
		{
			iVar0 = 3;
		}
		else if (iParam1 == joaat("mp_f_freemode_01"))
		{
			iVar0 = 4;
		}
		FILES::GET_SHOP_PED_OUTFIT(iParam2, &Var1);
		if (!FILES::IS_CONTENT_ITEM_LOCKED(Var1))
		{
			iVar3 = 0;
			while (iVar3 < Var1.f_3)
			{
				if (FILES::GET_SHOP_PED_OUTFIT_PROP_VARIANT(Var1.f_1, iVar3, &Var2) && Var2.f_2 != -1)
				{
					if ((Var2.x != 0 && Var2.x != -1) && Var2.x != joaat("0"))
					{
						(*iParam0)[Var2.f_2] = func_363(iParam1, Var2.x, 14, iVar0);
					}
					else if (Var2.f_1 != -1)
					{
						(*iParam0)[Var2.f_2] = Var2.f_1;
					}
				}
				iVar3++;
			}
		}
	}
}

void func_376(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x32216
{
	(*iParam0)[0] = iParam1;
	(*iParam0)[1] = iParam2;
	(*iParam0)[2] = iParam3;
	(*iParam0)[3] = iParam4;
	(*iParam0)[4] = iParam5;
	(*iParam0)[5] = iParam6;
	(*iParam0)[6] = iParam7;
	(*iParam0)[7] = iParam8;
	(*iParam0)[8] = iParam9;
}

struct<16> func_377(int iParam0, int iParam1)//Position - 0x3225E
{
	int iVar0;
	struct<16> Var1;
	
	Var1 = 15;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					if (Global_17C49.f_1CAD.f_63.f_3A[120])
					{
						func_380(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					else
					{
						func_380(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					break;
				
				case 1:
					func_380(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
					break;
				
				case 2:
					func_380(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
					break;
				
				case 3:
					func_380(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
					break;
				
				case 4:
					func_380(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
					break;
				
				case 5:
					func_380(&Var1, -99, -99, Global_17C49.f_6C1.f_21B.f_C4[0], Global_17C49.f_6C1.f_21B.f_C8[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
					break;
				
				case 6:
					func_380(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_380(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 8:
					func_380(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_380(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_380(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
					break;
				
				case 11:
					func_380(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_380(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_380(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_380(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
					break;
				
				case 15:
					func_380(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
					break;
				
				case 16:
					func_380(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_380(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_380(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
					break;
				
				case 19:
					func_380(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_380(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_380(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_380(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_380(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_380(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_380(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_380(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_380(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_380(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_380(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_380(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_380(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
					break;
				
				case 32:
					func_380(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_380(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_380(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
					break;
				
				case 35:
					func_380(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_380(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_380(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_380(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_380(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_380(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_380(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_380(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_380(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_380(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_380(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 46:
					func_380(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_380(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 48:
					func_380(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 49:
					func_380(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 50:
					func_380(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
					break;
				
				case 51:
					func_380(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 52:
					func_380(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_378(&Var1, iParam0, iParam1, 53);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					func_380(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_380(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 2:
					func_380(&Var1, -99, -99, Global_17C49.f_6C1.f_21B.f_C4[1], Global_17C49.f_6C1.f_21B.f_C8[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
					break;
				
				case 3:
					func_380(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
					break;
				
				case 4:
					func_380(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
					break;
				
				case 5:
					func_380(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 6:
					func_380(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_380(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
					break;
				
				case 8:
					func_380(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
					break;
				
				case 9:
					func_380(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_380(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_380(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 12:
					func_380(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_380(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_380(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_380(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_380(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_380(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_380(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
					break;
				
				case 19:
					func_380(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_380(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_380(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
					break;
				
				case 22:
					func_380(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
					break;
				
				case 23:
					func_380(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
					break;
				
				case 24:
					func_380(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
					break;
				
				case 25:
					func_380(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
					break;
				
				case 26:
					func_380(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
					break;
				
				case 27:
					func_380(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
					break;
				
				case 28:
					func_380(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
					break;
				
				case 29:
					func_380(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
					break;
				
				case 30:
					func_380(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
					break;
				
				case 31:
					func_380(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
					break;
				
				case 32:
					func_380(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
					break;
				
				case 33:
					func_380(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
					break;
				
				case 34:
					func_380(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
					break;
				
				case 35:
					func_380(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
					break;
				
				case 36:
					func_380(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
					break;
				
				case 37:
					func_380(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
					break;
				
				case 38:
					func_380(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_380(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_380(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_380(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_380(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_380(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
					break;
				
				case 44:
					func_380(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 45:
					func_380(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
					break;
				
				case 46:
					func_380(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
					break;
				
				default:
					func_378(&Var1, iParam0, iParam1, 47);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					func_380(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_380(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
					break;
				
				case 2:
					func_380(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
					break;
				
				case 3:
					func_380(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
					break;
				
				case 4:
					func_380(&Var1, -99, -99, Global_17C49.f_6C1.f_21B.f_C4[2], Global_17C49.f_6C1.f_21B.f_C8[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 5:
					func_380(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
					break;
				
				case 6:
					func_380(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
					break;
				
				case 7:
					func_380(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
					break;
				
				case 8:
					func_380(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_380(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_380(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_380(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_380(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_380(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_380(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_380(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_380(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_380(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_380(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 19:
					func_380(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_380(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_380(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_380(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_380(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_380(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_380(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_380(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_380(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_380(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_380(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_380(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_380(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 32:
					func_380(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_380(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_380(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 35:
					func_380(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_380(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_380(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_380(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_380(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_380(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_380(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_380(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_380(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_380(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_380(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 46:
					func_380(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_380(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_378(&Var1, iParam0, iParam1, 48);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_380(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31);
					break;
				
				case 1:
					func_380(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
					break;
				
				case 2:
					func_380(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
					break;
				
				case 3:
					func_380(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
					break;
				
				case 4:
					func_380(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
					break;
				
				case 5:
					func_380(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
					break;
				
				case 6:
					func_380(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
					break;
				
				case 7:
					func_380(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
					break;
				
				case 8:
					func_380(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
					break;
				
				case 9:
					func_380(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
					break;
				
				case 10:
					func_380(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
					break;
				
				case 11:
					func_380(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
					break;
				
				case 12:
					func_380(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
					break;
				
				case 13:
					func_380(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
					break;
				
				case 14:
					func_380(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
					break;
				
				case 15:
					func_380(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
					break;
				
				case 16:
					func_380(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
					break;
				
				case 17:
					func_380(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
					break;
				
				case 18:
					func_380(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
					break;
				
				case 19:
					func_380(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
					break;
				
				case 20:
					func_380(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
					break;
				
				case 21:
					func_380(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
					break;
				
				case 22:
					func_380(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
					break;
				
				case 23:
					func_380(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
					break;
				
				case 24:
					func_380(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
					break;
				
				case 25:
					func_380(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
					break;
				
				default:
					func_378(&Var1, iParam0, iParam1, 26);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_380(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31);
					break;
				
				case 1:
					func_380(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
					break;
				
				case 2:
					func_380(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0);
					break;
				
				case 3:
					func_380(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
					break;
				
				case 4:
					func_380(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
					break;
				
				case 5:
					func_380(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
					break;
				
				case 6:
					func_380(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
					break;
				
				case 7:
					func_380(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
					break;
				
				case 8:
					func_380(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
					break;
				
				case 9:
					func_380(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
					break;
				
				case 10:
					func_380(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
					break;
				
				case 11:
					func_380(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
					break;
				
				case 12:
					func_380(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
					break;
				
				case 13:
					func_380(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31);
					break;
				
				case 14:
					func_380(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
					break;
				
				case 15:
					func_380(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
					break;
				
				case 16:
					func_380(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
					break;
				
				case 17:
					func_380(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
					break;
				
				case 18:
					func_380(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
					break;
				
				case 19:
					func_380(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
					break;
				
				case 20:
					func_380(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
					break;
				
				case 21:
					func_380(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
					break;
				
				case 22:
					func_380(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
					break;
				
				case 23:
					func_380(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
					break;
				
				case 24:
					func_380(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
					break;
				
				case 25:
					func_380(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
					break;
				
				case 26:
					func_380(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
					break;
				
				case 27:
					func_380(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
					break;
				
				default:
					func_378(&Var1, iParam0, iParam1, 28);
					break;
			}
			break;
	}
	return Var1;
}

void func_378(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x340A2
{
	int iVar0;
	struct<5> Var1;
	struct<3> Var2;
	int iVar3;
	
	(*iParam0)[0] = 0;
	(*iParam0)[2] = -99;
	(*iParam0)[3] = 0;
	(*iParam0)[4] = 0;
	(*iParam0)[6] = 0;
	(*iParam0)[5] = 0;
	(*iParam0)[8] = 0;
	(*iParam0)[9] = 0;
	(*iParam0)[10] = 0;
	(*iParam0)[1] = 0;
	(*iParam0)[7] = 0;
	(*iParam0)[11] = 0;
	(*iParam0)[13] = -99;
	(*iParam0)[14] = -99;
	iVar0 = 0;
	if (iParam1 == joaat("player_zero"))
	{
		iVar0 = 0;
		(*iParam0)[13] = (10 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("player_one"))
	{
		iVar0 = 1;
		(*iParam0)[13] = (9 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("player_two"))
	{
		iVar0 = 2;
		(*iParam0)[13] = (9 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("mp_m_freemode_01"))
	{
		iVar0 = 3;
	}
	else if (iParam1 == joaat("mp_f_freemode_01"))
	{
		iVar0 = 4;
	}
	FILES::SETUP_SHOP_PED_OUTFIT_QUERY(iVar0, 0);
	FILES::GET_SHOP_PED_QUERY_OUTFIT((iParam2 - iParam3), &Var1);
	if (!FILES::IS_CONTENT_ITEM_LOCKED(Var1))
	{
		iVar3 = 0;
		while (iVar3 < Var1.f_4)
		{
			if (FILES::GET_SHOP_PED_OUTFIT_COMPONENT_VARIANT(Var1.f_1, iVar3, &Var2))
			{
				if ((Var2.x != 0 && Var2.x != -1) && Var2.x != joaat("0"))
				{
					if (Var2.f_2 == 10)
					{
						(*iParam0)[func_379(Var2.f_2)] = Var2.x;
					}
					else
					{
						(*iParam0)[func_379(Var2.f_2)] = func_363(iParam1, Var2.x, func_379(Var2.f_2), iVar0);
					}
				}
				else if (Var2.f_1 != -1)
				{
					(*iParam0)[func_379(Var2.f_2)] = Var2.f_1;
				}
			}
			iVar3++;
		}
		if (Var1.f_3 == 0)
		{
			(*iParam0)[13] = -99;
		}
		else
		{
			(*iParam0)[13] = Var1.f_1;
		}
	}
}

int func_379(int iParam0)//Position - 0x34253
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

void func_380(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x34303
{
	(*iParam0)[0] = iParam1;
	(*iParam0)[2] = iParam2;
	(*iParam0)[3] = iParam3;
	(*iParam0)[4] = iParam4;
	(*iParam0)[6] = iParam5;
	(*iParam0)[5] = iParam6;
	(*iParam0)[8] = iParam7;
	(*iParam0)[9] = iParam8;
	(*iParam0)[10] = iParam9;
	(*iParam0)[1] = iParam10;
	(*iParam0)[7] = iParam11;
	(*iParam0)[11] = iParam12;
	(*iParam0)[13] = iParam13;
	(*iParam0)[14] = -99;
}

struct<14> func_381(int iParam0, int iParam1, int iParam2)//Position - 0x34374
{
	func_426();
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		func_410(iParam1, iParam2);
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		func_382(iParam1, iParam2);
	}
	return Global_10A0A[0 /*14*/];
}

void func_382(int iParam0, int iParam1)//Position - 0x343B1
{
	switch (iParam0)
	{
		case 2:
			func_409(iParam1);
			break;
		
		case 11:
			func_408(iParam1);
			break;
		
		case 8:
			func_404(iParam1);
			break;
		
		case 9:
			func_403(iParam1);
			break;
		
		case 3:
			func_402(iParam1);
			break;
		
		case 4:
			func_401(iParam1);
			break;
		
		case 6:
			func_400(iParam1);
			break;
		
		case 1:
			func_399(iParam1);
			break;
		
		case 7:
			func_398(iParam1);
			break;
		
		case 10:
			func_397(iParam1);
			break;
		
		case 14:
			func_396(iParam1);
			break;
		
		case 12:
			func_395(iParam1);
			break;
		
		case 5:
			func_394(iParam1);
			break;
		
		case 0:
			func_392(iParam1);
			break;
		
		case 13:
			func_383(iParam1);
			break;
	}
}

void func_383(int iParam0)//Position - 0x344A1
{
	bool bVar0;
	int iVar1;
	char* sVar2;
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
	switch (iParam0)
	{
		case 31:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 2:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 3:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 4:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 5:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 6:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 9:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 10:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 11:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 12:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 13:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 14:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 15:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 16:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 17:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 18:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 19:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 20:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 21:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 22:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 23:
			iVar3 = 0;
			iVar4 = 0;
			break;
	}
	func_384(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &sVar2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_384(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x3465C
{
	int iVar0;
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
	uParam0->f_C = func_391(iParam8);
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
			if (!func_389(Global_280004, 1, 1, 1, -1))
			{
				MISC::CLEAR_BIT(&(uParam0->f_6), 2);
			}
			if (!func_389(Global_280004, 2, 1, 1, -1))
			{
				MISC::SET_BIT(&(uParam0->f_6), 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_389(Global_280004, 1, 1, 1, -1))
			{
				MISC::CLEAR_BIT(&(uParam0->f_6), 2);
			}
			if (!func_389(Global_280004, 2, 1, 1, -1))
			{
				MISC::SET_BIT(&(uParam0->f_6), 4);
			}
		}
		else
		{
			if (!func_389(Global_280004, 1, 1, 1, -1))
			{
				MISC::CLEAR_BIT(&(uParam0->f_6), 2);
			}
			if (!func_389(Global_280004, 2, 1, 1, -1))
			{
				MISC::SET_BIT(&(uParam0->f_6), 4);
			}
		}
	}
	else if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
	{
		MISC::SET_BIT(&(uParam0->f_6), 0);
		MISC::SET_BIT(&(uParam0->f_6), 5);
		if (func_388(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0))
		{
			MISC::SET_BIT(&(uParam0->f_6), 1);
		}
		if (func_388(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0))
		{
			MISC::SET_BIT(&(uParam0->f_6), 2);
		}
		if (!func_388(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0))
		{
			MISC::SET_BIT(&(uParam0->f_6), 4);
		}
	}
	else
	{
		MISC::SET_BIT(&(uParam0->f_6), 0);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			if (!func_149(14))
			{
				iVar0 = func_18(func_387(iParam1, uParam0->f_2), Global_10A08, 0);
				if (MISC::IS_BIT_SET(iVar0, uParam0->f_1))
				{
					MISC::SET_BIT(&(uParam0->f_6), 1);
				}
				iVar0 = func_18(func_386(iParam1, uParam0->f_2), Global_10A08, 0);
				if (MISC::IS_BIT_SET(iVar0, uParam0->f_1))
				{
					MISC::SET_BIT(&(uParam0->f_6), 2);
				}
				if (func_385(iParam1, uParam0->f_2, &iVar1))
				{
					iVar0 = func_18(iVar1, Global_10A08, 0);
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

bool func_385(int iParam0, int iParam1, var uParam2)//Position - 0x349DF
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

int func_386(int iParam0, int iParam1)//Position - 0x34DE4
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

int func_387(int iParam0, int iParam1)//Position - 0x351DF
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

int func_388(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x355DA
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

int func_389(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)//Position - 0x364F8
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_10A08;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_390(uParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		iVar3 = func_18(iVar2, iVar0, 0);
		return MISC::IS_BIT_SET(iVar3, iVar1);
	}
	return 0;
}

bool func_390(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0x3653A
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

int func_391(int iParam0)//Position - 0x36BDB
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

void func_392(int iParam0)//Position - 0x36CAF
{
	int iVar0;
	
	iVar0 = 0;
	Global_10A0A[0 /*14*/].f_5 = 4;
	func_393(iVar0, iParam0, 0);
}

void func_393(int iParam0, int iParam1, int iParam2)//Position - 0x36CCD
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
					func_384(&(Global_10A0A[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
					return;
				}
				iVar4++;
			}
			iVar3++;
		}
	}
	else if (iParam0 == 13)
	{
		func_384(&(Global_10A0A[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
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
					func_384(&(Global_10A0A[0 /*14*/]), iParam0, iParam1, &(Var6.f_9), Var6.f_3, Var6.f_4, Var6.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var6.f_1, joaat("OUTFIT_ONLY"), 0), iVar7, 2, Var6.f_1 != 0);
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
		iVar14 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iVar1, 6, -1, 0, -1, func_357(iParam0));
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
					func_384(&(Global_10A0A[0 /*14*/]), iParam0, iParam1, &(Var11.f_9), Var11.f_3, Var11.f_4, Var11.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var11.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, Var11.f_1 != 0);
					return;
				}
				iVar13++;
			}
			iVar12++;
		}
	}
}

void func_394(int iParam0)//Position - 0x36F48
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
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 6:
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 7:
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 8:
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		default:
			Global_10A0A[0 /*14*/].f_5 = 4;
			func_393(iVar7, iParam0, 9);
			return;
			break;
	}
	StringCopy(&Var2, "HA_FMF_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	func_384(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_395(int iParam0)//Position - 0x37049
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
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_S1", 16);
			break;
		
		case 2:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_S2", 16);
			break;
		
		case 3:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_S3", 16);
			break;
		
		case 4:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_S4", 16);
			break;
		
		case 5:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_S5", 16);
			break;
		
		case 6:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_S6", 16);
			break;
		
		case 7:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_S7", 16);
			break;
		
		case 8:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_S8", 16);
			break;
		
		case 9:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P1", 16);
			break;
		
		case 10:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P2", 16);
			break;
		
		case 11:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P3", 16);
			break;
		
		case 12:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P4", 16);
			break;
		
		case 13:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P5", 16);
			break;
		
		case 14:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P6", 16);
			break;
		
		case 15:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P7", 16);
			break;
		
		case 16:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P8", 16);
			break;
		
		case 17:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P9", 16);
			break;
		
		case 18:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P10", 16);
			break;
		
		case 19:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B1", 16);
			break;
		
		case 20:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B2", 16);
			break;
		
		case 21:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B3", 16);
			break;
		
		case 22:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B4", 16);
			break;
		
		case 23:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B5", 16);
			break;
		
		case 24:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B6", 16);
			break;
		
		case 25:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B7", 16);
			break;
		
		case 26:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B8", 16);
			break;
		
		case 27:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B9", 16);
			break;
		
		default:
			Global_10A0A[0 /*14*/].f_5 = 4;
			func_393(iVar7, iParam0, 28);
			return;
			break;
	}
	func_384(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_396(int iParam0)//Position - 0x37326
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
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
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 14;
	iVar8 = 0;
	switch (iParam0)
	{
		case 0:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			break;
		
		case 1:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			break;
		
		case 2:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 2;
			break;
		
		case 3:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 3;
			break;
		
		case 4:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 4;
			break;
		
		case 5:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 5;
			break;
		
		case 6:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			break;
		
		case 7:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 7;
			break;
		
		case 8:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 8;
			break;
		
		case 10:
			StringCopy(&Var2, "HT_FMF_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 65;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "HT_FMF_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 65;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 12:
			StringCopy(&Var2, "HT_FMF_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 85;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 13:
			StringCopy(&Var2, "HT_FMF_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 75;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 14:
			StringCopy(&Var2, "HT_FMF_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 235;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 15:
			StringCopy(&Var2, "HT_FMF_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 80;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 16:
			StringCopy(&Var2, "HT_FMF_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 85;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 17:
			StringCopy(&Var2, "HT_FMF_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 90;
			iVar5 = 0;
			iVar8 = 1;
			break;
	}
	switch (iParam0)
	{
		case 18:
			StringCopy(&Var2, "HT_FMF_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "HT_FMF_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "HT_FMF_2_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 5000;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 21:
			StringCopy(&Var2, "HT_FMF_2_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "HT_FMF_2_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "HT_FMF_2_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 24:
			StringCopy(&Var2, "HT_FMF_2_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "HT_FMF_2_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 26:
			StringCopy(&Var2, "HT_FMF_2_7", 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 27:
			StringCopy(&Var2, "HT_FMF_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 28:
			StringCopy(&Var2, "HT_FMF_3_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 29:
			StringCopy(&Var2, "HT_FMF_3_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 30:
			StringCopy(&Var2, "HT_FMF_3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "HT_FMF_3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "HT_FMF_3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "HT_FMF_3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "HT_FMF_3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 120;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 35:
			StringCopy(&Var2, "HT_FMF_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 400;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 36:
			StringCopy(&Var2, "HT_FMF_4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 65;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 37:
			StringCopy(&Var2, "HT_FMF_4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 375;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 38:
			StringCopy(&Var2, "HT_FMF_4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 75;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 39:
			StringCopy(&Var2, "HT_FMF_4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 65;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 40:
			StringCopy(&Var2, "HT_FMF_4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 65;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 41:
			StringCopy(&Var2, "HT_FMF_4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 85;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 42:
			StringCopy(&Var2, "HT_FMF_4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 325;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 43:
			StringCopy(&Var2, "HT_FMF_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 35;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 44:
			StringCopy(&Var2, "HT_FMF_5_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 30;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "HT_FMF_5_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 35;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 46:
			StringCopy(&Var2, "HT_FMF_5_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 40;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 47:
			StringCopy(&Var2, "HT_FMF_5_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 35;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 48:
			StringCopy(&Var2, "HT_FMF_5_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 30;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 49:
			StringCopy(&Var2, "HT_FMF_5_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 35;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 50:
			StringCopy(&Var2, "HT_FMF_5_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 255;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 51:
			StringCopy(&Var2, "HT_FMF_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 360;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 52:
			StringCopy(&Var2, "HT_FMF_6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 195;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 53:
			StringCopy(&Var2, "HT_FMF_6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 3970;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 54:
			StringCopy(&Var2, "HT_FMF_6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 135;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 55:
			StringCopy(&Var2, "HT_FMF_6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 1355;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 56:
			StringCopy(&Var2, "HT_FMF_6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 110;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 57:
			StringCopy(&Var2, "HT_FMF_6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 140;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 58:
			StringCopy(&Var2, "HT_FMF_6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 130;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 59:
			StringCopy(&Var2, "HT_FMF_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 230;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 60:
			StringCopy(&Var2, "HT_FMF_7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 195;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 61:
			StringCopy(&Var2, "HT_FMF_7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 515;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 62:
			StringCopy(&Var2, "HT_FMF_7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 545;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 63:
			StringCopy(&Var2, "HT_FMF_7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 195;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 64:
			StringCopy(&Var2, "HT_FMF_7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 155;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 65:
			StringCopy(&Var2, "HT_FMF_7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 155;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 66:
			StringCopy(&Var2, "HT_FMF_7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 1440;
			iVar5 = 0;
			iVar8 = 1;
			break;
	}
	switch (iParam0)
	{
		case 67:
			StringCopy(&Var2, "HT_FMF_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "HT_FMF_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "HT_FMF_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "HT_FMF_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "HT_FMF_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "HT_FMF_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 73:
			StringCopy(&Var2, "HT_FMF_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 74:
			StringCopy(&Var2, "HT_FMF_8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 75:
			StringCopy(&Var2, "HT_FMF_9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 35;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 76:
			StringCopy(&Var2, "HT_FMF_9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 25;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 77:
			StringCopy(&Var2, "HT_FMF_9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 30;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 78:
			StringCopy(&Var2, "HT_FMF_9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 25;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "HT_FMF_9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 50;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 80:
			StringCopy(&Var2, "HT_FMF_9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 40;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 81:
			StringCopy(&Var2, "HT_FMF_9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 575;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 82:
			StringCopy(&Var2, "HT_FMF_9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 605;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 83:
			StringCopy(&Var2, "HT_FMF_10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 84:
			StringCopy(&Var2, "HT_FMF_10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 85:
			StringCopy(&Var2, "HT_FMF_10_2", 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 86:
			StringCopy(&Var2, "HT_FMF_10_3", 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 87:
			StringCopy(&Var2, "HT_FMF_10_4", 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 88:
			StringCopy(&Var2, "HT_FMF_10_5", 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 89:
			StringCopy(&Var2, "HT_FMF_10_6", 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "HT_FMF_10_7", 16);
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 285;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 91:
			StringCopy(&Var2, "HT_FMF_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "HT_FMF_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 2125;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 93:
			StringCopy(&Var2, "HT_FMF_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "HT_FMF_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "HT_FMF_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 96:
			StringCopy(&Var2, "HT_FMF_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 97:
			StringCopy(&Var2, "HT_FMF_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "HT_FMF_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 99:
			StringCopy(&Var2, "HT_FMF_12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 75;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 100:
			StringCopy(&Var2, "HT_FMF_12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 101:
			StringCopy(&Var2, "HT_FMF_12_2", 16);
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 102:
			StringCopy(&Var2, "HT_FMF_12_3", 16);
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 103:
			StringCopy(&Var2, "HT_FMF_12_4", 16);
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 104:
			StringCopy(&Var2, "HT_FMF_12_5", 16);
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 105:
			StringCopy(&Var2, "HT_FMF_12_6", 16);
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 75;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 106:
			StringCopy(&Var2, "HT_FMF_12_7", 16);
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 295;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 107:
			StringCopy(&Var2, "HT_FMF_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 195;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 108:
			StringCopy(&Var2, "HT_FMF_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 200;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 109:
			StringCopy(&Var2, "HT_FMF_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 160;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 110:
			StringCopy(&Var2, "HT_FMF_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 855;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 111:
			StringCopy(&Var2, "HT_FMF_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 1615;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 112:
			StringCopy(&Var2, "HT_FMF_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 1130;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 113:
			StringCopy(&Var2, "HT_FMF_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 165;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 114:
			StringCopy(&Var2, "HT_FMF_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 215;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 115:
			StringCopy(&Var2, "HT_FMF_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 145;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 116:
			StringCopy(&Var2, "HT_FMF_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 250;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 117:
			StringCopy(&Var2, "HT_FMF_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 110;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 118:
			StringCopy(&Var2, "HT_FMF_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 145;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 119:
			StringCopy(&Var2, "HT_FMF_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 105;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 120:
			StringCopy(&Var2, "HT_FMF_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 105;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 121:
			StringCopy(&Var2, "HT_FMF_14_6", 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 115;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 122:
			StringCopy(&Var2, "HT_FMF_14_7", 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 115;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 123:
			StringCopy(&Var2, "HT_FMF_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 390;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 124:
			StringCopy(&Var2, "HT_FMF_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 395;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 125:
			StringCopy(&Var2, "HT_FMF_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 595;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 126:
			StringCopy(&Var2, "HT_FMF_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 425;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 127:
			StringCopy(&Var2, "HT_FMF_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 600;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 128:
			StringCopy(&Var2, "HT_FMF_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 590;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 129:
			StringCopy(&Var2, "HT_FMF_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 595;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 130:
			StringCopy(&Var2, "HT_FMF_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 555;
			iVar5 = 0;
			iVar8 = 1;
			break;
	}
	switch (iParam0)
	{
		case 131:
			StringCopy(&Var2, "HE_FMF_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 1060;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 132:
			StringCopy(&Var2, "HE_FMF_16_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 1400;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 133:
			StringCopy(&Var2, "HE_FMF_16_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 1315;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 134:
			StringCopy(&Var2, "HE_FMF_16_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 1230;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 135:
			StringCopy(&Var2, "HE_FMF_16_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 1145;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 136:
			StringCopy(&Var2, "HE_FMF_16_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 8450;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 137:
			StringCopy(&Var2, "HE_FMF_16_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 675;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 138:
			StringCopy(&Var2, "HE_FMF_16_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 8750;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 139:
			StringCopy(&Var2, "HE_FMF_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 975;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 140:
			StringCopy(&Var2, "HE_FMF_17_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar1 = 750;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 141:
			StringCopy(&Var2, "HE_FMF_17_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			iVar1 = 865;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 142:
			StringCopy(&Var2, "HE_FMF_17_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 890;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 143:
			StringCopy(&Var2, "HE_FMF_17_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 730;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 144:
			StringCopy(&Var2, "HE_FMF_17_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 650;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 145:
			StringCopy(&Var2, "HE_FMF_17_6", 16);
			iVar3 = 17;
			iVar4 = 6;
			iVar1 = 645;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 146:
			StringCopy(&Var2, "HE_FMF_17_7", 16);
			iVar3 = 17;
			iVar4 = 7;
			iVar1 = 755;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 147:
			StringCopy(&Var2, "HE_FMF_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 13850;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 148:
			StringCopy(&Var2, "HE_FMF_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 2900;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 149:
			StringCopy(&Var2, "HE_FMF_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 2895;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 150:
			StringCopy(&Var2, "HE_FMF_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 12500;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 151:
			StringCopy(&Var2, "HE_FMF_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 15000;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 152:
			StringCopy(&Var2, "HE_FMF_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 14750;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 153:
			StringCopy(&Var2, "HE_FMF_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 13150;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 154:
			StringCopy(&Var2, "HE_FMF_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 2925;
			iVar5 = 0;
			iVar8 = 2;
			break;
	}
	switch (iParam0)
	{
		case 155:
			StringCopy(&Var2, "G_FMF_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 65;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 156:
			StringCopy(&Var2, "G_FMF_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 65;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 157:
			StringCopy(&Var2, "G_FMF_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 85;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 158:
			StringCopy(&Var2, "G_FMF_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 75;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 159:
			StringCopy(&Var2, "G_FMF_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 85;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 160:
			StringCopy(&Var2, "G_FMF_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 80;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 161:
			StringCopy(&Var2, "G_FMF_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 85;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 162:
			StringCopy(&Var2, "G_FMF_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 90;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 163:
			StringCopy(&Var2, "G_FMF_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 50;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 164:
			StringCopy(&Var2, "G_FMF_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 50;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 165:
			StringCopy(&Var2, "G_FMF_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 50;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 166:
			StringCopy(&Var2, "G_FMF_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 160;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 167:
			StringCopy(&Var2, "G_FMF_1_1", 16);
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 165;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 168:
			StringCopy(&Var2, "G_FMF_1_2", 16);
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 170;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 169:
			StringCopy(&Var2, "G_FMF_1_3", 16);
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 135;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 170:
			StringCopy(&Var2, "G_FMF_1_4", 16);
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 120;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 171:
			StringCopy(&Var2, "G_FMF_1_5", 16);
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 110;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 172:
			StringCopy(&Var2, "G_FMF_1_6", 16);
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 140;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 173:
			StringCopy(&Var2, "G_FMF_1_7", 16);
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 130;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 174:
			StringCopy(&Var2, "G_FMF_1_8", 16);
			iVar3 = 1;
			iVar4 = 8;
			iVar1 = 50;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 175:
			StringCopy(&Var2, "G_FMF_1_9", 16);
			iVar3 = 1;
			iVar4 = 9;
			iVar1 = 50;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 176:
			StringCopy(&Var2, "G_FMF_1_10", 16);
			iVar3 = 1;
			iVar4 = 10;
			iVar1 = 50;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 177:
			StringCopy(&Var2, "G_FMF_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 180;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 178:
			StringCopy(&Var2, "G_FMF_2_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 110;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 179:
			StringCopy(&Var2, "G_FMF_2_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 115;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 180:
			StringCopy(&Var2, "G_FMF_2_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 120;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 181:
			StringCopy(&Var2, "G_FMF_2_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 595;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 182:
			StringCopy(&Var2, "G_FMF_2_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 160;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 183:
			StringCopy(&Var2, "G_FMF_2_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 545;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 184:
			StringCopy(&Var2, "G_FMF_2_7", 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 590;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 185:
			StringCopy(&Var2, "G_FMF_2_8", 16);
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 50;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 186:
			StringCopy(&Var2, "G_FMF_2_9", 16);
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 50;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 187:
			StringCopy(&Var2, "G_FMF_2_10", 16);
			iVar3 = 2;
			iVar4 = 10;
			iVar1 = 50;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 188:
			StringCopy(&Var2, "G_FMF_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 6250;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 189:
			StringCopy(&Var2, "G_FMF_3_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 4065;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 190:
			StringCopy(&Var2, "G_FMF_3_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 3585;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 191:
			StringCopy(&Var2, "G_FMF_3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 4075;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 192:
			StringCopy(&Var2, "G_FMF_3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 4935;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 193:
			StringCopy(&Var2, "G_FMF_3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 130;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "G_FMF_3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 5600;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 195:
			StringCopy(&Var2, "G_FMF_3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 4790;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 196:
			StringCopy(&Var2, "G_FMF_3_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 50;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 197:
			StringCopy(&Var2, "G_FMF_3_9", 16);
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 50;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 198:
			StringCopy(&Var2, "G_FMF_3_10", 16);
			iVar3 = 3;
			iVar4 = 10;
			iVar1 = 50;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 199:
			StringCopy(&Var2, "G_FMF_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 2245;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 200:
			StringCopy(&Var2, "G_FMF_4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 250;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 201:
			StringCopy(&Var2, "G_FMF_4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 210;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 202:
			StringCopy(&Var2, "G_FMF_4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 245;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 203:
			StringCopy(&Var2, "G_FMF_4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 1205;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 204:
			StringCopy(&Var2, "G_FMF_4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 205;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 205:
			StringCopy(&Var2, "G_FMF_4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 2215;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 206:
			StringCopy(&Var2, "G_FMF_4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 215;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 207:
			StringCopy(&Var2, "G_FMF_4_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 50;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 208:
			StringCopy(&Var2, "G_FMF_4_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 50;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 209:
			StringCopy(&Var2, "G_FMF_4_10", 16);
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 50;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 210:
			StringCopy(&Var2, "G_FMF_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 211:
			StringCopy(&Var2, "G_FMF_5_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 212:
			StringCopy(&Var2, "G_FMF_5_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 213:
			StringCopy(&Var2, "G_FMF_5_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 214:
			StringCopy(&Var2, "G_FMF_5_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 215:
			StringCopy(&Var2, "G_FMF_5_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 216:
			StringCopy(&Var2, "G_FMF_5_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 217:
			StringCopy(&Var2, "G_FMF_5_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 218:
			StringCopy(&Var2, "G_FMF_5_8", 16);
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 50;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 219:
			StringCopy(&Var2, "G_FMF_5_9", 16);
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 50;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 220:
			StringCopy(&Var2, "G_FMF_5_10", 16);
			iVar3 = 5;
			iVar4 = 10;
			iVar1 = 50;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 221:
			StringCopy(&Var2, "G_FMF_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 5000;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 222:
			StringCopy(&Var2, "G_FMF_6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 223:
			StringCopy(&Var2, "G_FMF_6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 224:
			StringCopy(&Var2, "G_FMF_6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 225:
			StringCopy(&Var2, "G_FMF_6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 226:
			StringCopy(&Var2, "G_FMF_6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 227:
			StringCopy(&Var2, "G_FMF_6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 228:
			StringCopy(&Var2, "G_FMF_6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 229:
			StringCopy(&Var2, "G_FMF_6_8", 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 50;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 230:
			StringCopy(&Var2, "G_FMF_6_9", 16);
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 50;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 231:
			StringCopy(&Var2, "G_FMF_6_10", 16);
			iVar3 = 6;
			iVar4 = 10;
			iVar1 = 50;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 232:
			StringCopy(&Var2, "G_FMF_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 4815;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 233:
			StringCopy(&Var2, "G_FMF_7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 4795;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 234:
			StringCopy(&Var2, "G_FMF_7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 4305;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 235:
			StringCopy(&Var2, "G_FMF_7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 4305;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 236:
			StringCopy(&Var2, "G_FMF_7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 4965;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 237:
			StringCopy(&Var2, "G_FMF_7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 480;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 238:
			StringCopy(&Var2, "G_FMF_7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 465;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 239:
			StringCopy(&Var2, "G_FMF_7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 4320;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 240:
			StringCopy(&Var2, "G_FMF_7_8", 16);
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 50;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 241:
			StringCopy(&Var2, "G_FMF_7_9", 16);
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 50;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 242:
			StringCopy(&Var2, "G_FMF_7_10", 16);
			iVar3 = 7;
			iVar4 = 10;
			iVar1 = 50;
			iVar5 = 1;
			iVar8 = 3;
			break;
	}
	switch (iParam0)
	{
		case 243:
			StringCopy(&Var2, "G_FMF_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 500;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 244:
			StringCopy(&Var2, "G_FMF_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 245:
			StringCopy(&Var2, "G_FMF_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 246:
			StringCopy(&Var2, "G_FMF_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 247:
			StringCopy(&Var2, "G_FMF_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 248:
			StringCopy(&Var2, "G_FMF_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 249:
			StringCopy(&Var2, "G_FMF_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 250:
			StringCopy(&Var2, "G_FMF_8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 251:
			StringCopy(&Var2, "G_FMF_8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 50;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 252:
			StringCopy(&Var2, "G_FMF_8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 50;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 253:
			StringCopy(&Var2, "G_FMF_8_10", 16);
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 50;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 254:
			StringCopy(&Var2, "G_FMF_9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 70;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 255:
			StringCopy(&Var2, "G_FMF_9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 60;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 256:
			StringCopy(&Var2, "G_FMF_9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 65;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 257:
			StringCopy(&Var2, "G_FMF_9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 570;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 258:
			StringCopy(&Var2, "G_FMF_9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 525;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 259:
			StringCopy(&Var2, "G_FMF_9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 75;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 260:
			StringCopy(&Var2, "G_FMF_9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 75;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 261:
			StringCopy(&Var2, "G_FMF_9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 90;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 262:
			StringCopy(&Var2, "G_FMF_9_8", 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 50;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 263:
			StringCopy(&Var2, "G_FMF_9_9", 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 50;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 264:
			StringCopy(&Var2, "G_FMF_9_10", 16);
			iVar3 = 9;
			iVar4 = 10;
			iVar1 = 50;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 265:
			StringCopy(&Var2, "G_FMF_10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 4065;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 266:
			StringCopy(&Var2, "G_FMF_10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 65;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 267:
			StringCopy(&Var2, "G_FMF_10_2", 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 85;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 268:
			StringCopy(&Var2, "G_FMF_10_3", 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 4275;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 269:
			StringCopy(&Var2, "G_FMF_10_4", 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 85;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 270:
			StringCopy(&Var2, "G_FMF_10_5", 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 80;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 271:
			StringCopy(&Var2, "G_FMF_10_6", 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 85;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 272:
			StringCopy(&Var2, "G_FMF_10_7", 16);
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 90;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 273:
			StringCopy(&Var2, "G_FMF_10_8", 16);
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 50;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 274:
			StringCopy(&Var2, "G_FMF_10_9", 16);
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 50;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 275:
			StringCopy(&Var2, "G_FMF_10_10", 16);
			iVar3 = 10;
			iVar4 = 10;
			iVar1 = 50;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 276:
			StringCopy(&Var2, "G_FMF_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 3660;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 277:
			StringCopy(&Var2, "G_FMF_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 4165;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 278:
			StringCopy(&Var2, "G_FMF_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 3670;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 279:
			StringCopy(&Var2, "G_FMF_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 135;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 280:
			StringCopy(&Var2, "G_FMF_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 3620;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 281:
			StringCopy(&Var2, "G_FMF_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 3610;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 282:
			StringCopy(&Var2, "G_FMF_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 4140;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 283:
			StringCopy(&Var2, "G_FMF_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 130;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 284:
			StringCopy(&Var2, "G_FMF_12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 285:
			StringCopy(&Var2, "G_FMF_12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 286:
			StringCopy(&Var2, "G_FMF_12_2", 16);
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 287:
			StringCopy(&Var2, "G_FMF_12_3", 16);
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 288:
			StringCopy(&Var2, "G_FMF_12_4", 16);
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 289:
			StringCopy(&Var2, "G_FMF_12_5", 16);
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 290:
			StringCopy(&Var2, "G_FMF_12_6", 16);
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 291:
			StringCopy(&Var2, "G_FMF_12_7", 16);
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 292:
			StringCopy(&Var2, "G_FMF_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 293:
			StringCopy(&Var2, "G_FMF_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 294:
			StringCopy(&Var2, "G_FMF_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 295:
			StringCopy(&Var2, "G_FMF_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 296:
			StringCopy(&Var2, "G_FMF_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 297:
			StringCopy(&Var2, "G_FMF_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 298:
			StringCopy(&Var2, "G_FMF_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 299:
			StringCopy(&Var2, "G_FMF_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 300:
			StringCopy(&Var2, "G_FMF_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 325;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 301:
			StringCopy(&Var2, "G_FMF_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 110;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 302:
			StringCopy(&Var2, "G_FMF_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 115;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 303:
			StringCopy(&Var2, "G_FMF_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 120;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 304:
			StringCopy(&Var2, "G_FMF_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 135;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 305:
			StringCopy(&Var2, "G_FMF_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 110;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 306:
			StringCopy(&Var2, "G_FMF_14_6", 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 115;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 307:
			StringCopy(&Var2, "G_FMF_14_7", 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 120;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 308:
			StringCopy(&Var2, "G_FMF_14_8", 16);
			iVar3 = 14;
			iVar4 = 8;
			iVar1 = 50;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 309:
			StringCopy(&Var2, "G_FMF_14_9", 16);
			iVar3 = 14;
			iVar4 = 9;
			iVar1 = 50;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 310:
			StringCopy(&Var2, "G_FMF_14_10", 16);
			iVar3 = 14;
			iVar4 = 10;
			iVar1 = 50;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 311:
			StringCopy(&Var2, "G_FMF_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 312:
			StringCopy(&Var2, "G_FMF_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 313:
			StringCopy(&Var2, "G_FMF_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 314:
			StringCopy(&Var2, "G_FMF_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 315:
			StringCopy(&Var2, "G_FMF_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 316:
			StringCopy(&Var2, "G_FMF_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 317:
			StringCopy(&Var2, "G_FMF_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 318:
			StringCopy(&Var2, "G_FMF_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 319:
			StringCopy(&Var2, "W_FMF_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
		
		case 320:
			StringCopy(&Var2, "W_FMF_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
		
		case 321:
			StringCopy(&Var2, "W_FMF_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
		
		case 322:
			StringCopy(&Var2, "W_FMF_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
		
		case 323:
			StringCopy(&Var2, "W_FMF_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 825;
			iVar5 = 6;
			iVar8 = 4;
			break;
		
		case 324:
			StringCopy(&Var2, "W_FMF_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
		
		case 325:
			StringCopy(&Var2, "W_FMF_1_1", 16);
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
		
		case 326:
			StringCopy(&Var2, "W_FMF_1_2", 16);
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
	}
	if (iVar8 == 1)
	{
		iVar9 = (iParam0 - 10);
		if (iVar9 >= 0 && iVar9 < 121)
		{
			if (iVar9 > 8)
			{
				iVar9 = (iVar9 - 1);
			}
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_40001.f_7E0[iVar9]) * Global_42055.f_1A));
		}
	}
	else if (iVar8 == 2)
	{
		iVar10 = (iParam0 - 131);
		if (iVar10 >= 0 && iVar10 < 24)
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_40001.f_859[iVar10]) * Global_42055.f_1B));
		}
	}
	else if (iVar8 == 3)
	{
		iVar11 = (iParam0 - 155);
		if (iVar11 >= 0 && iVar11 < 128)
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_40001.f_872[iVar11]) * Global_42055.f_38));
		}
	}
	else if (iVar8 == 4)
	{
		iVar12 = (iParam0 - 319);
		if (iVar12 >= 0 && iVar12 < 10)
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_40001.f_8F3[iVar12]) * Global_42055.f_1C));
		}
	}
	if (iParam0 >= 327)
	{
		Global_10A0A[0 /*14*/].f_5 = 4;
		func_393(iVar7, iParam0, 327);
		if (Global_10A0A[0 /*14*/].f_7 > 0)
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_280004, joaat("HAT"), 1))
			{
				Global_10A0A[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_10A0A[0 /*14*/].f_7) * Global_42055.f_1A));
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_280004, joaat("GLASSES"), 1))
			{
				Global_10A0A[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_10A0A[0 /*14*/].f_7) * Global_42055.f_38));
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_280004, joaat("WATCH"), 1))
			{
				Global_10A0A[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_10A0A[0 /*14*/].f_7) * Global_42055.f_1C));
			}
		}
	}
	else
	{
		func_384(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
	}
}

void func_397(int iParam0)//Position - 0x3A0DA
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
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "D_FMM_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		case 2:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 5000;
			break;
		
		case 3:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		case 4:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 5000;
			break;
		
		case 5:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		default:
			Global_10A0A[0 /*14*/].f_5 = 4;
			func_393(iVar7, iParam0, 6);
			return;
			break;
	}
	func_384(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_398(int iParam0)//Position - 0x3A1DD
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
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			iVar3 = 1;
			iVar4 = 0;
			if (Global_40001.f_100E != -1)
			{
				iVar1 = Global_40001.f_100E;
			}
			else
			{
				iVar1 = 310;
			}
			break;
		
		case 2:
			iVar3 = 1;
			iVar4 = 1;
			if (Global_40001.f_100F != -1)
			{
				iVar1 = Global_40001.f_100F;
			}
			else
			{
				iVar1 = 125;
			}
			break;
		
		case 3:
			iVar3 = 1;
			iVar4 = 2;
			if (Global_40001.f_1010 != -1)
			{
				iVar1 = Global_40001.f_1010;
			}
			else
			{
				iVar1 = 145;
			}
			break;
		
		case 4:
			iVar3 = 1;
			iVar4 = 3;
			if (Global_40001.f_1011 != -1)
			{
				iVar1 = Global_40001.f_1011;
			}
			else
			{
				iVar1 = 130;
			}
			break;
		
		case 5:
			iVar3 = 1;
			iVar4 = 4;
			if (Global_40001.f_1012 != -1)
			{
				iVar1 = Global_40001.f_1012;
			}
			else
			{
				iVar1 = 265;
			}
			break;
		
		case 6:
			iVar3 = 1;
			iVar4 = 5;
			if (Global_40001.f_1013 != -1)
			{
				iVar1 = Global_40001.f_1013;
			}
			else
			{
				iVar1 = 280;
			}
			break;
		
		case 7:
			iVar3 = 2;
			iVar4 = 0;
			if (Global_40001.f_1014 != -1)
			{
				iVar1 = Global_40001.f_1014;
			}
			else
			{
				iVar1 = 295;
			}
			break;
		
		case 8:
			iVar3 = 2;
			iVar4 = 1;
			if (Global_40001.f_1015 != -1)
			{
				iVar1 = Global_40001.f_1015;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 9:
			iVar3 = 2;
			iVar4 = 2;
			if (Global_40001.f_1016 != -1)
			{
				iVar1 = Global_40001.f_1016;
			}
			else
			{
				iVar1 = 85;
			}
			break;
		
		case 10:
			iVar3 = 2;
			iVar4 = 3;
			if (Global_40001.f_1017 != -1)
			{
				iVar1 = Global_40001.f_1017;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 11:
			iVar3 = 2;
			iVar4 = 4;
			if (Global_40001.f_1018 != -1)
			{
				iVar1 = Global_40001.f_1018;
			}
			else
			{
				iVar1 = 105;
			}
			break;
		
		case 12:
			iVar3 = 2;
			iVar4 = 5;
			if (Global_40001.f_1019 != -1)
			{
				iVar1 = Global_40001.f_1019;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 13:
			iVar3 = 3;
			iVar4 = 0;
			if (Global_40001.f_101A != -1)
			{
				iVar1 = Global_40001.f_101A;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 14:
			iVar3 = 3;
			iVar4 = 1;
			if (Global_40001.f_101B != -1)
			{
				iVar1 = Global_40001.f_101B;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 15:
			iVar3 = 3;
			iVar4 = 2;
			if (Global_40001.f_101C != -1)
			{
				iVar1 = Global_40001.f_101C;
			}
			else
			{
				iVar1 = 30;
			}
			break;
		
		case 16:
			iVar3 = 3;
			iVar4 = 3;
			if (Global_40001.f_101D != -1)
			{
				iVar1 = Global_40001.f_101D;
			}
			else
			{
				iVar1 = 40;
			}
			break;
		
		case 17:
			iVar3 = 3;
			iVar4 = 4;
			if (Global_40001.f_101E != -1)
			{
				iVar1 = Global_40001.f_101E;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 18:
			iVar3 = 3;
			iVar4 = 5;
			if (Global_40001.f_101F != -1)
			{
				iVar1 = Global_40001.f_101F;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 19:
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 20:
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 21:
			iVar3 = 4;
			iVar4 = 2;
			if (Global_40001.f_1020 != -1)
			{
				iVar1 = Global_40001.f_1020;
			}
			else
			{
				iVar1 = 355;
			}
			break;
		
		case 22:
			iVar3 = 4;
			iVar4 = 3;
			if (Global_40001.f_1021 != -1)
			{
				iVar1 = Global_40001.f_1021;
			}
			else
			{
				iVar1 = 370;
			}
			break;
		
		case 23:
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 24:
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 25:
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 26:
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 27:
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 28:
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 29:
			iVar3 = 5;
			iVar4 = 4;
			if (Global_40001.f_1022 != -1)
			{
				iVar1 = Global_40001.f_1022;
			}
			else
			{
				iVar1 = 110;
			}
			break;
		
		case 30:
			iVar3 = 5;
			iVar4 = 5;
			if (Global_40001.f_1023 != -1)
			{
				iVar1 = Global_40001.f_1023;
			}
			else
			{
				iVar1 = 160;
			}
			break;
		
		case 31:
			iVar3 = 6;
			iVar4 = 0;
			if (Global_40001.f_1024 != -1)
			{
				iVar1 = Global_40001.f_1024;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 32:
			iVar3 = 6;
			iVar4 = 1;
			if (Global_40001.f_1025 != -1)
			{
				iVar1 = Global_40001.f_1025;
			}
			else
			{
				iVar1 = 190;
			}
			break;
		
		case 33:
			iVar3 = 6;
			iVar4 = 2;
			if (Global_40001.f_1026 != -1)
			{
				iVar1 = Global_40001.f_1026;
			}
			else
			{
				iVar1 = 235;
			}
			break;
		
		case 34:
			iVar3 = 6;
			iVar4 = 3;
			if (Global_40001.f_1027 != -1)
			{
				iVar1 = Global_40001.f_1027;
			}
			else
			{
				iVar1 = 220;
			}
			break;
		
		case 35:
			iVar3 = 6;
			iVar4 = 4;
			if (Global_40001.f_1028 != -1)
			{
				iVar1 = Global_40001.f_1028;
			}
			else
			{
				iVar1 = 250;
			}
			break;
		
		case 36:
			iVar3 = 6;
			iVar4 = 5;
			if (Global_40001.f_1029 != -1)
			{
				iVar1 = Global_40001.f_1029;
			}
			else
			{
				iVar1 = 205;
			}
			break;
		
		case 37:
			iVar3 = 7;
			iVar4 = 0;
			if (Global_40001.f_102A != -1)
			{
				iVar1 = Global_40001.f_102A;
			}
			else
			{
				iVar1 = 445;
			}
			break;
		
		case 38:
			iVar3 = 7;
			iVar4 = 1;
			if (Global_40001.f_102B != -1)
			{
				iVar1 = Global_40001.f_102B;
			}
			else
			{
				iVar1 = 175;
			}
			break;
		
		case 39:
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 40:
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 41:
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 42:
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 43:
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 44:
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 46:
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 48:
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 49:
			iVar3 = 9;
			iVar4 = 0;
			if (Global_40001.f_102C != -1)
			{
				iVar1 = Global_40001.f_102C;
			}
			else
			{
				iVar1 = 340;
			}
			break;
		
		case 50:
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 51:
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 52:
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 53:
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 54:
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		default:
			Global_10A0A[0 /*14*/].f_5 = 4;
			func_393(iVar7, iParam0, 55);
			if (Global_10A0A[0 /*14*/].f_7 > 0)
			{
				Global_10A0A[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_10A0A[0 /*14*/].f_7) * Global_42055.f_3A));
			}
			return;
			break;
	}
	iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_42055.f_3A));
	StringCopy(&Var2, "T_FMF_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	func_384(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_399(int iParam0)//Position - 0x3A9B7
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 1;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 965;
			break;
		
		case 2:
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 960;
			break;
		
		case 3:
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 9500;
			break;
		
		case 4:
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 975;
			break;
		
		case 5:
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 1185;
			break;
		
		case 6:
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 15000;
			break;
		
		case 7:
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 1115;
			break;
		
		case 8:
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 1105;
			break;
		
		case 9:
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 25000;
			break;
		
		case 10:
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 510;
			break;
		
		case 11:
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 530;
			break;
		
		case 12:
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 5500;
			break;
		
		case 13:
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 535;
			break;
		
		case 14:
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 1510;
			break;
		
		case 15:
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 1530;
			break;
		
		case 16:
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 14500;
			break;
		
		case 17:
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 13000;
			break;
		
		case 18:
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 8000;
			break;
		
		case 19:
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 1265;
			break;
		
		case 20:
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 8500;
			break;
		
		case 21:
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 1210;
			break;
		
		case 22:
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 2360;
			break;
		
		case 23:
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 22500;
			break;
		
		case 24:
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 2375;
			break;
		
		case 25:
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 2485;
			break;
		
		default:
			Global_10A0A[0 /*14*/].f_5 = 4;
			func_393(iVar7, iParam0, 26);
			if (Global_10A0A[0 /*14*/].f_7 > 0)
			{
				Global_10A0A[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_10A0A[0 /*14*/].f_7) * Global_42055.f_1D));
			}
			return;
			break;
	}
	StringCopy(&Var2, "M_FMF_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	iVar8 = (iParam0 - 1);
	if (iVar8 >= 0 && iVar8 < 26)
	{
		iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_40001.f_7C5[iVar8]) * Global_42055.f_1D));
	}
	func_384(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_400(int iParam0)//Position - 0x3AC9A
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 6;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 1765;
			break;
		
		case 1:
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 760;
			break;
		
		case 2:
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 760;
			break;
		
		case 3:
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 765;
			break;
		
		case 4:
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 5:
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 6:
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 7:
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 8:
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 9:
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 10:
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 11:
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 12:
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 13:
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 14:
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 15:
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 16:
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 85;
			break;
		
		case 17:
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 80;
			break;
		
		case 18:
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 90;
			break;
		
		case 19:
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 90;
			break;
		
		case 20:
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 95;
			break;
		
		case 21:
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 100;
			break;
		
		case 22:
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 60;
			break;
		
		case 23:
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 55;
			break;
		
		case 24:
			iVar3 = 1;
			iVar4 = 8;
			iVar1 = 100;
			break;
		
		case 25:
			iVar3 = 1;
			iVar4 = 9;
			iVar1 = 1255;
			break;
		
		case 26:
			iVar3 = 1;
			iVar4 = 10;
			iVar1 = 65;
			break;
		
		case 27:
			iVar3 = 1;
			iVar4 = 11;
			iVar1 = 1050;
			break;
		
		case 28:
			iVar3 = 1;
			iVar4 = 12;
			iVar1 = 1895;
			break;
		
		case 29:
			iVar3 = 1;
			iVar4 = 13;
			iVar1 = 185;
			break;
		
		case 30:
			iVar3 = 1;
			iVar4 = 14;
			iVar1 = 190;
			break;
		
		case 31:
			iVar3 = 1;
			iVar4 = 15;
			iVar1 = 115;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 415;
			break;
		
		case 33:
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 34:
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 135;
			break;
		
		case 35:
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 125;
			break;
		
		case 36:
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 105;
			break;
		
		case 37:
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 130;
			break;
		
		case 38:
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 3530;
			break;
		
		case 39:
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 2610;
			break;
		
		case 40:
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 1295;
			break;
		
		case 41:
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 120;
			break;
		
		case 42:
			iVar3 = 2;
			iVar4 = 10;
			iVar1 = 160;
			break;
		
		case 43:
			iVar3 = 2;
			iVar4 = 11;
			iVar1 = 160;
			break;
		
		case 44:
			iVar3 = 2;
			iVar4 = 12;
			iVar1 = 145;
			break;
		
		case 45:
			iVar3 = 2;
			iVar4 = 13;
			iVar1 = 105;
			break;
		
		case 46:
			iVar3 = 2;
			iVar4 = 14;
			iVar1 = 115;
			break;
		
		case 47:
			iVar3 = 2;
			iVar4 = 15;
			iVar1 = 150;
			break;
		
		case 48:
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 540;
			break;
		
		case 49:
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 50:
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 110;
			break;
		
		case 51:
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 120;
			break;
		
		case 52:
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 460;
			break;
		
		case 53:
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 120;
			break;
		
		case 54:
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 120;
			break;
		
		case 55:
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 415;
			break;
		
		case 56:
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 135;
			break;
		
		case 57:
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 140;
			break;
		
		case 58:
			iVar3 = 3;
			iVar4 = 10;
			iVar1 = 160;
			break;
		
		case 59:
			iVar3 = 3;
			iVar4 = 11;
			iVar1 = 120;
			break;
		
		case 60:
			iVar3 = 3;
			iVar4 = 12;
			iVar1 = 1025;
			break;
		
		case 61:
			iVar3 = 3;
			iVar4 = 13;
			iVar1 = 1560;
			break;
		
		case 62:
			iVar3 = 3;
			iVar4 = 14;
			iVar1 = 145;
			break;
		
		case 63:
			iVar3 = 3;
			iVar4 = 15;
			iVar1 = 120;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 365;
			break;
		
		case 65:
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 100;
			break;
		
		case 66:
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 65;
			break;
		
		case 67:
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 85;
			break;
		
		case 68:
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 69:
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 74:
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 75:
			iVar3 = 4;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 76:
			iVar3 = 4;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 78:
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case joaat("mpsv_lp0_31"):
			iVar3 = 4;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 80:
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 50;
			break;
		
		case 81:
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 35;
			break;
		
		case 82:
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 83:
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 88:
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 89:
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 90:
			iVar3 = 5;
			iVar4 = 10;
			iVar1 = 50;
			break;
		
		case 91:
			iVar3 = 5;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar3 = 5;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar3 = 5;
			iVar4 = 13;
			iVar1 = 50;
			break;
		
		case 94:
			iVar3 = 5;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 95:
			iVar3 = 5;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 2395;
			break;
		
		case 97:
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 3675;
			break;
		
		case 98:
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 320;
			break;
		
		case 99:
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 3875;
			break;
		
		case 100:
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 101:
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar3 = 6;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar3 = 6;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar3 = 6;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar3 = 6;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar3 = 6;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar3 = 6;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 112:
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 2050;
			break;
		
		case 113:
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 375;
			break;
		
		case 114:
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 2105;
			break;
		
		case 115:
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 345;
			break;
		
		case 116:
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 380;
			break;
		
		case 117:
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 340;
			break;
		
		case 118:
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 385;
			break;
		
		case 119:
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 4135;
			break;
		
		case 120:
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 370;
			break;
		
		case 121:
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 375;
			break;
		
		case 122:
			iVar3 = 7;
			iVar4 = 10;
			iVar1 = 385;
			break;
		
		case 123:
			iVar3 = 7;
			iVar4 = 11;
			iVar1 = 365;
			break;
		
		case 124:
			iVar3 = 7;
			iVar4 = 12;
			iVar1 = 325;
			break;
		
		case 125:
			iVar3 = 7;
			iVar4 = 13;
			iVar1 = 325;
			break;
		
		case 126:
			iVar3 = 7;
			iVar4 = 14;
			iVar1 = 370;
			break;
		
		case 127:
			iVar3 = 7;
			iVar4 = 15;
			iVar1 = 330;
			break;
	}
	switch (iParam0)
	{
		case 128:
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 1025;
			break;
		
		case 129:
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 390;
			break;
		
		case 130:
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 400;
			break;
		
		case 131:
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 390;
			break;
		
		case 132:
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 365;
			break;
		
		case 133:
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 410;
			break;
		
		case 134:
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 4125;
			break;
		
		case 135:
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 4365;
			break;
		
		case 136:
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 5365;
			break;
		
		case 137:
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 6225;
			break;
		
		case 138:
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 3755;
			break;
		
		case 139:
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 405;
			break;
		
		case 140:
			iVar3 = 8;
			iVar4 = 12;
			iVar1 = 4115;
			break;
		
		case 141:
			iVar3 = 8;
			iVar4 = 13;
			iVar1 = 2240;
			break;
		
		case 142:
			iVar3 = 8;
			iVar4 = 14;
			iVar1 = 3850;
			break;
		
		case 143:
			iVar3 = 8;
			iVar4 = 15;
			iVar1 = 3110;
			break;
		
		case 144:
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 1950;
			break;
		
		case 145:
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 455;
			break;
		
		case 146:
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 405;
			break;
		
		case 147:
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 410;
			break;
		
		case 148:
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 149:
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 150:
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 151:
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 152:
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 153:
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 154:
			iVar3 = 9;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 155:
			iVar3 = 9;
			iVar4 = 11;
			iVar1 = 415;
			break;
		
		case 156:
			iVar3 = 9;
			iVar4 = 12;
			iVar1 = 4425;
			break;
		
		case 157:
			iVar3 = 9;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 158:
			iVar3 = 9;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 159:
			iVar3 = 9;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 160:
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 115;
			break;
		
		case 161:
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 65;
			break;
		
		case 162:
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 85;
			break;
		
		case 163:
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 75;
			break;
		
		case 164:
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 168:
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar3 = 10;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 171:
			iVar3 = 10;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 172:
			iVar3 = 10;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 173:
			iVar3 = 10;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 174:
			iVar3 = 10;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar3 = 10;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 176:
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 115;
			break;
		
		case 177:
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 360;
			break;
		
		case 178:
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 135;
			break;
		
		case 179:
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 175;
			break;
		
		case 180:
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 181:
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 182:
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 183:
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 184:
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 185:
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 186:
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 187:
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 188:
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 189:
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 190:
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 191:
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 192:
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 193:
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 194:
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 195:
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 196:
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 197:
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 198:
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 199:
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 200:
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 201:
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 202:
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 203:
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 204:
			iVar3 = 12;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 205:
			iVar3 = 12;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 206:
			iVar3 = 12;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 207:
			iVar3 = 12;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 208:
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 675;
			break;
		
		case 209:
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 100;
			break;
		
		case 210:
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 400;
			break;
		
		case 211:
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 340;
			break;
		
		case 212:
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 195;
			break;
		
		case 213:
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 215;
			break;
		
		case 214:
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 120;
			break;
		
		case 215:
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 165;
			break;
		
		case 216:
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 100;
			break;
		
		case 217:
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 1040;
			break;
		
		case 218:
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 100;
			break;
		
		case 219:
			iVar3 = 13;
			iVar4 = 11;
			iVar1 = 120;
			break;
		
		case 220:
			iVar3 = 13;
			iVar4 = 12;
			iVar1 = 210;
			break;
		
		case 221:
			iVar3 = 13;
			iVar4 = 13;
			iVar1 = 205;
			break;
		
		case 222:
			iVar3 = 13;
			iVar4 = 14;
			iVar1 = 200;
			break;
		
		case 223:
			iVar3 = 13;
			iVar4 = 15;
			iVar1 = 100;
			break;
		
		case 224:
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 1420;
			break;
		
		case 225:
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 445;
			break;
		
		case 226:
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 435;
			break;
		
		case 227:
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 420;
			break;
		
		case 228:
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 425;
			break;
		
		case 229:
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 435;
			break;
		
		case 230:
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 425;
			break;
		
		case 231:
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 430;
			break;
		
		case 232:
			iVar3 = 14;
			iVar4 = 8;
			iVar1 = 3215;
			break;
		
		case 233:
			iVar3 = 14;
			iVar4 = 9;
			iVar1 = 3320;
			break;
		
		case 234:
			iVar3 = 14;
			iVar4 = 10;
			iVar1 = 440;
			break;
		
		case 235:
			iVar3 = 14;
			iVar4 = 11;
			iVar1 = 440;
			break;
		
		case 236:
			iVar3 = 14;
			iVar4 = 12;
			iVar1 = 445;
			break;
		
		case 237:
			iVar3 = 14;
			iVar4 = 13;
			iVar1 = 450;
			break;
		
		case 238:
			iVar3 = 14;
			iVar4 = 14;
			iVar1 = 450;
			break;
		
		case 239:
			iVar3 = 14;
			iVar4 = 15;
			iVar1 = 1255;
			break;
		
		case 240:
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 750;
			break;
		
		case 241:
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 165;
			break;
		
		case 242:
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 460;
			break;
		
		case 243:
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 190;
			break;
		
		case 244:
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 195;
			break;
		
		case 245:
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 200;
			break;
		
		case 246:
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 205;
			break;
		
		case 247:
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 210;
			break;
		
		case 248:
			iVar3 = 15;
			iVar4 = 8;
			iVar1 = 215;
			break;
		
		case 249:
			iVar3 = 15;
			iVar4 = 9;
			iVar1 = 220;
			break;
		
		case 250:
			iVar3 = 15;
			iVar4 = 10;
			iVar1 = 455;
			break;
		
		case 251:
			iVar3 = 15;
			iVar4 = 11;
			iVar1 = 175;
			break;
		
		case 252:
			iVar3 = 15;
			iVar4 = 12;
			iVar1 = 800;
			break;
		
		case 253:
			iVar3 = 15;
			iVar4 = 13;
			iVar1 = 790;
			break;
		
		case 254:
			iVar3 = 15;
			iVar4 = 14;
			iVar1 = 175;
			break;
		
		case 255:
			iVar3 = 15;
			iVar4 = 15;
			iVar1 = 190;
			break;
	}
	StringCopy(&Var2, "F_FMF_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	iVar8 = iParam0;
	if (iVar8 >= 0 && iVar8 < 256)
	{
		iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_40001.f_6C4[iVar8]) * Global_42055.f_19));
	}
	if (iParam0 >= 256)
	{
		Global_10A0A[0 /*14*/].f_5 = 4;
		func_393(iVar7, iParam0, 256);
		if (Global_10A0A[0 /*14*/].f_7 > 0)
		{
			Global_10A0A[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_10A0A[0 /*14*/].f_7) * Global_42055.f_19));
		}
	}
	else
	{
		func_384(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
	}
}

void func_401(int iParam0)//Position - 0x3C2C1
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 4;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 270;
			break;
		
		case 1:
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 750;
			break;
		
		case 2:
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 450;
			break;
		
		case 3:
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 4875;
			break;
		
		case 4:
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 1760;
			break;
		
		case 5:
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 1090;
			break;
		
		case 6:
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 2465;
			break;
		
		case 7:
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 305;
			break;
		
		case 8:
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 290;
			break;
		
		case 9:
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 410;
			break;
		
		case 10:
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 255;
			break;
		
		case 11:
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 255;
			break;
		
		case 12:
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 405;
			break;
		
		case 13:
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 5000;
			break;
		
		case 14:
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 4480;
			break;
		
		case 15:
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 4335;
			break;
	}
	switch (iParam0)
	{
		case 16:
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 375;
			break;
		
		case 17:
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 265;
			break;
		
		case 18:
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 275;
			break;
		
		case 19:
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 280;
			break;
		
		case 20:
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 300;
			break;
		
		case 21:
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 265;
			break;
		
		case 22:
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 255;
			break;
		
		case 23:
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 250;
			break;
		
		case 24:
			iVar3 = 1;
			iVar4 = 8;
			iVar1 = 260;
			break;
		
		case 25:
			iVar3 = 1;
			iVar4 = 9;
			iVar1 = 250;
			break;
		
		case 26:
			iVar3 = 1;
			iVar4 = 10;
			iVar1 = 225;
			break;
		
		case 27:
			iVar3 = 1;
			iVar4 = 11;
			iVar1 = 230;
			break;
		
		case 28:
			iVar3 = 1;
			iVar4 = 12;
			iVar1 = 215;
			break;
		
		case 29:
			iVar3 = 1;
			iVar4 = 13;
			iVar1 = 650;
			break;
		
		case 30:
			iVar3 = 1;
			iVar4 = 14;
			iVar1 = 425;
			break;
		
		case 31:
			iVar3 = 1;
			iVar4 = 15;
			iVar1 = 345;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 115;
			break;
		
		case 33:
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 110;
			break;
		
		case 34:
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 250;
			break;
		
		case 35:
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 36:
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 37:
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 38:
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 39:
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 40:
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 41:
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 42:
			iVar3 = 2;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 43:
			iVar3 = 2;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 44:
			iVar3 = 2;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar3 = 2;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 46:
			iVar3 = 2;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar3 = 2;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 48:
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 290;
			break;
		
		case 49:
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 50:
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 135;
			break;
		
		case 51:
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 125;
			break;
		
		case 52:
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 120;
			break;
		
		case 53:
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 130;
			break;
		
		case 54:
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 110;
			break;
		
		case 55:
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 525;
			break;
		
		case 56:
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 115;
			break;
		
		case 57:
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 535;
			break;
		
		case 58:
			iVar3 = 3;
			iVar4 = 10;
			iVar1 = 135;
			break;
		
		case 59:
			iVar3 = 3;
			iVar4 = 11;
			iVar1 = 120;
			break;
		
		case 60:
			iVar3 = 3;
			iVar4 = 12;
			iVar1 = 130;
			break;
		
		case 61:
			iVar3 = 3;
			iVar4 = 13;
			iVar1 = 140;
			break;
		
		case 62:
			iVar3 = 3;
			iVar4 = 14;
			iVar1 = 130;
			break;
		
		case 63:
			iVar3 = 3;
			iVar4 = 15;
			iVar1 = 520;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 215;
			break;
		
		case 65:
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 220;
			break;
		
		case 66:
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 225;
			break;
		
		case 67:
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 245;
			break;
		
		case 68:
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 215;
			break;
		
		case 69:
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 630;
			break;
		
		case 70:
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 250;
			break;
		
		case 71:
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 260;
			break;
		
		case 72:
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 200;
			break;
		
		case 73:
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 225;
			break;
		
		case 74:
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 230;
			break;
		
		case 75:
			iVar3 = 4;
			iVar4 = 11;
			iVar1 = 725;
			break;
		
		case 76:
			iVar3 = 4;
			iVar4 = 12;
			iVar1 = 650;
			break;
		
		case 77:
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 230;
			break;
		
		case 78:
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 230;
			break;
		
		case joaat("mpsv_lp0_31"):
			iVar3 = 4;
			iVar4 = 15;
			iVar1 = 280;
			break;
	}
	switch (iParam0)
	{
		case 80:
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 81:
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 82:
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 83:
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 88:
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 330;
			break;
		
		case 89:
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 90:
			iVar3 = 5;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 91:
			iVar3 = 5;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar3 = 5;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar3 = 5;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 94:
			iVar3 = 5;
			iVar4 = 14;
			iVar1 = 320;
			break;
		
		case 95:
			iVar3 = 5;
			iVar4 = 15;
			iVar1 = 315;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 850;
			break;
		
		case 97:
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 535;
			break;
		
		case 98:
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 530;
			break;
		
		case 99:
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 100:
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 101:
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar3 = 6;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar3 = 6;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar3 = 6;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar3 = 6;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar3 = 6;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar3 = 6;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 112:
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 890;
			break;
		
		case 113:
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 440;
			break;
		
		case 114:
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 455;
			break;
		
		case 115:
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 116:
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 117:
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 118:
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 119:
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 120:
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 121:
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 122:
			iVar3 = 7;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 123:
			iVar3 = 7;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 124:
			iVar3 = 7;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 125:
			iVar3 = 7;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 126:
			iVar3 = 7;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 127:
			iVar3 = 7;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 128:
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 295;
			break;
		
		case 129:
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 180;
			break;
		
		case 130:
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 150;
			break;
		
		case 131:
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 150;
			break;
		
		case 132:
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 155;
			break;
		
		case 133:
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 134:
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 205;
			break;
		
		case 135:
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 150;
			break;
		
		case 136:
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 950;
			break;
		
		case 137:
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 580;
			break;
		
		case 138:
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 200;
			break;
		
		case 139:
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 665;
			break;
		
		case 140:
			iVar3 = 8;
			iVar4 = 12;
			iVar1 = 780;
			break;
		
		case 141:
			iVar3 = 8;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 142:
			iVar3 = 8;
			iVar4 = 14;
			iVar1 = 615;
			break;
		
		case 143:
			iVar3 = 8;
			iVar4 = 15;
			iVar1 = 250;
			break;
	}
	switch (iParam0)
	{
		case 144:
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 495;
			break;
		
		case 145:
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 435;
			break;
		
		case 146:
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 420;
			break;
		
		case 147:
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 390;
			break;
		
		case 148:
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 485;
			break;
		
		case 149:
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 380;
			break;
		
		case 150:
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 1295;
			break;
		
		case 151:
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 1135;
			break;
		
		case 152:
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 1425;
			break;
		
		case 153:
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 1645;
			break;
		
		case 154:
			iVar3 = 9;
			iVar4 = 10;
			iVar1 = 1925;
			break;
		
		case 155:
			iVar3 = 9;
			iVar4 = 11;
			iVar1 = 2250;
			break;
		
		case 156:
			iVar3 = 9;
			iVar4 = 12;
			iVar1 = 365;
			break;
		
		case 157:
			iVar3 = 9;
			iVar4 = 13;
			iVar1 = 360;
			break;
		
		case 158:
			iVar3 = 9;
			iVar4 = 14;
			iVar1 = 2245;
			break;
		
		case 159:
			iVar3 = 9;
			iVar4 = 15;
			iVar1 = 2170;
			break;
		
		case 160:
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 50;
			break;
		
		case 161:
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 100;
			break;
		
		case 162:
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 65;
			break;
		
		case 163:
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 164:
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 168:
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar3 = 10;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 171:
			iVar3 = 10;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 172:
			iVar3 = 10;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 173:
			iVar3 = 10;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 174:
			iVar3 = 10;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar3 = 10;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 176:
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 275;
			break;
		
		case 177:
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 300;
			break;
		
		case 178:
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 145;
			break;
		
		case 179:
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 150;
			break;
		
		case 180:
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 110;
			break;
		
		case 181:
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 95;
			break;
		
		case 182:
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 155;
			break;
		
		case 183:
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 155;
			break;
		
		case 184:
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 510;
			break;
		
		case 185:
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 165;
			break;
		
		case 186:
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 465;
			break;
		
		case 187:
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 250;
			break;
		
		case 188:
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 110;
			break;
		
		case 189:
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 470;
			break;
		
		case 190:
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 480;
			break;
		
		case 191:
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 155;
			break;
		
		case 192:
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 275;