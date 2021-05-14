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
	char* sLocal_17 = NULL;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	struct<9> Local_43 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	char* sLocal_44[46] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_45 = 0;
	var uLocal_46[2] = { 0, 0 };
	float fLocal_47 = 0f;
	var uLocal_48 = 0;
	struct<3> Local_49 = { 0, 0, 0 } ;
	int iLocal_50 = 0;
	struct<3> Local_51 = { 0, 0, 0 } ;
	float fLocal_52 = 0f;
	struct<54> Local_53 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_54[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_55 = 0;
	struct<261> Local_56[4];
	char* sLocal_57[13] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char* sLocal_58 = NULL;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	var uLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	char* sLocal_67 = NULL;
	var uLocal_68 = 16;
	var uLocal_69 = 0;
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
	int iLocal_233 = 0;
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
	sLocal_17 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_34 = 3;
	iLocal_42 = 145;
	iLocal_45 = -1;
	fLocal_47 = 0f;
	Local_49 = { 0f, 0f, 0f };
	Local_51 = { 0f, 0f, 0f };
	fLocal_52 = 0f;
	iLocal_55 = 1;
	sLocal_58 = "";
	iLocal_61 = -1;
	iLocal_64 = -1;
	iLocal_66 = -1;
	iLocal_233 = -1;
	if (!func_252(26))
	{
		iLocal_36 = Global_17C49.f_206F.f_80;
		if (iLocal_36 == 2)
		{
			MISC::SET_BIT(&uLocal_48, 10);
			Local_51 = { func_251(25) };
			fLocal_52 = func_250(25);
			if (func_249(&Local_53, 25))
			{
				if (!MISC::IS_BIT_SET(uLocal_48, 14))
				{
					MISC::SET_BIT(&uLocal_48, 14);
				}
			}
		}
	}
	else
	{
		Global_17C49.f_206F.f_80 = iLocal_36;
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82))
	{
		if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() == 2)
		{
			func_240(0);
			func_238(26, 1);
		}
		else
		{
			func_238(26, 0);
		}
	}
	func_233(0);
	while (true)
	{
		if (func_232(38))
		{
			func_238(26, 0);
		}
		if (func_231(PLAYER::PLAYER_PED_ID()))
		{
			func_224();
			func_216();
			func_215();
			func_204();
			switch (iLocal_36)
			{
				case 0:
					func_131();
					break;
				
				case 2:
					func_130();
					break;
				
				case 3:
					func_121();
					break;
				
				case 4:
					func_15(45);
					break;
				
				case 5:
					break;
				
				default:
					break;
			}
			func_7();
		}
		else
		{
			func_1(46, 1);
		}
		SYSTEM::WAIT(0);
	}
}

void func_1(int iParam0, bool bParam1)//Position - 0x1B1
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (46 - 1))
	{
		if (iParam0 != iVar0 && iParam0 != 46)
		{
			func_4(iVar0);
		}
		iVar0++;
	}
	if (bParam1)
	{
		if (iParam0 != 46)
		{
			if ((!func_2(func_3(iParam0)) && !Global_176FC) && !MISC::IS_BIT_SET(uLocal_48, 15))
			{
				MISC::SET_BIT(&uLocal_48, 15);
				HUD::CLEAR_HELP(1);
			}
		}
		else if ((HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !Global_176FC) && !MISC::IS_BIT_SET(uLocal_48, 15))
		{
			MISC::SET_BIT(&uLocal_48, 15);
			HUD::CLEAR_HELP(1);
		}
	}
}

bool func_2(var uParam0)//Position - 0x254
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(uParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

var func_3(int iParam0)//Position - 0x267
{
	return sLocal_44[iParam0];
}

void func_4(int iParam0)//Position - 0x275
{
	int iVar0;
	
	iVar0 = func_6(iParam0);
	MISC::CLEAR_BIT(&(uLocal_46[func_5(iParam0)]), iVar0);
}

int func_5(int iParam0)//Position - 0x295
{
	int iVar0;
	
	if (iParam0 < 32)
	{
		iVar0 = 0;
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_6(int iParam0)//Position - 0x2AF
{
	if (iParam0 > 31)
	{
		return (iParam0 - 32);
	}
	return iParam0;
}

void func_7()//Position - 0x2C8
{
	if (((MISC::IS_BIT_SET(uLocal_48, 0) && !MISC::IS_BIT_SET(uLocal_48, 1)) && !MISC::IS_BIT_SET(uLocal_48, 14)) && func_12())
	{
		if (func_11(0, 172, 0) || func_11(0, 173, 0))
		{
			iLocal_66 = MISC::GET_GAME_TIMER();
		}
		if (iLocal_66 != -1)
		{
			if ((MISC::GET_GAME_TIMER() - iLocal_66) < 200)
			{
				iLocal_42 = func_8();
			}
			else
			{
				iLocal_66 = -1;
			}
		}
	}
	else
	{
		iLocal_42 = 145;
		iLocal_66 = -1;
	}
}

int func_8()//Position - 0x34A
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar2 = 0;
	iVar3 = 145;
	if (Global_10A95)
	{
		iVar3 = 145;
	}
	else if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_3826) == 1)
	{
		if (func_10())
		{
			if (func_9())
			{
				iVar6 = 0;
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_3826, "GET_CURRENT_SELECTION");
				uVar0 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
				iVar4 = MISC::GET_GAME_TIMER();
				while ((!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uVar0) && iVar6 == 0) && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_3826) == 1)
				{
					SYSTEM::WAIT(0);
					iVar5 = MISC::GET_GAME_TIMER();
					if ((iVar5 - iVar4) > 1500)
					{
						iVar6 = 1;
					}
				}
				iVar1 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uVar0);
				if (iVar1 > 147 || iVar1 < 0)
				{
					iVar1 = 147;
				}
				iVar2 = Global_383F[iVar1];
				iVar3 = iVar2;
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_3826) == 0)
				{
					iVar3 = 145;
				}
				if (iVar6 == 1)
				{
					iVar3 = 145;
				}
			}
			else
			{
				iVar3 = 145;
			}
		}
		else
		{
			iVar3 = 145;
		}
	}
	else
	{
		iVar3 = 145;
	}
	return iVar3;
}

int func_9()//Position - 0x431
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_10()//Position - 0x44B
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcontacts")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_11(int iParam0, int iParam1, int iParam2)//Position - 0x465
{
	if (PAD::IS_CONTROL_JUST_PRESSED(iParam0, iParam1) || (iParam2 == 1 && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(iParam0, iParam1)))
	{
		if (MISC::IS_PC_VERSION())
		{
			if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE() && PAD::_IS_USING_KEYBOARD(2)))
			{
				return 0;
			}
		}
		if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_12()//Position - 0x4D7
{
	if (func_14(0) && func_13())
	{
		return 1;
	}
	return 0;
}

int func_13()//Position - 0x4F5
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcontacts")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_14(int iParam0)//Position - 0x512
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

void func_15(int iParam0)//Position - 0x56C
{
	func_103();
	if (iLocal_39 == 0)
	{
		switch (iLocal_40)
		{
			case 0:
				func_102(1);
				uLocal_62 = unk_0x67D02A194A2FC2BD("MP_BIG_MESSAGE_FREEMODE");
				func_1(46, 1);
				iLocal_63 = MISC::GET_GAME_TIMER() + 3000;
				if (!MISC::IS_BIT_SET(uLocal_48, 10))
				{
					func_86();
				}
				func_85(iParam0, 1);
				iLocal_40 = 1;
				break;
			
			case 1:
				if (MISC::GET_GAME_TIMER() > iLocal_63)
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_62))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_62, "SHOW_MISSION_PASSED_MESSAGE");
						func_84("M_FB4P3_P");
						func_84("M_FB4P3");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(100);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						iLocal_63 = MISC::GET_GAME_TIMER() + 10000;
						func_82(0);
						iLocal_40 = 2;
					}
				}
				break;
			
			case 2:
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_62) && AUDIO::IS_MISSION_COMPLETE_READY_FOR_UI())
				{
					if (MISC::GET_GAME_TIMER() < iLocal_63)
					{
						GRAPHICS::DRAW_SCALEFORM_MOVIE(uLocal_62, 0.5f, 0.3f, 1f, 1f, 255, 255, 255, 255, 0);
					}
					else if (MISC::GET_GAME_TIMER() < iLocal_63 + 100)
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_62, "TRANSITION_OUT");
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						iLocal_63 = (iLocal_63 - 100);
					}
					else if (MISC::GET_GAME_TIMER() < iLocal_63 + 500)
					{
						GRAPHICS::DRAW_SCALEFORM_MOVIE(uLocal_62, 0.5f, 0.3f, 1f, 1f, 255, 255, 255, 255, 0);
					}
					else
					{
						iLocal_40 = 3;
					}
				}
				break;
			
			case 3:
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_62))
				{
					GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_62);
				}
				func_102(0);
				if (iLocal_41 == 2)
				{
					func_81(108, 0);
				}
				if (func_79(iLocal_50))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_50, 1);
				}
				func_75("M_FHPE", func_76());
				func_72(2, 0);
				break;
			}
	}
	func_16();
}

void func_16()//Position - 0x711
{
	int iVar0;
	
	if (!MISC::IS_BIT_SET(uLocal_48, 2))
	{
		if (!func_71(0f, 0f, 0f, Local_51))
		{
			if (func_70(PLAYER::PLAYER_PED_ID(), Local_51, 100f) && !func_69())
			{
				if (func_79(func_68(25)))
				{
					iLocal_50 = func_68(25);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_50, 1, 1);
					if (func_79(iLocal_50))
					{
						if (!DECORATOR::DECOR_EXIST_ON(iLocal_50, "GetawayVehicleValid"))
						{
							if (DECORATOR::DECOR_SET_BOOL(iLocal_50, "GetawayVehicleValid", 1))
							{
							}
						}
						MISC::SET_BIT(&uLocal_48, 0);
						MISC::SET_BIT(&uLocal_48, 2);
					}
				}
				else if (!func_67(25, 0))
				{
					if (!func_79(func_68(25)))
					{
						func_63(1);
					}
				}
			}
			else if (func_79(iLocal_50))
			{
				if (!func_70(PLAYER::PLAYER_PED_ID(), Local_51, 100f))
				{
				}
			}
		}
	}
	else
	{
		if (!func_71(0f, 0f, 0f, Local_51))
		{
			if (!func_70(PLAYER::PLAYER_PED_ID(), Local_51, 100f))
			{
				if (func_79(iLocal_50))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_50, 0))
					{
						func_20(iLocal_50, Local_51, fLocal_52, 25, 1);
						MISC::CLEAR_BIT(&uLocal_48, 2);
						VEHICLE::SET_VEHICLE_HAS_BEEN_DRIVEN_FLAG(iLocal_50, 0);
						func_19(&iLocal_50);
						MISC::CLEAR_BIT(&uLocal_48, 0);
					}
					else
					{
						func_63(0);
					}
				}
				else if (!func_67(25, 0))
				{
					func_63(1);
				}
			}
			else if (!func_67(25, 0))
			{
				if (!func_79(iLocal_50))
				{
					func_63(1);
				}
			}
			else if (!func_79(iLocal_50))
			{
				iVar0 = func_68(25);
				if (func_79(iVar0) && iVar0 != iLocal_50)
				{
					iLocal_50 = iVar0;
				}
			}
		}
		func_17();
	}
}

void func_17()//Position - 0x8B2
{
	if (MISC::IS_BIT_SET(uLocal_48, 2) && MISC::IS_BIT_SET(uLocal_48, 0))
	{
		if (func_79(iLocal_50))
		{
			if (func_18(PLAYER::PLAYER_PED_ID(), iLocal_50, 10f))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_50, 1), Local_51) >= 100f)
				{
					func_63(0);
				}
			}
		}
		else if (!func_67(25, 0))
		{
			if (func_79(iLocal_50))
			{
				VEHICLE::SET_VEHICLE_HAS_BEEN_DRIVEN_FLAG(iLocal_50, 0);
			}
			func_19(&iLocal_50);
			func_63(1);
		}
	}
}

bool func_18(int iParam0, int iParam1, float fParam2)//Position - 0x931
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, 1), ENTITY::GET_ENTITY_COORDS(iParam1, 1)) <= (fParam2 * fParam2);
}

void func_19(int iParam0)//Position - 0x951
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		ENTITY::IS_ENTITY_DEAD(*iParam0);
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, 1))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
		}
	}
}

void func_20(int iParam0, struct<3> Param1, float fParam2, int iParam3, bool bParam4)//Position - 0x988
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
		func_62(iParam3);
		Var0.f_9 = 25;
		Var0.f_23 = 2;
		func_58(iParam0, &Var0);
		if (func_71(Param1, 0f, 0f, 0f))
		{
			Param1 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
			fParam2 = ENTITY::GET_ENTITY_HEADING(iParam0);
		}
		if (iParam3 == 24)
		{
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != joaat("vehicle_gen_controller"))
			{
				Global_10A06 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
			}
		}
		func_52(iParam3, Var0, Param1, fParam2, func_57(iParam0));
		func_21(iParam3, iParam0, 0);
	}
}

void func_21(int iParam0, int iParam1, int iParam2)//Position - 0xAB3
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_48(&(Global_10642.f_22B[0 /*21*/]), iParam0))
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
				Global_17C49.f_47C3.f_1099 = func_37();
			}
			if (iParam1 != Global_10642.f_8B[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_68(iParam0);
					if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)) && iParam1 != iVar0)
					{
						func_22(iVar0, 145);
					}
				}
				Global_109CC = iParam1;
				Global_109CD = iParam0;
				Global_109CE = iParam2;
			}
		}
	}
}

void func_22(int iParam0, int iParam1)//Position - 0xBD0
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_23(iParam0))
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
	func_58(iParam0, &(Global_17C49.f_47C3.f_1286));
}

int func_23(int iParam0)//Position - 0xDD1
{
	if ((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) || func_35(iParam0, 0, 0)) || func_35(iParam0, 1, 0)) || func_35(iParam0, 2, 0)) || func_57(iParam0) != 145) || func_34(iParam0)) || func_33(iParam0)) || func_32(iParam0)) || func_31(iParam0)) || !func_24(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (func_33(iParam0))
		{
		}
		if (func_33(iParam0))
		{
		}
		if (func_35(iParam0, 0, 0))
		{
		}
		if (func_35(iParam0, 1, 0))
		{
		}
		if (func_35(iParam0, 2, 0))
		{
		}
		if (func_57(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_24(int iParam0)//Position - 0xEAE
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_25(iParam0))
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

int func_25(int iParam0)//Position - 0x105E
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
		if (!func_30())
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
		if ((((!func_29() && !func_28()) && !func_27()) && !func_26()) && !func_30())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((MISC::IS_DURANGO_VERSION() || MISC::IS_PC_VERSION()) || MISC::IS_ORBIS_VERSION())
		{
		}
		else if (!func_27())
		{
			return 0;
		}
	}
	return 1;
}

int func_26()//Position - 0x122D
{
	return 0;
}

int func_27()//Position - 0x1236
{
	return 1;
}

int func_28()//Position - 0x123F
{
	return 1;
}

int func_29()//Position - 0x1248
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_30()//Position - 0x1261
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

