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
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	struct<3> Local_55 = { 0, 0, 0 } ;
	var uLocal_56[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<3> Local_57 = { 0, 0, 0 } ;
	float fLocal_58 = 0f;
	int iLocal_59 = 0;
	float fLocal_60 = 0f;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	struct<8> Local_63 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	struct<3> Local_72 = { 0, 0, 0 } ;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	struct<508> Local_75 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_89 = 4;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 4;
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
	var uLocal_165 = 12;
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
	var uLocal_178 = 12;
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
	var uLocal_191 = 12;
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
	var uLocal_204 = 9;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 9;
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
	struct<2> Local_241 = { 0, 0 } ;
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
	iLocal_73 = 207;
	Local_75.f_1 = ScriptParam_241.f_1;
	Local_75.f_3 = -1;
	Local_75.f_1FB = ScriptParam_241;
	if (!Local_75.f_1)
	{
		MISC::SET_BIT(&(Global_15F9E.f_4F3[ScriptParam_241]), 16);
	}
	Local_75.f_1EE = 747348/*func_978*/;
	Local_75.f_1EF = 747187/*func_977*/;
	Local_75.f_1F0 = 729674/*func_958*/;
	Local_75.f_1F2 = 729632/*func_957*/;
	Local_75.f_1F3 = 729590/*func_956*/;
	Local_75.f_1F1 = 722684/*func_952*/;
	Local_75.f_1F4 = 629896/*func_919*/;
	Local_75.f_1F5 = 628319/*func_916*/;
	Local_75.f_1F6 = 624928/*func_912*/;
	Local_75.f_1F7 = 623881/*func_910*/;
	Local_75.f_1F8 = 618163/*func_908*/;
	Local_75.f_1F9 = 617935/*func_907*/;
	Local_75.f_1FA = 591713/*func_893*/;
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, 0, ScriptParam_241);
	if (!func_891(0, -1, 1))
	{
		func_879(&Local_75, 0);
	}
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_55, 3);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&uLocal_56, 33);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	if (!func_878())
	{
		func_879(&Local_75, 0);
	}
	func_877(Local_75.f_1FB);
	while (true)
	{
		SYSTEM::WAIT(0);
		func_1(&Local_75);
	}
}

void func_1(var uParam0)//Position - 0x176
{
	int iVar0;
	int iVar1;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (MISC::IS_BIT_SET(Global_180044.f_3, 4))
		{
			if (!iLocal_62)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_C) && !PED::IS_PED_INJURED(uParam0->f_C))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_C))
					{
						ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uParam0->f_C, 0);
					}
					func_876(*uParam0, 1);
					iLocal_62 = 1;
				}
			}
		}
		else if (iLocal_62)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_C) && !PED::IS_PED_INJURED(uParam0->f_C))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_C))
				{
					ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uParam0->f_C, 1);
				}
				iLocal_62 = 0;
				func_876(*uParam0, 0);
			}
		}
	}
	func_875(&(uParam0->f_C));
	if (func_874(1))
	{
		iLocal_61 = 1;
	}
	func_873(&(uParam0->f_1E9));
	if (func_872(uParam0->f_1FB) && !func_863(uParam0, uParam0->f_1FB))
	{
		if (func_862(uParam0))
		{
			PAD::_0x7F4724035FDCA1DD(2);
			PAD::_0x7F4724035FDCA1DD(0);
			if (*uParam0 != 21)
			{
				iVar0 = 0;
				func_853(uParam0, &iVar0, 0, 0);
			}
			else if (uParam0->f_9)
			{
				func_850(uParam0);
			}
			func_842(uParam0, &(uParam0->f_67));
			if (uParam0->f_9)
			{
				if (!func_841(*uParam0))
				{
					func_836(uParam0, &(uParam0->f_67), 0);
				}
			}
			func_829(uParam0);
			func_828(uParam0);
			func_811(uParam0);
			func_810(uParam0);
			func_809(uParam0);
			switch (uParam0->f_B)
			{
				case 0:
					func_789(uParam0);
					break;
				
				case 1:
					func_785(0);
					func_784(uParam0);
					if (uParam0->f_B == 2)
					{
						func_769(uParam0);
					}
					break;
				
				case 2:
					func_769(uParam0);
					func_764(uParam0, &(uParam0->f_67));
					break;
				
				case 3:
					func_745(uParam0);
					func_732(uParam0);
					break;
				
				case 4:
					func_71(uParam0);
					func_764(uParam0, &(uParam0->f_67));
					break;
				
				case 5:
					uParam0->f_B = 1;
					break;
				}
		}
	}
	else
	{
		func_879(uParam0, 0);
	}
	if (func_68(uParam0))
	{
		func_62(uParam0);
	}
	if (MISC::IS_BIT_SET(uParam0->f_21D, 14))
	{
		iVar1 = PLAYER::PLAYER_PED_ID();
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_252.f_2) && !PED::IS_PED_INJURED(uParam0->f_252.f_2))
		{
			iVar1 = uParam0->f_252.f_2;
		}
		if (!PED::IS_PED_INJURED(iVar1))
		{
			if (MISC::IS_BIT_SET(uParam0->f_21D, 28))
			{
				if (MISC::IS_BIT_SET(uParam0->f_21D, 16))
				{
					func_61(uParam0->f_29B, "SHOPFLAG_bDeclIsPreview");
					func_60(&iVar1, uParam0->f_29B, -1, 0);
				}
				else
				{
					func_53(&iVar1, -1, 0, 0);
				}
			}
			if (MISC::IS_BIT_SET(uParam0->f_21D, 15))
			{
				if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_52(uParam0->f_1FC)) && !Global_26CC4E)
				{
				}
				else if (((uParam0->f_1FC != 1 && uParam0->f_67.f_1 != -1) && Global_26C6FE[uParam0->f_67.f_1] != 0) && !MISC::IS_BIT_SET(uParam0->f_21F, 0))
				{
					func_12(iVar1, uParam0->f_29A, uParam0->f_299, MISC::IS_BIT_SET(uParam0->f_21D, 28), Global_26C6FE[uParam0->f_67.f_1]);
				}
				else
				{
					if (MISC::IS_BIT_SET(uParam0->f_21F, 0))
					{
						uParam0->f_29A = 11;
						uParam0->f_299 = func_9(iVar1, 11);
					}
					func_12(iVar1, uParam0->f_29A, uParam0->f_299, MISC::IS_BIT_SET(uParam0->f_21D, 28), 0);
				}
			}
			if (!MISC::IS_BIT_SET(uParam0->f_21D, 28))
			{
				if (MISC::IS_BIT_SET(uParam0->f_21D, 16))
				{
					func_61(uParam0->f_29B, "NOT SHOPFLAG_bDeclIsPreview");
					func_60(&iVar1, uParam0->f_29B, -1, 0);
				}
				else
				{
					func_53(&iVar1, -1, 0, 0);
				}
			}
		}
		MISC::CLEAR_BIT(&(uParam0->f_21D), 16);
		MISC::CLEAR_BIT(&(uParam0->f_21D), 15);
		MISC::CLEAR_BIT(&(uParam0->f_21D), 14);
		MISC::CLEAR_BIT(&(uParam0->f_21D), 28);
	}
	MISC::CLEAR_BIT(&(uParam0->f_21E), 7);
	func_2(uParam0);
}

void func_2(var uParam0)//Position - 0x544
{
	bool bVar0;
	int iVar1;
	
	if (uParam0->f_9 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uLocal_56[PLAYER::PLAYER_ID()] = Global_15F9E.f_4F3[*uParam0];
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_7(*uParam0);
			if (MISC::IS_BIT_SET(uParam0->f_21D, 8))
			{
				if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uParam0->f_296)) > 1000)
				{
					bVar0 = true;
					if ((!MISC::IS_BIT_SET(Global_15F9E.f_4F3[*uParam0], 0) && !MISC::IS_BIT_SET(Global_15F9E.f_4F3[*uParam0], 5)) && (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_C) || PED::IS_PED_INJURED(uParam0->f_C)))
					{
						iVar1 = 0;
						while (iVar1 < 32)
						{
							if (func_6(PLAYER::INT_TO_PLAYERINDEX(iVar1), 1, 1))
							{
								if (MISC::IS_BIT_SET(uLocal_56[iVar1], 5) || MISC::IS_BIT_SET(uLocal_56[iVar1], 18))
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
					MISC::CLEAR_BIT(&(uParam0->f_21D), 8);
				}
			}
			else
			{
				uParam0->f_296 = NETWORK::GET_NETWORK_TIME();
				MISC::SET_BIT(&(uParam0->f_21D), 8);
			}
		}
		else
		{
			uParam0->f_296 = NETWORK::GET_NETWORK_TIME();
			MISC::SET_BIT(&(uParam0->f_21D), 8);
		}
	}
}

void func_3(int iParam0, bool bParam1, bool bParam2)//Position - 0x680
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

struct<7> func_4(int iParam0)//Position - 0x74A
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

int func_5(int iParam0, int iParam1)//Position - 0x331C
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

int func_6(int iParam0, bool bParam1, bool bParam2)//Position - 0x3789
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

void func_7(int iParam0)//Position - 0x37CD
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

int func_8(int iParam0, int iParam1)//Position - 0x3811
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

int func_9(int iParam0, int iParam1)//Position - 0x3F65
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || PED::IS_PED_INJURED(iParam0))
	{
		return -99;
	}
	uVar0 = func_11(iParam1);
	iVar1 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, uVar0);
	iVar2 = PED::GET_PED_TEXTURE_VARIATION(iParam0, iVar0);
	return func_10(iParam0, iVar1, iVar2, iParam1);
}

int func_10(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3FC5
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	uVar0 = func_11(iParam3);
	iVar1 = PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, uVar0);
	iVar3 = 0;
	while (iVar3 <= (iVar1 - 1))
	{
		iVar5 = PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, iVar0, iVar3);
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

int func_11(int iParam0)//Position - 0x404A
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

void func_12(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x40FA
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (iParam1 == 11 || iParam1 == 8)
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
			if (iParam1 == 11)
			{
				if (func_51(iVar0, iParam2))
				{
					iParam1 = 8;
					iParam2 = func_9(iParam0, iParam1);
				}
			}
			else if (iParam1 == 8)
			{
				iVar1 = func_9(iParam0, 11);
				if (!func_51(iVar0, iVar1))
				{
					return;
				}
			}
			func_50(MISC::GET_HASH_KEY("torsoDecal"), iParam0);
			if (iParam1 == 11)
			{
				if (((((!func_47(iVar0, iParam2, 13) && !func_47(iVar0, iParam2, 14)) && !func_47(iVar0, iParam2, 15)) && !func_47(iVar0, iParam2, 16)) && !func_47(iVar0, iParam2, 71)) && !func_47(iVar0, iParam2, 72))
				{
					func_50(MISC::GET_HASH_KEY("crewLogo"), iParam0);
				}
			}
			iVar2 = func_37(iVar0, iParam1, iParam2, iParam4);
			if (iVar2 != -1)
			{
				if (bParam3 == 1)
				{
					func_26(iParam0, iVar2);
				}
				else
				{
					func_13(iVar2, 1, Global_10A08);
				}
			}
		}
	}
}

void func_13(int iParam0, bool bParam1, int iParam2)//Position - 0x421C
{
	if (bParam1)
	{
		if (!func_25(iParam0, iParam2))
		{
			func_14(iParam0, 1, iParam2);
		}
	}
	else if (func_25(iParam0, iParam2))
	{
		func_14(iParam0, 0, iParam2);
	}
}

void func_14(var uParam0, bool bParam1, int iParam2)//Position - 0x4255
{
	var uVar0;
	int iVar1;
	
	uVar0 = func_23(uParam0, iParam2);
	iVar1 = uParam0;
	if (iVar1 > -1)
	{
		if (bParam1)
		{
			MISC::SET_BIT(&uVar0, func_22(iVar1));
		}
		else
		{
			MISC::CLEAR_BIT(&uVar0, func_22(iVar1));
		}
		func_15(func_18(uParam0), uVar0, iParam2, 1);
	}
}

void func_15(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x42A3
{
	int iVar0;
	
	iVar0 = Global_25744D[iParam0 /*6*/][func_16(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_16(int iParam0)//Position - 0x42CE
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_17();
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

int func_17()//Position - 0x4302
{
	return Global_1407E1;
}

int func_18(var uParam0)//Position - 0x430E
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_21(iVar0);
	if ((func_20() == 0 || func_19() == 0) || (func_20() == 999 && func_19() == 999))
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

int func_19()//Position - 0x445B
{
	return Global_5F7D;
}

int func_20()//Position - 0x4466
{
	return Global_5F7C;
}

int func_21(int iParam0)//Position - 0x4471
{
	return (iParam0 / 32);
}

int func_22(int iParam0)//Position - 0x447E
{
	return (iParam0 % 32);
}

var func_23(var uParam0, int iParam1)//Position - 0x448B
{
	var uVar0;
	
	uVar0 = func_24(func_18(uParam0), iParam1, 0);
	return uVar0;
}

int func_24(int iParam0, int iParam1, int iParam2)//Position - 0x44A4
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_25744D[iParam0 /*6*/][func_16(iParam1)];
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_25(int iParam0, int iParam1)//Position - 0x44D6
{
	var uVar0;
	int iVar1;
	
	uVar0 = func_23(iParam0, iParam1);
	iVar1 = iParam0;
	return MISC::IS_BIT_SET(uVar0, func_22(iVar1));
}

void func_26(int iParam0, int iParam1)//Position - 0x44F8
{
	int iVar0;
	struct<6> Var1;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (iParam1 != -1)
		{
			iVar0 = func_36(iParam0);
			if (!func_25(iParam1, -1))
			{
				if (func_28(&Var1, iParam1, iVar0, iParam0, -1))
				{
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
					func_27(iParam0, Var1.f_4, Var1.f_5);
				}
			}
		}
	}
}

void func_27(int iParam0, int iParam1, int iParam2)//Position - 0x454F
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

bool func_28(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x4602
{
	int iVar0;
	int iVar1;
	
	func_35(sParam0, -1, 0, "", "", "", "", iParam2, -1, 0);
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
					func_35(sParam0, iParam1, iParam3, "TAT_MIC_01", "singleplayer_overlays", "MK_000", "", iParam2, 300, 3);
					break;
				
				case 1:
					func_35(sParam0, iParam1, iParam3, "TAT_MIC_02", "singleplayer_overlays", "MK_001", "", iParam2, 450, 0);
					break;
				
				case 2:
					func_35(sParam0, iParam1, iParam3, "TAT_MIC_03", "singleplayer_overlays", "MK_002", "", iParam2, 250, 4);
					break;
				
				case 3:
					func_35(sParam0, iParam1, iParam3, "TAT_MIC_04", "singleplayer_overlays", "MK_003", "", iParam2, 175, 0);
					break;
				
				case 4:
					func_35(sParam0, iParam1, iParam3, "TAT_MIC_06", "singleplayer_overlays", "MK_005", "", iParam2, 380, 0);
					break;
				
				case 5:
					func_35(sParam0, iParam1, iParam3, "TAT_MIC_07", "singleplayer_overlays", "MK_006", "", iParam2, 180, 0);
					break;
				
				case 6:
					func_35(sParam0, iParam1, iParam3, "TAT_MIC_08", "singleplayer_overlays", "MK_007", "", iParam2, 240, 0);
					break;
				
				case 7:
					func_35(sParam0, iParam1, iParam3, "TAT_MIC_10", "singleplayer_overlays", "MK_009", "", iParam2, 195, 0);
					break;
				
				case 8:
					func_35(sParam0, iParam1, iParam3, "TAT_MIC_11", "singleplayer_overlays", "MK_010", "", iParam2, 280, 6);
					break;
				
				case 9:
					if (func_34() || func_33())
					{
						iVar1 = 400;
						if (func_32() && (func_31() || func_30()))
						{
							iVar1 = 0;
						}
						func_35(sParam0, iParam1, iParam3, "TAT_MIC_12", "singleplayer_overlays", "MK_011", "", iParam2, iVar1, 2);
					}
					break;
				
				case 10:
					func_35(sParam0, iParam1, iParam3, "TAT_MIC_13", "singleplayer_overlays", "MK_012", "", iParam2, 320, 3);
					break;
				
				case 11:
					func_35(sParam0, iParam1, iParam3, "TAT_MIC_14", "singleplayer_overlays", "MK_013", "", iParam2, 500, 2);
					break;
				
				case 12:
					func_35(sParam0, iParam1, iParam3, "TAT_MIC_16", "singleplayer_overlays", "MK_015", "", iParam2, 220, 0);
					break;
				
				case 13:
					func_35(sParam0, iParam1, iParam3, "TAT_MIC_17", "singleplayer_overlays", "MK_016", "", iParam2, 320, 4);
					break;
				
				case 14:
					func_35(sParam0, iParam1, iParam3, "TAT_MIC_18", "singleplayer_overlays", "MK_017", "", iParam2, 140, 2);
					break;
				
				case 15:
					func_35(sParam0, iParam1, iParam3, "TAT_MIC_20", "singleplayer_overlays", "MK_019", "", iParam2, 350, 0);
					break;
				
				case 16:
					func_35(sParam0, iParam1, iParam3, "TAT_MIC_21", "singleplayer_overlays", "MK_020", "", iParam2, 350, 0);
					break;
				
				case 17:
					func_35(sParam0, iParam1, iParam3, "TAT_MIC_05", "singleplayer_overlays", "MK_004", "", iParam2, 120, 1);
					break;
				
				case 18:
					func_35(sParam0, iParam1, iParam3, "TAT_MIC_09", "singleplayer_overlays", "MK_008", "", iParam2, 99, 1);
					break;
				
				case 19:
					func_35(sParam0, iParam1, iParam3, "TAT_MIC_15", "singleplayer_overlays", "MK_014", "", iParam2, 400, 1);
					break;
				
				case 20:
					func_35(sParam0, iParam1, iParam3, "TAT_MIC_19", "singleplayer_overlays", "MK_018", "", iParam2, 420, 1);
					break;
				
				default:
					func_29(sParam0, iParam2, iParam1, 21);
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					if (func_34() || func_33())
					{
						iVar1 = 450;
						if (func_32() && (func_31() || func_30()))
						{
							iVar1 = 0;
						}
						func_35(sParam0, iParam1, iParam3, "TAT_FRA_01", "singleplayer_overlays", "fr_000", "", iParam2, iVar1, 0);
					}
					break;
				
				case 1:
					func_35(sParam0, iParam1, iParam3, "TAT_FRA_02", "singleplayer_overlays", "fr_001", "", iParam2, 230, 0);
					break;
				
				case 2:
					func_35(sParam0, iParam1, iParam3, "TAT_FRA_03", "singleplayer_overlays", "fr_002", "", iParam2, 310, 0);
					break;
				
				case 3:
					func_35(sParam0, iParam1, iParam3, "TAT_FRA_04", "singleplayer_overlays", "fr_003", "", iParam2, 260, 0);
					break;
				
				case 4:
					func_35(sParam0, iParam1, iParam3, "TAT_FRA_07", "singleplayer_overlays", "fr_006", "", iParam2, 240, 2);
					break;
				
				case 5:
					func_35(sParam0, iParam1, iParam3, "TAT_FRA_08", "singleplayer_overlays", "fr_007", "", iParam2, 190, 3);
					break;
				
				case 6:
					func_35(sParam0, iParam1, iParam3, "TAT_FRA_09", "singleplayer_overlays", "fr_008", "", iParam2, 200, 2);
					break;
				
				case 7:
					func_35(sParam0, iParam1, iParam3, "TAT_FRA_10", "singleplayer_overlays", "fr_009", "", iParam2, 225, 0);
					break;
				
				case 8:
					func_35(sParam0, iParam1, iParam3, "TAT_FRA_12", "singleplayer_overlays", "fr_011", "", iParam2, 195, 0);
					break;
				
				case 9:
					func_35(sParam0, iParam1, iParam3, "TAT_FRA_13", "singleplayer_overlays", "fr_012", "", iParam2, 275, 2);
					break;
				
				case 10:
					func_35(sParam0, iParam1, iParam3, "TAT_FRA_14", "singleplayer_overlays", "fr_013", "", iParam2, 80, 0);
					break;
				
				case 11:
					func_35(sParam0, iParam1, iParam3, "TAT_FRA_15", "singleplayer_overlays", "fr_014", "", iParam2, 95, 0);
					break;
				
				case 12:
					func_35(sParam0, iParam1, iParam3, "TAT_FRA_16", "singleplayer_overlays", "fr_015", "", iParam2, 300, 3);
					break;
				
				case 13:
					func_35(sParam0, iParam1, iParam3, "TAT_FRA_17", "singleplayer_overlays", "fr_016", "", iParam2, 450, 3);
					break;
				
				case 14:
					func_35(sParam0, iParam1, iParam3, "TAT_FRA_18", "singleplayer_overlays", "fr_017", "", iParam2, 345, 3);
					break;
				
				case 15:
					func_35(sParam0, iParam1, iParam3, "TAT_FRA_19", "singleplayer_overlays", "fr_018", "", iParam2, 550, 0);
					break;
				
				case 16:
					func_35(sParam0, iParam1, iParam3, "TAT_FRA_20", "singleplayer_overlays", "fr_019", "", iParam2, 200, 0);
					break;
				
				case 17:
					func_35(sParam0, iParam1, iParam3, "TAT_FRA_21", "singleplayer_overlays", "fr_020", "", iParam2, 180, 0);
					break;
				
				case 18:
					func_35(sParam0, iParam1, iParam3, "TAT_FRA_22", "singleplayer_overlays", "fr_021", "", iParam2, 140, 0);
					break;
				
				case 19:
					func_35(sParam0, iParam1, iParam3, "TAT_FRA_24", "singleplayer_overlays", "fr_023", "", iParam2, 245, 0);
					break;
				
				case 20:
					break;
				
				case 21:
					func_35(sParam0, iParam1, iParam3, "TAT_FRA_26", "singleplayer_overlays", "fr_025", "", iParam2, 370, 0);
					break;
				
				case 22:
					func_35(sParam0, iParam1, iParam3, "TAT_FRA_27", "singleplayer_overlays", "fr_026", "", iParam2, 350, 0);
					break;
				
				case 23:
					func_35(sParam0, iParam1, iParam3, "TAT_FRA_28", "singleplayer_overlays", "fr_027", "", iParam2, 310, 0);
					break;
				
				case 24:
					func_35(sParam0, iParam1, iParam3, "TAT_FRA_29", "singleplayer_overlays", "fr_028", "", iParam2, 210, 0);
					break;
				
				case 25:
					func_35(sParam0, iParam1, iParam3, "TAT_FRA_30", "singleplayer_overlays", "fr_029", "", iParam2, 245, 0);
					break;
				
				case 26:
					func_35(sParam0, iParam1, iParam3, "TAT_FRA_31", "singleplayer_overlays", "fr_030", "", iParam2, 85, 0);
					break;
				
				case 27:
					func_35(sParam0, iParam1, iParam3, "TAT_FRA_32", "singleplayer_overlays", "fr_031", "", iParam2, 210, 0);
					break;
				
				case 28:
					func_35(sParam0, iParam1, iParam3, "TAT_FRA_33", "singleplayer_overlays", "fr_032", "", iParam2, 225, 0);
					break;
				
				case 29:
					func_35(sParam0, iParam1, iParam3, "TAT_FRA_34", "singleplayer_overlays", "fr_033", "", iParam2, 145, 0);
					break;
				
				case 30:
					func_35(sParam0, iParam1, iParam3, "TAT_FRA_35", "singleplayer_overlays", "fr_034", "", iParam2, 230, 0);
					break;
				
				case 31:
					func_35(sParam0, iParam1, iParam3, "TAT_FRA_36", "singleplayer_overlays", "fr_035", "", iParam2, 195, 0);
					break;
				
				case 32:
					func_35(sParam0, iParam1, iParam3, "TAT_FRA_37", "singleplayer_overlays", "fr_036", "", iParam2, 255, 0);
					break;
				
				case 33:
					func_35(sParam0, iParam1, iParam3, "TAT_FRA_38", "singleplayer_overlays", "fr_037", "", iParam2, 300, 0);
					break;
				
				case 34:
					func_35(sParam0, iParam1, iParam3, "TAT_FRA_40", "singleplayer_overlays", "fr_039", "", iParam2, 300, 0);
					break;
				
				case 35:
					func_35(sParam0, iParam1, iParam3, "TAT_FRA_05", "singleplayer_overlays", "fr_004", "", iParam2, 255, 1);
					break;
				
				case 36:
					func_35(sParam0, iParam1, iParam3, "TAT_FRA_06", "singleplayer_overlays", "fr_005", "", iParam2, 175, 1);
					break;
				
				case 37:
					func_35(sParam0, iParam1, iParam3, "TAT_FRA_11", "singleplayer_overlays", "fr_010", "", iParam2, 520, 1);
					break;
				
				case 38:
					func_35(sParam0, iParam1, iParam3, "TAT_FRA_23", "singleplayer_overlays", "fr_022", "", iParam2, 125, 1);
					break;
				
				case 39:
					func_35(sParam0, iParam1, iParam3, "TAT_FRA_39", "singleplayer_overlays", "fr_038", "", iParam2, 365, 1);
					break;
				
				default:
					func_29(sParam0, iParam2, iParam1, 40);
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					func_35(sParam0, iParam1, iParam3, "TAT_TRV_01", "singleplayer_overlays", "tp_000", "", iParam2, 120, 0);
					break;
				
				case 1:
					func_35(sParam0, iParam1, iParam3, "TAT_TRV_02", "singleplayer_overlays", "tp_001", "", iParam2, 150, 3);
					break;
				
				case 2:
					func_35(sParam0, iParam1, iParam3, "TAT_TRV_03", "singleplayer_overlays", "tp_002", "", iParam2, 100, 0);
					break;
				
				case 3:
					func_35(sParam0, iParam1, iParam3, "TAT_TRV_04", "singleplayer_overlays", "tp_003", "", iParam2, 140, 0);
					break;
				
				case 4:
					func_35(sParam0, iParam1, iParam3, "TAT_TRV_05", "singleplayer_overlays", "tp_004", "", iParam2, 250, 0);
					break;
				
				case 5:
					if (func_34() || func_33())
					{
						iVar1 = 380;
						if (func_32() && (func_31() || func_30()))
						{
							iVar1 = 0;
						}
						func_35(sParam0, iParam1, iParam3, "TAT_TRV_06", "singleplayer_overlays", "tp_005", "", iParam2, iVar1, 3);
					}
					break;
				
				case 6:
					func_35(sParam0, iParam1, iParam3, "TAT_TRV_07", "singleplayer_overlays", "tp_006", "", iParam2, 120, 0);
					break;
				
				case 7:
					func_35(sParam0, iParam1, iParam3, "TAT_TRV_08", "singleplayer_overlays", "tp_007", "", iParam2, 250, 0);
					break;
				
				case 8:
					func_35(sParam0, iParam1, iParam3, "TAT_TRV_09", "singleplayer_overlays", "tp_008", "", iParam2, 50, 3);
					break;
				
				case 9:
					func_35(sParam0, iParam1, iParam3, "TAT_TRV_10", "singleplayer_overlays", "tp_009", "", iParam2, 135, 2);
					break;
				
				case 10:
					func_35(sParam0, iParam1, iParam3, "TAT_TRV_11", "singleplayer_overlays", "tp_010", "", iParam2, 245, 0);
					break;
				
				case 11:
					func_35(sParam0, iParam1, iParam3, "TAT_TRV_12", "singleplayer_overlays", "tp_011", "", iParam2, 280, 0);
					break;
				
				case 12:
					func_35(sParam0, iParam1, iParam3, "TAT_TRV_13", "singleplayer_overlays", "tp_012", "", iParam2, 65, 0);
					break;
				
				case 13:
					func_35(sParam0, iParam1, iParam3, "TAT_TRV_14", "singleplayer_overlays", "tp_013", "", iParam2, 150, 6);
					break;
				
				case 14:
					func_35(sParam0, iParam1, iParam3, "TAT_TRV_15", "singleplayer_overlays", "tp_014", "", iParam2, 200, 0);
					break;
				
				case 15:
					func_35(sParam0, iParam1, iParam3, "TAT_TRV_16", "singleplayer_overlays", "tp_015", "", iParam2, 145, 0);
					break;
				
				case 16:
					func_35(sParam0, iParam1, iParam3, "TAT_TRV_17", "singleplayer_overlays", "tp_016", "", iParam2, 290, 0);
					break;
				
				case 17:
					func_35(sParam0, iParam1, iParam3, "TAT_TRV_18", "singleplayer_overlays", "tp_017", "", iParam2, 350, 3);
					break;
				
				case 18:
					func_35(sParam0, iParam1, iParam3, "TAT_TRV_19", "singleplayer_overlays", "tp_018", "", iParam2, 70, 0);
					break;
				
				case 19:
					func_35(sParam0, iParam1, iParam3, "TAT_TRV_20", "singleplayer_overlays", "tp_019", "", iParam2, 180, 6);
					break;
				
				case 20:
					func_35(sParam0, iParam1, iParam3, "TAT_TRV_21", "singleplayer_overlays", "tp_020", "", iParam2, 230, 0);
					break;
				
				case 21:
					func_35(sParam0, iParam1, iParam3, "TAT_TRV_22", "singleplayer_overlays", "tp_021", "", iParam2, 200, 0);
					break;
				
				case 22:
					func_35(sParam0, iParam1, iParam3, "TAT_TRV_24", "singleplayer_overlays", "tp_023", "", iParam2, 240, 0);
					break;
				
				case 23:
					func_35(sParam0, iParam1, iParam3, "TAT_TRV_25", "singleplayer_overlays", "tp_024", "", iParam2, 195, 0);
					break;
				
				case 24:
					func_35(sParam0, iParam1, iParam3, "TAT_TRV_26", "singleplayer_overlays", "tp_025", "", iParam2, 225, 2);
					break;
				
				case 25:
					func_35(sParam0, iParam1, iParam3, "TAT_TRV_28", "singleplayer_overlays", "tp_027", "", iParam2, 175, 0);
					break;
				
				case 26:
					func_35(sParam0, iParam1, iParam3, "TAT_TRV_29", "singleplayer_overlays", "tp_028", "", iParam2, 65, 0);
					break;
				
				case 27:
					func_35(sParam0, iParam1, iParam3, "TAT_TRV_30", "singleplayer_overlays", "tp_029", "", iParam2, 50, 0);
					break;
				
				case 28:
					func_35(sParam0, iParam1, iParam3, "TAT_TRV_31", "singleplayer_overlays", "tp_030", "", iParam2, 70, 0);
					break;
				
				case 29:
					func_35(sParam0, iParam1, iParam3, "TAT_TRV_34", "singleplayer_overlays", "tp_033", "", iParam2, 70, 0);
					break;
				
				case 30:
					func_35(sParam0, iParam1, iParam3, "TAT_TRV_23", "singleplayer_overlays", "tp_022", "", iParam2, 500, 1);
					break;
				
				case 31:
					func_35(sParam0, iParam1, iParam3, "TAT_TRV_27", "singleplayer_overlays", "tp_026", "", iParam2, 300, 1);
					break;
				
				case 32:
					func_35(sParam0, iParam1, iParam3, "TAT_TRV_32", "singleplayer_overlays", "tp_031", "", iParam2, 190, 1);
					break;
				
				case 33:
					func_35(sParam0, iParam1, iParam3, "TAT_TRV_33", "singleplayer_overlays", "tp_032", "", iParam2, 129, 1);
					break;
				
				default:
					func_29(sParam0, iParam2, iParam1, 34);
					break;
			}
			break;
		
		case 3:
		case 4:
			switch (iParam1)
			{
				case 0:
					func_35(sParam0, iParam1, iParam3, "TAT_FM_008", "multiplayer_overlays", "000", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(20000) * Global_40001.f_B3D)), 0);
					break;
				
				case 1:
					func_35(sParam0, iParam1, iParam3, "TAT_FM_009", "multiplayer_overlays", "001", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1400) * Global_40001.f_B3E)), 2);
					break;
				
				case 2:
					func_35(sParam0, iParam1, iParam3, "TAT_FM_010", "multiplayer_overlays", "002", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(9750) * Global_40001.f_B3F)), 3);
					break;
				
				case 3:
					func_35(sParam0, iParam1, iParam3, "TAT_FM_011", "multiplayer_overlays", "003", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2150) * Global_40001.f_B40)), 0);
					break;
				
				case 4:
					func_35(sParam0, iParam1, iParam3, "TAT_FM_012", "multiplayer_overlays", "004", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_40001.f_B41)), 0);
					break;
				
				case 54:
					func_35(sParam0, iParam1, iParam3, "TAT_FM_013", "multiplayer_overlays", "005", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(12400) * Global_40001.f_B42)), 1);
					break;
				
				case 5:
					func_35(sParam0, iParam1, iParam3, "TAT_FM_014", "multiplayer_overlays", "006", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(3500) * Global_40001.f_B43)), 0);
					break;
				
				case 6:
					func_35(sParam0, iParam1, iParam3, "TAT_FM_015", "multiplayer_overlays", "007", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(4950) * Global_40001.f_B44)), 2);
					break;
				
				case 55:
					func_35(sParam0, iParam1, iParam3, "TAT_FM_016", "multiplayer_overlays", "008", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1350) * Global_40001.f_B45)), 1);
					break;
				
				case 7:
					func_35(sParam0, iParam1, iParam3, "TAT_FM_017", "multiplayer_overlays", "009", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1450) * Global_40001.f_B46)), 0);
					break;
				
				case 8:
					func_35(sParam0, iParam1, iParam3, "TAT_FM_018", "multiplayer_overlays", "010", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2700) * Global_40001.f_B47)), 7);
					break;
				
				case 9:
					func_35(sParam0, iParam1, iParam3, "TAT_FM_019", "multiplayer_overlays", "011", "rank", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1200) * Global_40001.f_B48)), 0);
					break;
				
				case 10:
					func_35(sParam0, iParam1, iParam3, "TAT_FM_020", "multiplayer_overlays", "012", "rank", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1500) * Global_40001.f_B49)), 0);
					break;
				
				case 11:
					func_35(sParam0, iParam1, iParam3, "TAT_FM_021", "multiplayer_overlays", "013", "rank", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2650) * Global_40001.f_B4A)), 0);
					break;
				
				case 56:
					func_35(sParam0, iParam1, iParam3, "TAT_FM_022", "multiplayer_overlays", "014", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1900) * Global_40001.f_B4B)), 1);
					break;
				
				case 12:
					func_35(sParam0, iParam1, iParam3, "TAT_FM_023", "multiplayer_overlays", "015", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(4950) * Global_40001.f_B4C)), 2);
					break;
				
				case 57:
					func_35(sParam0, iParam1, iParam3, "TAT_FM_024", "multiplayer_overlays", "016", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2400) * Global_40001.f_B4D)), 1);
					break;
				
				case 58:
					func_35(sParam0, iParam1, iParam3, "TAT_FM_025", "multiplayer_overlays", "017", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5100) * Global_40001.f_B4E)), 1);
					break;
				
				case 59:
					func_35(sParam0, iParam1, iParam3, "TAT_FM_026", "multiplayer_overlays", "018", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7400) * Global_40001.f_B4F)), 1);
					break;
				
				case 60:
					func_35(sParam0, iParam1, iParam3, "TAT_FM_027", "multiplayer_overlays", "019", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_40001.f_B50)), 1);
					break;
				
				case 17:
					func_35(sParam0, iParam1, iParam3, "TAT_FM_201", "multiplayer_overlays", "005", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2400) * Global_40001.f_B55)), 2);
					break;
				
				case 18:
					func_35(sParam0, iParam1, iParam3, "TAT_FM_202", "multiplayer_overlays", "006", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5100) * Global_40001.f_B56)), 2);
					break;
				
				case 19:
					func_35(sParam0, iParam1, iParam3, "TAT_FM_203", "multiplayer_overlays", "015", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(3600) * Global_40001.f_B57)), 2);
					break;
				
				case 20:
					func_35(sParam0, iParam1, iParam3, "TAT_FM_204", "multiplayer_overlays", "000", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_40001.f_B58)), 3);
					break;
				
				case 21:
					func_35(sParam0, iParam1, iParam3, "TAT_FM_205", "multiplayer_overlays", "001", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(12500) * Global_40001.f_B59)), 3);
					break;
				
				case 22:
					func_35(sParam0, iParam1, iParam3, "TAT_FM_206", "multiplayer_overlays", "003", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_40001.f_B5A)), 3);
					break;
				
				case 23:
					func_35(sParam0, iParam1, iParam3, "TAT_FM_207", "multiplayer_overlays", "014", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_40001.f_B5B)), 3);
					break;
				
				case 24:
					func_35(sParam0, iParam1, iParam3, "TAT_FM_208", "multiplayer_overlays", "018", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7500) * Global_40001.f_B5C)), 3);
					break;
				
				case 25:
					func_35(sParam0, iParam1, iParam3, "TAT_FM_209", "multiplayer_overlays", "002", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(3750) * Global_40001.f_B5D)), 2);
					break;
				
				case 26:
					func_35(sParam0, iParam1, iParam3, "TAT_FM_210", "multiplayer_overlays", "007", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(3750) * Global_40001.f_B5E)), 3);
					break;
				
				case 27:
					func_35(sParam0, iParam1, iParam3, "TAT_FM_211", "multiplayer_overlays", "008", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(4800) * Global_40001.f_B5F)), 3);
					break;
				
				case 28:
					func_35(sParam0, iParam1, iParam3, "TAT_FM_212", "multiplayer_overlays", "017", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(3500) * Global_40001.f_B60)), 3);
					break;
				
				case 61:
					func_35(sParam0, iParam1, iParam3, "TAT_FM_213", "multiplayer_overlays", "009", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(12350) * Global_40001.f_B61)), 1);
					break;
				
				case 62:
					func_35(sParam0, iParam1, iParam3, "TAT_FM_214", "multiplayer_overlays", "011", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1900) * Global_40001.f_B62)), 1);
					break;
				
				case 63:
					func_35(sParam0, iParam1, iParam3, "TAT_FM_215", "multiplayer_overlays", "013", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(4500) * Global_40001.f_B63)), 1);
					break;
				
				case 64:
					func_35(sParam0, iParam1, iParam3, "TAT_FM_216", "multiplayer_overlays", "016", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(12250) * Global_40001.f_B64)), 1);
					break;
				
				case 65:
					func_35(sParam0, iParam1, iParam3, "TAT_FM_217", "multiplayer_overlays", "019", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(12300) * Global_40001.f_B65)), 1);
					break;
				
				case 29:
					func_35(sParam0, iParam1, iParam3, "TAT_FM_218", "multiplayer_overlays", "010", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2500) * Global_40001.f_B66)), 0);
					break;
				
				case 30:
					func_35(sParam0, iParam1, iParam3, "TAT_FM_219", "multiplayer_overlays", "004", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_40001.f_B67)), 0);
					break;
				
				case 31:
					func_35(sParam0, iParam1, iParam3, "TAT_FM_220", "multiplayer_overlays", "012", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_40001.f_B68)), 0);
					break;
				
				case 66:
					func_35(sParam0, iParam1, iParam3, "TAT_FM_221", "multiplayer_overlays", "020", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7500) * Global_40001.f_B69)), 1);
					break;
				
				case 32:
					func_35(sParam0, iParam1, iParam3, "TAT_FM_222", "multiplayer_overlays", "021", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_40001.f_B6A)), 2);
					break;
				
				case 33:
					func_35(sParam0, iParam1, iParam3, "TAT_FM_223", "multiplayer_overlays", "022", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7300) * Global_40001.f_B6B)), 3);
					break;
				
				case 34:
					func_35(sParam0, iParam1, iParam3, "TAT_FM_224", "multiplayer_overlays", "023", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7250) * Global_40001.f_B6C)), 2);
					break;
				
				case 35:
					func_35(sParam0, iParam1, iParam3, "TAT_FM_225", "multiplayer_overlays", "024", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(11900) * Global_40001.f_B6D)), 0);
					break;
				
				case 36:
					func_35(sParam0, iParam1, iParam3, "TAT_FM_226", "multiplayer_overlays", "025", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2750) * Global_40001.f_B6E)), 0);
					break;
				
				case 37:
					func_35(sParam0, iParam1, iParam3, "TAT_FM_227", "multiplayer_overlays", "026", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1750) * Global_40001.f_B6F)), 0);
					break;
				
				case 38:
					func_35(sParam0, iParam1, iParam3, "TAT_FM_228", "multiplayer_overlays", "027", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7300) * Global_40001.f_B70)), 3);
					break;
				
				case 39:
					func_35(sParam0, iParam1, iParam3, "TAT_FM_229", "multiplayer_overlays", "028", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(3250) * Global_40001.f_B71)), 2);
					break;
				
				case 40:
					func_35(sParam0, iParam1, iParam3, "TAT_FM_230", "multiplayer_overlays", "029", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1000) * Global_40001.f_B72)), 0);
					break;
				
				case 67:
					func_35(sParam0, iParam1, iParam3, "TAT_FM_231", "multiplayer_overlays", "030", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_40001.f_B73)), 1);
					break;
				
				case 41:
					func_35(sParam0, iParam1, iParam3, "TAT_FM_232", "multiplayer_overlays", "031", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7500) * Global_40001.f_B74)), 2);
					break;
				
				case 68:
					func_35(sParam0, iParam1, iParam3, "TAT_FM_233", "multiplayer_overlays", "032", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5100) * Global_40001.f_B75)), 1);
					break;
				
				case 42:
					func_35(sParam0, iParam1, iParam3, "TAT_FM_234", "multiplayer_overlays", "033", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5050) * Global_40001.f_B76)), 0);
					break;
				
				case 43:
					func_35(sParam0, iParam1, iParam3, "TAT_FM_235", "multiplayer_overlays", "034", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2450) * Global_40001.f_B77)), 2);
					break;
				
				case 44:
					func_35(sParam0, iParam1, iParam3, "TAT_FM_236", "multiplayer_overlays", "035", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(4950) * Global_40001.f_B78)), 0);
					break;
				
				case 45:
					func_35(sParam0, iParam1, iParam3, "TAT_FM_237", "multiplayer_overlays", "036", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5100) * Global_40001.f_B79)), 0);
					break;
				
				case 46:
					func_35(sParam0, iParam1, iParam3, "TAT_FM_238", "multiplayer_overlays", "037", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(12250) * Global_40001.f_B7A)), 0);
					break;
				
				case 47:
					func_35(sParam0, iParam1, iParam3, "TAT_FM_239", "multiplayer_overlays", "038", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1150) * Global_40001.f_B7B)), 3);
					break;
				
				case 48:
					func_35(sParam0, iParam1, iParam3, "TAT_FM_240", "multiplayer_overlays", "039", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7500) * Global_40001.f_B7C)), 3);
					break;
				
				case 49:
					func_35(sParam0, iParam1, iParam3, "TAT_FM_241", "multiplayer_overlays", "040", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7600) * Global_40001.f_B7D)), 3);
					break;
				
				case 50:
					func_35(sParam0, iParam1, iParam3, "TAT_FM_242", "multiplayer_overlays", "041", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2600) * Global_40001.f_B7E)), 2);
					break;
				
				case 51:
					func_35(sParam0, iParam1, iParam3, "TAT_FM_243", "multiplayer_overlays", "042", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2500) * Global_40001.f_B7F)), 3);
					break;
				
				case 52:
					func_35(sParam0, iParam1, iParam3, "TAT_FM_244", "multiplayer_overlays", "043", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7450) * Global_40001.f_B80)), 3);
					break;
				
				case 53:
					func_35(sParam0, iParam1, iParam3, "TAT_FM_245", "multiplayer_overlays", "044", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7500) * Global_40001.f_B81)), 0);
					break;
				
				case 69:
					func_35(sParam0, iParam1, iParam3, "TAT_FM_246", "multiplayer_overlays", "045", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_40001.f_B82)), 1);
					break;
				
				case 70:
					func_35(sParam0, iParam1, iParam3, "TAT_FM_247", "multiplayer_overlays", "047", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2500) * Global_40001.f_B83)), 2);
					break;
			}
			if (iVar0 == joaat("mp_m_freemode_01"))
			{
				switch (iParam1)
				{
					case 73:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_001", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 74:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_002", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 75:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_003", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 76:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_004", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 77:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_005", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 78:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_006", "torsoDecal", iParam2, 100, 0);
						break;
					
					case joaat("mpsv_lp0_31"):
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_009", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 80:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_013", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 81:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_014", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 82:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_015", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 83:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_016", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 84:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_019", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 85:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_020", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 86:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_036", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 90:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_017", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 91:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_018", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 124:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_046", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 125:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_045", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 87:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_000", "torsoDecal", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(100) * Global_40001.f_B84)), 0);
						break;
					
					case 88:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_001", "torsoDecal", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(100) * Global_40001.f_B85)), 0);
						break;
					
					case 89:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_002", "torsoDecal", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(100) * Global_40001.f_B86)), 0);
						break;
					
					case 93:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 94:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_002", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 95:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_003", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 96:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_004", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 97:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_005", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 98:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_006", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 99:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_007", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 100:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_008", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 101:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_009", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 102:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_010", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 103:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_011", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 104:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_012", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 105:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_013", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 106:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_014", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 107:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_015", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 108:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 109:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 110:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 111:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 112:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 113:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 114:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGInd_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 115:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 116:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 117:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 123:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "mpBeach_overlays", "FM_Hair_Fuzz", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 13:
						func_35(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_A", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_40001.f_B51)), 0);
						break;
					
					case 14:
						func_35(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_B", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_40001.f_B52)), 0);
						break;
					
					case 15:
						func_35(sParam0, iParam1, iParam3, "TAT_FMM_CLB", "multiplayer_overlays", "000_C", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_40001.f_B53)), 2);
						break;
					
					case 16:
						func_35(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_D", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_40001.f_B54)), 0);
						break;
					
					case 71:
						func_35(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_E", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_40001.f_B54)), 0);
						break;
					
					case 72:
						func_35(sParam0, iParam1, iParam3, "TAT_FMM_CLB", "multiplayer_overlays", "000_F", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_40001.f_B54)), 0);
						break;
				}
			}
			else if (iVar0 == joaat("mp_f_freemode_01"))
			{
				switch (iParam1)
				{
					case 73:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_027_f", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 74:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_028_f", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 75:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_034_f", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 76:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_036_f", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 77:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_048", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 78:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_052", "torsoDecal", iParam2, 100, 0);
						break;
					
					case joaat("mpsv_lp0_31"):
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_053", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 80:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_054", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 81:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_055", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 82:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_056", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 83:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_058", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 84:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_067", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 85:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_068", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 92:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_051", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 87:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_000", "torsoDecal", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(100) * Global_40001.f_B84)), 0);
						break;
					
					case 88:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_001", "torsoDecal", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(100) * Global_40001.f_B85)), 0);
						break;
					
					case 89:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_002", "torsoDecal", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(100) * Global_40001.f_B86)), 0);
						break;
					
					case 93:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 94:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_002", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 95:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_003", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 96:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_004", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 97:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_005", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 98:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_006", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 99:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_007", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 100:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_008", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 101:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_009", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 102:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_010", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 103:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_011", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 104:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_012", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 105:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_013", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 106:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_014", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 107:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_015", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 108:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 109:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 110:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 111:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 112:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 113:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 114:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGInd_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 115:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 116:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 117:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 118:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 119:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 120:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 121:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 122:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 123:
						func_35(sParam0, iParam1, iParam3, "NO_LABEL", "mpBeach_overlays", "FM_Hair_Fuzz", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 13:
						func_35(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_A", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_40001.f_B51)), 0);
						break;
					
					case 14:
						func_35(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_B", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_40001.f_B52)), 0);
						break;
					
					case 15:
						func_35(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_C", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_40001.f_B53)), 2);
						break;
					
					case 16:
						func_35(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_D", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_40001.f_B54)), 0);
						break;
					}
			}
			break;
	}
	if ((iParam2 == 3 || iParam2 == 4) && iParam1 >= 129)
	{
		func_29(sParam0, iParam2, iParam1, 129);
	}
	if (iParam4 == 22)
	{
		sParam0->f_7 *= 2;
	}
	return sParam0->f_B != -1;
}

void func_29(char* sParam0, int iParam1, int iParam2, int iParam3)//Position - 0x75AB
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

int func_30()//Position - 0x763D
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

int func_31()//Position - 0x76FD
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

int func_32()//Position - 0x7781
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

int func_33()//Position - 0x7804
{
	return 1;
}

int func_34()//Position - 0x780D
{
	return 1;
}

void func_35(char* sParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, int iParam7, int iParam8, int iParam9)//Position - 0x7816
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

int func_36(int iParam0)//Position - 0x7ACB
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

int func_37(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x7B20
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var uVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	var uVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	var uVar22;
	int iVar23;
	
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		if (iParam1 == 11)
		{
			if (iParam2 == 1)
			{
				return 73;
			}
			else if (iParam2 == 3)
			{
				return 74;
			}
			else if (iParam2 == 5)
			{
				return 75;
			}
			else if (iParam2 == 7)
			{
				return 76;
			}
			else if (iParam2 == 4)
			{
				return 77;
			}
			else if (iParam2 == 8)
			{
				return 78;
			}
			else if (iParam2 == 11)
			{
				return 79;
			}
			else if (iParam2 == 19)
			{
				return 80;
			}
			else if (iParam2 == 21)
			{
				return 81;
			}
			else if (iParam2 == 22)
			{
				return 82;
			}
			else if (iParam2 == 24)
			{
				return 83;
			}
			else if (iParam2 == 20)
			{
				return 84;
			}
			else if (iParam2 == 30)
			{
				return 85;
			}
			else if (iParam2 == 23)
			{
				if (func_44(89, -1))
				{
					return 89;
				}
			}
			else if (iParam2 == 17)
			{
				if (func_44(88, -1))
				{
					return 88;
				}
			}
			else if (iParam2 == 28)
			{
				if (func_44(87, -1))
				{
					return 87;
				}
			}
			else if (iParam2 == 41)
			{
				return 86;
			}
			else if (iParam2 >= 237)
			{
				iVar0 = func_41(iParam0, iParam2, 11, 3);
				if (iVar0 != -1)
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("TAT_DECL_NO_SAVE"), 0))
					{
						iVar1 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar0);
						iVar2 = 0;
						while (iVar2 < iVar1)
						{
							FILES::GET_FORCED_COMPONENT(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
							if (iVar5 == 10)
							{
								if (iVar3 != 0 && iVar3 != joaat("0"))
								{
									return func_38(iVar3, 3);
								}
								else
								{
									return uVar4;
								}
							}
							iVar2++;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("MULTI_DECAL"), 0))
					{
						if (iParam3 == 0)
						{
							iParam3 = func_24(1743, -1, 0);
						}
						return func_38(iParam3, 3);
					}
				}
			}
		}
		else if (iParam1 == 8)
		{
			if (iParam2 == 1)
			{
				return 73;
			}
			else if (iParam2 == 3)
			{
				return 74;
			}
			else if (iParam2 == 5)
			{
				return 75;
			}
			else if (iParam2 == 7)
			{
				return 76;
			}
			else if (iParam2 == 4)
			{
				return 77;
			}
			else if (iParam2 == 8)
			{
				return 78;
			}
			else if (iParam2 == 11)
			{
				return 79;
			}
			else if (iParam2 == 23)
			{
				if (func_44(89, -1))
				{
					return 89;
				}
			}
			else if (iParam2 == 17)
			{
				if (func_44(88, -1))
				{
					return 88;
				}
			}
			else if (iParam2 == 28)
			{
				if (func_44(87, -1))
				{
					return 87;
				}
			}
			else if (iParam2 == 33)
			{
				return 73;
			}
			else if (iParam2 == 35)
			{
				return 74;
			}
			else if (iParam2 == 37)
			{
				return 75;
			}
			else if (iParam2 == 39)
			{
				return 76;
			}
			else if (iParam2 == 36)
			{
				return 77;
			}
			else if (iParam2 == 40)
			{
				return 78;
			}
			else if (iParam2 == 43)
			{
				return 79;
			}
			else if (iParam2 == 19)
			{
				return 80;
			}
			else if (iParam2 == 21)
			{
				return 81;
			}
			else if (iParam2 == 22)
			{
				return 82;
			}
			else if (iParam2 == 24)
			{
				return 83;
			}
			else if (iParam2 == 20)
			{
				return 84;
			}
			else if (iParam2 == 30)
			{
				return 85;
			}
			else if (iParam2 == 227)
			{
				return 80;
			}
			else if (iParam2 == 229)
			{
				return 81;
			}
			else if (iParam2 == 230)
			{
				return 82;
			}
			else if (iParam2 == 232)
			{
				return 83;
			}
			else if (iParam2 == 228)
			{
				return 84;
			}
			else if (iParam2 == 238)
			{
				return 85;
			}
			else if (iParam2 == 231)
			{
				if (func_44(89, -1))
				{
					return 89;
				}
			}
			else if (iParam2 == 225)
			{
				if (func_44(88, -1))
				{
					return 88;
				}
			}
			else if (iParam2 == 236)
			{
				if (func_44(87, -1))
				{
					return 87;
				}
			}
			else if (iParam2 >= 241)
			{
				iVar6 = func_41(iParam0, iParam2, 8, 3);
				if (iVar6 != -1)
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("TAT_DECL_NO_SAVE"), 0))
					{
						iVar7 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar6);
						iVar8 = 0;
						while (iVar8 < iVar7)
						{
							FILES::GET_FORCED_COMPONENT(iVar6, iVar8, &iVar9, &uVar10, &iVar11);
							if (iVar11 == 10)
							{
								if (iVar9 != 0 && iVar9 != joaat("0"))
								{
									return func_38(iVar9, 3);
								}
								else
								{
									return uVar10;
								}
							}
							iVar8++;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("MULTI_DECAL"), 0))
					{
						if (iParam3 == 0)
						{
							iParam3 = func_24(1743, -1, 0);
						}
						return func_38(iParam3, 3);
					}
				}
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		if (iParam1 == 11)
		{
			if (iParam2 == 1)
			{
				return 75;
			}
			else if (iParam2 == 2)
			{
				return 77;
			}
			else if (iParam2 == 4)
			{
				if (func_44(89, -1))
				{
					return 89;
				}
			}
			else if (iParam2 == 7)
			{
				if (func_44(88, -1))
				{
					return 88;
				}
			}
			else if (iParam2 == 9)
			{
				if (func_44(87, -1))
				{
					return 87;
				}
			}
			else if (iParam2 == 32)
			{
				return 78;
			}
			else if (iParam2 == 33)
			{
				return 79;
			}
			else if (iParam2 == 34)
			{
				return 80;
			}
			else if (iParam2 == 35)
			{
				return 81;
			}
			else if (iParam2 == 36)
			{
				return 82;
			}
			else if (iParam2 == 62)
			{
				return 76;
			}
			else if (iParam2 == 63)
			{
				return 83;
			}
			else if (iParam2 == 186)
			{
				return 84;
			}
			else if (iParam2 == 187)
			{
				return 85;
			}
			else if (iParam2 == 191)
			{
				return 74;
			}
			else if (iParam2 >= 256)
			{
				iVar12 = func_41(iParam0, iParam2, 11, 4);
				if (iVar12 != -1)
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("TAT_DECL_NO_SAVE"), 0))
					{
						iVar13 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar12);
						iVar14 = 0;
						while (iVar14 < iVar13)
						{
							FILES::GET_FORCED_COMPONENT(iVar12, iVar14, &iVar15, &uVar16, &iVar17);
							if (iVar17 == 10)
							{
								if (iVar15 != 0 && iVar15 != joaat("0"))
								{
									return func_38(iVar15, 4);
								}
								else
								{
									return uVar16;
								}
							}
							iVar14++;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("MULTI_DECAL"), 0))
					{
						if (iParam3 == 0)
						{
							iParam3 = func_24(1743, -1, 0);
						}
						return func_38(iParam3, 4);
					}
				}
			}
		}
		else if (iParam1 == 8)
		{
			if (iParam2 == 1)
			{
				return 75;
			}
			else if (iParam2 == 2)
			{
				return 77;
			}
			else if (iParam2 == 4)
			{
				if (func_44(89, -1))
				{
					return 89;
				}
			}
			else if (iParam2 == 7)
			{
				if (func_44(88, -1))
				{
					return 88;
				}
			}
			else if (iParam2 == 9)
			{
				if (func_44(87, -1))
				{
					return 87;
				}
			}
			else if (iParam2 == 17)
			{
				return 75;
			}
			else if (iParam2 == 18)
			{
				return 77;
			}
			else if (iParam2 == 20)
			{
				if (func_44(89, -1))
				{
					return 89;
				}
			}
			else if (iParam2 == 23)
			{
				if (func_44(88, -1))
				{
					return 88;
				}
			}
			else if (iParam2 == 25)
			{
				if (func_44(87, -1))
				{
					return 87;
				}
			}
			else if (iParam2 == 81)
			{
				return 84;
			}
			else if (iParam2 == 82)
			{
				return 85;
			}
			else if (iParam2 == 86)
			{
				return 74;
			}
			else if (iParam2 >= 136)
			{
				iVar18 = func_41(iParam0, iParam2, 8, 4);
				if (iVar18 != -1)
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar18, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar18, joaat("TAT_DECL_NO_SAVE"), 0))
					{
						iVar19 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar18);
						iVar20 = 0;
						while (iVar20 < iVar19)
						{
							FILES::GET_FORCED_COMPONENT(iVar18, iVar20, &iVar21, &uVar22, &iVar23);
							if (iVar23 == 10)
							{
								if (iVar21 != 0 && iVar21 != joaat("0"))
								{
									return func_38(iVar21, 4);
								}
								else
								{
									return uVar22;
								}
							}
							iVar20++;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar18, joaat("MULTI_DECAL"), 0))
					{
						if (iParam3 == 0)
						{
							iParam3 = func_24(1743, -1, 0);
						}
						return func_38(iParam3, 4);
					}
				}
			}
		}
	}
	return -1;
}

int func_38(int iParam0, int iParam1)//Position - 0x8381
{
	var uVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	
	if (iParam1 == 3)
	{
		if (func_40(iParam0, &uVar0))
		{
			return uVar0;
		}
	}
	else if (iParam1 == 4)
	{
		if (func_39(iParam0, &uVar0))
		{
			return uVar0;
		}
	}
	iVar2 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iParam1);
	iVar1 = 0;
	while (iVar1 < iVar2)
	{
		if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(iParam1, iVar1, &Var3))
		{
			if (iParam0 == Var3.f_3)
			{
				return (129 + iVar1);
			}
		}
		iVar1++;
	}
	return -1;
}

int func_39(int iParam0, var uParam1)//Position - 0x83F2
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case joaat("MP_Bea_F_Chest_002"):
			iVar0 = 0;
			break;
		
		case joaat("MP_Bea_F_Back_001"):
			iVar0 = 1;
			break;
		
		case joaat("MP_Bea_F_LArm_000"):
			iVar0 = 2;
			break;
		
		case joaat("MP_Bea_F_Back_000"):
			iVar0 = 3;
			break;
		
		case joaat("MP_Bea_F_Should_001"):
			iVar0 = 4;
			break;
		
		case joaat("MP_Bea_F_Back_002"):
			iVar0 = 5;
			break;
		
		case joaat("MP_Bea_F_RSide_000"):
			iVar0 = 6;
			break;
		
		case joaat("MP_Bea_F_RLeg_000"):
			iVar0 = 7;
			break;
		
		case joaat("MP_Bea_F_Neck_000"):
			iVar0 = 8;
			break;
		
		case joaat("MP_Bea_F_Stom_001"):
			iVar0 = 9;
			break;
		
		case joaat("MP_Bea_F_Stom_002"):
			iVar0 = 10;
			break;
		
		case joaat("MP_Bea_F_Should_000"):
			iVar0 = 11;
			break;
		
		case joaat("MP_Bea_F_Chest_000"):
			iVar0 = 12;
			break;
		
		case joaat("MP_Bea_F_Chest_001"):
			iVar0 = 13;
			break;
		
		case joaat("MP_Bea_F_Stom_000"):
			iVar0 = 14;
			break;
		
		case joaat("MP_Bea_F_RArm_001"):
			iVar0 = 15;
			break;
		
		case joaat("MP_Bea_F_LArm_001"):
			iVar0 = 16;
			break;
		
		case joaat("MP_Val_F_Tshirt_A"):
			iVar0 = 17;
			break;
		
		case joaat("MP_Val_F_Tshirt_B"):
			iVar0 = 18;
			break;
		
		case joaat("MP_Val_F_Tshirt_C"):
			iVar0 = 19;
			break;
		
		case joaat("MP_Val_F_Tshirt_D"):
			iVar0 = 20;
			break;
		
		case joaat("MP_Val_F_Tshirt_E"):
			iVar0 = 21;
			break;
		
		case joaat("MP_Val_F_Tshirt_F"):
			iVar0 = 22;
			break;
		
		case joaat("MP_Val_F_Tshirt_G"):
			iVar0 = 23;
			break;
		
		case joaat("MP_Val_F_Tshirt_H"):
			iVar0 = 24;
			break;
		
		case joaat("MP_Val_F_Tshirt_I"):
			iVar0 = 25;
			break;
		
		case joaat("MP_Val_F_Tshirt_J"):
			iVar0 = 26;
			break;
		
		case joaat("MP_Val_F_Tshirt_K"):
			iVar0 = 27;
			break;
		
		case joaat("MP_Val_F_Tshirt_L"):
			iVar0 = 28;
			break;
		
		case joaat("MP_Val_F_Tshirt_M"):
			iVar0 = 29;
			break;
		
		case joaat("MP_Val_F_Tshirt_N"):
			iVar0 = 30;
			break;
		
		case joaat("MP_Val_F_Tshirt_O"):
			iVar0 = 31;
			break;
		
		case joaat("MP_Val_F_Tshirt_P"):
			iVar0 = 32;
			break;
		
		case joaat("MP_Val_F_Tshirt_Q"):
			iVar0 = 33;
			break;
		
		case joaat("MP_Val_F_Tshirt_R"):
			iVar0 = 34;
			break;
		
		case joaat("MP_Val_F_Tshirt_S"):
			iVar0 = 35;
			break;
		
		case joaat("MP_Val_F_Tshirt_T"):
			iVar0 = 36;
			break;
		
		case joaat("MP_Buis_F_Back_000"):
			iVar0 = 37;
			break;
		
		case joaat("MP_Buis_F_Back_001"):
			iVar0 = 38;
			break;
		
		case joaat("MP_Buis_F_Chest_000"):
			iVar0 = 39;
			break;
		
		case joaat("MP_Buis_F_Chest_001"):
			iVar0 = 40;
			break;
		
		case joaat("MP_Buis_F_Chest_002"):
			iVar0 = 41;
			break;
		
		case joaat("MP_Buis_F_LArm_000"):
			iVar0 = 42;
			break;
		
		case joaat("MP_Buis_F_LLeg_000"):
			iVar0 = 43;
			break;
		
		case joaat("MP_Buis_F_Neck_000"):
			iVar0 = 44;
			break;
		
		case joaat("MP_Buis_F_Neck_001"):
			iVar0 = 45;
			break;
		
		case joaat("MP_Buis_F_RArm_000"):
			iVar0 = 46;
			break;
		
		case joaat("MP_Buis_F_RLeg_000"):
			iVar0 = 47;
			break;
		
		case joaat("MP_Buis_F_Stom_000"):
			iVar0 = 48;
			break;
		
		case joaat("MP_Buis_F_Stom_001"):
			iVar0 = 49;
			break;
		
		case joaat("MP_Buis_F_Stom_002"):
			iVar0 = 50;
			break;
		
		case joaat("MP_Female_Crew_Tat_000"):
			iVar0 = 51;
			break;
		
		case joaat("MP_Female_Crew_Tat_001"):
			iVar0 = 52;
			break;
		
		case joaat("FM_Bus_F_Hair_a"):
			iVar0 = 53;
			break;
		
		case joaat("FM_Bus_F_Hair_b"):
			iVar0 = 54;
			break;
		
		case joaat("FM_Bus_F_Hair_c"):
			iVar0 = 55;
			break;
		
		case joaat("FM_Bus_F_Hair_d"):
			iVar0 = 56;
			break;
		
		case joaat("FM_Bus_F_Hair_e"):
			iVar0 = 57;
			break;
		
		case joaat("FM_Hip_F_Tat_000"):
			iVar0 = 58;
			break;
		
		case joaat("FM_Hip_F_Tat_001"):
			iVar0 = 59;
			break;
		
		case joaat("FM_Hip_F_Tat_002"):
			iVar0 = 60;
			break;
		
		case joaat("FM_Hip_F_Tat_003"):
			iVar0 = 61;
			break;
		
		case joaat("FM_Hip_F_Tat_004"):
			iVar0 = 62;
			break;
		
		case joaat("FM_Hip_F_Tat_005"):
			iVar0 = 63;
			break;
		
		case joaat("FM_Hip_F_Tat_006"):
			iVar0 = 64;
			break;
		
		case joaat("FM_Hip_F_Tat_007"):
			iVar0 = 65;
			break;
		
		case joaat("FM_Hip_F_Tat_008"):
			iVar0 = 66;
			break;
		
		case joaat("FM_Hip_F_Tat_009"):
			iVar0 = 67;
			break;
		
		case joaat("FM_Hip_F_Tat_010"):
			iVar0 = 68;
			break;
		
		case joaat("FM_Hip_F_Tat_011"):
			iVar0 = 69;
			break;
		
		case joaat("FM_Hip_F_Tat_012"):
			iVar0 = 70;
			break;
		
		case joaat("FM_Hip_F_Tat_013"):
			iVar0 = 71;
			break;
		
		case joaat("FM_Hip_F_Tat_014"):
			iVar0 = 72;
			break;
		
		case joaat("FM_Hip_F_Tat_015"):
			iVar0 = 73;
			break;
		
		case joaat("FM_Hip_F_Tat_016"):
			iVar0 = 74;
			break;
		
		case joaat("FM_Hip_F_Tat_017"):
			iVar0 = 75;
			break;
		
		case joaat("FM_Hip_F_Tat_018"):
			iVar0 = 76;
			break;
		
		case joaat("FM_Hip_F_Tat_019"):
			iVar0 = 77;
			break;
		
		case joaat("FM_Hip_F_Tat_020"):
			iVar0 = 78;
			break;
		
		case joaat("FM_Hip_F_Tat_021"):
			iVar0 = 79;
			break;
		
		case joaat("FM_Hip_F_Tat_022"):
			iVar0 = 80;
			break;
		
		case joaat("FM_Hip_F_Tat_023"):
			iVar0 = 81;
			break;
		
		case joaat("FM_Hip_F_Tat_024"):
			iVar0 = 82;
			break;
		
		case joaat("FM_Hip_F_Tat_025"):
			iVar0 = 83;
			break;
		
		case joaat("FM_Hip_F_Tat_026"):
			iVar0 = 84;
			break;
		
		case joaat("FM_Hip_F_Tat_027"):
			iVar0 = 85;
			break;
		
		case joaat("FM_Hip_F_Tat_028"):
			iVar0 = 86;
			break;
		
		case joaat("FM_Hip_F_Tat_029"):
			iVar0 = 87;
			break;
		
		case joaat("FM_Hip_F_Tat_030"):
			iVar0 = 88;
			break;
		
		case joaat("FM_Hip_F_Tat_031"):
			iVar0 = 89;
			break;
		
		case joaat("FM_Hip_F_Tat_032"):
			iVar0 = 90;
			break;
		
		case joaat("FM_Hip_F_Tat_033"):
			iVar0 = 91;
			break;
		
		case joaat("FM_Hip_F_Tat_034"):
			iVar0 = 92;
			break;
		
		case joaat("FM_Hip_F_Tat_035"):
			iVar0 = 93;
			break;
		
		case joaat("FM_Hip_F_Tat_036"):
			iVar0 = 94;
			break;
		
		case joaat("FM_Hip_F_Tat_037"):
			iVar0 = 95;
			break;
		
		case joaat("FM_Hip_F_Tat_038"):
			iVar0 = 96;
			break;
		
		case joaat("FM_Hip_F_Tat_039"):
			iVar0 = 97;
			break;
		
		case joaat("FM_Hip_F_Tat_040"):
			iVar0 = 98;
			break;
		
		case joaat("FM_Hip_F_Tat_041"):
			iVar0 = 99;
			break;
		
		case joaat("FM_Hip_F_Tat_042"):
			iVar0 = 100;
			break;
	}
	switch (iParam0)
	{
		case joaat("FM_Hip_F_Tat_043"):
			iVar0 = 101;
			break;
		
		case joaat("FM_Hip_F_Tat_044"):
			iVar0 = 102;
			break;
		
		case joaat("FM_Hip_F_Tat_045"):
			iVar0 = 103;
			break;
		
		case joaat("FM_Hip_F_Tat_046"):
			iVar0 = 104;
			break;
		
		case joaat("FM_Hip_F_Tat_047"):
			iVar0 = 105;
			break;
		
		case joaat("FM_Hip_F_Tat_048"):
			iVar0 = 106;
			break;
		
		case joaat("FM_F_Hair_017_a"):
			iVar0 = 107;
			break;
		
		case joaat("FM_F_Hair_017_b"):
			iVar0 = 108;
			break;
		
		case joaat("FM_F_Hair_017_c"):
			iVar0 = 109;
			break;
		
		case joaat("FM_F_Hair_017_d"):
			iVar0 = 110;
			break;
		
		case joaat("FM_F_Hair_017_e"):
			iVar0 = 111;
			break;
		
		case 1093884035:
			iVar0 = 112;
			break;
		
		case 861256904:
			iVar0 = 113;
			break;
		
		case 603201029:
			iVar0 = 114;
			break;
		
		case 1991426949:
			iVar0 = 115;
			break;
		
		case -135838228:
			iVar0 = 116;
			break;
		
		case joaat("FM_F_Hair_019_a"):
			iVar0 = 117;
			break;
		
		case joaat("FM_F_Hair_019_b"):
			iVar0 = 118;
			break;
		
		case joaat("FM_F_Hair_019_c"):
			iVar0 = 119;
			break;
		
		case joaat("FM_F_Hair_019_d"):
			iVar0 = 120;
			break;
		
		case joaat("FM_F_Hair_019_e"):
			iVar0 = 121;
			break;
		
		case joaat("FM_F_Hair_020_a"):
			iVar0 = 122;
			break;
		
		case joaat("FM_F_Hair_020_b"):
			iVar0 = 123;
			break;
		
		case joaat("FM_F_Hair_020_c"):
			iVar0 = 124;
			break;
		
		case joaat("FM_F_Hair_020_d"):
			iVar0 = 125;
			break;
		
		case joaat("FM_F_Hair_020_e"):
			iVar0 = 126;
			break;
		
		case joaat("FM_Hip_F_Hair_000_a"):
			iVar0 = 127;
			break;
		
		case joaat("FM_Hip_F_Hair_000_b"):
			iVar0 = 128;
			break;
		
		case joaat("FM_Hip_F_Hair_000_c"):
			iVar0 = 129;
			break;
		
		case joaat("FM_Hip_F_Hair_000_d"):
			iVar0 = 130;
			break;
		
		case joaat("FM_Hip_F_Hair_000_e"):
			iVar0 = 131;
			break;
		
		case joaat("FM_Hip_F_Tshirt_000"):
			iVar0 = 132;
			break;
		
		case joaat("FM_Hip_F_Tshirt_001"):
			iVar0 = 133;
			break;
		
		case joaat("FM_Hip_F_Tshirt_002"):
			iVar0 = 134;
			break;
		
		case joaat("FM_Hip_F_Tshirt_003"):
			iVar0 = 135;
			break;
		
		case joaat("FM_Hip_F_Tshirt_004"):
			iVar0 = 136;
			break;
		
		case joaat("FM_Hip_F_Tshirt_005"):
			iVar0 = 137;
			break;
		
		case joaat("FM_Hip_F_Tshirt_006"):
			iVar0 = 138;
			break;
		
		case joaat("FM_Hip_F_Tshirt_007"):
			iVar0 = 139;
			break;
		
		case joaat("FM_Hip_F_Tshirt_008"):
			iVar0 = 140;
			break;
		
		case joaat("FM_Hip_F_Tshirt_009"):
			iVar0 = 141;
			break;
		
		case joaat("FM_Hip_F_Tshirt_010"):
			iVar0 = 142;
			break;
		
		case joaat("FM_Hip_F_Tshirt_011"):
			iVar0 = 143;
			break;
		
		case joaat("FM_Hip_F_Tshirt_012"):
			iVar0 = 144;
			break;
		
		case joaat("FM_Hip_F_Tshirt_013"):
			iVar0 = 145;
			break;
		
		case joaat("FM_Hip_F_Tshirt_014"):
			iVar0 = 146;
			break;
		
		case joaat("FM_Hip_F_Tshirt_015"):
			iVar0 = 147;
			break;
		
		case joaat("FM_Hip_F_Tshirt_016"):
			iVar0 = 148;
			break;
		
		case joaat("FM_Hip_F_Tshirt_017"):
			iVar0 = 149;
			break;
		
		case joaat("FM_Hip_F_Tshirt_018"):
			iVar0 = 150;
			break;
		
		case joaat("FM_Hip_F_Tshirt_019"):
			iVar0 = 151;
			break;
		
		case joaat("FM_Hip_F_Tshirt_020"):
			iVar0 = 152;
			break;
		
		case joaat("FM_Hip_F_Tshirt_021"):
			iVar0 = 153;
			break;
		
		case joaat("FM_Hip_F_Tshirt_022"):
			iVar0 = 154;
			break;
		
		case joaat("FM_Hip_F_Retro_000"):
			iVar0 = 155;
			break;
		
		case joaat("FM_Hip_F_Retro_001"):
			iVar0 = 156;
			break;
		
		case joaat("FM_Hip_F_Retro_002"):
			iVar0 = 157;
			break;
		
		case joaat("FM_Hip_F_Retro_003"):
			iVar0 = 158;
			break;
		
		case joaat("FM_Hip_F_Retro_004"):
			iVar0 = 159;
			break;
		
		case joaat("FM_Hip_F_Retro_005"):
			iVar0 = 160;
			break;
		
		case joaat("FM_Hip_F_Retro_006"):
			iVar0 = 161;
			break;
		
		case joaat("FM_Hip_F_Retro_007"):
			iVar0 = 162;
			break;
		
		case joaat("FM_Hip_F_Retro_008"):
			iVar0 = 163;
			break;
		
		case joaat("FM_Hip_F_Retro_009"):
			iVar0 = 164;
			break;
		
		case joaat("FM_Hip_F_Retro_010"):
			iVar0 = 165;
			break;
		
		case joaat("FM_Hip_F_Retro_011"):
			iVar0 = 166;
			break;
		
		case joaat("FM_Hip_F_Retro_012"):
			iVar0 = 167;
			break;
		
		case joaat("FM_Hip_F_Retro_013"):
			iVar0 = 168;
			break;
		
		case joaat("FM_Rstar_F_Tshirt_000"):
			iVar0 = 169;
			break;
		
		case joaat("FM_Rstar_F_Tshirt_001"):
			iVar0 = 170;
			break;
		
		case joaat("FM_Rstar_F_Tshirt_002"):
			iVar0 = 171;
			break;
		
		case joaat("FM_Ind_F_Tshirt_000"):
			iVar0 = 172;
			break;
		
		case joaat("FM_Ind_F_Tshirt_001"):
			iVar0 = 173;
			break;
		
		case joaat("FM_Ind_F_Tshirt_002"):
			iVar0 = 174;
			break;
		
		case joaat("FM_Ind_F_Tshirt_003"):
			iVar0 = 175;
			break;
		
		case joaat("FM_Ind_F_Tshirt_004"):
			iVar0 = 176;
			break;
		
		case joaat("FM_Ind_F_Tshirt_005"):
			iVar0 = 177;
			break;
		
		case joaat("FM_Ind_F_Tshirt_007"):
			iVar0 = 178;
			break;
		
		case joaat("FM_Ind_F_Tshirt_008"):
			iVar0 = 179;
			break;
		
		case joaat("FM_Ind_F_Tshirt_009"):
			iVar0 = 180;
			break;
		
		case joaat("FM_Ind_F_Tshirt_010"):
			iVar0 = 181;
			break;
		
		case joaat("FM_Ind_F_Tshirt_011"):
			iVar0 = 182;
			break;
		
		case joaat("FM_Ind_F_Tshirt_012"):
			iVar0 = 183;
			break;
		
		case joaat("FM_Ind_F_Tshirt_013"):
			iVar0 = 184;
			break;
		
		case joaat("FM_Ind_F_Tshirt_014"):
			iVar0 = 185;
			break;
		
		case joaat("FM_Ind_F_Tshirt_015"):
			iVar0 = 186;
			break;
		
		case joaat("FM_Ind_F_Tshirt_017"):
			iVar0 = 187;
			break;
		
		case joaat("FM_Ind_F_Tshirt_019"):
			iVar0 = 188;
			break;
		
		case joaat("FM_Ind_F_Tshirt_020"):
			iVar0 = 189;
			break;
		
		case joaat("FM_Ind_F_Tshirt_021"):
			iVar0 = 190;
			break;
		
		case joaat("FM_Ind_F_Tshirt_022"):
			iVar0 = 191;
			break;
		
		case joaat("FM_Ind_F_Tshirt_023"):
			iVar0 = 192;
			break;
		
		case joaat("FM_Ind_F_Tshirt_024"):
			iVar0 = 193;
			break;
		
		case joaat("FM_Ind_F_Tshirt_025"):
			iVar0 = 194;
			break;
		
		case joaat("FM_Ind_F_Tshirt_026"):
			iVar0 = 195;
			break;
		
		case joaat("FM_Ind_F_Award_000"):
			iVar0 = 196;
			break;
		
		case joaat("MP_Fli_F_Tshirt_000"):
			iVar0 = 197;
			break;
		
		case joaat("FM_LTS_F_Tshirt_000"):
			iVar0 = 198;
			break;
		
		case joaat("MP_FM_OGA_000_f"):
			iVar0 = 199;
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_FM_OGA_001_f"):
			iVar0 = 200;
			break;
		
		case joaat("MP_FM_OGA_002_f"):
			iVar0 = 201;
			break;
		
		case joaat("MP_FM_OGA_003_f"):
			iVar0 = 202;
			break;
		
		case joaat("NG_F_Hair_001"):
			iVar0 = 203;
			break;
		
		case joaat("NG_F_Hair_002"):
			iVar0 = 204;
			break;
		
		case joaat("NG_F_Hair_003"):
			iVar0 = 205;
			break;
		
		case joaat("NG_F_Hair_004"):
			iVar0 = 206;
			break;
		
		case joaat("NG_F_Hair_005"):
			iVar0 = 207;
			break;
		
		case joaat("NG_F_Hair_006"):
			iVar0 = 208;
			break;
		
		case joaat("NG_F_Hair_007"):
			iVar0 = 209;
			break;
		
		case joaat("NG_F_Hair_008"):
			iVar0 = 210;
			break;
		
		case joaat("NG_F_Hair_009"):
			iVar0 = 211;
			break;
		
		case joaat("NG_F_Hair_010"):
			iVar0 = 212;
			break;
		
		case joaat("NG_F_Hair_011"):
			iVar0 = 213;
			break;
		
		case joaat("NG_F_Hair_012"):
			iVar0 = 214;
			break;
		
		case joaat("NG_F_Hair_013"):
			iVar0 = 215;
			break;
		
		case joaat("NG_F_Hair_014"):
			iVar0 = 216;
			break;
		
		case joaat("NG_F_Hair_015"):
			iVar0 = 217;
			break;
		
		case joaat("NGBea_F_Hair_000"):
			iVar0 = 218;
			break;
		
		case joaat("NGBea_F_Hair_001"):
			iVar0 = 219;
			break;
		
		case joaat("NGBus_F_Hair_000"):
			iVar0 = 220;
			break;
		
		case joaat("NGBus_F_Hair_001"):
			iVar0 = 221;
			break;
		
		case joaat("NGHip_F_Hair_000"):
			iVar0 = 222;
			break;
		
		case joaat("NGHip_F_Hair_001"):
			iVar0 = 223;
			break;
		
		case joaat("NGInd_F_Hair_000"):
			iVar0 = 224;
			break;
		
		case joaat("MP_Xmas2_F_Tat_000"):
			iVar0 = 225;
			break;
		
		case joaat("MP_Xmas2_F_Tat_001"):
			iVar0 = 226;
			break;
		
		case joaat("MP_Xmas2_F_Tat_002"):
			iVar0 = 227;
			break;
		
		case joaat("MP_Xmas2_F_Tat_003"):
			iVar0 = 228;
			break;
		
		case joaat("MP_Xmas2_F_Tat_004"):
			iVar0 = 229;
			break;
		
		case joaat("MP_Xmas2_F_Tat_005"):
			iVar0 = 230;
			break;
		
		case joaat("MP_Xmas2_F_Tat_006"):
			iVar0 = 231;
			break;
		
		case joaat("MP_Xmas2_F_Tat_007"):
			iVar0 = 232;
			break;
		
		case joaat("MP_Xmas2_F_Tat_008"):
			iVar0 = 233;
			break;
		
		case joaat("MP_Xmas2_F_Tat_009"):
			iVar0 = 234;
			break;
		
		case joaat("MP_Xmas2_F_Tat_010"):
			iVar0 = 235;
			break;
		
		case joaat("MP_Xmas2_F_Tat_011"):
			iVar0 = 236;
			break;
		
		case joaat("MP_Xmas2_F_Tat_012"):
			iVar0 = 237;
			break;
		
		case joaat("MP_Xmas2_F_Tat_013"):
			iVar0 = 238;
			break;
		
		case joaat("MP_Xmas2_F_Tat_014"):
			iVar0 = 239;
			break;
		
		case joaat("MP_Xmas2_F_Tat_015"):
			iVar0 = 240;
			break;
		
		case joaat("MP_Xmas2_F_Tat_016"):
			iVar0 = 241;
			break;
		
		case joaat("MP_Xmas2_F_Tat_017"):
			iVar0 = 242;
			break;
		
		case joaat("MP_Xmas2_F_Tat_018"):
			iVar0 = 243;
			break;
		
		case joaat("MP_Xmas2_F_Tat_019"):
			iVar0 = 244;
			break;
		
		case joaat("MP_Xmas2_F_Tat_020"):
			iVar0 = 245;
			break;
		
		case joaat("MP_Xmas2_F_Tat_021"):
			iVar0 = 246;
			break;
		
		case joaat("MP_Xmas2_F_Tat_022"):
			iVar0 = 247;
			break;
		
		case joaat("MP_Xmas2_F_Tat_023"):
			iVar0 = 248;
			break;
		
		case joaat("MP_Xmas2_F_Tat_024"):
			iVar0 = 249;
			break;
		
		case joaat("MP_Xmas2_F_Tat_025"):
			iVar0 = 250;
			break;
		
		case joaat("MP_Xmas2_F_Tat_026"):
			iVar0 = 251;
			break;
		
		case joaat("MP_Xmas2_F_Tat_027"):
			iVar0 = 252;
			break;
		
		case joaat("MP_Xmas2_F_Tat_028"):
			iVar0 = 253;
			break;
		
		case joaat("MP_Xmas2_F_Tat_029"):
			iVar0 = 254;
			break;
		
		case joaat("MP_Award_F_Tshirt_004"):
			iVar0 = 255;
			break;
		
		case joaat("MP_Award_F_Tshirt_005"):
			iVar0 = 256;
			break;
		
		case joaat("MP_Award_F_Tshirt_006"):
			iVar0 = 257;
			break;
		
		case joaat("MP_Award_F_Tshirt_007"):
			iVar0 = 258;
			break;
		
		case joaat("MP_Award_F_Tshirt_008"):
			iVar0 = 259;
			break;
		
		case joaat("MP_Award_F_Tshirt_009"):
			iVar0 = 260;
			break;
		
		case joaat("MP_Award_F_Tshirt_010"):
			iVar0 = 261;
			break;
		
		case joaat("MP_Award_F_Tshirt_011"):
			iVar0 = 262;
			break;
		
		case joaat("MP_Award_F_Tshirt_012"):
			iVar0 = 263;
			break;
		
		case joaat("MP_Award_F_Tshirt_013"):
			iVar0 = 264;
			break;
		
		case joaat("MP_Bugstar_A"):
			iVar0 = 265;
			break;
		
		case joaat("MP_Bugstar_B"):
			iVar0 = 266;
			break;
		
		case joaat("MP_Bugstar_C"):
			iVar0 = 267;
			break;
		
		case joaat("MP_Rogers_A"):
			iVar0 = 268;
			break;
		
		case joaat("MP_Rogers_B"):
			iVar0 = 269;
			break;
		
		case joaat("MP_Als_A"):
			iVar0 = 270;
			break;
		
		case joaat("MP_Als_B"):
			iVar0 = 271;
			break;
		
		case joaat("MP_Power_A"):
			iVar0 = 272;
			break;
		
		case joaat("MP_Power_B"):
			iVar0 = 273;
			break;
		
		case joaat("MP_Elite_F_Tshirt"):
			iVar0 = 274;
			break;
	}
	if (iVar0 != -1)
	{
		*uParam1 = (129 + iVar0);
		return 1;
	}
	return 0;
}

int func_40(int iParam0, var uParam1)//Position - 0x9227
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case joaat("MP_Bea_M_LArm_001"):
			iVar0 = 0;
			break;
		
		case joaat("MP_Bea_M_Back_000"):
			iVar0 = 1;
			break;
		
		case joaat("MP_Bea_M_Chest_000"):
			iVar0 = 2;
			break;
		
		case joaat("MP_Bea_M_Chest_001"):
			iVar0 = 3;
			break;
		
		case joaat("MP_Bea_M_Head_000"):
			iVar0 = 4;
			break;
		
		case joaat("MP_Bea_M_Head_001"):
			iVar0 = 5;
			break;
		
		case joaat("MP_Bea_M_Stom_000"):
			iVar0 = 6;
			break;
		
		case joaat("MP_Bea_M_LArm_000"):
			iVar0 = 7;
			break;
		
		case joaat("MP_Bea_M_Rleg_000"):
			iVar0 = 8;
			break;
		
		case joaat("MP_Bea_M_RArm_000"):
			iVar0 = 9;
			break;
		
		case joaat("MP_Bea_M_Lleg_000"):
			iVar0 = 10;
			break;
		
		case joaat("MP_Bea_M_Neck_000"):
			iVar0 = 11;
			break;
		
		case joaat("MP_Bea_M_Neck_001"):
			iVar0 = 12;
			break;
		
		case joaat("MP_Bea_M_RArm_001"):
			iVar0 = 13;
			break;
		
		case joaat("MP_Bea_M_Head_002"):
			iVar0 = 14;
			break;
		
		case joaat("MP_Bea_M_Stom_001"):
			iVar0 = 15;
			break;
		
		case joaat("MP_Val_M_Tshirt_A"):
			iVar0 = 16;
			break;
		
		case joaat("MP_Val_M_Tshirt_B"):
			iVar0 = 17;
			break;
		
		case joaat("MP_Val_M_Tshirt_C"):
			iVar0 = 18;
			break;
		
		case joaat("MP_Val_M_Tshirt_D"):
			iVar0 = 19;
			break;
		
		case joaat("MP_Val_M_Tshirt_E"):
			iVar0 = 20;
			break;
		
		case joaat("MP_Val_M_Tshirt_F"):
			iVar0 = 21;
			break;
		
		case joaat("MP_Val_M_Tshirt_G"):
			iVar0 = 22;
			break;
		
		case joaat("MP_Val_M_Tshirt_H"):
			iVar0 = 23;
			break;
		
		case joaat("MP_Val_M_Tshirt_I"):
			iVar0 = 24;
			break;
		
		case joaat("MP_Val_M_Tshirt_J"):
			iVar0 = 25;
			break;
		
		case joaat("MP_Val_M_Tshirt_K"):
			iVar0 = 26;
			break;
		
		case joaat("MP_Val_M_Tshirt_L"):
			iVar0 = 27;
			break;
		
		case joaat("MP_Val_M_Tshirt_M"):
			iVar0 = 28;
			break;
		
		case joaat("MP_Val_M_Tshirt_N"):
			iVar0 = 29;
			break;
		
		case joaat("MP_Val_M_Tshirt_O"):
			iVar0 = 30;
			break;
		
		case joaat("MP_Val_M_Tshirt_P"):
			iVar0 = 31;
			break;
		
		case joaat("MP_Val_M_Tshirt_Q"):
			iVar0 = 32;
			break;
		
		case joaat("MP_Val_M_Tshirt_R"):
			iVar0 = 33;
			break;
		
		case joaat("MP_Val_M_Tshirt_S"):
			iVar0 = 34;
			break;
		
		case joaat("MP_Val_M_Tshirt_T"):
			iVar0 = 35;
			break;
		
		case joaat("MP_Buis_M_Back_000"):
			iVar0 = 36;
			break;
		
		case joaat("MP_Buis_M_Chest_000"):
			iVar0 = 37;
			break;
		
		case joaat("MP_Buis_M_Chest_001"):
			iVar0 = 38;
			break;
		
		case joaat("MP_Buis_M_LeftArm_000"):
			iVar0 = 39;
			break;
		
		case joaat("MP_Buis_M_LeftArm_001"):
			iVar0 = 40;
			break;
		
		case joaat("MP_Buis_M_Neck_000"):
			iVar0 = 41;
			break;
		
		case joaat("MP_Buis_M_Neck_001"):
			iVar0 = 42;
			break;
		
		case joaat("MP_Buis_M_Neck_002"):
			iVar0 = 43;
			break;
		
		case joaat("MP_Buis_M_Neck_003"):
			iVar0 = 44;
			break;
		
		case joaat("MP_Buis_M_RightArm_000"):
			iVar0 = 45;
			break;
		
		case joaat("MP_Buis_M_RightArm_001"):
			iVar0 = 46;
			break;
		
		case joaat("MP_Buis_M_Stomach_000"):
			iVar0 = 47;
			break;
		
		case joaat("MP_Male_Crew_Tat_000"):
			iVar0 = 48;
			break;
		
		case joaat("MP_Male_Crew_Tat_001"):
			iVar0 = 49;
			break;
		
		case joaat("FM_Bus_M_Hair_000_a"):
			iVar0 = 50;
			break;
		
		case joaat("FM_Bus_M_Hair_000_b"):
			iVar0 = 51;
			break;
		
		case joaat("FM_Bus_M_Hair_000_c"):
			iVar0 = 52;
			break;
		
		case joaat("FM_Bus_M_Hair_000_d"):
			iVar0 = 53;
			break;
		
		case joaat("FM_Bus_M_Hair_000_e"):
			iVar0 = 54;
			break;
		
		case joaat("FM_Bus_M_Hair_001_a"):
			iVar0 = 55;
			break;
		
		case joaat("FM_Bus_M_Hair_001_b"):
			iVar0 = 56;
			break;
		
		case joaat("FM_Bus_M_Hair_001_c"):
			iVar0 = 57;
			break;
		
		case joaat("FM_Bus_M_Hair_001_d"):
			iVar0 = 58;
			break;
		
		case joaat("FM_Bus_M_Hair_001_e"):
			iVar0 = 59;
			break;
		
		case joaat("FM_Hip_M_Tat_000"):
			iVar0 = 60;
			break;
		
		case joaat("FM_Hip_M_Tat_001"):
			iVar0 = 61;
			break;
		
		case joaat("FM_Hip_M_Tat_002"):
			iVar0 = 62;
			break;
		
		case joaat("FM_Hip_M_Tat_003"):
			iVar0 = 63;
			break;
		
		case joaat("FM_Hip_M_Tat_004"):
			iVar0 = 64;
			break;
		
		case joaat("FM_Hip_M_Tat_005"):
			iVar0 = 65;
			break;
		
		case joaat("FM_Hip_M_Tat_006"):
			iVar0 = 66;
			break;
		
		case joaat("FM_Hip_M_Tat_007"):
			iVar0 = 67;
			break;
		
		case joaat("FM_Hip_M_Tat_008"):
			iVar0 = 68;
			break;
		
		case joaat("FM_Hip_M_Tat_009"):
			iVar0 = 69;
			break;
		
		case joaat("FM_Hip_M_Tat_010"):
			iVar0 = 70;
			break;
		
		case joaat("FM_Hip_M_Tat_011"):
			iVar0 = 71;
			break;
		
		case joaat("FM_Hip_M_Tat_012"):
			iVar0 = 72;
			break;
		
		case joaat("FM_Hip_M_Tat_013"):
			iVar0 = 73;
			break;
		
		case joaat("FM_Hip_M_Tat_014"):
			iVar0 = 74;
			break;
		
		case joaat("FM_Hip_M_Tat_015"):
			iVar0 = 75;
			break;
		
		case joaat("FM_Hip_M_Tat_016"):
			iVar0 = 76;
			break;
		
		case joaat("FM_Hip_M_Tat_017"):
			iVar0 = 77;
			break;
		
		case joaat("FM_Hip_M_Tat_018"):
			iVar0 = 78;
			break;
		
		case joaat("FM_Hip_M_Tat_019"):
			iVar0 = 79;
			break;
		
		case joaat("FM_Hip_M_Tat_020"):
			iVar0 = 80;
			break;
		
		case joaat("FM_Hip_M_Tat_021"):
			iVar0 = 81;
			break;
		
		case joaat("FM_Hip_M_Tat_022"):
			iVar0 = 82;
			break;
		
		case joaat("FM_Hip_M_Tat_023"):
			iVar0 = 83;
			break;
		
		case joaat("FM_Hip_M_Tat_024"):
			iVar0 = 84;
			break;
		
		case joaat("FM_Hip_M_Tat_025"):
			iVar0 = 85;
			break;
		
		case joaat("FM_Hip_M_Tat_026"):
			iVar0 = 86;
			break;
		
		case joaat("FM_Hip_M_Tat_027"):
			iVar0 = 87;
			break;
		
		case joaat("FM_Hip_M_Tat_028"):
			iVar0 = 88;
			break;
		
		case joaat("FM_Hip_M_Tat_029"):
			iVar0 = 89;
			break;
		
		case joaat("FM_Hip_M_Tat_030"):
			iVar0 = 90;
			break;
		
		case joaat("FM_Hip_M_Tat_031"):
			iVar0 = 91;
			break;
		
		case joaat("FM_Hip_M_Tat_032"):
			iVar0 = 92;
			break;
		
		case joaat("FM_Hip_M_Tat_033"):
			iVar0 = 93;
			break;
		
		case joaat("FM_Hip_M_Tat_034"):
			iVar0 = 94;
			break;
		
		case joaat("FM_Hip_M_Tat_035"):
			iVar0 = 95;
			break;
		
		case joaat("FM_Hip_M_Tat_036"):
			iVar0 = 96;
			break;
		
		case joaat("FM_Hip_M_Tat_037"):
			iVar0 = 97;
			break;
		
		case joaat("FM_Hip_M_Tat_038"):
			iVar0 = 98;
			break;
		
		case joaat("FM_Hip_M_Tat_039"):
			iVar0 = 99;
			break;
		
		case joaat("FM_Hip_M_Tat_040"):
			iVar0 = 100;
			break;
	}
	switch (iParam0)
	{
		case joaat("FM_Hip_M_Tat_041"):
			iVar0 = 101;
			break;
		
		case joaat("FM_Hip_M_Tat_042"):
			iVar0 = 102;
			break;
		
		case joaat("FM_Hip_M_Tat_043"):
			iVar0 = 103;
			break;
		
		case joaat("FM_Hip_M_Tat_044"):
			iVar0 = 104;
			break;
		
		case joaat("FM_Hip_M_Tat_045"):
			iVar0 = 105;
			break;
		
		case joaat("FM_Hip_M_Tat_046"):
			iVar0 = 106;
			break;
		
		case joaat("FM_Hip_M_Tat_047"):
			iVar0 = 107;
			break;
		
		case joaat("FM_Hip_M_Tat_048"):
			iVar0 = 108;
			break;
		
		case joaat("FM_Hip_M_Hair_000_a"):
			iVar0 = 109;
			break;
		
		case joaat("FM_Hip_M_Hair_000_b"):
			iVar0 = 110;
			break;
		
		case joaat("FM_Hip_M_Hair_000_c"):
			iVar0 = 111;
			break;
		
		case joaat("FM_Hip_M_Hair_000_d"):
			iVar0 = 112;
			break;
		
		case joaat("FM_Hip_M_Hair_000_e"):
			iVar0 = 113;
			break;
		
		case joaat("FM_Hip_M_Hair_001_a"):
			iVar0 = 114;
			break;
		
		case joaat("FM_Hip_M_Hair_001_b"):
			iVar0 = 115;
			break;
		
		case joaat("FM_Hip_M_Hair_001_c"):
			iVar0 = 116;
			break;
		
		case joaat("FM_Hip_M_Hair_001_d"):
			iVar0 = 117;
			break;
		
		case joaat("FM_Hip_M_Hair_001_e"):
			iVar0 = 118;
			break;
		
		case joaat("FM_Hip_M_Tshirt_000"):
			iVar0 = 119;
			break;
		
		case joaat("FM_Hip_M_Tshirt_001"):
			iVar0 = 120;
			break;
		
		case joaat("FM_Hip_M_Tshirt_002"):
			iVar0 = 121;
			break;
		
		case joaat("FM_Hip_M_Tshirt_003"):
			iVar0 = 122;
			break;
		
		case joaat("FM_Hip_M_Tshirt_004"):
			iVar0 = 123;
			break;
		
		case joaat("FM_Hip_M_Tshirt_005"):
			iVar0 = 124;
			break;
		
		case joaat("FM_Hip_M_Tshirt_006"):
			iVar0 = 125;
			break;
		
		case joaat("FM_Hip_M_Tshirt_007"):
			iVar0 = 126;
			break;
		
		case joaat("FM_Hip_M_Tshirt_008"):
			iVar0 = 127;
			break;
		
		case joaat("FM_Hip_M_Tshirt_009"):
			iVar0 = 128;
			break;
		
		case joaat("FM_Hip_M_Tshirt_010"):
			iVar0 = 129;
			break;
		
		case joaat("FM_Hip_M_Tshirt_011"):
			iVar0 = 130;
			break;
		
		case joaat("FM_Hip_M_Tshirt_012"):
			iVar0 = 131;
			break;
		
		case joaat("FM_Hip_M_Tshirt_013"):
			iVar0 = 132;
			break;
		
		case joaat("FM_Hip_M_Tshirt_014"):
			iVar0 = 133;
			break;
		
		case joaat("FM_Hip_M_Tshirt_015"):
			iVar0 = 134;
			break;
		
		case joaat("FM_Hip_M_Tshirt_016"):
			iVar0 = 135;
			break;
		
		case joaat("FM_Hip_M_Tshirt_017"):
			iVar0 = 136;
			break;
		
		case joaat("FM_Hip_M_Tshirt_018"):
			iVar0 = 137;
			break;
		
		case joaat("FM_Hip_M_Tshirt_019"):
			iVar0 = 138;
			break;
		
		case joaat("FM_Hip_M_Tshirt_020"):
			iVar0 = 139;
			break;
		
		case joaat("FM_Hip_M_Tshirt_021"):
			iVar0 = 140;
			break;
		
		case joaat("FM_Hip_M_Tshirt_022"):
			iVar0 = 141;
			break;
		
		case joaat("FM_Hip_M_Retro_000"):
			iVar0 = 142;
			break;
		
		case joaat("FM_Hip_M_Retro_001"):
			iVar0 = 143;
			break;
		
		case joaat("FM_Hip_M_Retro_002"):
			iVar0 = 144;
			break;
		
		case joaat("FM_Hip_M_Retro_003"):
			iVar0 = 145;
			break;
		
		case joaat("FM_Hip_M_Retro_004"):
			iVar0 = 146;
			break;
		
		case joaat("FM_Hip_M_Retro_005"):
			iVar0 = 147;
			break;
		
		case joaat("FM_Hip_M_Retro_006"):
			iVar0 = 148;
			break;
		
		case joaat("FM_Hip_M_Retro_007"):
			iVar0 = 149;
			break;
		
		case joaat("FM_Hip_M_Retro_008"):
			iVar0 = 150;
			break;
		
		case joaat("FM_Hip_M_Retro_009"):
			iVar0 = 151;
			break;
		
		case joaat("FM_Hip_M_Retro_010"):
			iVar0 = 152;
			break;
		
		case joaat("FM_Hip_M_Retro_011"):
			iVar0 = 153;
			break;
		
		case joaat("FM_Hip_M_Retro_012"):
			iVar0 = 154;
			break;
		
		case joaat("FM_Hip_M_Retro_013"):
			iVar0 = 155;
			break;
		
		case joaat("FM_Rstar_M_Tshirt_000"):
			iVar0 = 156;
			break;
		
		case joaat("FM_Rstar_M_Tshirt_001"):
			iVar0 = 157;
			break;
		
		case joaat("FM_Rstar_M_Tshirt_002"):
			iVar0 = 158;
			break;
		
		case joaat("FM_Ind_M_Tshirt_000"):
			iVar0 = 159;
			break;
		
		case joaat("FM_Ind_M_Tshirt_001"):
			iVar0 = 160;
			break;
		
		case joaat("FM_Ind_M_Tshirt_002"):
			iVar0 = 161;
			break;
		
		case joaat("FM_Ind_M_Tshirt_003"):
			iVar0 = 162;
			break;
		
		case joaat("FM_Ind_M_Tshirt_004"):
			iVar0 = 163;
			break;
		
		case joaat("FM_Ind_M_Tshirt_005"):
			iVar0 = 164;
			break;
		
		case joaat("FM_Ind_M_Tshirt_007"):
			iVar0 = 165;
			break;
		
		case joaat("FM_Ind_M_Tshirt_008"):
			iVar0 = 166;
			break;
		
		case joaat("FM_Ind_M_Tshirt_009"):
			iVar0 = 167;
			break;
		
		case joaat("FM_Ind_M_Tshirt_010"):
			iVar0 = 168;
			break;
		
		case joaat("FM_Ind_M_Tshirt_011"):
			iVar0 = 169;
			break;
		
		case joaat("FM_Ind_M_Tshirt_012"):
			iVar0 = 170;
			break;
		
		case joaat("FM_Ind_M_Tshirt_013"):
			iVar0 = 171;
			break;
		
		case joaat("FM_Ind_M_Tshirt_014"):
			iVar0 = 172;
			break;
		
		case joaat("FM_Ind_M_Tshirt_015"):
			iVar0 = 173;
			break;
		
		case joaat("FM_Ind_M_Tshirt_017"):
			iVar0 = 174;
			break;
		
		case joaat("FM_Ind_M_Tshirt_019"):
			iVar0 = 175;
			break;
		
		case joaat("FM_Ind_M_Tshirt_020"):
			iVar0 = 176;
			break;
		
		case joaat("FM_Ind_M_Tshirt_021"):
			iVar0 = 177;
			break;
		
		case joaat("FM_Ind_M_Tshirt_022"):
			iVar0 = 178;
			break;
		
		case joaat("FM_Ind_M_Tshirt_023"):
			iVar0 = 179;
			break;
		
		case joaat("FM_Ind_M_Tshirt_024"):
			iVar0 = 180;
			break;
		
		case joaat("FM_Ind_M_Tshirt_025"):
			iVar0 = 181;
			break;
		
		case joaat("FM_Ind_M_Tshirt_026"):
			iVar0 = 182;
			break;
		
		case joaat("FM_Ind_M_Award_000"):
			iVar0 = 183;
			break;
		
		case joaat("MP_Fli_M_Tshirt_000"):
			iVar0 = 184;
			break;
		
		case joaat("FM_LTS_M_Tshirt_000"):
			iVar0 = 185;
			break;
		
		case joaat("MP_FM_OGA_000_m"):
			iVar0 = 186;
			break;
		
		case joaat("MP_FM_OGA_001_m"):
			iVar0 = 187;
			break;
		
		case joaat("MP_FM_OGA_002_m"):
			iVar0 = 188;
			break;
		
		case joaat("MP_FM_OGA_003_m"):
			iVar0 = 189;
			break;
		
		case joaat("NG_M_Hair_001"):
			iVar0 = 190;
			break;
		
		case joaat("NG_M_Hair_002"):
			iVar0 = 191;
			break;
		
		case joaat("NG_M_Hair_003"):
			iVar0 = 192;
			break;
		
		case joaat("NG_M_Hair_004"):
			iVar0 = 193;
			break;
		
		case joaat("NG_M_Hair_005"):
			iVar0 = 194;
			break;
		
		case joaat("NG_M_Hair_006"):
			iVar0 = 195;
			break;
		
		case joaat("NG_M_Hair_007"):
			iVar0 = 196;
			break;
		
		case joaat("NG_M_Hair_008"):
			iVar0 = 197;
			break;
		
		case joaat("NG_M_Hair_009"):
			iVar0 = 198;
			break;
		
		case joaat("NG_M_Hair_010"):
			iVar0 = 199;
			break;
		
		case joaat("NG_M_Hair_011"):
			iVar0 = 200;
			break;
	}
	switch (iParam0)
	{
		case joaat("NG_M_Hair_012"):
			iVar0 = 201;
			break;
		
		case joaat("NG_M_Hair_013"):
			iVar0 = 202;
			break;
		
		case joaat("NG_M_Hair_014"):
			iVar0 = 203;
			break;
		
		case joaat("NG_M_Hair_015"):
			iVar0 = 204;
			break;
		
		case joaat("NGBea_M_Hair_000"):
			iVar0 = 205;
			break;
		
		case joaat("NGBea_M_Hair_001"):
			iVar0 = 206;
			break;
		
		case joaat("NGBus_M_Hair_000"):
			iVar0 = 207;
			break;
		
		case joaat("NGBus_M_Hair_001"):
			iVar0 = 208;
			break;
		
		case joaat("NGHip_M_Hair_000"):
			iVar0 = 209;
			break;
		
		case joaat("NGHip_M_Hair_001"):
			iVar0 = 210;
			break;
		
		case joaat("NGInd_M_Hair_000"):
			iVar0 = 211;
			break;
		
		case joaat("MP_Xmas2_M_Tat_000"):
			iVar0 = 212;
			break;
		
		case joaat("MP_Xmas2_M_Tat_001"):
			iVar0 = 213;
			break;
		
		case joaat("MP_Xmas2_M_Tat_002"):
			iVar0 = 214;
			break;
		
		case joaat("MP_Xmas2_M_Tat_003"):
			iVar0 = 215;
			break;
		
		case joaat("MP_Xmas2_M_Tat_004"):
			iVar0 = 216;
			break;
		
		case joaat("MP_Xmas2_M_Tat_005"):
			iVar0 = 217;
			break;
		
		case joaat("MP_Xmas2_M_Tat_006"):
			iVar0 = 218;
			break;
		
		case joaat("MP_Xmas2_M_Tat_007"):
			iVar0 = 219;
			break;
		
		case joaat("MP_Xmas2_M_Tat_008"):
			iVar0 = 220;
			break;
		
		case joaat("MP_Xmas2_M_Tat_009"):
			iVar0 = 221;
			break;
		
		case joaat("MP_Xmas2_M_Tat_010"):
			iVar0 = 222;
			break;
		
		case joaat("MP_Xmas2_M_Tat_011"):
			iVar0 = 223;
			break;
		
		case joaat("MP_Xmas2_M_Tat_012"):
			iVar0 = 224;
			break;
		
		case joaat("MP_Xmas2_M_Tat_013"):
			iVar0 = 225;
			break;
		
		case joaat("MP_Xmas2_M_Tat_014"):
			iVar0 = 226;
			break;
		
		case joaat("MP_Xmas2_M_Tat_015"):
			iVar0 = 227;
			break;
		
		case joaat("MP_Xmas2_M_Tat_016"):
			iVar0 = 228;
			break;
		
		case joaat("MP_Xmas2_M_Tat_017"):
			iVar0 = 229;
			break;
		
		case joaat("MP_Xmas2_M_Tat_018"):
			iVar0 = 230;
			break;
		
		case joaat("MP_Xmas2_M_Tat_019"):
			iVar0 = 231;
			break;
		
		case joaat("MP_Xmas2_M_Tat_020"):
			iVar0 = 232;
			break;
		
		case joaat("MP_Xmas2_M_Tat_021"):
			iVar0 = 233;
			break;
		
		case joaat("MP_Xmas2_M_Tat_022"):
			iVar0 = 234;
			break;
		
		case joaat("MP_Xmas2_M_Tat_023"):
			iVar0 = 235;
			break;
		
		case joaat("MP_Xmas2_M_Tat_024"):
			iVar0 = 236;
			break;
		
		case joaat("MP_Xmas2_M_Tat_025"):
			iVar0 = 237;
			break;
		
		case joaat("MP_Xmas2_M_Tat_026"):
			iVar0 = 238;
			break;
		
		case joaat("MP_Xmas2_M_Tat_027"):
			iVar0 = 239;
			break;
		
		case joaat("MP_Xmas2_M_Tat_028"):
			iVar0 = 240;
			break;
		
		case joaat("MP_Xmas2_M_Tat_029"):
			iVar0 = 241;
			break;
		
		case joaat("MP_Award_M_Tshirt_004"):
			iVar0 = 242;
			break;
		
		case joaat("MP_Award_M_Tshirt_005"):
			iVar0 = 243;
			break;
		
		case joaat("MP_Award_M_Tshirt_006"):
			iVar0 = 244;
			break;
		
		case joaat("MP_Award_M_Tshirt_007"):
			iVar0 = 245;
			break;
		
		case joaat("MP_Award_M_Tshirt_008"):
			iVar0 = 246;
			break;
		
		case joaat("MP_Award_M_Tshirt_009"):
			iVar0 = 247;
			break;
		
		case joaat("MP_Award_M_Tshirt_010"):
			iVar0 = 248;
			break;
		
		case joaat("MP_Award_M_Tshirt_011"):
			iVar0 = 249;
			break;
		
		case joaat("MP_Award_M_Tshirt_012"):
			iVar0 = 250;
			break;
		
		case joaat("MP_Award_M_Tshirt_013"):
			iVar0 = 251;
			break;
		
		case joaat("MP_Bugstar_A"):
			iVar0 = 252;
			break;
		
		case joaat("MP_Bugstar_B"):
			iVar0 = 253;
			break;
		
		case joaat("MP_Bugstar_C"):
			iVar0 = 254;
			break;
		
		case joaat("MP_Rogers_A"):
			iVar0 = 255;
			break;
		
		case joaat("MP_Rogers_B"):
			iVar0 = 256;
			break;
		
		case joaat("MP_Als_A"):
			iVar0 = 257;
			break;
		
		case joaat("MP_Als_B"):
			iVar0 = 258;
			break;
		
		case joaat("MP_Power_A"):
			iVar0 = 259;
			break;
		
		case joaat("MP_Power_B"):
			iVar0 = 260;
			break;
		
		case joaat("MP_Elite_M_Tshirt"):
			iVar0 = 261;
			break;
	}
	if (iVar0 != -1)
	{
		*uParam1 = (129 + iVar0);
		return 1;
	}
	return 0;
}

int func_41(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x9FA6
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
		iVar3 = (iParam1 - func_43(iParam0));
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
		iVar8 = (iParam1 - func_42(iParam0, func_11(iParam2)));
		if (iVar8 < 0)
		{
			return -1;
		}
		iVar9 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 6, -1, 0, -1, func_11(iParam2));
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

int func_42(int iParam0, int iParam1)//Position - 0xA0A0
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

int func_43(int iParam0)//Position - 0xA447
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

bool func_44(int iParam0, int iParam1)//Position - 0xA4A8
{
	var uVar0;
	int iVar1;
	
	if (func_46(iParam0) == 2903)
	{
		return 0;
	}
	uVar0 = func_45(iParam0, iParam1);
	iVar1 = iParam0;
	return MISC::IS_BIT_SET(uVar0, func_22(iVar1));
}

var func_45(var uParam0, int iParam1)//Position - 0xA4DA
{
	var uVar0;
	
	uVar0 = func_24(func_46(uParam0), iParam1, 0);
	return uVar0;
}

int func_46(var uParam0)//Position - 0xA4F3
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_21(iVar0);
	if ((func_20() == 0 || func_19() == 0) || (func_20() == 999 && func_19() == 999))
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

int func_47(int iParam0, int iParam1, int iParam2)//Position - 0xA640
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!func_51(iParam0, iParam1))
	{
		if (iParam0 == joaat("mp_m_freemode_01"))
		{
			iVar0 = -1;
			iVar1 = -1;
			if (iParam1 >= 237)
			{
				iVar1 = func_41(iParam0, iParam1, 11, 3);
				iVar0 = func_49(iVar1);
			}
			if (iVar1 != -1 && func_48(iVar1, 0) != -1)
			{
				return 0;
			}
			if ((((((iParam1 >= 0 && iParam1 <= 15) || (iParam1 >= 16 && iParam1 <= 31)) || (iParam1 >= 124 && iParam1 <= 139)) || iVar0 == 0) || iVar0 == 1) || iVar0 == 8)
			{
				if (iParam2 == 15)
				{
					return 1;
				}
				else if (iParam2 == 13 || iParam2 == 14)
				{
					if (func_37(iParam0, 11, iParam1, 0) == -1)
					{
						return 1;
					}
				}
			}
			else if ((iParam1 >= 80 && iParam1 <= 95) || iVar0 == 5)
			{
				if ((iParam2 == 16 || iParam2 == 71) || iParam2 == 72)
				{
					return 1;
				}
			}
			else if ((iParam1 >= 140 && iParam1 <= 155) || iVar0 == 9)
			{
				if (iParam2 == 13 || iParam2 == 15)
				{
					return 1;
				}
			}
		}
		else if (iParam0 == joaat("mp_f_freemode_01"))
		{
			iVar2 = -1;
			iVar3 = -1;
			if (iParam1 >= 256)
			{
				iVar3 = func_41(iParam0, iParam1, 11, 4);
				iVar2 = func_49(iVar3);
			}
			if (iVar3 != -1 && func_48(iVar3, 0) != -1)
			{
				return 0;
			}
			if ((iParam1 >= 0 && iParam1 <= 15) || iVar2 == 0)
			{
				if (iParam2 == 13 || iParam2 == 15)
				{
					if (func_37(iParam0, 11, iParam1, 0) == -1)
					{
						return 1;
					}
				}
			}
			else if ((iParam1 >= 32 && iParam1 <= 47) || iVar2 == 2)
			{
				if (iParam2 == 13 || iParam2 == 16)
				{
					if (func_37(iParam0, 11, iParam1, 0) == -1)
					{
						return 1;
					}
				}
			}
			else if ((iParam1 >= 64 && iParam1 <= 79) || iVar2 == 4)
			{
				if (iParam2 == 13)
				{
					return 1;
				}
				if (iParam2 == 15)
				{
					if (iVar2 != 4 || !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("TAT_DECL"), 0))
					{
						return 1;
					}
				}
			}
			else if ((iParam1 >= 80 && iParam1 <= 95) || iVar2 == 5)
			{
				if (iParam2 == 13)
				{
					return 1;
				}
			}
			else if ((iParam1 >= 144 && iParam1 <= 159) || iVar2 == 9)
			{
				if (iParam2 == 14)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_48(int iParam0, int iParam1)//Position - 0xA91C
{
	int iVar0;
	
	iVar0 = -1;
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, 393400788, iParam1))
	{
		iVar0 = 12;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, 216120498, iParam1))
	{
		iVar0 = 13;
	}
	return iVar0;
}

int func_49(int iParam0)//Position - 0xAA60
{
	int iVar0;
	
	iVar0 = -1;
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_0"), 0))
	{
		iVar0 = 0;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_1"), 0))
	{
		iVar0 = 1;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_2"), 0))
	{
		iVar0 = 2;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_3"), 0))
	{
		iVar0 = 3;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_4"), 0))
	{
		iVar0 = 4;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_5"), 0))
	{
		iVar0 = 5;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_6"), 0))
	{
		iVar0 = 6;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_7"), 0))
	{
		iVar0 = 7;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_8"), 0))
	{
		iVar0 = 8;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_9"), 0))
	{
		iVar0 = 9;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_10"), 0))
	{
		iVar0 = 10;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_11"), 0))
	{
		iVar0 = 11;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_12"), 0))
	{
		iVar0 = 12;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_13"), 0))
	{
		iVar0 = 13;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_14"), 0))
	{
		iVar0 = 14;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_15"), 0))
	{
		iVar0 = 15;
	}
	return iVar0;
}

void func_50(int iParam0, int iParam1)//Position - 0xABC2
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
		iVar1 = func_36(iParam1);
		if (iParam0 != 0)
		{
			if (iVar1 == 3 || iVar1 == 4)
			{
				if (iParam0 == 1019352240)
				{
					func_13(13, 0, Global_10A08);
					func_13(14, 0, Global_10A08);
					func_13(15, 0, Global_10A08);
					func_13(16, 0, Global_10A08);
					func_13(71, 0, Global_10A08);
					func_13(72, 0, Global_10A08);
					return;
				}
				else if (iParam0 == 277073536)
				{
					if (iVar1 == 3)
					{
						func_13(73, 0, Global_10A08);
						func_13(74, 0, Global_10A08);
						func_13(75, 0, Global_10A08);
						func_13(76, 0, Global_10A08);
						func_13(77, 0, Global_10A08);
						func_13(78, 0, Global_10A08);
						func_13(79, 0, Global_10A08);
						func_13(80, 0, Global_10A08);
						func_13(81, 0, Global_10A08);
						func_13(82, 0, Global_10A08);
						func_13(83, 0, Global_10A08);
						func_13(84, 0, Global_10A08);
						func_13(85, 0, Global_10A08);
						func_13(86, 0, Global_10A08);
						func_13(90, 0, Global_10A08);
						func_13(91, 0, Global_10A08);
						func_13(124, 0, Global_10A08);
						func_13(125, 0, Global_10A08);
						func_13(87, 0, Global_10A08);
						func_13(88, 0, Global_10A08);
						func_13(89, 0, Global_10A08);
						iVar3 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(3);
						iVar2 = 0;
						while (iVar2 < iVar3)
						{
							if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(3, iVar2, &Var4))
							{
								if (Var4.f_6 == 277073536)
								{
									func_13((129 + iVar2), 0, Global_10A08);
								}
							}
							iVar2++;
						}
					}
					else
					{
						func_13(73, 0, Global_10A08);
						func_13(74, 0, Global_10A08);
						func_13(75, 0, Global_10A08);
						func_13(76, 0, Global_10A08);
						func_13(77, 0, Global_10A08);
						func_13(78, 0, Global_10A08);
						func_13(79, 0, Global_10A08);
						func_13(80, 0, Global_10A08);
						func_13(81, 0, Global_10A08);
						func_13(82, 0, Global_10A08);
						func_13(83, 0, Global_10A08);
						func_13(84, 0, Global_10A08);
						func_13(85, 0, Global_10A08);
						func_13(92, 0, Global_10A08);
						func_13(87, 0, Global_10A08);
						func_13(88, 0, Global_10A08);
						func_13(89, 0, Global_10A08);
						iVar6 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(4);
						iVar5 = 0;
						while (iVar5 < iVar6)
						{
							if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(4, iVar5, &Var7))
							{
								if (Var7.f_6 == 277073536)
								{
									func_13((129 + iVar5), 0, Global_10A08);
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
						func_13(93, 0, Global_10A08);
						func_13(94, 0, Global_10A08);
						func_13(95, 0, Global_10A08);
						func_13(96, 0, Global_10A08);
						func_13(97, 0, Global_10A08);
						func_13(98, 0, Global_10A08);
						func_13(99, 0, Global_10A08);
						func_13(100, 0, Global_10A08);
						func_13(101, 0, Global_10A08);
						func_13(102, 0, Global_10A08);
						func_13(103, 0, Global_10A08);
						func_13(104, 0, Global_10A08);
						func_13(105, 0, Global_10A08);
						func_13(106, 0, Global_10A08);
						func_13(107, 0, Global_10A08);
						func_13(108, 0, Global_10A08);
						func_13(109, 0, Global_10A08);
						func_13(110, 0, Global_10A08);
						func_13(111, 0, Global_10A08);
						func_13(112, 0, Global_10A08);
						func_13(113, 0, Global_10A08);
						func_13(114, 0, Global_10A08);
						func_13(115, 0, Global_10A08);
						func_13(116, 0, Global_10A08);
						func_13(117, 0, Global_10A08);
						func_13(123, 0, Global_10A08);
						iVar9 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(3);
						iVar8 = 0;
						while (iVar8 < iVar9)
						{
							if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(3, iVar8, &Var10))
							{
								if (Var10.f_6 == 2140335355)
								{
									func_13((129 + iVar8), 0, Global_10A08);
								}
							}
							iVar8++;
						}
					}
					else
					{
						func_13(93, 0, Global_10A08);
						func_13(94, 0, Global_10A08);
						func_13(95, 0, Global_10A08);
						func_13(96, 0, Global_10A08);
						func_13(97, 0, Global_10A08);
						func_13(98, 0, Global_10A08);
						func_13(99, 0, Global_10A08);
						func_13(100, 0, Global_10A08);
						func_13(101, 0, Global_10A08);
						func_13(102, 0, Global_10A08);
						func_13(103, 0, Global_10A08);
						func_13(104, 0, Global_10A08);
						func_13(105, 0, Global_10A08);
						func_13(106, 0, Global_10A08);
						func_13(107, 0, Global_10A08);
						func_13(108, 0, Global_10A08);
						func_13(109, 0, Global_10A08);
						func_13(110, 0, Global_10A08);
						func_13(111, 0, Global_10A08);
						func_13(112, 0, Global_10A08);
						func_13(113, 0, Global_10A08);
						func_13(114, 0, Global_10A08);
						func_13(115, 0, Global_10A08);
						func_13(116, 0, Global_10A08);
						func_13(117, 0, Global_10A08);
						func_13(118, 0, Global_10A08);
						func_13(119, 0, Global_10A08);
						func_13(120, 0, Global_10A08);
						func_13(121, 0, Global_10A08);
						func_13(122, 0, Global_10A08);
						func_13(123, 0, Global_10A08);
						iVar12 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(4);
						iVar11 = 0;
						while (iVar11 < iVar12)
						{
							if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(4, iVar11, &Var13))
							{
								if (Var13.f_6 == 2140335355)
								{
									func_13((129 + iVar11), 0, Global_10A08);
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
				if (func_28(&Var0, iVar14, iVar1, iParam1, -1))
				{
					if (Var0.f_8 == iParam0)
					{
						func_13(Var0.f_B, 0, Global_10A08);
					}
				}
				iVar14++;
			}
		}
	}
}

int func_51(int iParam0, int iParam1)//Position - 0xB1BF
{
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			if ((((((iParam1 >= 48 && iParam1 < 64) || (iParam1 >= 64 && iParam1 < 80)) || (iParam1 >= 96 && iParam1 < 108)) || (iParam1 >= 108 && iParam1 < 124)) || (iParam1 >= 156 && iParam1 < 172)) || (iParam1 >= 237 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_41(iParam0, iParam1, 11, 3), joaat("JACKET"), 0)))
			{
				return 1;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if ((((((iParam1 >= 16 && iParam1 < 32) || (iParam1 >= 96 && iParam1 < 112)) || (iParam1 >= 112 && iParam1 < 128)) || (iParam1 >= 128 && iParam1 < 144)) || (iParam1 >= 160 && iParam1 < 176)) || (iParam1 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_41(iParam0, iParam1, 11, 4), joaat("JACKET"), 0)))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_52(int iParam0)//Position - 0xB300
{
	switch (iParam0)
	{
		case 78:
			return 1;
			break;
		
		case 89:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == joaat("mp_m_freemode_01"))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_53(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0xB349
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
		iParam1 = func_17();
	}
	if (!bParam3)
	{
		PED::CLEAR_PED_DECORATIONS_LEAVE_SCARS(*iParam0);
	}
	iVar1 = func_36(*iParam0);
	bVar2 = func_58(*iParam0);
	bVar3 = func_56(*iParam0);
	bVar4 = func_55(*iParam0);
	iVar5 = 0;
	while (iVar5 < 127)
	{
		if (func_25(iVar5, iParam1))
		{
			if (func_28(&Var0, iVar5, iVar1, *iParam0, -1))
			{
				if (func_54(&Var0, Var0.f_8, bVar2, bVar3, bParam2, bVar4))
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
	if (func_25(123, -1))
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
				if (func_25(iVar9, iParam1))
				{
					if (func_54(&(Var8.f_7), Var8.f_6, bVar2, bVar3, bParam2, bVar4))
					{
						if (!bParam3)
						{
							PED::ADD_PED_DECORATION_FROM_HASHES(*iParam0, Var8.f_2, Var8.f_3);
							func_27(*iParam0, Var8.f_2, Var8.f_3);
						}
					}
				}
			}
		}
		iVar6++;
	}
}

int func_54(char* sParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0xB499
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
					if (func_25(13, -1))
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
					if (func_25(13, -1))
					{
					}
					else if (func_25(14, -1))
					{
					}
					else if (func_25(15, -1))
					{
					}
					else if (func_25(16, -1))
					{
					}
					else if (func_25(71, -1))
					{
					}
					else if (func_25(72, -1))
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

int func_55(int iParam0)//Position - 0xB6EB
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
			iVar1 = func_24(1743, -1, 0);
			if (iVar0 > 15)
			{
				iVar2 = func_977(iParam0, 11, -1);
				if (iVar2 >= 256)
				{
					iVar3 = func_41(joaat("mp_f_freemode_01"), iVar2, 11, 4);
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
			iVar1 = func_24(1743, -1, 0);
			if (iVar0 > 15)
			{
				iVar4 = func_977(iParam0, 11, -1);
				if (iVar4 >= 256)
				{
					iVar5 = func_41(joaat("mp_f_freemode_01"), iVar4, 11, 4);
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

int func_56(int iParam0)//Position - 0xB81D
{
	int iVar0;
	
	iVar0 = Global_182604[PLAYER::PLAYER_ID() /*324*/].f_4C.f_1C;
	if (iVar0 != -1 && iVar0 < 4)
	{
		if (func_57(iVar0) != -1 && func_57(iVar0) != 0)
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

int func_57(int iParam0)//Position - 0xB892
{
	if (iParam0 <= -1 || iParam0 >= 4)
	{
		return -1;
	}
	return Global_250FDB.f_1582[iParam0];
}

int func_58(int iParam0)//Position - 0xB8BA
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
						iVar2 = func_977(iParam0, 11, -1);
						if (iVar2 >= 237)
						{
							iVar3 = func_41(joaat("mp_m_freemode_01"), iVar2, 11, 3);
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
						iVar4 = func_977(iParam0, 8, -1);
						if (iVar4 >= 241)
						{
							iVar5 = func_41(joaat("mp_m_freemode_01"), iVar4, 8, 3);
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
						iVar6 = func_977(iParam0, 11, -1);
						if (iVar6 >= 256)
						{
							iVar7 = func_41(joaat("mp_f_freemode_01"), iVar6, 11, 4);
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
						iVar8 = func_977(iParam0, 8, -1);
						if (iVar8 >= 136)
						{
							iVar9 = func_41(joaat("mp_f_freemode_01"), iVar8, 8, 4);
							if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("TAT_DECL_NO_SAVE"), 0))
							{
								return 1;
							}
						}
					}
					break;
				}
		}
		if (func_59(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_59(int iParam0)//Position - 0xBE68
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

void func_60(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xBECB
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
	
	if (iParam2 == -1)
	{
		iParam2 = func_17();
	}
	PED::CLEAR_PED_DECORATIONS_LEAVE_SCARS(*iParam0);
	iVar1 = func_36(*iParam0);
	bVar2 = func_58(*iParam0);
	bVar3 = func_56(*iParam0);
	bVar4 = func_55(*iParam0);
	iVar5 = 0;
	while (iVar5 < 127)
	{
		if (func_25(iVar5, iParam2) || iVar5 == iParam1)
		{
			if (func_28(&Var0, iVar5, iVar1, *iParam0, -1))
			{
				if (func_54(&Var0, Var0.f_8, bVar2, bVar3, bParam3, bVar4))
				{
					if (Var0.f_8 != 1019352240 || iVar5 == iParam1)
					{
						PED::ADD_PED_DECORATION_FROM_HASHES(*iParam0, Var0.f_4, Var0.f_5);
					}
				}
			}
		}
		iVar5++;
	}
	if (func_25(123, -1))
	{
		if (PED::GET_PED_DECORATION_ZONE_FROM_HASHES(joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz")) != 7)
		{
			PED::ADD_PED_DECORATION_FROM_HASHES(*iParam0, joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz"));
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
				if (func_25(iVar9, iParam2))
				{
					if (func_54(&(Var8.f_7), Var8.f_6, bVar2, bVar3, bParam3, bVar4))
					{
						PED::ADD_PED_DECORATION_FROM_HASHES(*iParam0, Var8.f_2, Var8.f_3);
						func_27(*iParam0, Var8.f_2, Var8.f_3);
					}
				}
			}
		}
		iVar6++;
	}
}

void func_61(int iParam0, char* sParam1)//Position - 0xC027
{
	Global_26CE9D = iParam0;
}

void func_62(var uParam0)//Position - 0xC035
{
	func_879(uParam0, 1);
	func_63(uParam0);
}

void func_63(var uParam0)//Position - 0xC04A
{
	func_67(&(uParam0->f_67));
	func_66(uParam0);
	func_65(&(uParam0->f_DA));
	func_64(&(uParam0->f_AA));
}

void func_64(var uParam0)//Position - 0xC070
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

void func_65(var uParam0)//Position - 0xC0C1
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
}

void func_66(var uParam0)//Position - 0xC0DC
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

void func_67(var uParam0)//Position - 0xC19F
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

int func_68(var uParam0)//Position - 0xC218
{
	if (uParam0->f_9)
	{
		if (func_69(*uParam0, 10, 1))
		{
			return 1;
		}
		if (uParam0->f_1 == 1)
		{
			if (func_69(*uParam0, 19, 1))
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

int func_69(int iParam0, int iParam1, bool bParam2)//Position - 0xC2CA
{
	if (bParam2)
	{
		return MISC::IS_BIT_SET(Global_15F9E.f_4F3[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_20() == 0)
		{
			return MISC::IS_BIT_SET(func_24(func_70(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return MISC::IS_BIT_SET(Global_17C49.f_29C[iParam0], iParam1);
	}
	return 0;
}

int func_70(int iParam0)//Position - 0xC32A
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

void func_71(var uParam0)//Position - 0xC5D3
{
	int iVar0;
	
	if (func_874(1))
	{
		if (func_6(PLAYER::PLAYER_ID(), 0, 1))
		{
			func_731();
			func_730();
		}
		else if (!func_729())
		{
			func_730();
		}
		return;
	}
	PAD::_0x7F4724035FDCA1DD(2);
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		iLocal_73 = 209;
	}
	else
	{
		iLocal_73 = 207;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_252.f_2) && !PED::IS_PED_INJURED(uParam0->f_252.f_2))
	{
		iVar0 = uParam0->f_252.f_2;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 240, 1);
	}
	if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::DOES_ENTITY_EXIST(iVar0)) && !PED::IS_PED_INJURED(iVar0))
	{
		if (NETWORK::NETWORK_PLAYER_HAS_HEADSET(PLAYER::PLAYER_ID()))
		{
			if (NETWORK::NETWORK_IS_PLAYER_TALKING(PLAYER::PLAYER_ID()))
			{
				PED::SET_PED_RESET_FLAG(iVar0, 302, 1);
			}
		}
	}
	if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::DOES_ENTITY_EXIST(uParam0->f_C)) && !PED::IS_PED_INJURED(uParam0->f_C))
	{
		NETWORK::SET_ENTITY_LOCALLY_VISIBLE(uParam0->f_C);
	}
	func_718(uParam0, &(uParam0->f_67));
	if (((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && uParam0->f_1) && (func_717(*uParam0) == 3 || func_717(*uParam0) == 4)) && Global_26C415)
	{
		uParam0->f_67.f_1F = 8;
	}
	func_716(1);
	switch (uParam0->f_67.f_1F)
	{
		case 0:
			iLocal_20 = 0;
			uParam0->f_209.f_13 = 0;
			uParam0->f_209.f_12 = 0;
			uParam0->f_67.f_13 = 1;
			if (func_714("CLO_MNU", *uParam0) && func_713(*uParam0))
			{
				func_711(1);
				if (Global_10A95)
				{
					func_710(1, 0);
				}
				if (func_709(1))
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_52(uParam0->f_AA.f_C))
					{
						Global_26CC4E = 0;
						Global_26CC4F = 0;
						uParam0->f_1FC = uParam0->f_AA.f_C;
						func_653(&(uParam0->f_1F5), &(uParam0->f_1F2), &(uParam0->f_1F3), &(uParam0->f_1F9), &(uParam0->f_1F8), *uParam0, &(uParam0->f_AA), &Global_26C92B, uParam0->f_67, uParam0->f_1FC, 1);
						func_614(uParam0);
						uParam0->f_67.f_1 = 0;
					}
					else if (func_613(&Global_26C92B, 0))
					{
						uParam0->f_1FC = 0;
						func_614(uParam0);
						if (!func_612(&Global_26C92B, &(uParam0->f_67.f_1), uParam0->f_1FC))
						{
							if (!func_611(&Global_26C92B, 0, &(uParam0->f_67.f_1)))
							{
								uParam0->f_67.f_1 = -1;
							}
						}
					}
					else
					{
						uParam0->f_1FC = 1;
						func_614(uParam0);
						if (!func_611(&Global_26C92B, 1, &(uParam0->f_67.f_1)))
						{
							uParam0->f_67.f_1 = -1;
						}
					}
					if (iLocal_61)
					{
						uParam0->f_1FC = Global_250CE3.f_290.f_21[0];
						uParam0->f_67.f_1 = Global_250CE3.f_290.f_21[2];
						Global_250CE3.f_290.f_28 = 0;
						uParam0->f_67.f_11 = 1;
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_52(uParam0->f_1FC))
						{
							Global_26CC4E = 0;
							Global_26CC4F = 0;
							uParam0->f_67.f_1 = 0;
						}
					}
					func_614(uParam0);
					uParam0->f_67.f_5 = 0;
					uParam0->f_67.f_1F = 1;
					func_610();
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						func_606();
					}
					if (iLocal_61 && !func_52(uParam0->f_1FC))
					{
						func_653(&(uParam0->f_1F5), &(uParam0->f_1F2), &(uParam0->f_1F3), &(uParam0->f_1F9), &(uParam0->f_1F8), *uParam0, &(uParam0->f_AA), &Global_26C92B, uParam0->f_67, uParam0->f_1FC, 1);
					}
				}
			}
			break;
		
		case 1:
			if ((func_709(1) && func_605(uParam0)) && func_600(uParam0))
			{
				func_599(0, 1, uParam0->f_C, 0, 1, 0);
				func_595(&(uParam0->f_67));
				MISC::CLEAR_BIT(&(uParam0->f_21E), 0);
				MISC::CLEAR_BIT(&(uParam0->f_21E), 1);
				MISC::CLEAR_BIT(&(uParam0->f_21E), 2);
				MISC::CLEAR_BIT(&(uParam0->f_21E), 3);
				MISC::CLEAR_BIT(&(uParam0->f_21E), 4);
				MISC::CLEAR_BIT(&(uParam0->f_21E), 5);
				uParam0->f_21F = 0;
				uParam0->f_237 = 0;
				uParam0->f_238 = 0;
				MISC::CLEAR_BIT(&(uParam0->f_21D), 25);
				MISC::CLEAR_BIT(&(uParam0->f_21D), 26);
				MISC::CLEAR_BIT(&(uParam0->f_21D), 13);
				MISC::CLEAR_BIT(&(uParam0->f_21D), 17);
				uParam0->f_67.f_A = 0;
				uParam0->f_67.f_9 = -1;
				uParam0->f_67.f_10 = 0;
				uParam0->f_67.f_17 = 0;
				uParam0->f_67.f_F = 0;
				uParam0->f_67.f_18 = 0;
				uParam0->f_67.f_14 = 0;
				uParam0->f_67.f_15 = 0;
				uParam0->f_67.f_13 = 1;
				StringCopy(&(uParam0->f_67.f_B), "", 16);
				uParam0->f_236 = 0;
				MISC::SET_BIT(&(uParam0->f_21D), 20);
				if (MISC::ARE_STRINGS_EQUAL(uParam0->f_AA.f_B, "clothingshoes") || MISC::ARE_STRINGS_EQUAL(uParam0->f_AA.f_B, "mp@clothing@female@shoes"))
				{
					uParam0->f_236 = MISC::GET_GAME_TIMER() + 100;
				}
				uParam0->f_235 = ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
				if (!Global_10A95)
				{
					PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(PLAYER::PLAYER_PED_ID(), uParam0->f_AA.f_1F, 1, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), uParam0->f_AA.f_22);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
					uParam0->f_209.f_13 = 1;
				}
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_252.f_2))
				{
					if (!PED::IS_PED_INJURED(uParam0->f_252.f_2))
					{
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam0->f_252.f_2, uParam0->f_AA.f_1F, 1, 0, 1);
						ENTITY::SET_ENTITY_HEADING(uParam0->f_252.f_2, uParam0->f_AA.f_22);
					}
				}
				uParam0->f_203 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_252.f_2))
				{
					if (!PED::IS_PED_INJURED(uParam0->f_252.f_2))
					{
						uParam0->f_203 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_252.f_2, 1) };
					}
				}
				if (*uParam0 == 21)
				{
					func_594(uParam0, 1f);
				}
				else
				{
					func_594(uParam0, 1077936128);
				}
				WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 1);
				PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1);
				func_593(uParam0, 1148846080, 1);
				if (Global_10A95)
				{
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uParam0->f_252.f_2, 0, 0);
				}
				func_584(uParam0);
				func_582(uParam0);
				func_263(uParam0);
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_252.f_2) && !PED::IS_PED_INJURED(uParam0->f_252.f_2))
				{
					if (!ENTITY::IS_ENTITY_VISIBLE(uParam0->f_252.f_2))
					{
						ENTITY::SET_ENTITY_VISIBLE(uParam0->f_252.f_2, true);
						PED::REMOVE_PED_HELMET(uParam0->f_252.f_2, 1);
					}
				}
				if (!Global_10A95)
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false);
					}
				}
				uParam0->f_239 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(uParam0->f_AA.f_1F, 5f, 5f, 5f, uParam0->f_AA.f_22, 0, 7);
				uParam0->f_67.f_5 = 0;
				uParam0->f_67.f_1F = 2;
			}
			break;
		
		case 2:
			if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(uParam0->f_239))
			{
				PATHFIND::UPDATE_NAVMESH_BLOCKING_OBJECT(uParam0->f_239, uParam0->f_AA.f_1F, 5f, 5f, 5f, uParam0->f_AA.f_22, 7);
			}
			func_584(uParam0);
			func_263(uParam0);
			break;
		
		case 6:
			if (func_261(*uParam0))
			{
				uParam0->f_67.f_19 = 1;
			}
			if (func_709(1))
			{
				func_263(uParam0);
				if (func_260() == 44 && *uParam0 == 16)
				{
					PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 9, 9, 0, 0);
				}
				if (!MISC::IS_BIT_SET(uParam0->f_21D, 27) && !uParam0->f_67.f_19)
				{
					uParam0->f_67.f_1F = 7;
				}
			}
			break;
		
		case 7:
			if (func_709(1))
			{
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					HUD::REMOVE_MULTIPLAYER_WALLET_CASH();
					HUD::REMOVE_MULTIPLAYER_BANK_CASH();
				}
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_841(*uParam0))
				{
					func_257(uParam0, 0, 0);
					func_253(PLAYER::PLAYER_PED_ID());
					func_135(PLAYER::PLAYER_PED_ID(), 1);
				}
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 240, 0);
					PED::SET_PED_CONFIG_FLAG(iVar0, 240, 0);
				}
				PLAYER::SET_PLAYER_CLOTH_PIN_FRAMES(PLAYER::PLAYER_ID(), 1);
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_252.f_2))
				{
					if (!PED::IS_PED_INJURED(uParam0->f_252.f_2))
					{
						PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(uParam0->f_252.f_2, 0, 0f);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_251))
				{
					OBJECT::DELETE_OBJECT(&(uParam0->f_251));
				}
				func_134(&(uParam0->f_26));
				CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
				func_131(1, *uParam0);
				func_129(*uParam0);
				func_128(uParam0);
				func_127(1);
				uParam0->f_209.f_13 = 0;
				if (!Global_10A95)
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true);
					}
				}
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				func_103(&(uParam0->f_67), 0, 1, 1);
				func_96();
				func_95(PLAYER::PLAYER_PED_ID());
				func_711(0);
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					func_85(PLAYER::PLAYER_PED_ID(), -1);
					if (NETWORK::NETWORK_PLAYER_IS_CHEATER() || NETWORK::NETWORK_PLAYER_IS_BADSPORT())
					{
						if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == joaat("mp_m_freemode_01"))
						{
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
							Call_Loc(uParam0->f_1F0);
							Stack.Push(PLAYER::PLAYER_PED_ID());
							Stack.Push(14);
							Stack.Push(18);
							Stack.Push(0);
							Stack.Push(-1);
							Stack.Push(0);
							Stack.Push(0);
							Stack.Push(0);
							Stack.Push(-1);
							Stack.Push(-1);
							Stack.Push(-1);
							Stack.Push(0);
							Call_Loc(uParam0->f_1F0);
						}
						else
						{
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
							Call_Loc(uParam0->f_1F0);
							Stack.Push(PLAYER::PLAYER_PED_ID());
							Stack.Push(14);
							Stack.Push(18);
							Stack.Push(0);
							Stack.Push(-1);
							Stack.Push(0);
							Stack.Push(0);
							Stack.Push(0);
							Stack.Push(-1);
							Stack.Push(-1);
							Stack.Push(-1);
							Stack.Push(0);
							Call_Loc(uParam0->f_1F0);
						}
					}
				}
				if (Global_26C413)
				{
					if (Global_10A95)
					{
						func_81(32, func_82(1, 1));
					}
				}
				if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(uParam0->f_239))
				{
					PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(uParam0->f_239);
				}
				uParam0->f_67.f_9 = MISC::GET_GAME_TIMER();
				uParam0->f_67.f_13 = 0;
				func_653(&(uParam0->f_1F5), &(uParam0->f_1F2), &(uParam0->f_1F3), &(uParam0->f_1F9), &(uParam0->f_1F8), *uParam0, &(uParam0->f_AA), &Global_26C92B, uParam0->f_67, 0, 1);
				uParam0->f_B = 3;
			}
			break;
		
		case 8:
			if (func_261(*uParam0))
			{
				uParam0->f_67.f_19 = 1;
			}
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				HUD::REMOVE_MULTIPLAYER_WALLET_CASH();
				HUD::REMOVE_MULTIPLAYER_BANK_CASH();
			}
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_841(*uParam0))
			{
				func_257(uParam0, 0, 0);
				func_253(PLAYER::PLAYER_PED_ID());
				func_135(PLAYER::PLAYER_PED_ID(), 1);
			}
			func_134(&(uParam0->f_26));
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
			func_103(&(uParam0->f_67), 0, 1, 1);
			func_131(1, *uParam0);
			func_129(*uParam0);
			func_128(uParam0);
			uParam0->f_209.f_13 = 0;
			if (!Global_10A95)
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true);
				}
			}
			func_127(1);
			func_96();
			func_95(PLAYER::PLAYER_PED_ID());
			func_711(0);
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				func_85(PLAYER::PLAYER_PED_ID(), -1);
				if (NETWORK::NETWORK_PLAYER_IS_CHEATER() || NETWORK::NETWORK_PLAYER_IS_BADSPORT())
				{
					if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == joaat("mp_m_freemode_01"))
					{
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
						Call_Loc(uParam0->f_1F0);
						Stack.Push(PLAYER::PLAYER_PED_ID());
						Stack.Push(14);
						Stack.Push(18);
						Stack.Push(0);
						Stack.Push(-1);
						Stack.Push(0);
						Stack.Push(0);
						Stack.Push(0);
						Stack.Push(-1);
						Stack.Push(-1);
						Stack.Push(-1);
						Stack.Push(0);
						Call_Loc(uParam0->f_1F0);
					}
					else
					{
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
						Call_Loc(uParam0->f_1F0);
						Stack.Push(PLAYER::PLAYER_PED_ID());
						Stack.Push(14);
						Stack.Push(18);
						Stack.Push(0);
						Stack.Push(-1);
						Stack.Push(0);
						Stack.Push(0);
						Stack.Push(0);
						Stack.Push(-1);
						Stack.Push(-1);
						Stack.Push(-1);
						Stack.Push(0);
						Call_Loc(uParam0->f_1F0);
					}
				}
			}
			if (Global_26C413)
			{
				if (Global_10A95)
				{
					func_81(32, func_82(1, 1));
				}
			}
			if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(uParam0->f_239))
			{
				PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(uParam0->f_239);
			}
			uParam0->f_67.f_13 = 0;
			func_653(&(uParam0->f_1F5), &(uParam0->f_1F2), &(uParam0->f_1F3), &(uParam0->f_1F9), &(uParam0->f_1F8), *uParam0, &(uParam0->f_AA), &Global_26C92B, uParam0->f_67, 0, 1);
			uParam0->f_B = 3;
			break;
	}
	if (func_80())
	{
		func_78(0, 1, 1);
	}
	func_73();
	func_72(&(uParam0->f_209), 1);
}

void func_72(var uParam0, bool bParam1)//Position - 0xD0F2
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

void func_73()//Position - 0xD2A5
{
	if (!Global_3839.f_1 == 1)
	{
		if (func_77(0))
		{
			func_74(0);
		}
		MISC::SET_BIT(&Global_8D8, 2);
	}
}

void func_74(int iParam0)//Position - 0xD2CD
{
	if (Global_38D7)
	{
		func_76(0, 0);
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
	if (!func_75())
	{
		Global_3839.f_1 = 3;
	}
}

int func_75()//Position - 0xD33D
{
	if (Global_3839.f_1 == 1 || Global_3839.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_76(bool bParam0, bool bParam1)//Position - 0xD364
{
	if (bParam0)
	{
		if (func_77(0))
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

int func_77(int iParam0)//Position - 0xD3D8
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

void func_78(bool bParam0, bool bParam1, bool bParam2)//Position - 0xD432
{
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	if (bParam0)
	{
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(4);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(5);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
	}
	if (bParam1)
	{
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
	}
	if (bParam2)
	{
		if (!func_79())
		{
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
		}
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(1);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(14);
}

bool func_79()//Position - 0xD490
{
	return Global_15F9E.f_5;
}

bool func_80()//Position - 0xD49E
{
	return MISC::GET_GAME_TIMER() <= Global_4354.f_140A + 100;
}

void func_81(int iParam0, int iParam1)//Position - 0xD4B3
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

int func_82(int iParam0, bool bParam1)//Position - 0xD4E1
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
				else if (!func_83(iVar2, 0))
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_83(int iParam0, int iParam1)//Position - 0xD546
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_84(-1, 0) == 8;
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

int func_84(int iParam0, bool bParam1)//Position - 0xD591
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_17();
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

void func_85(int iParam0, int iParam1)//Position - 0xD5D2
{
	struct<65> Var0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		Var0 = 12;
		Var0.f_D = 12;
		Var0.f_1A = 12;
		Var0.f_27 = 9;
		Var0.f_31 = 9;
		func_88(iParam0, &Var0, 1);
		func_86(Var0, iParam1);
	}
}

void func_86(struct<50> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, int iParam16)//Position - 0xD61C
{
	func_87(387, Param0[0], iParam16, 1);
	func_87(388, Param0[1], iParam16, 1);
	func_87(389, Param0[2], iParam16, 1);
	func_87(390, Param0[3], iParam16, 1);
	func_87(391, Param0[4], iParam16, 1);
	func_87(392, Param0[5], iParam16, 1);
	func_87(393, Param0[6], iParam16, 1);
	func_87(394, Param0[7], iParam16, 1);
	func_87(395, Param0[8], iParam16, 1);
	func_87(396, Param0[9], iParam16, 1);
	func_87(397, Param0[10], iParam16, 1);
	func_87(398, Param0[11], iParam16, 1);
	func_87(399, Param0.f_D[0], iParam16, 1);
	func_87(400, Param0.f_D[1], iParam16, 1);
	func_87(401, Param0.f_D[2], iParam16, 1);
	func_87(402, Param0.f_D[3], iParam16, 1);
	func_87(403, Param0.f_D[4], iParam16, 1);
	func_87(404, Param0.f_D[5], iParam16, 1);
	func_87(405, Param0.f_D[6], iParam16, 1);
	func_87(406, Param0.f_D[7], iParam16, 1);
	func_87(407, Param0.f_D[8], iParam16, 1);
	func_87(408, Param0.f_D[9], iParam16, 1);
	func_87(409, Param0.f_D[10], iParam16, 1);
	func_87(410, Param0.f_D[11], iParam16, 1);
	func_87(411, Param0.f_1A[0], iParam16, 1);
	func_87(412, Param0.f_1A[1], iParam16, 1);
	func_87(413, Param0.f_1A[2], iParam16, 1);
	func_87(414, Param0.f_1A[3], iParam16, 1);
	func_87(415, Param0.f_1A[4], iParam16, 1);
	func_87(416, Param0.f_1A[5], iParam16, 1);
	func_87(417, Param0.f_1A[6], iParam16, 1);
	func_87(418, Param0.f_1A[7], iParam16, 1);
	func_87(419, Param0.f_1A[8], iParam16, 1);
	func_87(420, Param0.f_1A[9], iParam16, 1);
	func_87(421, Param0.f_1A[10], iParam16, 1);
	func_87(422, Param0.f_1A[11], iParam16, 1);
	func_87(423, Param0.f_27[0], iParam16, 1);
	func_87(424, Param0.f_27[1], iParam16, 1);
	func_87(425, Param0.f_27[2], iParam16, 1);
	func_87(426, Param0.f_27[3], iParam16, 1);
	func_87(427, Param0.f_27[4], iParam16, 1);
	func_87(428, Param0.f_27[5], iParam16, 1);
	func_87(429, Param0.f_27[6], iParam16, 1);
	func_87(430, Param0.f_27[7], iParam16, 1);
	func_87(431, Param0.f_27[8], iParam16, 1);
	func_87(432, Param0.f_31[0], iParam16, 1);
	func_87(433, Param0.f_31[1], iParam16, 1);
	func_87(434, Param0.f_31[2], iParam16, 1);
	func_87(435, Param0.f_31[3], iParam16, 1);
	func_87(436, Param0.f_31[4], iParam16, 1);
	func_87(437, Param0.f_31[5], iParam16, 1);
	func_87(438, Param0.f_31[6], iParam16, 1);
	func_87(439, Param0.f_31[7], iParam16, 1);
	func_87(440, Param0.f_31[8], iParam16, 1);
}

var func_87(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xD9E6
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_17();
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

void func_88(int iParam0, var uParam1, int iParam2)//Position - 0xDC0D
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = func_93(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_92(iParam0, iVar1, &(uParam1->f_D[iVar1]), uParam1[iVar1], &(uParam1->f_1A[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_91(iParam0, iVar1, &(uParam1->f_27[iVar1]), &(uParam1->f_31[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_90(iVar0))
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
			if (func_89(161, -1))
			{
				uParam1->f_3B = func_24(2035, Global_10A08, 0);
			}
			else
			{
				uParam1->f_3B = func_24(740, Global_10A08, 0);
			}
			uParam1->f_3C = func_24(741, Global_10A08, 0);
			uParam1->f_3D = func_24(742, Global_10A08, 0);
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == PLAYER::PLAYER_PED_ID())
		{
			if (func_89(161, -1))
			{
				uParam1->f_3B = func_24(2035, Global_10A08, 0);
			}
			else
			{
				uParam1->f_3B = func_24(740, Global_10A08, 0);
			}
		}
	}
}

int func_89(int iParam0, int iParam1)//Position - 0xDDB7
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_25BDB1[iParam0 /*6*/][func_16(iParam1)];
	if (STATS::STAT_GET_BOOL(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_90(int iParam0)//Position - 0xDDE3
{
	return iParam0 < 3;
}

void func_91(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)//Position - 0xDDEF
{
	int iVar0;
	
	iVar0 = func_93(iParam0);
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

void func_92(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)//Position - 0xE337
{
	int iVar0;
	
	iVar0 = func_93(iParam0);
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

int func_93(int iParam0)//Position - 0xE578
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_94(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_94(int iParam0)//Position - 0xE5B5
{
	if (func_90(iParam0))
	{
		return Global_17C49.f_744E[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_95(int iParam0)//Position - 0xE5DF
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_m_freemode_01"))
		{
			iVar0 = -1;
			iVar1 = -1;
			iVar2 = func_9(iParam0, 11);
			if (iVar2 >= 237)
			{
				iVar1 = func_41(joaat("mp_m_freemode_01"), iVar2, 11, 3);
				iVar0 = func_49(iVar1);
			}
			if ((((((((((((iVar2 >= 48 && iVar2 <= 63) || (iVar2 >= 64 && iVar2 <= 79)) || (iVar2 >= 96 && iVar2 <= 107)) || (iVar2 >= 108 && iVar2 <= 123)) || (iVar2 >= 156 && iVar2 <= 171)) || iVar0 == 3) || iVar0 == 4) || iVar0 == 6) || iVar0 == 7) || iVar0 == 10) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("JACKET"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("TUX_JACKET"), 0))
			{
				WEAPON::SET_WEAPON_ANIMATION_OVERRIDE(iParam0, -1397683069);
				PED::SET_MOVEMENT_MODE_OVERRIDE(PLAYER::PLAYER_PED_ID(), "MP_FEMALE_ACTION");
			}
			else
			{
				WEAPON::SET_WEAPON_ANIMATION_OVERRIDE(iParam0, joaat("DEFAULT"));
				PED::SET_MOVEMENT_MODE_OVERRIDE(PLAYER::PLAYER_PED_ID(), 0);
			}
		}
	}
}

void func_96()//Position - 0xE724
{
	CAM::SET_WIDESCREEN_BORDERS(0, -1);
	func_102();
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
	func_97(0, 1, 1, 0);
}

void func_97(bool bParam0, bool bParam1, int iParam2, int iParam3)//Position - 0xE771
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID());
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
		func_101(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_3839.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(0);
			}
			if (!func_75())
			{
				Global_3839.f_1 = 3;
			}
			Global_3D4C = 5;
		}
		func_100(1, iParam3, iParam2);
		Global_D5E4 = 1;
		Global_105F5 = 1;
		Global_10A93 = 1;
	}
	else
	{
		func_101(0);
		HUD::THEFEED_RESUME();
		Global_D5E4 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
		func_100(0, iParam3, iParam2);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_98(PLAYER::PLAYER_ID()))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
		}
		Global_10A93 = 0;
	}
}

int func_98(int iParam0)//Position - 0xE842
{
	if (func_83(iParam0, 0))
	{
		return 1;
	}
	if (func_99())
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

bool func_99()//Position - 0xE883
{
	return MISC::IS_BIT_SET(Global_240005, 3);
}

int func_100(int iParam0, var uParam1, var uParam2)//Position - 0xE894
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

void func_101(int iParam0)//Position - 0xE8C5
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

void func_102()//Position - 0xE8E8
{
	if (Global_15F9E.f_5 && Global_15F9E.f_6 == MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()))
	{
		HUD::CLEAR_HELP(1);
		Global_15F9E.f_5 = 0;
	}
}

void func_103(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0xE919
{
	if (Global_10A95)
	{
		func_117();
	}
	if (func_709(1))
	{
		if (uParam0->f_13)
		{
		}
		if (Global_10A95)
		{
			if (bParam3)
			{
				if (!func_115())
				{
				}
				else if ((!func_114() && !func_113()) && !STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					func_109(PLAYER::PLAYER_ID(), 1, 0, 1);
				}
				else
				{
					func_109(PLAYER::PLAYER_ID(), 0, 66048, 1);
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
		func_106();
		func_104();
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

void func_104()//Position - 0xEA4D
{
	if (!Global_14073B)
	{
		return;
	}
	func_105();
}

void func_105()//Position - 0xEA64
{
	Global_14073B = 0;
	StringCopy(&(Global_14073B.f_1), "", 24);
	Global_14073B.f_7 = 0;
}

void func_106()//Position - 0xEA83
{
	func_108(1);
	func_107(4, 0, -1);
	func_107(6, 0, -1);
	func_107(7, 0, -1);
	func_107(3, 0, -1);
	func_107(1, 0, -1);
	func_107(2, 0, -1);
	func_107(11, 0, -1);
	func_107(13, 0, -1);
	func_107(14, 0, -1);
	func_107(16, 0, -1);
}

void func_107(int iParam0, bool bParam1, int iParam2)//Position - 0xEADA
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

void func_108(int iParam0)//Position - 0xEB29
{
	Global_2554DA.f_110D = iParam0;
}

void func_109(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0xEB3A
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
		if (!func_115())
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
				if (!func_112(iVar23) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar23))
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
				func_111();
				func_110();
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
				if (!func_112(iVar23) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar23))
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

void func_110()//Position - 0xEEB9
{
	struct<2> Var0;
	
	Global_24F57C.f_2A4 = 0;
	Global_24F57C.f_2A5 = 0;
	Global_24F57C.f_2A6 = { 9999.9f, 9999.9f, 9999.9f };
	Global_24B0C4.f_560 = { Var0 };
}

void func_111()//Position - 0xEEF6
{
	Global_24B0C4.f_21A = 0;
	Global_24B0C4.f_589 = 0;
	Global_24B0C4.f_1A4 = 0;
	Global_24D5B9[PLAYER::PLAYER_ID() /*254*/].f_CC = 0;
}

int func_112(int iParam0)//Position - 0xEF23
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

bool func_113()//Position - 0xEF54
{
	return Global_250CE3.f_290.f_5;
}

bool func_114()//Position - 0xEF65
{
	return MISC::IS_BIT_SET(Global_250CE3, 2);
}

int func_115()//Position - 0xEF76
{
	if (func_116() == 0)
	{
		return 1;
	}
	return 0;
}

int func_116()//Position - 0xEF8B
{
	return Global_1406D3.f_12;
}

void func_117()//Position - 0xEF99
{
	if (Global_1406A2.f_1 == 1)
	{
		func_118(0);
		Global_1406A2.f_1 = 0;
		Global_1406A2.f_2 = 0;
	}
}

void func_118(int iParam0)//Position - 0xEFBE
{
	if (func_126())
	{
		if (iParam0 == 1)
		{
			if (Global_2554DA.f_1085 == -1)
			{
				Global_2554DA.f_1085 = 60000;
			}
			func_125(&(Global_2554DA.f_1083), 0, 0);
			if (Global_2554DA.f_1088 == -1)
			{
				Global_2554DA.f_1088 = 10000;
			}
			func_125(&(Global_2554DA.f_1086), 0, 0);
		}
		else
		{
			Global_1406A2 = 0;
			func_124();
		}
		if ((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_123()) && !func_119(PLAYER::PLAYER_ID()))
		{
			Global_ED3D8 = 0;
		}
	}
}

int func_119(int iParam0)//Position - 0xF049
{
	if (func_120(iParam0, 1))
	{
		if (Global_182604[iParam0 /*324*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_120(int iParam0, bool bParam1)//Position - 0xF06D
{
	if (bParam1)
	{
		if (func_121(iParam0))
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

bool func_121(int iParam0)//Position - 0xF099
{
	return func_122(iParam0);
}

bool func_122(int iParam0)//Position - 0xF0A7
{
	return MISC::IS_BIT_SET(Global_182604[iParam0 /*324*/].f_D.f_1, 0);
}

bool func_123()//Position - 0xF0C1
{
	return Global_250CE3.f_2C7;
}

void func_124()//Position - 0xF0D0
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_126())
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

void func_125(var uParam0, bool bParam1, bool bParam2)//Position - 0xF1B8
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

bool func_126()//Position - 0xF1F5
{
	return Global_1406A2;
}

void func_127(bool bParam0)//Position - 0xF201
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

void func_128(var uParam0)//Position - 0xF222
{
	if (uParam0->f_252)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_252.f_1);
		uParam0->f_252 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_252.f_2))
	{
		PED::DELETE_PED(&(uParam0->f_252.f_2));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_26CC0B))
	{
		PED::DELETE_PED(&Global_26CC0B);
	}
}

void func_129(int iParam0)//Position - 0xF26F
{
	char cVar0[64];
	
	StringCopy(&cVar0, func_130(iParam0), 64);
	if (MISC::GET_HASH_KEY(&cVar0) != 0)
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(&cVar0);
	}
}

char* func_130(int iParam0)//Position - 0xF291
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

void func_131(bool bParam0, int iParam1)//Position - 0xF45F
{
	int iVar0;
	
	if (!func_133(&iVar0, 0, iParam1))
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
		func_132(&(Global_4354.f_1336[iVar0 /*10*/]));
		Global_4354.f_1373[iVar0] = 0;
	}
	else
	{
		Global_4354.f_1373[iVar0] = 0;
	}
}

void func_132(var uParam0)//Position - 0xF4FD
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

int func_133(var uParam0, bool bParam1, int iParam2)//Position - 0xF526
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

void func_134(var uParam0)//Position - 0xF5C3
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

void func_135(int iParam0, int iParam1)//Position - 0xF5F9
{
	int iVar0;
	int iVar1;
	struct<65> Var2;
	int iVar3;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = func_93(iParam0);
		if (func_90(iVar0))
		{
			if (iVar0 == 2)
			{
				iVar1 = func_252(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					func_251(iVar0);
					func_145(iParam0, &(Global_17C49.f_6C1.f_21B[iVar0 /*65*/]), 0);
				}
			}
			Var2 = 12;
			Var2.f_D = 12;
			Var2.f_1A = 12;
			Var2.f_27 = 9;
			Var2.f_31 = 9;
			func_88(iParam0, &Var2, 1);
			Global_15E98[iVar0 /*65*/] = { Var2 };
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				func_139();
			}
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != MISC::GET_HASH_KEY("clothes_shop_sp") || (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("lester1")) == 0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("michael4")) == 0))
			{
				if (iParam1 || ((((((!func_138(0) && !func_138(1)) && !func_138(2)) && !func_138(3)) && !func_138(4)) && !func_138(9)) && !func_138(10)))
				{
					Global_17C49.f_6C1.f_21B[iVar0 /*65*/] = { Var2 };
					Global_17C49.f_6C1.f_21B.f_653[iVar0] = func_137(iParam0);
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_17C49.f_6C1.f_21B.f_CC[iVar3 /*4*/][iVar0] = func_9(iParam0, func_136(iVar3));
						iVar3++;
					}
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_17C49.f_6C1.f_21B.f_CC[iVar3 /*4*/][iVar0] = func_9(iParam0, func_136(iVar3));
						iVar3++;
					}
					if (iVar0 == 0)
					{
						if (Global_17C49.f_1CAD.f_63.f_3A[121])
						{
							Global_17C49.f_1CAD.f_63.f_3A[122] = 1;
						}
					}
				}
			}
		}
	}
}

int func_136(int iParam0)//Position - 0xF7DD
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

int func_137(int iParam0)//Position - 0xF88D
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
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar4 = iVar1;
		iVar3 = PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, iVar4);
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			iVar0 = (iVar0 + PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, iVar4, iVar2));
			iVar2++;
		}
		iVar1++;
	}
	iVar5 = 0;
	while (iVar5 < 9)
	{
		iVar8 = iVar5;
		iVar7 = PED::GET_NUMBER_OF_PED_PROP_DRAWABLE_VARIATIONS(iParam0, iVar8);
		iVar6 = 0;
		while (iVar6 < iVar7)
		{
			iVar0 = (iVar0 + PED::GET_NUMBER_OF_PED_PROP_TEXTURE_VARIATIONS(iParam0, iVar8, iVar6));
			iVar6++;
		}
		iVar5++;
	}
	return iVar0;
}

bool func_138(int iParam0)//Position - 0xF920
{
	return Global_8861 == iParam0;
}

void func_139()//Position - 0xF92E
{
	struct<50> Var0;
	
	if ((PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || !func_90(func_143())) || !func_140())
	{
		return;
	}
	Var0 = 12;
	Var0.f_D = 12;
	Var0.f_1A = 12;
	Var0.f_27 = 9;
	Var0.f_31 = 9;
	func_88(PLAYER::PLAYER_PED_ID(), &Var0, 1);
	func_87(1306, Var0[0], -1, 1);
	func_87(1307, Var0[1], -1, 1);
	func_87(1308, Var0[2], -1, 1);
	func_87(1309, Var0[3], -1, 1);
	func_87(1310, Var0[4], -1, 1);
	func_87(1311, Var0[5], -1, 1);
	func_87(1312, Var0[6], -1, 1);
	func_87(1313, Var0[7], -1, 1);
	func_87(1314, Var0[8], -1, 1);
	func_87(1315, Var0[9], -1, 1);
	func_87(1316, Var0[10], -1, 1);
	func_87(1317, Var0[11], -1, 1);
	func_87(1318, Var0.f_D[0], -1, 1);
	func_87(1319, Var0.f_D[1], -1, 1);
	func_87(1320, Var0.f_D[2], -1, 1);
	func_87(1321, Var0.f_D[3], -1, 1);
	func_87(1322, Var0.f_D[4], -1, 1);
	func_87(1323, Var0.f_D[5], -1, 1);
	func_87(1324, Var0.f_D[6], -1, 1);
	func_87(1325, Var0.f_D[7], -1, 1);
	func_87(1326, Var0.f_D[8], -1, 1);
	func_87(1327, Var0.f_D[9], -1, 1);
	func_87(1328, Var0.f_D[10], -1, 1);
	func_87(1329, Var0.f_D[11], -1, 1);
	func_87(1330, Var0.f_1A[0], -1, 1);
	func_87(1331, Var0.f_1A[1], -1, 1);
	func_87(1332, Var0.f_1A[2], -1, 1);
	func_87(1333, Var0.f_1A[3], -1, 1);
	func_87(1334, Var0.f_1A[4], -1, 1);
	func_87(1335, Var0.f_1A[5], -1, 1);
	func_87(1336, Var0.f_1A[6], -1, 1);
	func_87(1337, Var0.f_1A[7], -1, 1);
	func_87(1338, Var0.f_1A[8], -1, 1);
	func_87(1339, Var0.f_1A[9], -1, 1);
	func_87(1340, Var0.f_1A[10], -1, 1);
	func_87(1341, Var0.f_1A[11], -1, 1);
	func_87(1342, Var0.f_27[0], -1, 1);
	func_87(1343, Var0.f_27[1], -1, 1);
	func_87(1344, Var0.f_27[2], -1, 1);
	func_87(1345, Var0.f_27[3], -1, 1);
	func_87(1346, Var0.f_27[4], -1, 1);
	func_87(1347, Var0.f_27[5], -1, 1);
	func_87(1348, Var0.f_27[6], -1, 1);
	func_87(1349, Var0.f_27[7], -1, 1);
	func_87(1350, Var0.f_27[8], -1, 1);
	func_87(1351, Var0.f_31[0], -1, 1);
	func_87(1352, Var0.f_31[1], -1, 1);
	func_87(1353, Var0.f_31[2], -1, 1);
	func_87(1354, Var0.f_31[3], -1, 1);
	func_87(1355, Var0.f_31[4], -1, 1);
	func_87(1356, Var0.f_31[5], -1, 1);
	func_87(1357, Var0.f_31[6], -1, 1);
	func_87(1358, Var0.f_31[7], -1, 1);
	func_87(1359, Var0.f_31[8], -1, 1);
	func_87(1360, func_143(), -1, 1);
	STATS::STAT_SET_BOOL(joaat("clo_stored_initial"), 1, 1);
	Global_17C49.f_6C1.f_21B.f_C87 = 1;
}

int func_140()//Position - 0xFD41
{
	if (func_142() && func_141(0))
	{
		return 1;
	}
	return 0;
}

var func_141(int iParam0)//Position - 0xFD5F
{
	return Global_140671[iParam0];
}

var func_142()//Position - 0xFD6F
{
	return func_141(func_17() + 1);
}

int func_143()//Position - 0xFD81
{
	func_144();
	return Global_17C49.f_6C1.f_21B.f_C8D;
}

void func_144()//Position - 0xFD9A
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_94(Global_17C49.f_6C1.f_21B.f_C8D) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_93(PLAYER::PLAYER_PED_ID());
			if (func_90(iVar0) && (!func_138(14) || Global_17832))
			{
				if (Global_17C49.f_6C1.f_21B.f_C8D != iVar0 && func_90(Global_17C49.f_6C1.f_21B.f_C8D))
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

void func_145(int iParam0, var uParam1, bool bParam2)//Position - 0xFE97
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = func_93(iParam0);
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar3 = 0;
		while (iVar3 < 12)
		{
			if (iVar3 != 1 || (iVar3 == 1 && !bParam2))
			{
				PED::SET_PED_COMPONENT_VARIATION(iParam0, iVar3, uParam1->f_D[iVar3], (*uParam1)[iVar3], uParam1->f_1A[iVar3]);
			}
			iVar3++;
		}
		iVar3 = 0;
		while (iVar3 < 9)
		{
			if (uParam1->f_27[iVar3] != -1 && uParam1->f_27[iVar3] != 255)
			{
				PED::SET_PED_PROP_INDEX(iParam0, iVar3, uParam1->f_27[iVar3], uParam1->f_31[iVar3], false);
			}
			else
			{
				PED::CLEAR_PED_PROP(iParam0, iVar3);
			}
			iVar3++;
		}
		if (func_90(iVar0))
		{
			Global_17C49.f_6C1.f_21B[iVar0 /*65*/].f_3B = uParam1->f_3B;
			Global_17C49.f_6C1.f_21B[iVar0 /*65*/].f_3C = uParam1->f_3C;
			Global_17C49.f_6C1.f_21B[iVar0 /*65*/].f_3D = uParam1->f_3D;
			if (func_250(iParam0, iVar1, &iVar2, 0))
			{
				func_229(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
			Global_17C49.f_6C1.f_21B[iVar0 /*65*/].f_3E = uParam1->f_3E;
			Global_17C49.f_6C1.f_21B[iVar0 /*65*/].f_3F = uParam1->f_3F;
			Global_17C49.f_6C1.f_21B[iVar0 /*65*/].f_40 = uParam1->f_40;
			if (func_148(iParam0, iVar1, &iVar2))
			{
				func_229(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			func_15(741, uParam1->f_3C, Global_10A08, 1);
			func_15(742, uParam1->f_3D, Global_10A08, 1);
			iVar4 = func_10(iParam0, uParam1->f_D[2], (*uParam1)[2], 2);
			func_958(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, Global_10A08, 0);
			if (!bParam2)
			{
				iVar5 = func_10(iParam0, uParam1->f_D[1], (*uParam1)[1], 1);
				func_958(iParam0, 1, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_10A08, 0);
			}
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == PLAYER::PLAYER_PED_ID())
		{
			func_15(740, uParam1->f_3B, Global_10A08, 1);
			func_15(2035, uParam1->f_3B, Global_10A08, 1);
			func_146(161, 1, -1, 1);
		}
	}
}

void func_146(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x100EF
{
	int iVar0;
	
	if (func_147())
	{
		iVar0 = Global_25BDB1[iParam0 /*6*/][func_16(iParam2)];
		if (iVar0 != 0)
		{
			STATS::STAT_SET_BOOL(iVar0, iParam1, iParam3);
		}
	}
}

int func_147()//Position - 0x10121
{
	return 1;
	return 0;
}

int func_148(var uParam0, int iParam1, int iParam2)//Position - 0x1012E
{
	int iVar0;
	
	iVar0 = func_228(iParam1);
	if (Global_17C49.f_6C1.f_21B[iVar0 /*65*/].f_3F != -99)
	{
		if (!func_149(uParam0, Global_17C49.f_6C1.f_21B[iVar0 /*65*/].f_40, Global_17C49.f_6C1.f_21B[iVar0 /*65*/].f_3F))
		{
			*iParam2 = Global_17C49.f_6C1.f_21B[iVar0 /*65*/].f_3E;
			Global_17C49.f_6C1.f_21B[iVar0 /*65*/].f_3F = -99;
			Global_17C49.f_6C1.f_21B[iVar0 /*65*/].f_40 = 1;
			return 1;
		}
	}
	return 0;
}

int func_149(int iParam0, int iParam1, int iParam2)//Position - 0x101BA
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	var uVar8;
	
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	Global_10A0A[1 /*14*/] = { func_162(iVar0, iParam1, iParam2) };
	if (!MISC::IS_BIT_SET(Global_10A0A[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar5 = { func_159(iVar0, iParam2) };
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_149(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { func_155(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_149(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_10A0A[2 /*14*/] = { func_162(iVar0, 14, iVar4) };
									if (Global_10A0A[2 /*14*/].f_C == iVar3)
									{
										if (func_149(iParam0, 14, iVar4))
										{
											if (!func_150(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_10A0A[2 /*14*/])))
											{
												return 0;
											}
										}
									}
									iVar4++;
								}
							}
							iVar3++;
						}
					}
					else
					{
						iVar1 = func_9(iParam0, iVar2);
						Global_10A0A[2 /*14*/] = { func_162(iVar0, iVar2, iVar1) };
						if (!func_150(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_10A0A[2 /*14*/])))
						{
							return 0;
						}
					}
				}
			}
			iVar2++;
		}
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar8 = { func_155(iVar0, iParam2) };
		iVar7 = 0;
		while (iVar7 <= 8)
		{
			if (!func_149(iParam0, 14, uVar8[iVar7]))
			{
				return 0;
			}
			iVar7++;
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
	else if (Global_10A0A[1 /*14*/].f_3 == PED::GET_PED_DRAWABLE_VARIATION(iParam0, func_11(iParam1)) && Global_10A0A[1 /*14*/].f_4 == PED::GET_PED_TEXTURE_VARIATION(iParam0, func_11(iParam1)))
	{
		return 1;
	}
	return 0;
}

int func_150(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)//Position - 0x10412
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
		uVar0 = { func_155(iParam0, (*uParam4)[13]) };
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
	if (func_154(iParam0, iParam2, iParam3))
	{
		return 1;
	}
	if (iParam0 == joaat("player_zero"))
	{
		if (func_153(iParam0, iParam2, iParam3))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
		else if (func_152(iParam0, iParam2, iParam3))
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
		else if (func_151(iParam0, iParam2, iParam3))
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
		if (func_153(iParam0, iParam2, iParam3))
		{
			if ((iParam1 == 3 || iParam1 == 5) || iParam1 == 7)
			{
				return 0;
			}
			return 1;
		}
		else if (func_152(iParam0, iParam2, iParam3))
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
		else if (func_151(iParam0, iParam2, iParam3))
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
		if (func_153(iParam0, iParam2, iParam3))
		{
			if (((((iParam1 == 1 || iParam1 == 2) || iParam1 == 6) || iParam1 == 8) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
		else if (func_152(iParam0, iParam2, iParam3))
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
		else if (func_151(iParam0, iParam2, iParam3))
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

int func_151(int iParam0, int iParam1, int iParam2)//Position - 0x10A0D
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
						return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_41(iParam0, iParam2, 14, 3), joaat("HAT"), 1) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_41(iParam0, iParam2, 14, 3), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_41(iParam0, iParam2, 1, 3), joaat("HAT"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_41(iParam0, iParam2, 1, 3), -1842686353, 0));
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
						return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_41(iParam0, iParam2, 14, 4), joaat("HAT"), 1) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_41(iParam0, iParam2, 14, 4), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_41(iParam0, iParam2, 1, 4), joaat("HAT"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_41(iParam0, iParam2, 1, 4), -1842686353, 0));
					}
					break;
			}
			break;
	}
	return 0;
}

int func_152(int iParam0, int iParam1, int iParam2)//Position - 0x10C30
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
					iVar0 = func_41(iParam0, iParam2, 1, 3);
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
					iVar1 = func_41(iParam0, iParam2, 1, 4);
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

int func_153(int iParam0, int iParam1, int iParam2)//Position - 0x11025
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
					return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_41(iParam0, iParam2, 14, 3), joaat("GLASSES"), 1);
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
					return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_41(iParam0, iParam2, 14, 4), joaat("GLASSES"), 1);
				}
			}
			break;
	}
	return 0;
}

int func_154(int iParam0, int iParam1, int iParam2)//Position - 0x11304
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

struct<10> func_155(int iParam0, int iParam1)//Position - 0x1139D
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
					func_158(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_158(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_158(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_158(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_158(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_158(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_158(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_158(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_158(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_158(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_158(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_156(&Var1, iParam0, iParam1, 10);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 31:
					func_158(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_158(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_158(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_158(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_158(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_158(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_158(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_158(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_158(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_158(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_156(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 31:
					func_158(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_158(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_158(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_158(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_158(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_158(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_158(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_158(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_158(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_158(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_156(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_158(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_158(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_158(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_158(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_158(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_158(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_158(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_158(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_158(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_158(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_158(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_158(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_158(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_158(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_158(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 14:
					func_158(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_158(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_158(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_158(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_158(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_158(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_158(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_158(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_158(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_158(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 24:
					func_158(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_156(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_158(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_158(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_158(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_158(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_158(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_158(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_158(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_158(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_158(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_158(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_158(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_158(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_158(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_158(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_158(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8);
					break;
				
				case 14:
					func_158(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_158(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_158(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_158(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_158(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_158(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_158(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_158(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_158(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_158(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_156(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
	}
	return Var1;
}

void func_156(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x11CCC
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
						(*iParam0)[Var2.f_2] = func_157(iParam1, Var2.x, 14, iVar0);
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

int func_157(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x11DF6
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
					return (func_43(iParam0) + iVar2);
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
		iVar7 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 6, -1, 0, -1, func_11(iParam2));
		iVar5 = 0;
		while (iVar5 < iVar7)
		{
			FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar5, &Var4);
			if (!FILES::IS_CONTENT_ITEM_LOCKED(Var4))
			{
				if (iParam1 == Var4.f_1)
				{
					return (func_42(iParam0, func_11(iParam2)) + iVar6);
				}
				iVar6++;
			}
			iVar5++;
		}
	}
	return -99;
}

void func_158(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x11ED6
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

struct<16> func_159(int iParam0, int iParam1)//Position - 0x11F1E
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
						func_161(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					else
					{
						func_161(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					break;
				
				case 1:
					func_161(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
					break;
				
				case 2:
					func_161(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
					break;
				
				case 3:
					func_161(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
					break;
				
				case 4:
					func_161(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
					break;
				
				case 5:
					func_161(&Var1, -99, -99, Global_17C49.f_6C1.f_21B.f_C4[0], Global_17C49.f_6C1.f_21B.f_C8[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
					break;
				
				case 6:
					func_161(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_161(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 8:
					func_161(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_161(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_161(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
					break;
				
				case 11:
					func_161(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_161(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_161(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_161(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
					break;
				
				case 15:
					func_161(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
					break;
				
				case 16:
					func_161(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_161(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_161(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
					break;
				
				case 19:
					func_161(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_161(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_161(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_161(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_161(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_161(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_161(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_161(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_161(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_161(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_161(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_161(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_161(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
					break;
				
				case 32:
					func_161(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_161(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_161(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
					break;
				
				case 35:
					func_161(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_161(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_161(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_161(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_161(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_161(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_161(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_161(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_161(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_161(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_161(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 46:
					func_161(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_161(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 48:
					func_161(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 49:
					func_161(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 50:
					func_161(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
					break;
				
				case 51:
					func_161(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 52:
					func_161(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_160(&Var1, iParam0, iParam1, 53);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					func_161(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_161(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 2:
					func_161(&Var1, -99, -99, Global_17C49.f_6C1.f_21B.f_C4[1], Global_17C49.f_6C1.f_21B.f_C8[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
					break;
				
				case 3:
					func_161(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
					break;
				
				case 4:
					func_161(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
					break;
				
				case 5:
					func_161(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 6:
					func_161(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_161(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
					break;
				
				case 8:
					func_161(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
					break;
				
				case 9:
					func_161(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_161(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_161(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 12:
					func_161(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_161(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_161(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_161(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_161(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_161(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_161(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
					break;
				
				case 19:
					func_161(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_161(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_161(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
					break;
				
				case 22:
					func_161(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
					break;
				
				case 23:
					func_161(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
					break;
				
				case 24:
					func_161(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
					break;
				
				case 25:
					func_161(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
					break;
				
				case 26:
					func_161(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
					break;
				
				case 27:
					func_161(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
					break;
				
				case 28:
					func_161(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
					break;
				
				case 29:
					func_161(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
					break;
				
				case 30:
					func_161(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
					break;
				
				case 31:
					func_161(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
					break;
				
				case 32:
					func_161(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
					break;
				
				case 33:
					func_161(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
					break;
				
				case 34:
					func_161(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
					break;
				
				case 35:
					func_161(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
					break;
				
				case 36:
					func_161(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
					break;
				
				case 37:
					func_161(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
					break;
				
				case 38:
					func_161(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_161(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_161(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_161(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_161(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_161(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
					break;
				
				case 44:
					func_161(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 45:
					func_161(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
					break;
				
				case 46:
					func_161(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
					break;
				
				default:
					func_160(&Var1, iParam0, iParam1, 47);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					func_161(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_161(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
					break;
				
				case 2:
					func_161(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
					break;
				
				case 3:
					func_161(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
					break;
				
				case 4:
					func_161(&Var1, -99, -99, Global_17C49.f_6C1.f_21B.f_C4[2], Global_17C49.f_6C1.f_21B.f_C8[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 5:
					func_161(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
					break;
				
				case 6:
					func_161(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
					break;
				
				case 7:
					func_161(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
					break;
				
				case 8:
					func_161(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_161(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_161(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_161(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_161(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_161(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_161(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_161(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_161(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_161(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_161(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 19:
					func_161(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_161(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_161(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_161(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_161(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_161(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_161(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_161(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_161(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_161(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_161(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_161(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_161(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 32:
					func_161(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_161(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_161(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 35:
					func_161(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_161(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_161(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_161(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_161(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_161(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_161(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_161(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_161(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_161(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_161(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 46:
					func_161(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_161(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_160(&Var1, iParam0, iParam1, 48);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_161(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31);
					break;
				
				case 1:
					func_161(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
					break;
				
				case 2:
					func_161(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
					break;
				
				case 3:
					func_161(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
					break;
				
				case 4:
					func_161(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
					break;
				
				case 5:
					func_161(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
					break;
				
				case 6:
					func_161(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
					break;
				
				case 7:
					func_161(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
					break;
				
				case 8:
					func_161(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
					break;
				
				case 9:
					func_161(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
					break;
				
				case 10:
					func_161(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
					break;
				
				case 11:
					func_161(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
					break;
				
				case 12:
					func_161(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
					break;
				
				case 13:
					func_161(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
					break;
				
				case 14:
					func_161(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
					break;
				
				case 15:
					func_161(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
					break;
				
				case 16:
					func_161(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
					break;
				
				case 17:
					func_161(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
					break;
				
				case 18:
					func_161(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
					break;
				
				case 19:
					func_161(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
					break;
				
				case 20:
					func_161(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
					break;
				
				case 21:
					func_161(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
					break;
				
				case 22:
					func_161(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
					break;
				
				case 23:
					func_161(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
					break;
				
				case 24:
					func_161(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
					break;
				
				case 25:
					func_161(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
					break;
				
				default:
					func_160(&Var1, iParam0, iParam1, 26);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_161(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31);
					break;
				
				case 1:
					func_161(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
					break;
				
				case 2:
					func_161(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0);
					break;
				
				case 3:
					func_161(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
					break;
				
				case 4:
					func_161(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
					break;
				
				case 5:
					func_161(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
					break;
				
				case 6:
					func_161(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
					break;
				
				case 7:
					func_161(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
					break;
				
				case 8:
					func_161(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
					break;
				
				case 9:
					func_161(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
					break;
				
				case 10:
					func_161(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
					break;
				
				case 11:
					func_161(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
					break;
				
				case 12:
					func_161(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
					break;
				
				case 13:
					func_161(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31);
					break;
				
				case 14:
					func_161(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
					break;
				
				case 15:
					func_161(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
					break;
				
				case 16:
					func_161(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
					break;
				
				case 17:
					func_161(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
					break;
				
				case 18:
					func_161(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
					break;
				
				case 19:
					func_161(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
					break;
				
				case 20:
					func_161(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
					break;
				
				case 21:
					func_161(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
					break;
				
				case 22:
					func_161(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
					break;
				
				case 23:
					func_161(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
					break;
				
				case 24:
					func_161(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
					break;
				
				case 25:
					func_161(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
					break;
				
				case 26:
					func_161(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
					break;
				
				case 27:
					func_161(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
					break;
				
				default:
					func_160(&Var1, iParam0, iParam1, 28);
					break;
			}
			break;
	}
	return Var1;
}

void func_160(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x13D61
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
						(*iParam0)[func_136(Var2.f_2)] = Var2.x;
					}
					else
					{
						(*iParam0)[func_136(Var2.f_2)] = func_157(iParam1, Var2.x, func_136(Var2.f_2), iVar0);
					}
				}
				else if (Var2.f_1 != -1)
				{
					(*iParam0)[func_136(Var2.f_2)] = Var2.f_1;
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

void func_161(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x13F12
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

struct<14> func_162(int iParam0, int iParam1, int iParam2)//Position - 0x13F83
{
	func_227();
	if (iParam0 == joaat("player_zero"))
	{
		func_209(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_one"))
	{
		func_190(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_two"))
	{
		func_163(iParam1, iParam2);
	}
	return Global_10A0A[0 /*14*/];
}

void func_163(int iParam0, int iParam1)//Position - 0x13FD5
{
	switch (iParam0)
	{
		case 0:
			func_189(iParam1);
			break;
		
		case 2:
			func_188(iParam1);
			break;
		
		case 3:
			func_185(iParam1);
			break;
		
		case 4:
			func_184(iParam1);
			break;
		
		case 6:
			func_183(iParam1);
			break;
		
		case 5:
			func_182(iParam1);
			break;
		
		case 8:
			func_181(iParam1);
			break;
		
		case 9:
			func_180(iParam1);
			break;
		
		case 10:
			func_179(iParam1);
			break;
		
		case 1:
			func_178(iParam1);
			break;
		
		case 7:
			func_177(iParam1);
			break;
		
		case 11:
			func_176(iParam1);
			break;
		
		case 12:
			func_175(iParam1);
			break;
		
		case 13:
			func_174(iParam1);
			break;
		
		case 14:
			func_164(iParam1);
			break;
	}
}

void func_164(int iParam0)//Position - 0x140E9
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
			func_173(iVar7, iParam0, 155);
			return;
			break;
	}
	func_165(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_165(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x1535F
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
	uParam0->f_C = func_172(iParam8);
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
			if (!func_170(Global_280004, 1, 1, 1, -1))
			{
				MISC::CLEAR_BIT(&(uParam0->f_6), 2);
			}
			if (!func_170(Global_280004, 2, 1, 1, -1))
			{
				MISC::SET_BIT(&(uParam0->f_6), 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_170(Global_280004, 1, 1, 1, -1))
			{
				MISC::CLEAR_BIT(&(uParam0->f_6), 2);
			}
			if (!func_170(Global_280004, 2, 1, 1, -1))
			{
				MISC::SET_BIT(&(uParam0->f_6), 4);
			}
		}
		else
		{
			if (!func_170(Global_280004, 1, 1, 1, -1))
			{
				MISC::CLEAR_BIT(&(uParam0->f_6), 2);
			}
			if (!func_170(Global_280004, 2, 1, 1, -1))
			{
				MISC::SET_BIT(&(uParam0->f_6), 4);
			}
		}
	}
	else if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
	{
		MISC::SET_BIT(&(uParam0->f_6), 0);
		MISC::SET_BIT(&(uParam0->f_6), 5);
		if (func_169(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0))
		{
			MISC::SET_BIT(&(uParam0->f_6), 1);
		}
		if (func_169(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0))
		{
			MISC::SET_BIT(&(uParam0->f_6), 2);
		}
		if (!func_169(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0))
		{
			MISC::SET_BIT(&(uParam0->f_6), 4);
		}
	}
	else
	{
		MISC::SET_BIT(&(uParam0->f_6), 0);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			if (!func_138(14))
			{
				uVar0 = func_24(func_168(iParam1, uParam0->f_2), Global_10A08, 0);
				if (MISC::IS_BIT_SET(uVar0, uParam0->f_1))
				{
					MISC::SET_BIT(&(uParam0->f_6), 1);
				}
				iVar0 = func_24(func_167(iParam1, uParam0->f_2), Global_10A08, 0);
				if (MISC::IS_BIT_SET(iVar0, uParam0->f_1))
				{
					MISC::SET_BIT(&(uParam0->f_6), 2);
				}
				if (func_166(iParam1, uParam0->f_2, &iVar1))
				{
					iVar0 = func_24(iVar1, Global_10A08, 0);
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

bool func_166(int iParam0, int iParam1, var uParam2)//Position - 0x156E2
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

int func_167(int iParam0, int iParam1)//Position - 0x15AE7
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

int func_168(int iParam0, int iParam1)//Position - 0x15EE2
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

int func_169(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x162DD
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

int func_170(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)//Position - 0x171FB
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
	if (func_171(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		uVar3 = func_24(iVar2, iVar0, 0);
		return MISC::IS_BIT_SET(uVar3, iVar1);
	}
	return 0;
}

bool func_171(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0x1723D
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

int func_172(int iParam0)//Position - 0x178DE
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

void func_173(int iParam0, int iParam1, int iParam2)//Position - 0x179B2
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
					func_165(&(Global_10A0A[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
					return;
				}
				iVar4++;
			}
			iVar3++;
		}
	}
	else if (iParam0 == 13)
	{
		func_165(&(Global_10A0A[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
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
					func_165(&(Global_10A0A[0 /*14*/]), iParam0, iParam1, &(Var6.f_9), Var6.f_3, Var6.f_4, Var6.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var6.f_1, joaat("OUTFIT_ONLY"), 0), iVar7, 2, Var6.f_1 != 0);
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
		iVar14 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iVar1, 6, -1, 0, -1, func_11(iParam0));
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
					func_165(&(Global_10A0A[0 /*14*/]), iParam0, iParam1, &(Var11.f_9), Var11.f_3, Var11.f_4, Var11.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var11.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, Var11.f_1 != 0);
					return;
				}
				iVar13++;
			}
			iVar12++;
		}
	}
}

void func_174(int iParam0)//Position - 0x17C2D
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
			func_173(iVar7, iParam0, 9);
			return;
			break;
	}
	func_165(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_175(int iParam0)//Position - 0x17D83
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
			func_173(iVar7, iParam0, 48);
			return;
			break;
	}
	func_165(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_176(int iParam0)//Position - 0x18291
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
			func_173(iVar7, iParam0, 1);
			return;
			break;
	}
	func_165(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_177(int iParam0)//Position - 0x18305
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
			func_173(iVar7, iParam0, 1);
			return;
			break;
	}
	func_165(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_178(int iParam0)//Position - 0x18378
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
			func_173(iVar7, iParam0, 6);
			return;
			break;
	}
	func_165(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_179(int iParam0)//Position - 0x1845E
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
			func_173(iVar7, iParam0, 33);
			return;
			break;
	}
	func_165(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_180(int iParam0)//Position - 0x187C0
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
			func_173(iVar7, iParam0, 17);
			return;
			break;
	}
	func_165(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_181(int iParam0)//Position - 0x189D0
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
			func_173(iVar7, iParam0, 18);
			return;
			break;
	}
	func_165(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_182(int iParam0)//Position - 0x18BFF
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
			func_173(iVar7, iParam0, 7);
			return;
			break;
	}
	func_165(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_183(int iParam0)//Position - 0x18D0E
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
			func_173(iVar7, iParam0, 84);
			return;
			break;
	}
	func_165(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_184(int iParam0)//Position - 0x196AC
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
			func_173(iVar7, iParam0, 104);
			return;
			break;
	}
	func_165(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_185(int iParam0)//Position - 0x1A21E
{
	if (iParam0 < 136)
	{
		func_187(iParam0);
	}
	else
	{
		func_186(iParam0);
	}
	if (Global_10A0A[0 /*14*/].f_2 == -1)
	{
		func_173(3, iParam0, 242);
	}
}

void func_186(int iParam0)//Position - 0x1A252
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
	func_165(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_187(int iParam0)//Position - 0x1AE56
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
	func_165(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_188(int iParam0)//Position - 0x1BD64
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
			func_173(iVar7, iParam0, 9);
			return;
			break;
	}
	func_165(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_189(int iParam0)//Position - 0x1BE90
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
			func_173(iVar7, iParam0, 7);
			return;
			break;
	}
	func_165(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_190(int iParam0, int iParam1)//Position - 0x1BF8D
{
	switch (iParam0)
	{
		case 0:
			func_208(iParam1);
			break;
		
		case 2:
			func_207(iParam1);
			break;
		
		case 3:
			func_203(iParam1);
			break;
		
		case 4:
			func_202(iParam1);
			break;
		
		case 6:
			func_201(iParam1);
			break;
		
		case 5:
			func_200(iParam1);
			break;
		
		case 8:
			func_199(iParam1);
			break;
		
		case 9:
			func_198(iParam1);
			break;
		
		case 10:
			func_197(iParam1);
			break;
		
		case 1:
			func_196(iParam1);
			break;
		
		case 7:
			func_195(iParam1);
			break;
		
		case 11:
			func_194(iParam1);
			break;
		
		case 12:
			func_193(iParam1);
			break;
		
		case 13:
			func_192(iParam1);
			break;
		
		case 14:
			func_191(iParam1);
			break;
	}
}

void func_191(int iParam0)//Position - 0x1C07F
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
			func_173(iVar7, iParam0, 175);
			return;
			break;
	}
	func_165(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_192(int iParam0)//Position - 0x1D56F
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
			func_173(iVar7, iParam0, 9);
			return;
			break;
	}
	func_165(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_193(int iParam0)//Position - 0x1D6BF
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
			func_173(iVar7, iParam0, 47);
			return;
			break;
	}
	func_165(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_194(int iParam0)//Position - 0x1DBC9
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
			func_173(iVar7, iParam0, 63);
			return;
			break;
	}
	func_165(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_195(int iParam0)//Position - 0x1E236
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
			func_173(iVar7, iParam0, 1);
			return;
			break;
	}
	func_165(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_196(int iParam0)//Position - 0x1E2A9
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
			func_173(iVar7, iParam0, 5);
			return;
			break;
	}
	func_165(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_197(int iParam0)//Position - 0x1E378
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
			func_173(iVar7, iParam0, 53);
			return;
			break;
	}
	func_165(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_198(int iParam0)//Position - 0x1E8A7
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
			func_173(iVar7, iParam0, 12);
			return;
			break;
	}
	func_165(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_199(int iParam0)//Position - 0x1EA3D
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
			func_173(iVar7, iParam0, 77);
			return;
			break;
	}
	func_165(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_200(int iParam0)//Position - 0x1F23A
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
			func_173(iVar7, iParam0, 7);
			return;
			break;
	}
	func_165(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_201(int iParam0)//Position - 0x1F349
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
			func_173(iVar7, iParam0, 134);
			return;
			break;
	}
	func_165(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_202(int iParam0)//Position - 0x20275
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
			StringCopy(&Var2, "LEGS_P1_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 820;
			break;
		
		case 34:
			StringCopy(&Var2, "LEGS_P1_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 820;
			break;
		
		case 35:
			StringCopy(&Var2, "LEGS_P1_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 850;
			break;
		
		case 36:
			StringCopy(&Var2, "LEGS_P1_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 850;
			break;
		
		case 37:
			StringCopy(&Var2, "LEGS_P1_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 920;
			break;
		
		case 38:
			StringCopy(&Var2, "LEGS_P1_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 950;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "LEGS_P1_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P1_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 45;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P1_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 48;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P1_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 45;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P1_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 48;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P1_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 52;
			break;
		
		case 46:
			StringCopy(&Var2, "LEGS_P1_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 55;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P1_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 58;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P1_13_8", 16);
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 60;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P1_13_9", 16);
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 58;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P1_13_10", 16);
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 62;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P1_13_11", 16);
			iVar3 = 13;
			iVar4 = 11;
			iVar1 = 65;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P1_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P1_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P1_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P1_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P1_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P1_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P1_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P1_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P1_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P1_15_8", 16);
			iVar3 = 15;
			iVar4 = 8;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P1_15_9", 16);
			iVar3 = 15;
			iVar4 = 9;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P1_15_10", 16);
			iVar3 = 15;
			iVar4 = 10;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P1_15_11", 16);
			iVar3 = 15;
			iVar4 = 11;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P1_15_12", 16);
			iVar3 = 15;
			iVar4 = 12;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P1_15_13", 16);
			iVar3 = 15;
			iVar4 = 13;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P1_15_14", 16);
			iVar3 = 15;
			iVar4 = 14;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P1_15_15", 16);
			iVar3 = 15;
			iVar4 = 15;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P1_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 16;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P1_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P1_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 160;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P1_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 180;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P1_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 180;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P1_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P1_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P1_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "LEGS_P1_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 118;
			break;
		
		case 80:
			StringCopy(&Var2, "LEGS_P1_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 120;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P1_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 128;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P1_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 128;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P1_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 130;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P1_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 145;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P1_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 138;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P1_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 132;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P1_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 148;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P1_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 118;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P1_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 118;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P1_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 118;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P1_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 129;
			break;
		
		case 92:
			StringCopy(&Var2, "LEGS_P1_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 135;
			break;
		
		case 93:
			StringCopy(&Var2, "LEGS_P1_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 135;
			break;
		
		case 94:
			StringCopy(&Var2, "LEGS_P1_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 118;
			break;
		
		case 95:
			StringCopy(&Var2, "LEGS_P1_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 118;
			break;
		
		case 96:
			StringCopy(&Var2, "LEGS_P1_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 118;
			break;
		
		case 97:
			StringCopy(&Var2, "LEGS_P1_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar1 = 55;
			break;
		
		case 98:
			StringCopy(&Var2, "LEGS_P1_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 55;
			break;
		
		case 99:
			StringCopy(&Var2, "LEGS_P1_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 59;
			break;
		
		case 100:
			StringCopy(&Var2, "LEGS_P1_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 59;
			break;
		
		case 101:
			StringCopy(&Var2, "LEGS_P1_22_4", 16);
			iVar3 = 22;
			iVar4 = 4;
			iVar1 = 65;
			break;
		
		case 102:
			StringCopy(&Var2, "LEGS_P1_22_5", 16);
			iVar3 = 22;
			iVar4 = 5;
			iVar1 = 65;
			break;
		
		case 103:
			StringCopy(&Var2, "LEGS_P1_22_6", 16);
			iVar3 = 22;
			iVar4 = 6;
			iVar1 = 69;
			break;
		
		case 104:
			StringCopy(&Var2, "LEGS_P1_22_7", 16);
			iVar3 = 22;
			iVar4 = 7;
			iVar1 = 69;
			break;
		
		case 105:
			StringCopy(&Var2, "LEGS_P1_22_8", 16);
			iVar3 = 22;
			iVar4 = 8;
			iVar1 = 75;
			break;
		
		case 106:
			StringCopy(&Var2, "LEGS_P1_22_9", 16);
			iVar3 = 22;
			iVar4 = 9;
			iVar1 = 75;
			break;
		
		case 107:
			StringCopy(&Var2, "LEGS_P1_22_10", 16);
			iVar3 = 22;
			iVar4 = 10;
			iVar1 = 65;
			break;
		
		case 108:
			StringCopy(&Var2, "LEGS_P1_22_11", 16);
			iVar3 = 22;
			iVar4 = 11;
			iVar1 = 65;
			break;
		
		case 109:
			StringCopy(&Var2, "LEGS_P1_22_12", 16);
			iVar3 = 22;
			iVar4 = 12;
			iVar1 = 65;
			break;
		
		case 110:
			StringCopy(&Var2, "LEGS_P1_22_13", 16);
			iVar3 = 22;
			iVar4 = 13;
			iVar1 = 65;
			break;
		
		case 111:
			StringCopy(&Var2, "LEGS_P1_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar1 = 38;
			break;
		
		case 112:
			StringCopy(&Var2, "LEGS_P1_23_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar1 = 38;
			break;
		
		case 113:
			StringCopy(&Var2, "LEGS_P1_23_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar1 = 28;
			break;
		
		case 114:
			StringCopy(&Var2, "LEGS_P1_23_3", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar1 = 34;
			break;
		
		case 115:
			StringCopy(&Var2, "LEGS_P1_23_4", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar1 = 36;
			break;
		
		case 116:
			StringCopy(&Var2, "LEGS_P1_23_5", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar1 = 32;
			break;
		
		default:
			func_173(iVar7, iParam0, 117);
			return;
			break;
	}
	func_165(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_203(int iParam0)//Position - 0x20F31
{
	if (iParam0 < 107)
	{
		func_206(iParam0);
	}
	else if (iParam0 < 227)
	{
		func_205(iParam0);
	}
	else
	{
		func_204(iParam0);
	}
	if (Global_10A0A[0 /*14*/].f_2 == -1)
	{
		func_173(3, iParam0, 318);
	}
}

void func_204(int iParam0)//Position - 0x20F76
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
	Global_10A0A[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 227:
			StringCopy(&Var2, "TORSO_P1_18_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 228:
			StringCopy(&Var2, "TORSO_P1_18_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar6 = 3;
			break;
		
		case 229:
			StringCopy(&Var2, "TORSO_P1_18_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar6 = 3;
			break;
		
		case 230:
			StringCopy(&Var2, "TORSO_P1_18_3", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar6 = 3;
			break;
		
		case 231:
			StringCopy(&Var2, "TORSO_P1_18_4", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar6 = 3;
			break;
		
		case 232:
			StringCopy(&Var2, "TORSO_P1_18_5", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar6 = 3;
			break;
		
		case 233:
			StringCopy(&Var2, "TORSO_P1_18_6", 16);
			iVar3 = 23;
			iVar4 = 6;
			iVar6 = 3;
			break;
		
		case 234:
			StringCopy(&Var2, "TORSO_P1_18_7", 16);
			iVar3 = 23;
			iVar4 = 7;
			iVar6 = 3;
			break;
		
		case 235:
			StringCopy(&Var2, "TORSO_P1_18_8", 16);
			iVar3 = 23;
			iVar4 = 8;
			iVar6 = 3;
			break;
		
		case 236:
			StringCopy(&Var2, "TORSO_P1_18_9", 16);
			iVar3 = 23;
			iVar4 = 9;
			iVar6 = 3;
			break;
		
		case 237:
			StringCopy(&Var2, "TORSO_P1_18_10", 16);
			iVar3 = 23;
			iVar4 = 10;
			iVar6 = 3;
			break;
		
		case 238:
			StringCopy(&Var2, "TORSO_P1_18_11", 16);
			iVar3 = 23;
			iVar4 = 11;
			iVar6 = 3;
			break;
		
		case 239:
			StringCopy(&Var2, "TORSO_P1_18_12", 16);
			iVar3 = 23;
			iVar4 = 12;
			iVar6 = 3;
			break;
		
		case 240:
			StringCopy(&Var2, "TORSO_P1_18_13", 16);
			iVar3 = 23;
			iVar4 = 13;
			iVar6 = 3;
			break;
		
		case 241:
			StringCopy(&Var2, "TORSO_P1_18_14", 16);
			iVar3 = 23;
			iVar4 = 14;
			iVar6 = 3;
			break;
		
		case 242:
			StringCopy(&Var2, "TORSO_P1_18_15", 16);
			iVar3 = 23;
			iVar4 = 15;
			iVar6 = 3;
			break;
		
		case 243:
			StringCopy(&Var2, "TORSO_P1_24_0", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 244:
			StringCopy(&Var2, "TORSO_P1_24_1", 16);
			iVar3 = 24;
			iVar4 = 1;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 245:
			StringCopy(&Var2, "TORSO_P1_24_2", 16);
			iVar3 = 24;
			iVar4 = 2;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 246:
			StringCopy(&Var2, "TORSO_P1_24_3", 16);
			iVar3 = 24;
			iVar4 = 3;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 247:
			StringCopy(&Var2, "TORSO_P1_24_4", 16);
			iVar3 = 24;
			iVar4 = 4;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 248:
			StringCopy(&Var2, "TORSO_P1_24_5", 16);
			iVar3 = 24;
			iVar4 = 5;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 249:
			StringCopy(&Var2, "TORSO_P1_24_6", 16);
			iVar3 = 24;
			iVar4 = 6;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 250:
			StringCopy(&Var2, "TORSO_P1_24_7", 16);
			iVar3 = 24;
			iVar4 = 7;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 251:
			StringCopy(&Var2, "TORSO_P1_24_8", 16);
			iVar3 = 24;
			iVar4 = 8;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 252:
			StringCopy(&Var2, "TORSO_P1_24_9", 16);
			iVar3 = 24;
			iVar4 = 9;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 253:
			StringCopy(&Var2, "TORSO_P1_24_10", 16);
			iVar3 = 24;
			iVar4 = 10;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 254:
			StringCopy(&Var2, "TORSO_P1_24_11", 16);
			iVar3 = 24;
			iVar4 = 11;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 255:
			StringCopy(&Var2, "TORSO_P1_24_12", 16);
			iVar3 = 24;
			iVar4 = 12;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 256:
			StringCopy(&Var2, "TORSO_P1_24_13", 16);
			iVar3 = 24;
			iVar4 = 13;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 257:
			StringCopy(&Var2, "TORSO_P1_24_14", 16);
			iVar3 = 24;
			iVar4 = 14;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 258:
			StringCopy(&Var2, "TORSO_P1_24_15", 16);
			iVar3 = 24;
			iVar4 = 15;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 259:
			StringCopy(&Var2, "TORSO_P1_25_0", 16);
			iVar3 = 25;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 3;
			break;
		
		case 260:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 0;
			iVar6 = 1;
			break;
		
		case 261:
			StringCopy(&Var2, "TORSO_P1_27_0", 16);
			iVar3 = 27;
			iVar4 = 0;
			iVar1 = 150;
			break;
		
		case 262:
			StringCopy(&Var2, "TORSO_P1_27_1", 16);
			iVar3 = 27;
			iVar4 = 1;
			iVar1 = 160;
			break;
		
		case 263:
			StringCopy(&Var2, "TORSO_P1_27_2", 16);
			iVar3 = 27;
			iVar4 = 2;
			iVar1 = 150;
			break;
		
		case 264:
			StringCopy(&Var2, "TORSO_P1_27_3", 16);
			iVar3 = 27;
			iVar4 = 3;
			iVar1 = 150;
			break;
		
		case 265:
			StringCopy(&Var2, "TORSO_P1_27_4", 16);
			iVar3 = 27;
			iVar4 = 4;
			iVar1 = 160;
			break;
		
		case 266:
			StringCopy(&Var2, "TORSO_P1_27_5", 16);
			iVar3 = 27;
			iVar4 = 5;
			iVar1 = 160;
			break;
		
		case 267:
			StringCopy(&Var2, "TORSO_P1_28_0", 16);
			iVar3 = 28;
			iVar4 = 0;
			iVar1 = 88;
			break;
		
		case 268:
			StringCopy(&Var2, "TORSO_P1_28_1", 16);
			iVar3 = 28;
			iVar4 = 1;
			iVar1 = 60;
			break;
		
		case 269:
			StringCopy(&Var2, "TORSO_P1_28_2", 16);
			iVar3 = 28;
			iVar4 = 2;
			iVar1 = 70;
			break;
		
		case 270:
			StringCopy(&Var2, "TORSO_P1_28_3", 16);
			iVar3 = 28;
			iVar4 = 3;
			iVar1 = 80;
			break;
		
		case 271:
			StringCopy(&Var2, "TORSO_P1_28_4", 16);
			iVar3 = 28;
			iVar4 = 4;
			iVar1 = 90;
			break;
		
		case 272:
			StringCopy(&Var2, "TORSO_P1_28_5", 16);
			iVar3 = 28;
			iVar4 = 5;
			iVar1 = 80;
			break;
		
		case 273:
			StringCopy(&Var2, "TORSO_P1_28_6", 16);
			iVar3 = 28;
			iVar4 = 6;
			iVar1 = 70;
			break;
		
		case 274:
			StringCopy(&Var2, "TORSO_P1_28_7", 16);
			iVar3 = 28;
			iVar4 = 7;
			iVar1 = 95;
			break;
		
		case 275:
			StringCopy(&Var2, "TORSO_P1_28_8", 16);
			iVar3 = 28;
			iVar4 = 8;
			iVar1 = 105;
			break;
		
		case 276:
			StringCopy(&Var2, "TORSO_P1_28_9", 16);
			iVar3 = 28;
			iVar4 = 9;
			iVar1 = 95;
			break;
		
		case 277:
			StringCopy(&Var2, "TORSO_P1_28_10", 16);
			iVar3 = 28;
			iVar4 = 10;
			iVar1 = 110;
			break;
		
		case 278:
			StringCopy(&Var2, "TORSO_P1_28_11", 16);
			iVar3 = 28;
			iVar4 = 11;
			iVar1 = 98;
			break;
		
		case 279:
			StringCopy(&Var2, "TORSO_P1_28_12", 16);
			iVar3 = 28;
			iVar4 = 12;
			iVar1 = 88;
			break;
		
		case 280:
			StringCopy(&Var2, "TORSO_P1_28_13", 16);
			iVar3 = 28;
			iVar4 = 13;
			iVar1 = 98;
			break;
		
		case 281:
			StringCopy(&Var2, "TORSO_P1_28_14", 16);
			iVar3 = 28;
			iVar4 = 14;
			iVar1 = 110;
			break;
		
		case 282:
			StringCopy(&Var2, "TORSO_P1_28_15", 16);
			iVar3 = 28;
			iVar4 = 15;
			iVar1 = 98;
			break;
		
		case 283:
			StringCopy(&Var2, "TORSO_P1_29_0", 16);
			iVar3 = 29;
			iVar4 = 0;
			iVar1 = 250;
			break;
		
		case 284:
			StringCopy(&Var2, "TORSO_P1_29_1", 16);
			iVar3 = 29;
			iVar4 = 1;
			iVar1 = 270;
			break;
		
		case 285:
			StringCopy(&Var2, "TORSO_P1_29_2", 16);
			iVar3 = 29;
			iVar4 = 2;
			iVar1 = 280;
			break;
		
		case 286:
			StringCopy(&Var2, "TORSO_P1_29_3", 16);
			iVar3 = 29;
			iVar4 = 3;
			iVar1 = 275;
			break;
		
		case 287:
			StringCopy(&Var2, "TORSO_P1_29_4", 16);
			iVar3 = 29;
			iVar4 = 4;
			iVar1 = 290;
			break;
		
		case 288:
			StringCopy(&Var2, "TORSO_P1_29_5", 16);
			iVar3 = 29;
			iVar4 = 5;
			iVar1 = 35;
			break;
		
		case 289:
			StringCopy(&Var2, "TORSO_P1_29_6", 16);
			iVar3 = 29;
			iVar4 = 6;
			iVar1 = 35;
			break;
		
		case 290:
			StringCopy(&Var2, "TORSO_P1_29_7", 16);
			iVar3 = 29;
			iVar4 = 7;
			iVar1 = 35;
			break;
		
		case 291:
			StringCopy(&Var2, "TORSO_P1_29_8", 16);
			iVar3 = 29;
			iVar4 = 8;
			iVar1 = 295;
			break;
		
		case 292:
			StringCopy(&Var2, "TORSO_P1_29_9", 16);
			iVar3 = 29;
			iVar4 = 9;
			iVar1 = 35;
			break;
		
		case 293:
			StringCopy(&Var2, "TORSO_P1_29_10", 16);
			iVar3 = 29;
			iVar4 = 10;
			iVar1 = 35;
			break;
		
		case 294:
			StringCopy(&Var2, "TORSO_P1_29_11", 16);
			iVar3 = 29;
			iVar4 = 11;
			iVar1 = 35;
			break;
		
		case 295:
			StringCopy(&Var2, "TORSO_P1_29_12", 16);
			iVar3 = 29;
			iVar4 = 12;
			break;
		
		case 296:
			StringCopy(&Var2, "TORSO_P1_30_0", 16);
			iVar3 = 30;
			iVar4 = 0;
			iVar1 = 1750;
			break;
		
		case 297:
			StringCopy(&Var2, "TORSO_P1_30_1", 16);
			iVar3 = 30;
			iVar4 = 1;
			iVar1 = 1920;
			break;
		
		case 298:
			StringCopy(&Var2, "TORSO_P1_30_2", 16);
			iVar3 = 30;
			iVar4 = 2;
			iVar1 = 1890;
			break;
		
		case 299:
			StringCopy(&Var2, "TORSO_P1_30_3", 16);
			iVar3 = 30;
			iVar4 = 3;
			iVar1 = 1850;
			break;
		
		case 300:
			StringCopy(&Var2, "TORSO_P1_30_4", 16);
			iVar3 = 30;
			iVar4 = 4;
			iVar1 = 1750;
			break;
		
		case 301:
			StringCopy(&Var2, "TORSO_P1_30_5", 16);
			iVar3 = 30;
			iVar4 = 5;
			iVar1 = 1990;
			break;
		
		case 302:
			StringCopy(&Var2, "TORSO_P1_30_6", 16);
			iVar3 = 30;
			iVar4 = 6;
			iVar1 = 1820;
			break;
		
		case 303:
			StringCopy(&Var2, "TORSO_P1_30_7", 16);
			iVar3 = 30;
			iVar4 = 7;
			iVar1 = 1990;
			break;
		
		case 304:
			StringCopy(&Var2, "TORSO_P1_30_8", 16);
			iVar3 = 30;
			iVar4 = 8;
			iVar1 = 1920;
			break;
		
		case 305:
			StringCopy(&Var2, "TORSO_P1_30_9", 16);
			iVar3 = 30;
			iVar4 = 9;
			iVar1 = 1850;
			break;
		
		case 306:
			StringCopy(&Var2, "TORSO_P1_30_10", 16);
			iVar3 = 30;
			iVar4 = 10;
			iVar1 = 1990;
			break;
		
		case 307:
			StringCopy(&Var2, "TORSO_P1_30_11", 16);
			iVar3 = 30;
			iVar4 = 11;
			iVar1 = 1790;
			break;
		
		case 308:
			StringCopy(&Var2, "TORSO_P1_30_12", 16);
			iVar3 = 30;
			iVar4 = 12;
			iVar1 = 1790;
			break;
		
		case 309:
			StringCopy(&Var2, "TORSO_P1_31_0", 16);
			iVar3 = 31;
			iVar4 = 0;
			iVar1 = 69;
			break;
		
		case 310:
			StringCopy(&Var2, "TORSO_P1_31_1", 16);
			iVar3 = 31;
			iVar4 = 1;
			iVar1 = 75;
			break;
		
		case 311:
			StringCopy(&Var2, "TORSO_P1_31_2", 16);
			iVar3 = 31;
			iVar4 = 2;
			iVar1 = 75;
			break;
		
		case 312:
			StringCopy(&Var2, "TORSO_P1_31_3", 16);
			iVar3 = 31;
			iVar4 = 3;
			iVar1 = 79;
			break;
		
		case 313:
			StringCopy(&Var2, "TORSO_P1_31_4", 16);
			iVar3 = 31;
			iVar4 = 4;
			iVar1 = 79;
			break;
		
		case 314:
			StringCopy(&Var2, "TORSO_P1_31_5", 16);
			iVar3 = 31;
			iVar4 = 5;
			iVar1 = 89;
			break;
		
		case 315:
			StringCopy(&Var2, "TORSO_P1_31_6", 16);
			iVar3 = 31;
			iVar4 = 6;
			iVar1 = 85;
			break;
		
		case 316:
			StringCopy(&Var2, "TORSO_P1_31_7", 16);
			iVar3 = 31;
			iVar4 = 7;
			iVar1 = 85;
			break;
		
		case 317:
			StringCopy(&Var2, "TORSO_P1_31_8", 16);
			iVar3 = 31;
			iVar4 = 8;
			break;
		
		default:
			return;
			break;
	}
	func_165(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_205(int iParam0)//Position - 0x21A1B
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
	Global_10A0A[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 107:
			StringCopy(&Var2, "TORSO_P1_12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 195;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P1_12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 420;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P1_12_2", 16);
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 390;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P1_12_3", 16);
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 450;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P1_12_4", 16);
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 400;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P1_12_5", 16);
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 390;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P1_12_6", 16);
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 570;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P1_12_7", 16);
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 390;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P1_12_8", 16);
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 470;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P1_12_9", 16);
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 390;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P1_12_10", 16);
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 520;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P1_12_11", 16);
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 490;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P1_12_12", 16);
			iVar3 = 12;
			iVar4 = 12;
			iVar1 = 490;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P1_12_13", 16);
			iVar3 = 12;
			iVar4 = 13;
			iVar1 = 590;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P1_12_14", 16);
			iVar3 = 12;
			iVar4 = 14;
			iVar1 = 560;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P1_12_15", 16);
			iVar3 = 12;
			iVar4 = 15;
			iVar1 = 520;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P1_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P1_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P1_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P1_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 90;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P1_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 85;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P1_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 45;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P1_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 90;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P1_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 47;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P1_13_8", 16);
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 45;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P1_13_9", 16);
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 48;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P1_13_10", 16);
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 45;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P1_13_11", 16);
			iVar3 = 13;
			iVar4 = 11;
			iVar1 = 85;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P1_13_12", 16);
			iVar3 = 13;
			iVar4 = 12;
			iVar1 = 45;
			break;
		
		case 136:
			StringCopy(&Var2, "TORSO_P1_13_13", 16);
			iVar3 = 13;
			iVar4 = 13;
			iVar1 = 47;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P1_13_14", 16);
			iVar3 = 13;
			iVar4 = 14;
			iVar1 = 45;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P1_13_15", 16);
			iVar3 = 13;
			iVar4 = 15;
			iVar1 = 48;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P1_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 290;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P1_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 290;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P1_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 290;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P1_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 290;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P1_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 290;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P1_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 290;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P1_14_6", 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 65;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P1_14_7", 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 65;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P1_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 200;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P1_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 220;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P1_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 220;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P1_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 240;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P1_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P1_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 250;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P1_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 260;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P1_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 40;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P1_15_8", 16);
			iVar3 = 15;
			iVar4 = 8;
			iVar1 = 50;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P1_15_9", 16);
			iVar3 = 15;
			iVar4 = 9;
			iVar1 = 45;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P1_15_10", 16);
			iVar3 = 15;
			iVar4 = 10;
			iVar1 = 40;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P1_15_11", 16);
			iVar3 = 15;
			iVar4 = 11;
			iVar1 = 55;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P1_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P1_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 40;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P1_17_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar1 = 50;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P1_17_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P1_17_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 50;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P1_17_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 50;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P1_17_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 50;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P1_17_6", 16);
			iVar3 = 17;
			iVar4 = 6;
			iVar1 = 50;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P1_17_7", 16);
			iVar3 = 17;
			iVar4 = 7;
			iVar1 = 50;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P1_17_8", 16);
			iVar3 = 17;
			iVar4 = 8;
			iVar1 = 50;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P1_17_9", 16);
			iVar3 = 17;
			iVar4 = 9;
			iVar1 = 50;
			break;
		
		case 170:
			StringCopy(&Var2, "TORSO_P1_17_10", 16);
			iVar3 = 17;
			iVar4 = 10;
			iVar1 = 50;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P1_17_11", 16);
			iVar3 = 17;
			iVar4 = 11;
			iVar1 = 50;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P1_17_12", 16);
			iVar3 = 17;
			iVar4 = 12;
			iVar1 = 50;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P1_17_13", 16);
			iVar3 = 17;
			iVar4 = 13;
			iVar1 = 50;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P1_17_14", 16);
			iVar3 = 17;
			iVar4 = 14;
			iVar1 = 50;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P1_17_15", 16);
			iVar3 = 17;
			iVar4 = 15;
			iVar1 = 50;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P1_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P1_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar6 = 3;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P1_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar6 = 3;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P1_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar6 = 3;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P1_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar6 = 3;
			break;
		
		case 181:
			StringCopy(&Var2, "TORSO_P1_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar6 = 3;
			break;
		
		case 182:
			StringCopy(&Var2, "TORSO_P1_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar6 = 3;
			break;
		
		case 183:
			StringCopy(&Var2, "TORSO_P1_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar6 = 3;
			break;
		
		case 184:
			StringCopy(&Var2, "TORSO_P1_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar6 = 3;
			break;
		
		case 185:
			StringCopy(&Var2, "TORSO_P1_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar6 = 3;
			break;
		
		case 186:
			StringCopy(&Var2, "TORSO_P1_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar6 = 3;
			break;
		
		case 187:
			StringCopy(&Var2, "TORSO_P1_18_11", 16);
			iVar3 = 18;
			iVar4 = 11;
			iVar6 = 3;
			break;
		
		case 188:
			StringCopy(&Var2, "TORSO_P1_18_12", 16);
			iVar3 = 18;
			iVar4 = 12;
			iVar6 = 3;
			break;
		
		case 189:
			StringCopy(&Var2, "TORSO_P1_18_13", 16);
			iVar3 = 18;
			iVar4 = 13;
			iVar6 = 3;
			break;
		
		case 190:
			StringCopy(&Var2, "TORSO_P1_18_14", 16);
			iVar3 = 18;
			iVar4 = 14;
			iVar6 = 3;
			break;
		
		case 191:
			StringCopy(&Var2, "TORSO_P1_18_15", 16);
			iVar3 = 18;
			iVar4 = 15;
			iVar6 = 3;
			break;
		
		case 192:
			StringCopy(&Var2, "TORSO_P1_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 193:
			StringCopy(&Var2, "TORSO_P1_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "TORSO_P1_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 195:
			StringCopy(&Var2, "TORSO_P1_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 520;
			iVar6 = 3;
			break;
		
		case 196:
			StringCopy(&Var2, "TORSO_P1_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 197:
			StringCopy(&Var2, "TORSO_P1_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 198:
			StringCopy(&Var2, "TORSO_P1_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 199:
			StringCopy(&Var2, "TORSO_P1_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 200:
			StringCopy(&Var2, "TORSO_P1_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 201:
			StringCopy(&Var2, "TORSO_P1_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 202:
			StringCopy(&Var2, "TORSO_P1_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 203:
			StringCopy(&Var2, "TORSO_P1_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 204:
			StringCopy(&Var2, "TORSO_P1_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 520;
			iVar6 = 3;
			break;
		
		case 205:
			StringCopy(&Var2, "TORSO_P1_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 520;
			iVar6 = 3;
			break;
		
		case 206:
			StringCopy(&Var2, "TORSO_P1_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 520;
			iVar6 = 3;
			break;
		
		case 207:
			StringCopy(&Var2, "TORSO_P1_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 208:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 20;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 209:
			StringCopy(&Var2, "TORSO_P1_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 220;
			break;
		
		case 210:
			StringCopy(&Var2, "TORSO_P1_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 200;
			break;
		
		case 211:
			StringCopy(&Var2, "TORSO_P1_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 240;
			break;
		
		case 212:
			StringCopy(&Var2, "TORSO_P1_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 240;
			break;
		
		case 213:
			StringCopy(&Var2, "TORSO_P1_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 260;
			break;
		
		case 214:
			StringCopy(&Var2, "TORSO_P1_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 275;
			break;
		
		case 215:
			StringCopy(&Var2, "TORSO_P1_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 275;
			break;
		
		case 216:
			StringCopy(&Var2, "TORSO_P1_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 280;
			break;
		
		case 217:
			StringCopy(&Var2, "TORSO_P1_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 280;
			break;
		
		case 218:
			StringCopy(&Var2, "TORSO_P1_21_9", 16);
			iVar3 = 21;
			iVar4 = 9;
			iVar1 = 280;
			break;
		
		case 219:
			StringCopy(&Var2, "TORSO_P1_21_10", 16);
			iVar3 = 21;
			iVar4 = 10;
			iVar1 = 280;
			break;
		
		case 220:
			StringCopy(&Var2, "TORSO_P1_21_11", 16);
			iVar3 = 21;
			iVar4 = 11;
			iVar1 = 280;
			break;
		
		case 221:
			StringCopy(&Var2, "TORSO_P1_21_12", 16);
			iVar3 = 21;
			iVar4 = 12;
			iVar1 = 280;
			break;
		
		case 222:
			StringCopy(&Var2, "TORSO_P1_21_13", 16);
			iVar3 = 21;
			iVar4 = 13;
			iVar1 = 280;
			break;
		
		case 223:
			StringCopy(&Var2, "TORSO_P1_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar1 = 3100;
			iVar6 = 3;
			break;
		
		case 224:
			StringCopy(&Var2, "TORSO_P1_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 2800;
			iVar6 = 3;
			break;
		
		case 225:
			StringCopy(&Var2, "TORSO_P1_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 2500;
			iVar6 = 3;
			break;
		
		case 226:
			StringCopy(&Var2, "TORSO_P1_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 3000;
			iVar6 = 3;
			break;
		
		default:
			return;
			break;
	}
	func_165(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_206(int iParam0)//Position - 0x2280A
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
	Global_10A0A[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P1_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P1_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P1_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 180;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P1_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 22;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P1_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 20;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P1_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 18;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P1_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 19;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P1_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 22;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P1_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 20;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P1_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 19;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P1_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 19;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P1_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 18;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P1_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 20;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P1_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 22;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P1_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 19;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P1_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 22;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 2;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 3;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 4;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 5;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P1_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 3;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P1_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 20;
			iVar6 = 2;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P1_4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 22;
			iVar6 = 2;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P1_4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 20;
			iVar6 = 2;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P1_4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 25;
			iVar6 = 2;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P1_4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 23;
			iVar6 = 2;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P1_4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 25;
			iVar6 = 2;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P1_4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 28;
			iVar6 = 2;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P1_4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 26;
			iVar6 = 2;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P1_4_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 24;
			iVar6 = 2;
			break;
		
		case 33:
			StringCopy(&Var2, "TORSO_P1_4_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 27;
			iVar6 = 2;
			break;
		
		case 34:
			StringCopy(&Var2, "TORSO_P1_4_10", 16);
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 29;
			iVar6 = 2;
			break;
		
		case 35:
			StringCopy(&Var2, "TORSO_P1_4_11", 16);
			iVar3 = 4;
			iVar4 = 11;
			iVar1 = 28;
			iVar6 = 2;
			break;
		
		case 36:
			StringCopy(&Var2, "TORSO_P1_4_12", 16);
			iVar3 = 4;
			iVar4 = 12;
			iVar1 = 25;
			iVar6 = 2;
			break;
		
		case 37:
			StringCopy(&Var2, "TORSO_P1_4_13", 16);
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 22;
			iVar6 = 2;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P1_4_14", 16);
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 27;
			iVar6 = 2;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P1_4_15", 16);
			iVar3 = 4;
			iVar4 = 15;
			iVar1 = 29;
			iVar6 = 2;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P1_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P1_6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 1270;
			iVar6 = 3;
			break;
		
		case 43:
			StringCopy(&Var2, "TORSO_P1_6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 1270;
			iVar6 = 3;
			break;
		
		case 44:
			StringCopy(&Var2, "TORSO_P1_6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 1270;
			iVar6 = 3;
			break;
		
		case 45:
			StringCopy(&Var2, "TORSO_P1_6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 1090;
			iVar6 = 3;
			break;
		
		case 46:
			StringCopy(&Var2, "TORSO_P1_6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 1090;
			iVar6 = 3;
			break;
		
		case 47:
			StringCopy(&Var2, "TORSO_P1_6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 1120;
			iVar6 = 3;
			break;
		
		case 48:
			StringCopy(&Var2, "TORSO_P1_6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 1120;
			iVar6 = 3;
			break;
		
		case 49:
			StringCopy(&Var2, "TORSO_P1_6_8", 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 1290;
			iVar6 = 3;
			break;
		
		case 50:
			StringCopy(&Var2, "TORSO_P1_6_9", 16);
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 1290;
			iVar6 = 3;
			break;
		
		case 51:
			StringCopy(&Var2, "TORSO_P1_6_10", 16);
			iVar3 = 6;
			iVar4 = 10;
			iVar1 = 1320;
			iVar6 = 3;
			break;
		
		case 52:
			StringCopy(&Var2, "TORSO_P1_6_11", 16);
			iVar3 = 6;
			iVar4 = 11;
			iVar1 = 1320;
			iVar6 = 3;
			break;
		
		case 53:
			StringCopy(&Var2, "TORSO_P1_6_12", 16);
			iVar3 = 6;
			iVar4 = 12;
			iVar1 = 1590;
			iVar6 = 3;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P1_6_13", 16);
			iVar3 = 6;
			iVar4 = 13;
			iVar1 = 1590;
			iVar6 = 3;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P1_6_14", 16);
			iVar3 = 6;
			iVar4 = 14;
			iVar1 = 1590;
			iVar6 = 3;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P1_6_15", 16);
			iVar3 = 6;
			iVar4 = 15;
			iVar1 = 1320;
			iVar6 = 3;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P1_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 98;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P1_7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 98;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P1_7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 110;
			break;
		
		case 60:
			StringCopy(&Var2, "TORSO_P1_7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 61:
			StringCopy(&Var2, "TORSO_P1_7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 118;
			break;
		
		case 62:
			StringCopy(&Var2, "TORSO_P1_7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 120;
			break;
		
		case 63:
			StringCopy(&Var2, "TORSO_P1_7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 120;
			break;
		
		case 64:
			StringCopy(&Var2, "TORSO_P1_7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 129;
			break;
		
		case 65:
			StringCopy(&Var2, "TORSO_P1_7_8", 16);
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 125;
			break;
		
		case 66:
			StringCopy(&Var2, "TORSO_P1_7_9", 16);
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 125;
			break;
		
		case 67:
			StringCopy(&Var2, "TORSO_P1_7_10", 16);
			iVar3 = 7;
			iVar4 = 10;
			iVar1 = 129;
			break;
		
		case 68:
			StringCopy(&Var2, "TORSO_P1_7_11", 16);
			iVar3 = 7;
			iVar4 = 11;
			iVar1 = 129;
			break;
		
		case 69:
			StringCopy(&Var2, "TORSO_P1_7_12", 16);
			iVar3 = 7;
			iVar4 = 12;
			iVar1 = 135;
			break;
		
		case 70:
			StringCopy(&Var2, "TORSO_P1_7_13", 16);
			iVar3 = 7;
			iVar4 = 13;
			iVar1 = 139;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P1_7_14", 16);
			iVar3 = 7;
			iVar4 = 14;
			iVar1 = 145;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P1_7_15", 16);
			iVar3 = 7;
			iVar4 = 15;
			iVar1 = 145;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P1_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P1_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P1_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			break;
		
		case 76:
			StringCopy(&Var2, "TORSO_P1_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P1_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 30;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P1_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 38;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "TORSO_P1_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 32;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P1_8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 30;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P1_8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 33;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P1_8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 35;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P1_8_10", 16);
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 35;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P1_8_11", 16);
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 38;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P1_8_12", 16);
			iVar3 = 8;
			iVar4 = 12;
			iVar1 = 33;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P1_8_13", 16);
			iVar3 = 8;
			iVar4 = 13;
			iVar1 = 35;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P1_8_14", 16);
			iVar3 = 8;
			iVar4 = 14;
			iVar1 = 38;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P1_8_15", 16);
			iVar3 = 8;
			iVar4 = 15;
			iVar1 = 32;
			break;
		
		case 89:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 91:
			StringCopy(&Var2, "TORSO_P1_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P1_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 59;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P1_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P1_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 25;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P1_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 29;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P1_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 27;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P1_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 25;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P1_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 27;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P1_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 28;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P1_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 30;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P1_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 29;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P1_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 27;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P1_11_12", 16);
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 29;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P1_11_13", 16);
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 32;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P1_11_14", 16);
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 30;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P1_11_15", 16);
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 28;
			break;
		
		default:
			return;
			break;
	}
	func_165(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_207(int iParam0)//Position - 0x23453
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
	Global_10A0A[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P1_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P1_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P1_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P1_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar6 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P1_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar6 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "HAIR_P1_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar6 = 3;
			break;
		
		case 6:
			StringCopy(&Var2, "HAIR_P1_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar6 = 3;
			break;
		
		case 7:
			StringCopy(&Var2, "HAIR_P1_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar6 = 3;
			break;
		
		case 8:
			StringCopy(&Var2, "HAIR_P1_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar6 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "HAIR_P1_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar6 = 3;
			break;
		
		case 10:
			StringCopy(&Var2, "HAIR_P1_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar6 = 3;
			break;
		
		case 11:
			StringCopy(&Var2, "HAIR_P1_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar6 = 3;
			break;
		
		case 12:
			StringCopy(&Var2, "HAIR_P1_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			iVar6 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "HAIR_P1_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "HAIR_P1_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			iVar6 = 3;
			break;
		
		case 15:
			StringCopy(&Var2, "HAIR_P1_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			iVar6 = 3;
			break;
		
		case 16:
			StringCopy(&Var2, "HAIR_P1_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 17:
			StringCopy(&Var2, "HAIR_P1_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 18:
			StringCopy(&Var2, "HAIR_P1_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 19:
			StringCopy(&Var2, "HAIR_P1_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_173(iVar7, iParam0, 21);
			return;
			break;
	}
	func_165(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_208(int iParam0)//Position - 0x236CB
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
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 9;
			break;
		
		default:
			func_173(iVar7, iParam0, 10);
			return;
			break;
	}
	func_165(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_209(int iParam0, int iParam1)//Position - 0x23810
{
	switch (iParam0)
	{
		case 0:
			func_226(iParam1);
			break;
		
		case 2:
			func_225(iParam1);
			break;
		
		case 3:
			func_222(iParam1);
			break;
		
		case 4:
			func_221(iParam1);
			break;
		
		case 6:
			func_220(iParam1);
			break;
		
		case 5:
			func_219(iParam1);
			break;
		
		case 8:
			func_218(iParam1);
			break;
		
		case 9:
			func_217(iParam1);
			break;
		
		case 10:
			func_216(iParam1);
			break;
		
		case 1:
			func_215(iParam1);
			break;
		
		case 7:
			func_214(iParam1);
			break;
		
		case 11:
			func_213(iParam1);
			break;
		
		case 12:
			func_212(iParam1);
			break;
		
		case 13:
			func_211(iParam1);
			break;
		
		case 14:
			func_210(iParam1);
			break;
	}
}

void func_210(int iParam0)//Position - 0x23900
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
	Global_10A0A[0 /*14*/].f_5 = 0;
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
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "PROPS_P0_H1", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "PROPS_P0_H2", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 320;
			iVar5 = 11;
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
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "PROPS_P0_H12", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 450;
			iVar5 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 25;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 27;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 28;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "PROPS_P0_E0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 45;
			iVar5 = 10;
			break;
		
		case 59:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 10;
			break;
		
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 10;
			break;
		
		case 61:
			StringCopy(&Var2, "PROPS_P0_E3", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 62:
			StringCopy(&Var2, "PROPS_P0_E4", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 63:
			StringCopy(&Var2, "PROPS_P0_E4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 56;
			iVar5 = 10;
			break;
		
		case 64:
			StringCopy(&Var2, "PROPS_P0_E4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 65:
			StringCopy(&Var2, "PROPS_P0_E4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 66:
			StringCopy(&Var2, "PROPS_P0_E4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 62;
			iVar5 = 10;
			break;
		
		case 67:
			StringCopy(&Var2, "PROPS_P0_E4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 68:
			StringCopy(&Var2, "PROPS_P0_E4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 69:
			StringCopy(&Var2, "PROPS_P0_E4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 70:
			StringCopy(&Var2, "PROPS_P0_E5", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P0_E5_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P0_E5_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 72;
			iVar5 = 10;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P0_E5_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 70;
			iVar5 = 10;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P0_E5_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 74;
			iVar5 = 10;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P0_E5_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 78;
			iVar5 = 10;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P0_E5_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 82;
			iVar5 = 10;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P0_E5_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 85;
			iVar5 = 10;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P0_E5_8", 16);
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 85;
			iVar5 = 10;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "PROPS_P0_E5_9", 16);
			iVar3 = 5;
			iVar4 = 9;
			iVar5 = 10;
			break;
		
		case 80:
			StringCopy(&Var2, "PROPS_P0_E6", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 81:
			StringCopy(&Var2, "PROPS_P0_E6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 82:
			StringCopy(&Var2, "PROPS_P0_E6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P0_E6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P0_E6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P0_E6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P0_E6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 87:
			StringCopy(&Var2, "PROPS_P0_E6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 88:
			StringCopy(&Var2, "PROPS_P0_E6_8", 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P0_E6_9", 16);
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P0_E7", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P0_E8", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 170;
			iVar5 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P0_E8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P0_E8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 180;
			iVar5 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P0_E8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P0_E8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 189;
			iVar5 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P0_E8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 195;
			iVar5 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P0_E8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 235;
			iVar5 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P0_E8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 245;
			iVar5 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P0_E8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 250;
			iVar5 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P0_E8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 275;
			iVar5 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P0_E8_10", 16);
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 280;
			iVar5 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P0_E8_11", 16);
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 295;
			iVar5 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P0_E9", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 179;
			iVar5 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P0_E9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 159;
			iVar5 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P0_E9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P0_E9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 155;
			iVar5 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P0_E9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P0_E9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P0_E9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 189;
			iVar5 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "PROPS_P0_E9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 225;
			iVar5 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 100;
			iVar5 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 2;
			break;
		
		default:
			func_173(iVar7, iParam0, 113);
			return;
			break;
	}
	func_165(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_211(int iParam0)//Position - 0x2468B
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
	Global_10A0A[0 /*14*/].f_5 = 0;
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
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_173(iVar7, iParam0, 10);
			return;
			break;
	}
	func_165(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_212(int iParam0)//Position - 0x24804
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
	Global_10A0A[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "OUTFIT_P0_1", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "OUTFIT_P0_4", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P0_7", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P0_8", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P0_9", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P0_11", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P0_12", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P0_14", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P0_17", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P0_18", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P0_19", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P0_20", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P0_22", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P0_23", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P0_24", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P0_26", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P0_28", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P0_29", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P0_30", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P0_31", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P0_32", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P0_33", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P0_34", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P0_35", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P0_11", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P0_36", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P0_37", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 840;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P0_38", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P0_39", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P0_40", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P0_41", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P0_42", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P0_43", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P0_44", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 3900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P0_45", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4000;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P0_46", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P0_47", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4600;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P0_48", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5500;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P0_49", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4400;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P0_50", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4400;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P0_51", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P0_52", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5500;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P0_53", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 47:
			StringCopy(&Var2, "OUTFIT_P0_54", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 48:
			StringCopy(&Var2, "OUTFIT_P0_55", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "OUTFIT_P0_17", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_173(iVar7, iParam0, 53);
			return;
			break;
	}
	func_165(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_213(int iParam0)//Position - 0x24D7A
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
	Global_10A0A[0 /*14*/].f_5 = 0;
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
			StringCopy(&Var2, "JBIB_P0_02_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "JBIB_P0_02_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			break;
		
		case 4:
			StringCopy(&Var2, "JBIB_P0_02_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			break;
		
		case 5:
			StringCopy(&Var2, "JBIB_P0_02_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			break;
		
		case 6:
			StringCopy(&Var2, "JBIB_P0_02_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			break;
		
		case 7:
			StringCopy(&Var2, "JBIB_P0_02_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			break;
		
		case 8:
			StringCopy(&Var2, "JBIB_P0_03_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 390;
			break;
		
		case 9:
			StringCopy(&Var2, "JBIB_P0_03_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 390;
			break;
		
		case 10:
			StringCopy(&Var2, "JBIB_P0_03_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 420;
			break;
		
		case 11:
			StringCopy(&Var2, "JBIB_P0_03_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 420;
			break;
		
		case 12:
			StringCopy(&Var2, "JBIB_P0_03_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 490;
			break;
		
		case 13:
			StringCopy(&Var2, "JBIB_P0_03_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 490;
			break;
		
		case 14:
			StringCopy(&Var2, "JBIB_P0_03_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 540;
			break;
		
		case 15:
			StringCopy(&Var2, "JBIB_P0_03_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 540;
			break;
		
		case 16:
			StringCopy(&Var2, "JBIB_P0_03_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 550;
			break;
		
		case 17:
			StringCopy(&Var2, "JBIB_P0_03_9", 16);
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 540;
			break;
		
		case 18:
			StringCopy(&Var2, "JBIB_P0_04_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 850;
			break;
		
		case 19:
			StringCopy(&Var2, "JBIB_P0_04_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 850;
			break;
		
		case 20:
			StringCopy(&Var2, "JBIB_P0_04_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 890;
			break;
		
		case 21:
			StringCopy(&Var2, "JBIB_P0_04_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 890;
			break;
		
		case 22:
			StringCopy(&Var2, "JBIB_P0_04_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 920;
			break;
		
		case 23:
			StringCopy(&Var2, "JBIB_P0_04_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 920;
			break;
		
		case 24:
			StringCopy(&Var2, "JBIB_P0_04_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 950;
			break;
		
		case 25:
			StringCopy(&Var2, "JBIB_P0_04_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 980;
			break;
		
		case 26:
			StringCopy(&Var2, "JBIB_P0_04_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 1050;
			break;
		
		case 27:
			StringCopy(&Var2, "JBIB_P0_04_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 1100;
			break;
		
		case 28:
			StringCopy(&Var2, "JBIB_P0_05_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 1890;
			break;
		
		case 29:
			StringCopy(&Var2, "JBIB_P0_05_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 1820;
			break;
		
		case 30:
			StringCopy(&Var2, "JBIB_P0_05_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 1820;
			break;
		
		case 31:
			StringCopy(&Var2, "JBIB_P0_05_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 1850;
			break;
		
		case 32:
			StringCopy(&Var2, "JBIB_P0_05_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 1850;
			break;
		
		case 33:
			StringCopy(&Var2, "JBIB_P0_05_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 1900;
			break;
		
		case 34:
			StringCopy(&Var2, "JBIB_P0_05_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 1920;
			break;
		
		case 35:
			StringCopy(&Var2, "JBIB_P0_05_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 1980;
			break;
		
		case 36:
			StringCopy(&Var2, "JBIB_P0_05_8", 16);
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 2100;
			break;
		
		case 37:
			StringCopy(&Var2, "JBIB_P0_05_9", 16);
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 2120;
			break;
		
		case 38:
			StringCopy(&Var2, "JBIB_P0_05_10", 16);
			iVar3 = 5;
			iVar4 = 10;
			iVar1 = 2000;
			break;
		
		case 39:
			StringCopy(&Var2, "JBIB_P0_05_11", 16);
			iVar3 = 5;
			iVar4 = 11;
			iVar1 = 2200;
			break;
		
		case 40:
			StringCopy(&Var2, "JBIB_P0_05_12", 16);
			iVar3 = 5;
			iVar4 = 12;
			iVar1 = 2280;
			break;
		
		case 41:
			StringCopy(&Var2, "JBIB_P0_05_13", 16);
			iVar3 = 5;
			iVar4 = 13;
			iVar1 = 2300;
			break;
		
		case 42:
			StringCopy(&Var2, "JBIB_P0_05_14", 16);
			iVar3 = 5;
			iVar4 = 14;
			iVar1 = 2350;
			break;
		
		case 43:
			StringCopy(&Var2, "JBIB_P0_05_15", 16);
			iVar3 = 5;
			iVar4 = 15;
			iVar1 = 2280;
			break;
		
		case 44:
			StringCopy(&Var2, "JBIB_P0_06_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		default:
			func_173(iVar7, iParam0, 45);
			return;
			break;
	}
	func_165(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_214(int iParam0)//Position - 0x252A3
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
	Global_10A0A[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_173(iVar7, iParam0, 1);
			return;
			break;
	}
	func_165(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_215(int iParam0)//Position - 0x25316
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
	Global_10A0A[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P0_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P0_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P0_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P0_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		default:
			func_173(iVar7, iParam0, 5);
			return;
			break;
	}
	func_165(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_216(int iParam0)//Position - 0x253E5
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
	Global_10A0A[0 /*14*/].f_5 = 0;
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
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 1;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 2;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 3;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 4;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 5;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 6;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 7;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 1;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 2;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 3;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 4;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 5;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 1;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 2;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 3;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 4;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 5;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 6;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 1;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 2;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 3;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 4;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 5;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 6;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 7;
			break;
		
		case 36:
			StringCopy(&Var2, "DECL_P0_10_8", 16);
			iVar3 = 10;
			iVar4 = 8;
			break;
		
		case 37:
			StringCopy(&Var2, "DECL_P0_10_9", 16);
			iVar3 = 10;
			iVar4 = 9;
			break;
		
		case 38:
			StringCopy(&Var2, "DECL_P0_10_10", 16);
			iVar3 = 10;
			iVar4 = 10;
			break;
		
		case 39:
			StringCopy(&Var2, "DECL_P0_10_11", 16);
			iVar3 = 10;
			iVar4 = 11;
			break;
		
		case 40:
			StringCopy(&Var2, "DECL_P0_10_12", 16);
			iVar3 = 10;
			iVar4 = 12;
			break;
		
		case 41:
			StringCopy(&Var2, "DECL_P0_10_13", 16);
			iVar3 = 10;
			iVar4 = 13;
			break;
		
		case 42:
			StringCopy(&Var2, "DECL_P0_10_14", 16);
			iVar3 = 10;
			iVar4 = 14;
			break;
		
		case 43:
			StringCopy(&Var2, "DECL_P0_10_15", 16);
			iVar3 = 10;
			iVar4 = 15;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 1;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 2;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 3;
			break;
		
		default:
			func_173(iVar7, iParam0, 48);
			return;
			break;
	}
	func_165(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_217(int iParam0)//Position - 0x258BC
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
	Global_10A0A[0 /*14*/].f_5 = 0;
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
			iVar3 = 2;
			iVar4 = 0;
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
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 125;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 150;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 175;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 85;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 150;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 175;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_173(iVar7, iParam0, 20);
			return;
			break;
	}
	func_165(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_218(int iParam0)//Position - 0x25B24
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
	Global_10A0A[0 /*14*/].f_5 = 0;
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
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC_P0_10", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "SPEC_P0_16", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 18;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 19;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 20;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 21;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 22;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_173(iVar7, iParam0, 24);
			return;
			break;
	}
	func_165(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_219(int iParam0)//Position - 0x25DF9
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
	Global_10A0A[0 /*14*/].f_5 = 0;
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
			iVar3 = 3;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_173(iVar7, iParam0, 14);
			return;
			break;
	}
	func_165(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_220(int iParam0)//Position - 0x25FC1
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
	Global_10A0A[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P0_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 665;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P0_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 620;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P0_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 540;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P0_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 580;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P0_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 650;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P0_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P0_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P0_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 64;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P0_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 56;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P0_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 69;
			break;
		
		case 24:
			StringCopy(&Var2, "FEET_P0_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 59;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P0_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 62;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P0_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 74;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P0_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 68;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P0_15_8", 16);
			iVar3 = 15;
			iVar4 = 8;
			iVar1 = 72;
			break;
		
		case 29:
			StringCopy(&Var2, "FEET_P0_15_9", 16);
			iVar3 = 15;
			iVar4 = 9;
			iVar1 = 70;
			break;
		
		case 30:
			StringCopy(&Var2, "FEET_P0_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 48;
			break;
		
		case 31:
			StringCopy(&Var2, "FEET_P0_16_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 48;
			break;
		
		case 32:
			StringCopy(&Var2, "FEET_P0_16_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 55;
			break;
		
		case 33:
			StringCopy(&Var2, "FEET_P0_16_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 75;
			break;
		
		case 34:
			StringCopy(&Var2, "FEET_P0_16_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 65;
			break;
		
		case 35:
			StringCopy(&Var2, "FEET_P0_16_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 68;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P0_16_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 58;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P0_16_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 68;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P0_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 790;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P0_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 750;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P0_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 860;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P0_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 750;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P0_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 790;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P0_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P0_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 820;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P0_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 800;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P0_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar1 = 850;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P0_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar1 = 870;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P0_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar1 = 720;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P0_18_11", 16);
			iVar3 = 18;
			iVar4 = 11;
			iVar1 = 740;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P0_18_12", 16);
			iVar3 = 18;
			iVar4 = 12;
			iVar1 = 800;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P0_18_13", 16);
			iVar3 = 18;
			iVar4 = 13;
			iVar1 = 750;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P0_18_14", 16);
			iVar3 = 18;
			iVar4 = 14;
			iVar1 = 770;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P0_18_15", 16);
			iVar3 = 18;
			iVar4 = 15;
			iVar1 = 860;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P0_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 850;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P0_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 800;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P0_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 780;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P0_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 890;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P0_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 820;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P0_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P0_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 870;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P0_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 930;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P0_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 880;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P0_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 900;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P0_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 920;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P0_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 970;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P0_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 990;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P0_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 960;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P0_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 980;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P0_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 950;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P0_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 110;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P0_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 73:
			StringCopy(&Var2, "FEET_P0_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 120;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P0_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P0_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 125;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P0_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 128;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P0_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 135;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P0_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 130;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "FEET_P0_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 145;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P0_20_9", 16);
			iVar3 = 20;
			iVar4 = 9;
			iVar1 = 110;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P0_20_10", 16);
			iVar3 = 20;
			iVar4 = 10;
			iVar1 = 120;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P0_20_11", 16);
			iVar3 = 20;
			iVar4 = 11;
			iVar1 = 150;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P0_20_12", 16);
			iVar3 = 20;
			iVar4 = 12;
			iVar1 = 125;
			break;
		
		case 84:
			StringCopy(&Var2, "FEET_P0_20_13", 16);
			iVar3 = 20;
			iVar4 = 13;
			iVar1 = 120;
			break;
		
		case 85:
			StringCopy(&Var2, "FEET_P0_20_14", 16);
			iVar3 = 20;
			iVar4 = 14;
			iVar1 = 130;
			break;
		
		case 86:
			StringCopy(&Var2, "FEET_P0_20_15", 16);
			iVar3 = 20;
			iVar4 = 15;
			iVar1 = 110;
			break;
		
		case 87:
			StringCopy(&Var2, "FEET_P0_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 720;
			break;
		
		case 88:
			StringCopy(&Var2, "FEET_P0_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 680;
			break;
		
		case 89:
			StringCopy(&Var2, "FEET_P0_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 90:
			StringCopy(&Var2, "FEET_P0_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 670;
			break;
		
		case 91:
			StringCopy(&Var2, "FEET_P0_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 700;
			break;
		
		case 92:
			StringCopy(&Var2, "FEET_P0_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 680;
			break;
		
		case 93:
			StringCopy(&Var2, "FEET_P0_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 720;
			break;
		
		case 94:
			StringCopy(&Var2, "FEET_P0_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 740;
			break;
		
		case 95:
			StringCopy(&Var2, "FEET_P0_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 760;
			break;
		
		case 96:
			StringCopy(&Var2, "FEET_P0_21_9", 16);
			iVar3 = 21;
			iVar4 = 9;
			iVar1 = 780;
			break;
		
		case 97:
			StringCopy(&Var2, "FEET_P0_21_10", 16);
			iVar3 = 21;
			iVar4 = 10;
			iVar1 = 750;
			break;
		
		case 98:
			StringCopy(&Var2, "FEET_P0_21_11", 16);
			iVar3 = 21;
			iVar4 = 11;
			iVar1 = 700;
			break;
		
		default:
			func_173(iVar7, iParam0, 99);
			return;
			break;
	}
	func_165(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_221(int iParam0)//Position - 0x26B14
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
	Global_10A0A[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P0_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P0_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "LEGS_P0_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "LEGS_P0_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "LEGS_P0_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "LEGS_P0_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "LEGS_P0_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "LEGS_P0_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			break;
		
		case 10:
			StringCopy(&Var2, "LEGS_P0_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			break;
		
		case 11:
			StringCopy(&Var2, "LEGS_P0_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			break;
		
		case 12:
			StringCopy(&Var2, "LEGS_P0_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			break;
		
		case 13:
			StringCopy(&Var2, "LEGS_P0_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "LEGS_P0_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			break;
		
		case 15:
			StringCopy(&Var2, "LEGS_P0_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
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
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "LEGS_P0_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 115;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P0_7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P0_7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 128;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P0_7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 118;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P0_7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 125;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P0_7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 128;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P0_7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 128;
			break;
		
		case 30:
			StringCopy(&Var2, "LEGS_P0_7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 125;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P0_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 68;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P0_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 68;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P0_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 68;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P0_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 68;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P0_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 68;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P0_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P0_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 550;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P0_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P0_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 875;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P0_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 820;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P0_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 720;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P0_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 750;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P0_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 850;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P0_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P0_16_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 48;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P0_16_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 48;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P0_16_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 38;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P0_16_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 38;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P0_16_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 42;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P0_16_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 58;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P0_16_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 46;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P0_16_8", 16);
			iVar3 = 16;
			iVar4 = 8;
			iVar1 = 46;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P0_16_9", 16);
			iVar3 = 16;
			iVar4 = 9;
			iVar1 = 46;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P0_16_10", 16);
			iVar3 = 16;
			iVar4 = 10;
			iVar1 = 68;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P0_16_11", 16);
			iVar3 = 16;
			iVar4 = 11;
			iVar1 = 58;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P0_16_12", 16);
			iVar3 = 16;
			iVar4 = 12;
			iVar1 = 50;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P0_16_13", 16);
			iVar3 = 16;
			iVar4 = 13;
			iVar1 = 68;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P0_16_14", 16);
			iVar3 = 16;
			iVar4 = 14;
			iVar1 = 68;
			break;
		
		case 70:
			StringCopy(&Var2, "LEGS_P0_16_15", 16);
			iVar3 = 16;
			iVar4 = 15;
			iVar1 = 42;
			break;
		
		case 71:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P0_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P0_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 250;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P0_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 250;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P0_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 290;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P0_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 270;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P0_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 270;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P0_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 15;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "LEGS_P0_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 12;
			break;
		
		case 80:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 19;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P0_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P0_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 118;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P0_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 110;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P0_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 88;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P0_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 95;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P0_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 95;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P0_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 98;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P0_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar1 = 140;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P0_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P0_23_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar1 = 150;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P0_23_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar1 = 130;
			break;
		
		case 92:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 24;
			iVar4 = 0;
			bVar0 = true;
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
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "LEGS_P0_27_0", 16);
			iVar3 = 27;
			iVar4 = 0;
			break;
		
		case 96:
			StringCopy(&Var2, "LEGS_P0_28_0", 16);
			iVar3 = 28;
			iVar4 = 0;
			iVar1 = 45;
			break;
		
		case 97:
			StringCopy(&Var2, "LEGS_P0_28_1", 16);
			iVar3 = 28;
			iVar4 = 1;
			iVar1 = 48;
			break;
		
		case 98:
			StringCopy(&Var2, "LEGS_P0_28_2", 16);
			iVar3 = 28;
			iVar4 = 2;
			iVar1 = 48;
			break;
		
		case 99:
			StringCopy(&Var2, "LEGS_P0_28_3", 16);
			iVar3 = 28;
			iVar4 = 3;
			iVar1 = 52;
			break;
		
		case 100:
			StringCopy(&Var2, "LEGS_P0_28_4", 16);
			iVar3 = 28;
			iVar4 = 4;
			iVar1 = 52;
			break;
		
		case 101:
			StringCopy(&Var2, "LEGS_P0_28_5", 16);
			iVar3 = 28;
			iVar4 = 5;
			iVar1 = 55;
			break;
		
		case 102:
			StringCopy(&Var2, "LEGS_P0_28_6", 16);
			iVar3 = 28;
			iVar4 = 6;
			iVar1 = 55;
			break;
		
		case 103:
			StringCopy(&Var2, "LEGS_P0_28_7", 16);
			iVar3 = 28;
			iVar4 = 7;
			iVar1 = 55;
			break;
		
		case 104:
			StringCopy(&Var2, "LEGS_P0_28_8", 16);
			iVar3 = 28;
			iVar4 = 8;
			iVar1 = 58;
			break;
		
		case 105:
			StringCopy(&Var2, "LEGS_P0_28_9", 16);
			iVar3 = 28;
			iVar4 = 9;
			iVar1 = 58;
			break;
		
		case 106:
			StringCopy(&Var2, "LEGS_P0_28_10", 16);
			iVar3 = 28;
			iVar4 = 10;
			iVar1 = 60;
			break;
		
		case 107:
			StringCopy(&Var2, "LEGS_P0_28_11", 16);
			iVar3 = 28;
			iVar4 = 11;
			iVar1 = 60;
			break;
		
		case 108:
			StringCopy(&Var2, "LEGS_P0_28_12", 16);
			iVar3 = 28;
			iVar4 = 12;
			iVar1 = 62;
			break;
		
		case 109:
			StringCopy(&Var2, "LEGS_P0_28_13", 16);
			iVar3 = 28;
			iVar4 = 13;
			iVar1 = 62;
			break;
		
		case 110:
			StringCopy(&Var2, "LEGS_P0_28_14", 16);
			iVar3 = 28;
			iVar4 = 14;
			iVar1 = 65;
			break;
		
		case 111:
			StringCopy(&Var2, "LEGS_P0_28_15", 16);
			iVar3 = 28;
			iVar4 = 15;
			iVar1 = 65;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 29;
			iVar4 = 0;
			break;
		
		default:
			func_173(iVar7, iParam0, 113);
			return;
			break;
	}
	func_165(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_222(int iParam0)//Position - 0x2775D
{
	if (iParam0 < 60)
	{
		func_224(iParam0);
	}
	else
	{
		func_223(iParam0);
	}
	if (Global_10A0A[0 /*14*/].f_2 == -1)
	{
		func_173(3, iParam0, 181);
	}
}

void func_223(int iParam0)//Position - 0x27791
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
	Global_10A0A[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 64:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 66:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 67:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "TORSO_P0_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 120;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P0_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 120;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P0_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 120;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P0_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 120;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P0_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 120;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P0_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 120;
			break;
		
		case 76:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P0_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P0_16_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 20;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "TORSO_P0_16_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 24;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P0_16_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 22;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P0_16_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 25;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P0_16_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 25;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P0_16_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 22;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P0_16_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 27;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P0_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P0_17_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P0_17_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P0_17_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 48;
			break;
		
		case 89:
			StringCopy(&Var2, "TORSO_P0_17_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 40;
			break;
		
		case 90:
			StringCopy(&Var2, "TORSO_P0_17_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 45;
			break;
		
		case 91:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 18;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P0_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P0_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 190;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P0_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 190;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P0_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 190;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P0_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 210;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P0_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P0_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P0_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 55;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P0_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P0_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 99;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P0_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 49;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P0_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 120;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P0_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 45;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P0_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 115;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P0_20_9", 16);
			iVar3 = 20;
			iVar4 = 9;
			iVar1 = 105;
			break;
		
		case 107:
			StringCopy(&Var2, "TORSO_P0_20_10", 16);
			iVar3 = 20;
			iVar4 = 10;
			iVar1 = 90;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P0_20_11", 16);
			iVar3 = 20;
			iVar4 = 11;
			iVar1 = 95;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P0_20_12", 16);
			iVar3 = 20;
			iVar4 = 12;
			iVar1 = 39;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P0_20_13", 16);
			iVar3 = 20;
			iVar4 = 13;
			iVar1 = 95;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P0_20_14", 16);
			iVar3 = 20;
			iVar4 = 14;
			iVar1 = 35;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P0_20_15", 16);
			iVar3 = 20;
			iVar4 = 15;
			iVar1 = 95;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P0_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 88;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P0_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 60;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P0_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 70;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P0_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 80;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P0_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 90;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P0_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 80;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P0_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 70;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P0_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 95;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P0_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 105;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P0_21_9", 16);
			iVar3 = 21;
			iVar4 = 9;
			iVar1 = 95;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P0_21_10", 16);
			iVar3 = 21;
			iVar4 = 10;
			iVar1 = 110;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P0_21_11", 16);
			iVar3 = 21;
			iVar4 = 11;
			iVar1 = 98;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P0_21_12", 16);
			iVar3 = 21;
			iVar4 = 12;
			iVar1 = 88;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P0_21_13", 16);
			iVar3 = 21;
			iVar4 = 13;
			iVar1 = 98;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P0_21_14", 16);
			iVar3 = 21;
			iVar4 = 14;
			iVar1 = 110;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P0_21_15", 16);
			iVar3 = 21;
			iVar4 = 15;
			iVar1 = 98;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P0_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P0_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 4950;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P0_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 4195;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P0_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 3195;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P0_22_4", 16);
			iVar3 = 22;
			iVar4 = 4;
			iVar1 = 2950;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P0_22_5", 16);
			iVar3 = 22;
			iVar4 = 5;
			iVar1 = 3950;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P0_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar1 = 3200;
			break;
		
		case 136:
			StringCopy(&Var2, "TORSO_P0_23_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar1 = 3200;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P0_23_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar1 = 3200;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P0_23_3", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar1 = 3200;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P0_23_4", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar1 = 3200;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P0_23_5", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar1 = 3200;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P0_23_6", 16);
			iVar3 = 23;
			iVar4 = 6;
			iVar1 = 3200;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P0_23_7", 16);
			iVar3 = 23;
			iVar4 = 7;
			iVar1 = 3200;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P0_23_8", 16);
			iVar3 = 23;
			iVar4 = 8;
			iVar1 = 3200;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P0_23_9", 16);
			iVar3 = 23;
			iVar4 = 9;
			iVar1 = 3200;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P0_23_10", 16);
			iVar3 = 23;
			iVar4 = 10;
			iVar1 = 3200;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P0_23_11", 16);
			iVar3 = 23;
			iVar4 = 11;
			iVar1 = 3200;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P0_23_12", 16);
			iVar3 = 23;
			iVar4 = 12;
			iVar1 = 3200;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P0_23_13", 16);
			iVar3 = 23;
			iVar4 = 13;
			iVar1 = 3200;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P0_23_14", 16);
			iVar3 = 23;
			iVar4 = 14;
			iVar1 = 3200;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P0_23_15", 16);
			iVar3 = 23;
			iVar4 = 15;
			iVar1 = 3200;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P0_24_0", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar1 = 1350;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P0_24_1", 16);
			iVar3 = 24;
			iVar4 = 1;
			iVar1 = 1400;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P0_24_2", 16);
			iVar3 = 24;
			iVar4 = 2;
			iVar1 = 1200;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P0_24_3", 16);
			iVar3 = 24;
			iVar4 = 3;
			iVar1 = 1250;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P0_24_4", 16);
			iVar3 = 24;
			iVar4 = 4;
			iVar1 = 1350;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P0_24_5", 16);
			iVar3 = 24;
			iVar4 = 5;
			iVar1 = 1300;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P0_24_6", 16);
			iVar3 = 24;
			iVar4 = 6;
			iVar1 = 1380;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P0_24_7", 16);
			iVar3 = 24;
			iVar4 = 7;
			iVar1 = 1340;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P0_24_8", 16);
			iVar3 = 24;
			iVar4 = 8;
			iVar1 = 1380;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P0_24_9", 16);
			iVar3 = 24;
			iVar4 = 9;
			iVar1 = 1250;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P0_25_0", 16);
			iVar3 = 25;
			iVar4 = 0;
			iVar1 = 840;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P0_25_1", 16);
			iVar3 = 25;
			iVar4 = 1;
			iVar1 = 840;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P0_25_2", 16);
			iVar3 = 25;
			iVar4 = 2;
			iVar1 = 840;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P0_25_3", 16);
			iVar3 = 25;
			iVar4 = 3;
			iVar1 = 840;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P0_25_4", 16);
			iVar3 = 25;
			iVar4 = 4;
			iVar1 = 840;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P0_25_5", 16);
			iVar3 = 25;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P0_25_6", 16);
			iVar3 = 25;
			iVar4 = 6;
			iVar1 = 840;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P0_25_7", 16);
			iVar3 = 25;
			iVar4 = 7;
			iVar1 = 840;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P0_26_0", 16);
			iVar3 = 26;
			iVar4 = 0;
			break;
		
		case 170:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 27;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P0_28_0", 16);
			iVar3 = 28;
			iVar4 = 0;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P0_28_1", 16);
			iVar3 = 28;
			iVar4 = 1;
			iVar1 = 130;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P0_28_2", 16);
			iVar3 = 28;
			iVar4 = 2;
			iVar1 = 110;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P0_29_0", 16);
			iVar3 = 29;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P0_30_0", 16);
			iVar3 = 30;
			iVar4 = 0;
			iVar1 = 290;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P0_30_1", 16);
			iVar3 = 30;
			iVar4 = 1;
			iVar1 = 320;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P0_31_0", 16);
			iVar3 = 31;
			iVar4 = 0;
			iVar1 = 59;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P0_31_1", 16);
			iVar3 = 31;
			iVar4 = 1;
			iVar1 = 55;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P0_31_2", 16);
			iVar3 = 31;
			iVar4 = 2;
			iVar1 = 59;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P0_31_3", 16);
			iVar3 = 31;
			iVar4 = 3;
			iVar1 = 49;
			break;
		
		default:
			return;
			break;
	}
	func_165(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_224(int iParam0)//Position - 0x28533
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
	Global_10A0A[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P0_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 3500;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P0_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P0_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P0_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P0_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P0_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P0_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P0_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P0_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P0_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P0_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P0_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P0_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P0_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
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
			iVar1 = 20;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 18;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 22;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 25;
			break;
		
		case 21:
			StringCopy(&Var2, "TORSO_P0_2_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 19;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P0_2_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 20;
			break;
		
		case 23:
			StringCopy(&Var2, "TORSO_P0_2_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 22;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P0_2_7", 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 18;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P0_2_8", 16);
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 39;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P0_2_9", 16);
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 32;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P0_2_10", 16);
			iVar3 = 2;
			iVar4 = 10;
			iVar1 = 35;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P0_2_11", 16);
			iVar3 = 2;
			iVar4 = 11;
			iVar1 = 35;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P0_2_12", 16);
			iVar3 = 2;
			iVar4 = 12;
			iVar1 = 210;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P0_2_13", 16);
			iVar3 = 2;
			iVar4 = 13;
			iVar1 = 250;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P0_2_14", 16);
			iVar3 = 2;
			iVar4 = 14;
			iVar1 = 290;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P0_2_15", 16);
			iVar3 = 2;
			iVar4 = 15;
			iVar1 = 310;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P0_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 150;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P0_7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 160;
			break;
		
		case 40:
			StringCopy(&Var2, "TORSO_P0_7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 150;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P0_7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 150;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P0_7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 160;
			break;
		
		case 43:
			StringCopy(&Var2, "TORSO_P0_7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 160;
			break;
		
		case 44:
			StringCopy(&Var2, "TORSO_P0_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "TORSO_P0_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 52;
			break;
		
		case 46:
			StringCopy(&Var2, "TORSO_P0_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 52;
			break;
		
		case 47:
			StringCopy(&Var2, "TORSO_P0_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 55;
			break;
		
		case 48:
			StringCopy(&Var2, "TORSO_P0_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 55;
			break;
		
		case 49:
			StringCopy(&Var2, "TORSO_P0_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 58;
			break;
		
		case 50:
			StringCopy(&Var2, "TORSO_P0_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 58;
			break;
		
		case 51:
			StringCopy(&Var2, "TORSO_P0_8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 62;
			break;
		
		case 52:
			StringCopy(&Var2, "TORSO_P0_8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 65;
			break;
		
		case 53:
			StringCopy(&Var2, "TORSO_P0_8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 65;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P0_8_10", 16);
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 68;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P0_8_11", 16);
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 68;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P0_8_12", 16);
			iVar3 = 8;
			iVar4 = 12;
			iVar1 = 55;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P0_8_13", 16);
			iVar3 = 8;
			iVar4 = 13;
			iVar1 = 62;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P0_8_14", 16);
			iVar3 = 8;
			iVar4 = 14;
			iVar1 = 58;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P0_8_15", 16);
			iVar3 = 8;
			iVar4 = 15;
			iVar1 = 58;
			break;
		
		default:
			return;
			break;
	}
	func_165(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_225(int iParam0)//Position - 0x28BBF
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
	Global_10A0A[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P0_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P0_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P0_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P0_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		default:
			func_173(iVar7, iParam0, 6);
			return;
			break;
	}
	func_165(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_226(int iParam0)//Position - 0x28CA5
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
	Global_10A0A[0 /*14*/].f_5 = 0;
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
			func_173(iVar7, iParam0, 7);
			return;
			break;
	}
	func_165(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_227()//Position - 0x28DA2
{
	Global_10A0A[0 /*14*/].f_1 = -1;
	Global_10A0A[0 /*14*/].f_2 = -1;
	Global_10A0A[0 /*14*/].f_5 = -1;
	Global_10A0A[0 /*14*/].f_3 = -1;
	Global_10A0A[0 /*14*/].f_4 = -1;
	Global_10A0A[0 /*14*/].f_7 = 0;
	Global_10A0A[0 /*14*/].f_6 = 0;
	Global_10A0A[0 /*14*/].f_D = -1;
	Global_10A0A[0 /*14*/].f_C = 0;
	Global_10A0A[0 /*14*/] = 0;
	StringCopy(&(Global_10A0A[0 /*14*/].f_8), "NO_LABEL", 16);
}

int func_228(int iParam0)//Position - 0x28E1B
{
	switch (iParam0)
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
		
		default:
			break;
	}
	return 145;
}

int func_229(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x28E56
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
	var uVar11;
	var uVar12;
	var uVar13;
	struct<14> Var14;
	var uVar15;
	
	if (PED::IS_PED_INJURED(uParam0) || iParam2 == -99)
	{
		return 0;
	}
	Global_10A09++;
	iVar5 = -99;
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -99;
	iVar9 = -99;
	iVar10 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (iParam5 == 0)
	{
		Global_10A0A[1 /*14*/] = { func_162(iVar10, iParam1, iParam2) };
		if (!func_249(iParam3))
		{
			Global_10A09 = (Global_10A09 - 1);
			return 0;
		}
		func_247(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("player_one"))
			{
				iVar5 = func_9(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = func_9(iParam0, 9);
			if (iVar10 == joaat("player_zero"))
			{
				if (iVar6 >= 9 && iVar6 <= 14)
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("player_one"))
			{
				if (iVar6 >= 5 && iVar6 <= 10)
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("player_two"))
			{
				if ((iVar6 >= 9 && iVar6 <= 14) || (iVar6 >= 15 && iVar6 <= 16))
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			iVar7 = func_243(iParam0, 1);
			if (!func_153(iVar10, 14, iVar7))
			{
				iVar7 = -99;
			}
			iVar8 = func_243(iParam0, 0);
			if (!func_152(iVar10, 14, iVar8) && !func_151(iVar10, 14, iVar8))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("player_one"))
			{
				iVar9 = func_243(iParam0, 2);
			}
		}
		PED::CLEAR_ALL_PED_PROPS(iParam0);
		uVar11 = 15;
		if (iParam5 == 1)
		{
			uVar11 = { Global_10A35 };
		}
		else
		{
			uVar11 = { func_159(iVar10, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar11[iVar0] != -99)
			{
				Global_10A0A[1 /*14*/] = { func_162(iVar10, iVar0, uVar11[iVar0]) };
				if (MISC::IS_BIT_SET(Global_10A0A[1 /*14*/].f_6, 0))
				{
					if (iVar0 == 13)
					{
						uVar12 = 9;
						if (iParam5 == 1)
						{
							uVar12 = { Global_10A45 };
						}
						else
						{
							uVar12 = { func_155(iVar10, uVar11[iVar0]) };
						}
						iVar1 = 0;
						while (iVar1 <= 8)
						{
							Global_10A0A[1 /*14*/] = { func_162(iVar10, 14, uVar12[iVar1]) };
							func_242(iParam0, Global_10A0A[1 /*14*/].f_C, Global_10A0A[1 /*14*/].f_3, Global_10A0A[1 /*14*/].f_4);
							func_247(14);
							if (Global_10A09 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = func_234(iParam0, iVar10, 14, uVar12[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_229(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
									}
									iVar2++;
								}
							}
							iVar1++;
						}
					}
					else if (iVar0 != 14 && iVar0 != 12)
					{
						if ((iVar10 == joaat("player_one") && iVar0 == 2) && uVar11[iVar0] == 20)
						{
							func_233(iVar10, 2, 20, &iVar4);
						}
						if (iParam4 == -1)
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, func_11(iVar0), Global_10A0A[1 /*14*/].f_3, Global_10A0A[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, func_11(iVar0)));
						}
						else
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, func_11(iVar0), Global_10A0A[1 /*14*/].f_3, Global_10A0A[1 /*14*/].f_4, iParam4);
						}
						func_247(iVar0);
						if (Global_10A09 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = func_234(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_229(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_10A0A[1 /*14*/] = { func_162(iVar10, iVar0, func_252(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_10A0A[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (func_250(iParam0, iVar10, &iVar4, 1))
							{
								func_229(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
							}
						}
					}
					else
					{
						uVar13 = { func_159(iVar10, 0) };
						func_229(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var14 = { func_162(iVar10, 8, iVar5) };
			if (iVar5 != -99)
			{
				if (func_150(iVar10, iParam2, 8, iVar5, &uVar11, &Var14))
				{
					func_229(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var14 = { func_162(iVar10, 9, iVar6) };
			if (iVar6 != -99)
			{
				if (func_150(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_229(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var14 = { func_162(iVar10, 14, iVar7) };
			if (iVar7 != -99)
			{
				if (func_150(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_229(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var14 = { func_162(iVar10, 14, iVar8) };
			if (iVar8 != -99)
			{
				if (func_150(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_229(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var14 = { func_162(iVar10, 14, iVar9) };
			if (iVar9 != -99)
			{
				if (func_150(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_229(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
		}
	}
	else if (iParam1 == 13)
	{
		uVar15 = { func_155(iVar10, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_10A0A[1 /*14*/] = { func_162(iVar10, 14, uVar15[iVar1]) };
			func_242(iParam0, Global_10A0A[1 /*14*/].f_C, Global_10A0A[1 /*14*/].f_3, Global_10A0A[1 /*14*/].f_4);
			func_247(14);
			if (Global_10A09 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_234(iParam0, iVar10, 14, uVar15[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_229(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		func_242(iParam0, Global_10A0A[1 /*14*/].f_C, Global_10A0A[1 /*14*/].f_3, Global_10A0A[1 /*14*/].f_4);
		func_247(iParam1);
		if (Global_10A09 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_234(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_229(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				iVar2++;
			}
		}
	}
	else
	{
		if (iParam4 == -1)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, func_11(iParam1), Global_10A0A[1 /*14*/].f_3, Global_10A0A[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, func_11(iParam1)));
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, func_11(iParam1), Global_10A0A[1 /*14*/].f_3, Global_10A0A[1 /*14*/].f_4, iParam4);
		}
		if (Global_10A09 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_234(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_229(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			func_230(iVar10, iParam1, iParam2);
		}
	}
	if (Global_10A09 == 1)
	{
		if (func_250(iParam0, iVar10, &iVar4, 0))
		{
			func_229(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		if (func_148(iParam0, iVar10, &iVar4))
		{
			func_229(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	Global_10A09 = (Global_10A09 - 1);
	return 1;
}

void func_230(int iParam0, int iParam1, int iParam2)//Position - 0x29643
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == joaat("player_zero"))
	{
		iVar0 = 5;
	}
	else if (iParam0 == joaat("player_one"))
	{
		iVar0 = 2;
	}
	else if (iParam0 == joaat("player_two"))
	{
		iVar0 = 4;
	}
	if (func_232(iParam0, 12, iVar0))
	{
		if (func_231(iParam0, iParam1, iParam2))
		{
			iVar1 = func_228(iParam0);
			if (iParam1 == 3)
			{
				Global_17C49.f_6C1.f_21B.f_C4[iVar1] = iParam2;
			}
			else if (iParam1 == 4)
			{
				Global_17C49.f_6C1.f_21B.f_C8[iVar1] = iParam2;
			}
		}
	}
}

int func_231(int iParam0, int iParam1, int iParam2)//Position - 0x296CD
{
	if (iParam0 == joaat("player_zero"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 47 && iParam2 <= 54)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 >= 77 && iParam2 <= 84)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 14 && iParam2 <= 21)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 >= 41 && iParam2 <= 56)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 18 && iParam2 <= 29)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 >= 54 && iParam2 <= 69)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_232(int iParam0, int iParam1, int iParam2)//Position - 0x297AB
{
	Global_10A0A[1 /*14*/] = { func_162(iParam0, iParam1, iParam2) };
	return MISC::IS_BIT_SET(Global_10A0A[1 /*14*/].f_6, 2);
}

int func_233(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x297D5
{
	int iVar0;
	
	*iParam3 = -99;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 7 || iParam2 == 23)
					{
						*iParam3 = 1;
					}
					break;
				
				case 9:
					if (iParam2 == 8 || (iParam2 >= 9 && iParam2 <= 14))
					{
						*iParam3 = 1;
					}
					break;
				
				case 10:
					if (iParam2 >= 44 && iParam2 <= 47)
					{
						*iParam3 = 1;
					}
					break;
				
				case 14:
					if ((((((iParam2 >= 31 && iParam2 <= 32) || (iParam2 >= 33 && iParam2 <= 34)) || (iParam2 >= 35 && iParam2 <= 36)) || iParam2 == 37) || (iParam2 >= 40 && iParam2 <= 41)) || iParam2 == 46)
					{
						*iParam3 = 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 2:
					if (iParam2 == 20)
					{
						*iParam3 = 20;
					}
					break;
				
				case 8:
					if (iParam2 == 4)
					{
						*iParam3 = 19;
					}
					break;
				
				case 9:
					if (iParam2 >= 5 && iParam2 <= 10)
					{
						*iParam3 = 19;
					}
					break;
				
				case 10:
					if (iParam2 >= 47 && iParam2 <= 50)
					{
						*iParam3 = 19;
					}
					break;
				
				case 14:
					if (((((iParam2 >= 26 && iParam2 <= 27) || (iParam2 >= 28 && iParam2 <= 29)) || (iParam2 >= 30 && iParam2 <= 31)) || iParam2 == 32) || (iParam2 >= 35 && iParam2 <= 36))
					{
						*iParam3 = 19;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 7)
					{
						*iParam3 = 2;
					}
					break;
				
				case 9:
					if ((iParam2 >= 9 && iParam2 <= 14) || (iParam2 >= 15 && iParam2 <= 16))
					{
						*iParam3 = 2;
					}
					break;
				
				case 10:
					if (iParam2 >= 29 && iParam2 <= 32)
					{
						*iParam3 = 2;
					}
					break;
				
				case 14:
					if ((((((iParam2 >= 47 && iParam2 <= 48) || (iParam2 >= 49 && iParam2 <= 50)) || (iParam2 >= 51 && iParam2 <= 52)) || iParam2 == 53) || (iParam2 >= 56 && iParam2 <= 57)) || iParam2 == 62)
					{
						*iParam3 = 2;
					}
					break;
			}
			break;
	}
	if (*iParam3 != -99)
	{
		iVar0 = func_228(iParam0);
		Global_17C49.f_6C1.f_21B[iVar0 /*65*/].f_3C = iParam2;
		Global_17C49.f_6C1.f_21B[iVar0 /*65*/].f_3D = iParam1;
		return 1;
	}
	return 0;
}

int func_234(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x29ADC
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
	
	iVar0 = -99;
	if (iParam4 == 0)
	{
		switch (iParam2)
		{
			case 2:
				iVar1 = func_9(uParam0, 1);
				iVar0 = func_241(iParam1, iParam3, iVar1);
				break;
			
			case 1:
				iVar2 = func_9(uParam0, 2);
				iVar0 = func_241(iParam1, iVar2, iParam3);
				break;
		}
	}
	else if (iParam4 == 2)
	{
		func_233(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 1)
	{
		func_240(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 6)
	{
		if (iParam2 == 4)
		{
			if (func_239(iParam1, iParam3, &iVar0))
			{
			}
		}
	}
	else
	{
		switch (iParam1)
		{
			case joaat("player_zero"):
				switch (iParam4)
				{
					case 3:
						switch (iParam2)
						{
							case 10:
								switch (iParam3)
								{
									case 36:
										iVar0 = 17;
										break;
									
									case 37:
										iVar0 = 17;
										break;
									
									case 38:
										iVar0 = 18;
										break;
									
									case 39:
										iVar0 = 18;
										break;
									
									case 40:
										iVar0 = 19;
										break;
									
									case 41:
										iVar0 = 19;
										break;
									
									case 42:
										iVar0 = 20;
										break;
									
									case 43:
										iVar0 = 20;
										break;
								}
								break;
							
							case 11:
								if (iParam3 >= 2 && iParam3 <= 7)
								{
									if (!func_238(uParam0, 3, 44, 59))
									{
										iVar0 = 44;
									}
								}
								else if (((iParam3 >= 8 && iParam3 <= 17) || (iParam3 >= 18 && iParam3 <= 27)) || (iParam3 >= 28 && iParam3 <= 43))
								{
									if (!func_238(uParam0, 3, 135, 150))
									{
										iVar0 = func_237(iParam1, 3, 135, 150);
									}
								}
								break;
						}
						break;
					
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 63:
										iVar0 = 4;
										break;
									
									case 61:
										iVar0 = 3;
										break;
									
									case 16:
										iVar0 = 1;
										break;
									
									case 114:
										iVar0 = 15;
										break;
									
									case 115:
										iVar0 = 17;
										break;
									
									case 116:
										iVar0 = 16;
										break;
									
									case 117:
										iVar0 = 18;
										break;
									
									case 118:
										iVar0 = 20;
										break;
									
									case 119:
										iVar0 = 19;
										break;
									
									case 125:
										iVar0 = 21;
										break;
									
									case 120:
										iVar0 = 22;
										break;
									
									case 124:
										iVar0 = 23;
										break;
									
									case 126:
										iVar0 = 24;
										break;
									
									case 121:
										iVar0 = 25;
										break;
									
									case 127:
										iVar0 = 26;
										break;
									
									case 128:
										iVar0 = 27;
										break;
									
									case 85:
										iVar0 = 6;
										break;
									
									case 77:
										iVar0 = 7;
										break;
									
									case 78:
										iVar0 = 8;
										break;
									
									case joaat("mpsv_lp0_31"):
										iVar0 = 9;
										break;
									
									case 80:
										iVar0 = 10;
										break;
									
									case 81:
										iVar0 = 11;
										break;
									
									case 82:
										iVar0 = 12;
										break;
									
									case 83:
										iVar0 = 13;
										break;
									
									case 84:
										iVar0 = 14;
										break;
									
									case 21:
										iVar0 = 31;
										break;
									
									case 22:
										iVar0 = 30;
										break;
									
									case 23:
										iVar0 = 29;
										break;
									
									case 24:
										iVar0 = 28;
										break;
									
									case 25:
										iVar0 = 33;
										break;
									
									case 26:
										iVar0 = 35;
										break;
									
									case 27:
										iVar0 = 34;
										break;
									
									case 28:
										iVar0 = 32;
										break;
									
									default:
										if (iParam3 >= 17 && iParam3 <= 20)
										{
										}
										else
										{
											iVar0 = 0;
										}
										break;
								}
								break;
							
							case 11:
								if (iParam3 != 0)
								{
									iVar0 = 0;
								}
								break;
						}
						break;
					
					case 11:
						if (iParam2 == 3)
						{
							if ((iParam3 >= 44 && iParam3 <= 59) || (iParam3 >= 135 && iParam3 <= 150))
							{
							}
							else
							{
								iVar0 = 0;
							}
						}
						else if (iParam2 == 10)
						{
							if (iParam3 >= 36 && iParam3 <= 43)
							{
								iVar0 = 0;
							}
						}
						break;
				}
				break;
			
			case joaat("player_one"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 17:
										iVar0 = 2;
										break;
									
									case 90:
										iVar0 = 1;
										break;
									
									case 268:
										iVar0 = 3;
										break;
									
									case 269:
										iVar0 = 5;
										break;
									
									case 270:
										iVar0 = 4;
										break;
									
									case 271:
										iVar0 = 6;
										break;
									
									case 272:
										iVar0 = 8;
										break;
									
									case 273:
										iVar0 = 7;
										break;
									
									case 279:
										iVar0 = 9;
										break;
									
									case 274:
										iVar0 = 10;
										break;
									
									case 278:
										iVar0 = 11;
										break;
									
									case 280:
										iVar0 = 12;
										break;
									
									case 275:
										iVar0 = 13;
										break;
									
									case 281:
										iVar0 = 14;
										break;
									
									case 282:
										iVar0 = 15;
										break;
									
									case 107:
										iVar0 = 16;
										break;
									
									case 108:
										iVar0 = 17;
										break;
									
									case 109:
										iVar0 = 18;
										break;
									
									case 110:
										iVar0 = 19;
										break;
									
									case 111:
										iVar0 = 20;
										break;
									
									case 112:
										iVar0 = 21;
										break;
									
									case 113:
										iVar0 = 22;
										break;
									
									case 114:
										iVar0 = 23;
										break;
									
									case 115:
										iVar0 = 24;
										break;
									
									case 116:
										iVar0 = 25;
										break;
									
									case 117:
										iVar0 = 52;
										break;
									
									case 118:
										iVar0 = 27;
										break;
									
									case 119:
										iVar0 = 28;
										break;
									
									case 120:
										iVar0 = 29;
										break;
									
									case 121:
										iVar0 = 30;
										break;
									
									case 122:
										iVar0 = 31;
										break;
									
									case 296:
										iVar0 = 32;
										break;
									
									case 297:
										iVar0 = 33;
										break;
									
									case 298:
										iVar0 = 34;
										break;
									
									case 299:
										iVar0 = 35;
										break;
									
									case 300:
										iVar0 = 36;
										break;
									
									case 301:
										iVar0 = 37;
										break;
									
									case 302:
										iVar0 = 38;
										break;
									
									case 309:
										iVar0 = 39;
										break;
									
									case 310:
										iVar0 = 40;
										break;
									
									case 311:
										iVar0 = 41;
										break;
									
									case 312:
										iVar0 = 42;
										break;
									
									case 313:
										iVar0 = 43;
										break;
									
									case 314:
										iVar0 = 44;
										break;
									
									case 315:
										iVar0 = 45;
										break;
									
									case 316:
										iVar0 = 46;
										break;
									
									case 317:
										iVar0 = 51;
										break;
									
									default:
										iVar0 = 0;
										break;
								}
								break;
							
							case 11:
								if (iParam3 != 0)
								{
									iVar0 = 0;
								}
								break;
						}
						break;
					
					case 3:
						switch (iParam2)
						{
							case 11:
								if (iParam3 >= 47 && iParam3 <= 62)
								{
									if (!func_238(uParam0, 3, 209, 222))
									{
										iVar0 = func_237(iParam1, 3, 209, 222);
									}
								}
								else if ((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8))
								{
									if (!func_238(uParam0, 3, 243, 258))
									{
										if (iParam3 == 1 || iParam3 == 5)
										{
											iVar0 = func_237(iParam1, 3, 243, 246);
										}
										else if (iParam3 == 2 || iParam3 == 6)
										{
											iVar0 = func_237(iParam1, 3, 247, 250);
										}
										else if (iParam3 == 3 || iParam3 == 7)
										{
											iVar0 = func_237(iParam1, 3, 251, 254);
										}
										else if (iParam3 == 4 || iParam3 == 8)
										{
											iVar0 = func_237(iParam1, 3, 255, 258);
										}
									}
								}
								else if (iParam3 == 41 || iParam3 == 42)
								{
									if (!func_238(uParam0, 3, 176, 191) && !func_238(uParam0, 3, 227, 242))
									{
										iVar0 = func_237(iParam1, 3, 176, 191);
									}
								}
								break;
						}
						break;
					
					case 8:
						if (iParam2 == 11 || iParam2 == 3)
						{
							if (iParam2 == 11)
							{
								iVar5 = iParam3;
								iVar4 = func_9(uParam0, 3);
							}
							else if (iParam2 == 3)
							{
								iVar4 = iParam3;
								iVar5 = func_9(uParam0, 11);
								iVar5 = func_236(iParam1, iVar4, iVar5, 0);
							}
							iVar3 = func_9(uParam0, 8);
							if (((iVar5 >= 5 && iVar5 <= 8) || (iVar5 >= 25 && iVar5 <= 40)) || (iVar5 >= 42 && iVar5 <= 43))
							{
								if (!func_235(joaat("player_one"), iVar3, iVar5, iVar4, &iVar6))
								{
									if (iVar6 != -99)
									{
										iVar0 = iVar6;
									}
								}
							}
							else if (((iVar3 >= 27 && iVar3 <= 42) || (iVar3 >= 43 && iVar3 <= 58)) || (iVar3 >= 59 && iVar3 <= 74))
							{
								iVar0 = 26;
							}
						}
						break;
					
					case 11:
						if (iParam2 == 3)
						{
							if (iParam3 >= 209 && iParam3 <= 222)
							{
							}
							else if (((iParam3 >= 176 && iParam3 <= 191) || (iParam3 >= 227 && iParam3 <= 242)) || (iParam3 >= 243 && iParam3 <= 258))
							{
								iVar7 = func_9(uParam0, 8);
								iVar8 = func_9(uParam0, 11);
								if (((iVar7 >= 27 && iVar7 <= 42) || (iVar7 >= 43 && iVar7 <= 58)) || (iVar7 >= 59 && iVar7 <= 74))
								{
									iVar0 = func_236(iParam1, iParam3, iVar8, 0);
								}
								else
								{
									iVar0 = func_236(iParam1, iParam3, iVar8, 1);
								}
							}
							else if (iParam3 >= 41 && iParam3 <= 56)
							{
								iVar0 = 45;
							}
							else if (iParam3 >= 223 && iParam3 <= 226)
							{
								iVar0 = 44;
							}
							else
							{
								iVar0 = 0;
							}
						}
						else if (iParam2 == 8)
						{
							if (((iParam3 >= 27 && iParam3 <= 42) || (iParam3 >= 43 && iParam3 <= 58)) || (iParam3 >= 59 && iParam3 <= 74))
							{
								iVar9 = func_9(uParam0, 11);
								iVar0 = func_236(iParam1, -99, iVar9, 0);
							}
						}
						break;
				}
				break;
			
			case joaat("player_two"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 50:
										iVar0 = 3;
										break;
									
									case 81:
										iVar0 = 5;
										break;
									
									case 82:
										iVar0 = 6;
										break;
									
									case 83:
										iVar0 = 7;
										break;
									
									case 84:
										iVar0 = 10;
										break;
									
									case 85:
										iVar0 = 9;
										break;
									
									case 86:
										iVar0 = 8;
										break;
									
									case 92:
										iVar0 = 22;
										break;
									
									case 87:
										iVar0 = 23;
										break;
									
									case 91:
										iVar0 = 24;
										break;
									
									case 93:
										iVar0 = 25;
										break;
									
									case 88:
										iVar0 = 26;
										break;
									
									case 94:
										iVar0 = 27;
										break;
									
									case 120:
										iVar0 = 11;
										break;
									
									case 121:
										iVar0 = 13;
										break;
									
									case 122:
										iVar0 = 14;
										break;
									
									case 124:
										iVar0 = 12;
										break;
									
									case 126:
										iVar0 = 18;
										break;
									
									case 128:
										iVar0 = 17;
										break;
									
									case 130:
										iVar0 = 19;
										break;
									
									case 131:
										iVar0 = 16;
										break;
									
									case 134:
										iVar0 = 15;
										break;
									
									case 135:
										iVar0 = 20;
										break;
									
									default:
										iVar0 = 0;
										break;
								}
								break;
						}
						break;
				}
				break;
			}
	}
	return iVar0;
}

int func_235(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4)//Position - 0x2A68F
{
	int iVar0;
	
	switch (iParam0)
	{
		case joaat("player_zero"):
			break;
		
		case joaat("player_one"):
			*uParam4 = 0;
			if (iParam1 >= 27 && iParam1 <= 42)
			{
				if (iParam2 != -99)
				{
					if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
					{
					}
					else
					{
						if (iParam2 >= 42 && iParam2 <= 43)
						{
							if (iParam3 >= 176 && iParam3 <= 191)
							{
								iVar0 = (iParam1 - 27);
								*uParam4 = (59 + iVar0);
							}
							else if (iParam3 >= 227 && iParam3 <= 242)
							{
								iVar0 = (iParam1 - 27);
								*uParam4 = (43 + iVar0);
							}
						}
						return 0;
					}
				}
				if (iParam3 != -99)
				{
					if (((iParam3 >= 227 && iParam3 <= 242) || (iParam3 >= 176 && iParam3 <= 191)) || (iParam3 >= 243 && iParam3 <= 258))
					{
					}
					else
					{
						return 0;
					}
				}
			}
			else if (iParam1 >= 43 && iParam1 <= 58)
			{
				if (iParam2 != -99)
				{
					if (iParam2 >= 42 && iParam2 <= 43)
					{
					}
					else
					{
						if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
						{
							iVar0 = (iParam1 - 43);
							*uParam4 = (27 + iVar0);
						}
						return 0;
					}
				}
				if (iParam3 != -99)
				{
					if (iParam3 >= 227 && iParam3 <= 242)
					{
					}
					else
					{
						if (iParam3 >= 176 && iParam3 <= 191)
						{
							if (iParam2 >= 42 && iParam2 <= 43)
							{
								iVar0 = (iParam1 - 43);
								*uParam4 = (59 + iVar0);
							}
						}
						return 0;
					}
				}
			}
			else if (iParam1 >= 59 && iParam1 <= 74)
			{
				if (iParam2 != -99)
				{
					if (iParam2 >= 42 && iParam2 <= 43)
					{
					}
					else
					{
						if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
						{
							iVar0 = (iParam1 - 59);
							*uParam4 = (27 + iVar0);
						}
						return 0;
					}
				}
				if (iParam3 != -99)
				{
					if (iParam3 >= 176 && iParam3 <= 191)
					{
					}
					else
					{
						if (iParam3 >= 227 && iParam3 <= 242)
						{
							if (iParam2 >= 42 && iParam2 <= 43)
							{
								iVar0 = (iParam1 - 59);
								*uParam4 = (43 + iVar0);
							}
						}
						else if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
						{
							iVar0 = (iParam1 - 59);
							*uParam4 = (27 + iVar0);
						}
						return 0;
					}
				}
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 12)
			{
				if (iParam3 != 241)
				{
					return 0;
				}
			}
			break;
	}
	return 1;
}

int func_236(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2A973
{
	int iVar0;
	
	if (iParam1 >= 243 && iParam1 <= 246)
	{
		if (iParam3 == 1)
		{
			return 1;
		}
		else
		{
			return 5;
		}
	}
	else if (iParam1 >= 247 && iParam1 <= 250)
	{
		if (iParam3 == 1)
		{
			return 2;
		}
		else
		{
			return 6;
		}
	}
	else if (iParam1 >= 251 && iParam1 <= 254)
	{
		if (iParam3 == 1)
		{
			return 3;
		}
		else
		{
			return 7;
		}
	}
	else if (iParam1 >= 255 && iParam1 <= 258)
	{
		if (iParam3 == 1)
		{
			return 4;
		}
		else
		{
			return 8;
		}
	}
	else if (iParam1 >= 255 && iParam1 <= 258)
	{
		if (iParam3 == 1)
		{
			return 4;
		}
		else
		{
			return 8;
		}
	}
	else if ((iParam1 >= 176 && iParam1 <= 191) || (iParam1 >= 227 && iParam1 <= 242))
	{
		if (iParam2 >= 9 && iParam2 <= 24)
		{
			if (iParam3 == 1)
			{
				return iParam2;
			}
			else
			{
				iVar0 = (iParam2 - 9);
				iParam2 = (25 + iVar0);
				return iParam2;
			}
		}
		else if (iParam2 >= 25 && iParam2 <= 40)
		{
			if (iParam3 == 1)
			{
				iVar0 = (iParam2 - 25);
				iParam2 = (9 + iVar0);
				return iParam2;
			}
			else
			{
				return iParam2;
			}
		}
		else if (iParam2 == 41 || iParam2 == 42)
		{
			if (iParam3 == 1)
			{
				return 41;
			}
			else
			{
				return 42;
			}
		}
		else
		{
			if (iParam3 == 1)
			{
				iParam2 = func_237(iParam0, 11, 9, 24);
			}
			else
			{
				iParam2 = func_237(iParam0, 11, 25, 40);
			}
			if (iParam2 == -99)
			{
				if (iParam3 == 1)
				{
					return 41;
				}
				else
				{
					return 42;
				}
			}
			else
			{
				return iParam2;
			}
		}
	}
	else if (iParam2 >= 1 && iParam2 <= 4)
	{
		if (iParam3 == 1)
		{
			return iParam2;
		}
		else
		{
			iVar0 = (iParam2 - 1);
			iParam2 = (5 + iVar0);
			return iParam2;
		}
	}
	else if (iParam2 >= 5 && iParam2 <= 8)
	{
		if (iParam3 == 1)
		{
			iVar0 = (iParam2 - 5);
			iParam2 = (1 + iVar0);
			return iParam2;
		}
		else
		{
			return iParam2;
		}
	}
	else if (iParam2 >= 9 && iParam2 <= 24)
	{
		if (iParam3 == 1)
		{
			return iParam2;
		}
		else
		{
			iVar0 = (iParam2 - 9);
			iParam2 = (25 + iVar0);
			return iParam2;
		}
	}
	else if (iParam2 >= 25 && iParam2 <= 40)
	{
		if (iParam3 == 1)
		{
			iVar0 = (iParam2 - 25);
			iParam2 = (9 + iVar0);
			return iParam2;
		}
		else
		{
			return iParam2;
		}
	}
	else if (iParam2 == 41 || iParam2 == 42)
	{
		if (iParam3 == 1)
		{
			return 41;
		}
		else
		{
			return 42;
		}
	}
	return -99;
}

int func_237(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2AC3A
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam2;
	while (iVar0 <= (iParam3 - 1))
	{
		iVar1 = iVar0;
		if (func_232(iParam0, iParam1, iVar1))
		{
			return iVar1;
		}
		iVar0++;
	}
	return -99;
}

int func_238(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2AC71
{
	int iVar0;
	
	iVar0 = func_9(uParam0, iParam1);
	if (iVar0 >= iParam2 && iVar0 <= iParam3)
	{
		return 1;
	}
	return 0;
}

int func_239(int iParam0, int iParam1, int iParam2)//Position - 0x2AC9A
{
	*iParam2 = -99;
	switch (iParam0)
	{
		case joaat("player_zero"):
			if ((((((((((((((((((iParam1 == 16 || iParam1 == 17) || iParam1 == 21) || iParam1 == 22) || iParam1 == 32) || (iParam1 >= 34 && iParam1 <= 39)) || (iParam1 >= 41 && iParam1 <= 45)) || iParam1 == 46) || (iParam1 >= 47 && iParam1 <= 54)) || (iParam1 >= 55 && iParam1 <= 70)) || (iParam1 >= 72 && iParam1 <= 79)) || iParam1 == 80) || (iParam1 >= 81 && iParam1 <= 83)) || (iParam1 >= 84 && iParam1 <= 87)) || iParam1 == 88) || (iParam1 >= 89 && iParam1 <= 91)) || iParam1 == 95) || (iParam1 >= 96 && iParam1 <= 111)) || iParam1 == 112)
			{
				*iParam2 = 6;
				return 1;
			}
			break;
		
		case joaat("player_one"):
			if ((((((iParam1 == 12 || (iParam1 >= 14 && iParam1 <= 21)) || iParam1 == 32) || iParam1 == 52) || (iParam1 >= 69 && iParam1 <= 70)) || iParam1 == 71) || (iParam1 >= 72 && iParam1 <= 77))
			{
				*iParam2 = 17;
				return 1;
			}
			break;
		
		case joaat("player_two"):
			if (((((((((((((((iParam1 == 4 || iParam1 == 5) || iParam1 == 6) || iParam1 == 7) || iParam1 == 14) || (iParam1 >= 18 && iParam1 <= 29)) || iParam1 == 31) || iParam1 == 32) || iParam1 == 33) || iParam1 == 34) || (iParam1 >= 35 && iParam1 <= 42)) || (iParam1 >= 43 && iParam1 <= 53)) || (iParam1 >= 54 && iParam1 <= 61)) || (iParam1 >= 71 && iParam1 <= 80)) || (iParam1 >= 81 && iParam1 <= 90)) || (iParam1 >= 94 && iParam1 <= 103))
			{
				*iParam2 = 8;
				return 1;
			}
			break;
	}
	return 0;
}

int func_240(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2AF64
{
	int iVar0;
	
	*iParam3 = -99;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 10:
					if (iParam2 >= 44 && iParam2 <= 47)
					{
						*iParam3 = 0;
					}
					break;
				
				case 14:
					if (((((((iParam2 >= 31 && iParam2 <= 32) || (iParam2 >= 33 && iParam2 <= 34)) || (iParam2 >= 35 && iParam2 <= 36)) || iParam2 == 37) || (iParam2 >= 38 && iParam2 <= 39)) || (iParam2 >= 40 && iParam2 <= 41)) || (iParam2 >= 42 && iParam2 <= 44))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 10:
					if (iParam2 >= 47 && iParam2 <= 50)
					{
						*iParam3 = 0;
					}
					break;
				
				case 14:
					if (((((iParam2 >= 26 && iParam2 <= 27) || (iParam2 >= 28 && iParam2 <= 29)) || (iParam2 >= 30 && iParam2 <= 31)) || iParam2 == 32) || (iParam2 >= 35 && iParam2 <= 36))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 9:
					if (iParam2 >= 15 && iParam2 <= 16)
					{
						*iParam3 = 0;
					}
					break;
				
				case 10:
					if (iParam2 >= 29 && iParam2 <= 32)
					{
						*iParam3 = 0;
					}
					break;
				
				case 14:
					if (((((((iParam2 >= 47 && iParam2 <= 48) || (iParam2 >= 49 && iParam2 <= 50)) || (iParam2 >= 51 && iParam2 <= 52)) || iParam2 == 53) || (iParam2 >= 54 && iParam2 <= 55)) || (iParam2 >= 56 && iParam2 <= 57)) || (iParam2 >= 58 && iParam2 <= 60))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
	}
	if (*iParam3 != -99)
	{
		iVar0 = func_228(iParam0);
		Global_17C49.f_6C1.f_21B[iVar0 /*65*/].f_3F = iParam2;
		Global_17C49.f_6C1.f_21B[iVar0 /*65*/].f_40 = iParam1;
		return 1;
	}
	return 0;
}

int func_241(int iParam0, int iParam1, int iParam2)//Position - 0x2B1EE
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			if (iParam1 == 1)
			{
				if (iParam2 == 0)
				{
					return 1;
				}
				else if (iParam2 == 4)
				{
					return 5;
				}
				else
				{
					return 3;
				}
			}
			else if (iParam2 == 0)
			{
				return 0;
			}
			else if (iParam2 == 4)
			{
				return 4;
			}
			else
			{
				return 2;
			}
			break;
		
		case joaat("player_one"):
			if (iParam1 >= 0 && iParam1 <= 15)
			{
				if (iParam2 == 0)
				{
					return 0;
				}
				else
				{
					return 3;
				}
			}
			else if (iParam1 >= 16 && iParam1 <= 17)
			{
				if (iParam2 == 0)
				{
					return 2;
				}
				else
				{
					return 5;
				}
			}
			else if (iParam1 == 18)
			{
				if (iParam2 == 0)
				{
					return 6;
				}
				else
				{
					return 7;
				}
			}
			else if (iParam1 == 19)
			{
				if (iParam2 == 0)
				{
					return 1;
				}
				else
				{
					return 4;
				}
			}
			else if (iParam2 == 0)
			{
				return 1;
			}
			else
			{
				return 4;
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 2)
			{
				if (iParam2 == 0)
				{
					return 2;
				}
				else
				{
					return 3;
				}
			}
			else if (iParam1 == 3)
			{
				if (iParam2 == 0)
				{
					return 4;
				}
				else
				{
					return 6;
				}
			}
			else if (iParam1 == 8)
			{
				return 5;
			}
			else if (iParam2 == 0)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
	}
	return -99;
}

void func_242(int iParam0, int iParam1, int iParam2, var uParam3)//Position - 0x2B345
{
	if (iParam2 == -1)
	{
		PED::CLEAR_PED_PROP(iParam0, iParam1);
	}
	else
	{
		PED::SET_PED_PROP_INDEX(iParam0, iParam1, iParam2, uParam3, NETWORK::NETWORK_IS_GAME_IN_PROGRESS());
	}
}

int func_243(int iParam0, int iParam1)//Position - 0x2B36E
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
		return func_246(iParam1);
	}
	iVar1 = PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, iParam1);
	return func_244(iParam0, iVar0, iVar1, iParam1);
}

int func_244(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2B3B4
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
		return func_246(iParam3);
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar1 = FILES::GET_HASH_NAME_FOR_PROP(iParam0, iParam3, iParam1, iParam2);
	if (iVar1 != -1 && iVar1 != 0)
	{
		if (iVar0 == joaat("mp_m_freemode_01"))
		{
			return func_157(ENTITY::GET_ENTITY_MODEL(iParam0), iVar1, 14, 3);
		}
		else if (iVar0 == joaat("mp_f_freemode_01"))
		{
			return func_157(ENTITY::GET_ENTITY_MODEL(iParam0), iVar1, 14, 4);
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
					iVar3 = (iVar3 + func_245(iParam0, iParam3));
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
	return func_246(iParam3);
}

int func_245(int iParam0, int iParam1)//Position - 0x2B4B0
{
	int iVar0;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(uParam0);
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

int func_246(int iParam0)//Position - 0x2B5EE
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

void func_247(int iParam0)//Position - 0x2B674
{
	if (MISC::IS_BIT_SET(Global_10A0A[1 /*14*/].f_6, 1) && !MISC::IS_BIT_SET(Global_10A0A[1 /*14*/].f_6, 6))
	{
		func_169(iParam0, Global_10A0A[1 /*14*/].f_5, Global_10A0A[1 /*14*/].f_2, 2, Global_10A0A[1 /*14*/].f_1, 1, 0);
	}
	if (MISC::IS_BIT_SET(Global_10A0A[1 /*14*/].f_6, 1) && MISC::IS_BIT_SET(Global_10A0A[1 /*14*/].f_6, 6))
	{
		if (iParam0 == 12)
		{
			func_248(Global_280004, 2, 1, 1, -1);
		}
		else if (iParam0 == 13)
		{
		}
		else if (iParam0 == 14)
		{
			func_248(Global_280004, 2, 1, 1, -1);
		}
		else
		{
			func_248(Global_280004, 2, 1, 1, -1);
		}
	}
}

void func_248(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)//Position - 0x2B72C
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
	if (func_171(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		uVar3 = func_24(iVar2, iVar0, 0);
		MISC::SET_BIT(&uVar3, iVar1);
		func_15(iVar2, uVar3, iVar0, 1);
	}
}

int func_249(int iParam0)//Position - 0x2B775
{
	if (!MISC::IS_BIT_SET(Global_10A0A[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		if (!MISC::IS_BIT_SET(Global_10A0A[1 /*14*/].f_6, 1))
		{
			return 0;
		}
		if (!MISC::IS_BIT_SET(Global_10A0A[1 /*14*/].f_6, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_250(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2B7C6
{
	int iVar0;
	
	iVar0 = func_228(iParam1);
	if (Global_17C49.f_6C1.f_21B[iVar0 /*65*/].f_3C != -99)
	{
		if (!func_149(uParam0, Global_17C49.f_6C1.f_21B[iVar0 /*65*/].f_3D, Global_17C49.f_6C1.f_21B[iVar0 /*65*/].f_3C) || iParam3 == 1)
		{
			*iParam2 = Global_17C49.f_6C1.f_21B[iVar0 /*65*/].f_3B;
			Global_17C49.f_6C1.f_21B[iVar0 /*65*/].f_3C = -99;
			Global_17C49.f_6C1.f_21B[iVar0 /*65*/].f_3D = 2;
			return 1;
		}
	}
	return 0;
}

void func_251(int iParam0)//Position - 0x2B85C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		Global_17C49.f_6C1.f_21B[iParam0 /*65*/].f_D[iVar0] = 0;
		Global_17C49.f_6C1.f_21B[iParam0 /*65*/][iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_17C49.f_6C1.f_21B[iParam0 /*65*/].f_27[iVar0] = -1;
		Global_17C49.f_6C1.f_21B[iParam0 /*65*/].f_31[iVar0] = -1;
		iVar0++;
	}
	switch (iParam0)
	{
		case 0:
			Global_17C49.f_6C1.f_21B[iParam0 /*65*/].f_3B = 0;
			break;
		
		case 1:
			Global_17C49.f_6C1.f_21B[1 /*65*/].f_D[3] = 8;
			Global_17C49.f_6C1.f_21B[1 /*65*/].f_D[4] = 8;
			Global_17C49.f_6C1.f_21B[1 /*65*/].f_D[6] = 6;
			Global_17C49.f_6C1.f_21B[1 /*65*/].f_D[8] = 14;
			Global_17C49.f_6C1.f_21B[1 /*65*/].f_D[2] = 0;
			Global_17C49.f_6C1.f_21B[1 /*65*/][2] = 0;
			Global_17C49.f_6C1.f_21B[iParam0 /*65*/].f_3B = 0;
			break;
		
		case 2:
			Global_17C49.f_6C1.f_21B[2 /*65*/].f_D[3] = 0;
			Global_17C49.f_6C1.f_21B[2 /*65*/].f_D[4] = 23;
			Global_17C49.f_6C1.f_21B[2 /*65*/].f_D[6] = 10;
			Global_17C49.f_6C1.f_21B[iParam0 /*65*/].f_3B = 0;
			break;
	}
	Global_17C49.f_6C1.f_21B[iParam0 /*65*/].f_3C = -99;
	Global_17C49.f_6C1.f_21B[iParam0 /*65*/].f_3D = 2;
	Global_17C49.f_6C1.f_21B[iParam0 /*65*/].f_3E = 0;
	Global_17C49.f_6C1.f_21B[iParam0 /*65*/].f_3F = -99;
	Global_17C49.f_6C1.f_21B[iParam0 /*65*/].f_40 = 1;
	Global_15E98[0 /*65*/] = { Global_17C49.f_6C1.f_21B[0 /*65*/] };
	Global_15E98[1 /*65*/] = { Global_17C49.f_6C1.f_21B[1 /*65*/] };
	Global_15E98[2 /*65*/] = { Global_17C49.f_6C1.f_21B[2 /*65*/] };
}

int func_252(int iParam0, int iParam1, int iParam2)//Position - 0x2BA86
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
				if (func_149(iParam0, iParam1, iVar0))
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
				if (func_149(iParam0, iParam1, iVar1))
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
				return func_243(iParam0, iParam2);
			}
		}
		else
		{
			return func_9(iParam0, iParam1);
		}
	}
	return -99;
}

void func_253(int iParam0)//Position - 0x2BB27
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (Global_10A95)
		{
			func_53(&iParam0, -1, 0, 0);
		}
		else
		{
			func_254(iParam0);
		}
	}
}

void func_254(int iParam0)//Position - 0x2BB52
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<6> Var3;
	
	iVar0 = func_93(iParam0);
	if (func_90(iVar0) && !PED::IS_PED_INJURED(iParam0))
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
					if (func_28(&Var3, func_256(iVar1, iVar2), func_255(iVar0), iParam0, -1))
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

int func_255(int iParam0)//Position - 0x2BBE7
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

int func_256(int iParam0, int iParam1)//Position - 0x2BC1E
{
	if (iParam0 < 0 || iParam0 > 3)
	{
	}
	if (iParam1 < 0 || iParam1 > 31)
	{
	}
	return (iParam0 * 32 + iParam1);
}

void func_257(var uParam0, bool bParam1, bool bParam2)//Position - 0x2BC50
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	struct<8> Var5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	float fVar13;
	var uVar14;
	float fVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	float fVar20;
	
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (bParam1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_252.f_2) && !PED::IS_PED_INJURED(uParam0->f_252.f_2))
		{
			iVar0 = uParam0->f_252.f_2;
		}
	}
	if (!PED::IS_PED_INJURED(iVar0))
	{
		if (Global_10A95)
		{
			iVar1 = 0;
			while (iVar1 < 12)
			{
				if (iVar1 != 0)
				{
					if (bParam2)
					{
						PED::SET_PED_COMPONENT_VARIATION(iVar0, iVar1, Global_26CC52.f_D[iVar1], Global_26CC52[iVar1], Global_26CC52.f_1A[iVar1]);
					}
					else
					{
						PED::SET_PED_COMPONENT_VARIATION(iVar0, iVar1, uParam0->f_184.f_D[iVar1], uParam0->f_184[iVar1], uParam0->f_184.f_1A[iVar1]);
					}
				}
				iVar1++;
			}
			if (bParam2)
			{
				uVar2 = func_10(iVar0, Global_26CC52.f_D[11], Global_26CC52[11], 11);
			}
			else
			{
				uVar2 = func_10(iVar0, uParam0->f_184.f_D[11], uParam0->f_184[11], 11);
			}
			MISC::SET_BIT(&(uParam0->f_21D), 15);
			MISC::CLEAR_BIT(&(uParam0->f_21D), 28);
			uParam0->f_29A = 11;
			uParam0->f_299 = uVar2;
			if (bParam2)
			{
				iVar1 = 0;
				while (iVar1 < 9)
				{
					if (PED::GET_PED_PROP_INDEX(iVar0, iVar1) != Global_26CC52.f_27[iVar1] || PED::GET_PED_PROP_TEXTURE_INDEX(iVar0, iVar1) != Global_26CC52.f_31[iVar1])
					{
						if (Global_26CC52.f_27[iVar1] != -1)
						{
							PED::SET_PED_PROP_INDEX(iVar0, iVar1, Global_26CC52.f_27[iVar1], Global_26CC52.f_31[iVar1], NETWORK::NETWORK_IS_GAME_IN_PROGRESS());
						}
						else
						{
							PED::CLEAR_PED_PROP(iVar0, iVar1);
						}
					}
					iVar1++;
				}
			}
			else
			{
				iVar1 = 0;
				while (iVar1 < 9)
				{
					if (PED::GET_PED_PROP_INDEX(iVar0, iVar1) != uParam0->f_184.f_27[iVar1] || PED::GET_PED_PROP_TEXTURE_INDEX(iVar0, iVar1) != uParam0->f_184.f_31[iVar1])
					{
						func_242(iVar0, iVar1, uParam0->f_184.f_27[iVar1], uParam0->f_184.f_31[iVar1]);
					}
					iVar1++;
				}
			}
			if (bParam2)
			{
				if (Global_26CC52.f_41 != -1)
				{
					func_13(Global_26CC52.f_41, 1, Global_10A08);
				}
			}
			else if (uParam0->f_297 != -1)
			{
				func_13(uParam0->f_297, 1, Global_10A08);
			}
			MISC::SET_BIT(&(uParam0->f_21D), 14);
			if (bParam2)
			{
				func_15(740, Global_26CC52.f_3B, Global_10A08, 1);
				func_15(2035, Global_26CC52.f_3B, Global_10A08, 1);
				func_146(161, 1, -1, 1);
				func_15(741, Global_26CC52.f_3C, Global_10A08, 1);
				func_15(742, Global_26CC52.f_3D, Global_10A08, 1);
			}
			else
			{
				func_15(740, uParam0->f_184.f_3B, Global_10A08, 1);
				func_15(2035, uParam0->f_184.f_3B, Global_10A08, 1);
				func_146(161, 1, -1, 1);
				func_15(741, uParam0->f_184.f_3C, Global_10A08, 1);
				func_15(742, uParam0->f_184.f_3D, Global_10A08, 1);
			}
			if (bParam2)
			{
				func_86(Global_26CC52, -1);
			}
			uVar3 = PED::GET_PED_DRAWABLE_VARIATION(iVar0, 1);
			uVar4 = PED::GET_PED_TEXTURE_VARIATION(iVar0, 1);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(FILES::GET_HASH_NAME_FOR_COMPONENT(iVar0, 1, uVar3, uVar4), joaat("SHRINK_HEAD"), 0))
			{
				PED::GET_PED_HEAD_BLEND_DATA(iVar0, &Var5);
				if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("mp_m_freemode_01"))
				{
					PED::SET_PED_HEAD_BLEND_DATA(iVar0, 0, 0, 0, Var5.f_3, Var5.f_4, Var5.f_5, 0f, Var5.f_7, 0f, 0);
				}
				else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("mp_f_freemode_01"))
				{
					PED::SET_PED_HEAD_BLEND_DATA(iVar0, 21, 0, 0, Var5.f_3, Var5.f_4, Var5.f_5, 0f, Var5.f_7, 0f, 0);
				}
				iVar6 = 0;
				while (iVar6 < 20)
				{
					PED::_SET_PED_FACE_FEATURE(iVar0, iVar6, 0f);
					iVar6++;
				}
			}
			else
			{
				iVar7 = func_24(2079, Global_10A08, 0);
				iVar8 = func_24(2080, Global_10A08, 0);
				iVar9 = func_24(2081, Global_10A08, 0);
				uVar10 = func_24(2082, Global_10A08, 0);
				uVar11 = func_24(2083, Global_10A08, 0);
				uVar12 = func_24(2084, Global_10A08, 0);
				fVar13 = func_259(134, Global_10A08);
				uVar14 = func_259(135, Global_10A08);
				fVar15 = func_259(136, Global_10A08);
				iVar16 = func_89(160, Global_10A08);
				PED::SET_PED_HEAD_BLEND_DATA(iVar0, iVar7, iVar8, iVar9, uVar10, uVar11, uVar12, fVar13, uVar14, fVar15, iVar16);
				iVar17 = 0;
				while (iVar17 < 20)
				{
					iVar18 = iVar17;
					iVar19 = func_258(iVar18);
					fVar20 = func_259(iVar19, Global_10A08);
					PED::_SET_PED_FACE_FEATURE(iVar0, iVar18, fVar20);
					iVar17++;
				}
			}
		}
		else
		{
			func_145(iVar0, &(uParam0->f_184), 0);
		}
	}
}

int func_258(int iParam0)//Position - 0x2C0E2
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

float func_259(int iParam0, int iParam1)//Position - 0x2C1CE
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_25B858[iParam0 /*6*/][func_16(iParam1)];
	if (STATS::STAT_GET_FLOAT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0f;
}

int func_260()//Position - 0x2C1FA
{
	return Global_10B9B;
}

int func_261(int iParam0)//Position - 0x2C206
{
	if (func_262(iParam0))
	{
		return Global_26CCD6.f_D9 != 0;
	}
	return 0;
}

bool func_262(int iParam0)//Position - 0x2C223
{
	return Global_26CCD6.f_DA == iParam0;
}

void func_263(var uParam0)//Position - 0x2C234
{
	int iVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	var uVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	bool bVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	char* sVar26;
	bool bVar27;
	int iVar28;
	var uVar29;
	var uVar30;
	var uVar31;
	int iVar32;
	struct<14> Var33;
	var uVar34;
	var uVar35;
	var uVar36;
	var uVar37;
	var uVar38;
	var uVar39;
	var uVar40;
	struct<2> Var41;
	var uVar42;
	bool bVar43;
	char* sVar44;
	var uVar45;
	var uVar46;
	var uVar47;
	var uVar48;
	var uVar49;
	int iVar50;
	var uVar51;
	var uVar52;
	char* sVar53;
	char* sVar54;
	float fVar55;
	float fVar56;
	float fVar57;
	float fVar58;
	
	if (!func_709(1))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_252.f_2) && !PED::IS_PED_INJURED(uParam0->f_252.f_2))
	{
		iVar0 = uParam0->f_252.f_2;
	}
	func_573(uParam0, iVar0);
	if (PAD::_0x6CD79468A1E595C6(2))
	{
		func_614(uParam0);
	}
	func_572(&(uParam0->f_1C5), 300);
	func_571(&uVar1, &iVar2, &uVar3, &uVar4, 0);
	bVar5 = (((iVar2 < -64 && uParam0->f_1C5.f_8) || PAD::IS_CONTROL_JUST_PRESSED(2, 188)) || (PAD::IS_CONTROL_PRESSED(2, 188) && uParam0->f_1C5.f_8));
	bVar6 = (((iVar2 > 64 && uParam0->f_1C5.f_9) || PAD::IS_CONTROL_JUST_PRESSED(2, 187)) || (PAD::IS_CONTROL_PRESSED(2, 187) && uParam0->f_1C5.f_9));
	bVar7 = PAD::IS_CONTROL_JUST_PRESSED(2, 201);
	bVar8 = PAD::IS_CONTROL_JUST_PRESSED(2, 202);
	uVar9 = PAD::IS_CONTROL_JUST_PRESSED(2, 203);
	bVar10 = PAD::IS_CONTROL_JUST_PRESSED(2, 203);
	bVar11 = PAD::IS_CONTROL_JUST_PRESSED(2, 204);
	bVar12 = (iVar2 < -64 || iVar2 > 64);
	bVar13 = ((((((!HUD::IS_PAUSE_MENU_ACTIVE() && uParam0->f_67.f_1F != 6) && !PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !Global_15F9E.f_526) && !uParam0->f_67.f_19) && !NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE());
	bVar14 = bVar13;
	if (bVar14)
	{
		if (MISC::IS_BIT_SET(uParam0->f_21F, 0))
		{
			bVar14 = false;
		}
	}
	if (bVar13 == 1)
	{
		if (MISC::IS_BIT_SET(uParam0->f_21D, 13) || MISC::IS_BIT_SET(uParam0->f_21D, 25))
		{
			bVar13 = false;
		}
	}
	if (iLocal_61)
	{
		func_570(uParam0->f_238);
		func_569(uParam0->f_67.f_1, 1, 1);
		iLocal_61 = 0;
		MISC::SET_BIT(&(uParam0->f_21D), 25);
		MISC::SET_BIT(&(uParam0->f_21D), 26);
		uParam0->f_67.f_3 = uParam0->f_67.f_1;
	}
	func_568();
	if (bVar13)
	{
		func_565(0, 0, 0, !MISC::IS_BIT_SET(uParam0->f_21F, 6));
		if (func_564())
		{
			if (Global_26CF15 == uParam0->f_67.f_1)
			{
				bVar7 = true;
			}
			else
			{
				uParam0->f_67.f_1 = Global_26CF15;
				func_569(uParam0->f_67.f_1, 1, 1);
				MISC::CLEAR_BIT(&(uParam0->f_21E), 2);
				if (uParam0->f_1FC == 1)
				{
					uParam0->f_237 = func_563();
				}
				else
				{
					uParam0->f_238 = func_563();
				}
				if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && uParam0->f_1FC == 78) && !Global_26CC4E)
				{
					Global_26CC4F = Global_26CF15;
				}
				MISC::SET_BIT(&(uParam0->f_21D), 21);
				MISC::SET_BIT(&(uParam0->f_21D), 25);
				MISC::SET_BIT(&(uParam0->f_21D), 26);
				if (func_562(uParam0))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV", "HUD_AMMO_SHOP_SOUNDSET", 1);
				}
				else
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_CLOTHESSHOP_SOUNDSET", 1);
				}
			}
		}
		if (func_561(uParam0->f_1C5.f_8, 0, 0))
		{
			bVar5 = true;
		}
		if (func_560(uParam0->f_1C5.f_9, 0, 0))
		{
			bVar6 = true;
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 238) || func_559())
		{
			bVar8 = true;
		}
		if ((uVar9 && !MISC::IS_BIT_SET(uParam0->f_21F, 0)) || MISC::IS_BIT_SET(uParam0->f_21F, 0))
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (!MISC::IS_BIT_SET(uParam0->f_21F, 0))
				{
					uParam0->f_67.f_2 = 0;
					uParam0->f_21F = 0;
					MISC::SET_BIT(&(uParam0->f_21F), 0);
					MISC::SET_BIT(&(uParam0->f_21D), 25);
					if (func_562(uParam0))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "WEAPON_SELECT_ARMOR", "HUD_AMMO_SHOP_SOUNDSET", 1);
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_CLOTHESSHOP_SOUNDSET", 1);
					}
					iLocal_74 = 0;
				}
				else if (MISC::IS_BIT_SET(uParam0->f_21F, 1))
				{
					if (bVar7)
					{
						func_558(PLAYER::PLAYER_PED_ID(), uParam0->f_67.f_2);
						MISC::CLEAR_BIT(&(uParam0->f_21F), 1);
						MISC::SET_BIT(&(uParam0->f_21D), 25);
						if (func_562(uParam0))
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "WEAPON_SELECT_ARMOR", "HUD_AMMO_SHOP_SOUNDSET", 1);
						}
						else
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_CLOTHESSHOP_SOUNDSET", 1);
						}
						MISC::SET_BIT(&(uParam0->f_21F), 6);
						MISC::SET_BIT(&(uParam0->f_21F), 8);
						MemCopy(&Local_63, {Global_200000[func_557() /*8053*/].f_167C.f_4B4[uParam0->f_67.f_2 /*8*/]}, 16);
					}
					else if ((bVar8 || bVar5) || bVar6)
					{
						MISC::CLEAR_BIT(&(uParam0->f_21F), 1);
						MISC::SET_BIT(&(uParam0->f_21D), 25);
						if (func_562(uParam0))
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_AMMO_SHOP_SOUNDSET", 1);
						}
						else
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_FRONTEND_CLOTHESSHOP_SOUNDSET", 1);
						}
					}
				}
				else if (MISC::IS_BIT_SET(uParam0->f_21F, 5))
				{
					if (bVar7)
					{
						func_556(uParam0->f_67.f_2);
						MISC::SET_BIT(&(uParam0->f_21D), 25);
						MISC::CLEAR_BIT(&(uParam0->f_21F), 5);
						MISC::SET_BIT(&(uParam0->f_21F), 3);
						func_555("CSHOP_REMOVED", 4000, 0);
						if (func_562(uParam0))
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "WEAPON_SELECT_ARMOR", "HUD_AMMO_SHOP_SOUNDSET", 1);
						}
						else
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_CLOTHESSHOP_SOUNDSET", 1);
						}
					}
					else if ((bVar8 || bVar5) || bVar6)
					{
						MISC::CLEAR_BIT(&(uParam0->f_21F), 5);
						MISC::SET_BIT(&(uParam0->f_21D), 25);
						if (func_562(uParam0))
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_AMMO_SHOP_SOUNDSET", 1);
						}
						else
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_FRONTEND_CLOTHESSHOP_SOUNDSET", 1);
						}
					}
				}
				else if (MISC::IS_BIT_SET(uParam0->f_21F, 6))
				{
					if (func_550(&Local_72, &(Local_72.f_1), &(Local_72.f_2), 0, 0, &Local_63, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0))
					{
						StringCopy(&Local_63, MISC::GET_ONSCREEN_KEYBOARD_RESULT(), 64);
						Local_72.x = 0;
						Local_72.f_2 = 0;
						Local_72.f_1 = 0;
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_63))
						{
							func_549(uParam0->f_67.f_2, &Local_63);
							MISC::SET_BIT(&(uParam0->f_21D), 25);
							if (MISC::IS_BIT_SET(uParam0->f_21F, 8))
							{
								MISC::SET_BIT(&(uParam0->f_21F), 2);
							}
							else
							{
								MISC::SET_BIT(&(uParam0->f_21F), 7);
							}
							MISC::CLEAR_BIT(&(uParam0->f_21F), 6);
							MISC::CLEAR_BIT(&(uParam0->f_21F), 8);
							if (func_562(uParam0))
							{
								AUDIO::PLAY_SOUND_FRONTEND(-1, "WEAPON_SELECT_ARMOR", "HUD_AMMO_SHOP_SOUNDSET", 1);
							}
							else
							{
								AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_CLOTHESSHOP_SOUNDSET", 1);
							}
						}
						else
						{
							MISC::CLEAR_BIT(&(uParam0->f_21F), 6);
							if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_200000[func_557() /*8053*/].f_167C.f_4B4[uParam0->f_67.f_2 /*8*/])))
							{
								func_556(uParam0->f_67.f_2);
							}
							MISC::SET_BIT(&(uParam0->f_21D), 25);
							if (func_562(uParam0))
							{
								AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_AMMO_SHOP_SOUNDSET", 1);
							}
							else
							{
								AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_FRONTEND_CLOTHESSHOP_SOUNDSET", 1);
							}
						}
						StringCopy(&Local_63, "", 64);
					}
					if (Local_72.x == 2)
					{
						Local_72.x = 0;
						Local_72.f_2 = 0;
						Local_72.f_1 = 0;
						MISC::CLEAR_BIT(&(uParam0->f_21F), 6);
						if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_200000[func_557() /*8053*/].f_167C.f_4B4[uParam0->f_67.f_2 /*8*/])))
						{
							func_556(uParam0->f_67.f_2);
						}
						MISC::SET_BIT(&(uParam0->f_21D), 25);
						if (func_562(uParam0))
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_AMMO_SHOP_SOUNDSET", 1);
						}
						else
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_FRONTEND_CLOTHESSHOP_SOUNDSET", 1);
						}
					}
				}
				else if (bVar7)
				{
					if (func_548(uParam0->f_67.f_2))
					{
						MISC::SET_BIT(&(uParam0->f_21F), 1);
						MISC::SET_BIT(&(uParam0->f_21D), 25);
					}
					else
					{
						func_558(PLAYER::PLAYER_PED_ID(), uParam0->f_67.f_2);
						MISC::SET_BIT(&(uParam0->f_21D), 25);
						MISC::SET_BIT(&(uParam0->f_21F), 6);
						MISC::SET_BIT(&(uParam0->f_21F), 8);
						StringCopy(&Local_63, HUD::_GET_LABEL_TEXT("ITEM_NEW_OUT"), 64);
						StringConCat(&Local_63, " ", 64);
						StringIntConCat(&Local_63, uParam0->f_67.f_2, 64);
					}
					if (func_562(uParam0))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "WEAPON_SELECT_ARMOR", "HUD_AMMO_SHOP_SOUNDSET", 1);
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_CLOTHESSHOP_SOUNDSET", 1);
					}
				}
				else if (bVar11)
				{
					if (func_548(uParam0->f_67.f_2))
					{
						MISC::SET_BIT(&(uParam0->f_21F), 5);
						MISC::SET_BIT(&(uParam0->f_21D), 25);
					}
				}
				else if (bVar10)
				{
					if (func_548(uParam0->f_67.f_2))
					{
						MISC::SET_BIT(&(uParam0->f_21F), 6);
						MemCopy(&Local_63, {Global_200000[func_557() /*8053*/].f_167C.f_4B4[uParam0->f_67.f_2 /*8*/]}, 16);
						MISC::SET_BIT(&(uParam0->f_21D), 25);
					}
				}
				else if (bVar8)
				{
					MISC::CLEAR_BIT(&(uParam0->f_21F), 0);
					MISC::SET_BIT(&(uParam0->f_21D), 25);
					MISC::SET_BIT(&(uParam0->f_21D), 26);
					if (func_562(uParam0))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_AMMO_SHOP_SOUNDSET", 1);
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_FRONTEND_CLOTHESSHOP_SOUNDSET", 1);
					}
				}
				else if (bVar6)
				{
					if (bVar12)
					{
						SYSTEM::SETTIMERA(0);
						uParam0->f_67.f_A = 1;
					}
					uParam0->f_1C5.f_9 = 0;
					uParam0->f_1C5.f_4 = 0;
					uParam0->f_1C5.f_14 = MISC::GET_GAME_TIMER();
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						uParam0->f_1C5.f_18 = NETWORK::GET_NETWORK_TIME();
					}
					if (func_562(uParam0))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV", "HUD_AMMO_SHOP_SOUNDSET", 1);
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_CLOTHESSHOP_SOUNDSET", 1);
					}
					uParam0->f_67.f_2++;
					if (uParam0->f_67.f_2 >= 10)
					{
						uParam0->f_67.f_2 = 0;
					}
					MISC::SET_BIT(&(uParam0->f_21D), 25);
				}
				else if (bVar5)
				{
					if (bVar12)
					{
						SYSTEM::SETTIMERA(0);
						uParam0->f_67.f_A = 1;
					}
					uParam0->f_1C5.f_8 = 0;
					uParam0->f_1C5.f_4 = 0;
					uParam0->f_1C5.f_14 = MISC::GET_GAME_TIMER();
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						uParam0->f_1C5.f_18 = NETWORK::GET_NETWORK_TIME();
					}
					if (func_562(uParam0))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV", "HUD_AMMO_SHOP_SOUNDSET", 1);
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_CLOTHESSHOP_SOUNDSET", 1);
					}
					uParam0->f_67.f_2 = (uParam0->f_67.f_2 - 1);
					if (uParam0->f_67.f_2 < 0)
					{
						uParam0->f_67.f_2 = 9;
					}
					MISC::SET_BIT(&(uParam0->f_21D), 25);
				}
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && uParam0->f_1FC == 5)
		{
			if (bVar5)
			{
				if (uParam0->f_67.f_1 != -1)
				{
					if (bVar12)
					{
						SYSTEM::SETTIMERA(0);
						uParam0->f_67.f_A = 1;
					}
					uParam0->f_1C5.f_8 = 0;
					uParam0->f_1C5.f_4 = 0;
					uParam0->f_1C5.f_14 = MISC::GET_GAME_TIMER();
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						uParam0->f_1C5.f_18 = NETWORK::GET_NETWORK_TIME();
					}
					if (func_562(uParam0))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV", "HUD_AMMO_SHOP_SOUNDSET", 1);
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_CLOTHESSHOP_SOUNDSET", 1);
					}
					iVar16 = (uParam0->f_67.f_1 - 1);
					bVar17 = false;
					iVar15 = iVar16;
					while (iVar15 >= 0)
					{
						if (func_548(iVar15))
						{
							uParam0->f_67.f_1 = iVar15;
							iVar15 = -1;
							bVar17 = true;
						}
						iVar15 = (iVar15 + -1);
					}
					if (!bVar17)
					{
						iVar15 = 9;
						while (iVar15 >= iVar16)
						{
							if (func_548(iVar15))
							{
								uParam0->f_67.f_1 = iVar15;
								iVar15 = iVar16;
								bVar17 = true;
							}
							iVar15 = (iVar15 + -1);
						}
					}
					MISC::SET_BIT(&(uParam0->f_21D), 30);
					MISC::SET_BIT(&(uParam0->f_21D), 26);
					MISC::SET_BIT(&(uParam0->f_21D), 21);
					MISC::SET_BIT(&(uParam0->f_21D), 25);
					MISC::SET_BIT(&(uParam0->f_21D), 29);
				}
			}
			else if (bVar6)
			{
				if (uParam0->f_67.f_1 != -1)
				{
					if (bVar12)
					{
						SYSTEM::SETTIMERA(0);
						uParam0->f_67.f_A = 1;
					}
					uParam0->f_1C5.f_9 = 0;
					uParam0->f_1C5.f_4 = 0;
					uParam0->f_1C5.f_14 = MISC::GET_GAME_TIMER();
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						uParam0->f_1C5.f_18 = NETWORK::GET_NETWORK_TIME();
					}
					if (func_562(uParam0))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV", "HUD_AMMO_SHOP_SOUNDSET", 1);
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_CLOTHESSHOP_SOUNDSET", 1);
					}
					iVar19 = uParam0->f_67.f_1 + 1;
					bVar20 = false;
					iVar18 = iVar19;
					while (iVar18 <= 9)
					{
						if (func_548(iVar18))
						{
							uParam0->f_67.f_1 = iVar18;
							iVar18 = 10;
							bVar20 = true;
						}
						iVar18++;
					}
					if (!bVar20)
					{
						iVar18 = 0;
						while (iVar18 <= iVar19)
						{
							if (func_548(iVar18))
							{
								uParam0->f_67.f_1 = iVar18;
								iVar18 = iVar19 + 1;
								bVar20 = true;
							}
							iVar18++;
						}
					}
					MISC::SET_BIT(&(uParam0->f_21D), 30);
					MISC::SET_BIT(&(uParam0->f_21D), 26);
					MISC::SET_BIT(&(uParam0->f_21D), 21);
					MISC::SET_BIT(&(uParam0->f_21D), 25);
					MISC::SET_BIT(&(uParam0->f_21D), 29);
				}
			}
			else if (bVar7)
			{
				if (uParam0->f_67.f_1 != -1)
				{
					if (func_562(uParam0))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "WEAPON_SELECT_ARMOR", "HUD_AMMO_SHOP_SOUNDSET", 1);
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_CLOTHESSHOP_SOUNDSET", 1);
					}
					func_545(uParam0, 0);
					MISC::SET_BIT(&(uParam0->f_21D), 25);
					MISC::SET_BIT(&(uParam0->f_21D), 26);
				}
			}
		}
		else if (bVar6 && !MISC::IS_BIT_SET(uParam0->f_21D, 17))
		{
			if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_52(uParam0->f_1FC)) && !Global_26CC4E)
			{
				Global_26CC4F++;
				while (Global_26CC4F < func_544(uParam0->f_1FC) && !MISC::IS_BIT_SET(Global_26CC50, Global_26CC4F))
				{
					Global_26CC4F++;
				}
				if (Global_26CC4F >= func_544(uParam0->f_1FC))
				{
					Global_26CC4F = 0;
				}
				while (Global_26CC4F < func_544(uParam0->f_1FC) && !MISC::IS_BIT_SET(Global_26CC50, Global_26CC4F))
				{
					Global_26CC4F++;
				}
				if (Global_26CC4F >= func_544(uParam0->f_1FC))
				{
					Global_26CC4F = 0;
				}
				uParam0->f_67.f_1 = Global_26CC4F;
				uParam0->f_2A0 = func_563();
				if (bVar12)
				{
					SYSTEM::SETTIMERA(0);
					uParam0->f_67.f_A = 1;
				}
				uParam0->f_1C5.f_9 = 0;
				uParam0->f_1C5.f_4 = 0;
				uParam0->f_1C5.f_14 = MISC::GET_GAME_TIMER();
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					uParam0->f_1C5.f_18 = NETWORK::GET_NETWORK_TIME();
				}
				MISC::SET_BIT(&(uParam0->f_21D), 30);
				MISC::SET_BIT(&(uParam0->f_21D), 25);
				if (func_562(uParam0))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV", "HUD_AMMO_SHOP_SOUNDSET", 1);
				}
				else
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_CLOTHESSHOP_SOUNDSET", 1);
				}
			}
			else if (func_543(&Global_26C92B, uParam0->f_1FC, uParam0->f_67.f_1, &(uParam0->f_67.f_1), 1))
			{
				if (bVar12)
				{
					SYSTEM::SETTIMERA(0);
					uParam0->f_67.f_A = 1;
				}
				uParam0->f_1C5.f_9 = 0;
				uParam0->f_1C5.f_4 = 0;
				uParam0->f_1C5.f_14 = MISC::GET_GAME_TIMER();
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					uParam0->f_1C5.f_18 = NETWORK::GET_NETWORK_TIME();
				}
				MISC::SET_BIT(&(uParam0->f_21D), 30);
				MISC::SET_BIT(&(uParam0->f_21D), 26);
				MISC::SET_BIT(&(uParam0->f_21D), 21);
				MISC::SET_BIT(&(uParam0->f_21D), 25);
				MISC::SET_BIT(&(uParam0->f_21D), 29);
				if (func_562(uParam0))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV", "HUD_AMMO_SHOP_SOUNDSET", 1);
				}
				else
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_CLOTHESSHOP_SOUNDSET", 1);
				}
			}
		}
		else if (bVar5 && !MISC::IS_BIT_SET(uParam0->f_21D, 17))
		{
			if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_52(uParam0->f_1FC)) && !Global_26CC4E)
			{
				Global_26CC4F = (Global_26CC4F - 1);
				while (Global_26CC4F >= 0 && !MISC::IS_BIT_SET(Global_26CC50, Global_26CC4F))
				{
					Global_26CC4F = (Global_26CC4F - 1);
				}
				if (Global_26CC4F < 0)
				{
					Global_26CC4F = (func_544(uParam0->f_1FC) - 1);
				}
				while (Global_26CC4F >= 0 && !MISC::IS_BIT_SET(Global_26CC50, Global_26CC4F))
				{
					Global_26CC4F = (Global_26CC4F - 1);
				}
				if (Global_26CC4F < 0)
				{
					Global_26CC4F = 0;
				}
				uParam0->f_67.f_1 = Global_26CC4F;
				uParam0->f_2A0 = func_563();
				if (bVar12)
				{
					SYSTEM::SETTIMERA(0);
					uParam0->f_67.f_A = 1;
				}
				uParam0->f_1C5.f_8 = 0;
				uParam0->f_1C5.f_4 = 0;
				uParam0->f_1C5.f_14 = MISC::GET_GAME_TIMER();
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					uParam0->f_1C5.f_18 = NETWORK::GET_NETWORK_TIME();
				}
				MISC::SET_BIT(&(uParam0->f_21D), 30);
				MISC::SET_BIT(&(uParam0->f_21D), 25);
				if (func_562(uParam0))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV", "HUD_AMMO_SHOP_SOUNDSET", 1);
				}
				else
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_CLOTHESSHOP_SOUNDSET", 1);
				}
			}
			else if (func_541(&Global_26C92B, uParam0->f_1FC, uParam0->f_67.f_1, &(uParam0->f_67.f_1), 1))
			{
				if (bVar12)
				{
					SYSTEM::SETTIMERA(0);
					uParam0->f_67.f_A = 1;
				}
				uParam0->f_1C5.f_8 = 0;
				uParam0->f_1C5.f_4 = 0;
				uParam0->f_1C5.f_14 = MISC::GET_GAME_TIMER();
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					uParam0->f_1C5.f_18 = NETWORK::GET_NETWORK_TIME();
				}
				MISC::SET_BIT(&(uParam0->f_21D), 30);
				MISC::SET_BIT(&(uParam0->f_21D), 26);
				MISC::SET_BIT(&(uParam0->f_21D), 21);
				MISC::SET_BIT(&(uParam0->f_21D), 25);
				MISC::SET_BIT(&(uParam0->f_21D), 29);
				if (func_562(uParam0))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV", "HUD_AMMO_SHOP_SOUNDSET", 1);
				}
				else
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_CLOTHESSHOP_SOUNDSET", 1);
				}
			}
		}
		else if (bVar7)
		{
			if (uParam0->f_1FC == 1)
			{
				uParam0->f_2A0 = 0;
				uParam0->f_67.f_3 = uParam0->f_67.f_1;
				uParam0->f_1FC = Global_26CB8D[uParam0->f_67.f_1];
				uParam0->f_238 = 0;
				func_653(&(uParam0->f_1F5), &(uParam0->f_1F2), &(uParam0->f_1F3), &(uParam0->f_1F9), &(uParam0->f_1F8), *uParam0, &(uParam0->f_AA), &Global_26C92B, uParam0->f_67, uParam0->f_1FC, 1);
				if (!func_612(&Global_26C92B, &(uParam0->f_67.f_1), uParam0->f_1FC))
				{
					if (!func_611(&Global_26C92B, uParam0->f_1FC, &(uParam0->f_67.f_1)))
					{
						uParam0->f_67.f_1 = -1;
					}
				}
				if (func_52(uParam0->f_1FC) && !Global_26CC4E)
				{
					uParam0->f_67.f_1 = 0;
				}
				MISC::SET_BIT(&(uParam0->f_21D), 25);
				MISC::SET_BIT(&(uParam0->f_21D), 29);
				MISC::SET_BIT(&(uParam0->f_21D), 26);
				MISC::SET_BIT(&(uParam0->f_21D), 21);
				uParam0->f_29D = 0;
				if ((((((((((uParam0->f_1FC == 113 || uParam0->f_1FC == 114) || uParam0->f_1FC == 115) || uParam0->f_1FC == 116) || uParam0->f_1FC == 117) || uParam0->f_1FC == 118) || uParam0->f_1FC == 119) || uParam0->f_1FC == 120) || uParam0->f_1FC == 121) || uParam0->f_1FC == 125) || uParam0->f_1FC == 127)
				{
					uParam0->f_29D = 1;
				}
				if (func_562(uParam0))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "WEAPON_SELECT_ARMOR", "HUD_AMMO_SHOP_SOUNDSET", 1);
				}
				else
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_CLOTHESSHOP_SOUNDSET", 1);
				}
			}
			else if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_52(uParam0->f_1FC)) && !Global_26CC4E)
			{
				Global_26CC4E = 1;
				func_653(&(uParam0->f_1F5), &(uParam0->f_1F2), &(uParam0->f_1F3), &(uParam0->f_1F9), &(uParam0->f_1F8), *uParam0, &(uParam0->f_AA), &Global_26C92B, uParam0->f_67, uParam0->f_1FC, 1);
				if (!func_612(&Global_26C92B, &(uParam0->f_67.f_1), uParam0->f_1FC))
				{
					if (!func_611(&Global_26C92B, uParam0->f_1FC, &(uParam0->f_67.f_1)))
					{
						uParam0->f_67.f_1 = -1;
					}
				}
				MISC::SET_BIT(&(uParam0->f_21D), 25);
				MISC::SET_BIT(&(uParam0->f_21D), 29);
				MISC::SET_BIT(&(uParam0->f_21D), 26);
				MISC::SET_BIT(&(uParam0->f_21D), 21);
				if (func_562(uParam0))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "WEAPON_SELECT_ARMOR", "HUD_AMMO_SHOP_SOUNDSET", 1);
				}
				else
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_CLOTHESSHOP_SOUNDSET", 1);
				}
			}
			else if (uParam0->f_1FC == 3)
			{
				if (MISC::IS_BIT_SET(uParam0->f_21E, 1))
				{
					func_555("CSHOP_LOCK", 4000, 0);
					if (func_562(uParam0))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_AMMO_SHOP_SOUNDSET", 1);
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_CLOTHESSHOP_SOUNDSET", 1);
					}
				}
				else if (MISC::IS_BIT_SET(uParam0->f_21E, 0))
				{
					func_555("CSHOP_HAVE", 4000, 0);
					if (func_562(uParam0))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_AMMO_SHOP_SOUNDSET", 1);
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_CLOTHESSHOP_SOUNDSET", 1);
					}
				}
				else if (uParam0->f_67.f_1 == 0)
				{
					if (uParam0->f_67.f_1F != 6)
					{
						func_50(MISC::GET_HASH_KEY("crewLogo"), iVar0);
						uParam0->f_297 = -1;
						MISC::SET_BIT(&(uParam0->f_21D), 14);
						MISC::CLEAR_BIT(&(uParam0->f_21D), 15);
						MISC::SET_BIT(&(uParam0->f_21D), 25);
						MISC::SET_BIT(&(uParam0->f_21D), 29);
						iLocal_74 = 0;
						if (func_562(uParam0))
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "WEAPON_SELECT_ARMOR", "HUD_AMMO_SHOP_SOUNDSET", 1);
							AUDIO::PLAY_SOUND_FRONTEND(-1, "WEAPON_PURCHASE", "HUD_AMMO_SHOP_SOUNDSET", 1);
						}
						else
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_CLOTHESSHOP_SOUNDSET", 1);
						}
					}
				}
				else
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						iVar21 = func_24(1482, -1, 0);
					}
					if (MISC::IS_BIT_SET(iVar21, uParam0->f_67.f_1) || func_529(uParam0))
					{
						if (uParam0->f_67.f_1F != 6)
						{
							func_50(MISC::GET_HASH_KEY("crewLogo"), iVar0);
							iVar22 = func_527(uParam0->f_235, iVar0, (uParam0->f_67.f_1 - 1));
							func_13(iVar22, 1, -1);
							uParam0->f_297 = iVar22;
							MISC::SET_BIT(&(uParam0->f_21D), 14);
							MISC::CLEAR_BIT(&(uParam0->f_21D), 15);
							MISC::SET_BIT(&(uParam0->f_21D), 25);
							MISC::SET_BIT(&(uParam0->f_21D), 29);
							iLocal_74 = 0;
							if (func_562(uParam0))
							{
								AUDIO::PLAY_SOUND_FRONTEND(-1, "WEAPON_SELECT_ARMOR", "HUD_AMMO_SHOP_SOUNDSET", 1);
								AUDIO::PLAY_SOUND_FRONTEND(-1, "WEAPON_PURCHASE", "HUD_AMMO_SHOP_SOUNDSET", 1);
							}
							else
							{
								AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_CLOTHESSHOP_SOUNDSET", 1);
							}
						}
					}
					else if (uParam0->f_67.f_15)
					{
						func_555("CSHOP_AFFORD", 4000, 0);
						func_525(MISC::GET_HASH_KEY(&(Global_15F9E.f_4EB)), Global_15F9E.f_4EF, MISC::GET_HASH_KEY(func_526(*uParam0)));
						func_521(0, 10, 3);
						if (func_562(uParam0))
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_AMMO_SHOP_SOUNDSET", 1);
						}
						else
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_CLOTHESSHOP_SOUNDSET", 1);
						}
					}
					else
					{
						func_555("CSHOP_INVALID", 4000, 0);
						if (func_562(uParam0))
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_AMMO_SHOP_SOUNDSET", 1);
						}
						else
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_CLOTHESSHOP_SOUNDSET", 1);
						}
					}
				}
			}
			else if (uParam0->f_67.f_1 > -1 && !Global_26C8BA[uParam0->f_67.f_1])
			{
				iVar23 = 0;
				if (((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_26C92B.f_6F[uParam0->f_67.f_1] == 8) && Global_26C92B[uParam0->f_67.f_1] >= func_42(uParam0->f_235, 8)) && Global_26C6FE[uParam0->f_67.f_1] == 0)
				{
					iVar24 = func_520(uParam0->f_235, Global_26C92B[uParam0->f_67.f_1], 0);
					Stack.Push((iVar24 != -99 && iVar24 < func_42(uParam0->f_235, 11)));
					Stack.Push(uParam0->f_235);
					Stack.Push(11);
					Stack.Push(iVar24);
					Call_Loc(uParam0->f_1F2);
					if (StackVal && !StackVal)
					{
						iVar23 = 1;
					}
				}
				if (func_516(uParam0->f_220))
				{
					iVar23 = 1;
				}
				if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_515()) && Global_26C92B.f_DF[uParam0->f_67.f_1] == 0)
				{
					iVar25 = 0;
					if (Global_26C84B[uParam0->f_67.f_1] != 0 && Global_26C92B.f_6F[uParam0->f_67.f_1] != 12)
					{
						iVar25++;
						if (((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_26C84B[uParam0->f_67.f_1], joaat("ALT_JBIB"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_26C84B[uParam0->f_67.f_1], joaat("ALT_SPECIAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_26C84B[uParam0->f_67.f_1], joaat("ALT_SPECIAL_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_26C84B[uParam0->f_67.f_1], joaat("ALT_VEST"), 0))
						{
							iVar25++;
						}
						if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_26C84B[uParam0->f_67.f_1], joaat("ALT_SPECIAL_2"), 0))
						{
							iVar25++;
						}
					}
					else if (Global_26C92B.f_6F[uParam0->f_67.f_1] == 8 && uParam0->f_235 == joaat("mp_m_freemode_01"))
					{
						if (((Global_26C92B[uParam0->f_67.f_1] >= 112 && Global_26C92B[uParam0->f_67.f_1] <= 127) || (Global_26C92B[uParam0->f_67.f_1] >= 64 && Global_26C92B[uParam0->f_67.f_1] <= 79)) || (Global_26C92B[uParam0->f_67.f_1] >= 176 && Global_26C92B[uParam0->f_67.f_1] <= 191))
						{
							iVar25++;
						}
					}
					func_514(&sVar26, uParam0->f_220, uParam0->f_235, 1, Global_26C92B.f_6F[uParam0->f_67.f_1], iVar25, -1, -1);
					if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS(&sVar26))
					{
						iVar23 = 1;
					}
				}
				Stack.Push(iVar23);
				Stack.Push(uParam0->f_235);
				Stack.Push(Global_26C92B.f_6F[uParam0->f_67.f_1]);
				Stack.Push(Global_26C92B[uParam0->f_67.f_1]);
				Call_Loc(uParam0->f_1F2);
				if ((StackVal || !StackVal) && Global_26C92B.f_DF[uParam0->f_67.f_1] == 0)
				{
					func_555("CSHOP_LOCK", 4000, 0);
					if (func_562(uParam0))
					{
						if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
						{
							if ((ENTITY::DOES_ENTITY_EXIST(uParam0->f_C) && !PED::IS_PED_INJURED(uParam0->f_C)) && func_513(0))
							{
								AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(uParam0->f_C, "SHOP_OUT_OF_STOCK", "SPEECH_PARAMS_FORCE", 1);
							}
						}
						AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_AMMO_SHOP_SOUNDSET", 1);
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_CLOTHESSHOP_SOUNDSET", 1);
					}
				}
				else if ((MISC::IS_BIT_SET(Global_10A0A[1 /*14*/].f_6, 7) && !MISC::IS_BIT_SET(uParam0->f_21D, 17)) && func_512())
				{
					func_555("CSHOP_DFULL", 4000, 0);
					if (func_562(uParam0))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_AMMO_SHOP_SOUNDSET", 1);
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_CLOTHESSHOP_SOUNDSET", 1);
					}
				}
				else if (MISC::IS_BIT_SET(uParam0->f_21D, 17))
				{
					MISC::CLEAR_BIT(&(uParam0->f_21D), 17);
					func_507(uParam0);
					iLocal_74 = 0;
					MISC::CLEAR_BIT(&(uParam0->f_21D), 21);
					if (func_562(uParam0))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "WEAPON_SELECT_ARMOR", "HUD_AMMO_SHOP_SOUNDSET", 1);
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_CLOTHESSHOP_SOUNDSET", 1);
					}
				}
				else
				{
					if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						func_257(uParam0, 0, 0);
					}
					else if (uParam0->f_29F == 0 || MONEY::NETWORK_CAN_SPEND_MONEY(uParam0->f_29F, 0, 1, 0, -1))
					{
						func_257(uParam0, 0, 0);
					}
					if (func_432(uParam0))
					{
						if (uParam0->f_67.f_1F != 6)
						{
							if ((func_152(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), Global_26C92B.f_6F[uParam0->f_67.f_1], Global_26C92B[uParam0->f_67.f_1]) && !func_430(uParam0, 14)) && !func_429(PLAYER::PLAYER_PED_ID()))
							{
								MISC::SET_BIT(&(uParam0->f_21D), 17);
								func_373(uParam0, 1);
								func_372(-1);
								func_371(201, "ITEM_YES", -1);
								func_371(202, "ITEM_NO", -1);
								if (MISC::IS_BIT_SET(uParam0->f_21E, 3) && !MISC::IS_STRING_NULL_OR_EMPTY(func_370(&(uParam0->f_220), 0)))
								{
									func_555("CSHOP_EQUIPDLC", 0, 0);
									func_369(func_370(&(uParam0->f_220), 0));
								}
								else
								{
									func_555("CSHOP_EQUIP", 0, 0);
								}
								if (func_562(uParam0))
								{
									AUDIO::PLAY_SOUND_FRONTEND(-1, "WEAPON_SELECT_ARMOR", "HUD_AMMO_SHOP_SOUNDSET", 1);
									AUDIO::PLAY_SOUND_FRONTEND(-1, "WEAPON_PURCHASE", "HUD_AMMO_SHOP_SOUNDSET", 1);
								}
								else
								{
									AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_CLOTHESSHOP_SOUNDSET", 1);
								}
							}
							else
							{
								MISC::CLEAR_BIT(&(uParam0->f_21D), 17);
								MISC::SET_BIT(&(uParam0->f_21D), 25);
								func_507(uParam0);
								iLocal_74 = 0;
								if (func_562(uParam0))
								{
									AUDIO::PLAY_SOUND_FRONTEND(-1, "WEAPON_SELECT_ARMOR", "HUD_AMMO_SHOP_SOUNDSET", 1);
									AUDIO::PLAY_SOUND_FRONTEND(-1, "WEAPON_PURCHASE", "HUD_AMMO_SHOP_SOUNDSET", 1);
								}
								else
								{
									AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_CLOTHESSHOP_SOUNDSET", 1);
								}
							}
						}
						func_368(uParam0);
					}
					else if (uParam0->f_67.f_F)
					{
						if (((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_26C92B.f_6F[uParam0->f_67.f_1] == 14) && Global_26C92B[uParam0->f_67.f_1] == 0) && Global_26C92B.f_DF[uParam0->f_67.f_1] == 5)
						{
							bVar27 = !func_367(PLAYER::PLAYER_PED_ID());
						}
						else if (Global_26C92B.f_DF[uParam0->f_67.f_1] == 11)
						{
							bVar27 = !func_366(PLAYER::PLAYER_PED_ID(), &iVar28, -99);
						}
						else if (Global_26C92B.f_DF[uParam0->f_67.f_1] == 4)
						{
							bVar27 = !func_365(PLAYER::PLAYER_PED_ID());
						}
						else if (Global_26C92B.f_DF[uParam0->f_67.f_1] == 17)
						{
							bVar27 = !func_364(PLAYER::PLAYER_PED_ID());
						}
						else if (MISC::IS_BIT_SET(uParam0->f_21E, 4) && Global_26C92B.f_6F[uParam0->f_67.f_1] != 12)
						{
							bVar27 = func_25(Global_26C76D[uParam0->f_67.f_1], -1);
						}
						else
						{
							bVar27 = MISC::IS_BIT_SET(uParam0->f_21E, 0);
						}
						if (bVar27 == 0)
						{
							if (uParam0->f_67.f_15)
							{
								func_555("CSHOP_AFFORD", 4000, 0);
								func_525(MISC::GET_HASH_KEY(&(Global_15F9E.f_4EB)), Global_15F9E.f_4EF, MISC::GET_HASH_KEY(func_526(*uParam0)));
								func_521(0, 10, 3);
								if (func_562(uParam0))
								{
									AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_AMMO_SHOP_SOUNDSET", 1);
								}
								else
								{
									AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_CLOTHESSHOP_SOUNDSET", 1);
								}
							}
							else if (uParam0->f_67.f_18)
							{
								func_555("CSHOP_FAIL", 4000, 0);
								if (func_562(uParam0))
								{
									AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_AMMO_SHOP_SOUNDSET", 1);
								}
								else
								{
									AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_CLOTHESSHOP_SOUNDSET", 1);
								}
							}
							else
							{
								MISC::SET_BIT(&(uParam0->f_21D), 25);
								MISC::SET_BIT(&(uParam0->f_21D), 29);
								func_373(uParam0, 1);
								if (uParam0->f_1FC == 77)
								{
									func_257(uParam0, 1, 0);
								}
								if (MISC::IS_BIT_SET(uParam0->f_21E, 6) && ((!MISC::IS_BIT_SET(uParam0->f_21E, 4) || Global_26C92B.f_6F[uParam0->f_67.f_1] == 12) || func_44(Global_26C76D[uParam0->f_67.f_1], -1)))
								{
									if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
									{
										if (MISC::IS_BIT_SET(Global_10A0A[1 /*14*/].f_6, 6))
										{
											Stack.Push(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()));
											Stack.Push(Global_26C92B.f_6F[uParam0->f_67.f_1]);
											Stack.Push(Global_26C92B[uParam0->f_67.f_1]);
											Stack.Push(1);
											Stack.Push(1);
											Call_Loc(uParam0->f_1F1);
											if (MISC::IS_BIT_SET(uParam0->f_21E, 4) && Global_26C92B.f_6F[uParam0->f_67.f_1] != 12)
											{
												func_344(Global_26C76D[uParam0->f_67.f_1], 1, 0, 1, 0, -1);
											}
											if (!func_69(*uParam0, 3, 0))
											{
												func_343(*uParam0, 3, 0);
											}
										}
									}
									func_545(uParam0, 0);
									if (MISC::IS_BIT_SET(uParam0->f_21E, 3) && Global_26C6FE[uParam0->f_67.f_1] != 0)
									{
										func_15(1743, Global_26C6FE[uParam0->f_67.f_1], -1, 1);
									}
									func_545(uParam0, 1);
								}
								MISC::CLEAR_BIT(&(uParam0->f_21D), 21);
								StringCopy(&(uParam0->f_67.f_B), "CSHOP_SET", 16);
								if (func_562(uParam0))
								{
									AUDIO::PLAY_SOUND_FRONTEND(-1, "WEAPON_SELECT_ARMOR", "HUD_AMMO_SHOP_SOUNDSET", 1);
								}
								else
								{
									AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_CLOTHESSHOP_SOUNDSET", 1);
								}
							}
						}
						else
						{
							uParam0->f_67.f_F = 0;
							func_555("CSHOP_HAVE", 4000, 0);
							if (func_562(uParam0))
							{
								AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_AMMO_SHOP_SOUNDSET", 1);
							}
							else
							{
								AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_CLOTHESSHOP_SOUNDSET", 1);
							}
						}
						func_368(uParam0);
					}
					else if (uParam0->f_67.f_15)
					{
						func_555("CSHOP_AFFORD", 4000, 0);
						func_525(MISC::GET_HASH_KEY(&(Global_15F9E.f_4EB)), Global_15F9E.f_4EF, MISC::GET_HASH_KEY(func_526(*uParam0)));
						func_521(0, 10, 3);
						if (func_562(uParam0))
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_AMMO_SHOP_SOUNDSET", 1);
						}
						else
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_CLOTHESSHOP_SOUNDSET", 1);
						}
					}
					else if (uParam0->f_67.f_18)
					{
						func_555("CSHOP_FAIL", 4000, 0);
						if (func_562(uParam0))
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_AMMO_SHOP_SOUNDSET", 1);
						}
						else
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_CLOTHESSHOP_SOUNDSET", 1);
						}
					}
					else
					{
						func_555("CSHOP_INVALID", 4000, 0);
						if (func_562(uParam0))
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_AMMO_SHOP_SOUNDSET", 1);
						}
						else
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_CLOTHESSHOP_SOUNDSET", 1);
						}
					}
				}
			}
		}
	}
	if (bVar14)
	{
		if (bVar8)
		{
			if (func_562(uParam0))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_AMMO_SHOP_SOUNDSET", 1);
			}
			else
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_FRONTEND_CLOTHESSHOP_SOUNDSET", 1);
			}
			if (MISC::IS_BIT_SET(uParam0->f_21D, 17))
			{
				if (uParam0->f_67.f_15)
				{
					StringCopy(&(uParam0->f_67.f_B), "CSHOP_GIVE", 16);
				}
				else
				{
					StringCopy(&(uParam0->f_67.f_B), "CSHOP_BUY", 16);
				}
				uParam0->f_67.f_F = 0;
				MISC::SET_BIT(&(uParam0->f_21D), 25);
				MISC::SET_BIT(&(uParam0->f_21D), 29);
				MISC::SET_BIT(&(uParam0->f_21D), 26);
				MISC::CLEAR_BIT(&(uParam0->f_21D), 21);
				MISC::CLEAR_BIT(&(uParam0->f_21D), 17);
				iLocal_74 = 0;
			}
			else if ((uParam0->f_1FC == 0 || uParam0->f_1FC == 1) || ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && uParam0->f_1FC == 78) && !Global_26CC4E))
			{
				uParam0->f_67.f_1F = 6;
				iLocal_74 = 0;
				func_257(uParam0, 0, 0);
				func_253(PLAYER::PLAYER_PED_ID());
				if (!Global_10A95)
				{
					func_135(PLAYER::PLAYER_PED_ID(), 1);
				}
			}
			else if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_52(uParam0->f_1FC)) && Global_26CC4E)
			{
				Global_26CC4E = 0;
				func_653(&(uParam0->f_1F5), &(uParam0->f_1F2), &(uParam0->f_1F3), &(uParam0->f_1F9), &(uParam0->f_1F8), *uParam0, &(uParam0->f_AA), &Global_26C92B, uParam0->f_67, uParam0->f_1FC, 1);
				uParam0->f_67.f_1 = Global_26CC4F;
				MISC::SET_BIT(&(uParam0->f_21D), 25);
				MISC::SET_BIT(&(uParam0->f_21D), 29);
			}
			else
			{
				uParam0->f_1FC = 1;
				func_653(&(uParam0->f_1F5), &(uParam0->f_1F2), &(uParam0->f_1F3), &(uParam0->f_1F9), &(uParam0->f_1F8), *uParam0, &(uParam0->f_AA), &Global_26C92B, uParam0->f_67, uParam0->f_1FC, 1);
				uParam0->f_67.f_1 = uParam0->f_67.f_3;
				MISC::SET_BIT(&(uParam0->f_21D), 25);
				MISC::SET_BIT(&(uParam0->f_21D), 29);
			}
		}
	}
	if (uParam0->f_67.f_1F < 6)
	{
		HUD::SHOW_HUD_COMPONENT_THIS_FRAME(3);
		HUD::SHOW_HUD_COMPONENT_THIS_FRAME(4);
		HUD::SHOW_HUD_COMPONENT_THIS_FRAME(5);
		HUD::SHOW_HUD_COMPONENT_THIS_FRAME(13);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			HUD::SET_MULTIPLAYER_WALLET_CASH();
			HUD::SET_MULTIPLAYER_BANK_CASH();
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && uParam0->f_67.f_1F == 6)
	{
		HUD::REMOVE_MULTIPLAYER_WALLET_CASH();
		HUD::REMOVE_MULTIPLAYER_BANK_CASH();
	}
	if (MISC::IS_BIT_SET(uParam0->f_21D, 13) && !MISC::IS_BIT_SET(uParam0->f_21D, 25))
	{
		func_342(&uVar29);
		if (MISC::GET_HASH_KEY(&uVar29) != MISC::GET_HASH_KEY("CSHOP_BUY"))
		{
			uParam0->f_67.f_1F = 6;
		}
	}
	if (!MISC::IS_BIT_SET(uParam0->f_21D, 29))
	{
		if ((MISC::IS_BIT_SET(uParam0->f_21D, 25) && !MISC::IS_BIT_SET(uParam0->f_21D, 14)) && !uParam0->f_67.f_19)
		{
			if (uParam0->f_1FC == 138)
			{
				func_653(&(uParam0->f_1F5), &(uParam0->f_1F2), &(uParam0->f_1F3), &(uParam0->f_1F9), &(uParam0->f_1F8), *uParam0, &(uParam0->f_AA), &Global_26C92B, uParam0->f_67, uParam0->f_1FC, 1);
			}
			if (uParam0->f_67.f_F)
			{
				func_614(uParam0);
			}
			else
			{
				if ((MISC::IS_BIT_SET(uParam0->f_21D, 26) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) && (uParam0->f_1FC >= 61 && uParam0->f_1FC <= 78))
				{
				}
				else
				{
					func_257(uParam0, 1, 0);
				}
				func_614(uParam0);
			}
			if ((MISC::IS_BIT_SET(uParam0->f_21D, 26) && uParam0->f_1FC != 1) && ((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || !func_52(uParam0->f_1FC)) || Global_26CC4E))
			{
				if (uParam0->f_1FC == 3)
				{
					uVar30 = func_527(uParam0->f_235, iVar0, (uParam0->f_67.f_1 - 1));
					MISC::SET_BIT(&(uParam0->f_21D), 14);
					MISC::CLEAR_BIT(&(uParam0->f_21D), 15);
					MISC::SET_BIT(&(uParam0->f_21D), 16);
					uParam0->f_29B = uVar30;
				}
				else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (uParam0->f_1FC >= 61 && uParam0->f_1FC <= 78))
				{
					if (uParam0->f_67.f_1 == -1)
					{
						PED::RELEASE_PED_PRELOAD_PROP_DATA(iVar0);
						PED::RELEASE_PED_PRELOAD_VARIATION_DATA(iVar0);
						MISC::CLEAR_BIT(&(uParam0->f_21D), 23);
					}
					else if (!MISC::IS_BIT_SET(uParam0->f_21D, 23))
					{
						uVar31 = Global_26C92B[uParam0->f_67.f_1];
						iVar32 = Global_26C92B.f_6F[uParam0->f_67.f_1];
						Stack.Push(uParam0->f_235);
						Stack.Push(iVar32);
						Stack.Push(uVar31);
						Call_Loc(uParam0->f_1F4);
						Var33 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal };
						if (iVar32 == 14)
						{
							if (Var33.f_3 != -1 && Var33.f_3 != 255)
							{
								PED::SET_PED_PRELOAD_PROP_DATA(iVar0, Var33.f_C, Var33.f_3, Var33.f_4);
								MISC::SET_BIT(&(uParam0->f_21D), 23);
							}
							else
							{
								func_257(uParam0, 1, 0);
								func_373(uParam0, 0);
							}
						}
						else if (Var33.f_3 != -1 && Var33.f_4 != -1)
						{
							PED::SET_PED_PRELOAD_VARIATION_DATA(iVar0, func_11(iVar32), Var33.f_3, Var33.f_4);
							MISC::SET_BIT(&(uParam0->f_21D), 23);
						}
						else
						{
							func_257(uParam0, 1, 0);
							func_373(uParam0, 0);
						}
					}
					else if (PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(iVar0) && PED::HAS_PED_PRELOAD_PROP_DATA_FINISHED(iVar0))
					{
						func_257(uParam0, 1, 0);
						func_373(uParam0, 0);
						PED::RELEASE_PED_PRELOAD_PROP_DATA(iVar0);
						PED::RELEASE_PED_PRELOAD_VARIATION_DATA(iVar0);
						MISC::CLEAR_BIT(&(uParam0->f_21D), 23);
					}
				}
				else
				{
					func_373(uParam0, 0);
				}
			}
			else if (MISC::IS_BIT_SET(uParam0->f_21D, 23))
			{
				PED::RELEASE_PED_PRELOAD_PROP_DATA(iVar0);
				PED::RELEASE_PED_PRELOAD_VARIATION_DATA(iVar0);
				MISC::CLEAR_BIT(&(uParam0->f_21D), 23);
			}
			if (!MISC::IS_BIT_SET(uParam0->f_21D, 23))
			{
				MISC::CLEAR_BIT(&(uParam0->f_21D), 26);
				MISC::CLEAR_BIT(&(uParam0->f_21D), 25);
			}
		}
		if (!MISC::IS_BIT_SET(uParam0->f_21D, 17))
		{
			uParam0->f_67.f_F = 0;
			uParam0->f_67.f_17 = 0;
			uParam0->f_67.f_18 = 0;
		}
		uParam0->f_67.f_14 = 0;
		uParam0->f_67.f_15 = 0;
		if (uParam0->f_29D)
		{
			func_555("CSHOP_OUTFIT_DI", 4000, 0);
			uParam0->f_29D = 0;
		}
		else if (MISC::IS_BIT_SET(uParam0->f_21F, 0))
		{
			if (MISC::IS_BIT_SET(uParam0->f_21F, 1))
			{
				func_555("CSHOP_SLOT_CONF", 0, 0);
			}
			else if (MISC::IS_BIT_SET(uParam0->f_21F, 5))
			{
				func_555("CSHOP_SLOT_REM", 0, 0);
			}
		}
		else if (MISC::IS_BIT_SET(uParam0->f_21F, 3))
		{
			MISC::CLEAR_BIT(&(uParam0->f_21F), 3);
			func_555("CSHOP_REMOVED", 4000, 0);
		}
		else if (MISC::IS_BIT_SET(uParam0->f_21F, 7))
		{
			MISC::CLEAR_BIT(&(uParam0->f_21F), 7);
			func_555("CSHOP_RENAMED", 4000, 0);
		}
		else if (MISC::IS_BIT_SET(uParam0->f_21F, 2))
		{
			MISC::CLEAR_BIT(&(uParam0->f_21F), 2);
			func_555("CSHOP_PICKED", 4000, 0);
		}
		else if (uParam0->f_1FC == 1)
		{
			if (uParam0->f_67.f_1 >= 0)
			{
				func_342(&uVar34);
				if (MISC::GET_HASH_KEY(&uVar34) == 0)
				{
					if (func_341(&Global_26C92B, Global_26CB8D[uParam0->f_67.f_1]))
					{
						func_555("CSHOP_UNLOCK_M", 0, 0);
					}
				}
				func_340(&uVar35);
				if (MISC::GET_HASH_KEY(&uVar35) == 0)
				{
					if (func_339(&Global_26C92B, Global_26CB8D[uParam0->f_67.f_1]))
					{
						func_338("CSHOP_BLOCK_M", 0, 0);
					}
				}
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_26CB8D[uParam0->f_67.f_1] == 5)
				{
					func_555("CSHOP_OUTFIT_MP", 0, 0);
				}
			}
		}
		else if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_52(uParam0->f_1FC)) && !Global_26CC4E)
		{
			if (uParam0->f_67.f_1 >= 0)
			{
				func_342(&uVar36);
				if (MISC::GET_HASH_KEY(&uVar36) == 0)
				{
					if (MISC::IS_BIT_SET(Global_26CC51, uParam0->f_67.f_1))
					{
						func_555("CSHOP_UNLOCK_M", 0, 0);
					}
				}
			}
		}
		else if (uParam0->f_1FC == 3)
		{
			if (MISC::IS_BIT_SET(uParam0->f_21E, 1))
			{
				if (!func_336())
				{
					func_342(&uVar37);
					if (MISC::GET_HASH_KEY(&uVar37) == 0 || MISC::GET_HASH_KEY(&uVar37) != MISC::GET_HASH_KEY("CSHOP_UNLOCK_C"))
					{
						func_555("CSHOP_UNLOCK_C", 0, 0);
					}
				}
				else
				{
					func_342(&uVar38);
					if (MISC::GET_HASH_KEY(&uVar38) == 0 || MISC::GET_HASH_KEY(&uVar38) != MISC::GET_HASH_KEY("CSHOP_LCKCREW"))
					{
						func_555("CSHOP_LCKCREW", 0, 0);
					}
				}
			}
			else if (MISC::GET_HASH_KEY(&uVar39) == 0)
			{
				func_555("CSHOP_CLOGO", 0, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_516(uParam0->f_220))
		{
			StringCopy(&Var41, func_335(uParam0->f_220), 16);
			func_342(&uVar40);
			if (MISC::GET_HASH_KEY(&uVar40) == 0 || MISC::GET_HASH_KEY(&uVar40) != MISC::GET_HASH_KEY(&Var41))
			{
				func_555(&Var41, 0, 0);
			}
		}
		else if (uParam0->f_67.f_1 >= 0 && Global_26C8BA[uParam0->f_67.f_1])
		{
			switch (uParam0->f_1FC)
			{
				case 25:
				case 26:
					if (MISC::IS_BIT_SET(uParam0->f_21E, 5) && !MISC::IS_BIT_SET(uParam0->f_21D, 31))
					{
						func_555("CSHOP_BLOCK6", 0, 0);
					}
					else if (MISC::IS_BIT_SET(uParam0->f_21D, 31))
					{
						func_555("CSHOP_BLOCK7", 0, 0);
					}
					else
					{
						func_555("CSHOP_BLOCK1", 0, 0);
					}
					break;
				
				case 27:
					if (MISC::IS_BIT_SET(uParam0->f_21D, 31))
					{
						func_555("CSHOP_BLOCK7", 0, 0);
					}
					else
					{
						func_555("CSHOP_BLOCK2", 0, 0);
					}
					break;
				
				case 61:
				case 62:
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
				case 69:
				case 70:
				case 71:
				case 72:
				case 73:
				case 74:
				case 75:
				case 76:
				case 77:
				case 123:
				case 126:
				case 128:
				case 156:
					func_555("CSHOP_BLOCK3", 0, 0);
					break;
				
				case 113:
					func_555("CSHOP_BLOCK4", 0, 0);
					break;
				
				case 92:
					func_555("CSHOP_BLOCK5", 0, 0);
					break;
				
				default:
					func_555("CSHOP_BLOCK99", 0, 0);
					break;
			}
		}
		else if (!MISC::IS_BIT_SET(uParam0->f_21E, 0))
		{
			if (((uParam0->f_67.f_1 >= 0 && MISC::IS_BIT_SET(uParam0->f_21E, 6)) && ((!MISC::IS_BIT_SET(uParam0->f_21E, 4) || Global_26C92B.f_6F[uParam0->f_67.f_1] == 12) || func_44(Global_26C76D[uParam0->f_67.f_1], -1))) && !MISC::IS_BIT_SET(uParam0->f_21D, 17))
			{
				func_342(&uVar42);
				if (MISC::GET_HASH_KEY(&uVar42) == 0)
				{
					bVar43 = false;
					if (MISC::IS_BIT_SET(uParam0->f_21E, 4))
					{
						bVar43 = func_25(Global_26C76D[uParam0->f_67.f_1], -1);
					}
					else
					{
						Stack.Push(PLAYER::PLAYER_PED_ID());
						Stack.Push(Global_26C92B.f_6F[uParam0->f_67.f_1]);
						Stack.Push(Global_26C92B[uParam0->f_67.f_1]);
						Call_Loc(uParam0->f_1EE);
						bVar43 = StackVal;
					}
					if (!bVar43)
					{
						if (func_334(&(uParam0->f_220), &sVar44))
						{
							func_555("CSHOP_TICK_S", 1, 0);
							func_369(&sVar44);
						}
						else if (MISC::IS_BIT_SET(uParam0->f_21E, 3) && !MISC::IS_STRING_NULL_OR_EMPTY(func_370(&(uParam0->f_220), 0)))
						{
							if (func_333(&(uParam0->f_220), &sVar44))
							{
								if (func_332(&(uParam0->f_220)))
								{
									func_555("CSHOP_DESCDLC", 0, 0);
									func_369(&sVar44);
									func_369(func_370(&(uParam0->f_220), 0));
								}
								else if (func_331(&(uParam0->f_220)))
								{
									func_555("CSHOP_DESCDLC3", 0, 0);
									func_369(&sVar44);
									func_369(func_370(&(uParam0->f_220), 0));
								}
								else if (func_330(&(uParam0->f_220)))
								{
									func_555("CSHOP_DESCDLC4", 0, 0);
									func_369(&sVar44);
									func_369(func_370(&(uParam0->f_220), 0));
								}
								else if (func_329(&(uParam0->f_220)))
								{
									func_555("CSHOP_DESCDLC5", 0, 0);
									func_369(&sVar44);
									func_369(func_370(&(uParam0->f_220), 0));
								}
								else
								{
									func_555("CSHOP_DESCDLC2", 0, 0);
									func_369(&sVar44);
									func_369(func_370(&(uParam0->f_220), 1));
								}
							}
							else if (func_332(&(uParam0->f_220)))
							{
								func_555("CSHOP_TICKDLC", 0, 0);
								func_369(func_370(&(uParam0->f_220), 0));
							}
							else if (func_331(&(uParam0->f_220)))
							{
								func_555("CSHOP_TICKDLC3", 0, 0);
								func_369(func_370(&(uParam0->f_220), 0));
							}
							else if (func_330(&(uParam0->f_220)))
							{
								func_555("CSHOP_TICKDLC4", 0, 0);
								func_369(func_370(&(uParam0->f_220), 0));
							}
							else if (func_329(&(uParam0->f_220)))
							{
								func_555("CSHOP_TICKDLC5", 0, 0);
								func_369(func_370(&(uParam0->f_220), 0));
							}
							else
							{
								func_555("CSHOP_TICKDLC2", 0, 0);
								func_369(func_370(&(uParam0->f_220), 1));
							}
						}
						else
						{
							func_555("CSHOP_TICK", 0, 0);
						}
					}
				}
			}
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (((uParam0->f_1FC == 77 && uParam0->f_67.f_1 >= 0) && !MISC::IS_BIT_SET(uParam0->f_21E, 6)) && !MISC::IS_BIT_SET(uParam0->f_21E, 1))
				{
					func_342(&uVar45);
					if (MISC::GET_HASH_KEY(&uVar45) == 0)
					{
						func_555("CSHOP_HELM", 0, 0);
					}
				}
				if ((uParam0->f_1FC == 11 && uParam0->f_67.f_1 >= 0) && !MISC::IS_BIT_SET(uParam0->f_21E, 1))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(FILES::GET_HASH_NAME_FOR_COMPONENT(iVar0, 11, PED::GET_PED_DRAWABLE_VARIATION(iVar0, 11), PED::GET_PED_TEXTURE_VARIATION(iVar0, 11)), -698069257, 0))
					{
						func_342(&uVar46);
						if (MISC::GET_HASH_KEY(&uVar46) == 0)
						{
							func_555("CSHOP_TS_LX1", 0, 0);
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(FILES::GET_HASH_NAME_FOR_COMPONENT(iVar0, 11, PED::GET_PED_DRAWABLE_VARIATION(iVar0, 11), PED::GET_PED_TEXTURE_VARIATION(iVar0, 11)), -476911276, 0))
					{
						func_342(&uVar47);
						if (MISC::GET_HASH_KEY(&uVar47) == 0)
						{
							func_555("CSHOP_TS_LX2", 0, 0);
						}
					}
				}
			}
			if (MISC::IS_BIT_SET(uParam0->f_21E, 2))
			{
				if (uParam0->f_67.f_1 >= 0 && !MISC::IS_STRING_NULL_OR_EMPTY(func_370(&(uParam0->f_220), 0)))
				{
					func_342(&uVar48);
					if (MISC::GET_HASH_KEY(&uVar48) == 0)
					{
						if (MISC::IS_BIT_SET(uParam0->f_21E, 3))
						{
							if (func_332(&(uParam0->f_220)))
							{
								func_555("SHOP_UNLOCKDLC", 4000, 0);
								func_369(func_370(&(uParam0->f_220), 0));
							}
							else if (func_331(&(uParam0->f_220)))
							{
								func_555("SHOP_UNLOCKDLC3", 4000, 0);
								func_369(func_370(&(uParam0->f_220), 0));
							}
							else if (func_330(&(uParam0->f_220)))
							{
								func_555("SHOP_UNLOCKDLC4", 4000, 0);
								func_369(func_370(&(uParam0->f_220), 0));
							}
							else if (func_329(&(uParam0->f_220)))
							{
								func_555("SHOP_UNLOCKDLC5", 4000, 0);
								func_369(func_370(&(uParam0->f_220), 0));
							}
							else
							{
								func_555("SHOP_UNLOCKDLC2", 4000, 0);
								func_369(func_370(&(uParam0->f_220), 1));
							}
						}
						else
						{
							func_555("CSHOP_UNLOCK_N", 4000, 0);
						}
						MISC::CLEAR_BIT(&(uParam0->f_21E), 2);
					}
				}
			}
			else if (MISC::IS_BIT_SET(uParam0->f_21E, 1))
			{
				if (uParam0->f_67.f_1 >= 0)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						func_342(&uVar49);
						if (MISC::GET_HASH_KEY(&uVar49) == 0)
						{
							if (func_328(ENTITY::GET_ENTITY_MODEL(iVar0), Global_26C92B.f_6F[uParam0->f_67.f_1], Global_26C92B[uParam0->f_67.f_1]))
							{
								func_555("CSHOP_UNLOCK_C", 0, 0);
							}
							else
							{
								iVar50 = func_325(Global_26C92B.f_6F[uParam0->f_67.f_1], Global_26C92B[uParam0->f_67.f_1]);
								if (iVar50 != 0)
								{
									func_555("CSHOP_UNLOCK", 0, 0);
									func_324(iVar50);
								}
							}
						}
					}
				}
			}
			else if (func_292(*uParam0) != 0)
			{
				func_342(&uVar51);
				if (MISC::GET_HASH_KEY(&uVar51) == 0)
				{
					func_555("CSHOP_DISC", 0, 0);
					func_324(func_292(*uParam0));
				}
			}
			else
			{
				func_342(&uVar52);
				if (MISC::GET_HASH_KEY(&uVar52) == 0)
				{
					if (uParam0->f_67.f_1 >= 0 && func_334(&(uParam0->f_220), &sVar53))
					{
						func_555(&sVar53, 0, 0);
					}
					else if ((MISC::IS_BIT_SET(uParam0->f_21E, 3) && uParam0->f_67.f_1 >= 0) && !MISC::IS_STRING_NULL_OR_EMPTY(func_370(&(uParam0->f_220), 0)))
					{
						if (func_333(&(uParam0->f_220), &sVar53))
						{
							if (func_332(&(uParam0->f_220)))
							{
								func_555("CSHOP_DESCDLC", 0, 0);
								func_369(&sVar53);
								func_369(func_370(&(uParam0->f_220), 0));
							}
							else if (func_331(&(uParam0->f_220)))
							{
								func_555("CSHOP_DESCDLC3", 0, 0);
								func_369(&sVar53);
								func_369(func_370(&(uParam0->f_220), 0));
							}
							else if (func_330(&(uParam0->f_220)))
							{
								func_555("CSHOP_DESCDLC4", 0, 0);
								func_369(&sVar53);
								func_369(func_370(&(uParam0->f_220), 0));
							}
							else if (func_329(&(uParam0->f_220)))
							{
								func_555("CSHOP_DESCDLC5", 0, 0);
								func_369(&sVar53);
								func_369(func_370(&(uParam0->f_220), 0));
							}
							else
							{
								func_555("CSHOP_DESCDLC2", 0, 0);
								func_369(&sVar53);
								func_369(func_370(&(uParam0->f_220), 1));
							}
						}
						else if (func_332(&(uParam0->f_220)))
						{
							func_555("SHOP_DLC_PACK", 0, 0);
							func_369(func_370(&(uParam0->f_220), 0));
						}
						else if (func_331(&(uParam0->f_220)))
						{
							func_555("SHOP_DLC_PACK3", 0, 0);
							func_369(func_370(&(uParam0->f_220), 0));
						}
						else if (func_330(&(uParam0->f_220)))
						{
							func_555("SHOP_DLC_PACK4", 0, 0);
							func_369(func_370(&(uParam0->f_220), 0));
						}
						else if (func_329(&(uParam0->f_220)))
						{
							func_555("SHOP_DLC_PACK5", 0, 0);
							func_369(func_370(&(uParam0->f_220), 0));
						}
						else
						{
							func_555("SHOP_DLC_PACK2", 0, 0);
							func_369(func_370(&(uParam0->f_220), 1));
						}
					}
				}
			}
		}
		else if (uParam0->f_67.f_1 >= 0 && func_334(&(uParam0->f_220), &sVar54))
		{
			func_555("CSHOP_ITEMON_S", 1, 0);
			func_369(&sVar54);
		}
		else if ((MISC::IS_BIT_SET(uParam0->f_21E, 3) && uParam0->f_67.f_1 >= 0) && !MISC::IS_STRING_NULL_OR_EMPTY(func_370(&(uParam0->f_220), 0)))
		{
			if (func_333(&(uParam0->f_220), &sVar54))
			{
				if (func_332(&(uParam0->f_220)))
				{
					func_555("CSHOP_DESCDLC", 0, 0);
					func_369(&sVar54);
					func_369(func_370(&(uParam0->f_220), 0));
				}
				else if (func_331(&(uParam0->f_220)))
				{
					func_555("CSHOP_DESCDLC3", 0, 0);
					func_369(&sVar54);
					func_369(func_370(&(uParam0->f_220), 0));
				}
				else if (func_330(&(uParam0->f_220)))
				{
					func_555("CSHOP_DESCDLC4", 0, 0);
					func_369(&sVar54);
					func_369(func_370(&(uParam0->f_220), 0));
				}
				else if (func_329(&(uParam0->f_220)))
				{
					func_555("CSHOP_DESCDLC5", 0, 0);
					func_369(&sVar54);
					func_369(func_370(&(uParam0->f_220), 0));
				}
				else
				{
					func_555("CSHOP_DESCDLC2", 0, 0);
					func_369(&sVar54);
					func_369(func_370(&(uParam0->f_220), 1));
				}
			}
			else if (func_332(&(uParam0->f_220)))
			{
				func_555("CSHOP_ITEMONDLC", 0, 0);
				func_369(func_370(&(uParam0->f_220), 0));
			}
			else if (func_331(&(uParam0->f_220)))
			{
				func_555("CSHOP_ITEMON3", 0, 0);
				func_369(func_370(&(uParam0->f_220), 0));
			}
			else if (func_330(&(uParam0->f_220)))
			{
				func_555("CSHOP_ITEMON4", 0, 0);
				func_369(func_370(&(uParam0->f_220), 0));
			}
			else
			{
				func_555("CSHOP_ITEMON2", 0, 0);
				func_369(func_370(&(uParam0->f_220), 1));
			}
		}
		else
		{
			func_555("CSHOP_ITEMON", 0, 0);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(uParam0->f_21D), 29);
	}
	if (Global_10A95 && uParam0->f_1FC == 1)
	{
		if (!MISC::IS_BIT_SET(uParam0->f_21F, 9))
		{
			if (uParam0->f_24E == 0)
			{
				if (func_89(164, -1))
				{
					MISC::SET_BIT(&(uParam0->f_21F), 9);
				}
				else
				{
					func_555("CSHOP_HSAVE", 0, 0);
					uParam0->f_24E = MISC::GET_GAME_TIMER() + 7500;
				}
			}
			else
			{
				func_555("CSHOP_HSAVE", 0, 0);
				if (MISC::GET_GAME_TIMER() > uParam0->f_24E)
				{
					MISC::SET_BIT(&(uParam0->f_21F), 9);
					func_146(164, 1, -1, 1);
				}
			}
		}
	}
	if (HUD::_0x801879A9B4F4B2FB() && MISC::IS_BIT_SET(uParam0->f_21F, 6))
	{
	}
	else
	{
		func_270(1, *uParam0, 1, 0, 1, -1082130432, 0, 0);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (*uParam0 == 21)
		{
			if (Global_40001.f_976)
			{
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShops"))
				{
					if (func_264(29, 1, 1, &fVar55, &fVar56, 0))
					{
						GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
						GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
						GRAPHICS::DRAW_SPRITE("MPShops", "ShopUI_Title_Graphics_SALE", 0.112f, 0.045f, Global_4353, fVar56, 0f, 255, 255, 255, 255, 0);
						GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
					}
				}
			}
		}
		else if (Global_40001.f_977)
		{
			if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShops"))
			{
				if (func_264(29, 1, 1, &fVar57, &fVar58, 0))
				{
					GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
					GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
					GRAPHICS::DRAW_SPRITE("MPShops", "ShopUI_Title_Graphics_SALE", 0.112f, 0.045f, Global_4353, fVar58, 0f, 255, 255, 255, 255, 0);
					GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
				}
			}
		}
	}
	if (MISC::IS_BIT_SET(uParam0->f_21D, 30))
	{
		func_569(uParam0->f_67.f_1, 1, 1);
		if (uParam0->f_1FC == 1)
		{
			uParam0->f_237 = func_563();
		}
		else
		{
			uParam0->f_238 = func_563();
		}
		MISC::CLEAR_BIT(&(uParam0->f_21D), 30);
	}
}

int func_264(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)//Position - 0x2F6C6
{
	var uVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	struct<3> Var7;
	
	uVar0 = func_269(iParam0);
	sVar1 = func_267(iParam0, bParam1);
	if (MISC::GET_HASH_KEY(sVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar2, &iVar3);
			fVar5 = GRAPHICS::_GET_ASPECT_RATIO(0);
			if (func_266())
			{
				iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar5));
			}
			fVar6 = (SYSTEM::TO_FLOAT(iVar2) / SYSTEM::TO_FLOAT(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_266())
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
		Var7.x = (Var7.x * (func_265(iParam0) / fVar4));
		Var7.f_1 = (Var7.f_1 * (func_265(iParam0) / fVar4));
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

float func_265(int iParam0)//Position - 0x2F82D
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

int func_266()//Position - 0x2F8C6
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

var func_267(int iParam0, bool bParam1)//Position - 0x2F8F8
{
	char* sVar0[2];
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_4354.f_17A0[iParam0 /*16*/])))
	{
		return func_268(&(Global_4354.f_17A0[iParam0 /*16*/]));
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

var func_268(var uParam0)//Position - 0x2FCD8
{
	return uParam0;
}

char* func_269(int iParam0)//Position - 0x2FCE2
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_4354.f_148F[iParam0 /*16*/])))
	{
		return func_268(&(Global_4354.f_148F[iParam0 /*16*/]));
	}
	return "CommonMenu";
}

void func_270(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)//Position - 0x2FD11
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
	
	if (!func_133(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_289(0, bParam6))
	{
		return;
	}
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	fVar53 = 0f;
	if (Global_4354)
	{
		if (func_264(29, 1, 1, &fVar35, &fVar36, bParam7))
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
		if (func_266())
		{
			iVar55 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar56) * fVar58));
		}
		fVar59 = (SYSTEM::TO_FLOAT(iVar55) / SYSTEM::TO_FLOAT(iVar56));
		fVar57 = (fVar59 / fVar58);
		if (func_266())
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
					GRAPHICS::DRAW_SPRITE(func_269(29), func_267(29, 1), (Global_4351 + (fParam5 * 0.5f)), (Global_4352 + ((fVar53 - 0f) * 0.5f)), fParam5, (fVar53 - 0f), 0f, 255, 255, 255, 255, 0);
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
				func_288(Global_4351, (Global_4352 + fVar53), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar47 = (((Global_4352 + fVar53) + 0.034722f) + 0f);
				if (MISC::GET_HASH_KEY(&(Global_4354.f_1)) != 0)
				{
					func_287();
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
						func_287();
						func_285((((Global_4351 + fParam5) - 0.00390625f) - func_286("CM_ITEM_COUNT", Global_4354.f_1380, Global_4354.f_137F)), ((Global_4352 + fVar53) + 0.00416664f), "CM_ITEM_COUNT", Global_4354.f_1380, Global_4354.f_137F);
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
				func_288(Global_4351, (fVar47 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
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
					func_264(Global_4354.f_FCD, 1, 1, &fVar35, &fVar36, bParam7);
					fVar39 = (((Global_4351 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_284(fVar39);
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
				func_288(Global_4351, (fVar47 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
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
				func_284(fVar39);
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
					func_264(Global_4354.f_FCD, 1, 1, &fVar35, &fVar36, bParam7);
					func_283(Global_4354.f_FCD, 1, &iVar44, &iVar45, &iVar46);
					GRAPHICS::DRAW_SPRITE(func_269(Global_4354.f_FCD), func_267(Global_4354.f_FCD, 1), ((Global_4351 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar47 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
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
					func_264(Global_26CEC9.f_43, 1, 1, &fVar35, &fVar36, bParam7);
					fVar39 = (((Global_4351 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_284(fVar39);
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
				func_288(Global_4351, (fVar47 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
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
				func_284(fVar39);
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
					func_264(Global_26CEC9.f_43, 1, 1, &fVar35, &fVar36, bParam7);
					func_283(Global_26CEC9.f_43, 1, &iVar44, &iVar45, &iVar46);
					GRAPHICS::DRAW_SPRITE(func_269(Global_26CEC9.f_43), func_267(Global_26CEC9.f_43, 1), ((Global_4351 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar47 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
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
			func_278(iVar55, iParam1, 0, 0, 0, 0, bParam4, 1, 0);
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
					func_276(bVar31, 1, 0, 0, 0, 0);
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
												func_276(bVar31, Global_4354.f_432[iVar24], Global_4354.f_52D[iVar24], bVar51, iVar68, bVar48);
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
													if (func_264(Global_4354.f_F03[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36, bParam7))
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
											if (func_264(26, 1, 0, &fVar35, &fVar36, bParam7))
											{
												if (Global_4354.f_1108[iVar8] == 2)
												{
													fVar39 = (fVar39 - (fVar35 * 2f));
												}
												fVar42 = (fVar35 * 0.5f);
												if (func_264(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_283(26, 1, &iVar44, &iVar45, &iVar46);
													GRAPHICS::DRAW_SPRITE(func_269(26), func_267(26, 1), ((fVar33 + fVar39) + fVar42), ((fVar34 - 0.00277776f) + (fVar52 * 0.5f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
												}
											}
											if (func_264(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar39 = (fVar39 + fVar35);
												fVar42 = (fVar35 * 0.5f);
												if (func_264(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_283(27, 1, &iVar44, &iVar45, &iVar46);
													GRAPHICS::DRAW_SPRITE(func_269(27), func_267(27, 1), (((fVar33 + fVar39) + fVar42) + (fVar40 + fVar41)), ((fVar34 - 0.00277776f) + (fVar52 * 0.5f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
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
											func_276(bVar31, Global_4354.f_432[iVar24], Global_4354.f_52D[iVar24], bVar51, 0, bVar48);
											if (Global_4354.f_1C23 && Global_4354.f_1C24 == iVar6)
											{
												func_275(bVar31);
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
													if (func_264(Global_4354.f_F03[(iVar22 + iVar28)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar39 = (fVar39 + (fVar35 * 0.5f));
														if (func_264(Global_4354.f_F03[(iVar22 + iVar28)], bVar31, 1, &fVar35, &fVar36, bParam7))
														{
															func_283(Global_4354.f_F03[(iVar22 + iVar28)], bVar31, &iVar44, &iVar45, &iVar46);
															if (Global_4354.f_1108[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_269(Global_4354.f_F03[(iVar22 + iVar28)]), func_267(Global_4354.f_F03[(iVar22 + iVar28)], bVar31), (((fVar33 + fVar39) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar52 * 0.5f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_269(Global_4354.f_F03[(iVar22 + iVar28)]), func_267(Global_4354.f_F03[(iVar22 + iVar28)], bVar31), ((fVar33 + fVar39) - (0.00078125f * 8f)), ((fVar34 - 0.00277776f) + (fVar52 * 0.5f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
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
													if (func_264(Global_4354.f_F03[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar39 = (fVar39 + (fVar35 * 0.5f));
														if (func_264(Global_4354.f_F03[(iVar22 + iVar14)], bVar31, 1, &fVar35, &fVar36, bParam7))
														{
															func_283(Global_4354.f_F03[(iVar22 + iVar14)], bVar31, &iVar44, &iVar45, &iVar46);
															if (Global_4354.f_F03[(iVar22 + iVar14)] == 30)
															{
																GRAPHICS::DRAW_SPRITE(func_269(Global_4354.f_F03[(iVar22 + iVar14)]), func_267(Global_4354.f_F03[(iVar22 + iVar14)], bVar31), (Global_4351 + (fVar35 * 0.5f)), (((fVar34 + 0.00277776f) + (fVar36 * 0.5f)) - (0.00078125f * 11f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
															}
															else if (Global_4354.f_1108[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_269(Global_4354.f_F03[(iVar22 + iVar14)]), func_267(Global_4354.f_F03[(iVar22 + iVar14)], bVar31), ((((fVar33 + fVar39) + fVar40) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar52 * 0.5f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_269(Global_4354.f_F03[(iVar22 + iVar14)]), func_267(Global_4354.f_F03[(iVar22 + iVar14)], bVar31), (((fVar33 + fVar39) + fVar40) - (0.00078125f * 12f)), ((fVar34 - 0.00277776f) + (fVar52 * 0.5f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
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
											func_276(bVar31, Global_4354.f_432[iVar24], Global_4354.f_52D[iVar24], bVar51, 0, 0);
											if (Global_4354.f_1C23 && Global_4354.f_1C24 == iVar6)
											{
												func_275(bVar31);
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
											if (func_264(26, 1, 0, &fVar35, &fVar36, bParam7))
											{
												if (Global_4354.f_1108[iVar8] == 2)
												{
													fVar39 = (fVar39 - (fVar35 * 2f));
												}
												fVar42 = (fVar35 * 0.5f);
												if (func_264(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_283(26, 1, &iVar44, &iVar45, &iVar46);
													GRAPHICS::DRAW_SPRITE(func_269(26), func_267(26, 1), ((fVar33 + fVar39) + fVar42), ((fVar34 - 0.00277776f) + (fVar52 * 0.5f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
												}
											}
											if (func_264(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar39 = (fVar39 + fVar35);
												fVar42 = (fVar35 * 0.5f);
												if (func_264(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_283(27, 1, &iVar44, &iVar45, &iVar46);
													GRAPHICS::DRAW_SPRITE(func_269(27), func_267(27, 1), (((fVar33 + fVar39) + fVar42) + (fVar40 + fVar41)), ((fVar34 - 0.00277776f) + (fVar52 * 0.5f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
												}
											}
										}
										func_276(bVar31, Global_4354.f_432[iVar24], Global_4354.f_52D[iVar24], bVar51, 0, 0);
										func_274((fVar33 + fVar39), fVar34, "NUMBER", Global_4354.f_D0C[iVar20], 0);
									}
									bVar38 = true;
									iVar20++;
									break;
								
								case 3:
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_4354.f_137B)
										{
											func_276(bVar31, Global_4354.f_432[iVar24], Global_4354.f_52D[iVar24], bVar51, 0, 0);
											if (Global_4354.f_1C23 && Global_4354.f_1C24 == iVar6)
											{
												func_275(bVar31);
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
											if (func_264(26, 1, 0, &fVar35, &fVar36, 0))
											{
												if (Global_4354.f_1108[iVar8] == 2)
												{
													fVar39 = (fVar39 - (fVar35 * 2f));
												}
												fVar42 = (fVar35 * 0.5f);
												if (func_264(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_283(26, 1, &iVar44, &iVar45, &iVar46);
													GRAPHICS::DRAW_SPRITE(func_269(26), func_267(26, 1), ((fVar33 + fVar39) + fVar42), ((fVar34 - 0.00277776f) + (fVar52 * 0.5f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
												}
											}
											if (func_264(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar39 = (fVar39 + fVar35);
												fVar42 = (fVar35 * 0.5f);
												if (func_264(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_283(27, 1, &iVar44, &iVar45, &iVar46);
													GRAPHICS::DRAW_SPRITE(func_269(27), func_267(27, 1), (((fVar33 + fVar39) + fVar42) + (fVar40 + fVar41)), ((fVar34 - 0.00277776f) + (fVar52 * 0.5f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
												}
											}
										}
										func_276(bVar31, Global_4354.f_432[iVar24], Global_4354.f_52D[iVar24], bVar51, 0, 0);
										func_273((fVar33 + fVar39), fVar34, "NUMBER", Global_4354.f_E07[iVar21], Global_4354.f_E85[iVar21]);
									}
									bVar38 = true;
									iVar21++;
									break;
								
								case 4:
									if (iVar5 == 1 && bVar32)
									{
										if (func_264(Global_4354.f_F03[iVar22], bVar31, 0, &fVar35, &fVar36, bParam7))
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
												if (func_264(26, 1, 0, &fVar35, &fVar36, bParam7))
												{
													if (Global_4354.f_1108[iVar8] == 2)
													{
														fVar39 = (fVar39 - (fVar35 * 2f));
													}
													fVar42 = (fVar35 * 0.5f);
													if (func_264(26, 1, 1, &fVar35, &fVar36, bParam7))
													{
														func_283(26, 1, &iVar44, &iVar45, &iVar46);
														GRAPHICS::DRAW_SPRITE(func_269(26), func_267(26, 1), ((fVar33 + fVar39) + fVar42), ((fVar34 - 0.00277776f) + (fVar52 * 0.5f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
													}
												}
												if (func_264(27, 1, 0, &fVar35, &fVar36, bParam7))
												{
													fVar39 = (fVar39 + fVar35);
													fVar42 = (fVar35 * 0.5f);
													if (func_264(27, 1, 1, &fVar35, &fVar36, bParam7))
													{
														func_283(27, 1, &iVar44, &iVar45, &iVar46);
														GRAPHICS::DRAW_SPRITE(func_269(27), func_267(27, 1), (((fVar33 + fVar39) + fVar42) + (fVar40 + fVar41)), ((fVar34 - 0.00277776f) + (fVar52 * 0.5f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
													}
												}
											}
											if (func_264(Global_4354.f_F03[iVar22], bVar31, 1, &fVar35, &fVar36, bParam7))
											{
												func_283(Global_4354.f_F03[iVar22], bVar31, &iVar44, &iVar45, &iVar46);
												GRAPHICS::DRAW_SPRITE(func_269(Global_4354.f_F03[iVar22]), func_267(Global_4354.f_F03[iVar22], bVar31), ((fVar33 + fVar39) + (fVar35 * 0.5f)), ((fVar34 - 0.00277776f) + (fVar52 * 0.5f)), (fVar35 * func_272(Global_4354.f_F03[iVar22])), (fVar36 * func_272(Global_4354.f_F03[iVar22])), 0f, iVar44, iVar45, iVar46, 255, 0);
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
									if (func_264(26, 1, 1, &fVar35, &fVar36, bParam7))
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
		func_73();
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
		func_271(1);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_271(int iParam0)//Position - 0x32623
{
	Global_1446E8.f_2F4 = iParam0;
}

float func_272(int iParam0)//Position - 0x32634
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

void func_273(float fParam0, float fParam1, char* sParam2, var uParam3, var uParam4)//Position - 0x3269D
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_FLOAT(uParam3, uParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

void func_274(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x326BC
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam4);
}

void func_275(bool bParam0)//Position - 0x326DA
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

void func_276(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)//Position - 0x32720
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_277(Global_4354.f_148C[iParam4], &iVar0, &iVar1, &iVar2);
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

void func_277(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x328B7
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

void func_278(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x32B41
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_133(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_289(bParam4, bParam8))
	{
		return;
	}
	if (func_281())
	{
		return;
	}
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_83(PLAYER::PLAYER_ID(), 0))
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
					func_280(&(Global_4354.f_FD0[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && MISC::GET_HASH_KEY(&(Global_4354.f_1091[iVar2 /*4*/])) == MISC::GET_HASH_KEY("PREV"))
					{
						func_280(&(Global_4354.f_FD0[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_4354.f_10C2[iVar1] == -1)
					{
						func_279(&(Global_4354.f_1091[iVar1 /*4*/]));
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
				func_280(&Global_26CEC9);
				if (Global_26CEC9.f_14 == -1)
				{
					func_279(&(Global_26CEC9.f_10));
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

void func_279(var uParam0)//Position - 0x3301C
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(uParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_280(var uParam0)//Position - 0x3302E
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(uParam0);
}

int func_281()//Position - 0x3303C
{
	struct<3> Var0;
	
	if (Global_3839.f_1 > 3)
	{
		return 1;
	}
	if (func_282())
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

int func_282()//Position - 0x330AA
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_283(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4)//Position - 0x330C4
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

void func_284(float fParam0)//Position - 0x33178
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

void func_285(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x331D7
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(uParam3);
	HUD::ADD_TEXT_COMPONENT_INTEGER(uParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

float func_286(char* sParam0, int iParam1, int iParam2)//Position - 0x331FA
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
	func_287();
	HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(uParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2);
	return HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
}

void func_287()//Position - 0x3323C
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

void func_288(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x332C6
{
	GRAPHICS::DRAW_RECT((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

int func_289(bool bParam0, bool bParam1)//Position - 0x332F5
{
	if (Global_24F57C.f_51E.f_2B0 != 0)
	{
		return 1;
	}
	if ((((((((!CAM::IS_SCREEN_FADED_IN() || (func_291(8, -1) && func_290() != 65)) || (HUD::GET_PAUSE_MENU_STATE() != 0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::IS_COMMERCE_STORE_OPEN()) || Global_10B99) || Global_4354.f_1C26) || HUD::IS_WARNING_MESSAGE_ACTIVE()) || Global_15F9E.f_526)
	{
		return 0;
	}
	return 1;
}

int func_290()//Position - 0x33392
{
	return Global_1413F8;
}

bool func_291(int iParam0, int iParam1)//Position - 0x3339E
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

int func_292(int iParam0)//Position - 0x333D9
{
	int iVar0;
	
	iVar0 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_295())
		{
			iVar0 = (iVar0 + Global_40001.f_68);
		}
	}
	if (func_294(iParam0, func_143()))
	{
		iVar0 += 25;
	}
	iVar0 = func_293(iVar0, 0, 100);
	return iVar0;
}

int func_293(int iParam0, int iParam1, int iParam2)//Position - 0x3341D
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

int func_294(int iParam0, int iParam1)//Position - 0x33442
{
	switch (iParam1)
	{
		case 0:
			return func_69(iParam0, 5, 0);
			break;
		
		case 1:
			return func_69(iParam0, 7, 0);
			break;
		
		case 2:
			return func_69(iParam0, 6, 0);
			break;
	}
	return 0;
}

int func_295()//Position - 0x3348E
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (MISC::IS_PC_VERSION())
	{
		return 0;
	}
	if (func_140())
	{
		if (func_299())
		{
			iVar0 = func_297();
			iVar1 = func_296();
			fVar2 = ((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(iVar0)) * 100f);
			if (fVar2 > IntToFloat(Global_40001.f_67) && iVar0 >= 8)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_296()//Position - 0x334EC
{
	int iVar0;
	
	iVar0 = (iVar0 + Global_1460C8);
	iVar0 = (iVar0 + Global_1460CB);
	return iVar0;
}

int func_297()//Position - 0x33508
{
	int iVar0;
	
	iVar0 = (iVar0 + Global_1460C9);
	iVar0 = (iVar0 + Global_1460CA);
	iVar0 = (iVar0 + Global_1460C8);
	iVar0 = (iVar0 + Global_1460CB);
	iVar0 = (iVar0 + Global_1460CD);
	iVar0 = (iVar0 + Global_1460CC);
	iVar0 = (iVar0 + func_298(joaat("mpply_exploits")));
	iVar0 = (iVar0 + func_298(joaat("mpply_vc_annoyingme")));
	iVar0 = (iVar0 + func_298(joaat("mpply_vc_hate")));
	iVar0 = (iVar0 + func_298(joaat("mpply_bad_crew_name")));
	iVar0 = (iVar0 + func_298(joaat("mpply_bad_crew_motto")));
	iVar0 = (iVar0 + func_298(joaat("mpply_bad_crew_status")));
	iVar0 = (iVar0 + func_298(joaat("mpply_bad_crew_emblem")));
	iVar0 = (iVar0 + func_298(joaat("mpply_playermade_title")));
	iVar0 = (iVar0 + func_298(joaat("mpply_playermade_desc")));
	return iVar0;
}

int func_298(int iParam0)//Position - 0x335C6
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

int func_299()//Position - 0x335E4
{
	struct<7> Var0;
	struct<7> Var1;
	
	CLOCK::GET_POSIX_TIME(&Var0, &(Var0.f_1), &(Var0.f_2), &(Var0.f_3), &(Var0.f_4), &(Var0.f_5));
	Var1 = { func_323(joaat("mpply_started_mp")) };
	if (func_300(Var1, Var0, 7))
	{
		return 1;
	}
	return 0;
}

int func_300(struct<7> Param0, struct<7> Param1, int iParam2)//Position - 0x33628
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_321(Param1);
	iVar1 = func_311(Param0, iParam2);
	if (iVar1 == -15)
	{
		return 0;
	}
	if (func_301(iVar0, iVar1) == 1)
	{
		return 1;
	}
	return 0;
}

int func_301(int iParam0, int iParam1)//Position - 0x33663
{
	int iVar0;
	int iVar1;
	
	if (!func_309(iParam1) || !func_309(iParam0))
	{
		return 1;
	}
	iVar0 = func_307(iParam0);
	iVar1 = func_307(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_306(iParam0);
	iVar1 = func_306(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_305(iParam0);
	iVar1 = func_305(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_304(iParam0);
	iVar1 = func_304(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_303(iParam0);
	iVar1 = func_303(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_302(iParam0);
	iVar1 = func_302(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_302(int iParam0)//Position - 0x3376F
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_303(int iParam0)//Position - 0x33782
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_304(int iParam0)//Position - 0x33795
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_305(int iParam0)//Position - 0x337A8
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_306(int iParam0)//Position - 0x337BA
{
	return iParam0 & 15;
}

var func_307(int iParam0)//Position - 0x337C7
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_308(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_308(bool bParam0, int iParam1, int iParam2)//Position - 0x337EC
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_309(int iParam0)//Position - 0x33803
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
	iVar0 = func_302(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_303(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_304(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_307(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_306(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_305(iParam0);
	if (iVar5 < 1 || iVar5 > func_310(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_310(int iParam0, int iParam1)//Position - 0x338DF
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

var func_311(struct<7> Param0, int iParam1)//Position - 0x33981
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	if (func_320(Param0) == 0)
	{
		uVar0 = func_321(Param0);
		uVar1 = uVar0;
		func_312(&uVar1, 0, 0, 0, iParam1, 0, 0);
		if (iParam1 == 0)
		{
			uVar1 = uVar0;
		}
		return uVar1;
	}
	return uVar2;
}

void func_312(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x339C1
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_307(*uParam0);
	iVar1 = func_306(*uParam0);
	iVar2 = func_305(*uParam0);
	iVar3 = func_304(*uParam0);
	iVar4 = func_303(*uParam0);
	iVar5 = func_302(*uParam0);
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
	iVar6 = func_310(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_310(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_313(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_313(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x33B43
{
	func_319(uParam0, iParam1);
	func_318(uParam0, iParam2);
	func_317(uParam0, iParam3);
	func_316(uParam0, iParam4);
	func_315(uParam0, iParam5);
	func_314(uParam0, iParam6);
}

void func_314(var uParam0, int iParam1)//Position - 0x33B7B
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

void func_315(var uParam0, int iParam1)//Position - 0x33C01
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_316(var uParam0, int iParam1)//Position - 0x33C34
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_306(*uParam0);
	iVar1 = func_307(*uParam0);
	if (iParam1 < 1 || iParam1 > func_310(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_317(var uParam0, int iParam1)//Position - 0x33C85
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_318(var uParam0, int iParam1)//Position - 0x33CBF
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_319(var uParam0, int iParam1)//Position - 0x33CFA
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_320(struct<7> Param0)//Position - 0x33D36
{
	if ((((((Param0 == 0 && Param0.f_1 == 0) && Param0.f_2 == 0) && Param0.f_3 == 0) && Param0.f_4 == 0) && Param0.f_5 == 0) && Param0.f_6 == 0)
	{
		return 1;
	}
	return 0;
}

var func_321(struct<6> Param0, var uParam1)//Position - 0x33D8C
{
	var uVar0;
	
	if (Param0 > 0)
	{
		func_314(&uVar0, Param0);
	}
	if (Param0.f_1 > 0)
	{
		func_315(&uVar0, func_322(Param0.f_1));
	}
	if (Param0.f_2 > 0)
	{
		func_316(&uVar0, Param0.f_2);
	}
	if (Param0.f_3 > 0)
	{
		func_317(&uVar0, Param0.f_3);
	}
	if (Param0.f_4 > 0)
	{
		func_318(&uVar0, Param0.f_4);
	}
	if (Param0.f_5 > 0)
	{
		func_319(&uVar0, Param0.f_5);
	}
	return uVar0;
}

int func_322(int iParam0)//Position - 0x33E02
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

struct<7> func_323(int iParam0)//Position - 0x33EC7
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

void func_324(int iParam0)//Position - 0x33EEB
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

int func_325(int iParam0, int iParam1)//Position - 0x33F4A
{
	int iVar0;
	int iVar1;
	
	if (func_20() == 0)
	{
		if (iParam1 == iParam1)
		{
		}
		if (iParam0 == iParam0)
		{
		}
		if (func_326())
		{
			if (iParam0 == 8 && iParam1 >= 136)
			{
				iVar0 = func_520(joaat("mp_f_freemode_01"), iParam1, 0);
				if (iVar0 != -99 && iVar0 < 256)
				{
					iParam1 = iVar0;
					iParam0 = 11;
				}
			}
			switch (iParam0)
			{
				case 6:
					switch (iParam1)
					{
						case 0:
							return 1;
						
						case 1:
							return 1;
						
						case 2:
							return 1;
						
						case 3:
							return 1;
						
						case 16:
							return 1;
						
						case 17:
							return 1;
						
						case 26:
							return 53;
						
						case 27:
							return 61;
						
						case 28:
							return 69;
						
						case 29:
							return 77;
						
						case 30:
							return 85;
						
						case 31:
							return 95;
						
						case 18:
							return 1;
						
						case 19:
							return 1;
						
						case 20:
							return 1;
						
						case 21:
							return 1;
						
						case 22:
							return 15;
						
						case 23:
							return 29;
						
						case 24:
							return 37;
						
						case 25:
							return 45;
						
						case 160:
							return 10;
						
						case 161:
							return 1;
						
						case 162:
							return 1;
						
						case 163:
							return 24;
						
						case 176:
							return 1;
						
						case 177:
							return 1;
						
						case 178:
							return 11;
						
						case 179:
							return 25;
						
						case 208:
							return 1;
						
						case 209:
							return 1;
						
						case 218:
							return 50;
						
						case 219:
							return 58;
						
						default:
					}
					switch (iParam1)
					{
						case 220:
							return 66;
						
						case 221:
							return 74;
						
						case 222:
							return 82;
						
						case 223:
							return 92;
						
						case 210:
							return 1;
						
						case 211:
							return 1;
						
						case 212:
							return 1;
						
						case 213:
							return 1;
						
						case 214:
							return 12;
						
						case 215:
							return 26;
						
						case 216:
							return 34;
						
						case 217:
							return 42;
						
						case 224:
							return 1;
						
						case 225:
							return 1;
						
						case 234:
							return 67;
						
						case 235:
							return 75;
						
						case 236:
							return 83;
						
						case 237:
							return 87;
						
						case 238:
							return 90;
						
						case 239:
							return 93;
						
						case 226:
							return 1;
						
						case 227:
							return 1;
						
						case 228:
							return 13;
						
						case 229:
							return 27;
						
						case 230:
							return 35;
						
						case 231:
							return 43;
						
						case 232:
							return 51;
						
						case 233:
							return 59;
						
						case 240:
							return 1;
						
						case 241:
							return 1;
						
						case 250:
							return 52;
						
						case 251:
							return 60;
						
						case 252:
							return 68;
						
						case 253:
							return 76;
						
						case 254:
							return 84;
						
						case 255:
							return 94;
						
						case 242:
							return 1;
						
						case 243:
							return 1;
						
						default:
					}
					switch (iParam1)
					{
						case 244:
							return 1;
						
						case 245:
							return 1;
						
						case 246:
							return 14;
						
						case 247:
							return 28;
						
						case 248:
							return 36;
						
						case 249:
							return 44;
						
						case 32:
							return 1;
						
						case 33:
							return 1;
						
						case 42:
							return 54;
						
						case 43:
							return 62;
						
						case 44:
							return 70;
						
						case 45:
							return 78;
						
						case 46:
							return 86;
						
						case 47:
							return 96;
						
						case 34:
							return 1;
						
						case 35:
							return 1;
						
						case 36:
							return 1;
						
						case 37:
							return 1;
						
						case 38:
							return 16;
						
						case 39:
							return 30;
						
						case 40:
							return 38;
						
						case 41:
							return 46;
						
						case 48:
							return 1;
						
						case 49:
							return 1;
						
						case 58:
							return 55;
						
						case 59:
							return 63;
						
						case 60:
							return 71;
						
						case 61:
							return 79;
						
						case 62:
							return 88;
						
						case 63:
							return 97;
						
						case 50:
							return 1;
						
						case 51:
							return 1;
						
						case 52:
							return 17;
						
						case 53:
							return 1;
						
						case 54:
							return 1;
						
						case 55:
							return 31;
						
						case 56:
							return 39;
						
						case 57:
							return 47;
						
						case 64:
							return 1;
						
						case 65:
							return 1;
						
						case 66:
							return 4;
						
						case 67:
							return 18;
						
						case 80:
							return 1;
						
						case 81:
							return 1;
						
						case 90:
							return 5;
						
						case 93:
							return 19;
						
						case 96:
							return 1;
						
						case 97:
							return 6;
						
						case 98:
							return 1;
						
						case 99:
							return 20;
						
						case 112:
							return 1;
						
						case 113:
							return 1;
						
						case 122:
							return 56;
						
						case 123:
							return 64;
						
						case 124:
							return 72;
						
						case 125:
							return 1;
						
						case 126:
							return 80;
						
						case 127:
							return 89;
						
						default:
					}
					switch (iParam1)
					{
						case 114:
							return 7;
						
						case 115:
							return 1;
						
						case 116:
							return 1;
						
						case 117:
							return 1;
						
						case 118:
							return 21;
						
						case 119:
							return 32;
						
						case 120:
							return 40;
						
						case 121:
							return 48;
						
						case 128:
							return 1;
						
						case 129:
							return 1;
						
						case 138:
							return 49;
						
						case 139:
							return 57;
						
						case 140:
							return 65;
						
						case 141:
							return 73;
						
						case 142:
							return 81;
						
						case 143:
							return 91;
						
						case 130:
							return 1;
						
						case 131:
							return 1;
						
						case 132:
							return 1;
						
						case 133:
							return 1;
						
						case 134:
							return 8;
						
						case 135:
							return 22;
						
						case 136:
							return 33;
						
						case 137:
							return 41;
						
						case 144:
							return 1;
						
						case 145:
							return 1;
						
						case 155:
							return 9;
						
						case 156:
							return 23;
						
						case 146:
							return 1;
						
						case 147:
							return 1;
						
						default:
					}
					break;
				
				case 14:
					switch (iParam1)
					{
						case 0:
							return 0;
							break;
						
						case 1:
							return 0;
							break;
						
						case 6:
							return 0;
							break;
						
						case 155:
							return 1;
						
						case 156:
							return 1;
						
						case 157:
							return 1;
						
						case 158:
							return 5;
						
						case 159:
							return 25;
						
						case 160:
							return 45;
						
						case 161:
							return 65;
						
						case 162:
							return 85;
						
						case 166:
							return 1;
						
						case 167:
							return 1;
						
						case 168:
							return 1;
						
						case 169:
							return 7;
						
						case 170:
							return 27;
						
						case 171:
							return 47;
						
						case 172:
							return 67;
						
						case 173:
							return 87;
						
						case 265:
							return 1;
						
						case 266:
							return 1;
						
						case 267:
							return 1;
						
						case 268:
							return 1;
						
						case 269:
							return 19;
						
						case 270:
							return 39;
						
						case 271:
							return 59;
						
						case 272:
							return 79;
						
						case 276:
							return 1;
						
						case 277:
							return 1;
						
						case 278:
							return 1;
						
						case 279:
							return 1;
						
						case 280:
							return 21;
						
						case 281:
							return 41;
						
						case 282:
							return 61;
					}
					switch (iParam1)
					{
						case 283:
							return 81;
						
						case 300:
							return 1;
						
						case 301:
							return 1;
						
						case 302:
							return 1;
						
						case 303:
							return 23;
						
						case 304:
							return 43;
						
						case 305:
							return 63;
						
						case 306:
							return 83;
						
						case 307:
							return 93;
						
						case 177:
							return 1;
						
						case 178:
							return 1;
						
						case 179:
							return 1;
						
						case 180:
							return 9;
						
						case 181:
							return 29;
						
						case 182:
							return 1;
						
						case 183:
							return 49;
						
						case 184:
							return 69;
						
						case 188:
							return 11;
						
						case 189:
							return 1;
						
						case 190:
							return 1;
						
						case 191:
							return 31;
						
						case 192:
							return 51;
						
						case 193:
							return 1;
						
						case 194:
							return 71;
						
						case 195:
							return 89;
						
						case 199:
							return 13;
						
						case 200:
							return 1;
						
						case 201:
							return 1;
						
						case 202:
							return 33;
						
						case 203:
							return 1;
						
						case 204:
							return 1;
						
						case 205:
							return 53;
						
						case 206:
							return 73;
						
						case 221:
							return 1;
						
						case 232:
							return 1;
						
						case 233:
							return 1;
						
						default:
					}
					switch (iParam1)
					{
						case 234:
							return 15;
						
						case 235:
							return 35;
						
						case 236:
							return 55;
						
						case 237:
							return 75;
						
						case 238:
							return 91;
						
						case 239:
							return 95;
						
						case 243:
							return 1;
						
						case 254:
							return 1;
						
						case 255:
							return 1;
						
						case 256:
							return 1;
						
						case 257:
							return 1;
						
						case 258:
							return 17;
						
						case 259:
							return 37;
						
						case 260:
							return 57;
						
						case 261:
							return 77;
						
						default:
					}
					switch (iParam1)
					{
						case 131:
							return 1;
						
						case 132:
							return 1;
						
						case 133:
							return 15;
						
						case 134:
							return 30;
						
						case 135:
							return 45;
						
						case 136:
							return 60;
						
						case 137:
							return 1;
						
						case 138:
							return 70;
						
						case 139:
							return 1;
						
						case 140:
							return 5;
						
						case 141:
							return 20;
						
						case 142:
							return 35;
						
						case 143:
							return 1;
						
						case 144:
							return 1;
						
						case 145:
							return 50;
						
						case 146:
							return 1;
						
						case 147:
							return 1;
						
						case 148:
							return 1;
						
						case 149:
							return 10;
						
						case 150:
							return 25;
						
						case 151:
							return 40;
						
						case 152:
							return 55;
						
						case 153:
							return 65;
						
						case 154:
							return 1;
						
						default:
					}
					switch (iParam1)
					{
						case 10:
							return 1;
						
						case 11:
							return 1;
						
						case 12:
							return 1;
						
						case 13:
							return 4;
						
						case 14:
							return 26;
						
						case 15:
							return 44;
						
						case 16:
							return 1;
						
						case 17:
							return 62;
						
						case 90:
							return 16;
						
						case 92:
							return 1;
						
						case 99:
							return 1;
						
						case 105:
							return 1;
						
						case 106:
							return 18;
						
						case 107:
							return 1;
						
						case 108:
							return 1;
						
						case 109:
							return 1;
						
						case 110:
							return 20;
						
						case 111:
							return 38;
						
						case 112:
							return 56;
						
						case 113:
							return 1;
						
						case 114:
							return 76;
						
						case 115:
							return 1;
						
						case 116:
							return 1;
						
						case 117:
							return 1;
						
						case 118:
							return 1;
						
						case 119:
							return 22;
						
						case 120:
							return 40;
						
						case 121:
							return 58;
						
						case 122:
							return 78;
						
						default:
					}
					switch (iParam1)
					{
						case 123:
							return 1;
						
						case 124:
							return 1;
						
						case 125:
							return 1;
						
						case 126:
							return 1;
						
						case 127:
							return 24;
						
						case 128:
							return 42;
						
						case 129:
							return 60;
						
						case 130:
							return 80;
						
						case 20:
							return 1;
						
						case 34:
							return 1;
						
						case 35:
							return 1;
						
						case 36:
							return 1;
						
						case 37:
							return 6;
						
						case 38:
							return 28;
						
						case 39:
							return 1;
						
						case 40:
							return 46;
						
						case 41:
							return 64;
						
						case 42:
							return 82;
						
						case 43:
							return 1;
						
						case 44:
							return 1;
						
						case 45:
							return 8;
						
						case 46:
							return 30;
						
						case 47:
							return 48;
						
						case 48:
							return 66;
						
						case 49:
							return 74;
						
						case 50:
							return 84;
						
						case 51:
							return 1;
						
						case 52:
							return 1;
						
						default:
					}
					switch (iParam1)
					{
						case 53:
							return 10;
						
						case 54:
							return 1;
						
						case 55:
							return 32;
						
						case 56:
							return 50;
						
						case 57:
							return 68;
						
						case 58:
							return 1;
						
						case 59:
							return 1;
						
						case 60:
							return 1;
						
						case 61:
							return 1;
						
						case 62:
							return 1;
						
						case 63:
							return 12;
						
						case 64:
							return 34;
						
						case 65:
							return 52;
						
						case 66:
							return 70;
						
						case 75:
							return 1;
						
						case 76:
							return 1;
						
						case 77:
							return 1;
						
						case 78:
							return 14;
						
						case joaat("mpsv_lp0_31"):
							return 36;
						
						case 80:
							return 54;
						
						case 81:
							return 72;
						
						case 82:
							return 86;
						
						case 323:
							return 1;
						
						default:
					}
					break;
				
				case 4:
					switch (iParam1)
					{
						case 0:
							return 1;
						
						case 1:
							return 1;
						
						case 10:
							return 44;
						
						case 11:
							return 52;
						
						case 12:
							return 60;
						
						case 13:
							return 68;
						
						case 14:
							return 76;
						
						case 15:
							return 84;
						
						case 2:
							return 1;
						
						case 3:
							return 4;
						
						case 4:
							return 18;
						
						case 5:
							return 27;
						
						case 6:
							return 35;
						
						case 7:
							return 1;
						
						case 8:
							return 1;
						
						case 9:
							return 1;
						
						case 16:
							return 1;
						
						case 17:
							return 1;
						
						case 26:
							return 53;
						
						case 27:
							return 61;
						
						case 28:
							return 69;
						
						case 29:
							return 77;
						
						case 30:
							return 85;
						
						case 31:
							return 92;
						
						case 18:
							return 1;
						
						case 19:
							return 1;
						
						case 20:
							return 5;
						
						case 21:
							return 19;
						
						default:
					}
					switch (iParam1)
					{
						case 22:
							return 1;
						
						case 23:
							return 28;
						
						case 24:
							return 36;
						
						case 25:
							return 45;
						
						case 160:
							return 1;
						
						case 161:
							return 1;
						
						case 162:
							return 13;
						
						case 176:
							return 1;
						
						case 177:
							return 1;
						
						case 186:
							return 50;
						
						case 187:
							return 58;
						
						case 188:
							return 66;
						
						case 189:
							return 74;
						
						case 190:
							return 82;
						
						case 191:
							return 90;
						
						case 178:
							return 1;
						
						case 179:
							return 1;
						
						case 180:
							return 1;
						
						case 181:
							return 14;
						
						case 182:
							return 1;
						
						case 183:
							return 24;
						
						case 184:
							return 33;
						
						case 185:
							return 42;
						
						case 192:
							return 65;
						
						case 193:
							return 25;
						
						case 202:
							return 67;
						
						case 203:
							return 75;
						
						case 204:
							return 1;
						
						case 205:
							return 83;
						
						case 206:
							return 1;
						
						case 207:
							return 91;
						
						case 194:
							return 34;
						
						case 195:
							return 43;
						
						case 196:
							return 51;
						
						case 197:
							return 59;
						
						case 198:
							return 1;
						
						case 199:
							return 1;
						
						case 200:
							return 1;
						
						case 201:
							return 1;
						
						default:
					}
					switch (iParam1)
					{
						case 224:
							return 16;
						
						case 225:
							return 26;
						
						case 232:
							return 1;
						
						case 233:
							return 1;
						
						case 240:
							return 1;
						
						case 250:
							return 23;
						
						case 251:
							return 41;
						
						case 243:
							return 1;
						
						case 32:
							return 1;
						
						case 33:
							return 6;
						
						case 34:
							return 1;
						
						case 48:
							return 1;
						
						case 49:
							return 7;
						
						case 58:
							return 70;
						
						case 59:
							return 78;
						
						case 60:
							return 1;
						
						case 61:
							return 1;
						
						case 62:
							return 1;
						
						case 63:
							return 86;
						
						case 50:
							return 1;
						
						case 51:
							return 1;
						
						case 52:
							return 20;
						
						case 53:
							return 29;
						
						default:
					}
					switch (iParam1)
					{
						case 54:
							return 37;
						
						case 55:
							return 46;
						
						case 56:
							return 54;
						
						case 57:
							return 62;
						
						case 64:
							return 1;
						
						case 65:
							return 1;
						
						case 74:
							return 55;
						
						case 75:
							return 63;
						
						case 76:
							return 71;
						
						case 77:
							return 79;
						
						case 78:
							return 87;
						
						case joaat("mpsv_lp0_31"):
							return 93;
						
						case 66:
							return 1;
						
						case 67:
							return 1;
						
						case 68:
							return 8;
						
						case 69:
							return 21;
						
						case 70:
							return 30;
						
						case 71:
							return 38;
						
						case 72:
							return 47;
						
						case 73:
							return 1;
						
						case 94:
							return 1;
						
						case 95:
							return 9;
						
						case 88:
							return 1;
						
						case 96:
							return 1;
						
						case 97:
							return 1;
						
						case 98:
							return 10;
						
						case 112:
							return 1;
						
						case 113:
							return 1;
						
						case 114:
							return 1;
						
						case 128:
							return 1;
						
						case 129:
							return 1;
						
						case 138:
							return 56;
						
						case 139:
							return 64;
						
						case 140:
							return 72;
						
						case 142:
							return 80;
						
						case 143:
							return 88;
						
						case 130:
							return 1;
						
						case 131:
							return 1;
						
						case 132:
							return 11;
						
						case 133:
							return 22;
						
						default:
					}
					switch (iParam1)
					{
						case 134:
							return 1;
						
						case 135:
							return 31;
						
						case 136:
							return 39;
						
						case 137:
							return 48;
						
						case 144:
							return 1;
						
						case 145:
							return 1;
						
						case 154:
							return 49;
						
						case 155:
							return 57;
						
						case 156:
							return 15;
						
						case 157:
							return 73;
						
						case 158:
							return 81;
						
						case 159:
							return 89;
						
						case 146:
							return 1;
						
						case 147:
							return 1;
						
						case 148:
							return 1;
						
						case 149:
							return 1;
						
						case 150:
							return 12;
						
						case 151:
							return 17;
						
						case 152:
							return 32;
						
						case 153:
							return 40;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam1)
					{
						case 1:
							return 1;
						
						case 2:
							return 1;
						
						case 3:
							return 60;
						
						case 5:
							return 1;
						
						case 7:
							return 1;
						
						case 8:
							return 80;
						
						case 9:
							return 100;
						
						case 10:
							return 1;
						
						case 11:
							return 1;
						
						case 12:
							return 25;
						
						case 13:
							return 35;
						
						case 14:
							return 1;
						
						case 15:
							return 1;
						
						case 16:
							return 15;
						
						case 17:
							return 30;
						
						case 18:
							return 10;
						
						case 20:
							return 40;
						
						case 21:
							return 90;
						
						case 22:
							return 20;
						
						case 23:
							return 50;
						
						case 24:
							return 70;
						
						case 4:
							return 20;
						
						case 6:
							return 28;
						
						case 19:
							return 36;
						
						case 25:
							return 44;
						
						case 0:
							return 0;
						
						default:
					}
					break;
				
				case 11:
					switch (iParam1)
					{
						case 0:
							return 1;
						
						case 1:
							return 53;
						
						case 10:
							return 42;
						
						case 11:
							return 6;
						
						case 12:
							return 63;
						
						case 13:
							return 72;
						
						case 14:
							return 79;
						
						case 15:
							return 86;
						
						case 2:
							return 4;
						
						case 3:
							return 1;
						
						case 4:
							return 1;
						
						case 5:
							return 1;
						
						case 6:
							return 1;
						
						case 7:
							return 1;
						
						case 8:
							return 1;
						
						case 9:
							return 1;
						
						case 16:
							return 1;
						
						case 17:
							return 1;
						
						case 27:
							return 64;
						
						case 30:
							return 1;
						
						case 18:
							return 1;
						
						case 20:
							return 24;
						
						case 21:
							return 26;
						
						case 22:
							return 43;
						
						case 25:
							return 54;
						
						case 160:
							return 1;
						
						case 161:
							return 1;
						
						case 170:
							return 36;
						
						case 171:
							return 1;
						
						case 173:
							return 48;
						
						case 175:
							return 59;
						
						default:
					}
					switch (iParam1)
					{
						case 162:
							return 1;
						
						case 167:
							return 17;
						
						case 176:
							return 1;
						
						case 177:
							return 1;
						
						case 186:
							return 18;
						
						case 187:
							return 37;
						
						case 191:
							return 49;
						
						case 178:
							return 1;
						
						case 199:
							return 19;
						
						case 200:
							return 1;
						
						case 201:
							return 1;
						
						case 208:
							return 1;
						
						case 209:
							return 21;
						
						case 218:
							return 1;
						
						case 219:
							return 77;
						
						case 220:
							return 83;
						
						case 221:
							return 89;
						
						case 222:
							return 94;
						
						case 223:
							return 98;
						
						case 210:
							return 1;
						
						case 211:
							return 1;
						
						case 212:
							return 38;
						
						case 213:
							return 51;
						
						case 214:
							return 61;
						
						case 215:
							return 1;
						
						case 216:
							return 1;
						
						case 217:
							return 69;
						
						case 224:
							return 1;
						
						case 225:
							return 1;
						
						case 234:
							return 71;
						
						case 235:
							return 78;
						
						case 236:
							return 84;
						
						case 237:
							return 91;
						
						case 238:
							return 96;
						
						case 239:
							return 99;
						
						case 226:
							return 1;
						
						case 227:
							return 1;
						
						default:
					}
					switch (iParam1)
					{
						case 228:
							return 22;
						
						case 229:
							return 1;
						
						case 230:
							return 39;
						
						case 231:
							return 52;
						
						case 232:
							return 62;
						
						case 233:
							return 1;
						
						case 240:
							return 1;
						
						case 250:
							return 23;
						
						case 251:
							return 41;
						
						case 243:
							return 1;
						
						case 32:
							return 1;
						
						case 33:
							return 1;
						
						case 42:
							return 87;
						
						case 43:
							return 92;
						
						case 44:
							return 1;
						
						case 45:
							return 1;
						
						case 46:
							return 1;
						
						case 47:
							return 97;
						
						case 34:
							return 1;
						
						case 35:
							return 7;
						
						case 36:
							return 27;
						
						case 37:
							return 44;
						
						case 38:
							return 56;
						
						case 39:
							return 66;
						
						case 40:
							return 73;
						
						case 41:
							return 81;
						
						case 48:
							return 1;
						
						case 49:
							return 1;
						
						case 58:
							return 28;
						
						case 59:
							return 46;
						
						case 60:
							return 57;
						
						case 61:
							return 67;
						
						case 62:
							return 74;
						
						case 50:
							return 1;
						
						default:
					}
					switch (iParam1)
					{
						case 51:
							return 1;
						
						case 52:
							return 8;
						
						case 77:
							return 9;
						
						case 78:
							return 1;
						
						case 80:
							return 1;
						
						case 81:
							return 1;
						
						case 87:
							return 11;
						
						case 89:
							return 29;
						
						case 96:
							return 1;
						
						case 97:
							return 1;
						
						case 98:
							return 12;
						
						case 100:
							return 31;
						
						case 112:
							return 1;
						
						case 113:
							return 1;
						
						case 114:
							return 13;
						
						case 120:
							return 32;
						
						case 128:
							return 1;
						
						case 129:
							return 14;
						
						case 140:
							return 33;
						
						case 130:
							return 1;
						
						case 144:
							return 1;
						
						case 145:
							return 1;
						
						case 154:
							return 68;
						
						case 155:
							return 76;
						
						case 156:
							return 82;
						
						case 157:
							return 88;
						
						case 158:
							return 93;
						
						case 146:
							return 1;
						
						case 147:
							return 1;
						
						case 148:
							return 1;
						
						case 149:
							return 16;
						
						case 150:
							return 34;
						
						case 151:
							return 47;
						
						case 152:
							return 1;
						
						case 153:
							return 58;
						
						default:
					}
					break;
				
				case 7:
					switch (iParam1)
					{
						case 0:
							return 1;
							break;
						
						case 1:
							return 1;
						
						case 2:
							return 1;
						
						case 3:
							return 5;
						
						case 4:
							return 35;
						
						case 5:
							return 45;
						
						case 6:
							return 65;
						
						case 7:
							return 1;
						
						case 8:
							return 1;
						
						case 9:
							return 15;
						
						case 10:
							return 55;
						
						case 11:
							return 75;
						
						case 12:
							return 95;
						
						case 13:
							return 1;
						
						case 14:
							return 1;
						
						case 15:
							return 10;
						
						case 16:
							return 40;
						
						case 17:
							return 100;
						
						case 18:
							return 85;
						
						case 21:
							return 1;
						
						case 22:
							return 20;
						
						case 29:
							return 1;
						
						case 30:
							return 25;
						
						case 31:
							return 30;
						
						case 32:
							return 1;
						
						case 33:
							return 50;
						
						case 34:
							return 60;
						
						case 35:
							return 70;
						
						case 36:
							return 80;
						
						case 37:
							return 90;
						
						case 38:
							return 1;
						
						case 49:
							return 1;
					}
					break;
				
				case 8:
					switch (iParam1)
					{
						case 0:
							return 1;
						
						case 1:
							return 53;
						
						case 2:
							return 4;
						
						case 3:
							return 1;
						
						case 4:
							return 1;
						
						case 5:
							return 1;
						
						case 6:
							return 1;
						
						case 7:
							return 1;
						
						case 8:
							return 1;
						
						case 9:
							return 1;
						
						case 10:
							return 42;
						
						case 11:
							return 6;
						
						case 12:
							return 63;
						
						case 13:
							return 72;
						
						case 14:
							return 79;
						
						case 15:
							return 86;
						
						case 16:
							return 1;
						
						case 17:
							return 53;
						
						case 26:
							return 42;
						
						case 27:
							return 6;
						
						case 28:
							return 63;
						
						case 29:
							return 72;
						
						case 30:
							return 79;
						
						case 31:
							return 86;
						
						case 18:
							return 4;
						
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
						
						case 24:
							return 1;
						
						case 25:
							return 1;
						
						case 48:
							return 1;
						
						case 47:
							return 9;
						
						case 120:
							return 1;
						
						default:
					}
					switch (iParam1)
					{
						case 50:
							return 1;
						
						case 51:
							return 1;
						
						case 57:
							return 11;
						
						case 59:
							return 29;
						
						case 71:
							return 1;
						
						case 72:
							return 1;
						
						case 73:
							return 1;
						
						case 81:
							return 18;
						
						case 82:
							return 37;
						
						case 86:
							return 49;
						
						case 94:
							return 19;
						
						case 95:
							return 1;
						
						case 96:
							return 1;
						
						case 103:
							return 1;
						
						case 104:
							return 21;
						
						case 105:
							return 1;
						
						case 106:
							return 1;
						
						case 107:
							return 38;
						
						case 108:
							return 51;
						
						case 109:
							return 61;
						
						case 110:
							return 1;
						
						case 111:
							return 1;
						
						case 112:
							return 69;
						
						case 113:
							return 1;
						
						case 114:
							return 77;
						
						case 115:
							return 83;
						
						case 116:
							return 89;
						
						case 117:
							return 94;
						
						case 118:
							return 98;
						
						case 123:
							return 1;
						
						case 130:
							return 23;
						
						case 131:
							return 41;
						
						default:
					}
					break;
			}
		}
		else
		{
			if (iParam0 == 8 && iParam1 >= 241)
			{
				iVar1 = func_520(joaat("mp_m_freemode_01"), iParam1, 0);
				if (iVar1 != -99 && iVar1 < 237)
				{
					iParam1 = iVar1;
					iParam0 = 11;
				}
			}
			switch (iParam0)
			{
				case 1:
					switch (iParam1)
					{
						case 1:
							return 1;
							break;
						
						case 2:
							return 1;
							break;
						
						case 3:
							return 60;
							break;
						
						case 5:
							return 1;
							break;
						
						case 7:
							return 1;
							break;
						
						case 8:
							return 80;
							break;
						
						case 9:
							return 100;
							break;
						
						case 10:
							return 1;
							break;
						
						case 11:
							return 1;
							break;
						
						case 12:
							return 25;
							break;
						
						case 13:
							return 35;
							break;
						
						case 14:
							return 1;
							break;
						
						case 15:
							return 1;
							break;
						
						case 16:
							return 15;
							break;
						
						case 17:
							return 30;
							break;
						
						case 18:
							return 10;
							break;
						
						case 20:
							return 40;
							break;
						
						case 21:
							return 90;
							break;
						
						case 22:
							return 20;
							break;
						
						case 23:
							return 50;
							break;
						
						case 24:
							return 70;
							break;
						
						case 4:
							return 20;
							break;
						
						case 6:
							return 28;
							break;
						
						case 19:
							return 36;
							break;
						
						case 25:
							return 44;
							break;
						
						case 0:
							return 0;
							break;
					}
					break;
				
				case 11:
					switch (iParam1)
					{
						case 0:
							return 1;
							break;
						
						case 1:
							return 1;
							break;
						
						case 11:
							return 66;
							break;
						
						case 2:
							return 1;
							break;
						
						case 3:
							return 4;
							break;
						
						case 4:
							return 22;
							break;
						
						case 5:
							return 36;
							break;
						
						case 7:
							return 47;
							break;
						
						case 8:
							return 57;
							break;
						
						case 16:
							return 1;
							break;
						
						case 17:
							return 1;
							break;
						
						case 27:
							return 1;
							break;
						
						case 28:
							return 1;
							break;
						
						case 30:
							return 48;
							break;
						
						case 19:
							return 6;
							break;
						
						case 20:
							return 1;
							break;
						
						case 21:
							return 1;
							break;
						
						case 22:
							return 23;
							break;
						
						case 23:
							return 1;
							break;
						
						case 24:
							return 37;
							break;
						
						case 156:
							return 1;
							break;
						
						case 157:
							return 1;
							break;
						
						case 158:
							return 7;
							break;
						
						case 172:
							return 1;
							break;
						
						case 173:
							return 1;
							break;
						
						case 186:
							return 32;
							break;
						
						case 179:
							return 17;
							break;
						
						case 188:
							return 1;
							break;
						
						case 189:
							return 1;
							break;
						
						case 198:
							return 83;
							break;
						
						case 199:
							return 87;
							break;
						
						case 190:
							return 1;
							break;
					}
					switch (iParam1)
					{
						case 191:
							return 18;
							break;
						
						case 192:
							return 1;
							break;
						
						case 193:
							return 44;
							break;
						
						case 194:
							return 54;
							break;
						
						case 195:
							return 63;
							break;
						
						case 196:
							return 71;
							break;
						
						case 197:
							return 77;
							break;
						
						case 204:
							return 1;
							break;
						
						case 205:
							return 1;
							break;
						
						case 217:
							return 33;
							break;
						
						case 206:
							return 1;
							break;
						
						case 207:
							return 1;
							break;
						
						case 209:
							return 19;
							break;
						
						case 220:
							return 1;
							break;
						
						case 221:
							return 21;
							break;
						
						case 230:
							return 52;
							break;
						
						case 231:
							return 78;
							break;
						
						case 232:
							return 84;
							break;
						
						case 233:
							return 88;
							break;
						
						case 234:
							return 93;
							break;
						
						case 235:
							return 96;
							break;
						
						case 222:
							return 1;
							break;
						
						case 223:
							return 1;
							break;
						
						case 224:
							return 34;
							break;
						
						case 225:
							return 39;
							break;
						
						case 226:
							return 46;
							break;
						
						case 227:
							return 1;
							break;
						
						case 228:
							return 56;
							break;
						
						case 229:
							return 64;
							break;
						
						case 236:
							return 1;
							break;
						
						case 41:
							return 1;
							break;
						
						case 48:
							return 1;
							break;
						
						case 49:
							return 1;
							break;
					}
					switch (iParam1)
					{
						case 58:
							return 58;
							break;
						
						case 59:
							return 67;
							break;
						
						case 60:
							return 73;
							break;
						
						case 61:
							return 79;
							break;
						
						case 62:
							return 94;
							break;
						
						case 63:
							return 92;
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
						
						case 53:
							return 1;
							break;
						
						case 54:
							return 16;
							break;
						
						case 55:
							return 24;
							break;
						
						case 56:
							return 38;
							break;
						
						case 57:
							return 49;
							break;
						
						case 64:
							return 1;
							break;
						
						case 75:
							return 14;
							break;
						
						case 78:
							return 82;
							break;
						
						case 66:
							return 8;
							break;
						
						case 67:
							return 1;
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
						
						case 87:
							return 9;
							break;
						
						case 96:
							return 1;
							break;
						
						case 97:
							return 1;
							break;
						
						case 107:
							return 1;
							break;
						
						case 99:
							return 11;
							break;
					}
					switch (iParam1)
					{
						case 100:
							return 27;
							break;
						
						case 101:
							return 41;
							break;
						
						case 102:
							return 51;
							break;
						
						case 104:
							return 1;
							break;
						
						case 105:
							return 59;
							break;
						
						case 108:
							return 1;
							break;
						
						case 109:
							return 1;
							break;
						
						case 118:
							return 68;
							break;
						
						case 119:
							return 74;
							break;
						
						case 120:
							return 81;
							break;
						
						case 121:
							return 86;
							break;
						
						case 122:
							return 89;
							break;
						
						case 123:
							return 1;
							break;
						
						case 110:
							return 1;
							break;
						
						case 111:
							return 1;
							break;
						
						case 112:
							return 1;
							break;
						
						case 113:
							return 12;
							break;
						
						case 114:
							return 28;
							break;
						
						case 115:
							return 42;
							break;
						
						case 116:
							return 52;
							break;
						
						case 117:
							return 61;
							break;
						
						case 124:
							return 13;
							break;
						
						case 134:
							return 29;
							break;
						
						case 137:
							return 1;
							break;
						
						case 138:
							return 1;
							break;
						
						case 140:
							return 1;
							break;
						
						case 141:
							return 1;
							break;
						
						case 150:
							return 53;
							break;
						
						case 151:
							return 1;
							break;
						
						case 152:
							return 62;
							break;
						
						case 153:
							return 69;
							break;
						
						case 154:
							return 76;
							break;
						
						case 155:
							return 91;
							break;
						
						case 142:
							return 1;
							break;
						
						case 143:
							return 1;
							break;
						
						case 144:
							return 1;
							break;
						
						case 145:
							return 26;
							break;
						
						case 146:
							return 31;
							break;
						
						case 147:
							return 43;
							break;
					}
					break;
				
				case 6:
					switch (iParam1)
					{
						case 10:
							return 1;
							break;
						
						case 16:
							return 1;
							break;
						
						case 17:
							return 1;
							break;
						
						case 26:
							return 44;
							break;
						
						case 27:
							return 8;
							break;
						
						case 28:
							return 60;
							break;
						
						case 29:
							return 68;
							break;
						
						case 30:
							return 76;
							break;
						
						case 31:
							return 84;
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
							return 4;
							break;
						
						case 23:
							return 16;
							break;
						
						case 24:
							return 27;
							break;
						
						case 25:
							return 36;
							break;
						
						case 160:
							return 1;
							break;
						
						case 172:
							return 11;
							break;
						
						case 174:
							return 22;
							break;
						
						case 167:
							return 1;
							break;
						
						case 188:
							return 12;
							break;
						
						case 190:
							return 23;
							break;
						
						case 191:
							return 1;
							break;
						
						case 185:
							return 1;
							break;
						
						case 192:
							return 1;
							break;
						
						case 193:
							return 13;
							break;
						
						case 202:
							return 1;
							break;
						
						case 203:
							return 65;
							break;
						
						case 204:
							return 1;
							break;
					}
					switch (iParam1)
					{
						case 205:
							return 73;
							break;
						
						case 206:
							return 81;
							break;
						
						case 207:
							return 89;
							break;
						
						case 194:
							return 24;
							break;
						
						case 195:
							return 33;
							break;
						
						case 196:
							return 41;
							break;
						
						case 197:
							return 49;
							break;
						
						case 198:
							return 1;
							break;
						
						case 199:
							return 1;
							break;
						
						case 200:
							return 1;
							break;
						
						case 201:
							return 57;
							break;
						
						case 224:
							return 1;
							break;
						
						case 225:
							return 1;
							break;
						
						case 234:
							return 58;
							break;
						
						case 235:
							return 66;
							break;
						
						case 236:
							return 74;
							break;
						
						case 237:
							return 82;
							break;
						
						case 238:
							return 90;
							break;
						
						case 239:
							return 94;
							break;
						
						case 226:
							return 14;
							break;
						
						case 227:
							return 25;
							break;
						
						case 228:
							return 1;
							break;
						
						case 229:
							return 1;
							break;
						
						case 230:
							return 34;
							break;
						
						case 231:
							return 1;
							break;
						
						case 232:
							return 42;
							break;
						
						case 233:
							return 50;
							break;
						
						case 240:
							return 1;
							break;
						
						case 241:
							return 1;
							break;
						
						case 250:
							return 59;
							break;
						
						case 251:
							return 67;
							break;
						
						case 252:
							return 75;
							break;
						
						case 253:
							return 83;
							break;
					}
					switch (iParam1)
					{
						case 254:
							return 91;
							break;
						
						case 255:
							return 95;
							break;
						
						case 242:
							return 1;
							break;
						
						case 243:
							return 1;
							break;
						
						case 244:
							return 1;
							break;
						
						case 245:
							return 15;
							break;
						
						case 246:
							return 26;
							break;
						
						case 247:
							return 35;
							break;
						
						case 248:
							return 43;
							break;
						
						case 249:
							return 51;
							break;
						
						case 45:
							return 1;
							break;
						
						case 38:
							return 1;
							break;
						
						case 48:
							return 1;
							break;
						
						case 49:
							return 1;
							break;
						
						case 58:
							return 45;
							break;
						
						case 59:
							return 53;
							break;
						
						case 60:
							return 61;
							break;
						
						case 61:
							return 69;
							break;
						
						case 62:
							return 77;
							break;
						
						case 63:
							return 85;
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
						
						case 53:
							return 1;
							break;
						
						case 54:
							return 5;
							break;
						
						case 55:
							return 17;
							break;
						
						case 56:
							return 28;
							break;
						
						case 57:
							return 37;
							break;
						
						case 64:
							return 1;
							break;
						
						case 65:
							return 1;
							break;
						
						case 66:
							return 6;
							break;
						
						case 68:
							return 18;
							break;
						
						case 80:
							return 1;
							break;
						
						case 81:
							return 7;
							break;
						
						case 82:
							return 1;
							break;
						
						case 83:
							return 29;
							break;
					}
					switch (iParam1)
					{
						case 96:
							return 1;
							break;
						
						case 97:
							return 1;
							break;
						
						case 112:
							return 1;
							break;
						
						case 113:
							return 1;
							break;
						
						case 122:
							return 54;
							break;
						
						case 123:
							return 62;
							break;
						
						case 124:
							return 70;
							break;
						
						case 125:
							return 78;
							break;
						
						case 126:
							return 86;
							break;
						
						case 127:
							return 92;
							break;
						
						case 114:
							return 1;
							break;
						
						case 115:
							return 1;
							break;
						
						case 116:
							return 1;
							break;
						
						case 117:
							return 52;
							break;
						
						case 118:
							return 19;
							break;
						
						case 119:
							return 30;
							break;
						
						case 120:
							return 38;
							break;
						
						case 121:
							return 46;
							break;
						
						case 128:
							return 1;
							break;
						
						case 129:
							return 1;
							break;
						
						case 138:
							return 55;
							break;
						
						case 139:
							return 63;
							break;
						
						case 140:
							return 71;
							break;
						
						case 141:
							return 79;
							break;
						
						case 142:
							return 87;
							break;
						
						case 143:
							return 93;
							break;
						
						case 130:
							return 1;
							break;
						
						case 131:
							return 1;
							break;
					}
					switch (iParam1)
					{
						case 132:
							return 1;
							break;
						
						case 133:
							return 9;
							break;
						
						case 134:
							return 20;
							break;
						
						case 135:
							return 31;
							break;
						
						case 136:
							return 39;
							break;
						
						case 137:
							return 47;
							break;
						
						case 144:
							return 1;
							break;
						
						case 145:
							return 1;
							break;
						
						case 154:
							return 56;
							break;
						
						case 155:
							return 64;
							break;
						
						case 156:
							return 72;
							break;
						
						case 157:
							return 1;
							break;
						
						case 158:
							return 80;
							break;
						
						case 159:
							return 88;
							break;
						
						case 146:
							return 1;
							break;
						
						case 147:
							return 1;
							break;
						
						case 148:
							return 1;
							break;
						
						case 149:
							return 10;
							break;
						
						case 150:
							return 21;
							break;
						
						case 151:
							return 32;
							break;
						
						case 152:
							return 40;
							break;
						
						case 153:
							return 48;
							break;
					}
					break;
				
				case 4:
					switch (iParam1)
					{
						case 0:
							return 1;
							break;
						
						case 1:
							return 1;
							break;
						
						case 10:
							return 52;
							break;
						
						case 11:
							return 58;
							break;
						
						case 12:
							return 65;
							break;
						
						case 13:
							return 72;
							break;
						
						case 14:
							return 79;
							break;
						
						case 15:
							return 87;
							break;
						
						case 2:
							return 1;
							break;
						
						case 3:
							return 1;
							break;
						
						case 4:
							return 1;
							break;
						
						case 5:
							return 4;
							break;
						
						case 6:
							return 18;
							break;
						
						case 7:
							return 30;
							break;
						
						case 8:
							return 38;
							break;
						
						case 9:
							return 45;
							break;
						
						case 16:
							return 1;
							break;
						
						case 17:
							return 1;
							break;
						
						case 26:
							return 53;
							break;
						
						case 27:
							return 59;
							break;
						
						case 28:
							return 66;
							break;
						
						case 29:
							return 73;
							break;
						
						case 30:
							return 80;
							break;
						
						case 31:
							return 88;
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
							return 5;
							break;
						
						case 22:
							return 19;
							break;
						
						case 23:
							return 31;
							break;
						
						case 24:
							return 39;
							break;
						
						case 25:
							return 46;
							break;
						
						case 160:
							return 1;
							break;
						
						case 161:
							return 13;
							break;
						
						case 162:
							return 11;
							break;
						
						case 192:
							return 1;
							break;
						
						case 204:
							return 26;
							break;
						
						case 196:
							return 14;
							break;
						
						case 197:
							return 1;
							break;
						
						case 199:
							return 1;
							break;
						
						case 208:
							return 15;
							break;
						
						case 209:
							return 1;
							break;
					}
					switch (iParam1)
					{
						case 210:
							return 10;
							break;
						
						case 224:
							return 1;
							break;
						
						case 225:
							return 16;
							break;
						
						case 236:
							return 36;
							break;
						
						case 227:
							return 28;
							break;
						
						case 240:
							return 1;
							break;
						
						case 241:
							return 1;
							break;
						
						case 250:
							return 71;
							break;
						
						case 251:
							return 78;
							break;
						
						case 252:
							return 81;
							break;
						
						case 253:
							return 86;
							break;
						
						case 254:
							return 89;
							break;
						
						case 255:
							return 91;
							break;
						
						case 242:
							return 1;
							break;
						
						case 243:
							return 1;
							break;
						
						case 244:
							return 29;
							break;
						
						case 245:
							return 17;
							break;
						
						case 246:
							return 37;
							break;
						
						case 247:
							return 44;
							break;
						
						case 248:
							return 51;
							break;
						
						case 249:
							return 64;
							break;
						
						case 43:
							return 1;
							break;
						
						case 48:
							return 1;
							break;
						
						case 49:
							return 1;
							break;
						
						case 58:
							return 54;
							break;
						
						case 59:
							return 1;
							break;
						
						case 60:
							return 60;
							break;
						
						case 61:
							return 67;
							break;
						
						case 62:
							return 74;
							break;
						
						case 63:
							return 82;
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
						
						case 53:
							return 6;
							break;
						
						case 54:
							return 20;
							break;
						
						case 55:
							return 32;
							break;
						
						case 56:
							return 40;
							break;
						
						case 57:
							return 47;
							break;
						
						case 64:
							return 7;
							break;
						
						case 65:
							return 1;
							break;
						
						case 66:
							return 21;
							break;
						
						case 68:
							return 1;
							break;
						
						case 80:
							return 1;
							break;
						
						case 81:
							return 1;
							break;
						
						case 90:
							return 48;
							break;
						
						case 91:
							return 55;
							break;
						
						case 92:
							return 61;
							break;
					}
					switch (iParam1)
					{
						case 93:
							return 68;
							break;
						
						case 94:
							return 75;
							break;
						
						case 95:
							return 83;
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
							return 8;
							break;
						
						case 87:
							return 22;
							break;
						
						case 88:
							return 33;
							break;
						
						case 89:
							return 41;
							break;
						
						case 96:
							return 1;
							break;
						
						case 97:
							return 1;
							break;
						
						case 106:
							return 9;
							break;
						
						case 98:
							return 1;
							break;
						
						case 112:
							return 1;
							break;
						
						case 113:
							return 1;
							break;
						
						case 122:
							return 49;
							break;
						
						case 123:
							return 56;
							break;
						
						case 124:
							return 62;
							break;
						
						case 125:
							return 69;
							break;
						
						case 126:
							return 76;
							break;
						
						case 127:
							return 84;
							break;
						
						case 114:
							return 1;
							break;
						
						case 115:
							return 1;
							break;
						
						case 116:
							return 1;
							break;
						
						case 117:
							return 1;
							break;
						
						case 118:
							return 27;
							break;
					}
					switch (iParam1)
					{
						case 119:
							return 23;
							break;
						
						case 120:
							return 34;
							break;
						
						case 121:
							return 42;
							break;
						
						case 128:
							return 1;
							break;
						
						case 142:
							return 24;
							break;
						
						case 131:
							return 1;
							break;
						
						case 132:
							return 25;
							break;
						
						case 144:
							return 1;
							break;
						
						case 145:
							return 1;
							break;
						
						case 154:
							return 57;
							break;
						
						case 155:
							return 63;
							break;
						
						case 156:
							return 70;
							break;
						
						case 157:
							return 77;
							break;
						
						case 158:
							return 85;
							break;
						
						case 159:
							return 90;
							break;
						
						case 146:
							return 12;
							break;
						
						case 147:
							return 1;
							break;
						
						case 148:
							return 35;
							break;
						
						case 149:
							return 1;
							break;
						
						case 150:
							return 1;
							break;
						
						case 151:
							return 1;
							break;
						
						case 152:
							return 43;
							break;
						
						case 153:
							return 50;
							break;
					}
					break;
				
				case 14:
					switch (iParam1)
					{
						case 0:
							return 0;
							break;
						
						case 1:
							return 0;
							break;
						
						case 6:
							return 0;
							break;
						
						case 10:
							return 1;
							break;
						
						case 11:
							return 4;
							break;
						
						case 12:
							return 26;
							break;
						
						case 13:
							return 42;
							break;
						
						case 14:
							return 58;
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
					}
					switch (iParam1)
					{
						case 131:
							return 1;
							break;
						
						case 132:
							return 1;
							break;
						
						case 133:
							return 15;
							break;
						
						case 134:
							return 30;
							break;
						
						case 135:
							return 45;
							break;
						
						case 136:
							return 60;
							break;
						
						case 137:
							return 1;
							break;
						
						case 138:
							return 70;
							break;
						
						case 139:
							return 1;
							break;
						
						case 140:
							return 5;
							break;
						
						case 141:
							return 20;
							break;
						
						case 142:
							return 35;
							break;
						
						case 143:
							return 1;
							break;
						
						case 144:
							return 1;
							break;
						
						case 145:
							return 50;
							break;
						
						case 146:
							return 1;
							break;
						
						case 147:
							return 1;
							break;
						
						case 148:
							return 1;
							break;
						
						case 149:
							return 10;
							break;
						
						case 150:
							return 25;
							break;
						
						case 151:
							return 40;
							break;
						
						case 152:
							return 55;
							break;
						
						case 153:
							return 65;
							break;
						
						case 154:
							return 1;
							break;
					}
					switch (iParam1)
					{
						case 167:
							return 1;
							break;
						
						case 259:
							return 1;
							break;
						
						case 260:
							return 1;
							break;
						
						case 261:
							return 1;
							break;
						
						case 262:
							return 19;
							break;
						
						case 263:
							return 41;
							break;
						
						case 264:
							return 63;
							break;
						
						case 265:
							return 85;
							break;
						
						case 266:
							return 94;
							break;
						
						case 278:
							return 1;
							break;
						
						case 279:
							return 1;
							break;
						
						case 280:
							return 21;
							break;
						
						case 281:
							return 43;
							break;
						
						case 282:
							return 65;
							break;
						
						case 283:
							return 87;
							break;
						
						case 284:
							return 92;
							break;
						
						case 285:
							return 1;
							break;
						
						case 289:
							return 1;
							break;
						
						case 290:
							return 1;
							break;
						
						case 291:
							return 1;
							break;
						
						case 292:
							return 1;
							break;
						
						case 293:
							return 23;
							break;
						
						case 294:
							return 45;
							break;
						
						case 295:
							return 67;
							break;
						
						case 296:
							return 89;
							break;
						
						case 308:
							return 1;
							break;
						
						case 309:
							return 1;
							break;
						
						case 310:
							return 1;
							break;
						
						case 311:
							return 1;
							break;
					}
					switch (iParam1)
					{
						case 312:
							return 25;
							break;
						
						case 313:
							return 47;
							break;
						
						case 314:
							return 69;
							break;
						
						case 315:
							return 91;
							break;
						
						case 174:
							return 1;
							break;
						
						case 175:
							return 1;
							break;
						
						case 176:
							return 1;
							break;
						
						case 177:
							return 5;
							break;
						
						case 178:
							return 27;
							break;
						
						case 179:
							return 49;
							break;
						
						case 180:
							return 71;
							break;
						
						case 181:
							return 93;
							break;
						
						case 185:
							return 1;
							break;
						
						case 186:
							return 1;
							break;
						
						case 187:
							return 1;
							break;
						
						case 188:
							return 7;
							break;
						
						case 189:
							return 29;
							break;
						
						case 190:
							return 51;
							break;
						
						case 191:
							return 73;
							break;
						
						case 192:
							return 95;
							break;
						
						case 196:
							return 1;
							break;
						
						case 197:
							return 1;
							break;
						
						case 198:
							return 1;
							break;
						
						case 199:
							return 9;
							break;
						
						case 200:
							return 31;
							break;
						
						case 201:
							return 53;
							break;
						
						case 202:
							return 75;
							break;
						
						case 203:
							return 97;
							break;
						
						case 207:
							return 1;
							break;
						
						case 208:
							return 1;
							break;
						
						case 209:
							return 1;
							break;
						
						case 210:
							return 11;
							break;
						
						case 211:
							return 33;
							break;
						
						case 212:
							return 55;
							break;
						
						case 213:
							return 77;
							break;
						
						case 214:
							return 99;
							break;
						
						case 226:
							return 1;
							break;
						
						case 227:
							return 13;
							break;
						
						case 228:
							return 1;
							break;
					}
					switch (iParam1)
					{
						case 229:
							return 35;
							break;
						
						case 230:
							return 1;
							break;
						
						case 231:
							return 57;
							break;
						
						case 232:
							return 79;
							break;
						
						case 233:
							return 100;
							break;
						
						case 237:
							return 1;
							break;
						
						case 238:
							return 15;
							break;
						
						case 239:
							return 1;
							break;
						
						case 240:
							return 1;
							break;
						
						case 241:
							return 37;
							break;
						
						case 242:
							return 59;
							break;
						
						case 243:
							return 81;
							break;
						
						case 244:
							return 98;
							break;
						
						case 248:
							return 1;
							break;
						
						case 249:
							return 1;
							break;
						
						case 250:
							return 1;
							break;
						
						case 251:
							return 17;
							break;
						
						case 252:
							return 39;
							break;
						
						case 253:
							return 61;
							break;
						
						case 254:
							return 83;
							break;
						
						case 255:
							return 96;
							break;
					}
					switch (iParam1)
					{
						case 88:
							return 1;
							break;
						
						case 90:
							return 1;
							break;
						
						case 99:
							return 1;
							break;
						
						case 100:
							return 18;
							break;
						
						case 101:
							return 1;
							break;
						
						case 103:
							return 50;
							break;
						
						case 105:
							return 66;
							break;
						
						case 106:
							return 78;
							break;
						
						case 107:
							return 1;
							break;
						
						case 108:
							return 1;
							break;
						
						case 109:
							return 1;
							break;
						
						case 110:
							return 20;
							break;
						
						case 111:
							return 36;
							break;
						
						case 112:
							return 52;
							break;
						
						case 113:
							return 68;
							break;
						
						case 114:
							return 1;
							break;
						
						case 115:
							return 1;
							break;
						
						case 116:
							return 1;
							break;
						
						case 117:
							return 1;
							break;
						
						case 118:
							return 1;
							break;
						
						case 119:
							return 22;
							break;
						
						case 120:
							return 38;
							break;
					}
					switch (iParam1)
					{
						case 121:
							return 54;
							break;
						
						case 122:
							return 70;
							break;
						
						case 123:
							return 1;
							break;
						
						case 124:
							return 1;
							break;
						
						case 125:
							return 1;
							break;
						
						case 126:
							return 24;
							break;
						
						case 127:
							return 40;
							break;
						
						case 128:
							return 56;
							break;
						
						case 129:
							return 1;
							break;
						
						case 130:
							return 72;
							break;
						
						case 19:
							return 1;
							break;
						
						case 20:
							return 1;
							break;
						
						case 21:
							return 6;
							break;
						
						case 22:
							return 28;
							break;
						
						case 23:
							return 44;
							break;
						
						case 24:
							return 60;
							break;
						
						case 25:
							return 74;
							break;
						
						case 26:
							return 80;
							break;
						
						case 28:
							return 1;
							break;
						
						case 29:
							return 1;
							break;
						
						case 35:
							return 1;
							break;
						
						case 36:
							return 8;
							break;
						
						case 43:
							return 1;
							break;
						
						case 44:
							return 1;
							break;
					}
					switch (iParam1)
					{
						case 51:
							return 1;
							break;
						
						case 52:
							return 1;
							break;
						
						case 53:
							return 10;
							break;
						
						case 54:
							return 30;
							break;
						
						case 55:
							return 46;
							break;
						
						case 56:
							return 62;
							break;
						
						case 57:
							return 76;
							break;
						
						case 58:
							return 82;
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
						
						case 63:
							return 12;
							break;
						
						case 64:
							return 32;
							break;
						
						case 65:
							return 48;
							break;
						
						case 66:
							return 64;
							break;
						
						case 80:
							return 1;
							break;
						
						case 82:
							return 1;
							break;
						
						case 319:
							return 1;
							break;
						
						case 324:
							return 1;
							break;
					}
					break;
				
				case 7:
					switch (iParam1)
					{
						case 0:
							return 1;
							break;
						
						case 41:
							return 20;
							break;
						
						case 42:
							return 50;
							break;
						
						case 43:
							return 1;
							break;
						
						case 73:
							return 40;
							break;
						
						case 74:
							return 60;
							break;
						
						case 75:
							return 10;
							break;
						
						case 59:
							return 30;
							break;
					}
					break;
				
				case 8:
					switch (iParam1)
					{
						case 0:
							return 1;
							break;
						
						case 1:
							return 1;
							break;
						
						case 11:
							return 66;
							break;
						
						case 2:
							return 1;
							break;
						
						case 3:
							return 4;
							break;
						
						case 4:
							return 22;
							break;
						
						case 5:
							return 36;
							break;
						
						case 7:
							return 47;
							break;
						
						case 8:
							return 57;
							break;
						
						case 176:
							return 1;
						
						case 177:
							return 1;
						
						case 178:
							return 0;
						
						case 179:
							return 1;
						
						case 180:
							return 1;
						
						case 181:
							return 5;
						
						case 182:
							return 25;
						
						case 183:
							return 7;
						
						case 184:
							return 9;
						
						case 185:
							return 11;
						
						case 186:
							return 13;
						
						case 187:
							return 15;
						
						case 188:
							return 21;
						
						case 189:
							return 23;
						
						case 190:
							return 17;
						
						case 191:
							return 19;
						
						case 48:
							return 0;
						
						case 49:
							return 0;
						
						case 50:
							return 0;
						
						case 112:
							return 1;
						
						case 113:
							return 1;
						
						case 114:
							return 1;
						
						case 115:
							return 1;
						
						case 116:
							return 1;
						
						case 117:
							return 5;
						
						case 118:
							return 7;
						
						case 119:
							return 9;
						
						case 120:
							return 11;
						
						case 121:
							return 13;
						
						case 122:
							return 15;
						
						case 123:
							return 17;
						
						case 124:
							return 19;
						
						case 125:
							return 25;
						
						case 126:
							return 23;
						
						case 127:
							return 21;
					}
					switch (iParam1)
					{
						case 0:
							return 0;
						
						case 1:
							return 0;
						
						case 2:
							return 0;
						
						case 3:
							return 4;
						
						case 4:
							return 22;
						
						case 5:
							return 36;
						
						case 7:
							return 47;
						
						case 11:
							return 66;
						
						case 8:
							return 57;
						
						case 32:
							return 1;
						
						case 33:
							return 1;
						
						case 34:
							return 1;
						
						case 35:
							return 4;
						
						case 36:
							return 22;
						
						case 37:
							return 36;
						
						case 39:
							return 47;
						
						case 40:
							return 57;
						
						case 43:
							return 66;
						
						case 16:
							return 1;
						
						case 17:
							return 1;
						
						case 19:
							return 6;
						
						case 20:
							return 1;
						
						case 21:
							return 1;
						
						case 22:
							return 23;
						
						case 23:
							return 1;
						
						case 24:
							return 37;
						
						case 27:
							return 1;
						
						case 28:
							return 1;
						
						case 30:
							return 48;
						
						case 224:
							return 1;
						
						case 225:
							return 1;
						
						case 227:
							return 6;
						
						case 228:
							return 1;
						
						case 229:
							return 1;
						
						case 230:
							return 23;
						
						case 231:
							return 1;
						
						case 232:
							return 37;
						
						case 235:
							return 1;
						
						case 236:
							return 1;
						
						case 238:
							return 48;
						
						case 240:
							return 1;
						
						case 80:
							return 1;
							break;
						
						case 81:
							return 1;
							break;
						
						case 82:
							return 1;
							break;
						
						case 87:
							return 9;
							break;
						
						case 160:
							return 1;
							break;
						
						case 161:
							return 1;
							break;
						
						case 162:
							return 1;
							break;
						
						case 163:
							return 1;
							break;
						
						case 164:
							return 1;
							break;
						
						case 165:
							return 5;
							break;
						
						case 166:
							return 25;
							break;
						
						case 167:
							return 7;
							break;
						
						case 168:
							return 9;
							break;
						
						case 169:
							return 11;
							break;
						
						case 170:
							return 13;
							break;
						
						case 171:
							return 15;
							break;
						
						case 172:
							return 21;
							break;
						
						case 173:
							return 23;
							break;
						
						case 174:
							return 17;
							break;
						
						case 175:
							return 19;
							break;
					}
					switch (iParam1)
					{
						case 128:
							return 0;
						
						case 138:
							return 29;
						
						case 141:
							return 0;
						
						case 142:
							return 0;
						
						case 144:
							return 1;
						
						case 145:
							return 1;
						
						case 146:
							return 1;
						
						case 147:
							return 1;
						
						case 148:
							return 1;
						
						case 149:
							return 26;
						
						case 150:
							return 31;
						
						case 151:
							return 43;
						
						case 154:
							return 53;
						
						case 155:
							return 0;
						
						case 156:
							return 62;
						
						case 157:
							return 69;
						
						case 158:
							return 76;
						
						case 159:
							return 91;
						
						case 192:
							return 1;
						
						case 193:
							return 1;
						
						case 194:
							return 1;
						
						case 195:
							return 18;
						
						case 196:
							return 1;
						
						case 197:
							return 44;
						
						case 198:
							return 54;
						
						case 199:
							return 63;
						
						case 200:
							return 71;
						
						case 201:
							return 77;
						
						case 202:
							return 83;
						
						case 203:
							return 87;
						
						case 208:
							return 1;
						
						case 209:
							return 1;
						
						case 210:
							return 1;
						
						case 211:
							return 1;
						
						case 213:
							return 19;
						
						case 221:
							return 33;
						
						case 48:
							return 1;
						
						case 49:
							return 1;
						
						case 50:
							return 1;
						
						case 96:
							return 1;
						
						case 97:
							return 1;
						
						case 98:
							return 1;
						
						case 99:
							return 1;
						
						case 100:
							return 1;
						
						case 101:
							return 5;
						
						case 102:
							return 7;
						
						case 103:
							return 9;
						
						case 104:
							return 11;
						
						case 105:
							return 13;
						
						case 106:
							return 15;
						
						case 107:
							return 17;
						
						case 108:
							return 19;
						
						case 109:
							return 25;
						
						case 110:
							return 23;
						
						case 111:
							return 21;
						
						default:
					}
					break;
				}
			}
	}
	return 0;
}

bool func_326()//Position - 0x38A4E
{
	return func_327(PLAYER::PLAYER_ID());
}

int func_327(int iParam0)//Position - 0x38A5E
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_328(int iParam0, int iParam1, int iParam2)//Position - 0x38A7D
{
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			if (iParam1 == 11)
			{
				if (iParam2 == 0)
				{
					return 1;
				}
			}
			else if (iParam1 == 8)
			{
				if (iParam2 == 0 || iParam2 == 32)
				{
					return 1;
				}
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam1 == 11)
			{
				if (iParam2 == 0)
				{
					return 1;
				}
			}
			else if (iParam1 == 8)
			{
				if (iParam2 == 0 || iParam2 == 16)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_329(char* sParam0)//Position - 0x38B01
{
	int iVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 1;
	}
	iVar0 = MISC::GET_HASH_KEY(HUD::_GET_TEXT_SUBSTRING(sParam0, 0, 6));
	switch (iVar0)
	{
		case 1759048931:
			return 1;
			break;
	}
	return 0;
}

int func_330(char* sParam0)//Position - 0x38B39
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

int func_331(char* sParam0)//Position - 0x38B7D
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

int func_332(char* sParam0)//Position - 0x38BB5
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

bool func_333(char* sParam0, char* sParam1)//Position - 0x38CA6
{
	int iVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	StringCopy(sParam1, "", 16);
	switch (iVar0)
	{
		case 1793385679:
			StringCopy(sParam1, "CLO_BRAND_AION", 16);
			break;
		
		case -977225367:
			StringCopy(sParam1, "CLO_BRAND_ANNA", 16);
			break;
		
		case 15729061:
		case 1686264000:
		case 1372926822:
		case -180454858:
		case -409870627:
		case 1475381084:
		case joaat("CLO_HP_F_L_2_15"):
		case 1408690849:
		case 1629963538:
		case 461453767:
		case 1588751002:
		case 1291339558:
		case 2067669937:
		case 2004687919:
		case -1510475484:
		case -1807100472:
		case joaat("CLO_LXF_F_0_0"):
			StringCopy(sParam1, "CLO_BRAND_BARB", 16);
			break;
		
		case joaat("CLO_BUSF_W0_2"):
			StringCopy(sParam1, "CLO_BRAND_BIAN", 16);
			break;
		
		case -103603827:
		case 486993462:
		case 189352635:
		case -1182161091:
		case -1480391760:
		case -1830200827:
		case -1523384680:
		case 796726062:
		case 1511098074:
		case -995140580:
			StringCopy(sParam1, "CLO_BRAND_BROK", 16);
			break;
		
		case -1846606430:
		case -570132608:
			StringCopy(sParam1, "CLO_BRAND_BULL", 16);
			break;
		
		case joaat("CLO_BBF_P3_0"):
		case joaat("CLO_LXF_LW_0_0"):
		case joaat("CLO_LXF_LW_0_1"):
		case joaat("CLO_LXF_LW_0_2"):
			StringCopy(sParam1, "CLO_BRAND_CACA", 16);
			break;
		
		case joaat("CLO_HP_F_U_4_11"):
		case -1190920460:
		case -335321858:
			StringCopy(sParam1, "CLO_BRAND_COUT", 16);
			break;
		
		case 500984819:
		case -1635940622:
		case 855717110:
		case 1509032663:
		case 1463221601:
			StringCopy(sParam1, "CLO_BRAND_COVG", 16);
			break;
		
		case joaat("CLO_BUSF_W0_0"):
		case 1325870356:
		case 981313701:
		case 330521277:
		case 627375648:
			StringCopy(sParam1, "CLO_BRAND_CROW", 16);
			break;
		
		case 1827315643:
		case 2037922006:
		case -904504815:
		case 889097602:
		case 1119693055:
		case 423810571:
		case 897254052:
		case 1273769862:
		case 1513802787:
		case joaat("CLO_LXF_E_4_0"):
		case joaat("CLO_LXF_E_4_1"):
		case joaat("CLO_LXF_E_4_2"):
		case joaat("CLO_LXF_E_5_0"):
		case joaat("CLO_LXF_E_5_1"):
		case joaat("CLO_LXF_E_5_2"):
		case joaat("CLO_LXF_E_6_0"):
		case joaat("CLO_LXF_E_6_1"):
		case joaat("CLO_LXF_E_6_2"):
		case joaat("CLO_LXF_E_8_0"):
		case joaat("CLO_LXF_E_8_1"):
		case joaat("CLO_LXF_E_8_2"):
			StringCopy(sParam1, "CLO_BRAND_DEKO", 16);
			break;
		
		case joaat("CLO_BUSF_U_1_3"):
		case -326946903:
		case -692452329:
		case 157837683:
		case joaat("CLO_BBF_P0_0"):
		case joaat("CLO_BBF_P0_1"):
		case joaat("CLO_BBF_P0_2"):
		case joaat("CLO_BBF_P0_3"):
		case joaat("CLO_BBF_P0_4"):
		case joaat("CLO_BBF_P0_5"):
		case joaat("CLO_BBF_P0_6"):
		case joaat("CLO_HP_F_U_3_0"):
		case joaat("CLO_HP_F_U_4_3"):
		case joaat("CLO_LXF_LW_1_0"):
		case joaat("CLO_LXF_LW_1_1"):
		case joaat("CLO_LXF_LW_1_2"):
			StringCopy(sParam1, "CLO_BRAND_DIDI", 16);
			break;
		
		case joaat("CLO_BUSF_L_0_10"):
		case joaat("CLO_BUSF_L_0_11"):
		case joaat("CLO_BUSF_L_0_12"):
		case joaat("CLO_BUSF_L_1_2"):
		case joaat("CLO_BUSF_U_1_7"):
		case joaat("CLO_BUSF_U_1_9"):
		case 1163506355:
		case -1840493417:
		case 685385604:
		case -1823277964:
		case -1085813324:
		case -1335939101:
		case -1273648801:
		case -268016985:
		case 1075092502:
		case -1122402433:
		case joaat("CLO_LXF_F_1_0"):
		case joaat("CLO_LXF_U_4_0"):
		case joaat("CLO_LXF_U_4_1"):
		case joaat("CLO_LXF_U_4_2"):
		case joaat("CLO_LXF_U_4_3"):
		case joaat("CLO_LXF_DEC_12"):
			StringCopy(sParam1, "CLO_BRAND_ENMA", 16);
			break;
		
		case 671064767:
			StringCopy(sParam1, "CLO_BRAND_FACE", 16);
			break;
		
		case -815723359:
		case joaat("CLO_BBF_P2_2"):
		case joaat("CLO_HP_F_G_0_0"):
		case joaat("CLO_HP_F_G_0_1"):
		case joaat("CLO_HP_F_G_0_4"):
		case joaat("CLO_HP_F_G_0_7"):
		case -388756986:
		case -20040198:
			StringCopy(sParam1, "CLO_BRAND_FARS", 16);
			break;
		
		case -76100208:
		case -1249117468:
			StringCopy(sParam1, "CLO_BRAND_FLYB", 16);
			break;
		
		case joaat("CLO_BBF_U_1_3"):
		case joaat("CLO_BBF_U_1_4"):
		case joaat("CLO_HP_F_U_1_1"):
		case 17537248:
		case 1824780371:
		case 1010896718:
		case -1768702692:
			StringCopy(sParam1, "CLO_BRAND_FRUN", 16);
			break;
		
		case joaat("CLO_BUSF_F_0_3"):
		case joaat("CLO_BUSF_F_0_7"):
		case joaat("CLO_BUSF_F_0_9"):
		case joaat("CLO_BUSF_F_0_10"):
			StringCopy(sParam1, "CLO_BRAND_FUFU", 16);
			break;
		
		case 2060854098:
			StringCopy(sParam1, "CLO_BRAND_FUQ", 16);
			break;
		
		case joaat("CLO_HP_F_U_0_2"):
		case joaat("CLO_HP_F_U_0_3"):
			StringCopy(sParam1, "CLO_BRAND_GUSS", 16);
			break;
		
		case joaat("CLO_BUSF_U_0_9"):
		case -952392951:
		case -1123971435:
		case 877316879:
		case 1161161957:
		case -1852444079:
		case 1401902744:
		case joaat("CLO_BBF_F_003"):
		case joaat("CLO_HP_F_H_0_5"):
		case joaat("CLO_HP_F_H_0_6"):
		case joaat("CLO_HP_F_L_2_4"):
		case joaat("CLO_HP_F_U_2_0"):
		case joaat("CLO_HP_F_U_2_1"):
		case joaat("CLO_HP_F_U_2_2"):
		case -1002763460:
		case -2029612844:
		case 324282147:
			StringCopy(sParam1, "CLO_BRAND_GANDB", 16);
			break;
		
		case joaat("CLO_BUSF_W0_1"):
		case 798691188:
		case 1762139144:
		case 324888741:
		case 92130534:
		case -118836288:
		case -355854465:
		case -596641077:
		case 588684543:
		case 873938688:
		case 243069904:
		case -1614965165:
		case -651622103:
		case 1836030884:
		case 1555954241:
		case 1325686478:
		case 841557272:
		case 613026266:
		case -928109283:
		case -1226864256:
		case -467606526:
		case joaat("CLO_LXF_E_0_0"):
		case joaat("CLO_LXF_E_1_0"):
		case joaat("CLO_LXF_E_2_0"):
		case joaat("CLO_LXF_E_3_0"):
		case joaat("CLO_LXF_E_3_1"):
		case joaat("CLO_LXF_E_3_2"):
			StringCopy(sParam1, "CLO_BRAND_GAUL", 16);
			break;
		
		case joaat("CLO_BUSF_L_0_0"):
		case -291513083:
		case 1906555586:
			StringCopy(sParam1, "CLO_BRAND_GUID", 16);
			break;
	}
	switch (iVar0)
	{
		case -766683864:
		case 732334045:
			StringCopy(sParam1, "CLO_BRAND_HAWI1", 16);
			break;
		
		case 1425180508:
		case joaat("CLO_HP_F_H_1_0"):
		case joaat("CLO_BBF_F_007"):
		case joaat("CLO_BBF_P3_4"):
		case joaat("CLO_BBF_P3_5"):
		case joaat("CLO_BBF_P3_6"):
		case joaat("CLO_BBF_004"):
			StringCopy(sParam1, "CLO_BRAND_HAWI2", 16);
			break;
		
		case -1705680301:
		case -34349256:
		case joaat("CLO_BBF_P3_1"):
			StringCopy(sParam1, "CLO_BRAND_HEAT", 16);
			break;
		
		case joaat("CLO_BUSF_F_1_0"):
		case joaat("CLO_BUSF_F_1_5"):
		case joaat("CLO_BUSF_F_1_11"):
		case joaat("CLO_HP_F_G_0_3"):
		case joaat("CLO_HP_F_G_1_0"):
		case joaat("CLO_HP_F_G_1_2"):
		case joaat("CLO_HP_F_G_1_3"):
		case joaat("CLO_HP_F_L_0_4"):
		case joaat("CLO_HP_F_L_0_5"):
		case joaat("CLO_HP_F_L_2_6"):
		case joaat("CLO_HP_F_L_2_11"):
		case joaat("CLO_HP_F_L_2_12"):
		case -1509978443:
		case -818028239:
		case 1579855243:
		case -2096957641:
		case -961474563:
			StringCopy(sParam1, "CLO_BRAND_HELG", 16);
			break;
		
		case joaat("CLO_HP_F_U_6_0"):
		case joaat("CLO_HP_F_U_6_1"):
		case joaat("CLO_HP_F_U_6_2"):
		case joaat("CLO_HP_F_U_6_3"):
		case joaat("CLO_HP_F_U_6_4"):
		case joaat("CLO_HP_F_U_6_5"):
			StringCopy(sParam1, "CLO_BRAND_HERO", 16);
			break;
		
		case 999105508:
		case 425291872:
		case -344681321:
		case -121262279:
		case -849586073:
			StringCopy(sParam1, "CLO_BRAND_HINT", 16);
			break;
		
		case -235940372:
		case 590690426:
		case 2104847609:
		case 946934793:
		case 1816886205:
		case 604924740:
		case joaat("CLO_LXF_LW_5_0"):
		case joaat("CLO_LXF_LW_5_1"):
		case joaat("CLO_LXF_LW_5_2"):
		case joaat("CLO_LXF_LW_6_0"):
		case joaat("CLO_LXF_LW_6_1"):
		case joaat("CLO_LXF_LW_6_2"):
			StringCopy(sParam1, "CLO_BRAND_IFRT", 16);
			break;
		
		case 383794371:
			StringCopy(sParam1, "CLO_BRAND_ILE", 16);
			break;
		
		case joaat("CLO_BUSF_F_1_8"):
		case joaat("CLO_BUSF_F_1_9"):
		case -497061603:
		case 1874201544:
		case -13875918:
		case 1635471284:
		case joaat("CLO_HP_F_F_0_6"):
		case joaat("CLO_HP_F_F_1_2"):
		case joaat("CLO_HP_F_F_1_5"):
		case joaat("CLO_HP_F_F_1_14"):
		case joaat("CLO_HP_F_F_1_15"):
		case -846302961:
		case -1371593146:
			StringCopy(sParam1, "CLO_BRAND_TUNG", 16);
			break;
		
		case joaat("CLO_BUSF_W0_3"):
		case 2035450282:
		case 1519607088:
		case -320765486:
		case -991972913:
			StringCopy(sParam1, "CLO_BRAND_KRON", 16);
			break;
		
		case joaat("CLO_BUSF_F_0_4"):
		case joaat("CLO_BUSF_F_0_5"):
		case joaat("CLO_BUSF_F_0_6"):
		case joaat("CLO_BUSF_F_0_8"):
		case joaat("CLO_BUSF_U_0_6"):
		case -1028322513:
		case -798021981:
		case -1157020700:
		case -346020719:
		case -1975055154:
		case -1668206238:
		case joaat("CLO_LXF_DEC_22"):
		case joaat("CLO_LXF_DEC_23"):
		case joaat("CLO_LXF_T_15_0"):
		case joaat("CLO_LXF_T_15_1"):
		case joaat("CLO_LXF_T_17_0"):
		case joaat("CLO_LXF_T_17_1"):
		case -1420539537:
		case 22468484:
		case -1045233137:
		case -1014194639:
			StringCopy(sParam1, "CLO_BRAND_CHIEN", 16);
			break;
		
		case 268389861:
			StringCopy(sParam1, "CLO_BRAND_LEZA", 16);
			break;
		
		case joaat("CLO_BUSF_L_1_0"):
		case joaat("CLO_BUSF_L_1_12"):
		case -1957022408:
		case joaat("CLO_BBF_P4_5"):
		case joaat("CLO_BBF_P4_6"):
		case joaat("CLO_BBF_T_1_1"):
		case joaat("CLO_BBF_T_2_0"):
		case joaat("CLO_BBF_T_2_1"):
			StringCopy(sParam1, "CLO_BRAND_MYMY", 16);
			break;
		
		case 1285289076:
		case 450498801:
		case 1478658941:
			StringCopy(sParam1, "CLO_BRAND_PNDL", 16);
			break;
		
		case joaat("CLO_BUSF_G1_5"):
		case joaat("CLO_BUSF_G1_7"):
		case joaat("CLO_BUSF_T_0_0"):
		case 894174372:
		case 1513737855:
		case 208745191:
		case -1326012216:
		case 2051390311:
		case 431641359:
		case 1536898810:
		case 1608868851:
		case -1927319111:
		case -1805298001:
		case 53302570:
		case 1298852260:
		case 1612353271:
		case 710288251:
		case 1015465948:
		case -180536998:
		case 119594273:
		case -767528099:
		case -493022182:
		case 766683716:
		case 962520450:
		case 1966336266:
		case joaat("CLO_LXF_U_6_0"):
		case joaat("CLO_LXF_U_6_1"):
		case joaat("CLO_LXF_U_6_2"):
		case joaat("CLO_LXF_U_6_3"):
		case joaat("CLO_LXF_U_6_4"):
		case joaat("CLO_LXF_U_6_5"):
		case joaat("CLO_LXF_U_6_6"):
		case joaat("CLO_LXF_U_6_7"):
		case joaat("CLO_LXF_U_6_8"):
		case joaat("CLO_LXF_U_6_9"):
			StringCopy(sParam1, "CLO_BRAND_PERS", 16);
			break;
		
		case 1152058052:
		case 108720198:
			StringCopy(sParam1, "CLO_BRAND_PFIS", 16);
			break;
		
		case -1993162738:
			StringCopy(sParam1, "CLO_BRAND_PROL", 16);
			break;
	}
	switch (iVar0)
	{
		case -1332903487:
		case -1498026478:
		case -1869458112:
		case -1531937412:
		case 1625244622:
		case -1825134468:
			StringCopy(sParam1, "CLO_BRAND_QUIN", 16);
			break;
		
		case -1229305110:
		case joaat("CLO_HP_F_H_1_1"):
		case joaat("CLO_HP_F_L_0_10"):
			StringCopy(sParam1, "CLO_BRAND_RANC", 16);
			break;
		
		case joaat("CLO_BUSF_L_1_6"):
		case joaat("CLO_BUSF_L_1_8"):
		case joaat("CLO_BUSF_T_0_4"):
		case joaat("CLO_BUSF_U_0_4"):
		case joaat("CLO_BUSF_U_1_10"):
		case joaat("CLO_BUSF_U_2_11"):
		case -252443194:
		case 525329021:
		case joaat("CLO_BBF_103"):
		case joaat("CLO_BBF_U_3_3"):
		case joaat("CLO_HP_F_L_1_0"):
		case joaat("CLO_HP_F_L_2_8"):
		case joaat("CLO_HP_F_L_2_9"):
		case joaat("CLO_HP_F_U_1_0"):
		case joaat("CLO_HP_F_U_2_8"):
		case joaat("CLO_HP_F_U_4_9"):
		case 330659273:
		case -847504039:
		case -2077557987:
		case 1895093425:
		case -908392832:
		case -1997303663:
		case 158798230:
		case -74091053:
		case joaat("CLO_LXF_U_5_0"):
		case joaat("CLO_LXF_DEC_13"):
			StringCopy(sParam1, "CLO_BRAND_SANT", 16);
			break;
		
		case 2045966643:
		case 135992709:
		case 477445689:
		case -124918811:
		case -663408749:
		case -1945965022:
		case 2110837182:
		case joaat("CLO_LXF_DEC_3"):
		case joaat("CLO_LXF_DEC_4"):
		case joaat("CLO_LXF_DEC_5"):
		case joaat("CLO_LXF_T_16_0"):
		case joaat("CLO_LXF_T_16_1"):
			StringCopy(sParam1, "CLO_BRAND_SEBD", 16);
			break;
		
		case -643136303:
		case 190048291:
		case -32944754:
		case -650509440:
		case -351754467:
		case -281549889:
		case 1806720174:
		case 1817631504:
		case 1438981714:
		case 657277215:
		case -1633046502:
		case -1116672600:
		case -1693764424:
		case -1297259516:
		case -1385145974:
		case -1606828259:
		case -1417871823:
		case -1935949713:
		case joaat("CLO_LXF_U_6_10"):
		case joaat("CLO_LXF_U_6_11"):
		case joaat("CLO_LXF_U_6_12"):
		case joaat("CLO_LXF_U_6_13"):
		case joaat("CLO_LXF_U_6_14"):
		case joaat("CLO_LXF_U_6_17"):
		case joaat("CLO_LXF_U_6_18"):
		case joaat("CLO_LXF_U_6_19"):
		case joaat("CLO_LXF_DEC_1"):
		case joaat("CLO_LXF_DEC_0"):
		case joaat("CLO_LXF_DEC_28"):
		case joaat("CLO_LXF_T_10_0"):
		case joaat("CLO_LXF_T_10_1"):
			StringCopy(sParam1, "CLO_BRAND_SSNV", 16);
			break;
		
		case -1344753366:
		case -1570302393:
		case -959717616:
			StringCopy(sParam1, "CLO_BRAND_SSNVP", 16);
			break;
		
		case 124743055:
		case -562348498:
		case 63178943:
		case 829580944:
		case -474494180:
			StringCopy(sParam1, "CLO_BRAND_STAN", 16);
			break;
		
		case -1887181967:
		case 538539991:
			StringCopy(sParam1, "CLO_BRAND_USHE", 16);
			break;
		
		case 487185756:
		case -1537774595:
		case 1921812584:
		case 2137760294:
		case joaat("CLO_LXF_U_0_0"):
		case joaat("CLO_LXF_U_0_1"):
		case joaat("CLO_LXF_U_0_2"):
		case joaat("CLO_LXF_U_0_3"):
		case joaat("CLO_LXF_U_0_4"):
			StringCopy(sParam1, "CLO_BRAND_TMVP", 16);
			break;
		
		case 982554320:
		case 675148331:
		case -472225439:
		case joaat("CLO_LXF_E_7_0"):
		case joaat("CLO_LXF_E_7_1"):
		case joaat("CLO_LXF_E_7_2"):
			StringCopy(sParam1, "CLO_BRAND_VNGL", 16);
			break;
		
		case -2094688037:
		case -1241547122:
		case -1615310336:
		case -1174436240:
		case 948503433:
		case 1850371851:
		case 1885149598:
		case -1038664431:
		case -798434892:
		case 161576213:
		case -75278119:
		case -324551902:
		case -1589432326:
		case 1862224751:
		case 1404114131:
		case 2008256219:
		case 505240488:
		case 56436264:
		case -1414017599:
		case -1720047290:
		case 1197311242:
		case -702400674:
		case -613432839:
		case -113902203:
		case 2108084072:
		case -456909395:
		case 913555727:
		case joaat("CLO_LXF_E_9_0"):
		case joaat("CLO_LXF_E_9_1"):
		case joaat("CLO_LXF_E_9_2"):
			StringCopy(sParam1, "CLO_BRAND_VNKH", 16);
			break;
		
		case joaat("CLO_BUSF_T_0_1"):
		case joaat("CLO_BUSF_U_0_8"):
		case joaat("CLO_HP_F_U_2_4"):
		case -1277206041:
		case -1610794461:
		case -1882332520:
		case joaat("CLO_LXF_T_11_0"):
		case joaat("CLO_LXF_T_11_1"):
		case joaat("CLO_LXF_T_12_0"):
			StringCopy(sParam1, "CLO_BRAND_VDG", 16);
			break;
		
		case 2060234978:
		case -1101964785:
		case joaat("CLO_BBF_106"):
		case joaat("CLO_BBF_U_1_0"):
		case joaat("CLO_BBF_U_3_6"):
		case joaat("CLO_HP_F_L_2_5"):
		case 2144364744:
		case 1522179741:
		case -918553690:
		case -1232480710:
			StringCopy(sParam1, "CLO_BRAND_YETI", 16);
			break;
		
		case 1965043370:
		case joaat("CLO_HP_F_U_4_7"):
		case -1103179152:
		case 1757514026:
		case -990527067:
		case -324478539:
		case 40305969:
		case 984713582:
		case 75209987:
		case 1446199409:
		case 1315888:
		case 365576092:
		case 424265371:
		case 729803527:
		case -171114594:
		case -999088917:
		case -1908035439:
		case -546566269:
		case -381476047:
		case -32626073:
		case 164381155:
		case joaat("CLO_LXF_U_3_0"):
		case joaat("CLO_LXF_U_3_1"):
		case joaat("CLO_LXF_U_3_2"):
		case joaat("CLO_LXF_U_3_3"):
		case joaat("CLO_LXF_U_3_4"):
		case joaat("CLO_LXF_U_3_5"):
		case joaat("CLO_LXF_U_3_6"):
		case joaat("CLO_LXF_U_3_7"):
		case joaat("CLO_LXF_U_3_8"):
		case joaat("CLO_LXF_U_3_9"):
		case joaat("CLO_LXF_U_3_10"):
		case joaat("CLO_LXF_U_3_11"):
		case joaat("CLO_LXF_L_0_0"):
		case joaat("CLO_LXF_L_0_1"):
		case joaat("CLO_LXF_L_0_2"):
		case joaat("CLO_LXF_L_0_3"):
		case joaat("CLO_LXF_L_0_4"):
		case joaat("CLO_LXF_T_14_0"):
		case joaat("CLO_LXF_T_14_1"):
			StringCopy(sParam1, "CLO_BRAND_ZORS", 16);
			break;
	}
	return !MISC::IS_STRING_NULL_OR_EMPTY(sParam1);
}

bool func_334(char* sParam0, char* sParam1)//Position - 0x39B44
{
	int iVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	StringCopy(sParam1, "", 16);
	switch (iVar0)
	{
		case -254743660:
		case -504148519:
		case -1729856159:
		case 531303152:
		case 1629732254:
		case 1924108767:
		case 603600547:
		case -1599080941:
			StringCopy(sParam1, "CLO_BRAND_TOUR", 16);
			break;
		
		case 1450518601:
		case 2141256344:
		case 1658831126:
		case 1322653955:
		case 919562486:
		case -586304140:
		case -1923085975:
		case 2139123114:
		case 865261012:
		case 1448778591:
		case 1207107220:
		case 1601088919:
		case 721191542:
		case 1563125459:
		case -2011579213:
		case -278754493:
		case 563376038:
		case 184369784:
		case 841619717:
		case 1164164984:
		case -1911729970:
		case 2067639087:
		case -910964710:
		case -604410715:
			StringCopy(sParam1, "CLO_BRAND_EVENT", 16);
			break;
		
		case -914040210:
		case joaat("REW_REDSK"):
		case joaat("REW_RS"):
		case joaat("CLO_HST_A_0"):
		case joaat("CLO_HST_A_1"):
		case joaat("CLO_HST_A_2"):
		case -206758447:
		case joaat("CLO_HST_A_4"):
		case joaat("CLO_HST_A_5"):
		case joaat("CLO_HST_A_6"):
		case joaat("CLO_HST_A_7"):
		case joaat("CLO_HST_A_8"):
		case joaat("CLO_HST_A_9"):
		case -2111578974:
		case joaat("CLO_HST_F_A_1"):
		case 1588663741:
		case -1162359411:
		case joaat("CLO_HST_F_A_4"):
		case 1569493816:
		case -884445522:
		case -232178577:
		case joaat("CLO_HST_F_A_8"):
		case -1767373458:
			StringCopy(sParam1, "CLO_BRAND_AWARD", 16);
			break;
	}
	return !MISC::IS_STRING_NULL_OR_EMPTY(sParam1);
}

char* func_335(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0x39CE1
{
	switch (MISC::GET_HASH_KEY(&uParam0))
	{
		case joaat("WT_FLAREGUN"):
			return "CSHOP_LCKHUM";
			break;
		
		case -1433279578:
			return "CSHOP_LCKFLE";
			break;
		
		case -993451163:
		case 406336869:
			return "CSHOP_LCKHUM";
			break;
		
		case joaat("CLO_HST_B_1_0"):
			return "CSHOP_LCKHUM";
			break;
		
		case 1643425118:
			return "CSHOP_LCKFLE";
			break;
		
		case -334550899:
			return "CSHOP_LCKFLE";
			break;
	}
	return "";
}

int func_336()//Position - 0x39D5D
{
	struct<13> Var0;
	
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if ((NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::NETWORK_IS_SIGNED_IN()) && NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
		{
			Var0 = { func_337() };
			if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<13> func_337()//Position - 0x39DA5
{
	struct<13> Var0;
	
	NETWORK::NETWORK_GET_LOCAL_HANDLE(&Var0, 13);
	return Var0;
}

void func_338(char* sParam0, int iParam1, int iParam2)//Position - 0x39DBA
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

bool func_339(var uParam0, int iParam1)//Position - 0x39E1F
{
	return MISC::IS_BIT_SET(uParam0->f_15C[(iParam1 / 32)], (iParam1 % 32));
}

void func_340(var uParam0)//Position - 0x39E3C
{
	*uParam0 = { Global_26CEC9.f_15 };
}

bool func_341(var uParam0, int iParam1)//Position - 0x39E50
{
	return MISC::IS_BIT_SET(uParam0->f_155[(iParam1 / 32)], (iParam1 % 32));
}

void func_342(var uParam0)//Position - 0x39E6D
{
	*uParam0 = { Global_4354.f_F81 };
}

void func_343(int iParam0, int iParam1, bool bParam2)//Position - 0x39E81
{
	var uVar0;
	
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_15F9E.f_4F3[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_20() == 0)
		{
			uVar0 = func_24(func_70(iParam0), -1, 0);
			MISC::SET_BIT(&uVar0, iParam1);
			func_15(func_70(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_17C49.f_29C[iParam0]), iParam1);
	}
}

void func_344(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, int iParam5)//Position - 0x39EE9
{
	if (iParam4 || bParam1)
	{
		if ((((((iParam0 != 87 && iParam0 != 89) && iParam0 != 88) && iParam0 != 13) && iParam0 != 14) && iParam0 != 15) && iParam0 != 16)
		{
			if (iParam0 != 71 && iParam0 != 72)
			{
				func_363(1225, iParam5);
			}
		}
		else
		{
			func_363(1225, iParam5);
		}
	}
	if (bParam1)
	{
		if (!func_44(iParam0, -1))
		{
			func_362(iParam0, 1, iParam5);
		}
		if (iParam2 && iParam0 < 129)
		{
			if (func_360(iParam0) == 0)
			{
				func_354(12, func_359(iParam0, 3), func_358(iParam0, 3), func_357(iParam0, 3), func_356(iParam0, 3), -1, 0, 0, 0, -1);
				func_353(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_348(iParam0, 1, iParam5);
		}
		if (Global_1441E9.f_3B0 == 0)
		{
			Global_1441E9.f_3B1 = iParam0;
		}
	}
	else
	{
		if (func_44(iParam0, iParam5))
		{
			func_362(iParam0, 0, iParam5);
			func_345(1225, -1, iParam5);
		}
		if (func_360(iParam0) == 1)
		{
			func_353(iParam0, 0);
		}
		if (func_25(iParam0, iParam5))
		{
			func_13(iParam0, 0, iParam5);
		}
	}
}

void func_345(int iParam0, int iParam1, int iParam2)//Position - 0x3A031
{
	int iVar0;
	
	iVar0 = func_24(iParam0, func_16(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_347(iParam0))
	{
		func_15(iParam0, iVar0, iParam2, 1);
	}
	else
	{
		func_346(iParam0, iVar0, iParam2, 1);
	}
}

void func_346(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3A072
{
	int iVar0;
	
	iVar0 = Global_25744D[iParam0 /*6*/][func_16(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 775:
			Global_1460FF[func_16(iParam2)] = iParam1;
			break;
		
		case 776:
			Global_146105[func_16(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_14610B[func_16(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_146111[func_16(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1460E7[func_16(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1460ED[func_16(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1460F3[func_16(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1460F9[func_16(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1460CF[func_16(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1460D5[func_16(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1460DB[func_16(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1460E1[func_16(iParam2)] = iParam1;
			break;
		
		case 745:
			Global_146117[func_16(iParam2)] = iParam1;
			break;
		
		case 746:
			Global_14611D[func_16(iParam2)] = iParam1;
			break;
		
		case 747:
			Global_146123[func_16(iParam2)] = iParam1;
			break;
		
		case 748:
			Global_146129[func_16(iParam2)] = iParam1;
			break;
		
		case 1290:
			Global_14612F[func_16(iParam2)] = iParam1;
			break;
		
		case 627:
			Global_146135[func_16(iParam2)] = iParam1;
			break;
		
		case 1265:
			Global_14613B[func_16(iParam2)] = iParam1;
			break;
		
		case 1862:
			Global_25C7E2[0 /*6*/][func_16(iParam2)] = iParam1;
			break;
		
		case 2251:
			Global_25C7E2[1 /*6*/][func_16(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_146141[func_16(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_146147[func_16(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_14614D[func_16(iParam2)] = iParam1;
			break;
		
		case 1223:
			Global_146153[func_16(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_347(int iParam0)//Position - 0x3A2EC
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

void func_348(int iParam0, bool bParam1, int iParam2)//Position - 0x3A3A0
{
	if (bParam1)
	{
		if (!func_352(iParam0))
		{
			func_349(iParam0, 1, iParam2);
		}
	}
	else if (func_352(iParam0))
	{
		func_349(iParam0, 0, iParam2);
	}
}

void func_349(var uParam0, bool bParam1, int iParam2)//Position - 0x3A3D5
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_351(uParam0);
	iVar1 = uParam0;
	if (iVar1 > -1)
	{
		if (bParam1)
		{
			MISC::SET_BIT(&iVar0, func_22(iVar1));
		}
		else
		{
			MISC::CLEAR_BIT(&iVar0, func_22(iVar1));
		}
		func_15(func_350(uParam0), iVar0, iParam2, 1);
	}
}

int func_350(var uParam0)//Position - 0x3A421
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_21(iVar0);
	if ((func_20() == 0 || func_19() == 0) || (func_20() == 999 && func_19() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 1031;
				break;
			
			case 1:
				return 1032;
				break;
			
			case 2:
				return 1033;
				break;
			
			case 3:
				return 1034;
				break;
			
			case 4:
				return 1035;
				break;
			
			case 5:
				return 1478;
				break;
			
			case 6:
				return 1479;
				break;
			
			case 7:
				return 1480;
				break;
			
			case 8:
				return 1481;
				break;
			
			case 9:
				return 1927;
				break;
			
			case 10:
				return 1928;
				break;
			
			case 11:
				return 1929;
				break;
			
			case 12:
				return 1930;
				break;
			
			case 13:
				return 2380;
				break;
			
			case 14:
				return 2400;
				break;
			
			case 15:
				return 2403;
				break;
			
			case 16:
				return 2406;
				break;
			}
	}
	return 2903;
}

int func_351(var uParam0)//Position - 0x3A56E
{
	int iVar0;
	
	iVar0 = func_24(func_350(uParam0), -1, 0);
	return iVar0;
}

bool func_352(int iParam0)//Position - 0x3A586
{
	var uVar0;
	int iVar1;
	
	uVar0 = func_351(iParam0);
	iVar1 = iParam0;
	return MISC::IS_BIT_SET(uVar0, func_22(iVar1));
}

void func_353(int iParam0, bool bParam1)//Position - 0x3A5A6
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		if (bParam1)
		{
			MISC::SET_BIT(&(Global_256EFC.f_403[func_21(iVar0)]), func_22(iVar0));
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_256EFC.f_403[func_21(iVar0)]), func_22(iVar0));
		}
	}
}

void func_354(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9)//Position - 0x3A5F5
{
	int iVar0;
	
	iVar0 = func_355(&Global_14552F);
	Global_14552F[iVar0 /*105*/] = iParam0;
	StringCopy(&(Global_14552F[iVar0 /*105*/].f_11), sParam3, 64);
	StringCopy(&(Global_14552F[iVar0 /*105*/].f_1), sParam4, 64);
	StringCopy(&(Global_14552F[iVar0 /*105*/].f_21), sParam1, 64);
	StringCopy(&(Global_14552F[iVar0 /*105*/].f_31), sParam2, 64);
	Global_14552F[iVar0 /*105*/].f_61 = iParam5;
	Global_14552F[iVar0 /*105*/].f_68 = iParam9;
	if (iParam6 != 0)
	{
	}
	if (iParam7 != 0)
	{
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		StringCopy(&(Global_14552F[iVar0 /*105*/].f_62), sParam8, 24);
	}
}

int func_355(var uParam0)//Position - 0x3A685
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if ((*uParam0)[iVar1 /*105*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

char* func_356(int iParam0, int iParam1)//Position - 0x3A6B4
{
	char* sVar0;
	
	sVar0 = "MPTATTOOS";
	if (iParam0 == iParam0)
	{
	}
	if (iParam1 == iParam1)
	{
	}
	switch (iParam0)
	{
		case 56:
			return "MPTattoos3";
			break;
		
		case 89:
			return "MPTSHIRTAWARDS";
			break;
		
		case 88:
			return "MPTSHIRTAWARDS";
			break;
		
		case 87:
			return "MPTSHIRTAWARDS";
			break;
		
		case 57:
			return "MPTattoos2";
			break;
		
		case 58:
			return "MPTattoos2";
			break;
		
		case 59:
			return "MPTattoos2";
			break;
		
		case 60:
			return "MPTattoos2";
			break;
		
		case 12:
		case 55:
		case 49:
		case 48:
		case 46:
		case 45:
		case 34:
		case 65:
		case 25:
			return "MPTattoos3";
			break;
	}
	return sVar0;
}

char* func_357(int iParam0, int iParam1)//Position - 0x3A799
{
	char* sVar0;
	
	sVar0 = "";
	if (iParam0 == iParam0)
	{
	}
	if (iParam1 == iParam1)
	{
	}
	switch (iParam0)
	{
		case 56:
			return "TATTOO_WIN_PARLEY";
			break;
		
		case 57:
			return "TATTOO_HOLD_UP_SHOPS_10";
			break;
		
		case 58:
			return "TATTOO_HOLD_UP_SHOPS_25";
			break;
		
		case 59:
			return "TATTOO_HOLD_UP_SHOPS_50";
			break;
		
		case 60:
			return "TATTOO_HOLD_UP_SHOPS_100";
			break;
		
		case 0:
			return "HeadBanger";
			break;
		
		case 1:
			return "theslayer";
			break;
		
		case 2:
			return "clearout";
			break;
		
		case 4:
			return "thehustler";
			break;
		
		case 3:
			return "armoredvantakedowns";
			break;
		
		case 54:
			return "wineverymodeonce";
			break;
		
		case 5:
			return "killplayerbountyhead";
			break;
		
		case 6:
			return "holdworldrecord";
			break;
		
		case 55:
			return "MP_FM_Tat_Award_008";
			break;
		
		case 7:
			return "getrevengekills";
			break;
		
		case 8:
			return "kill3otherracers";
			break;
		
		case 9:
			return "reachrank1";
			break;
		
		case 10:
			return "reachrank2";
			break;
		
		case 11:
			return "reachrank3";
			break;
		
		case 13:
			return "HeadBanger";
			break;
		
		case 14:
			return "HeadBanger";
			break;
		
		case 15:
			return "HeadBanger";
			break;
		
		case 16:
			return "HeadBanger";
			break;
		
		case 89:
			return "RockstarVerifiied";
			break;
		
		case 88:
			return "PickUpCrateFirst";
			break;
		
		case 87:
			return "ReachHordeModeWave";
			break;
		
		case 12:
			return "TATTOO_RACES_WON";
			break;
	}
	switch (iParam0)
	{
		case 17:
			return "Headbanger";
			break;
		
		case 18:
			return "Headbanger";
			break;
		
		case 19:
			return "Headbanger";
			break;
		
		case 20:
			return "Headbanger";
			break;
		
		case 21:
			return "Headbanger";
			break;
		
		case 22:
			return "Headbanger";
			break;
		
		case 23:
			return "Headbanger";
			break;
		
		case 24:
			return "Headbanger";
			break;
		
		case 25:
			return "MP_FM_Tat_002";
			break;
		
		case 26:
			return "Headbanger";
			break;
		
		case 27:
			return "Headbanger";
			break;
		
		case 28:
			return "Headbanger";
			break;
		
		case 61:
			return "Headbanger";
			break;
		
		case 62:
			return "Headbanger";
			break;
		
		case 63:
			return "Headbanger";
			break;
		
		case 64:
			return "Headbanger";
			break;
		
		case 65:
			return "MP_FM_Tat_019";
			break;
		
		case 29:
			return "Headbanger";
			break;
		
		case 30:
			return "Headbanger";
			break;
		
		case 31:
			return "Headbanger";
			break;
		
		case 66:
			return "Headbanger";
			break;
		
		case 32:
			return "Headbanger";
			break;
		
		case 33:
			return "Headbanger";
			break;
		
		case 34:
			return "MP_FM_Tat_023";
			break;
		
		case 35:
			return "Headbanger";
			break;
		
		case 36:
			return "Headbanger";
			break;
		
		case 37:
			return "Headbanger";
			break;
		
		case 38:
			return "Headbanger";
			break;
		
		case 39:
			return "Headbanger";
			break;
		
		case 40:
			return "Headbanger";
			break;
		
		case 67:
			return "Headbanger";
			break;
		
		case 41:
			return "Headbanger";
			break;
		
		case 68:
			return "Headbanger";
			break;
		
		case 42:
			return "Headbanger";
			break;
		
		case 43:
			return "Headbanger";
			break;
		
		case 44:
			return "Headbanger";
			break;
		
		case 45:
			return "MP_FM_Tat_036";
			break;
		
		case 46:
			return "MP_FM_Tat_037";
			break;
		
		case 47:
			return "Headbanger";
			break;
		
		case 48:
			return "MP_FM_Tat_039";
			break;
		
		case 49:
			return "MP_FM_Tat_040";
			break;
		
		case 50:
			return "Headbanger";
			break;
		
		case 51:
			return "Headbanger";
			break;
		
		case 52:
			return "Headbanger";
			break;
		
		case 53:
			return "Headbanger";
			break;
		
		case 69:
			return "Headbanger";
			break;
	}
	return sVar0;
}

char* func_358(int iParam0, int iParam1)//Position - 0x3AC55
{
	char* sVar0;
	
	sVar0 = "";
	if (iParam0 == iParam0)
	{
	}
	if (iParam1 == iParam1)
	{
	}
	switch (iParam0)
	{
		case 7:
			return "TAT_FM_REVENKIL_D";
			break;
		
		case 6:
			return "TAT_FM_RECHOLD_d";
			break;
		
		case 8:
			return "TAT_FM_KIL3RACE_D";
			break;
		
		case 5:
			return "TAT_FM_KILb_D";
			break;
		
		case 0:
			return "TAT_FM_HEADBANG_D";
			break;
		
		case 12:
			return "TAT_RACE50_D";
			break;
		
		case 2:
			return "TAT_CLEAROUT_D";
			break;
		
		case 9:
			return "TAT_FM_RANK1_D";
			break;
		
		case 10:
			return "TAT_FM_RANK2_D";
			break;
		
		case 11:
			return "TAT_FM_RANK3_D";
			break;
		
		case 4:
			return "TAT_FM_HUST_D";
			break;
		
		case 1:
			return "TAT_FM_SLAY_D";
			break;
		
		case 54:
			return "TAT_FM_EVERMODE1_D";
			break;
		
		case 3:
			return "TAT_FM_ARVANTAKE_D";
			break;
		
		case 56:
			return "TAT_CHEATER_D";
			break;
		
		case 13:
			return "TAT_CRANKA_D";
			break;
		
		case 14:
			return "TAT_CRANKB_D";
			break;
		
		case 15:
			return "TAT_CRANKC_D";
			break;
		
		case 16:
			return "TAT_CRANKD_D";
			break;
		
		case 89:
			return "TAT_FM_ROCKSTAR_D";
			break;
		
		case 88:
			return "TAT_FM_BELLE_D";
			break;
		
		case 87:
			return "TAT_FM_REDSKULL_D";
			break;
		
		case 55:
			return "TAT_FM_MODDED_D";
			break;
	}
	switch (iParam0)
	{
		case 17:
			return "TAT_RANK10_D";
			break;
		
		case 18:
			return "TAT_RANK20_D";
			break;
		
		case 19:
			return "TAT_RANK20_D";
			break;
		
		case 20:
			return "TAT_RANK10_D";
			break;
		
		case 21:
			return "TAT_RANK20_D";
			break;
		
		case 22:
			return "TAT_RANK10_D";
			break;
		
		case 23:
			return "TAT_RANK10_D";
			break;
		
		case 24:
			return "TAT_RANK20_D";
			break;
		
		case 25:
			return "TAT_TAT9U";
			break;
		
		case 26:
			return "TAT_RANK20_D";
			break;
		
		case 27:
			return "TAT_RANK20_D";
			break;
		
		case 28:
			return "TAT_RANK10_D";
			break;
		
		case 61:
			return "TAT_RANK10_D";
			break;
		
		case 62:
			return "TAT_RANK10_D";
			break;
		
		case 63:
			return "TAT_RANK10_D";
			break;
		
		case 64:
			return "TAT_RANK10_D";
			break;
		
		case 65:
			return "TAT_TAT17U";
			break;
		
		case 29:
			return "TAT_RANK10_D";
			break;
		
		case 30:
			return "TAT_RANK10_D";
			break;
		
		case 31:
			return "TAT_RANK10_D";
			break;
		
		case 66:
			return "TAT_RANK20_D";
			break;
		
		case 32:
			return "TAT_RANK20_D";
			break;
		
		case 33:
			return "TAT_RANK20_D";
			break;
		
		case 34:
			return "TAT_TAT24U";
			break;
		
		case 35:
			return "TAT_RANK20_D";
			break;
		
		case 36:
			return "TAT_RANK20_D";
			break;
		
		case 37:
			return "TAT_RANK20_D";
			break;
		
		case 38:
			return "TAT_RANK20_D";
			break;
		
		case 39:
			return "TAT_RANK20_D";
			break;
		
		case 40:
			return "TAT_RANK20_D";
			break;
		
		case 67:
			return "TAT_RANK20_D";
			break;
		
		case 41:
			return "TAT_RANK20_D";
			break;
		
		case 68:
			return "TAT_RANK20_D";
			break;
		
		case 42:
			return "TAT_RANK20_D";
			break;
		
		case 43:
			return "TAT_RANK20_D";
			break;
		
		case 44:
			return "TAT_RANK20_D";
			break;
		
		case 45:
			return "TAT_TAT37U";
			break;
		
		case 46:
			return "TAT_TAT38U";
			break;
		
		case 47:
			return "TAT_RANK20_D";
			break;
		
		case 48:
			return "TAT_TAT40U";
			break;
		
		case 49:
			return "TAT_TAT41U";
			break;
		
		case 50:
			return "TAT_RANK20_D";
			break;
		
		case 51:
			return "TAT_RANK20_D";
			break;
		
		case 52:
			return "TAT_RANK20_D";
			break;
		
		case 53:
			return "TAT_RANK20_D";
			break;
		
		case 69:
			return "TAT_RANK20_D";
			break;
		
		case 57:
			return "TAT_HOLDUP1V_D";
			break;
		
		case 58:
			return "TAT_HOLDUP5V_D";
			break;
		
		case 59:
			return "TAT_HOLDUP10V_D";
			break;
		
		case 60:
			return "TAT_HOLDUP20V_D";
			break;
	}
	return sVar0;
}

char* func_359(int iParam0, int iParam1)//Position - 0x3B159
{
	char* sVar0;
	
	sVar0 = "";
	if (iParam0 == iParam0)
	{
	}
	if (iParam1 == iParam1)
	{
	}
	switch (iParam0)
	{
		case 0:
			return "TAT_FM_HEADBANG";
			break;
		
		case 2:
			return "TAT_CLEAROUT";
			break;
		
		case 9:
			return "TAT_FM_RANK1";
			break;
		
		case 10:
			return "TAT_FM_RANK2";
			break;
		
		case 11:
			return "TAT_FM_RANK3";
			break;
		
		case 4:
			return "TAT_FM_HUST";
			break;
		
		case 1:
			return "TAT_FM_SLAY";
			break;
		
		case 54:
			return "TAT_FM_EVERMODE1";
			break;
		
		case 3:
			return "TAT_FM_ARVANTAKE";
			break;
		
		case 7:
			return "TAT_FM_REVENKIL";
			break;
		
		case 5:
			return "TAT_FM_KILb";
			break;
		
		case 8:
			return "TAT_FM_KIL3RACE";
			break;
		
		case 6:
			return "TAT_FM_RECHOLD";
			break;
		
		case 12:
			return "TAT_RACE50";
			break;
		
		case 13:
			return "TAT_CRANKA";
			break;
		
		case 14:
			return "TAT_CRANKB";
			break;
		
		case 15:
			return "TAT_CRANKC";
			break;
		
		case 16:
			return "TAT_CRANKD";
			break;
		
		case 87:
			return "TAT_FM_REDSKULL";
			break;
		
		case 88:
			return "TAT_FM_BELLE";
			break;
		
		case 89:
			return "TAT_FM_ROCKSTAR";
			break;
		
		case 55:
			return "TAT_FM_MODDED";
			break;
		
		case 17:
			return "TAT_FM_TAT1";
			break;
		
		case 18:
			return "TAT_FM_TAT2";
			break;
		
		case 19:
			return "TAT_FM_TAT3";
			break;
		
		case 20:
			return "TAT_FM_TAT4";
			break;
		
		case 21:
			return "TAT_FM_TAT5";
			break;
		
		case 22:
			return "TAT_FM_TAT6";
			break;
		
		case 56:
			return "TAT_CHEATER";
			break;
	}
	switch (iParam0)
	{
		case 23:
			return "TAT_FM_TAT7";
			break;
		
		case 24:
			return "TAT_FM_TAT8";
			break;
		
		case 25:
			return "TAT_FM_TAT9";
			break;
		
		case 26:
			return "TAT_FM_TAT10";
			break;
		
		case 27:
			return "TAT_FM_TAT11";
			break;
		
		case 28:
			return "TAT_FM_TAT12";
			break;
		
		case 61:
			return "TAT_FM_TAT13";
			break;
		
		case 62:
			return "TAT_FM_TAT14";
			break;
		
		case 63:
			return "TAT_FM_TAT15";
			break;
		
		case 64:
			return "TAT_FM_TAT16";
			break;
		
		case 65:
			return "TAT_FM_TAT38";
			break;
		
		case 29:
			return "TAT_FM_TAT18";
			break;
		
		case 30:
			return "TAT_FM_TAT19";
			break;
		
		case 31:
			return "TAT_FM_TAT20";
			break;
		
		case 66:
			return "TAT_FM_TAT21";
			break;
		
		case 32:
			return "TAT_FM_TAT22";
			break;
		
		case 33:
			return "TAT_FM_TAT23";
			break;
		
		case 34:
			return "TAT_FM_TAT24";
			break;
		
		case 35:
			return "TAT_FM_TAT25";
			break;
		
		case 36:
			return "TAT_FM_TAT26";
			break;
		
		case 37:
			return "TAT_FM_TAT27";
			break;
		
		case 38:
			return "TAT_FM_TAT28";
			break;
		
		case 39:
			return "TAT_FM_TAT29";
			break;
		
		case 40:
			return "TAT_FM_TAT30";
			break;
		
		case 67:
			return "TAT_FM_TAT31";
			break;
		
		case 41:
			return "TAT_FM_TAT32";
			break;
		
		case 68:
			return "TAT_FM_TAT33";
			break;
		
		case 42:
			return "TAT_FM_TAT34";
			break;
		
		case 43:
			return "TAT_FM_TAT35";
			break;
		
		case 44:
			return "TAT_FM_TAT36";
			break;
		
		case 45:
			return "TAT_FM_TAT37";
			break;
		
		case 46:
			return "TAT_FM_TAT41";
			break;
		
		case 47:
			return "TAT_FM_TAT39";
			break;
		
		case 48:
			return "TAT_FM_TAT40";
			break;
		
		case 49:
			return "TAT_FM_TAT17";
			break;
		
		case 50:
			return "TAT_FM_TAT42";
			break;
		
		case 51:
			return "TAT_FM_TAT43";
			break;
		
		case 52:
			return "TAT_FM_TAT44";
			break;
		
		case 53:
			return "TAT_FM_TAT45";
			break;
		
		case 69:
			return "TAT_FM_TAT46";
			break;
		
		case 57:
			return "TAT_HOLDUP1V";
			break;
		
		case 58:
			return "TAT_HOLDUP5V";
			break;
		
		case 59:
			return "TAT_HOLDUP10V";
			break;
		
		case 60:
			return "TAT_HOLDUP20V";
			break;
	}
	return sVar0;
}

bool func_360(int iParam0)//Position - 0x3B65D
{
	var uVar0;
	int iVar1;
	
	uVar0 = func_361(iParam0);
	iVar1 = iParam0;
	return MISC::IS_BIT_SET(uVar0, func_22(iVar1));
}

var func_361(int iParam0)//Position - 0x3B67D
{
	var uVar0;
	
	uVar0 = Global_256EFC.f_403[func_21(iParam0)];
	return uVar0;
}

void func_362(int iParam0, bool bParam1, int iParam2)//Position - 0x3B698
{
	int iVar0;
	int iVar1;
	
	if (func_46(iParam0) == 2903)
	{
		return;
	}
	iVar0 = func_45(iParam0, -1);
	iVar1 = iParam0;
	if (iVar1 > -1)
	{
		if (bParam1)
		{
			MISC::SET_BIT(&iVar0, func_22(iVar1));
		}
		else
		{
			MISC::CLEAR_BIT(&iVar0, func_22(iVar1));
		}
		func_15(func_46(iParam0), iVar0, iParam2, 1);
	}
}

void func_363(int iParam0, int iParam1)//Position - 0x3B6F4
{
	int iVar0;
	
	iVar0 = func_24(iParam0, func_16(iParam1), 0);
	iVar0++;
	if (!func_347(iParam0))
	{
		func_15(iParam0, iVar0, iParam1, 1);
	}
	else
	{
		func_346(iParam0, iVar0, iParam1, 1);
	}
}

int func_364(int iParam0)//Position - 0x3B734
{
	int iVar0;
	int iVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar1 = func_9(iParam0, 8);
	switch (iVar0)
	{
		case joaat("mp_m_freemode_01"):
			if (iVar1 >= 241)
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_41(iVar0, iVar1, 8, 3), joaat("OVER_JACKET"), 0))
				{
					return 1;
				}
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iVar1 >= 136)
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_41(iVar0, iVar1, 8, 4), joaat("OVER_JACKET"), 0))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_365(int iParam0)//Position - 0x3B7AE
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar5 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar1 = 0;
	while (iVar1 <= 8)
	{
		iVar2 = iVar1;
		iVar4 = func_243(iParam0, iVar2);
		if (func_151(iVar5, 14, iVar4))
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
			iVar4 = func_9(iParam0, iVar3);
			if (func_151(iVar5, iVar3, iVar4))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_366(int iParam0, int iParam1, int iParam2)//Position - 0x3B83F
{
	int iVar0;
	
	*iParam1 = 0;
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (iParam2 == -99)
	{
		iParam2 = func_9(iParam0, 11);
	}
	if (func_51(iVar0, iParam2))
	{
		if (iVar0 == joaat("mp_m_freemode_01"))
		{
			if ((iParam2 >= 96 && iParam2 <= 107) || (iParam2 >= 236 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_41(iVar0, iParam2, 11, 3), joaat("DRAW_6"), 0)))
			{
				*iParam1 = 1;
			}
		}
		else if (iVar0 == joaat("mp_f_freemode_01"))
		{
			if (iParam2 >= 160 && iParam2 <= 175)
			{
				*iParam1 = 1;
			}
		}
		return 1;
	}
	return 0;
}

int func_367(int iParam0)//Position - 0x3B8F6
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
			iVar4 = func_243(iParam0, iVar2);
			if (func_152(iVar5, 14, iVar4))
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
				iVar4 = func_9(iParam0, iVar3);
				if (func_152(iVar5, iVar3, iVar4))
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

void func_368(var uParam0)//Position - 0x3B9C7
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = 0;
		bVar1 = func_366(PLAYER::PLAYER_PED_ID(), &iVar0, -99);
		if (MISC::IS_BIT_SET(uParam0->f_21D, 22) != bVar1)
		{
			if (bVar1)
			{
				MISC::SET_BIT(&(uParam0->f_21D), 22);
			}
			else
			{
				MISC::CLEAR_BIT(&(uParam0->f_21D), 22);
			}
			func_653(&(uParam0->f_1F5), &(uParam0->f_1F2), &(uParam0->f_1F3), &(uParam0->f_1F9), &(uParam0->f_1F8), *uParam0, &(uParam0->f_AA), &Global_26C92B, uParam0->f_67, uParam0->f_1FC, 1);
			MISC::SET_BIT(&(uParam0->f_21D), 25);
		}
		iVar2 = func_9(PLAYER::PLAYER_PED_ID(), 11);
		if ((ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == joaat("mp_m_freemode_01") && iVar2 > 237) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_41(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), iVar2, 11, 3), joaat("TUX_JACKET"), 0))
		{
			MISC::SET_BIT(&(uParam0->f_21D), 31);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam0->f_21D), 31);
		}
	}
}

void func_369(char* sParam0)//Position - 0x3BAB4
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

char* func_370(char* sParam0, bool bParam1)//Position - 0x3BB15
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

void func_371(int iParam0, char* sParam1, int iParam2)//Position - 0x3BC8F
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

void func_372(int iParam0)//Position - 0x3BD3E
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
		if (!func_133(&iVar1, 0, iParam0))
		{
			return;
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_4354.f_1336[iVar1 /*10*/], "TOGGLE_MOUSE_BUTTONS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

int func_373(var uParam0, bool bParam1)//Position - 0x3BDE6
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
	struct<14> Var16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	var uVar21;
	int iVar22;
	int iVar23;
	
	if (func_709(1))
	{
		if (uParam0->f_67.f_1 == -1 || Global_26C8BA[uParam0->f_67.f_1])
		{
			return 0;
		}
		iVar0 = Global_26C92B[uParam0->f_67.f_1];
		iVar1 = Global_26C92B.f_6F[uParam0->f_67.f_1];
		iVar2 = -99;
		iVar3 = -99;
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar4 = func_143();
			if (func_90(iVar4))
			{
				Global_15F9E.f_175[iVar4] = iVar1;
				Global_15F9E.f_171[iVar4] = iVar0;
			}
		}
		iVar5 = PLAYER::PLAYER_PED_ID();
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_252.f_2) && !PED::IS_PED_INJURED(uParam0->f_252.f_2))
		{
			iVar5 = uParam0->f_252.f_2;
		}
		iVar6 = ENTITY::GET_ENTITY_MODEL(iVar5);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && uParam0->f_1FC == 5)
		{
			func_427(iVar5, uParam0->f_67.f_1, 0);
			MISC::SET_BIT(&(uParam0->f_21D), 14);
			MISC::CLEAR_BIT(&(uParam0->f_21D), 15);
			return 1;
		}
		iVar7 = 0;
		if (func_328(iVar6, iVar1, iVar0))
		{
			if (func_425(2, func_17()))
			{
				Stack.Push(&iVar5);
				Stack.Push(2);
				Stack.Push(func_17());
				Stack.Push(0);
				Call_Loc(uParam0->f_1F7);
				iVar7 = 1;
			}
		}
		iVar8 = 0;
		if (iVar1 == 12)
		{
			iVar8 = 1;
		}
		iVar9 = -99;
		if (Global_26C92B.f_DF[uParam0->f_67.f_1] == 17)
		{
			Stack.Push(iVar5);
			Stack.Push(3);
			Stack.Push(-1);
			Call_Loc(uParam0->f_1EF);
			iVar9 = StackVal;
		}
		if (Global_26C92B.f_DF[uParam0->f_67.f_1] == 11)
		{
			iVar2 = func_423(iVar5, &(uParam0->f_1F0), MISC::IS_BIT_SET(uParam0->f_21D, 21));
			iVar7 = 1;
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar3 = func_9(iVar5, 11);
			if (func_51(iVar6, iVar3))
			{
			}
			else
			{
				iVar3 = -99;
			}
		}
		if (MISC::IS_BIT_SET(uParam0->f_21E, 0))
		{
			return 1;
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_26C92B.f_DF[uParam0->f_67.f_1] == 10)
		{
			Stack.Push(uParam0->f_235);
			Stack.Push(7);
			Stack.Push(iVar5);
			Stack.Push(7);
			Stack.Push(-1);
			Call_Loc(uParam0->f_1EF);
			if (func_422(StackVal, StackVal, StackVal))
			{
				Stack.Push(iVar5);
				Stack.Push(7);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(0);
				Stack.Push(MISC::IS_BIT_SET(uParam0->f_21D, 21));
				Stack.Push(iVar8);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(0);
				Call_Loc(uParam0->f_1F0);
				iVar7 = 1;
			}
			Stack.Push(uParam0->f_235);
			Stack.Push(14);
			Stack.Push(iVar5);
			Stack.Push(14);
			Stack.Push(2);
			Call_Loc(uParam0->f_1EF);
			if (func_422(StackVal, StackVal, StackVal))
			{
				Stack.Push(iVar5);
				Stack.Push(14);
				Stack.Push(2);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(0);
				Stack.Push(MISC::IS_BIT_SET(uParam0->f_21D, 21));
				Stack.Push(iVar8);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(0);
				Call_Loc(uParam0->f_1F0);
				iVar7 = 1;
			}
		}
		Stack.Push(iVar7);
		Stack.Push(iVar5);
		Stack.Push(iVar1);
		Stack.Push(iVar0);
		Stack.Push(0);
		Stack.Push(-1);
		Stack.Push(0);
		Stack.Push(MISC::IS_BIT_SET(uParam0->f_21D, 21));
		Stack.Push(iVar8);
		Stack.Push(-1);
		Stack.Push(-1);
		Stack.Push(-1);
		Stack.Push(0);
		Call_Loc(uParam0->f_1F0);
		if (StackVal || StackVal)
		{
			if ((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iVar1 == 14) && iVar0 == 0)
			{
				func_421(iVar5, &(uParam0->f_1F0));
			}
			if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iVar1 == 14) && iVar0 == 0)
			{
				func_419(iVar5, &(uParam0->f_1F0));
			}
			if (iVar1 == 10)
			{
				Stack.Push(iVar5);
				Stack.Push(iVar6);
				Stack.Push(10);
				Stack.Push(iVar0);
				Stack.Push(3);
				Stack.Push(0);
				Call_Loc(uParam0->f_1F8);
				iVar10 = StackVal;
				if (iVar10 != -99)
				{
					iVar1 = 3;
					iVar0 = iVar10;
				}
			}
			if (iVar9 != -99)
			{
				Stack.Push(iVar5);
				Stack.Push(3);
				Stack.Push(iVar9);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(0);
				Stack.Push(MISC::IS_BIT_SET(uParam0->f_21D, 21));
				Stack.Push(iVar8);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(0);
				Call_Loc(uParam0->f_1F0);
			}
			if (Global_26C92B.f_DF[uParam0->f_67.f_1] == 11)
			{
				if (iVar2 != -99)
				{
					Stack.Push(iVar5);
					Stack.Push(iVar1);
					Stack.Push(iVar2);
					Stack.Push(1);
					Call_Loc(uParam0->f_1F6);
				}
			}
			else
			{
				iVar11 = iVar0;
				iVar12 = iVar1;
				if ((iVar1 == 11 && iVar3 != -99) && !func_51(iVar6, iVar0))
				{
					iVar13 = iVar0;
					iVar14 = func_417(iVar6, iVar13, iVar3, PED::GET_PED_TEXTURE_VARIATION(iVar5, 11));
					if (iVar14 != -99)
					{
						iVar15 = func_520(iVar6, iVar14, PED::GET_PED_TEXTURE_VARIATION(iVar5, 11));
						Stack.Push((iVar15 != -99 && iVar15 == iVar13));
						Stack.Push(iVar6);
						Stack.Push(8);
						Stack.Push(iVar14);
						Stack.Push(11);
						Stack.Push(iVar3);
						Stack.Push(iVar5);
						Call_Loc(uParam0->f_1FA);
						if (StackVal && StackVal)
						{
							Stack.Push(iVar5);
							Stack.Push(11);
							Stack.Push(iVar3);
							Stack.Push(0);
							Stack.Push(-1);
							Stack.Push(0);
							Stack.Push(MISC::IS_BIT_SET(uParam0->f_21D, 21));
							Stack.Push(iVar8);
							Stack.Push(-1);
							Stack.Push(-1);
							Stack.Push(-1);
							Stack.Push(0);
							Call_Loc(uParam0->f_1F0);
							iVar11 = iVar14;
							iVar12 = 8;
						}
					}
				}
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (iVar1 != 12)
					{
						Stack.Push(iVar5);
						Stack.Push(iVar12);
						Stack.Push(iVar11);
						Stack.Push(1);
						Call_Loc(uParam0->f_1F6);
						if (!func_416(iVar5) && func_415(iVar5))
						{
							Stack.Push(iVar5);
							Stack.Push(1);
							Stack.Push(0);
							Stack.Push(0);
							Stack.Push(-1);
							Stack.Push(0);
							Stack.Push(MISC::IS_BIT_SET(uParam0->f_21D, 21));
							Stack.Push(iVar8);
							Stack.Push(-1);
							Stack.Push(-1);
							Stack.Push(-1);
							Stack.Push(0);
							Call_Loc(uParam0->f_1F0);
						}
					}
				}
				else
				{
					Stack.Push(iVar5);
					Stack.Push(iVar12);
					Stack.Push(iVar11);
					Stack.Push(1);
					Call_Loc(uParam0->f_1F6);
				}
			}
			if (iVar1 == 14 || bParam1)
			{
				Stack.Push(uParam0->f_235);
				Stack.Push(iVar1);
				Stack.Push(iVar0);
				Call_Loc(uParam0->f_1F4);
				Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal };
			}
			func_414(iVar5, iVar1, Var16.f_D, 1);
			if (Global_10A95)
			{
				if (iVar1 != 0)
				{
					MISC::SET_BIT(&(uParam0->f_21D), 14);
					MISC::CLEAR_BIT(&(uParam0->f_21D), 15);
					if (MISC::IS_BIT_SET(uParam0->f_21D, 21))
					{
						if (Global_26C92B.f_DF[uParam0->f_67.f_1] == 11)
						{
							if (iVar2 != -99)
							{
								MISC::SET_BIT(&(uParam0->f_21D), 15);
								MISC::SET_BIT(&(uParam0->f_21D), 28);
								uParam0->f_29A = 11;
								uParam0->f_299 = iVar2;
							}
							else
							{
								iVar17 = func_9(iVar5, 11);
								MISC::SET_BIT(&(uParam0->f_21D), 15);
								MISC::SET_BIT(&(uParam0->f_21D), 28);
								uParam0->f_29A = 11;
								uParam0->f_299 = iVar17;
							}
						}
						else if (iVar1 == 12)
						{
							iVar18 = func_9(iVar5, 11);
							MISC::SET_BIT(&(uParam0->f_21D), 15);
							MISC::SET_BIT(&(uParam0->f_21D), 28);
							uParam0->f_29A = 11;
							uParam0->f_299 = iVar18;
						}
						else
						{
							MISC::SET_BIT(&(uParam0->f_21D), 15);
							MISC::SET_BIT(&(uParam0->f_21D), 28);
							uParam0->f_29A = iVar1;
							uParam0->f_299 = iVar0;
						}
					}
					if (Global_26C6FE[uParam0->f_67.f_1] != 0)
					{
						func_348(Global_26C76D[uParam0->f_67.f_1], 1, -1);
					}
				}
				if (iVar1 == 14 && iVar0 == 0)
				{
					iVar19 = 0;
					while (iVar19 < 12)
					{
						func_389(iVar5, iVar19, -1, -1);
						iVar19++;
					}
				}
			}
			if (func_152(iVar6, iVar1, iVar0))
			{
				if (Global_10A95)
				{
					if (func_388(Global_26C92B.f_6F[uParam0->f_67.f_1], Global_26C92B[uParam0->f_67.f_1]))
					{
						func_342(&uVar21);
						if (MISC::IS_BIT_SET(uParam0->f_21E, 1))
						{
							if ((MISC::GET_HASH_KEY(&uVar21) == MISC::GET_HASH_KEY("CSHOP_UNLOCK_C") || MISC::GET_HASH_KEY(&uVar21) == MISC::GET_HASH_KEY("CSHOP_LCKCREWR")) || MISC::GET_HASH_KEY(&uVar21) == MISC::GET_HASH_KEY("CSHOP_LCKCREWR_TUT"))
							{
								func_555("", 0, 0);
							}
							if (!func_336())
							{
								func_555("CSHOP_UNLOCK_C", 0, 0);
							}
							else
							{
								iVar22 = func_381(PLAYER::PLAYER_ID());
								iVar23 = func_379(iVar22, 0);
								if (func_378(Global_26C92B.f_6F[uParam0->f_67.f_1], Global_26C92B[uParam0->f_67.f_1], &iVar20))
								{
									if (iVar23 < iVar20)
									{
										if (func_377(PLAYER::PLAYER_ID()))
										{
											func_555("CSHOP_LCKCREWR", 0, 0);
										}
										else
										{
											func_555("CSHOP_LCKCREWRT", 0, 0);
										}
										func_324(iVar20);
									}
								}
							}
						}
					}
				}
			}
			if (bParam1)
			{
				func_375(iVar1, iVar0, &Var16);
			}
			if ((iVar6 == joaat("mp_m_freemode_01") && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_41(iVar6, iVar0, 14, 3), joaat("EAR_PIECE"), 1)) || (iVar6 == joaat("mp_f_freemode_01") && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_41(iVar6, iVar0, 14, 4), joaat("EAR_PIECE"), 1)))
			{
				func_374(uParam0, iVar5);
			}
			return 1;
		}
	}
	return 0;
}

void func_374(var uParam0, int iParam1)//Position - 0x3C52D
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1) || PED::IS_PED_INJURED(iParam1))
	{
		return;
	}
	switch (ENTITY::GET_ENTITY_MODEL(iParam1))
	{
		case joaat("mp_m_freemode_01"):
			Stack.Push(iParam1);
			Stack.Push(14);
			Stack.Push(0);
			Call_Loc(uParam0->f_1EF);
			iVar0 = StackVal;
			if (iVar0 >= 131 && iVar0 <= 154)
			{
				Stack.Push(iParam1);
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
				Call_Loc(uParam0->f_1F0);
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			Stack.Push(iParam1);
			Stack.Push(14);
			Stack.Push(0);
			Call_Loc(uParam0->f_1EF);
			iVar0 = StackVal;
			if (iVar0 >= 131 && iVar0 <= 154)
			{
				Stack.Push(iParam1);
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
				Call_Loc(uParam0->f_1F0);
			}
			break;
	}
}

void func_375(int iParam0, int iParam1, var uParam2)//Position - 0x3C5D3
{
	if (func_376(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), iParam0, iParam1))
	{
		PED::SET_PED_HELMET_PROP_INDEX(PLAYER::PLAYER_PED_ID(), uParam2->f_3, 1);
		PED::SET_PED_HELMET_TEXTURE_INDEX(PLAYER::PLAYER_PED_ID(), uParam2->f_4);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_15(576, iParam1, -1, 1);
		}
	}
}

int func_376(int iParam0, int iParam1, int iParam2)//Position - 0x3C619
{
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 >= 131 && iParam2 <= 154) || (iParam2 >= 327 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_41(iParam0, iParam2, 14, 3), joaat("HELMET"), 1)))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 >= 131 && iParam2 <= 154) || (iParam2 >= 327 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_41(iParam0, iParam2, 14, 4), joaat("HELMET"), 1)))
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

bool func_377(int iParam0)//Position - 0x3C6D3
{
	return MISC::IS_BIT_SET(Global_182604[iParam0 /*324*/].f_74, 22);
}

bool func_378(int iParam0, int iParam1, var uParam2)//Position - 0x3C6EC
{
	if (func_20() != 0)
	{
		return 0;
	}
	if (iParam0 != 1)
	{
		return 0;
	}
	*uParam2 = 0;
	if (func_326())
	{
		switch (iParam1)
		{
			case 4:
				*uParam2 = 20;
				break;
			
			case 6:
				*uParam2 = 28;
				break;
			
			case 19:
				*uParam2 = 36;
				break;
			
			case 25:
				*uParam2 = 44;
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 4:
				*uParam2 = 20;
				break;
			
			case 6:
				*uParam2 = 28;
				break;
			
			case 19:
				*uParam2 = 36;
				break;
			
			case 25:
				*uParam2 = 44;
				break;
			}
	}
	return *uParam2 != 0;
}

int func_379(int iParam0, bool bParam1)//Position - 0x3C79B
{
	if (bParam1)
	{
	}
	return func_380(iParam0, 0);
}

int func_380(int iParam0, int iParam1)//Position - 0x3C7AF
{
	int iVar0;
	
	if (iParam1 == 0)
	{
	}
	iVar0 = 0;
	while (iVar0 <= 999)
	{
		if (iVar0 == 999)
		{
			return iVar0;
		}
		else if (Global_42099[iVar0] > iParam0)
		{
			return (iVar0 - 1);
		}
		iVar0++;
	}
	return 999;
}

int func_381(int iParam0)//Position - 0x3C7F8
{
	if (Global_1406D3.f_9 == 0 && NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_383(PLAYER::PLAYER_ID());
			}
			else if (func_382(iParam0))
			{
				return Global_182604[iParam0 /*324*/].f_B4.f_2;
			}
		}
	}
	else
	{
		return Global_146135[func_16(-1)];
	}
	return 0;
}

int func_382(int iParam0)//Position - 0x3C85C
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

var func_383(int iParam0)//Position - 0x3C881
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_387(iParam0) };
	iVar1 = func_385(func_386(&Var0));
	return func_384(iVar1);
}

var func_384(int iParam0)//Position - 0x3C8A6
{
	switch (iParam0)
	{
		case 0:
			return Global_1460C2;
		
		case 1:
			return Global_1460C3;
		
		case 2:
			return Global_1460C4;
		
		case 3:
			return Global_1460C5;
		
		case 4:
			return Global_1460C6;
		
		default:
	}
	return Global_1460C6;
}

int func_385(int iParam0)//Position - 0x3C8FA
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

int func_386(var uParam0)//Position - 0x3C957
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

struct<13> func_387(var uParam0)//Position - 0x3C97A
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(uParam0, &Var0, 13);
	return Var0;
}

int func_388(int iParam0, int iParam1)//Position - 0x3C991
{
	if (func_20() != 0)
	{
		return 0;
	}
	if (iParam0 != 1)
	{
		return 0;
	}
	if (func_326())
	{
		switch (iParam1)
		{
			case 4:
				return 1;
			
			case 6:
				return 1;
			
			case 19:
				return 1;
			
			case 25:
				return 1;
			
			default:
		}
	}
	else
	{
		switch (iParam1)
		{
			case 4:
				return 1;
			
			case 6:
				return 1;
			
			case 19:
				return 1;
			
			case 25:
				return 1;
			}
		
		default:
	}
	return 0;
}

void func_389(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3CA18
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0);
	}
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		Global_10A4F[iVar1] = -1;
		Global_10A4F.f_D[iVar1] = -1;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < Global_10A4F.f_1A)
	{
		Global_10A4F.f_1A[iVar1] = -1;
		Global_10A4F.f_24[iVar1] = -1;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < Global_10A4F.f_2E)
	{
		Global_10A4F.f_2E[iVar1] = -1;
		iVar1++;
	}
	bVar2 = false;
	if (func_409(iParam0, &Global_10A4F, iParam1, &iParam3))
	{
		iVar1 = 0;
		while (iVar1 < 12)
		{
			if (Global_10A4F[iVar1] != -1)
			{
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, iVar1) == Global_10A4F[iVar1] && PED::GET_PED_TEXTURE_VARIATION(iParam0, iVar1) == Global_10A4F.f_D[iVar1])
				{
					if (iVar1 == 2)
					{
						bVar0 = true;
					}
					if (iVar1 == 1)
					{
						bVar2 = true;
					}
					PED::SET_PED_COMPONENT_VARIATION(iParam0, iVar1, 0, 0, 0);
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < Global_10A4F.f_1A)
		{
			if (Global_10A4F.f_1A[iVar1] != -1 && Global_10A4F.f_1A[iVar1] != 255)
			{
				if (PED::GET_PED_PROP_INDEX(iParam0, iVar1) == Global_10A4F.f_1A[iVar1] && PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, iVar1) == Global_10A4F.f_24[iVar1])
				{
					PED::CLEAR_PED_PROP(iParam0, iVar1);
				}
			}
			iVar1++;
		}
		if (bVar0)
		{
			if (!func_408())
			{
				if (func_89(161, -1))
				{
					func_958(iParam0, 2, func_24(2035, Global_10A08, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				else
				{
					func_958(iParam0, 2, func_24(740, Global_10A08, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
			}
		}
		if (iParam1 == 4)
		{
			if (bVar2)
			{
				if (iParam2 != -1 && iParam2 != PLAYER::PLAYER_ID())
				{
					if (NETWORK::NETWORK_HAS_CACHED_PLAYER_HEAD_BLEND_DATA(PLAYER::INT_TO_PLAYERINDEX(iParam2)))
					{
						NETWORK::NETWORK_APPLY_CACHED_PLAYER_HEAD_BLEND_DATA(iParam0, PLAYER::INT_TO_PLAYERINDEX(iParam2));
					}
				}
				else
				{
					func_393(iParam0, -1);
				}
			}
			func_392(0);
			func_390(0, 0);
		}
	}
}

void func_390(bool bParam0, bool bParam1)//Position - 0x3CC32
{
	GRAPHICS::SET_NIGHTVISION(bParam0);
	if (bParam0 == 1)
	{
		if (bParam1)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "THERMAL_VISION_GOGGLES_ON_MASTER", 0, 1);
		}
		MISC::SET_BIT(&(Global_19950D[PLAYER::PLAYER_ID() /*199*/].f_C6), 0);
	}
	else
	{
		if (bParam1)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "THERMAL_VISION_GOGGLES_OFF_MASTER", 0, 1);
		}
		MISC::CLEAR_BIT(&(Global_19950D[PLAYER::PLAYER_ID() /*199*/].f_C6), 0);
	}
	func_391(!bParam0);
}

void func_391(bool bParam0)//Position - 0x3CC94
{
	func_146(192, bParam0, -1, 1);
}

void func_392(int iParam0)//Position - 0x3CCA6
{
	if (Global_26CC4D != iParam0)
	{
		Global_26CC4D = iParam0;
	}
}

void func_393(int iParam0, int iParam1)//Position - 0x3CCBD
{
	struct<10> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	
	if (!PED::HAS_PED_HEAD_BLEND_FINISHED(iParam0))
	{
	}
	PED::GET_PED_HEAD_BLEND_DATA(iParam0, &Var0);
	iVar1 = func_24(2079, iParam1, 0);
	iVar2 = func_24(2080, iParam1, 0);
	iVar3 = func_24(2081, iParam1, 0);
	iVar4 = func_24(2082, iParam1, 0);
	iVar5 = func_24(2083, iParam1, 0);
	iVar6 = func_24(2084, iParam1, 0);
	fVar7 = func_259(134, iParam1);
	fVar8 = func_259(135, iParam1);
	fVar9 = func_259(136, iParam1);
	iVar10 = func_89(160, iParam1);
	if (((((((((Var0 != iVar1 || Var0.f_1 != iVar2) || Var0.f_2 != iVar3) || Var0.f_3 != iVar4) || Var0.f_4 != iVar5) || Var0.f_5 != iVar6) || Var0.f_6 != fVar7) || Var0.f_7 != fVar8) || Var0.f_8 != fVar9) || Var0.f_9 != iVar10)
	{
		PED::SET_PED_HEAD_BLEND_DATA(iParam0, iVar1, iVar2, iVar3, iVar4, iVar5, iVar6, fVar7, fVar8, fVar9, iVar10);
		iVar11 = func_24(2085, iParam1, 0);
		if (iVar11 > 0)
		{
			func_394(&iParam0, iParam1, 0);
		}
	}
}

void func_394(int iParam0, int iParam1, bool bParam2)//Position - 0x3CDFD
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
	var uVar10;
	var uVar11;
	var uVar12;
	int iVar13;
	int iVar14;
	var uVar15;
	
	iVar0 = 0;
	while (iVar0 < 20)
	{
		iVar1 = iVar0;
		iVar2 = func_258(iVar1);
		if (!bParam2)
		{
			fVar3 = func_259(iVar2, iParam1);
		}
		else
		{
			fVar3 = func_407(iVar2, iParam1);
		}
		PED::_SET_PED_FACE_FEATURE(*iParam0, iVar1, fVar3);
		iVar0++;
	}
	iVar4 = 0;
	while (iVar4 < 13)
	{
		iVar5 = func_406(iVar4);
		iVar6 = func_405(iVar5);
		iVar7 = func_404(iVar5);
		if (iVar6 != -1 && iVar7 != -1)
		{
			if (!bParam2)
			{
				uVar10 = func_401(iVar6, iParam1, -1);
				uVar11 = func_259(iVar7, iParam1);
			}
			else
			{
				uVar10 = func_400(iVar6, iParam1);
				uVar11 = func_407(iVar7, iParam1);
			}
			PED::SET_PED_HEAD_OVERLAY(*iParam0, iVar5, uVar10, uVar11);
			iVar8 = func_399(iVar5);
			iVar9 = func_398(iVar5);
			if (iVar8 != -1)
			{
				if (!bParam2)
				{
					iVar13 = func_24(iVar8, iParam1, 0);
					iVar14 = func_24(iVar9, iParam1, 0);
				}
				else
				{
					iVar13 = func_397(iVar8, iParam1);
					iVar14 = func_397(iVar9, iParam1);
				}
				func_396(iVar13, &uVar12, &uVar15);
				PED::_SET_PED_HEAD_OVERLAY_COLOR(*iParam0, iVar5, uVar15, uVar12, iVar14);
			}
		}
		iVar4++;
	}
	func_395(iParam0, iParam1, bParam2);
}

void func_395(var uParam0, int iParam1, bool bParam2)//Position - 0x3CF32
{
	float fVar0;
	
	if (!bParam2)
	{
		fVar0 = func_259(157, iParam1);
	}
	else
	{
		fVar0 = func_407(157, iParam1);
	}
	if (*uParam0 == PLAYER::PLAYER_PED_ID())
	{
	}
	PED::_SET_PED_EYE_COLOR(*uParam0, SYSTEM::ROUND(fVar0));
}

void func_396(int iParam0, var uParam1, var uParam2)//Position - 0x3CF71
{
	int iVar0;
	
	*uParam1 = SYSTEM::SHIFT_RIGHT(iParam0, 16);
	iVar0 = iParam0 & 65535;
	*uParam2 = iVar0;
}

int func_397(int iParam0, int iParam1)//Position - 0x3CF92
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_25744D[iParam0 /*6*/][func_16(iParam1)];
	if (HUD::GET_MENU_PED_INT_STAT(uVar0, &uVar1))
	{
		return uVar1;
	}
	return 0;
}

int func_398(int iParam0)//Position - 0x3CFBD
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

int func_399(int iParam0)//Position - 0x3D009
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

int func_400(int iParam0, int iParam1)//Position - 0x3D055
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_17();
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

int func_401(int iParam0, int iParam1, int iParam2)//Position - 0x3D281
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_17();
	}
	iVar0 = 0;
	iVar1 = func_403(iParam0, iParam1);
	uVar2 = func_402(iParam0);
	if (0 != iVar1)
	{
		if (!STATS::STAT_GET_MASKED_INT(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_402(int iParam0)//Position - 0x3D2C7
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

int func_403(int iParam0, int iParam1)//Position - 0x3D441
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_17();
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

int func_404(int iParam0)//Position - 0x3D593
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

int func_405(int iParam0)//Position - 0x3D632
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

int func_406(int iParam0)//Position - 0x3D6DE
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

float func_407(int iParam0, int iParam1)//Position - 0x3D775
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_25B858[iParam0 /*6*/][func_16(iParam1)];
	if (HUD::GET_MENU_PED_FLOAT_STAT(uVar0, &uVar1))
	{
		return uVar1;
	}
	return 0f;
}

bool func_408()//Position - 0x3D7A0
{
	return Global_141422;
}

int func_409(int iParam0, var uParam1, int iParam2, var uParam3)//Position - 0x3D7AC
{
	struct<5> Var0;
	struct<5> Var1;
	bool bVar2;
	int iVar3;
	struct<27> Var4;
	
	bVar2 = false;
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_m_freemode_01"))
	{
		bVar2 = true;
	}
	switch (iParam2)
	{
		case 0:
			(*uParam1)[1] = 4;
			uParam1->f_D[1] = 0;
			return 1;
			break;
		
		case 1:
			if (bVar2)
			{
				FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_HEIST_M_BERD_2_0"), &Var0);
			}
			else
			{
			}
			(*uParam1)[1] = Var0.f_3;
			uParam1->f_D[1] = Var0.f_4;
		