int func_31(int iParam0)//Position - 0x12E4
{
	int iVar0;
	char* sVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	sVar1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0);
	if (iVar0 == joaat("speedo") && MISC::ARE_STRINGS_EQUAL(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_25(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_32(int iParam0)//Position - 0x1328
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

int func_33(int iParam0)//Position - 0x1363
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

int func_34(int iParam0)//Position - 0x13DF
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

int func_35(int iParam0, int iParam1, bool bParam2)//Position - 0x14C7
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_36(iParam1, iVar0, &sVar1, &iVar2))
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

int func_36(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0x1538
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

var func_37()//Position - 0x1608
{
	var uVar0;
	
	func_47(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_46(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_45(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_40(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_39(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_38(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_38(var uParam0, int iParam1)//Position - 0x164E
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

void func_39(var uParam0, int iParam1)//Position - 0x16D4
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_40(var uParam0, int iParam1)//Position - 0x1707
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_44(*uParam0);
	iVar1 = func_42(*uParam0);
	if (iParam1 < 1 || iParam1 > func_41(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_41(int iParam0, int iParam1)//Position - 0x1758
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

var func_42(var uParam0)//Position - 0x17FA
{
	return (SYSTEM::SHIFT_RIGHT(uParam0, 26) & 31 * func_43(MISC::IS_BIT_SET(uParam0, 31), -1, 1)) + 2011;
}

int func_43(bool bParam0, int iParam1, int iParam2)//Position - 0x181F
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_44(var uParam0)//Position - 0x1836
{
	return uParam0 & 15;
}

void func_45(var uParam0, int iParam1)//Position - 0x1843
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_46(var uParam0, int iParam1)//Position - 0x187D
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_47(var uParam0, int iParam1)//Position - 0x18B8
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_48(var uParam0, int iParam1)//Position - 0x18F4
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
			uParam0->f_4 = func_49(0, 1);
			uParam0->f_C = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_49(0, 1);
			uParam0->f_C = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_49(1, 1);
			uParam0->f_C = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_49(1, 2);
			uParam0->f_C = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_49(1, 1);
			uParam0->f_C = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_49(1, 2);
			uParam0->f_C = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_49(2, 1);
			uParam0->f_C = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_49(2, 1);
			uParam0->f_C = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_49(2, 1);
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
			if (func_30())
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
			if (func_30())
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
		if (!func_71(Global_17C49.f_47C3.f_520[uParam0->f_E /*3*/], 0f, 0f, 0f))
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
		if (!func_71(Global_17C49.f_6C1.f_21B.f_9E0[1 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f))
		{
			*uParam0 = { Global_17C49.f_6C1.f_21B.f_9E0[1 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_17C49.f_6C1.f_21B.f_9F5[1 /*4*/][uParam0->f_C];
		}
	}
	else if (MISC::IS_BIT_SET(uParam0->f_9, 20))
	{
		if (!func_71(Global_17C49.f_6C1.f_21B.f_9E0[0 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f))
		{
			*uParam0 = { Global_17C49.f_6C1.f_21B.f_9E0[0 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_17C49.f_6C1.f_21B.f_9F5[0 /*4*/][uParam0->f_C];
		}
	}
	return iVar0;
}

int func_49(int iParam0, int iParam1)//Position - 0x2FE7
{
	struct<58> Var0;
	
	if (func_51(iParam0))
	{
		Var0.f_B = 12;
		Var0.f_1F = 25;
		Var0.f_39 = 2;
		func_50(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_50(int iParam0, var uParam1, int iParam2)//Position - 0x3029
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

bool func_51(int iParam0)//Position - 0x32A1
{
	return iParam0 < 3;
}

void func_52(int iParam0, struct<54> Param1, struct<3> Param2, float fParam3, int iParam4)//Position - 0x32AD
{
	if (func_48(&(Global_10642.f_22B[0 /*21*/]), iParam0))
	{
		if (MISC::IS_BIT_SET(Global_10642.f_22B[0 /*21*/].f_9, 10))
		{
			func_56(iParam0);
			func_55(Param1, &(Global_17C49.f_47C3.f_45[Global_10642.f_22B[0 /*21*/].f_E /*54*/]));
			if (MISC::IS_BIT_SET(Global_10642.f_22B[0 /*21*/].f_9, 11))
			{
				Global_17C49.f_47C3.f_520[Global_10642.f_22B[0 /*21*/].f_E /*3*/] = { Param2 };
				Global_17C49.f_47C3.f_566[Global_10642.f_22B[0 /*21*/].f_E] = fParam3;
			}
			else
			{
				Global_17C49.f_47C3.f_520[Global_10642.f_22B[0 /*21*/].f_E /*3*/] = { 0f, 0f, 0f };
				Global_17C49.f_47C3.f_566[Global_10642.f_22B[0 /*21*/].f_E] = -1f;
			}
			Global_17C49.f_47C3.f_57E[Global_10642.f_22B[0 /*21*/].f_E] = iParam4 + 1;
			func_53(iParam0, 1);
		}
	}
}

void func_53(int iParam0, bool bParam1)//Position - 0x33AF
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_67(iParam0, 0))
		{
			func_54(iParam0, 1, 0);
			func_54(iParam0, 2, 0);
			func_54(iParam0, 3, 0);
			func_54(iParam0, 4, 0);
			func_54(iParam0, 0, 1);
			Global_10642[iParam0] = 1;
		}
	}
	else
	{
		func_54(iParam0, 0, 0);
	}
}

void func_54(int iParam0, int iParam1, bool bParam2)//Position - 0x340C
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

void func_55(struct<54> Param0, var uParam1)//Position - 0x3447
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

void func_56(int iParam0)//Position - 0x3512
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_48(&(Global_10642.f_22B[0 /*21*/]), iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_10642.f_8B[iParam0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_10642.f_8B[iParam0], 1, 1);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_10642.f_8B[iParam0]));
			Global_10642.f_8B[iParam0] = 0;
		}
		if (MISC::IS_BIT_SET(Global_10642.f_22B[0 /*21*/].f_9, 13))
		{
			func_53(iParam0, 0);
		}
	}
}

int func_57(int iParam0)//Position - 0x358C
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

void func_58(int iParam0, var uParam1)//Position - 0x35EF
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		func_61(uParam1);
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
		func_60(&iParam0, &(uParam1->f_9), &(uParam1->f_23));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
			{
				MISC::SET_BIT(&(uParam1->f_35), func_59(iVar0 + 1));
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

int func_59(int iParam0)//Position - 0x389B
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

int func_60(int iParam0, var uParam1, var uParam2)//Position - 0x394B
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

void func_61(var uParam0)//Position - 0x3A25
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

void func_62(int iParam0)//Position - 0x3AD4
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_56(iParam0);
	func_53(iParam0, 0);
}

void func_63(bool bParam0)//Position - 0x3AFB
{
	if (MISC::IS_BIT_SET(uLocal_48, 14))
	{
		if (func_65(PLAYER::PLAYER_PED_ID()) == 0)
		{
			if (bParam0)
			{
				func_64(10);
			}
			else
			{
				func_64(12);
			}
		}
		else if (bParam0)
		{
			func_64(11);
		}
		else
		{
			func_64(13);
		}
		if (iLocal_41 == 0)
		{
			func_85(45, 0);
		}
		else if (iLocal_41 == 1)
		{
			func_85(12, 0);
		}
		else if (iLocal_41 == 2)
		{
			func_85(34, 0);
		}
		if (iLocal_41 != 2)
		{
			Local_49 = { 0f, 0f, 0f };
		}
		iLocal_39 = 0;
		iLocal_40 = 0;
		MISC::CLEAR_BIT(&uLocal_48, 6);
		MISC::CLEAR_BIT(&uLocal_48, 7);
		MISC::CLEAR_BIT(&uLocal_48, 0);
		MISC::CLEAR_BIT(&uLocal_48, 1);
		MISC::CLEAR_BIT(&uLocal_48, 8);
		MISC::CLEAR_BIT(&uLocal_48, 12);
		MISC::CLEAR_BIT(&uLocal_48, 2);
		MISC::CLEAR_BIT(&uLocal_48, 14);
		if (iLocal_36 == 4)
		{
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_62))
			{
				GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_62);
			}
			func_102(0);
		}
		func_72(0, 0);
	}
}

void func_64(int iParam0)//Position - 0x3BE2
{
	int iVar0;
	
	iVar0 = func_6(iParam0);
	MISC::SET_BIT(&(uLocal_46[func_5(iParam0)]), iVar0);
}

int func_65(int iParam0)//Position - 0x3C02
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
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

int func_66(int iParam0)//Position - 0x3C3F
{
	if (func_51(iParam0))
	{
		return Global_17C49.f_744E[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_67(int iParam0, int iParam1)//Position - 0x3C69
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_17C49.f_47C3[iParam0], iParam1);
}

int func_68(int iParam0)//Position - 0x3C8C
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_10642.f_8B[iParam0];
}

int func_69()//Position - 0x3CA8
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_15725.f_2C == 1;
	}
	return 0;
}

bool func_70(int iParam0, struct<3> Param1, float fParam2)//Position - 0x3CC4
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, 1), Param1) <= (fParam2 * fParam2);
}

bool func_71(struct<3> Param0, struct<3> Param1)//Position - 0x3CE1
{
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

void func_72(int iParam0, bool bParam1)//Position - 0x3D0A
{
	Global_17C49.f_206F.f_80 = iParam0;
	iLocal_36 = iParam0;
	if (bParam1)
	{
		return;
	}
	func_73();
}

int func_73()//Position - 0x3D2E
{
	if (func_74(0))
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

bool func_74(bool bParam0)//Position - 0x3D79
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_10B8D, 0);
}

void func_75(char* sParam0, var uParam1)//Position - 0x3DA4
{
	STATS::STAT_SET_GXT_LABEL(joaat("sp_last_mission_name"), sParam0, 1);
	if (MISC::IS_BIT_SET(uParam1, 0))
	{
		STATS::STAT_SET_GXT_LABEL(joaat("sp0_last_mission_name"), sParam0, 1);
	}
	if (MISC::IS_BIT_SET(uParam1, 1))
	{
		STATS::STAT_SET_GXT_LABEL(joaat("sp1_last_mission_name"), sParam0, 1);
	}
	if (MISC::IS_BIT_SET(uParam1, 2))
	{
		STATS::STAT_SET_GXT_LABEL(joaat("sp2_last_mission_name"), sParam0, 1);
	}
}

int func_76()//Position - 0x3DFE
{
	func_77();
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

void func_77()//Position - 0x3E44
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_66(Global_17C49.f_6C1.f_21B.f_C8D) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_65(PLAYER::PLAYER_PED_ID());
			if (func_51(iVar0) && (!func_78(14) || Global_17832))
			{
				if (Global_17C49.f_6C1.f_21B.f_C8D != iVar0 && func_51(Global_17C49.f_6C1.f_21B.f_C8D))
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

bool func_78(int iParam0)//Position - 0x3F41
{
	return Global_8861 == iParam0;
}

int func_79(int iParam0)//Position - 0x3F4F
{
	if (func_80(iParam0))
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

int func_80(int iParam0)//Position - 0x3F79
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_81(int iParam0, int iParam1)//Position - 0x3F99
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_17C49.f_1AD5[iParam0] = 1;
	Global_17C49.f_1AD5.f_EC[iParam0] = (MISC::GET_GAME_TIMER() + iParam1);
}

void func_82(bool bParam0)//Position - 0x3FD6
{
	char* sVar0;
	
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	switch (func_83())
	{
		case 0:
			if (bParam0)
			{
				sVar0 = "MICHAEL_SMALL_01";
			}
			else
			{
				sVar0 = "MICHAEL_BIG_01";
			}
			break;
		
		case 1:
			if (bParam0)
			{
				sVar0 = "FRANKLIN_SMALL_01";
			}
			else
			{
				sVar0 = "FRANKLIN_BIG_01";
			}
			break;
		
		case 2:
			if (bParam0)
			{
				sVar0 = "TREVOR_SMALL_01";
			}
			else
			{
				sVar0 = "TREVOR_BIG_01";
			}
			break;
	}
	AUDIO::PLAY_MISSION_COMPLETE_AUDIO(sVar0);
}

int func_83()//Position - 0x4049
{
	func_77();
	return Global_17C49.f_6C1.f_21B.f_C8D;
}

void func_84(char* sParam0)//Position - 0x4062
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_85(int iParam0, int iParam1)//Position - 0x4074
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

void func_86()//Position - 0x40B9
{
	Global_17C49.f_204E.f_15++;
	if (iLocal_41 == 0)
	{
		STATS::STAT_SET_INT(joaat("fl_co_fb4p3"), Global_17C49.f_204E.f_15, 1);
		if (func_95())
		{
			if (func_232(74) || (func_232(75) && func_94()))
			{
				func_85(46, 1);
			}
		}
	}
	func_87();
	MISC::SET_BIT(&uLocal_48, 10);
}

void func_87()//Position - 0x4127
{
	if (iLocal_41 == 0)
	{
		func_88(23, 0, 0);
	}
	else if (iLocal_41 == 1)
	{
	}
	else if (iLocal_41 == 2)
	{
	}
}

void func_88(int iParam0, int iParam1, int iParam2)//Position - 0x414F
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
		func_92((891 + iParam0), 1, -1, 1);
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
		func_89();
	}
}

void func_89()//Position - 0x4237
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
		func_91(13, SYSTEM::FLOOR(Global_17C49.f_2100.f_F0D));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_10A95)
		{
			if (func_90() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_17B3F = 0;
				}
				if (!Global_D5DE)
				{
					func_73();
				}
			}
		}
	}
}

int func_90()//Position - 0x46F8
{
	return Global_5F7C;
}

int func_91(int iParam0, int iParam1)//Position - 0x4703
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

int func_92(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x4754
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
		iParam2 = func_93();
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

int func_93()//Position - 0x49B1
{
	return Global_1407E1;
}

int func_94()//Position - 0x49BD
{
	if ((func_232(41) && func_232(3)) && func_232(21))
	{
		return 1;
	}
	return 0;
}

int func_95()//Position - 0x49E8
{
	if (iLocal_41 == 0)
	{
		return func_100();
	}
	else if (iLocal_41 == 1)
	{
		return func_99();
	}
	else if (iLocal_41 == 2)
	{
		return func_96();
	}
	return 0;
}

int func_96()//Position - 0x4A1E
{
	if ((func_232(79) && func_232(83)) && func_97(func_98()))
	{
		return 1;
	}
	return 0;
}

int func_97(int iParam0)//Position - 0x4A4C
{
	if (iParam0 == 144 || iParam0 == -1)
	{
		return 0;
	}
	return Global_17C49.f_1CAD.f_63.f_3A[iParam0];
}

int func_98()//Position - 0x4A79
{
	if (iLocal_41 == 0)
	{
		return 45;
	}
	else if (iLocal_41 == 1)
	{
		return 12;
	}
	else if (iLocal_41 == 2)
	{
		return 34;
	}
	return -1;
}

int func_99()//Position - 0x4AA9
{
	if (func_232(68))
	{
		return 1;
	}
	return 0;
}

int func_100()//Position - 0x4ABF
{
	if (func_101(33, 37) >= 4)
	{
		return 1;
	}
	return 0;
}

int func_101(int iParam0, int iParam1)//Position - 0x4AD7
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = iParam0;
	while (iVar1 <= iParam1)
	{
		if (func_232(iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	if (func_97(func_98()))
	{
		iVar0++;
	}
	return iVar0;
}

void func_102(int iParam0)//Position - 0x4B18
{
	Global_10B99 = iParam0;
	Global_10B9A = iParam0;
}

void func_103()//Position - 0x4B2C
{
	struct<6> Var0;
	
	if (iLocal_39 != 0)
	{
		Var0 = { func_120() };
		switch (iLocal_39)
		{
			case 1:
				if (iLocal_41 != 2)
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
					{
						if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() > 0)
						{
							func_119("LOCAUD", Local_43.f_7);
							func_118(1);
							iLocal_39 = 2;
						}
						else if (MISC::IS_BIT_SET(uLocal_48, 10) && AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() == 0)
						{
							func_119("LOCAUD", Local_43.f_7);
							func_118(1);
							iLocal_39 = 2;
						}
					}
				}
				else
				{
					iLocal_39 = 0;
				}
				if (func_117())
				{
					iLocal_39 = 3;
				}
				break;
			
			case 2:
				if (func_117())
				{
					iLocal_39 = 3;
				}
				if (!MISC::IS_BIT_SET(uLocal_48, 10))
				{
					if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() >= 0)
					{
						func_110(Var0);
					}
				}
				else
				{
					iLocal_39 = 3;
				}
				break;
			
			case 3:
				if (!func_109())
				{
					iLocal_39 = 4;
				}
				break;
			
			case 4:
				if (!func_14(0))
				{
					if (iLocal_41 == 1)
					{
						func_108(Local_43.f_8);
					}
					iLocal_39 = 5;
				}
				break;
			
			case 5:
				if (func_83() == 0)
				{
					if (iLocal_41 == 0)
					{
						if (func_95())
						{
							if ((func_232(74) || func_232(75)) && func_94())
							{
								func_104(1);
								iLocal_39 = 0;
							}
							else
							{
								func_104(0);
								iLocal_39 = 0;
							}
						}
						else
						{
							iLocal_39 = 0;
						}
					}
					else
					{
						iLocal_39 = 0;
					}
				}
				else
				{
					if (iLocal_41 == 0)
					{
						if (func_95())
						{
							if (!func_232(3))
							{
								func_81(50, 0);
							}
						}
					}
					iLocal_39 = 0;
				}
				break;
			}
	}
}

void func_104(bool bParam0)//Position - 0x4CA5
{
	if (bParam0)
	{
		func_105(1527885205, 0, func_83(), 23, 3, 6000, 6000, -1, 0, -1, 0);
	}
	else if (!func_232(3))
	{
		func_105(-224691627, 0, func_83(), 23, 3, 6000, 6000, -1, 50, -1, 0);
	}
	else
	{
		func_105(-224691627, 0, func_83(), 23, 3, 6000, 6000, -1, 0, -1, 0);
	}
}

int func_105(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x4D16
{
	struct<15> Var0;
	int iVar1;
	
	if (func_74(0))
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
		Var0.f_3 = func_107(iParam1);
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
		func_106(iParam2);
		return 1;
	}
	return 0;
}

void func_106(int iParam0)//Position - 0x4E67
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_51(iParam0))
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

int func_107(int iParam0)//Position - 0x4F2B
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

void func_108(int iParam0)//Position - 0x4F95
{
	if (Global_61[iParam0 /*10*/].f_8 != 138)
	{
		Global_17C49.f_744E[iParam0 /*29*/].f_C[0] = 0;
		Global_17C49.f_744E[iParam0 /*29*/].f_C[1] = 0;
		Global_17C49.f_744E[iParam0 /*29*/].f_C[2] = 0;
		Global_17C49.f_744E[iParam0 /*29*/].f_18[0] = 0;
		Global_17C49.f_744E[iParam0 /*29*/].f_18[1] = 0;
		Global_17C49.f_744E[iParam0 /*29*/].f_18[2] = 0;
	}
}

int func_109()//Position - 0x5011
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

void func_110(struct<6> Param0)//Position - 0x5036
{
	if (iLocal_41 == 0)
	{
		func_115(Param0);
	}
	else if (iLocal_41 == 1)
	{
		func_111(Param0);
	}
}

void func_111(struct<6> Param0)//Position - 0x505D
{
	if (func_95())
	{
		func_112(Param0, 1);
	}
	else
	{
		func_112(Param0, 0);
	}
}

void func_112(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6)//Position - 0x5081
{
	struct<4> Var0;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&uParam0))
	{
		if (MISC::ARE_STRINGS_EQUAL(&uParam0, Local_43.f_7))
		{
			if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() >= 0)
			{
				if (iLocal_41 == 0)
				{
					Var0 = { func_114(bParam6) };
					func_85(46, 1);
					func_119(sLocal_67, &Var0);
					func_118(1);
				}
				else if (iLocal_41 == 1)
				{
					Var0 = { func_113(bParam6) };
					func_119(sLocal_67, &Var0);
					func_118(1);
				}
				iLocal_39 = 3;
			}
		}
	}
}

struct<4> func_113(bool bParam0)//Position - 0x50F1
{
	struct<4> Var0;
	
	if (bParam0)
	{
		switch (func_83())
		{
			case 1:
				StringCopy(&Var0, "AHF_C8", 16);
				break;
			
			case 0:
				StringCopy(&Var0, "AHF_C5", 16);
				break;
		}
	}
	else
	{
		switch (func_83())
		{
			case 1:
				StringCopy(&Var0, "AHF_C9", 16);
				break;
			
			case 0:
				StringCopy(&Var0, "AHF_C6", 16);
				break;
			}
	}
	return Var0;
}

struct<4> func_114(bool bParam0)//Position - 0x515B
{
	struct<4> Var0;
	
	if (bParam0)
	{
		switch (func_83())
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
		switch (func_83())
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

void func_115(struct<6> Param0)//Position - 0x51C5
{
	if (func_95())
	{
		if (func_116())
		{
			if (func_83() != 0)
			{
				func_112(Param0, 1);
			}
			else
			{
				iLocal_39 = 3;
			}
		}
		else if (func_83() != 0)
		{
			func_112(Param0, 0);
		}
		else
		{
			iLocal_39 = 3;
		}
	}
	else
	{
		iLocal_39 = 3;
	}
}

int func_116()//Position - 0x5212
{
	if (iLocal_41 == 0)
	{
		if ((func_232(74) || func_232(74)) && func_94())
		{
			return 1;
		}
	}
	else if (iLocal_41 == 1)
	{
		if (func_232(68))
		{
			return 1;
		}
	}
	return 0;
}

int func_117()//Position - 0x5259
{
	if (Global_3D7D == 1 || Global_4144 == 1)
	{
		return 1;
	}
	return 0;
}

void func_118(bool bParam0)//Position - 0x527C
{
	AUDIO::STOP_SCRIPTED_CONVERSATION(bParam0);
	if (bParam0)
	{
	}
}

void func_119(char* sParam0, char* sParam1)//Position - 0x5290
{
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		Global_3D85 = 1;
		StringCopy(&Global_3D8C, sParam0, 24);
		StringCopy(&Global_3D86, sParam1, 24);
	}
}

struct<6> func_120()//Position - 0x52B1
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_3D4C == 4)
	{
		return Global_3BCF;
	}
	return Var0;
}

void func_121()//Position - 0x52D5
{
	func_122();
}

void func_122()//Position - 0x52E1
{
	func_128();
	func_123();
}

void func_123()//Position - 0x52F1
{
	if (func_127() == 38)
	{
		if (func_126() && !func_67(25, 0))
		{
			if (Local_53.f_2A != 0)
			{
				func_52(25, Local_53, Local_51, fLocal_52, 145);
			}
		}
	}
	else if (func_127() == -1)
	{
		if (!MISC::IS_BIT_SET(uLocal_48, 1))
		{
			if (!func_70(PLAYER::PLAYER_PED_ID(), Local_49, 5f))
			{
				if (func_125())
				{
					if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
					{
						if (func_124())
						{
							func_64(1);
						}
						else if (Global_17898)
						{
							func_64(2);
						}
						else
						{
							func_64(0);
						}
						iLocal_38 = 1;
						fLocal_47 = 0f;
					}
				}
			}
		}
	}
}

bool func_124()//Position - 0x538F
{
	return SCRIPT::IS_THREAD_ACTIVE(Global_17C49.f_3FE5.f_18B);
}

int func_125()//Position - 0x53A5
{
	if (func_12())
	{
		if (func_83() == 0)
		{
			if (iLocal_42 == 2 || iLocal_42 == 1)
			{
				return 1;
			}
		}
		else if (iLocal_42 == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_126()//Position - 0x53DF
{
	if (Global_15F6A == 10 || Global_15F6A == 9)
	{
		return 1;
	}
	return 0;
}

int func_127()//Position - 0x5403
{
	return Global_10B9B;
}

void func_128()//Position - 0x540F
{
	if (!func_71(Local_51, 0f, 0f, 0f) && func_127() != func_129())
	{
		if (func_70(PLAYER::PLAYER_PED_ID(), Local_51, 60f))
		{
			if (func_79(func_68(25)))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(func_68(25), 1), Local_51) >= 100f)
				{
					func_63(0);
				}
			}
			else if (!func_67(25, 0))
			{
				func_63(1);
			}
		}
	}
}

int func_129()//Position - 0x5489
{
	if (iLocal_41 == 0)
	{
		return 38;
	}
	else if (iLocal_41 == 1)
	{
		return 69;
	}
	else if (iLocal_41 == 2)
	{
		return 85;
	}
	return -1;
}

void func_130()//Position - 0x54B9
{
	func_16();
	func_103();
}

void func_131()//Position - 0x54C9
{
	int iVar0;
	
	func_203();
	func_190();
	func_159();
	func_103();
	func_158();
	if (func_154())
	{
		if (func_132(&iVar0))
		{
			func_240(0);
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID()))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
			}
			if (func_79(iLocal_50))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_50, 2);
			}
			func_72(iVar0, 0);
		}
	}
}

int func_132(var uParam0)//Position - 0x5534
{
	char* sVar0;
	
	if (MISC::IS_BIT_SET(uLocal_48, 0))
	{
		func_146();
		if (func_133())
		{
			sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
			{
				if (iLocal_41 == 2)
				{
					*uParam0 = 1;
				}
				else
				{
					*uParam0 = 4;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_133()//Position - 0x5577
{
	if (func_135(&uLocal_68, Local_43.f_8, sLocal_67, Local_43.f_4, 9, 1, 0, 0, 0))
	{
		iLocal_39 = 1;
		func_134(191, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
		return 1;
	}
	return 0;
}

void func_134(int iParam0, struct<3> Param1)//Position - 0x55B1
{
	int iVar0;
	
	if (HUD::DOES_BLIP_EXIST(Global_60AC[iParam0 /*23*/].f_13))
	{
		HUD::SET_BLIP_COORDS(Global_60AC[iParam0 /*23*/].f_13, Param1);
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Global_60AC[iParam0 /*23*/][iVar0 /*3*/] = { Param1 };
		iVar0++;
	}
}

bool func_135(var uParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)//Position - 0x5600
{
	func_145(uParam0, uParam1, sParam2, iParam6, iParam7, 0);
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
	if (iParam5 == 1)
	{
		Global_3D58 = 1;
	}
	else
	{
		Global_3D58 = 0;
	}
	Global_280001 = 0;
	return func_136(sParam3, iParam4, bParam8);
}

int func_136(char* sParam0, int iParam1, bool bParam2)//Position - 0x565F
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
					func_144();
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
		if (func_143(8, -1))
		{
			return 0;
		}
		Global_3D98 = { Global_3D92 };
		func_142();
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
				func_141();
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
				if (func_140())
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
			if (func_139())
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
			func_138();
			Global_3D56 = bParam2;
		}
		Global_3D4E = iParam1;
		StringCopy(&Global_3BCF, sParam0, 24);
		Global_38DE = 0;
		func_137();
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
		func_144();
	}
	return 0;
}

void func_137()//Position - 0x592B
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

void func_138()//Position - 0x595B
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

int func_139()//Position - 0x59F0
{
	if (Global_3839.f_1 == 1 || Global_3839.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_140()//Position - 0x5A17
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

void func_141()//Position - 0x5AB0
{
	if (func_78(14))
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
		Global_3839 = func_83();
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

void func_142()//Position - 0x5B51
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

bool func_143(int iParam0, int iParam1)//Position - 0x5BA7
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

void func_144()//Position - 0x5BE2
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_413F = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_3839.f_1 == 9) || Global_3838 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_3D4C = 6;
		Global_3839.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_3D4C = 6;
		return;
	}
}

void func_145(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x5C39
{
	Global_3B2A = { *uParam0 };
	Global_62B = uParam1;
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

void func_146()//Position - 0x5C8F
{
	int iVar0;
	
	iVar0 = func_83();
	func_147(iVar0, func_153(iVar0));
}

void func_147(int iParam0, var uParam1)//Position - 0x5CA9
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			Local_43 = 0;
			Local_43.f_1 = "MICHAEL";
			if (iLocal_41 == 0)
			{
				Local_43.f_2 = 1;
				Local_43.f_3 = "FRANKLIN";
				Local_43.f_8 = 5;
			}
			else
			{
				Local_43.f_2 = 3;
				Local_43.f_3 = "LESTER";
				if (iLocal_41 == 1)
				{
					Local_43.f_8 = 6;
				}
				else
				{
					Local_43.f_8 = 12;
				}
			}
			Local_43.f_5 = "FBI_3_FRESP";
			func_151(iParam0);
			break;
		
		case 1:
			Local_43 = 1;
			Local_43.f_1 = "FRANKLIN";
			if (iLocal_41 == 0)
			{
				Local_43.f_2 = 0;
				Local_43.f_3 = "MICHAEL";
				Local_43.f_8 = 9;
			}
			else
			{
				Local_43.f_2 = 3;
				Local_43.f_3 = "LESTER";
				if (iLocal_41 == 1)
				{
					Local_43.f_8 = 7;
				}
				else
				{
					Local_43.f_8 = 12;
				}
			}
			Local_43.f_5 = "FBI_3_MRESP";
			func_151(iParam0);
			break;
		
		case 2:
			Local_43 = 2;
			Local_43.f_1 = "TREVOR";
			if (iLocal_41 == 0)
			{
				Local_43.f_2 = 0;
				Local_43.f_3 = "MICHAEL";
				Local_43.f_8 = 8;
			}
			else
			{
				Local_43.f_2 = 3;
				Local_43.f_3 = "LESTER";
				if (iLocal_41 == 1)
				{
					Local_43.f_8 = 7;
				}
				else
				{
					Local_43.f_8 = 12;
				}
			}
			Local_43.f_5 = "FBI_3_MRESP";
			func_151(iParam0);
			break;
	}
	if (iLocal_41 == 1)
	{
		if (iParam0 == 0)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = 1;
		}
		func_149(Local_43.f_8, iVar0, 0);
	}
	func_148(&uLocal_68, Local_43, PLAYER::PLAYER_PED_ID(), Local_43.f_1, 0, 1);
	func_148(&uLocal_68, Local_43.f_2, 0, Local_43.f_3, 0, 1);
	Local_43.f_4 = uParam1;
}

void func_148(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x5E1F
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

void func_149(int iParam0, int iParam1, bool bParam2)//Position - 0x5EBA
{
	Global_B85 = iParam0;
	if (Global_61[iParam0 /*10*/].f_8 != 138)
	{
		func_141();
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
						func_150();
					}
				}
				else
				{
					Global_B39[1 /*6*/] = { Global_17C49.f_744E[iParam0 /*29*/].f_3 };
					Global_B39[1 /*6*/].f_5 = iParam1;
					func_150();
				}
			}
			else
			{
				Global_B39[1 /*6*/] = { Global_17C49.f_744E[iParam0 /*29*/].f_3 };
				Global_B39[1 /*6*/].f_5 = iParam1;
				func_150();
			}
		}
	}
}

void func_150()//Position - 0x6064
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

void func_151(int iParam0)//Position - 0x60E1
{
	Local_43.f_6 = ZONE::GET_NAME_OF_ZONE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
	func_152(iParam0);
}

void func_152(int iParam0)//Position - 0x6100
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_43.f_6))
	{
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "SanAnd"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M77";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F78";
			}
			else
			{
				Local_43.f_7 = "LOC_T78";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Alamo"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M101";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F1";
			}
			else
			{
				Local_43.f_7 = "LOC_T1";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Alta"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M1";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F2";
			}
			else
			{
				Local_43.f_7 = "LOC_T2";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Airp"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M48";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F49";
			}
			else
			{
				Local_43.f_7 = "LOC_T49";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "ArmyB"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M28";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F29";
			}
			else
			{
				Local_43.f_7 = "LOC_T29";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "BhamCa"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M2";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F3";
			}
			else
			{
				Local_43.f_7 = "LOC_T3";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Banning"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M3";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F4";
			}
			else
			{
				Local_43.f_7 = "LOC_T4";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Baytre"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M4";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F5";
			}
			else
			{
				Local_43.f_7 = "LOC_T5";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Beach"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M93";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F94";
			}
			else
			{
				Local_43.f_7 = "LOC_T94";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "BradT"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M7";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F8";
			}
			else
			{
				Local_43.f_7 = "LOC_T8";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "BradP"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M6";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F7";
			}
			else
			{
				Local_43.f_7 = "LOC_T7";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Burton"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M8";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F9";
			}
			else
			{
				Local_43.f_7 = "LOC_T9";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "CANNY"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M70";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F71";
			}
			else
			{
				Local_43.f_7 = "LOC_T71";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "CCreak"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M10";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F11";
			}
			else
			{
				Local_43.f_7 = "LOC_T11";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "CalafB"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M9";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F10";
			}
			else
			{
				Local_43.f_7 = "LOC_T10";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "ChamH"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M11";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F12";
			}
			else
			{
				Local_43.f_7 = "LOC_T12";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "CHU"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M13";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F14";
			}
			else
			{
				Local_43.f_7 = "LOC_T14";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "CHIL"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M96";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F97";
			}
			else
			{
				Local_43.f_7 = "LOC_T97";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "COSI"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M14";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F15";
			}
			else
			{
				Local_43.f_7 = "LOC_T15";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "CMSW"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M12";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F13";
			}
			else
			{
				Local_43.f_7 = "LOC_T13";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Cypre"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M15";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F16";
			}
			else
			{
				Local_43.f_7 = "LOC_T16";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Davis"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M16";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F17";
			}
			else
			{
				Local_43.f_7 = "LOC_T17";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Desrt"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M32";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F33";
			}
			else
			{
				Local_43.f_7 = "LOC_T33";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "DelBe"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M19";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F20";
			}
			else
			{
				Local_43.f_7 = "LOC_T20";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "DelPe"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M18";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F19";
			}
			else
			{
				Local_43.f_7 = "LOC_T19";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "DelSol"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M41";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F42";
			}
			else
			{
				Local_43.f_7 = "LOC_T42";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Downt"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M20";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F21";
			}
			else
			{
				Local_43.f_7 = "LOC_T21";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "DTVine"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M21";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F22";
			}
			else
			{
				Local_43.f_7 = "LOC_T22";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Eclips"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M24";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F25";
			}
			else
			{
				Local_43.f_7 = "LOC_T25";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "ELSant"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M22";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F23";
			}
			else
			{
				Local_43.f_7 = "LOC_T23";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "EBuro"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M25";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F26";
			}
			else
			{
				Local_43.f_7 = "LOC_T26";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "ELGorl"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M26";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F27";
			}
			else
			{
				Local_43.f_7 = "LOC_T27";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Elysian"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M27";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F28";
			}
			else
			{
				Local_43.f_7 = "LOC_T28";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Galli"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M31";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F32";
			}
			else
			{
				Local_43.f_7 = "LOC_T32";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Galfish"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M29";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F30";
			}
			else
			{
				Local_43.f_7 = "LOC_T30";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Greatc"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M34";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F35";
			}
			else
			{
				Local_43.f_7 = "LOC_T35";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Golf"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M35";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F36";
			}
			else
			{
				Local_43.f_7 = "LOC_T36";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "GrapeS"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M33";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F34";
			}
			else
			{
				Local_43.f_7 = "LOC_T34";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Hawick"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M37";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F38";
			}
			else
			{
				Local_43.f_7 = "LOC_T38";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Harmo"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M36";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F37";
			}
			else
			{
				Local_43.f_7 = "LOC_T37";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Heart"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M38";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F39";
			}
			else
			{
				Local_43.f_7 = "LOC_T39";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "HumLab"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M39";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F40";
			}
			else
			{
				Local_43.f_7 = "LOC_T40";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "HORS"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M97";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F98";
			}
			else
			{
				Local_43.f_7 = "LOC_T98";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Koreat"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M46";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F47";
			}
			else
			{
				Local_43.f_7 = "LOC_T47";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Jail"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M5";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F6";
			}
			else
			{
				Local_43.f_7 = "LOC_T6";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "LAct"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M45";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F46";
			}
			else
			{
				Local_43.f_7 = "LOC_T46";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "LDam"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M44";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F45";
			}
			else
			{
				Local_43.f_7 = "LOC_T45";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Lago"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M43";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F44";
			}
			else
			{
				Local_43.f_7 = "LOC_T44";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "LegSqu"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F";
			}
			else
			{
				Local_43.f_7 = "LOC_T";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "LosSF"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M47";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F48";
			}
			else
			{
				Local_43.f_7 = "LOC_T48";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "LMesa"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M40";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F41";
			}
			else
			{
				Local_43.f_7 = "LOC_T41";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "LosPuer"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M41";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F42";
			}
			else
			{
				Local_43.f_7 = "LOC_T42";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "LosPFy"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M42";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F43";
			}
			else
			{
				Local_43.f_7 = "LOC_T43";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "LOSTMC"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F";
			}
			else
			{
				Local_43.f_7 = "LOC_T";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Mirr"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M50";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F51";
			}
			else
			{
				Local_43.f_7 = "LOC_T51";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Morn"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M52";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F53";
			}
			else
			{
				Local_43.f_7 = "LOC_T53";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Murri"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M56";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F57";
			}
			else
			{
				Local_43.f_7 = "LOC_T57";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "MTChil"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M53";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F54";
			}
			else
			{
				Local_43.f_7 = "LOC_T54";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "MTJose"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M55";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F56";
			}
			else
			{
				Local_43.f_7 = "LOC_T56";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "MTGordo"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M54";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F55";
			}
			else
			{
				Local_43.f_7 = "LOC_T55";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Movie"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M72";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F73";
			}
			else
			{
				Local_43.f_7 = "LOC_T73";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "NCHU"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M57";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F58";
			}
			else
			{
				Local_43.f_7 = "LOC_T58";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Noose"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M84";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F85";
			}
			else
			{
				Local_43.f_7 = "LOC_T85";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Oceana"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M60";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F61";
			}
			else
			{
				Local_43.f_7 = "LOC_T61";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Observ"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M30";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F31";
			}
			else
			{
				Local_43.f_7 = "LOC_T31";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Palmpow"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M64";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F65";
			}
			else
			{
				Local_43.f_7 = "LOC_T65";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "PBOX"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M66";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F67";
			}
			else
			{
				Local_43.f_7 = "LOC_T67";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "PBluff"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M59";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F60";
			}
			else
			{
				Local_43.f_7 = "LOC_T60";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Paleto"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M61";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F62";
			}
			else
			{
				Local_43.f_7 = "LOC_T62";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "PalCov"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M62";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F63";
			}
			else
			{
				Local_43.f_7 = "LOC_T63";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "PalFor"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M63";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F64";
			}
			else
			{
				Local_43.f_7 = "LOC_T64";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "PalHigh"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M65";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F66";
			}
			else
			{
				Local_43.f_7 = "LOC_T66";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "ProcoB"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M68";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F69";
			}
			else
			{
				Local_43.f_7 = "LOC_T69";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Prol"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M58";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F59";
			}
			else
			{
				Local_43.f_7 = "LOC_T59";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "RTRAK"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M71";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F72";
			}
			else
			{
				Local_43.f_7 = "LOC_T72";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Rancho"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M69";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F70";
			}
			else
			{
				Local_43.f_7 = "LOC_T70";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "RGLEN"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M74";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F75";
			}
			else
			{
				Local_43.f_7 = "LOC_T75";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Richm"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M73";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F74";
			}
			else
			{
				Local_43.f_7 = "LOC_T74";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Rockf"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M75";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F76";
			}
			else
			{
				Local_43.f_7 = "LOC_T76";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "SANDY"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M79";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F80";
			}
			else
			{
				Local_43.f_7 = "LOC_T80";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "TongvaH"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M87";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F88";
			}
			else
			{
				Local_43.f_7 = "LOC_T88";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "TongvaV"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M88";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F89";
			}
			else
			{
				Local_43.f_7 = "LOC_T89";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "East_V"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M23";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F24";
			}
			else
			{
				Local_43.f_7 = "LOC_T24";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Zenora"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M80";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F81";
			}
			else
			{
				Local_43.f_7 = "LOC_T81";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Slab"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M81";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F82";
			}
			else
			{
				Local_43.f_7 = "LOC_T82";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "SKID"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M51";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F52";
			}
			else
			{
				Local_43.f_7 = "LOC_T52";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "SLSant"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M82";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F83";
			}
			else
			{
				Local_43.f_7 = "LOC_T83";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Stad"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M49";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F50";
			}
			else
			{
				Local_43.f_7 = "LOC_T50";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Tatamo"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M84";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F85";
			}
			else
			{
				Local_43.f_7 = "LOC_T85";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Termina"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M85";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F86";
			}
			else
			{
				Local_43.f_7 = "LOC_T86";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "TEXTI"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M86";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F87";
			}
			else
			{
				Local_43.f_7 = "LOC_T87";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "WVine"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M99";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F100";
			}
			else
			{
				Local_43.f_7 = "LOC_T100";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "UtopiaG"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M89";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F90";
			}
			else
			{
				Local_43.f_7 = "LOC_T90";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Vesp"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M92";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F93";
			}
			else
			{
				Local_43.f_7 = "LOC_T93";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "VCana"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M94";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F95";
			}
			else
			{
				Local_43.f_7 = "LOC_T95";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Vine"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M95";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F96";
			}
			else
			{
				Local_43.f_7 = "LOC_T96";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "WMirror"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M98";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F99";
			}
			else
			{
				Local_43.f_7 = "LOC_T99";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "WindF"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M76";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F77";
			}
			else
			{
				Local_43.f_7 = "LOC_T77";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Zancudo"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M100";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F101";
			}
			else
			{
				Local_43.f_7 = "LOC_T101";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "SanChia"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M78";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F79";
			}
			else
			{
				Local_43.f_7 = "LOC_T79";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "STRAW"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M83";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F84";
			}
			else
			{
				Local_43.f_7 = "LOC_T84";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "zQ_UAR"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M17";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F18";
			}
			else
			{
				Local_43.f_7 = "LOC_T18";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "ZP_ORT"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M67";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F68";
			}
			else
			{
				Local_43.f_7 = "LOC_T68";
			}
			return;
		}
		if (iParam0 == 0)
		{
			Local_43.f_7 = "LOC_M";
		}
		else if (iParam0 == 1)
		{
			Local_43.f_7 = "LOC_M";
		}
		else
		{
			Local_43.f_7 = "LOC_M";
		}
	}
	else if (iParam0 == 0)
	{
		Local_43.f_7 = "LOC_M";
	}
	else if (iParam0 == 1)
	{
		Local_43.f_7 = "LOC_F";
	}
	else
	{
		Local_43.f_7 = "LOC_T";
	}
}

char* func_153(int iParam0)//Position - 0x798F
{
	char* sVar0;
	
	if (!MISC::IS_BIT_SET(uLocal_48, 10))
	{
		if (iLocal_41 == 0)
		{
			sLocal_67 = "FBIPRAU";
		}
		else if (iLocal_41 == 1)
		{
			sLocal_67 = "AHFAUD";
		}
		else if (iLocal_41 == 2)
		{
			sLocal_67 = "FHFAUD";
		}
		if (iLocal_41 == 0)
		{
			if (iParam0 == 0)
			{
				sVar0 = "FBI_3_MDRPC";
			}
			else if (iParam0 == 1)
			{
				sVar0 = "FBI_3_FDRPC";
			}
			else if (iParam0 == 2)
			{
				sVar0 = "FBI_3_TDRPC";
			}
		}
		else if (iLocal_41 == 1)
		{
			if (iParam0 == 0)
			{
				sVar0 = "AH_MDRPC";
			}
			else if (iParam0 == 1)
			{
				sVar0 = "AH_FDRPC";
			}
			else if (iParam0 == 2)
			{
				sVar0 = "AH_TDRPC";
			}
		}
		else if (iLocal_41 == 2)
		{
			if (iParam0 == 0)
			{
				sVar0 = "FHP_PICKCM";
			}
			else if (iParam0 == 1)
			{
				sVar0 = "FHP_PICKCF";
			}
			else if (iParam0 == 2)
			{
				sVar0 = "FHP_PICKCT";
			}
		}
	}
	else
	{
		sLocal_67 = "FHFAUD";
		if (iParam0 == 0)
		{
			sVar0 = "FHP_MOVEM";
		}
		else if (iParam0 == 1)
		{
			sVar0 = "FHP_MOVEF";
		}
		else if (iParam0 == 2)
		{
			sVar0 = "FHP_MOVET";
		}
	}
	return sVar0;
}

int func_154()//Position - 0x7A9C
{
	if (MISC::IS_BIT_SET(uLocal_48, 0))
	{
		if (func_79(iLocal_50))
		{
			if (MISC::IS_BIT_SET(uLocal_48, 1))
			{
				if ((func_157(0) || func_157(2)) || func_157(1))
				{
					func_1(46, 1);
					func_155();
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_155()//Position - 0x7AEF
{
	if (!MISC::IS_BIT_SET(uLocal_48, 6))
	{
		if (func_79(iLocal_50))
		{
			Local_51 = { ENTITY::GET_ENTITY_COORDS(iLocal_50, 1) };
			fLocal_52 = ENTITY::GET_ENTITY_HEADING(iLocal_50);
			MISC::SET_BIT(&uLocal_48, 6);
			MISC::SET_BIT(&uLocal_48, 2);
			func_58(iLocal_50, &Local_53);
			func_20(iLocal_50, Local_51, fLocal_52, 25, 1);
			MISC::SET_BIT(&uLocal_48, 14);
			func_156(iLocal_50);
		}
	}
}

int func_156(int iParam0)//Position - 0x7B52
{
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "IgnoredByQuickSave"))
	{
		if (DECORATOR::DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", 1))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_157(int iParam0)//Position - 0x7B82
{
	if (Global_41A7 == 0)
	{
		return 0;
	}
	if (Global_61[iParam0 /*10*/].f_8 != 138)
	{
		if (Global_3839.f_1 == 10)
		{
			if (Global_62A == iParam0)
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
	return 0;
}

void func_158()//Position - 0x7BCB
{
	if (MISC::IS_BIT_SET(uLocal_48, 0) && MISC::IS_BIT_SET(uLocal_48, 1))
	{
		if (!MISC::IS_BIT_SET(uLocal_48, 11))
		{
			func_240(1);
		}
	}
	else if (MISC::IS_BIT_SET(uLocal_48, 11))
	{
		func_240(0);
	}
}

void func_159()//Position - 0x7C0D
{
	if ((MISC::IS_BIT_SET(uLocal_48, 0) && Global_8861 == 15) && !func_189())
	{
		if (iLocal_37 == 0)
		{
			if (!MISC::IS_BIT_SET(uLocal_48, 1))
			{
				if (!func_70(PLAYER::PLAYER_PED_ID(), Local_49, 5f))
				{
					if (MISC::IS_BIT_SET(uLocal_48, 20) || func_125())
					{
						if ((func_231(PLAYER::PLAYER_PED_ID()) && !MISC::IS_BIT_SET(uLocal_46[0], 17)) && !MISC::IS_BIT_SET(uLocal_46[1], 18))
						{
							if (PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID()))
							{
								func_188(24, 46);
								if (MISC::IS_BIT_SET(uLocal_48, 0))
								{
									if (!func_187() && func_167(ENTITY::GET_ENTITY_COORDS(iLocal_50, 1)))
									{
										if (func_164(iLocal_50))
										{
											if (func_163(iLocal_50))
											{
												MISC::SET_BIT(&uLocal_48, 1);
												if (func_65(PLAYER::PLAYER_PED_ID()) == 0)
												{
													func_64(7);
													func_1(7, 1);
												}
												else
												{
													func_64(8);
													func_1(8, 1);
												}
												Local_49 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
												return;
											}
										}
									}
									if (MISC::IS_BIT_SET(uLocal_48, 20))
									{
										func_1(46, 0);
										MISC::CLEAR_BIT(&uLocal_48, 20);
										iLocal_233 = -1;
									}
									Local_49 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
								}
							}
							else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
								func_188(7, 8);
								if (MISC::IS_BIT_SET(uLocal_48, 20))
								{
									MISC::CLEAR_BIT(&uLocal_48, 20);
									iLocal_233 = -1;
								}
								else
								{
									func_64(24);
								}
							}
						}
					}
					else if (!func_12())
					{
						if ((PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) && !MISC::IS_BIT_SET(uLocal_48, 20))
						{
							if (iLocal_233 != -1)
							{
								if ((MISC::GET_GAME_TIMER() - iLocal_233) > 1000)
								{
									MISC::SET_BIT(&uLocal_48, 20);
								}
							}
							else
							{
								iLocal_233 = MISC::GET_GAME_TIMER();
							}
						}
						else
						{
							MISC::CLEAR_BIT(&uLocal_48, 20);
						}
					}
				}
				else if (func_12())
				{
					Local_49 = { 0f, 0f, 0f };
				}
			}
			else if (MISC::IS_BIT_SET(uLocal_48, 0))
			{
				if (!func_70(PLAYER::PLAYER_PED_ID(), Local_49, 10f))
				{
					Local_49 = { 0f, 0f, 0f };
					MISC::CLEAR_BIT(&uLocal_48, 1);
					MISC::CLEAR_BIT(&uLocal_48, 20);
					iLocal_233 = -1;
				}
				else if (!PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (!MISC::IS_BIT_SET(uLocal_48, 20))
						{
							func_64(24);
						}
						func_1(24, 1);
						MISC::CLEAR_BIT(&uLocal_48, 1);
						MISC::CLEAR_BIT(&uLocal_48, 20);
						iLocal_233 = -1;
						Local_49 = { 0f, 0f, 0f };
					}
				}
				else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (func_79(iLocal_50))
					{
						if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0) != iLocal_50)
						{
							func_1(46, 0);
							func_161(0);
							func_160();
							Local_49 = { 0f, 0f, 0f };
							MISC::CLEAR_BIT(&uLocal_48, 20);
							iLocal_233 = -1;
						}
					}
				}
				else if (!func_164(iLocal_50))
				{
					func_1(35, 1);
					MISC::CLEAR_BIT(&uLocal_48, 1);
					Local_49 = { 0f, 0f, 0f };
					MISC::CLEAR_BIT(&uLocal_48, 20);
					iLocal_233 = -1;
				}
			}
		}
	}
}

void func_160()//Position - 0x7EF3
{
	MISC::CLEAR_BIT(&uLocal_48, 0);
	MISC::CLEAR_BIT(&uLocal_48, 8);
	MISC::CLEAR_BIT(&uLocal_48, 7);
}

void func_161(int iParam0)//Position - 0x7F11
{
	if (Global_38D7)
	{
		func_162(0, 0);
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
	if (!func_139())
	{
		Global_3839.f_1 = 3;
	}
}

void func_162(bool bParam0, bool bParam1)//Position - 0x7F81
{
	if (bParam0)
	{
		if (func_14(0))
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

int func_163(int iParam0)//Position - 0x7FF5
{
	struct<3> Var0;
	
	if (ENTITY::IS_ENTITY_UPSIDEDOWN(iParam0))
	{
		func_64(39);
		return 0;
	}
	if (!VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(PLAYER::PLAYER_PED_ID(), iParam0, -1, 0, 0) && !VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(PLAYER::PLAYER_PED_ID(), iParam0, 0, 0, 0))
	{
		func_64(37);
		return 0;
	}
	if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
	{
		func_64(36);
		return 0;
	}
	Var0 = { ENTITY::GET_ENTITY_ROTATION(iParam0, 2) };
	if (Var0.x >= 10f || Var0.x <= -10f)
	{
		func_64(42);
		return 0;
	}
	else if (Var0.f_1 >= 15f || Var0.f_1 <= -15f)
	{
		func_64(43);
		return 0;
	}
	return 1;
}

int func_164(int iParam0)//Position - 0x80AE
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	
	iVar0 = 0;
	if (iParam0 != 0)
	{
		if (func_79(iParam0))
		{
			MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var1, &Var2);
			Var1 = { Var1 + Vector(-1f, -1f, -2f) };
			Var2 = { Var2 + Vector(1f, 1f, 2f) };
			if (!MISC::IS_AREA_OCCUPIED(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var1), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var2), 0, 1, 0, 0, 0, iParam0, 0))
			{
				iVar0++;
			}
			else if (func_12())
			{
				func_64(38);
			}
			if (!func_166())
			{
				iVar0++;
			}
			else if (func_12())
			{
				func_64(35);
			}
			if (iVar0 == 2)
			{
				if (func_165(ENTITY::GET_ENTITY_COORDS(iParam0, 1)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_165(struct<3> Param0)//Position - 0x8163
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	
	Var2 = { Param0 + Vector(3.2f, 0f, 0f) };
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var2, &fVar0) && MISC::GET_GROUND_Z_FOR_3D_COORD(Param0, &fVar1))
	{
		if (MISC::ABSF((fVar0 - fVar1)) < 0.9f)
		{
			return 1;
		}
	}
	if (func_12())
	{
		func_64(37);
	}
	return 0;
}

int func_166()//Position - 0x81BB
{
	var uVar0[5];
	int iVar1;
	
	PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
	iVar1 = 0;
	while (iVar1 <= 4)
	{
		if (func_231(uVar0[iVar1]) && uVar0[iVar1] != PLAYER::PLAYER_PED_ID())
		{
			if (SYSTEM::VDIST2(Local_49, ENTITY::GET_ENTITY_COORDS(uVar0[iVar1], 1)) <= 16f)
			{
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

int func_167(struct<3> Param0)//Position - 0x8224
{
	if (!func_183() && !func_182(Param0))
	{
		if (!func_179())
		{
			if (!func_175(Param0))
			{
				if (!func_173(Param0) && !func_168(Param0))
				{
					return 1;
				}
			}
			else
			{
				func_64(0);
			}
		}
	}
	return 0;
}

int func_168(struct<3> Param0)//Position - 0x827D
{
	if (func_171(Param0) || func_169(Param0))
	{
		if (func_12())
		{
			func_64(22);
		}
		return 1;
	}
	return 0;
}

int func_169(struct<3> Param0)//Position - 0x82B0
{
	float fVar0;
	
	fVar0 = SYSTEM::VDIST2(Param0, Global_14E02[func_170(Param0, 0) /*9*/].f_3);
	if (fVar0 <= 40000f)
	{
		return 1;
	}
	return 0;
}

int func_170(struct<3> Param0, bool bParam1)//Position - 0x82E5
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = 7;
	iVar0 = 0;
	while (iVar0 <= (7 - 1))
	{
		if (Global_14E02[iVar0 /*9*/].f_7 != 262)
		{
			if (!bParam1 || MISC::IS_BIT_SET(Global_17C49.f_156E.f_11[iVar0], 0))
			{
				fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Global_14E02[iVar0 /*9*/].f_3, 1);
				if (fVar1 < fVar2)
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

int func_171(struct<3> Param0)//Position - 0x8362
{
	float fVar0;
	
	fVar0 = SYSTEM::VDIST2(Param0, Global_14E42[func_172(Param0, 0) /*9*/].f_3);
	if (fVar0 <= 40000f)
	{
		return 1;
	}
	return 0;
}

int func_172(struct<3> Param0, bool bParam1)//Position - 0x8397
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1E+07f;
	iVar3 = 5;
	iVar0 = 0;
	while (iVar0 <= (5 - 1))
	{
		if (Global_14E42[iVar0 /*9*/].f_7 != 262)
		{
			if (!bParam1 || MISC::IS_BIT_SET(Global_17C49.f_156E.f_B[iVar0], 0))
			{
				fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Global_14E42[iVar0 /*9*/].f_3, 1);
				if (fVar1 < fVar2)
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

int func_173(struct<3> Param0)//Position - 0x8414
{
	struct<3> Var0;
	float fVar1;
	
	if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(Param0, &Var0, 0, 1077936128, 0))
	{
		fVar1 = SYSTEM::VDIST2(Param0, Var0);
		if (fVar1 >= 400f || !func_174(Param0, Var0))
		{
			return 0;
		}
		else if (fVar1 < 20f && fVar1 > 6f)
		{
			if (func_12())
			{
				func_64(40);
			}
			return 1;
		}
		else
		{
			if (func_12())
			{
				func_64(41);
			}
			return 1;
		}
	}
	return 0;
}

int func_174(struct<3> Param0, struct<3> Param1)//Position - 0x849D
{
	float fVar0;
	
	fVar0 = MISC::ABSF((Param0.f_2 - Param1.f_2));
	if (fVar0 <= 5f)
	{
		return 1;
	}
	return 0;
}

int func_175(struct<3> Param0)//Position - 0x84C0
{
	if (!func_178(1))
	{
		if (!func_178(0))
		{
			if (func_176(Param0, 0))
			{
				return 1;
			}
		}
		else if (func_176(Param0, 1))
		{
			return 1;
		}
	}
	if (!func_178(7))
	{
		if (!func_178(4))
		{
			if (func_176(Param0, 4))
			{
				return 1;
			}
		}
		else
		{
			if (func_176(Param0, 5))
			{
				return 1;
			}
			if (func_176(Param0, 6))
			{
				return 1;
			}
		}
	}
	if (func_176(Param0, 2))
	{
		return 1;
	}
	if (func_176(Param0, 3))
	{
		return 1;
	}
	if (!func_178(8))
	{
		if (func_176(Param0, 8))
		{
			return 1;
		}
	}
	if (!func_178(16))
	{
		if (func_176(Param0, 16))
		{
			return 1;
		}
		if (!func_178(15))
		{
			if (func_176(Param0, 15))
			{
				return 1;
			}
			if (!func_178(14))
			{
				if (func_176(Param0, 14))
				{
					return 1;
				}
				if (!func_178(13))
				{
					if (func_176(Param0, 13))
					{
						return 1;
					}
					if (!func_178(12))
					{
						if (func_176(Param0, 12))
						{
							return 1;
						}
						if (!func_178(11))
						{
							if (func_176(Param0, 11))
							{
								return 1;
							}
							if (!func_178(10))
							{
								if (func_176(Param0, 10))
								{
									return 1;
								}
								if (!func_178(9))
								{
									if (func_176(Param0, 9))
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
	if (!func_178(20))
	{
		if (func_176(Param0, 20))
		{
			return 1;
		}
		if (!func_178(19))
		{
			if (func_176(Param0, 19))
			{
				return 1;
			}
			if (!func_178(18))
			{
				if (func_176(Param0, 18))
				{
					return 1;
				}
				if (!func_178(17))
				{
					if (func_176(Param0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (!func_178(21))
	{
		if (func_176(Param0, 21))
		{
			return 1;
		}
	}
	if (!func_178(22))
	{
		if (func_176(Param0, 22))
		{
			return 1;
		}
	}
	if (!func_178(23))
	{
		if (func_176(Param0, 23))
		{
			return 1;
		}
	}
	if (!func_178(24))
	{
		if (func_176(Param0, 24))
		{
			return 1;
		}
	}
	if (!func_178(26))
	{
		if (!func_178(25))
		{
			if (func_176(Param0, 25))
			{
				return 1;
			}
		}
		else if (func_176(Param0, 26))
		{
			return 1;
		}
	}
	if (!func_178(30))
	{
		if (func_176(Param0, 30))
		{
			return 1;
		}
		if (!func_178(29))
		{
			if (func_176(Param0, 29))
			{
				return 1;
			}
			if (!func_178(28))
			{
				if (func_176(Param0, 28))
				{
					return 1;
				}
				if (!func_178(27))
				{
					if (func_176(Param0, 27))
					{
						return 1;
					}
				}
			}
		}
	}
	if (!func_178(31))
	{
		if (func_176(Param0, 31))
		{
			return 1;
		}
	}
	if (!func_178(34))
	{
		if (func_176(Param0, 34))
		{
			return 1;
		}
		if (!func_178(33))
		{
			if (func_176(Param0, 33))
			{
				return 1;
			}
			if (!func_178(32))
			{
				if (func_176(Param0, 32))
				{
					return 1;
				}
			}
		}
	}
	if (!func_178(35))
	{
		if (func_176(Param0, 35))
		{
			return 1;
		}
	}
	if (!func_178(36))
	{
		if (func_176(Param0, 36))
		{
			return 1;
		}
	}
	if (!func_178(43))
	{
		if (func_176(Param0, 43))
		{
			return 1;
		}
		if (!func_178(42))
		{
			if (func_176(Param0, 42))
			{
				return 1;
			}
			if (!func_178(38))
			{
				if (func_176(Param0, 42))
				{
					return 1;
				}
			}
			if (!func_178(39))
			{
				if (func_176(Param0, 42))
				{
					return 1;
				}
			}
			if (!func_178(40))
			{
				if (func_176(Param0, 42))
				{
					return 1;
				}
			}
			if (!func_178(41))
			{
				if (func_176(Param0, 42))
				{
					return 1;
				}
			}
			if (!func_178(37))
			{
				if (func_176(Param0, 42))
				{
					return 1;
				}
			}
		}
	}
	if (!func_178(45))
	{
		if (func_176(Param0, 45))
		{
			return 1;
		}
		if (!func_178(44))
		{
			if (func_176(Param0, 44))
			{
				return 1;
			}
		}
	}
	if (!func_178(51))
	{
		if (func_176(Param0, 51))
		{
			return 1;
		}
		if (!func_178(48))
		{
			if (func_176(Param0, 48))
			{
				return 1;
			}
			if (!func_178(49))
			{
				if (func_176(Param0, 49))
				{
					return 1;
				}
			}
			if (!func_178(50))
			{
				if (func_176(Param0, 50))
				{
					return 1;
				}
			}
			if (!func_178(47))
			{
				if (func_176(Param0, 47))
				{
					return 1;
				}
				if (!func_178(46))
				{
					if (func_176(Param0, 46))
					{
						return 1;
					}
				}
			}
		}
	}
	if (!func_178(53))
	{
		if (func_176(Param0, 53))
		{
			return 1;
		}
		if (!func_178(56))
		{
			if (func_176(Param0, 56))
			{
				return 1;
			}
			if (!func_178(55))
			{
				if (func_176(Param0, 55))
				{
					return 1;
				}
			}
			if (!func_178(54))
			{
				if (func_176(Param0, 54))
				{
					return 1;
				}
			}
			if (!func_178(52))
			{
				if (func_176(Param0, 52))
				{
					return 1;
				}
			}
		}
	}
	if (!func_178(57))
	{
		if (func_176(Param0, 57))
		{
			return 1;
		}
	}
	if (!func_178(62))
	{
		if (func_176(Param0, 62))
		{
			return 1;
		}
		if (!func_178(61))
		{
			if (func_176(Param0, 61))
			{
				return 1;
			}
			if (!func_178(60))
			{
				if (func_176(Param0, 60))
				{
					return 1;
				}
				if (!func_178(59))
				{
					if (func_176(Param0, 59))
					{
						return 1;
					}
					if (!func_178(58))
					{
						if (func_176(Param0, 58))
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

int func_176(struct<3> Param0, int iParam1)//Position - 0x8B33
{
	float fVar0;
	
	fVar0 = SYSTEM::VDIST2(Param0, func_177(iParam1));
	if (fVar0 <= 625f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_177(int iParam0)//Position - 0x8B5B
{
	struct<3> Var0;
	
	if (iParam0 == 0)
	{
		Var0 = { -1604.668f, 5239.1f, 3.01f };
	}
	else if (iParam0 == 1)
	{
		Var0 = { -1592.84f, 5214.04f, 3.01f };
	}
	else if (iParam0 == 2)
	{
		Var0 = { 190.26f, -956.35f, 29.63f };
	}
	else if (iParam0 == 3)
	{
		Var0 = { 190.26f, -956.35f, 29.63f };
	}
	else if (iParam0 == 4)
	{
		Var0 = { 414f, -761f, 29f };
	}
	else if (iParam0 == 5)
	{
		Var0 = { 1199.27f, -1255.63f, 34.23f };
	}
	else if (iParam0 == 6)
	{
		Var0 = { -468.9f, -1713.06f, 18.21f };
	}
	else if (iParam0 == 7)
	{
		Var0 = { 237.65f, -385.41f, 44.4f };
	}
	else if (iParam0 == 8)
	{
		Var0 = { -1458.97f, 485.99f, 115.38f };
	}
	else if (iParam0 == 9)
	{
		Var0 = { -1622.89f, 4204.87f, 83.3f };
	}
	else if (iParam0 == 10)
	{
		Var0 = { 242.7f, 362.7f, 104.74f };
	}
	else if (iParam0 == 11)
	{
		Var0 = { 1835.53f, 4705.86f, 38.1f };
	}
	else if (iParam0 == 12)
	{
		Var0 = { 1826.13f, 4698.88f, 38.92f };
	}
	else if (iParam0 == 13)
	{
		Var0 = { 637.02f, 119.7093f, 89.5f };
	}
	else if (iParam0 == 14)
	{
		Var0 = { -2892.93f, 3192.37f, 11.66f };
	}
	else if (iParam0 == 15)
	{
		Var0 = { 524.43f, 3079.82f, 39.48f };
	}
	else if (iParam0 == 16)
	{
		Var0 = { -697.75f, 45.38f, 43.03f };
	}
	else if (iParam0 == 17)
	{
		Var0 = { -188.22f, 1296.1f, 302.86f };
	}
	else if (iParam0 == 18)
	{
		Var0 = { -954.19f, -2760.05f, 14.64f };
	}
	else if (iParam0 == 19)
	{
		Var0 = { -63.8f, -809.5f, 321.8f };
	}
	else if (iParam0 == 20)
	{
		Var0 = { 1731.41f, 96.96f, 170.39f };
	}
	else if (iParam0 == 21)
	{
		Var0 = { -1877.82f, -440.649f, 45.05f };
	}
	else if (iParam0 == 22)
	{
		Var0 = { 809.66f, 1279.76f, 360.49f };
	}
	else if (iParam0 == 23)
	{
		Var0 = { -915.6f, 6139.2f, 5.5f };
	}
	else if (iParam0 == 24)
	{
		Var0 = { -72.29f, -1260.63f, 28.14f };
	}
	else if (iParam0 == 25)
	{
		Var0 = { 1804.32f, 3931.33f, 32.82f };
	}
	else if (iParam0 == 26)
	{
		Var0 = { -684.17f, 5839.16f, 16.09f };
	}
	else if (iParam0 == 27)
	{
		Var0 = { -1104.93f, 291.25f, 64.3f };
	}
	else if (iParam0 == 28)
	{
		Var0 = { 565.39f, -1772.88f, 29.77f };
	}
	else if (iParam0 == 29)
	{
		Var0 = { 565.39f, -1772.88f, 29.77f };
	}
	else if (iParam0 == 30)
	{
		Var0 = { -1104.93f, 291.25f, 64.3f };
	}
	else if (iParam0 == 31)
	{
		Var0 = { 2726.1f, 4145f, 44.3f };
	}
	else if (iParam0 == 32)
	{
		Var0 = { 327.85f, 3405.7f, 35.73f };
	}
	else if (iParam0 == 33)
	{
		Var0 = { 18f, 4527f, 105f };
	}
	else if (iParam0 == 34)
	{
		Var0 = { -303.82f, 6211.29f, 31.05f };
	}
	else if (iParam0 == 35)
	{
		Var0 = { 1972.59f, 3816.43f, 32.42f };
	}
	else if (iParam0 == 36)
	{
		Var0 = { 0f, 0f, 0f };
	}
	else if (iParam0 == 37)
	{
		Var0 = { -1097.16f, 790.01f, 164.52f };
	}
	else if (iParam0 == 38)
	{
		Var0 = { -558.65f, 284.49f, 90.86f };
	}
	else if (iParam0 == 39)
	{
		Var0 = { -1034.15f, 366.08f, 80.11f };
	}
	else if (iParam0 == 40)
	{
		Var0 = { -623.91f, -266.17f, 37.76f };
	}
	else if (iParam0 == 41)
	{
		Var0 = { -1096.85f, 67.68f, 52.95f };
	}
	else if (iParam0 == 42)
	{
		Var0 = { -1310.7f, -640.22f, 26.54f };
	}
	else if (iParam0 == 43)
	{
		Var0 = { -44.75f, -1288.67f, 28.21f };
	}
	else if (iParam0 == 44)
	{
		Var0 = { 2468.51f, 3437.39f, 49.9f };
	}
	else if (iParam0 == 45)
	{
		Var0 = { 2319.44f, 2583.58f, 46.76f };
	}
	else if (iParam0 == 46)
	{
		Var0 = { -149.75f, 285.81f, 93.67f };
	}
	else if (iParam0 == 47)
	{
		Var0 = { -70.71f, 301.43f, 106.79f };
	}
	else if (iParam0 == 48)
	{
		Var0 = { -257.22f, 292.85f, 90.63f };
	}
	else if (iParam0 == 49)
	{
		Var0 = { 305.52f, 157.19f, 102.94f };
	}
	else if (iParam0 == 50)
	{
		Var0 = { 1040.96f, -534.42f, 60.17f };
	}
	else if (iParam0 == 51)
	{
		Var0 = { -484.2f, 229.68f, 82.21f };
	}
	else if (iParam0 == 52)
	{
		Var0 = { 908f, 3643.7f, 32.2f };
	}
	else if (iParam0 == 54)
	{
		Var0 = { 465.1f, -1849.3f, 27.8f };
	}
	else if (iParam0 == 55)
	{
		Var0 = { -161f, -1669.7f, 33f };
	}
	else if (iParam0 == 56)
	{
		Var0 = { -1298.2f, 2504.14f, 21.09f };
	}
	else if (iParam0 == 53)
	{
		Var0 = { 1181.5f, -400.1f, 67.5f };
	}
	else if (iParam0 == 57)
	{
		Var0 = { -1298.98f, 4640.16f, 105.67f };
	}
	else if ((iParam0 == 58 || iParam0 == 59) || iParam0 == 62)
	{
		Var0 = { -14.39f, -1472.69f, 29.58f };
	}
	else if (iParam0 == 60)
	{
		Var0 = { 0f, 0f, 0f };
	}
	else if (iParam0 == 61)
	{
		Var0 = { 0f, 0f, 0f };
	}
	return Var0;
}

bool func_178(int iParam0)//Position - 0x9238
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_17C49.f_41BC[iParam0 /*6*/], 3);
}

int func_179()//Position - 0x9266
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		iVar1 = 0;
		while (iVar1 <= (Local_56[iVar0 /*261*/].f_101 - 1))
		{
			if (MISC::IS_BIT_SET(Local_56[iVar0 /*261*/].f_102, iVar1))
			{
				if (func_181(sLocal_58))
				{
					if (Local_56[iVar0 /*261*/].f_104 == 0)
					{
						if (func_12())
						{
							func_64(21);
						}
					}
					else if (Local_56[iVar0 /*261*/].f_104 == 2)
					{
						if (func_12())
						{
							func_64(22);
						}
					}
					else if (Local_56[iVar0 /*261*/].f_104 == 1)
					{
						if (func_12())
						{
							func_64(23);
						}
					}
					else if (Local_56[iVar0 /*261*/].f_104 == 3)
					{
						if (func_12())
						{
							func_64(20);
						}
					}
					return 1;
				}
				if (func_180(&(Local_56[iVar0 /*261*/][iVar1 /*8*/])))
				{
					if (Local_56[iVar0 /*261*/].f_104 == 0)
					{
						if (func_12())
						{
							func_64(21);
						}
					}
					else if (Local_56[iVar0 /*261*/].f_104 == 2)
					{
						if (func_12())
						{
							func_64(22);
						}
					}
					else if (Local_56[iVar0 /*261*/].f_104 == 1)
					{
						if (func_12())
						{
							func_64(23);
						}
					}
					else if (Local_56[iVar0 /*261*/].f_104 == 3)
					{
						if (func_12())
						{
							func_64(20);
						}
					}
					return 1;
				}
			}
			iVar1++;
		}
		iVar0++;
	}
	return 0;
}

int func_180(var uParam0)//Position - 0x93C1
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), uParam0->f_1, uParam0->f_4, uParam0->f_7, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_181(char* sParam0)//Position - 0x93EC
{
	int iVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		if (!MISC::IS_STRING_NULL(sLocal_57[iVar0]))
		{
			if (MISC::ARE_STRINGS_EQUAL(sLocal_57[iVar0], sParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_182(struct<3> Param0)//Position - 0x9438
{
	if (Param0.f_2 < -90f)
	{
		return 1;
	}
	if ((SYSTEM::VDIST2(Param0, -89.377f, 92.6583f, 71.2349f) <= 400f || SYSTEM::VDIST2(Param0, -62.0307f, -1839.859f, 25.6787f) <= 400f) || SYSTEM::VDIST2(Param0, -234.7648f, -1150.311f, 21.9224f) <= 400f)
	{
		func_64(21);
		return 1;
	}
	return 0;
}

int func_183()//Position - 0x94C2
{
	int iVar0;
	float fVar1;
	
	iVar0 = func_185(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 145, 1);
	fVar1 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Global_14D9D[iVar0 /*10*/].f_3);
	if (fVar1 <= 10000f)
	{
		if (func_12())
		{
			func_184(iVar0);
		}
		return 1;
	}
	return 0;
}

void func_184(int iParam0)//Position - 0x9514
{
	if (iParam0 == 0 || iParam0 == 1)
	{
		func_64(32);
	}
	else if (iParam0 == 5 || iParam0 == 6)
	{
		func_64(33);
	}
	else if ((iParam0 == 2 || iParam0 == 3) || iParam0 == 4)
	{
		func_64(34);
	}
}

int func_185(struct<3> Param0, int iParam1, int iParam2)//Position - 0x9571
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = 10;
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (Global_14D9D[iVar0 /*10*/].f_7 != 262)
		{
			if (Global_14D9D[iVar0 /*10*/].f_9 == iParam1 || iParam1 == 145)
			{
				if (func_186(iVar0) || iParam2 == 0)
				{
					fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Global_14D9D[iVar0 /*10*/].f_3, 1);
					if (fVar1 < fVar2)
					{
						fVar2 = fVar1;
						iVar3 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

bool func_186(int iParam0)//Position - 0x9600
{
	return MISC::IS_BIT_SET(Global_17C49.f_156E[iParam0], 0);
}

int func_187()//Position - 0x9618
{
	if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 855.7258f, -2344.491f, 29.33145f) <= 52900f)
	{
		if (func_12())
		{
			func_64(28);
		}
		return 1;
	}
	else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1383.21f, -2068.02f, 51.87057f) <= 160000f)
	{
		if (func_12())
		{
			func_64(29);
		}
		return 1;
	}
	return 0;
}

void func_188(int iParam0, int iParam1)//Position - 0x9690
{
	func_4(iParam0);
	if (func_2(func_3(iParam0)))
	{
		HUD::CLEAR_HELP(1);
		MISC::SET_BIT(&uLocal_48, 15);
	}
	if (iParam1 != 46)
	{
		func_4(iParam1);
		if (func_2(func_3(iParam1)))
		{
			HUD::CLEAR_HELP(1);
			MISC::SET_BIT(&uLocal_48, 15);
		}
	}
}

int func_189()//Position - 0x96DF
{
	if (Global_154F9 != -1)
	{
		return MISC::IS_BIT_SET(Global_13D03[Global_154F9 /*34*/].f_F, 13);
	}
	return 0;
}

void func_190()//Position - 0x9705
{
	int iVar0;
	int iVar1;
	
	if ((Global_8861 == 15 && iLocal_37 == 0) && !func_189())
	{
		if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			if (!MISC::IS_BIT_SET(uLocal_48, 0))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (!func_201())
					{
						if (!MISC::IS_BIT_SET(uLocal_48, 7))
						{
							iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
							if (func_79(iVar0))
							{
								if (!func_200(iVar0))
								{
									if (!DECORATOR::DECOR_EXIST_ON(iVar0, "Getaway_Winched"))
									{
										if (func_194(iVar0) && !func_193())
										{
											if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
											{
												if (func_65(PLAYER::PLAYER_PED_ID()) == 0)
												{
													func_64(17);
												}
												else
												{
													func_64(18);
												}
												iLocal_50 = iVar0;
												ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_50, 1, 1);
												if (DECORATOR::DECOR_SET_BOOL(iLocal_50, "GetawayVehicleValid", 1))
												{
												}
												MISC::SET_BIT(&uLocal_48, 0);
												MISC::SET_BIT(&uLocal_48, 8);
												MISC::SET_BIT(&uLocal_48, 7);
												return;
											}
											else
											{
												func_19(&iLocal_50);
												MISC::CLEAR_BIT(&uLocal_48, 7);
												MISC::CLEAR_BIT(&uLocal_48, 0);
												return;
											}
										}
									}
									if (DECORATOR::DECOR_SET_BOOL(iVar0, "GetawayVehicleValid", 0))
									{
									}
									MISC::SET_BIT(&uLocal_48, 7);
								}
								else if (func_192(iVar0))
								{
									iLocal_50 = iVar0;
									ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_50, 1, 1);
									MISC::SET_BIT(&uLocal_48, 0);
									MISC::SET_BIT(&uLocal_48, 8);
									MISC::SET_BIT(&uLocal_48, 7);
									return;
								}
							}
							else
							{
								func_19(&iLocal_50);
								MISC::SET_BIT(&uLocal_48, 7);
								MISC::CLEAR_BIT(&uLocal_48, 0);
							}
						}
						else if (MISC::IS_BIT_SET(uLocal_48, 0))
						{
							if (!func_79(iLocal_50))
							{
								func_19(&iLocal_50);
								MISC::SET_BIT(&uLocal_48, 0);
								MISC::SET_BIT(&uLocal_48, 8);
								MISC::SET_BIT(&uLocal_48, 7);
							}
						}
					}
				}
				else if (MISC::IS_BIT_SET(uLocal_48, 8))
				{
					iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					if (func_79(iVar1))
					{
						if (func_18(PLAYER::PLAYER_PED_ID(), iVar1, 10f) && !DECORATOR::DECOR_EXIST_ON(iVar1, "Getaway_Winched"))
						{
							iLocal_50 = iVar1;
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_50, 1, 1);
							MISC::SET_BIT(&uLocal_48, 0);
							MISC::SET_BIT(&uLocal_48, 7);
						}
					}
				}
				else
				{
					MISC::CLEAR_BIT(&uLocal_48, 7);
				}
			}
			else if (func_79(iLocal_50))
			{
				if (!func_18(PLAYER::PLAYER_PED_ID(), iLocal_50, 80f))
				{
					if (!DECORATOR::DECOR_EXIST_ON(iLocal_50, "Getaway_Winched"))
					{
						MISC::SET_BIT(&(uLocal_46[func_5(5)]), 5);
						MISC::SET_BIT(&uLocal_48, 8);
					}
					else
					{
						MISC::CLEAR_BIT(&uLocal_48, 8);
					}
					func_19(&iLocal_50);
					MISC::CLEAR_BIT(&uLocal_48, 0);
					MISC::CLEAR_BIT(&uLocal_48, 7);
				}
				else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0) != iLocal_50)
					{
						func_19(&iLocal_50);
						func_188(17, 46);
						func_188(18, 46);
						func_188(14, 46);
						func_160();
					}
					else if (func_201())
					{
						func_19(&iLocal_50);
						func_160();
					}
				}
				else if (!func_191(iLocal_50))
				{
					if (DECORATOR::DECOR_SET_BOOL(iLocal_50, "GetawayVehicleValid", 0))
					{
					}
					func_188(17, 46);
					func_188(18, 46);
					func_19(&iLocal_50);
					func_160();
				}
			}
			else
			{
				func_19(&iLocal_50);
				func_160();
			}
		}
	}
}

int func_191(int iParam0)//Position - 0x99E9
{
	if (ENTITY::GET_ENTITY_HEALTH(iParam0) < 300 || VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iParam0) < 300f)
	{
		func_64(6);
		return 0;
	}
	return 1;
}

int func_192(int iParam0)//Position - 0x9A1A
{
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "GetawayVehicleValid"))
	{
		if (DECORATOR::DECOR_GET_BOOL(iParam0, "GetawayVehicleValid"))
		{
			return 1;
		}
	}
	return 0;
}

int func_193()//Position - 0x9A3F
{
	if (PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()))
	{
		if ((VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0) == PLAYER::PLAYER_PED_ID() || VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1) == PLAYER::PLAYER_PED_ID()) || VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 2) == PLAYER::PLAYER_PED_ID())
		{
			return 1;
		}
	}
	return 0;
}

int func_194(int iParam0)//Position - 0x9A9F
{
	if (func_199() && func_195(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_195(int iParam0)//Position - 0x9ABE
{
	if ((func_197(iParam0) && !func_196(iParam0)) && func_191(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_196(int iParam0)//Position - 0x9AEB
{
	int iVar0;
	
	iVar0 = func_57(iParam0);
	if (iVar0 == 0)
	{
		func_64(25);
		return 1;
	}
	if (iVar0 == 1)
	{
		func_64(26);
		return 1;
	}
	if (iVar0 == 2)
	{
		func_64(27);
		return 1;
	}
	if (func_32(iParam0))
	{
		func_64(14);
		return 1;
	}
	return 0;
}

int func_197(int iParam0)//Position - 0x9B3F
{
	int iVar0;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (!func_198(iVar0))
	{
		if (VEHICLE::GET_VEHICLE_MODEL_ACCELERATION(iVar0) > 0.165f && VEHICLE::GET_VEHICLE_MODEL_ESTIMATED_MAX_SPEED(iVar0) > 31f)
		{
			return 1;
		}
	}
	func_64(14);
	return 0;
}

int func_198(int iParam0)//Position - 0x9B84
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iLocal_54[iVar0] == iParam0)
		{
			if (iVar0 == 0 && !func_232(33))
			{
				MISC::SET_BIT(&uLocal_48, 3);
			}
			else if (iVar0 == 1 && !func_232(34))
			{
				MISC::SET_BIT(&uLocal_48, 3);
			}
			else
			{
				MISC::CLEAR_BIT(&uLocal_48, 3);
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_199()//Position - 0x9BF0
{
	if ((((PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_POLICE_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID()))
	{
		func_64(14);
		return 0;
	}
	return 1;
}

int func_200(int iParam0)//Position - 0x9C46
{
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "GetawayVehicleValid"))
	{
		return 1;
	}
	return 0;
}

int func_201()//Position - 0x9C5F
{
	int iVar0;
	
	if (func_202(&iVar0))
	{
		if (!DECORATOR::DECOR_EXIST_ON(iVar0, "Getaway_Winched"))
		{
			DECORATOR::DECOR_SET_BOOL(iVar0, "Getaway_Winched", 1);
			func_64(16);
			return 1;
		}
		else if (DECORATOR::DECOR_GET_BOOL(iVar0, "Getaway_Winched"))
		{
			return 0;
		}
	}
	return 0;
}

int func_202(var uParam0)//Position - 0x9CA9
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_231(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (func_79(iVar0))
		{
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			if ((iVar1 == joaat("cargobob") || iVar1 == joaat("cargobob2")) || iVar1 == joaat("cargobob3"))
			{
				if (VEHICLE::DOES_CARGOBOB_HAVE_PICK_UP_ROPE(iVar0))
				{
					iVar2 = VEHICLE::GET_VEHICLE_ATTACHED_TO_CARGOBOB(iVar0);
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						*uParam0 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar2);
						if (func_79(*uParam0))
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

void func_203()//Position - 0x9D3A
{
	switch (iLocal_55)
	{
		case 0:
			if (MISC::IS_BIT_SET(uLocal_48, 0))
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_61) > 500)
				{
					sLocal_58 = ZONE::GET_NAME_OF_ZONE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
					iLocal_55 = 1;
				}
				else if (iLocal_61 == -1)
				{
					iLocal_61 = MISC::GET_GAME_TIMER();
				}
			}
			break;
		
		case 1:
			if ((MISC::GET_GAME_TIMER() - Local_56[iLocal_60 /*261*/].f_103) > 500)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_58) && !MISC::IS_STRING_NULL_OR_EMPTY(Local_56[iLocal_60 /*261*/][iLocal_59 /*8*/]))
				{
					if (MISC::ARE_STRINGS_EQUAL(sLocal_58, Local_56[iLocal_60 /*261*/][iLocal_59 /*8*/]))
					{
						MISC::SET_BIT(&(Local_56[iLocal_60 /*261*/].f_102), iLocal_59);
					}
					else
					{
						MISC::CLEAR_BIT(&(Local_56[iLocal_60 /*261*/].f_102), iLocal_59);
					}
				}
				else
				{
					sLocal_58 = ZONE::GET_NAME_OF_ZONE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
				}
				iLocal_59++;
				if (iLocal_59 >= (Local_56[iLocal_60 /*261*/].f_101 - 1))
				{
					iLocal_59 = 0;
					Local_56[iLocal_60 /*261*/].f_103 = MISC::GET_GAME_TIMER();
					iLocal_60++;
					if (iLocal_60 >= 4)
					{
						iLocal_60 = 0;
						iLocal_61 = MISC::GET_GAME_TIMER();
						iLocal_55 = 0;
					}
				}
			}
			break;
	}
}

void func_204()//Position - 0x9E6B
{
	int iVar0;
	int iVar1;
	
	if (((((((Global_8861 == 15 && iLocal_36 != 3) && MISC::IS_BIT_SET(uLocal_48, 5)) && !func_189()) && Global_10A92 == -1) && !func_214()) && !func_78(9)) || func_97(35))
	{
		func_213();
		func_211();
		switch (iLocal_38)
		{
			case 0:
				if (MISC::IS_BIT_SET(uLocal_48, 17))
				{
					iVar0 = -1;
					while (iVar0 < (36 - 1))
					{
						iVar0++;
						if (iVar0 != 46)
						{
							func_210(uLocal_46[0], &iVar0);
						}
					}
					MISC::CLEAR_BIT(&uLocal_48, 17);
				}
				else
				{
					iVar0 = 31;
					while (iVar0 < (46 - 1))
					{
						iVar0++;
						if (iVar0 != 46)
						{
							func_210(uLocal_46[1], &iVar0);
						}
					}
					MISC::SET_BIT(&uLocal_48, 17);
				}
				break;
			
			case 1:
			case 2:
			case 3:
			case 4:
				func_205(iLocal_45, 1);
				break;
		}
	}
	else if (((((((Global_8861 != 15 || Global_8861 != 0) || Global_8861 != 2) || Global_8861 != 4) || Global_8861 != 17) || func_189()) || Global_10A92 == -1) || Global_17898)
	{
		iVar1 = 0;
		if (func_124())
		{
			iVar1 = 1;
		}
		else if (Global_17898)
		{
			iVar1 = 2;
		}
		if (MISC::IS_BIT_SET(uLocal_46[func_5(iVar1)], iVar1))
		{
			func_205(iVar1, 0);
		}
	}
}

void func_205(int iParam0, bool bParam1)//Position - 0x9FFC
{
	switch (iLocal_38)
	{
		case 1:
			if ((!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !func_208(func_83())) && !func_207())
			{
				func_206(func_3(iParam0), 15000);
				iLocal_38 = 2;
			}
			break;
		
		case 2:
			if (func_2(func_3(iParam0)))
			{
				fLocal_47 = 0f;
				iLocal_38 = 3;
			}
			else
			{
				fLocal_47 = (fLocal_47 + MISC::GET_FRAME_TIME());
				if (fLocal_47 >= 20f)
				{
					iLocal_38 = 4;
				}
				else if (MISC::IS_BIT_SET(uLocal_48, 15))
				{
					func_4(iParam0);
					MISC::CLEAR_BIT(&uLocal_48, 15);
					iLocal_38 = 4;
				}
			}
			break;
		
		case 3:
			if (!func_2(func_3(iParam0)))
			{
				if (fLocal_47 >= 7.5f || MISC::IS_BIT_SET(uLocal_48, 15))
				{
					func_4(iParam0);
					MISC::CLEAR_BIT(&uLocal_48, 15);
					iLocal_38 = 4;
				}
				else if (bParam1)
				{
					iLocal_38 = 0;
				}
				else
				{
					iLocal_38 = 1;
					fLocal_47 = 0f;
				}
			}
			else
			{
				fLocal_47 = (fLocal_47 + MISC::GET_FRAME_TIME());
			}
			break;
		
		case 4:
			fLocal_47 = 0f;
			iLocal_38 = 0;
			break;
	}
}

void func_206(var uParam0, int iParam1)//Position - 0xA10C
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(uParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

int func_207()//Position - 0xA123
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_208(int iParam0)//Position - 0xA13D
{
	int iVar0;
	
	if (func_51(iParam0))
	{
		if (func_209(iParam0))
		{
			iVar0 = 0;
			while (iVar0 < Global_17C49.f_1738.f_88)
			{
				if (Global_17C49.f_1738[iVar0 /*15*/].f_3 == 5)
				{
					return 1;
				}
				iVar0++;
			}
		}
	}
	return 0;
}

int func_209(int iParam0)//Position - 0xA187
{
	int iVar0;
	
	if (!func_51(iParam0))
	{
	}
	iVar0 = 0;
	while (iVar0 < Global_17C49.f_1738.f_88)
	{
		if (MISC::IS_BIT_SET(Global_17C49.f_1738[iVar0 /*15*/].f_2, iParam0))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_17C49.f_1738.f_2FC)
	{
		if (MISC::IS_BIT_SET(Global_17C49.f_1738.f_28B[iVar0 /*14*/].f_2, iParam0))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_17C49.f_1738.f_362)
	{
		if (MISC::IS_BIT_SET(Global_17C49.f_1738.f_2FD[iVar0 /*10*/].f_2, iParam0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_210(var uParam0, int iParam1)//Position - 0xA23E
{
	int iVar0;
	
	iVar0 = func_6(*iParam1);
	if (MISC::IS_BIT_SET(uParam0, iVar0))
	{
		if (!MISC::IS_BIT_SET(uLocal_48, 3))
		{
			iLocal_45 = *iParam1;
			iLocal_38 = 1;
			fLocal_47 = 0f;
			func_4(44);
			func_4(45);
			iLocal_64 = MISC::GET_GAME_TIMER();
			*iParam1 = 46;
		}
		else if (14 == iVar0)
		{
			func_4(iVar0);
			*iParam1 = 46;
		}
		else
		{
			iLocal_45 = *iParam1;
			iLocal_38 = 1;
			fLocal_47 = 0f;
			*iParam1 = 46;
		}
	}
}

void func_211()//Position - 0xA2B0
{
	if (iLocal_36 == 0 || iLocal_36 == 1)
	{
		switch (iLocal_37)
		{
			case 0:
				if (func_212(func_3(3), 0, 0))
				{
					MISC::SET_BIT(&uLocal_48, 15);
					HUD::CLEAR_HELP(1);
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					if (((((((!func_2(func_3(7)) && !func_2(func_3(8))) && !func_2(func_3(10))) && !func_2(func_3(11))) && !func_2(func_3(12))) && !func_2(func_3(13))) && !func_124()) && !Global_176FC)
					{
						MISC::SET_BIT(&uLocal_48, 15);
						HUD::CLEAR_HELP(1);
					}
					iLocal_37 = 1;
				}
				break;
			
			case 1:
				if (MISC::IS_BIT_SET(uLocal_48, 0))
				{
					if (iLocal_41 == 2)
					{
						if (iLocal_36 == 1)
						{
							if (func_79(iLocal_50))
							{
								func_64(3);
								func_1(3, 1);
							}
						}
						iLocal_37 = 2;
					}
					else
					{
						if (func_79(iLocal_50))
						{
							func_64(3);
							func_1(3, 1);
						}
						iLocal_37 = 2;
					}
				}
				else
				{
					iLocal_37 = 2;
				}
				break;
			
			case 2:
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
				{
					if (func_2(func_3(3)))
					{
						MISC::SET_BIT(&uLocal_48, 15);
						HUD::CLEAR_HELP(1);
					}
					iLocal_37 = 0;
				}
				break;
			}
	}
}

bool func_212(var uParam0, int iParam1, int iParam2)//Position - 0xA408
{
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(uParam0);
	if (iParam1 == 1)
	{
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam2);
	}
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

void func_213()//Position - 0xA426
{
	if ((((!func_97(func_98()) && !func_97(35)) && !func_208(func_83())) && !func_207()) && !func_109())
	{
		if (iLocal_65 < 2 && (MISC::GET_GAME_TIMER() - iLocal_64) > 480000)
		{
			if (iLocal_41 != 2)
			{
				func_64(44);
			}
			else
			{
				func_64(45);
			}
			iLocal_65++;
		}
	}
}

int func_214()//Position - 0xA49F
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

void func_215()//Position - 0xA4C9
{
	if (func_69())
	{
		if (MISC::IS_BIT_SET(uLocal_48, 2))
		{
			if (func_79(iLocal_50))
			{
				func_20(iLocal_50, Local_51, fLocal_52, 25, 1);
				func_19(&iLocal_50);
			}
			MISC::CLEAR_BIT(&uLocal_48, 2);
		}
		func_1(46, 1);
		func_240(0);
	}
}

void func_216()//Position - 0xA513
{
	if (!func_221())
	{
		if (!func_214())
		{
			if (CAM::IS_SCREEN_FADED_IN())
			{
				if (!CAM::IS_SCREEN_FADING_IN())
				{
					func_218();
				}
			}
		}
	}
	else if (iLocal_36 != 3)
	{
		func_217();
	}
}

void func_217()//Position - 0xA554
{
	if (iLocal_36 != 4)
	{
		if (iLocal_36 != 2)
		{
			if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !Global_176FC)
			{
				MISC::SET_BIT(&uLocal_48, 15);
				HUD::CLEAR_HELP(1);
			}
			if (MISC::IS_BIT_SET(uLocal_48, 0))
			{
				if (func_79(iLocal_50))
				{
					VEHICLE::SET_VEHICLE_HAS_BEEN_DRIVEN_FLAG(iLocal_50, 0);
				}
				func_19(&iLocal_50);
				func_160();
				if (iLocal_41 != 2)
				{
					Local_49 = { 0f, 0f, 0f };
				}
				MISC::CLEAR_BIT(&uLocal_48, 8);
			}
		}
		else if (MISC::IS_BIT_SET(uLocal_48, 0))
		{
			func_20(iLocal_50, Local_51, fLocal_52, 25, 1);
			if (func_79(iLocal_50))
			{
				VEHICLE::SET_VEHICLE_HAS_BEEN_DRIVEN_FLAG(iLocal_50, 0);
			}
			func_19(&iLocal_50);
			func_160();
		}
		if (HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED("GETAWY", 5))
		{
			HUD::CLEAR_ADDITIONAL_TEXT(5, 0);
			MISC::CLEAR_BIT(&uLocal_48, 4);
			MISC::CLEAR_BIT(&uLocal_48, 5);
			func_240(0);
			if (func_124())
			{
				func_1(1, 1);
			}
			else
			{
				func_1(0, 1);
			}
		}
		iLocal_36 = 3;
	}
}

void func_218()//Position - 0xA633
{
	func_220();
	if (MISC::IS_BIT_SET(uLocal_48, 4))
	{
		if (!MISC::IS_BIT_SET(uLocal_48, 5) && !MISC::IS_BIT_SET(uLocal_48, 16))
		{
			HUD::REQUEST_ADDITIONAL_TEXT("GETAWY", 5);
			if (HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED("GETAWY", 5))
			{
				MISC::SET_BIT(&uLocal_48, 5);
			}
			if (MISC::IS_BIT_SET(uLocal_48, 5))
			{
				func_219();
				iLocal_38 = 0;
				MISC::CLEAR_BIT(&uLocal_48, 7);
				MISC::CLEAR_BIT(&uLocal_48, 0);
				MISC::CLEAR_BIT(&uLocal_48, 1);
				if (func_2(func_3(0)))
				{
					HUD::CLEAR_HELP(1);
				}
				func_4(0);
				iLocal_36 = Global_17C49.f_206F.f_80;
			}
		}
	}
}

void func_219()//Position - 0xA6C8
{
	if (!func_97(func_98()))
	{
		if (!MISC::IS_BIT_SET(uLocal_48, 12))
		{
			if (func_95())
			{
				if (iLocal_41 != 2)
				{
					func_64(44);
				}
				else
				{
					func_64(45);
				}
				MISC::SET_BIT(&uLocal_48, 12);
			}
		}
	}
}

void func_220()//Position - 0xA70C
{
	if (!HUD::IS_STREAMING_ADDITIONAL_TEXT(5))
	{
		MISC::SET_BIT(&uLocal_48, 4);
	}
	else
	{
		MISC::CLEAR_BIT(&uLocal_48, 4);
	}
}

int func_221()//Position - 0xA72E
{
	if (iLocal_41 != 2)
	{
		if (iLocal_41 == 1 && func_83() == 2)
		{
			if (!MISC::IS_BIT_SET(uLocal_48, 16))
			{
				MISC::SET_BIT(&uLocal_48, 16);
			}
			return 1;
		}
		else if (MISC::IS_BIT_SET(uLocal_48, 16))
		{
			MISC::CLEAR_BIT(&uLocal_48, 16);
		}
		if (func_222())
		{
			return 0;
		}
	}
	else if (func_97(35))
	{
		return 0;
	}
	else if (func_222())
	{
		return 0;
	}
	return 1;
}

int func_222()//Position - 0xA7A6
{
	if (((((Global_8861 == 15 && !func_189()) && Global_10A92 == -1) && !func_124()) && !func_223(1112014848)) && !Global_17898)
	{
		return 1;
	}
	return 0;
}

int func_223(float fParam0)//Position - 0xA7F4
{
	if (iLocal_41 == 1)
	{
		if (func_70(PLAYER::PLAYER_PED_ID(), Global_15129[1 /*15*/], fParam0))
		{
			return 1;
		}
	}
	else if (iLocal_41 == 2)
	{
		if (func_70(PLAYER::PLAYER_PED_ID(), Global_15129[0 /*15*/], fParam0))
		{
			return 1;
		}
	}
	else if (iLocal_41 == 0)
	{
		if (func_70(PLAYER::PLAYER_PED_ID(), Global_15129[3 /*15*/], fParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_224()//Position - 0xA863
{
	if (!MISC::IS_BIT_SET(uLocal_48, 13))
	{
		if (func_225())
		{
			MISC::SET_BIT(&uLocal_48, 13);
		}
	}
	else if (!func_225())
	{
		MISC::CLEAR_BIT(&uLocal_48, 7);
		MISC::CLEAR_BIT(&uLocal_48, 0);
		MISC::CLEAR_BIT(&uLocal_48, 1);
		MISC::CLEAR_BIT(&uLocal_48, 13);
	}
}

int func_225()//Position - 0xA8AE
{
	if ((((func_226(39) || func_226(40)) || func_226(41)) || func_226(42)) || func_226(43))
	{
		return 1;
	}
	return 0;
}

int func_226(int iParam0)//Position - 0xA8F4
{
	return func_227(iParam0, 6, 1);
}

int func_227(int iParam0, int iParam1, bool bParam2)//Position - 0xA904
{
	if (bParam2)
	{
		return MISC::IS_BIT_SET(Global_15F9E.f_4F3[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_90() == 0)
		{
			return MISC::IS_BIT_SET(func_228(func_230(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return MISC::IS_BIT_SET(Global_17C49.f_29C[iParam0], iParam1);
	}
	return 0;
}

int func_228(int iParam0, int iParam1, int iParam2)//Position - 0xA964
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_25744D[iParam0 /*6*/][func_229(iParam1)];
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_229(var uParam0)//Position - 0xA996
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_93();
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

int func_230(int iParam0)//Position - 0xA9CA
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

int func_231(int iParam0)//Position - 0xAC73
{
	if (func_80(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_232(int iParam0)//Position - 0xAC93
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_17C49.f_1CAD.f_148[iParam0 /*6*/];
}

void func_233(int iParam0)//Position - 0xACBF
{
	iLocal_41 = iParam0;
	if (iLocal_41 == 0)
	{
		sLocal_67 = "FBIPRAU";
	}
	else if (iLocal_41 == 1)
	{
		sLocal_67 = "AHFAUD";
	}
	else if (iLocal_41 == 2)
	{
		sLocal_67 = "FHFAUD";
	}
	iLocal_54[0] = joaat("trash");
	iLocal_54[1] = joaat("towtruck");
	iLocal_54[2] = joaat("ambulance");
	iLocal_54[3] = joaat("barracks2");
	iLocal_54[4] = joaat("stretch");
	iLocal_54[5] = joaat("phantom");
	iLocal_54[6] = joaat("packer");
	iLocal_54[7] = joaat("blazer");
	iLocal_54[8] = joaat("blazer2");
	if (iLocal_41 != 0)
	{
		iLocal_54[9] = joaat("sentinel2");
	}
	else
	{
		iLocal_54[9] = 0;
	}
	func_236();
	func_234();
	MISC::SET_BIT(&uLocal_48, 17);
	iLocal_64 = MISC::GET_GAME_TIMER();
}

void func_234()//Position - 0xAD85
{
	sLocal_44[0] = "AM_H_FBIC1A";
	sLocal_44[1] = "AM_H_FBIC1B";
	sLocal_44[2] = "AM_H_FBIC1C";
	sLocal_44[3] = "PRC_WANT";
	sLocal_44[4] = "PRC_DROPOFF";
	sLocal_44[5] = "PRC_INVALVEH";
	sLocal_44[6] = "PRC_HEALTH";
	sLocal_44[7] = func_235(7);
	sLocal_44[8] = func_235(8);
	sLocal_44[9] = "PRC_USEFIRST";
	sLocal_44[10] = func_235(10);
	sLocal_44[11] = func_235(11);
	sLocal_44[13] = func_235(13);
	sLocal_44[12] = func_235(12);
	sLocal_44[14] = "PRC_UNUSE";
	sLocal_44[15] = "PRC_SEATS";
	sLocal_44[16] = "PRC_CBOBVAL";
	sLocal_44[17] = func_235(17);
	sLocal_44[18] = func_235(18);
	sLocal_44[20] = func_235(20);
	sLocal_44[21] = "PRC_PUBAREA";
	sLocal_44[22] = "PRC_LAWAREA";
	sLocal_44[23] = "PRC_RESAREA";
	sLocal_44[24] = "PRC_STOP";
	sLocal_44[25] = "PRC_OWNEDM";
	sLocal_44[26] = "PRC_OWNEDF";
	sLocal_44[27] = "PRC_OWNEDT";
	sLocal_44[28] = "PRC_SECROUTE";
	sLocal_44[29] = "PRC_CLOSELOT";
	sLocal_44[30] = "PRC_CLOSELES";
	sLocal_44[31] = "PRC_CLSAGNT";
	sLocal_44[32] = "PRC_CLOSESAFE_M";
	sLocal_44[33] = "PRC_CLOSESAFE_F";
	sLocal_44[34] = "PRC_CLOSESAFE_T";
	sLocal_44[35] = "PRC_PEDS";
	sLocal_44[36] = "PRC_WATER";
	sLocal_44[37] = "PRC_OBST";
	sLocal_44[38] = "PRC_OBSTVEH";
	sLocal_44[39] = "PRC_UPDWN";
	sLocal_44[40] = "PRC_NEARROAD";
	sLocal_44[41] = "PRC_ONROAD";
	sLocal_44[19] = "PRC_PLAN";
	sLocal_44[42] = "PRC_TOOSTEEP";
	sLocal_44[43] = "PRC_UNEVEN";
	sLocal_44[44] = "PRC_REMIND";
	sLocal_44[45] = "PRC_REMINDA";
}

char* func_235(int iParam0)//Position - 0xAF62
{
	char* sVar0;
	
	if (iLocal_41 == 0)
	{
		if (iParam0 == 17)
		{
			sVar0 = "PRC_USEFT";
		}
		else if (iParam0 == 18)
		{
			sVar0 = "PRC_USEM";
		}
		else if (iParam0 == 10)
		{
			sVar0 = "PRC_PICKCARTF";
		}
		else if (iParam0 == 11)
		{
			sVar0 = "PRC_PICKCARM";
		}
		else if (iParam0 == 13)
		{
			sVar0 = "PRC_PICKNEWM";
		}
		else if (iParam0 == 12)
		{
			sVar0 = "PRC_PICKNEWTF";
		}
		else if (iParam0 == 7)
		{
			sVar0 = "PRC_LOCSUITFT";
		}
		else if (iParam0 == 8)
		{
			sVar0 = "PRC_LOCSUITM";
		}
		else if (iParam0 == 20)
		{
			sVar0 = "PRC_INACC";
		}
	}
	else if (iLocal_41 == 1)
	{
		if (iParam0 == 17)
		{
			sVar0 = "PRC_USEFL";
		}
		else if (iParam0 == 18)
		{
			sVar0 = "PRC_USEML";
		}
		else if (iParam0 == 10)
		{
			sVar0 = "PRC_PICKCRFL";
		}
		else if (iParam0 == 11)
		{
			sVar0 = "PRC_PICKCRML";
		}
		else if (iParam0 == 13)
		{
			sVar0 = "PRC_PICKNEWML";
		}
		else if (iParam0 == 12)
		{
			sVar0 = "PRC_PICKNEWFL";
		}
		else if (iParam0 == 7)
		{
			sVar0 = "PRC_LOCSUITFL";
		}
		else if (iParam0 == 8)
		{
			sVar0 = "PRC_LOCSUITML";
		}
		else if (iParam0 == 20)
		{
			sVar0 = "PRC_INACCF";
		}
	}
	else if (iLocal_41 == 2)
	{
		if (iParam0 == 17)
		{
			sVar0 = "PRC_USEL";
		}
		else if (iParam0 == 18)
		{
			sVar0 = "PRC_USEL";
		}
		else if (iParam0 == 10)
		{
			sVar0 = "PRC_PICKCARL";
		}
		else if (iParam0 == 11)
		{
			sVar0 = "PRC_PICKCARL";
		}
		else if (iParam0 == 13)
		{
			sVar0 = "PRC_PICKNEWL";
		}
		else if (iParam0 == 12)
		{
			sVar0 = "PRC_PICKNEWL";
		}
		else if (iParam0 == 7)
		{
			sVar0 = "PRC_LOCSUITFT";
		}
		else if (iParam0 == 8)
		{
			sVar0 = "PRC_LOCSUITM";
		}
		else if (iParam0 == 20)
		{
			sVar0 = "PRC_INACCF";
		}
	}
	return sVar0;
}

void func_236()//Position - 0xB128
{
	sLocal_57[0] = "ARMYB";
	sLocal_57[1] = "AIRP";
	sLocal_57[2] = "STAD";
	sLocal_57[3] = "TERMINA";
	sLocal_57[4] = "MOVIE";
	sLocal_57[5] = "JAIL";
	sLocal_57[6] = "OCEANA";
	sLocal_57[7] = "GOLF";
	sLocal_57[8] = "HORS";
	sLocal_57[9] = "MTCHIL";
	sLocal_57[10] = "MTGORDO";
	sLocal_57[11] = "SANCHIA";
	sLocal_57[12] = "TATAMO";
	Local_56[0 /*261*/][0 /*8*/] = { func_237("DELBE", -1615.257f, -952.5944f, 20.01716f, -2160.706f, -423f, -1.28679f, 327.8f) };
	Local_56[0 /*261*/][1 /*8*/] = { func_237("DELBE", -1521.716f, -914.5676f, 20.17247f, -1855.715f, -1325.784f, -44.79295f, 254.8f) };
	Local_56[0 /*261*/][2 /*8*/] = { func_237("BEACH", -1162.37f, -1815.008f, 15.33822f, -1553.207f, -1098.685f, 0.46467f, 253.91f) };
	Local_56[0 /*261*/][3 /*8*/] = { func_237("BEACH", -1464.219f, -1136.783f, 0.32167f, -2241.566f, -358.8849f, 20.32481f, 282.21f) };
	Local_56[0 /*261*/][4 /*8*/] = { func_237("PBOX", 156.4109f, -1042.641f, 22.31273f, 238.6382f, -821.1217f, 35.10069f, 176.96f) };
	Local_56[0 /*261*/][5 /*8*/] = { func_237("CHIL", 883.1121f, 534.7283f, 115.725f, 559.7425f, 644.602f, 150.5971f, 301.08f) };
	Local_56[0 /*261*/][6 /*8*/] = { func_237("EAST_V", 941.4531f, -329.4256f, 60.77003f, 727.7651f, -200.9519f, 75.59085f, 88.89f) };
	Local_56[0 /*261*/][7 /*8*/] = { func_237("EAST_V", 689.1177f, -273.1406f, 60.21559f, 834.7326f, -352.1655f, 50.92442f, 81.23f) };
	Local_56[0 /*261*/][8 /*8*/] = { func_237("MIRR", 1048.499f, -357.0332f, 60.92149f, 1401.581f, -783.8975f, 75.7477f, 325.93f) };
	Local_56[0 /*261*/][9 /*8*/] = { func_237("MIRR", 892.2836f, -461.5752f, 70.86029f, 1161.301f, -829.8299f, 45.90131f, 184.12f) };
	Local_56[0 /*261*/][10 /*8*/] = { func_237("VCANA", -1161.361f, -1143.716f, -5.71593f, -864.9714f, -981.1257f, 21.09691f, 328.65f) };
	Local_56[0 /*261*/][11 /*8*/] = { func_237("BAYTRE", 251.4011f, 1068.347f, 280.6663f, 189.6012f, 1272.352f, 143.8035f, 160.32f) };
	Local_56[0 /*261*/][13 /*8*/] = { func_237("OBSERV", -450.9835f, 1048.408f, 252.945f, -389.564f, 1244.504f, 370.2469f, 199.93f) };
	Local_56[0 /*261*/][14 /*8*/] = { func_237("AIRP", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_56[0 /*261*/][15 /*8*/] = { func_237("TERMINA", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_56[0 /*261*/][16 /*8*/] = { func_237("STAD", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_56[0 /*261*/][17 /*8*/] = { func_237("MOVIE", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_56[0 /*261*/][18 /*8*/] = { func_237("GOLF", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_56[0 /*261*/][19 /*8*/] = { func_237("HORS", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_56[0 /*261*/][20 /*8*/] = { func_237("PBOX", -28.39781f, -1071.245f, 50.21438f, -49.8352f, -1131.277f, 20.02555f, 55.12f) };
	Local_56[0 /*261*/][21 /*8*/] = { func_237("LOSSF", 843.1962f, 25.93548f, 65.16061f, 1138.687f, 363.0587f, 105.4128f, 61.11f) };
	Local_56[0 /*261*/][22 /*8*/] = { func_237("ROCKF", -992.5638f, -199.7673f, 30.74956f, -687.9904f, -43.23445f, 80.93306f, 80.53f) };
	Local_56[0 /*261*/][23 /*8*/] = { func_237("ROCKF", -251.8548f, -446.2141f, 29.5887f, -362.685f, -434.7425f, 90.931f, 50f) };
	Local_56[0 /*261*/][24 /*8*/] = { func_237("ALTA", 180.2637f, -404.9771f, 40.1713f, 289.9432f, -445.1485f, 124.3793f, 100f) };
	Local_56[0 /*261*/][25 /*8*/] = { func_237("ALTA", 343.8481f, -323.1273f, 80.7749f, 427.08f, -361.0469f, 45.3411f, 85f) };
	Local_56[0 /*261*/][26 /*8*/] = { func_237("RANCHO", 414.5057f, -2092.1f, 19.8533f, 350.8093f, -2158.395f, 12.3916f, 55f) };
	Local_56[0 /*261*/][27 /*8*/] = { func_237("RANCHO", 283.7474f, -2103.918f, 12.9242f, 391.8871f, -1983.204f, 33.0042f, 100f) };
	Local_56[0 /*261*/][28 /*8*/] = { func_237("PBOX", 85.038f, -670.3274f, 42.8642f, 227.8234f, -722.2458f, 274f, 175f) };
	Local_56[0 /*261*/][29 /*8*/] = { func_237("PBOX", -107.2516f, -906.36f, 28.2051f, -49.9007f, -752.925f, 330f, 125f) };
	Local_56[0 /*261*/][30 /*8*/] = { func_237("TEXTI", 456.8563f, -683.8335f, 32.2903f, 457.5504f, -819.4669f, 25.9553f, 14.4f) };
	Local_56[0 /*261*/][31 /*8*/] = { func_237("ROCKF", -699.7205f, -227.3646f, 67.818f, -645.1068f, -332.5107f, 30.9132f, 127.1f) };
	Local_56[0 /*261*/].f_104 = 0;
	Local_56[0 /*261*/].f_101 = 32;
	Local_56[2 /*261*/][0 /*8*/] = { func_237("PBOX", -25.50944f, -932.3846f, 20.41711f, 119.9406f, -523.4398f, 33.07988f, 363.4f) };
	Local_56[2 /*261*/][1 /*8*/] = { func_237("DOWNT", -25.50944f, -932.3846f, 20.41711f, 119.9406f, -523.4398f, 33.07988f, 363.4f) };
	Local_56[2 /*261*/][2 /*8*/] = { func_237("COSI", 1426.934f, 1225.115f, 90.76305f, 1429.982f, 1006.831f, 120.6643f, 259.89f) };
	Local_56[2 /*261*/][3 /*8*/] = { func_237("COSI", 3503.56f, 3546.403f, 20.18748f, 3513.955f, 3875.795f, 72.94806f, 393.78f) };
	Local_56[2 /*261*/][4 /*8*/] = { func_237("SKID", 403.5404f, -864.4694f, 20.33799f, 396.3441f, -1127.325f, 35.49262f, 325.93f) };
	Local_56[2 /*261*/][5 /*8*/] = { func_237("JAIL", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_56[2 /*261*/][6 /*8*/] = { func_237("ARMYB", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_56[2 /*261*/].f_104 = 2;
	Local_56[2 /*261*/].f_101 = 7;
	Local_56[1 /*261*/][0 /*8*/] = { func_237("PALETO", -422.8618f, 6068.399f, 20.34662f, -282.7452f, 6206.324f, 50.46586f, 196.61f) };
	Local_56[1 /*261*/][1 /*8*/] = { func_237("ROCKF", -755.2506f, 147.4266f, 75.41048f, -1079.033f, 169.3806f, 50.46801f, 179.12f) };
	Local_56[1 /*261*/][2 /*8*/] = { func_237("ROCKF", -752.3674f, 90.76733f, 65.5171f, -938.798f, -15.91457f, 35.48347f, 205.78f) };
	Local_56[1 /*261*/][3 /*8*/] = { func_237("ROCKF", -890.4999f, 431.1449f, 90.29848f, -875.3576f, 232.3266f, 60.20724f, 263.82f) };
	Local_56[1 /*261*/][4 /*8*/] = { func_237("ROCKF", -752.3674f, 90.76733f, 65.5171f, -938.798f, -15.91457f, 35.48347f, 205.78f) };
	Local_56[1 /*261*/][5 /*8*/] = { func_237("ROCKF", -1198.183f, 638.6367f, 115.1066f, -444.509f, 750.9377f, 198.2971f, 473.88f) };
	Local_56[1 /*261*/][6 /*8*/] = { func_237("ROCKF", -844.4075f, 400.9413f, 80.433f, -109.5311f, 420.5014f, 120.2088f, 256.03f) };
	Local_56[1 /*261*/][7 /*8*/] = { func_237("ROCKF", -518.6213f, 648.8265f, 130.9352f, -64.0709f, 582.4504f, 215.3084f, 162.72f) };
	Local_56[1 /*261*/][8 /*8*/] = { func_237("RICHM", -934.9802f, 349.6101f, 85.77298f, -1432.451f, 269.9804f, 50.7303f, 185.03f) };
	Local_56[1 /*261*/][9 /*8*/] = { func_237("RICHM", -1633.813f, -69.53224f, 65.10236f, -1446.823f, 69.71544f, 48.23926f, 214.92f) };
	Local_56[1 /*261*/][10 /*8*/] = { func_237("RICHM", -1732.258f, 444.1353f, 130.1258f, -2065.69f, 412.2121f, 98.09863f, 175.17f) };
	Local_56[1 /*261*/][11 /*8*/] = { func_237("RICHM", -1618.036f, 50.95197f, 70.95364f, -1396.514f, 221.1004f, 50.84464f, 161.61f) };
	Local_56[1 /*261*/][12 /*8*/] = { func_237("RICHM", -1801.285f, 106.8786f, 72.12892f, -1541.74f, 263.3738f, 50.44112f, 155.88f) };
	Local_56[1 /*261*/][13 /*8*/] = { func_237("PELUFF", -2208.563f, 146.4101f, 150.9325f, -2350.122f, 486.6066f, 200.5952f, 299.18f) };
	Local_56[1 /*261*/][14 /*8*/] = { func_237("PELUFF", -1852.326f, 134.4172f, 70.06226f, -1994.387f, 299.6283f, 100.9652f, 182.04f) };
	Local_56[1 /*261*/][15 /*8*/] = { func_237("CHIL", -1982.67f, 505.9648f, 100.9364f, -1918.843f, 713.6382f, 150.7395f, 168.9f) };
	Local_56[1 /*261*/][16 /*8*/] = { func_237("CHIL", -1455.751f, 887.3351f, 191.9757f, -1663.207f, 767.3684f, 160.8108f, 239.65f) };
	Local_56[1 /*261*/][17 /*8*/] = { func_237("CHIL", -1570.222f, 508.2056f, 140.3884f, -808.9532f, 526.4333f, 90.18556f, 238.43f) };
	Local_56[1 /*261*/][18 /*8*/] = { func_237("CHIL", 242.6204f, 583.5905f, 159.4043f, 268.0424f, 827.4494f, 201.6953f, 105.09f) };
	Local_56[1 /*261*/][19 /*8*/] = { func_237("CHIL", -21.10285f, 706.8648f, 150.7263f, -210.4382f, 1056.276f, 280.3182f, 290.15f) };
	Local_56[1 /*261*/][20 /*8*/] = { func_237("RGLEN", -1837.538f, 774.2984f, 120.5629f, -1765.842f, 831.0044f, 160.3584f, 68.09f) };
	Local_56[1 /*261*/][21 /*8*/] = { func_237("DIVINE", -372.0849f, 372.7183f, 100.6043f, 390.2198f, 532.5167f, 180.538f, 305.88f) };
	Local_56[1 /*261*/].f_104 = 1;
	Local_56[1 /*261*/].f_101 = 22;
	Local_56[3 /*261*/][0 /*8*/] = { func_237("MTCHIL", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_56[3 /*261*/][1 /*8*/] = { func_237("MTGORDO", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_56[3 /*261*/][2 /*8*/] = { func_237("SANCHIA", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_56[3 /*261*/][3 /*8*/] = { func_237("TATAMO", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_56[3 /*261*/][4 /*8*/] = { func_237("ELYSIAN", 531.2397f, -3019.267f, 50f, 530.1656f, -3393.623f, -22.4165f, 210f) };
	Local_56[3 /*261*/][5 /*8*/] = { func_237("ELYSIAN", 569.1023f, -2913.018f, 15.891f, 420.8226f, -2912.775f, -15.0372f, 25f) };
	Local_56[3 /*261*/][6 /*8*/] = { func_237("ELYSIAN", 495.1012f, -2833.175f, 5.164f, 460.1983f, -2813.528f, 0.4269f, 12f) };
	Local_56[3 /*261*/][7 /*8*/] = { func_237("ELYSIAN", 675.2973f, -2747.45f, 4.952f, 689.2358f, -2747.396f, 10.9001f, 4.3f) };
	Local_56[3 /*261*/][8 /*8*/] = { func_237("CYPRE", 533.437f, -2693.279f, 17.4952f, 588.6345f, -2693.462f, 5.3007f, 15f) };
	Local_56[3 /*261*/][9 /*8*/] = { func_237("CYPRE", 534.9656f, -2699.136f, 4.9004f, 560.1779f, -2662.192f, 9.0007f, 15f) };
	Local_56[3 /*261*/][10 /*8*/] = { func_237("CYPRE", 583.903f, -2689.207f, 16.9771f, 549.8469f, -2665.318f, 3.9007f, 17.3f) };
	Local_56[3 /*261*/][11 /*8*/] = { func_237("CYPRE", 683.428f, -2635.134f, 9.3367f, 694.4725f, -2679.66f, 4.7815f, 10f) };
	Local_56[3 /*261*/][12 /*8*/] = { func_237("CYPRE", 695.2171f, -2694.769f, 5.9815f, 695.5035f, -2679.168f, 4.8365f, 10f) };
	Local_56[3 /*261*/][13 /*8*/] = { func_237("CYPRE", 731.7991f, -2659.58f, 4.7713f, 732.5307f, -2678.4f, 10.5065f, 25f) };
	Local_56[3 /*261*/][14 /*8*/] = { func_237("ELYSIAN", 86.1885f, -2430.696f, -0.1888f, 119.1515f, -2453.121f, 2.8614f, 13f) };
	Local_56[3 /*261*/][15 /*8*/] = { func_237("ELYSIAN", 260.3166f, -2426.777f, 21.2819f, 313.7871f, -2433.656f, 6.5609f, 20.5f) };
	Local_56[3 /*261*/][16 /*8*/] = { func_237("ELYSIAN", 260.3166f, -2426.777f, 21.2819f, 313.7871f, -2433.656f, 6.5609f, 20.5f) };
	Local_56[3 /*261*/][17 /*8*/] = { func_237("ELYSIAN", 283.1514f, -2456.777f, 19.4609f, 290.2325f, -2403.611f, 4.2465f, 20.5f) };
	Local_56[3 /*261*/][18 /*8*/] = { func_237("ELYSIAN", 266.0341f, -2446.724f, 19.4623f, 308.3783f, -2414.544f, 4.5423f, 20.5f) };
	Local_56[3 /*261*/][19 /*8*/] = { func_237("ELYSIAN", 303.5269f, -2451.446f, 19.4091f, 270.9798f, -2409.452f, 4.4609f, 20.5f) };
	Local_56[3 /*261*/][20 /*8*/] = { func_237("RANCHO", 515.026f, -1653.54f, 37.2615f, 582.571f, -1577.825f, 26.3365f, 100f) };
	Local_56[3 /*261*/][21 /*8*/] = { func_237("BURTON", -150.7403f, -419.0541f, 28.6163f, -52.8669f, -453.5552f, 39.4051f, 100f) };
	Local_56[3 /*261*/][22 /*8*/] = { func_237("SanAnd", 50.2035f, -470.7132f, 36.9003f, 102.0394f, -322.0089f, 115f, 130f) };
	Local_56[3 /*261*/][23 /*8*/] = { func_237("ALTA", 499.1769f, -241.2495f, 47.3462f, 393.5317f, -205.7358f, 79.3132f, 120f) };
	Local_56[3 /*261*/][24 /*8*/] = { func_237("DTVINE", 422.3247f, 62.118f, 113.2905f, 478.494f, 43.322f, 83.4541f, 80f) };
	Local_56[3 /*261*/][25 /*8*/] = { func_237("DTVINE", 385.4908f, 56.1423f, 159.58f, 332.458f, -87.6805f, 63.3657f, 80f) };
	Local_56[3 /*261*/][26 /*8*/] = { func_237("DTVINE", 213.6192f, 90.2228f, 98.9357f, 203.3067f, 61.8088f, 86.9197f, 60f) };
	Local_56[3 /*261*/][27 /*8*/] = { func_237("DTVINE", 192.813f, -14.9451f, 85.3158f, 149.2689f, 0.6803f, 67.0343f, 40f) };
	Local_56[3 /*261*/][28 /*8*/] = { func_237("WVINE", 16.1659f, 61.8685f, 70.8467f, -17.1751f, 74.3771f, 76.88f, 4.5f) };
	Local_56[3 /*261*/][29 /*8*/] = { func_237("WVINE", -86.5425f, 84.8701f, 80.2147f, -50.4826f, 67.7335f, 70.297f, 20f) };
	Local_56[3 /*261*/][30 /*8*/] = { func_237("ELGORL", 3449.839f, 5173.981f, 0.0662f, 3412.309f, 5166.89f, 14.8342f, 33.7f) };
	Local_56[3 /*261*/].f_104 = 3;
	Local_56[3 /*261*/].f_101 = 31;
	if (func_231(PLAYER::PLAYER_PED_ID()))
	{
		sLocal_58 = ZONE::GET_NAME_OF_ZONE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
	}
}

struct<8> func_237(char* sParam0, struct<3> Param1, struct<3> Param2, float fParam3)//Position - 0xC467
{
	struct<8> Var0;
	
	Var0 = sParam0;
	Var0.f_1 = { Param1 };
	Var0.f_4 = { Param2 };
	Var0.f_7 = fParam3;
	return Var0;
}

void func_238(int iParam0, bool bParam1)//Position - 0xC492
{
	if (func_79(iLocal_50))
	{
		func_19(&iLocal_50);
	}
	if (!bParam1)
	{
		func_239(iParam0);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_239(int iParam0)//Position - 0xC4BA
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (MISC::IS_BIT_SET(Global_17C49.f_1CAD.f_63.f_D9[iVar0], iVar1))
	{
		MISC::CLEAR_BIT(&(Global_17C49.f_1CAD.f_63.f_D9[iVar0]), iVar1);
		return 1;
	}
	return 0;
}

void func_240(bool bParam0)//Position - 0xC514
{
	char* sVar0;
	
	if (bParam0)
	{
		sVar0 = "PRC_MARK";
		if (iLocal_41 == 2)
		{
			sVar0 = "PRC_MARKVEH";
			func_248(sVar0);
		}
		else if (iLocal_41 == 0)
		{
			if (func_83() == 0)
			{
				func_247(sVar0);
				func_246(sVar0);
			}
			else if (func_83() == 1)
			{
				func_245(sVar0);
			}
			else
			{
				func_245(sVar0);
			}
		}
		else if (iLocal_41 == 1)
		{
			if (func_83() == 0)
			{
				func_247(sVar0);
				func_248(sVar0);
			}
			else if (func_83() == 1)
			{
				func_245(sVar0);
				func_248(sVar0);
			}
			else
			{
				func_245(sVar0);
				func_248(sVar0);
			}
		}
		MISC::SET_BIT(&uLocal_48, 11);
	}
	else if (MISC::IS_BIT_SET(uLocal_48, 11))
	{
		func_244();
		func_243();
		func_242();
		func_241();
		MISC::CLEAR_BIT(&uLocal_48, 11);
	}
}

void func_241()//Position - 0xC5E1
{
	StringCopy(&(Global_835[3 /*16*/].f_8), "CELL_SFUN_NULL", 32);
}

void func_242()//Position - 0xC5F7
{
	StringCopy(&(Global_835[2 /*16*/].f_8), "CELL_SFUN_NULL", 32);
}

void func_243()//Position - 0xC60D
{
	StringCopy(&(Global_835[1 /*16*/].f_8), "CELL_SFUN_NULL", 32);
}

void func_244()//Position - 0xC623
{
	StringCopy(&(Global_835[0 /*16*/].f_8), "CELL_SFUN_NULL", 32);
}

void func_245(char* sParam0)//Position - 0xC639
{
	StringCopy(&(Global_835[0 /*16*/].f_8), sParam0, 32);
}

void func_246(char* sParam0)//Position - 0xC64D
{
	StringCopy(&(Global_835[2 /*16*/].f_8), sParam0, 32);
}

void func_247(char* sParam0)//Position - 0xC661
{
	StringCopy(&(Global_835[1 /*16*/].f_8), sParam0, 32);
}

void func_248(char* sParam0)//Position - 0xC675
{
	StringCopy(&(Global_835[3 /*16*/].f_8), sParam0, 32);
}

int func_249(var uParam0, int iParam1)//Position - 0xC689
{
	if (iParam1 == -1)
	{
		return 0;
	}
	if (!func_48(&(Global_10642.f_22B[0 /*21*/]), iParam1))
	{
		return 0;
	}
	else
	{
		func_55(Global_17C49.f_47C3.f_45[Global_10642.f_22B[0 /*21*/].f_E /*54*/], uParam0);
	}
	return 1;
}

float func_250(int iParam0)//Position - 0xC6D7
{
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (!func_48(&(Global_10642.f_22B[0 /*21*/]), iParam0))
	{
		return 0f;
	}
	return Global_10642.f_22B[0 /*21*/].f_3;
}

Vector3 func_251(int iParam0)//Position - 0xC70D
{
	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	if (!func_48(&(Global_10642.f_22B[0 /*21*/]), iParam0))
	{
		return 0f, 0f, 0f;
	}
	return Global_10642.f_22B[0 /*21*/];
}

int func_252(int iParam0)//Position - 0xC747
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (MISC::IS_BIT_SET(Global_17C49.f_1CAD.f_63.f_D9[iVar0], iVar1))
	{
		return 0;
	}
	MISC::SET_BIT(&(Global_17C49.f_1CAD.f_63.f_D9[iVar0]), iVar1);
	return 1;
}

