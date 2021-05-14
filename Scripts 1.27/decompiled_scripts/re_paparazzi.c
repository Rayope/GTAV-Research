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
	float fLocal_43 = 0f;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	struct<3> Local_47 = { 0, 0, 0 } ;
	struct<3> Local_48 = { 0, 0, 0 } ;
	struct<3> Local_49 = { 0, 0, 0 } ;
	float fLocal_50 = 0f;
	struct<3> Local_51 = { 0, 0, 0 } ;
	struct<3> Local_52 = { 0, 0, 0 } ;
	struct<3> Local_53 = { 0, 0, 0 } ;
	int iLocal_54 = 0;
	bool bLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	struct<6> Local_60 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	struct<3> Local_67 = { 0, 0, 0 } ;
	float fLocal_68 = 0f;
	int iLocal_69 = 0;
	struct<3> Local_70 = { 0, 0, 0 } ;
	float fLocal_71 = 0f;
	int iLocal_72 = 0;
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
	var uLocal_106 = 1;
	struct<18> Local_107[4];
	struct<18> Local_108[8];
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	bool bLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	char* sLocal_131 = NULL;
	char[] cLocal_132[8] = 0;
	char* sLocal_133 = NULL;
	char* sLocal_134 = NULL;
	int iLocal_135[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_136 = 0;
	int iLocal_137[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<10> Local_138[16];
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	int iLocal_143[3] = { 0, 0, 0 };
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	float fLocal_149 = 0f;
	float fLocal_150 = 0f;
	int iLocal_151[2] = { 0, 0 };
	float fLocal_152 = 0f;
	struct<3> Local_153 = { 0, 0, 0 } ;
	struct<3> Local_154 = { 0, 0, 0 } ;
	struct<3> Local_155 = { 0, 0, 0 } ;
	struct<3> Local_156 = { 0, 0, 0 } ;
	struct<3> Local_157 = { 0, 0, 0 } ;
	struct<3> Local_158 = { 0, 0, 0 } ;
	struct<3> Local_159 = { 0, 0, 0 } ;
	struct<3> Local_160[4];
	float fLocal_161[4] = { 0f, 0f, 0f, 0f };
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	var uLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	var uLocal_173 = 0;
	char* sLocal_174[3] = { NULL, NULL, NULL };
	int iLocal_175 = 0;
	char* sLocal_176 = NULL;
	struct<3> Local_177 = { 0, 0, 0 } ;
	struct<3> Local_178 = { 0, 0, 0 } ;
	float fLocal_179 = 0f;
	struct<3> Local_180 = { 0, 0, 0 } ;
	struct<3> Local_181 = { 0, 0, 0 } ;
	float fLocal_182 = 0f;
	struct<3> Local_183 = { 0, 0, 0 } ;
	struct<3> Local_184 = { 0, 0, 0 } ;
	float fLocal_185 = 0f;
	struct<3> Local_186 = { 0, 0, 0 } ;
	struct<3> Local_187 = { 0, 0, 0 } ;
	int iLocal_188 = 0;
	int iLocal_189 = 0;
	float fLocal_190 = 0f;
	int iLocal_191 = 0;
	int iLocal_192 = 0;
	int iLocal_193 = 0;
	float fLocal_194 = 0f;
	int iLocal_195 = 0;
	int iLocal_196 = 0;
	bool bLocal_197 = 0;
	bool bLocal_198 = 0;
	int iLocal_199 = 0;
	int iLocal_200 = 0;
	int iLocal_201 = 0;
	int iLocal_202 = 0;
	struct<2> Local_203 = { 0, 5 } ;
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
	var uLocal_219 = 5;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	char cVar2[24];
	
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
	fLocal_43 = -1f;
	Local_48 = { 226.6825f, 681.0297f, 188.4987f };
	Local_49 = { 231.8002f, 672.5261f, 188.9459f };
	fLocal_50 = 32.0905f;
	StringCopy(&Local_60, "", 24);
	Local_67 = { 259.4603f, 125.8718f, 100.9754f };
	fLocal_68 = 283.0367f;
	Local_70 = { 245.1998f, 76.8231f, 90.7069f };
	fLocal_71 = -18.4743f;
	cLocal_132 = "REPAPAU";
	sLocal_133 = "random@escape_paparazzi@standing@";
	sLocal_134 = "random@escape_paparazzi@incar@";
	iLocal_145 = 4000;
	fLocal_149 = 0f;
	fLocal_150 = 0f;
	fLocal_152 = 0f;
	Local_153 = { 272.6356f, 155.5618f, 103.3306f };
	Local_154 = { 247.5795f, 88.7094f, 92.9859f };
	Local_155 = { 259.0348f, 114.0369f, 98.9984f };
	Local_156 = { 255.4971f, 116.8744f, 99.8162f };
	Local_157 = { 266.8217f, 139.7698f, 103.2269f };
	Local_158 = { 270.0174f, 139.1181f, 103.2195f };
	Local_159 = { 265.4954f, 144.6143f, 103.3326f };
	sLocal_176 = "left_";
	Local_177 = { 261.9341f, 126.2429f, 95.15405f };
	Local_178 = { 270.6759f, 152.4763f, 109.2356f };
	fLocal_179 = 16f;
	Local_180 = { 261.9341f, 126.2429f, 107.6541f };
	Local_181 = { 248.354f, 87.01792f, 92.389f };
	fLocal_182 = 16f;
	Local_183 = { 256.6779f, 126.573f, 99.54784f };
	Local_184 = { 266.4471f, 123.412f, 105.6728f };
	fLocal_185 = 5.75f;
	Local_186 = { 260.242f, 127.423f, 101.65f };
	Local_187 = { 0f, 0f, -20f };
	Local_47 = { ScriptParam_203.f_1[0 /*3*/] };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		func_267();
	}
	func_266(&uLocal_73, 3);
	if (!Global_3)
	{
		if (func_224(Local_47, -1, 0, 0, 0))
		{
			func_221(-1);
		}
		else
		{
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	}
	uLocal_125 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(93.3633f, 82.5239f, 276.3459f) + Vector(10f, 10f, 10f), Vector(93.3633f, 82.5239f, 276.3459f) - Vector(10f, 10f, 10f), 0, 1, 1, 1);
	uLocal_126 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(188.5935f, 675.8706f, 227.8598f) + Vector(4f, 4f, 4f), Vector(188.5935f, 675.8706f, 227.8598f) - Vector(4f, 4f, 4f), 0, 1, 1, 1);
	uLocal_127 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(93.8361f, 92.1704f, 246.1673f) + Vector(6f, 6f, 6f), Vector(93.8361f, 92.1704f, 246.1673f) - Vector(6f, 6f, 6f), 0, 1, 1, 1);
	if (Global_3)
	{
		MISC::CLEAR_AREA(246.1673f, 92.1704f, 93.8361f, 6f, 1, 0, 0, 0);
	}
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(93.8361f, 92.1704f, 246.1673f) + Vector(6f, 6f, 6f), Vector(93.8361f, 92.1704f, 246.1673f) - Vector(6f, 6f, 6f), 0, 1);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", 0);
	while (true)
	{
		SYSTEM::WAIT(0);
		func_218(&uLocal_73);
		if (!func_217())
		{
			if (func_216())
			{
				func_267();
			}
		}
		RECORDING::_0x208784099002BC30("RE_EP", 0);
		iVar0 = 0;
		while (iVar0 < Local_107)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_107[iVar0 /*18*/]) && !ENTITY::IS_ENTITY_DEAD(Local_107[iVar0 /*18*/]))
			{
				Local_107[iVar0 /*18*/].f_8 = { ENTITY::GET_ENTITY_COORDS(Local_107[iVar0 /*18*/], 1) };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < Local_108)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_108[iVar0 /*18*/]) && !ENTITY::IS_ENTITY_DEAD(Local_108[iVar0 /*18*/]))
			{
				Local_108[iVar0 /*18*/].f_6 = { ENTITY::GET_ENTITY_COORDS(Local_108[iVar0 /*18*/], 1) };
			}
			iVar0++;
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Local_51 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		}
		if (!PED::IS_PED_INJURED(iLocal_66))
		{
			Local_52 = { ENTITY::GET_ENTITY_COORDS(iLocal_66, 1) };
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_69) && !ENTITY::IS_ENTITY_DEAD(iLocal_69))
		{
			Local_53 = { ENTITY::GET_ENTITY_COORDS(iLocal_69, 1) };
		}
		if (!func_217())
		{
			if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
			{
				switch (iLocal_129)
				{
					case 0:
						if (func_207())
						{
							func_197();
							iLocal_129++;
						}
						else if (func_185())
						{
							func_267();
						}
						break;
					
					case 1:
						if ((func_184() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_69, 0))
						{
							if (!Global_3 && !bLocal_55)
							{
								func_183();
								func_267();
							}
						}
						else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 281.0074f, 192.4805f, 58.08817f, 228.8291f, 50.88667f, 111.6104f, 82.75f, 0, 1, 0))
						{
							func_174(1);
							uLocal_120 = func_173(iLocal_66, 0, 145);
							func_172("MAG_2_ESCAPE_PAP_GET_CAR");
							func_171(0);
						}
						break;
				}
			}
			else
			{
				func_267();
			}
		}
		else
		{
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
			switch (iLocal_44)
			{
				case 0:
					func_168();
					break;
				
				case 1:
					func_165();
					break;
				
				case 2:
					func_144();
					break;
				
				case 3:
					func_133();
					break;
				
				case 4:
					func_104();
					break;
				
				case 10:
					func_267();
					break;
				
				case 5:
					func_103();
					break;
				
				case 6:
					func_100(sLocal_131);
					break;
				
				case 7:
					func_99();
					break;
				
				case 9:
					break;
				
				case 8:
					if (func_98())
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_66))
						{
							PED::DELETE_PED(&iLocal_66);
						}
						func_74();
					}
					break;
				
				case 11:
					func_70();
					break;
			}
			if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_52, 210f, 210f, 210f, 0, 1, 0))
			{
				func_183();
				func_267();
			}
			if (((iLocal_44 != 5 && iLocal_44 != 6) && iLocal_44 != 10) && iLocal_44 != 7)
			{
				if (!Global_3 && !bLocal_55)
				{
					if (func_67(iLocal_66, 1, 1) || func_66())
					{
						if (iLocal_44 > 0)
						{
							func_171(5);
						}
						else
						{
							func_183();
							func_171(10);
						}
					}
					if (((iLocal_44 != 5 && iLocal_44 != 10) && iLocal_44 != 0) && iLocal_44 != 7)
					{
						if (func_62())
						{
							func_171(6);
						}
					}
				}
			}
		}
		func_25();
		if (iLocal_44 <= 0)
		{
			iVar1 = func_24();
			if (iVar1 != -1 && (iLocal_59 || func_19() != 0))
			{
				if ((!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 243.6443f, 123.7193f, 97.59898f, 262.4353f, 116.8746f, 107.4762f, 32.25f, 0, 1, 0) && (MISC::GET_GAME_TIMER() - iLocal_144) > 5000) && !PED::IS_PED_INJURED(Local_108[iVar1 /*18*/]))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_108[iVar1 /*18*/], 1), Local_51) < (30.5f * 30.5f) && SYSTEM::VDIST2(Local_52, Local_51) > (22.5f * 22.5f))
					{
						if (func_217())
						{
							if (Local_138[4 /*10*/] != Local_108[iVar1 /*18*/])
							{
								func_18(&Local_138, 4);
								func_17(&Local_138, 4, Local_108[iVar1 /*18*/], "PAPARAZZO", 0, 1);
							}
							else if (!iLocal_192)
							{
								if (func_5(&Local_138, cLocal_132, "REPAP_CALL1", 1, 0, 0, 0))
								{
									iLocal_144 = MISC::GET_GAME_TIMER();
									iLocal_192 = 1;
								}
							}
							else if (func_5(&Local_138, cLocal_132, "REPAP_CHAT", 1, 0, 0, 0))
							{
								iLocal_144 = MISC::GET_GAME_TIMER();
							}
						}
						else
						{
							StringCopy(&cVar2, "REPAP_AZAA_0", 24);
							StringIntConCat(&cVar2, MISC::GET_RANDOM_INT_IN_RANGE(1, 13), 24);
							func_3(Local_108[iVar1 /*18*/], &cVar2, "PAPARAZZO", 24);
							iLocal_144 = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
		}
		if (iLocal_44 <= 1)
		{
			func_2();
		}
		func_1();
	}
}

void func_1()//Position - 0x859
{
	int iVar0;
	int iVar1;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID());
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
		{
			iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0);
			if (!PED::IS_PED_INJURED(iVar1))
			{
				if (iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						if (!PED::IS_PED_HEADTRACKING_ENTITY(iVar1, PLAYER::PLAYER_PED_ID()))
						{
							TASK::TASK_LOOK_AT_ENTITY(iVar1, PLAYER::PLAYER_PED_ID(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_2()//Position - 0x8C5
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_108)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_108[iVar0 /*18*/]))
		{
			if (ENTITY::GET_ENTITY_HEALTH(Local_108[iVar0 /*18*/]) < Local_108[iVar0 /*18*/].f_11)
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_108[iVar0 /*18*/], PLAYER::PLAYER_PED_ID(), 1))
				{
					iLocal_137[iVar0] = (iLocal_137[iVar0] + (Local_108[iVar0 /*18*/].f_11 - ENTITY::GET_ENTITY_HEALTH(Local_108[iVar0 /*18*/])));
					iLocal_62 = (iLocal_62 + (Local_108[iVar0 /*18*/].f_11 - ENTITY::GET_ENTITY_HEALTH(Local_108[iVar0 /*18*/])));
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_108[iVar0 /*18*/]);
					if (iLocal_137[iVar0] > iLocal_136)
					{
						iLocal_136 = iLocal_137[iVar0];
					}
				}
			}
			Local_108[iVar0 /*18*/].f_11 = ENTITY::GET_ENTITY_HEALTH(Local_108[iVar0 /*18*/]);
		}
		iVar0++;
	}
}

void func_3(var uParam0, char[4] cParam1, char* sParam2, int iParam3)//Position - 0x981
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(uParam0, cParam1, sParam2, func_4(iParam3), 0);
}

int func_4(int iParam0)//Position - 0x99A
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

bool func_5(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xB8C
{
	func_16(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_6(sParam2, iParam3, 0);
}

int func_6(char* sParam0, int iParam1, bool bParam2)//Position - 0xBDA
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
					func_15();
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
		if (func_14(8, -1))
		{
			return 0;
		}
		Global_3D98 = { Global_3D92 };
		func_13();
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
				func_11();
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
				if (func_10())
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
			func_8();
			Global_3D56 = bParam2;
		}
		Global_3D4E = iParam1;
		StringCopy(&Global_3BCF, sParam0, 24);
		Global_38DE = 0;
		func_7();
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
		func_15();
	}
	return 0;
}

void func_7()//Position - 0xEA6
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

void func_8()//Position - 0xED6
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

int func_9()//Position - 0xF6B
{
	if (Global_3839.f_1 == 1 || Global_3839.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_10()//Position - 0xF92
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

void func_11()//Position - 0x102B
{
	if (func_12(14))
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
		Global_3839 = func_19();
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

bool func_12(int iParam0)//Position - 0x10CC
{
	return Global_8861 == iParam0;
}

void func_13()//Position - 0x10DA
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

bool func_14(int iParam0, int iParam1)//Position - 0x1130
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

void func_15()//Position - 0x116B
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

void func_16(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x11C2
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

void func_17(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x1218
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

void func_18(var uParam0, int iParam1)//Position - 0x12B3
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

int func_19()//Position - 0x12D0
{
	func_20();
	return Global_17C49.f_6C1.f_21B.f_C8D;
}

void func_20()//Position - 0x12E9
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_23(Global_17C49.f_6C1.f_21B.f_C8D) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_22(PLAYER::PLAYER_PED_ID());
			if (func_21(iVar0) && (!func_12(14) || Global_17832))
			{
				if (Global_17C49.f_6C1.f_21B.f_C8D != iVar0 && func_21(Global_17C49.f_6C1.f_21B.f_C8D))
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

bool func_21(int iParam0)//Position - 0x13E6
{
	return iParam0 < 3;
}

int func_22(int iParam0)//Position - 0x13F2
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_23(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_23(int iParam0)//Position - 0x142F
{
	if (func_21(iParam0))
	{
		return Global_17C49.f_744E[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_24()//Position - 0x1459
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar1 = -1;
	fVar2 = 999999f;
	iVar0 = 0;
	while (iVar0 < Local_108)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Local_108[iVar0 /*18*/]) && !PED::IS_PED_INJURED(Local_108[iVar0 /*18*/])) && !PED::IS_PED_INJURED(iLocal_66))
		{
			if (SYSTEM::VDIST2(Local_51, Local_108[iVar0 /*18*/].f_6) < fVar2)
			{
				fVar2 = SYSTEM::VDIST2(Local_52, Local_108[iVar0 /*18*/].f_6);
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_25()//Position - 0x14D9
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	int iVar8;
	
	switch (iLocal_46)
	{
		case 0:
			iLocal_164 = 0;
			STREAMING::REQUEST_MODEL(joaat("a_m_y_genstreet_02"));
			STREAMING::REQUEST_MODEL(joaat("prop_pap_camera_01"));
			STREAMING::REQUEST_MODEL(joaat("cavalcade2"));
			STREAMING::REQUEST_MODEL(joaat("vader"));
			STREAMING::REQUEST_ANIM_DICT(sLocal_133);
			STREAMING::REQUEST_ANIM_DICT("random@paparazzi@pap_anims");
			if (((((STREAMING::HAS_MODEL_LOADED(joaat("a_m_y_genstreet_02")) && STREAMING::HAS_MODEL_LOADED(joaat("prop_pap_camera_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("cavalcade2"))) && STREAMING::HAS_MODEL_LOADED(joaat("vader"))) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_133)) && STREAMING::HAS_ANIM_DICT_LOADED("random@paparazzi@pap_anims"))
			{
				Local_160[0 /*3*/] = { 266.6049f, 157.7677f, 104.2417f };
				Local_160[1 /*3*/] = { 280.2455f, 152.1227f, 103.7096f };
				Local_160[2 /*3*/] = { 223.2588f, 50.6347f, 83.6598f };
				Local_160[3 /*3*/] = { 244.1302f, 37.4709f, 83.4804f };
				fLocal_161[0] = -111.1625f;
				fLocal_161[1] = 68.857f;
				fLocal_161[2] = -108.2056f;
				fLocal_161[3] = 50.8189f;
				iVar0 = 0;
				while (iVar0 < Local_107)
				{
					func_61(iVar0);
					func_59(func_60(iVar0));
					func_59(func_58(iVar0));
					iVar0++;
				}
				iLocal_162 = 0;
				func_57(func_60(1), 274.9306f, 147.164f, 103.3794f, 2.2109f);
				func_57(func_58(1), 275.6894f, 148.1107f, 103.3723f, 117.9416f);
				func_57(func_58(2), Local_160[1 /*3*/], fLocal_161[1]);
				func_57(func_58(3), Local_160[1 /*3*/], fLocal_161[1]);
				func_56(0, Local_160[0 /*3*/], fLocal_161[0], 1);
				func_56(1, Local_160[1 /*3*/], fLocal_161[1], 0);
				ENTITY::SET_ENTITY_COORDS(func_55(0, 1), 265.408f, 151.2875f, 103.5673f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(func_55(0, 1), 217.1033f);
				ENTITY::SET_ENTITY_COORDS(func_55(2, 1), 245.9477f, 72.661f, 89.1067f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(func_55(2, 1), 38.6283f);
				ENTITY::SET_ENTITY_COORDS(func_55(3, 1), 244.1872f, 73.3336f, 89.0917f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(func_55(3, 1), 272.9875f);
				TASK::TASK_PLAY_ANIM(func_55(0, 1), "random@paparazzi@pap_anims", "base_pap", 8f, -8f, -1, 1, 0, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(func_55(1, 0), "random@paparazzi@pap_anims", "pap_idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(func_55(1, 1), "random@paparazzi@pap_anims", "pap_idle_b", 8f, -8f, -1, 1, 0, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(func_55(2, 1), "random@paparazzi@pap_anims", "pap_idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(func_55(3, 1), "random@paparazzi@pap_anims", "pap_idle_b", 8f, -8f, -1, 1, 0, 0, 0, 0);
				iLocal_46 = 1;
			}
			break;
		
		case 1:
			func_53(func_58(0), 265.408f, 151.2875f, 103.5673f, 217.1033f, "random@paparazzi@pap_anims", "base_pap", 0);
			func_53(func_60(1), 274.9306f, 147.164f, 103.3794f, 2.2109f, "random@paparazzi@pap_anims", "pap_idle_a", "base_pap");
			func_53(func_58(1), 277.1364f, 148.4023f, 103.3493f, 104.6318f, "random@paparazzi@pap_anims", "pap_idle_b", 0);
			func_53(func_58(2), 245.9477f, 72.661f, 89.1067f, 38.6283f, "random@paparazzi@pap_anims", "pap_idle_b", 0);
			func_53(func_58(3), 244.1872f, 73.3336f, 89.0917f, 272.9875f, "random@paparazzi@pap_anims", "pap_idle_a", 0);
			break;
		
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(Local_108[2 /*18*/].f_2))
			{
				if (!ENTITY::IS_ENTITY_VISIBLE(Local_108[2 /*18*/].f_2))
				{
					ENTITY::SET_ENTITY_VISIBLE(Local_108[2 /*18*/].f_2, 1);
				}
			}
			switch (iLocal_164)
			{
				case 0:
					if (!PED::IS_PED_INJURED(func_55(1, 0)))
					{
						TASK::CLEAR_PED_TASKS(func_55(1, 0));
					}
					if (!PED::IS_PED_INJURED(func_55(1, 1)))
					{
						TASK::CLEAR_PED_TASKS(func_55(1, 1));
					}
					if (!ENTITY::DOES_ENTITY_EXIST(Local_107[2 /*18*/]))
					{
						func_56(2, Local_160[2 /*3*/], fLocal_161[2], 0);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_107[2 /*18*/], 0))
						{
							func_57(func_60(2), ENTITY::GET_ENTITY_COORDS(Local_107[2 /*18*/], 1), 0f);
							PED::SET_PED_INTO_VEHICLE(func_55(2, 0), Local_107[2 /*18*/], -1);
						}
					}
					if (!ENTITY::DOES_ENTITY_EXIST(Local_107[3 /*18*/]))
					{
						func_56(3, Local_160[3 /*3*/], fLocal_161[3], 0);
					}
					if (!PED::IS_PED_INJURED(func_55(2, 1)))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(func_55(2, 1), Local_155, 2f, -1, 0.25f, 0, 1193033728);
					}
					if (!PED::IS_PED_INJURED(func_55(3, 1)))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(func_55(3, 1), Local_156, 2f, -1, 0.25f, 0, 1193033728);
					}
					if (!ENTITY::DOES_ENTITY_EXIST(func_55(3, 0)))
					{
						func_57(func_60(3), 253.8376f, 85.4544f, 92.8933f, 85.1702f);
					}
					if (Global_3 || bLocal_55)
					{
						if (!PED::IS_PED_INJURED(func_55(1, 0)))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(func_55(1, 0), Local_157, 2f, 20000, 0.25f, 0, 1193033728);
						}
						if (!PED::IS_PED_INJURED(func_55(1, 1)))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(func_55(1, 1), Local_158, 2f, 20000, 0.25f, 0, 1193033728);
						}
						if (!PED::IS_PED_INJURED(func_55(0, 1)))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(func_55(0, 1), Local_159, 2f, 20000, 0.25f, 0, 1193033728);
						}
					}
					SYSTEM::SETTIMERB(0);
					iVar1 = 0;
					while (iVar1 < Local_108)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_108[iVar1 /*18*/]))
						{
							AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_108[iVar1 /*18*/], "MAG_2_PAPARAZZI_GROUP", 0);
						}
						iVar1++;
					}
					iVar1 = 0;
					while (iVar1 < Local_107)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_107[iVar1 /*18*/]))
						{
							AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_107[iVar1 /*18*/], "MAG_2_PAPARAZZI_GROUP", 0);
						}
						iVar1++;
					}
					iLocal_164++;
					break;
				
				case 1:
					func_49();
					if ((VEHICLE::IS_VEHICLE_DRIVEABLE(Local_107[0 /*18*/], 0) && !PED::IS_PED_INJURED(func_55(0, 0))) && !PED::IS_PED_INJURED(func_55(0, 1)))
					{
						if (!iLocal_151[1])
						{
							iLocal_151[1] = 1;
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(func_55(0, 0), Local_107[0 /*18*/], Local_153, 10f, 0, joaat("cavalcade2"), 786469, 2f, 10f);
						}
					}
					if ((VEHICLE::IS_VEHICLE_DRIVEABLE(Local_107[2 /*18*/], 0) && !PED::IS_PED_INJURED(func_55(2, 0))) && !PED::IS_PED_INJURED(func_55(2, 1)))
					{
						if (!iLocal_151[0])
						{
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(func_55(2, 0), Local_107[2 /*18*/], Local_154, 10f, 0, joaat("cavalcade2"), 786469, 2f, 10f);
							iLocal_151[0] = 1;
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_66) && !PED::IS_PED_INJURED(iLocal_66))
					{
						func_46(iLocal_66, 6);
						if (Global_3 || bLocal_55)
						{
							if (!PED::IS_PED_INJURED(func_55(1, 0)))
							{
								if (ENTITY::IS_ENTITY_AT_COORD(func_55(1, 0), Local_157, Global_15, 0, 1, 0))
								{
									func_45(iLocal_66, func_60(1));
								}
							}
							if (!PED::IS_PED_INJURED(func_55(1, 1)))
							{
								if (ENTITY::IS_ENTITY_AT_COORD(func_55(1, 1), Local_158, Global_15, 0, 1, 0))
								{
									func_45(iLocal_66, func_58(1));
								}
							}
							if (!PED::IS_PED_INJURED(func_55(0, 1)))
							{
								if (ENTITY::IS_ENTITY_AT_COORD(func_55(0, 1), Local_158, Global_15, 0, 1, 0))
								{
									func_45(iLocal_66, func_58(0));
								}
							}
						}
						else
						{
							func_46(iLocal_66, func_60(1));
							func_46(iLocal_66, func_58(1));
							if (SYSTEM::TIMERB() > 1000)
							{
								func_46(iLocal_66, func_60(1));
							}
						}
					}
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_69, 1), Local_67) < 9f)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(func_55(2, 1), Local_155, Global_15, 0, 1, 0))
						{
							func_45(iLocal_66, func_58(2));
						}
						if (ENTITY::IS_ENTITY_AT_COORD(func_55(3, 1), Local_156, Global_15, 0, 1, 0))
						{
							func_45(iLocal_66, func_58(3));
						}
						if (ENTITY::IS_ENTITY_AT_COORD(func_55(0, 1), Local_156, Global_15, 0, 1, 0))
						{
							func_45(iLocal_66, func_58(0));
						}
					}
					else
					{
						if (!MISC::IS_BIT_SET(iLocal_167, 3))
						{
							TASK::CLEAR_PED_TASKS(Local_108[func_58(3) /*18*/]);
							MISC::SET_BIT(&iLocal_167, 3);
						}
						if (!MISC::IS_BIT_SET(iLocal_167, 2))
						{
							TASK::CLEAR_PED_TASKS(Local_108[func_58(2) /*18*/]);
							MISC::SET_BIT(&iLocal_167, 2);
						}
						if (!MISC::IS_BIT_SET(iLocal_167, 0))
						{
							TASK::CLEAR_PED_TASKS(Local_108[func_58(0) /*18*/]);
							MISC::SET_BIT(&iLocal_167, 0);
						}
						if (Global_3 || bLocal_55)
						{
							func_45(iLocal_66, func_58(3));
						}
						else
						{
							func_46(iLocal_66, func_58(3));
						}
						func_46(iLocal_66, func_58(2));
						func_46(iLocal_66, func_58(0));
					}
					break;
			}
			func_44();
			break;
		
		case 3:
			func_49();
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_69, 0))
			{
				if (ENTITY::GET_ENTITY_SPEED(iLocal_69) < 1f)
				{
					fLocal_152 = (fLocal_152 + MISC::GET_FRAME_TIME());
				}
				else if (fLocal_152 > 0f)
				{
					fLocal_152 = 0f;
				}
			}
			iVar0 = 0;
			while (iVar0 < Local_107)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_107[iVar0 /*18*/]) && iLocal_44 != 6)
				{
					if ((iVar0 < 2 && ((iVar0 != iLocal_162 || !ENTITY::DOES_ENTITY_EXIST(Local_107[0 /*18*/])) || !ENTITY::DOES_ENTITY_EXIST(Local_107[1 /*18*/]))) && (MISC::GET_GAME_TIMER() - iLocal_163) > 500)
					{
						if (SYSTEM::VDIST2(Local_51, Local_67) > 400f)
						{
							if (SYSTEM::VDIST2(Local_51, Local_67) < 62500f || (MISC::GET_GAME_TIMER() - iLocal_130) < 30000)
							{
								func_40(Local_107[iVar0 /*18*/], iLocal_69, &(Local_107[iVar0 /*18*/].f_5), &(Local_107[iVar0 /*18*/].f_F), &(Local_107[iVar0 /*18*/].f_B), &(Local_107[iVar0 /*18*/].f_E), &(Local_107[iVar0 /*18*/].f_10), Local_107[iVar0 /*18*/].f_2, 800, 50f);
								iLocal_162 = iVar0;
								iLocal_163 = MISC::GET_GAME_TIMER();
							}
						}
					}
					iVar2 = func_60(iVar0);
					if (!PED::IS_PED_INJURED(Local_108[iVar2 /*18*/]))
					{
						iVar3 = func_58(iVar0);
					}
					else
					{
						iVar3 = func_60(iVar0);
					}
					switch (Local_107[iVar0 /*18*/].f_11)
					{
						case 0:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_107[iVar0 /*18*/], 0))
							{
								if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_107[iVar0 /*18*/], 0))
								{
									if (!PED::IS_PED_INJURED(Local_108[iVar2 /*18*/]))
									{
										if (!PED::IS_PED_IN_VEHICLE(Local_108[iVar2 /*18*/], Local_107[iVar0 /*18*/], 0))
										{
											if (TASK::GET_SCRIPT_TASK_STATUS(Local_108[iVar2 /*18*/], -1794415470) != 1 && VEHICLE::IS_VEHICLE_SEAT_FREE(Local_107[iVar0 /*18*/], -1))
											{
												TASK::TASK_ENTER_VEHICLE(Local_108[iVar2 /*18*/], Local_107[iVar0 /*18*/], -1, -1, 2f, 1, 0);
											}
										}
									}
									if (iVar3 != -1)
									{
										if (!PED::IS_PED_INJURED(Local_108[iVar3 /*18*/]))
										{
											if (!PED::IS_PED_IN_VEHICLE(Local_108[iVar3 /*18*/], Local_107[iVar0 /*18*/], 0))
											{
												if (TASK::GET_SCRIPT_TASK_STATUS(Local_108[iVar3 /*18*/], -1794415470) != 1 && VEHICLE::IS_VEHICLE_SEAT_FREE(Local_107[iVar0 /*18*/], 0))
												{
													TASK::TASK_ENTER_VEHICLE(Local_108[iVar3 /*18*/], Local_107[iVar0 /*18*/], -1, 0, 2f, 1, 0);
												}
											}
										}
										if (!PED::IS_PED_INJURED(Local_108[iVar2 /*18*/]) && (iVar3 != -1 && !PED::IS_PED_INJURED(Local_108[iVar3 /*18*/])))
										{
											if ((PED::IS_PED_IN_VEHICLE(Local_108[iVar2 /*18*/], Local_107[iVar0 /*18*/], 0) && (iVar3 != -1 && PED::IS_PED_IN_VEHICLE(Local_108[iVar3 /*18*/], Local_107[iVar0 /*18*/], 0))) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_69, 0))
											{
												if (TASK::GET_SCRIPT_TASK_STATUS(Local_108[iVar2 /*18*/], -1273030092) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_108[iVar2 /*18*/], -1817882002) != 1)
												{
													PED::SET_PED_COMBAT_ATTRIBUTES(Local_108[iVar2 /*18*/], 3, 0);
													PED::SET_PED_COMBAT_ATTRIBUTES(Local_108[iVar2 /*18*/], 1, 1);
													PED::SET_PED_COMBAT_ATTRIBUTES(Local_108[iVar2 /*18*/], 2, 0);
													if (iVar0 == 0)
													{
														TASK::TASK_VEHICLE_MISSION(Local_108[iVar2 /*18*/], Local_107[iVar0 /*18*/], iLocal_69, 10, 50f, 786471, 4f, 10f, 1);
													}
													else if (iVar0 == 1)
													{
														TASK::TASK_VEHICLE_MISSION(Local_108[iVar2 /*18*/], Local_107[iVar0 /*18*/], iLocal_69, 11, 50f, 786470, 4f, 10f, 1);
													}
													else if (iVar0 == 2)
													{
														TASK::TASK_VEHICLE_MISSION(Local_108[iVar2 /*18*/], Local_107[iVar0 /*18*/], iLocal_69, 10, 50f, 786471, 4f, 10f, 1);
													}
													else if (iVar0 == 3)
													{
														TASK::TASK_VEHICLE_MISSION(Local_108[iVar2 /*18*/], Local_107[iVar0 /*18*/], iLocal_69, 11, 50f, 786470, 4f, 10f, 1);
													}
												}
												TASK::SET_DRIVE_TASK_CRUISE_SPEED(Local_108[iVar2 /*18*/], func_39((3f * MISC::GET_DISTANCE_BETWEEN_COORDS(Local_53, Local_107[iVar0 /*18*/].f_8, 1)), 50f, 120f));
											}
										}
									}
									if (fLocal_152 > 3f && SYSTEM::VDIST(Local_107[iVar0 /*18*/].f_8, Local_53) < 10f)
									{
										Local_107[iVar0 /*18*/].f_11 = 1;
									}
								}
							}
							else
							{
								if (!PED::IS_PED_INJURED(Local_108[iVar2 /*18*/]))
								{
									if (!PED::IS_PED_FLEEING(Local_108[iVar2 /*18*/]))
									{
										PED::SET_PED_FLEE_ATTRIBUTES(Local_108[iVar2 /*18*/], 2, 0);
										TASK::TASK_SMART_FLEE_PED(Local_108[iVar2 /*18*/], PLAYER::PLAYER_PED_ID(), 300f, 100000, 0, 0);
									}
								}
								if (iVar3 != -1)
								{
									if (!PED::IS_PED_INJURED(Local_108[iVar3 /*18*/]))
									{
										if (!PED::IS_PED_FLEEING(Local_108[iVar3 /*18*/]))
										{
											PED::SET_PED_FLEE_ATTRIBUTES(Local_108[iVar3 /*18*/], 2, 0);
											TASK::TASK_SMART_FLEE_PED(Local_108[iVar3 /*18*/], PLAYER::PLAYER_PED_ID(), 300f, 100000, 0, 0);
										}
									}
								}
							}
							break;
						
						case 1:
							if (PED::IS_PED_IN_ANY_VEHICLE(Local_108[iVar2 /*18*/], 0))
							{
								TASK::TASK_LEAVE_ANY_VEHICLE(Local_108[iVar2 /*18*/], 1, 256);
							}
							else
							{
								func_46(iLocal_66, iVar2);
							}
							if (iVar3 != -1)
							{
								if (!PED::IS_PED_INJURED(Local_108[iVar3 /*18*/]))
								{
									if (PED::IS_PED_IN_ANY_VEHICLE(Local_108[iVar3 /*18*/], 0))
									{
										TASK::TASK_LEAVE_ANY_VEHICLE(Local_108[iVar3 /*18*/], 0, 256);
									}
									else
									{
										func_46(iLocal_66, iVar3);
									}
								}
							}
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_107[iVar0 /*18*/], 0))
							{
								if (SYSTEM::VDIST(Local_107[iVar0 /*18*/].f_8, Local_53) > 15f)
								{
									Local_107[iVar0 /*18*/].f_11 = 0;
								}
							}
							break;
					}
					if ((!PED::IS_PED_INJURED(Local_108[iVar2 /*18*/]) && (iVar3 == -1 || !PED::IS_PED_INJURED(Local_108[iVar3 /*18*/]))) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_107[iVar0 /*18*/], 0))
					{
						iVar4 = 1;
						if (!ENTITY::IS_ENTITY_OCCLUDED(Local_108[iVar2 /*18*/]))
						{
							iVar4 = 0;
						}
						if (iVar3 != -1)
						{
							if (!ENTITY::IS_ENTITY_OCCLUDED(Local_108[iVar3 /*18*/]))
							{
								iVar4 = 0;
							}
						}
						if (!ENTITY::IS_ENTITY_OCCLUDED(Local_107[iVar0 /*18*/]))
						{
							iVar4 = 0;
						}
						if ((iVar4 && SYSTEM::VDIST(Local_51, Local_107[iVar0 /*18*/].f_8) > 25f) && SYSTEM::VDIST(Local_51, Local_108[iVar0 /*18*/].f_6) > 25f)
						{
							if (!PED::IS_PED_IN_VEHICLE(Local_108[iVar2 /*18*/], Local_107[iVar0 /*18*/], 0))
							{
								PED::SET_PED_INTO_VEHICLE(Local_108[iVar2 /*18*/], Local_107[iVar0 /*18*/], -1);
							}
							if (iVar3 != -1)
							{
								if (!PED::IS_PED_IN_VEHICLE(Local_108[iVar3 /*18*/], Local_107[iVar0 /*18*/], 0))
								{
									PED::SET_PED_INTO_VEHICLE(Local_108[iVar3 /*18*/], Local_107[iVar0 /*18*/], 0);
								}
							}
						}
					}
					if (func_38(iVar0, 1125515264))
					{
						func_37(iVar0);
					}
				}
				func_44();
				func_29();
				iVar0++;
			}
			break;
		
		case 4:
			func_49();
			if (!iLocal_166)
			{
				iVar0 = 0;
				while (iVar0 < Local_107)
				{
					iVar5 = func_60(iVar0);
					if (!PED::IS_PED_INJURED(Local_108[iVar5 /*18*/]))
					{
						iVar6 = func_58(iVar0);
					}
					else
					{
						iVar6 = func_60(iVar0);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_107[iVar0 /*18*/], 0))
					{
						if (!PED::IS_PED_INJURED(Local_108[iVar5 /*18*/]))
						{
							if (!PED::IS_PED_IN_VEHICLE(Local_108[iVar5 /*18*/], Local_107[iVar0 /*18*/], 0))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_108[iVar5 /*18*/], -1794415470) != 1)
								{
									TASK::TASK_ENTER_VEHICLE(Local_108[iVar5 /*18*/], Local_107[iVar0 /*18*/], -1, -1, 2f, 1, 0);
								}
							}
						}
						if (iVar6 != -1)
						{
							if (!PED::IS_PED_INJURED(Local_108[iVar6 /*18*/]))
							{
								if (!PED::IS_PED_IN_VEHICLE(Local_108[iVar6 /*18*/], Local_107[iVar0 /*18*/], 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(Local_108[iVar6 /*18*/], -1794415470) != 1)
									{
										TASK::TASK_ENTER_VEHICLE(Local_108[iVar6 /*18*/], Local_107[iVar0 /*18*/], -1, 0, 2f, 1, 0);
									}
								}
							}
							if (!PED::IS_PED_INJURED(Local_108[iVar5 /*18*/]) && (iVar6 != -1 && !PED::IS_PED_INJURED(Local_108[iVar6 /*18*/])))
							{
								if ((PED::IS_PED_IN_VEHICLE(Local_108[iVar5 /*18*/], Local_107[iVar0 /*18*/], 0) && (iVar6 != -1 && PED::IS_PED_IN_VEHICLE(Local_108[iVar6 /*18*/], Local_107[iVar0 /*18*/], 0))) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_69, 0))
								{
									fVar7 = func_39((70f - (SYSTEM::TO_FLOAT((MISC::GET_GAME_TIMER() - iLocal_65)) / 50f)), 0f, 70f);
									if (fVar7 <= 1f || (MISC::GET_GAME_TIMER() - iLocal_65) > 4000)
									{
										TASK::SET_DRIVE_TASK_MAX_CRUISE_SPEED(Local_108[iVar5 /*18*/], fVar7);
										iVar8 = 0;
										while (iVar8 < Local_107)
										{
											if ((VEHICLE::IS_VEHICLE_DRIVEABLE(Local_107[iVar8 /*18*/], 0) && !PED::IS_PED_INJURED(func_55(iVar8, 0))) && PED::IS_PED_IN_VEHICLE(func_55(iVar8, 0), Local_107[iVar8 /*18*/], 0))
											{
												TASK::CLEAR_PED_TASKS(func_55(iVar8, 0));
												TASK::TASK_VEHICLE_MISSION(func_55(iVar8, 0), Local_107[iVar8 /*18*/], 0, 5, 10f, 786468, 10f, 10f, 1);
											}
											iVar8++;
										}
										iLocal_166 = 1;
									}
									else if (TASK::GET_SCRIPT_TASK_STATUS(Local_108[iVar5 /*18*/], -1273030092) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_108[iVar5 /*18*/], -1817882002) != 1)
									{
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_108[iVar5 /*18*/], 3, 0);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_108[iVar5 /*18*/], 1, 1);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_108[iVar5 /*18*/], 2, 0);
										if (iVar0 == 0)
										{
											TASK::TASK_VEHICLE_MISSION(Local_108[iVar5 /*18*/], Local_107[iVar0 /*18*/], iLocal_69, 10, fVar7, 786471, 4f, 10f, 1);
										}
										else if (iVar0 == 1)
										{
											TASK::TASK_VEHICLE_MISSION(Local_108[iVar5 /*18*/], Local_107[iVar0 /*18*/], iLocal_69, 11, fVar7, 786470, 4f, 10f, 1);
										}
										else if (iVar0 == 2)
										{
											TASK::TASK_VEHICLE_MISSION(Local_108[iVar5 /*18*/], Local_107[iVar0 /*18*/], iLocal_69, 10, fVar7, 786471, 4f, 10f, 1);
										}
										else if (iVar0 == 3)
										{
											TASK::TASK_VEHICLE_MISSION(Local_108[iVar5 /*18*/], Local_107[iVar0 /*18*/], iLocal_69, 11, fVar7, 786470, 4f, 10f, 1);
										}
									}
								}
							}
						}
					}
					else
					{
						if (!PED::IS_PED_INJURED(Local_108[iVar5 /*18*/]))
						{
							if (!PED::IS_PED_FLEEING(Local_108[iVar5 /*18*/]))
							{
								PED::SET_PED_FLEE_ATTRIBUTES(Local_108[iVar5 /*18*/], 2, 0);
								TASK::TASK_SMART_FLEE_PED(Local_108[iVar5 /*18*/], PLAYER::PLAYER_PED_ID(), 300f, 100000, 0, 0);
							}
						}
						if (iVar6 != -1)
						{
							if (!PED::IS_PED_INJURED(Local_108[iVar6 /*18*/]))
							{
								if (!PED::IS_PED_FLEEING(Local_108[iVar6 /*18*/]))
								{
									PED::SET_PED_FLEE_ATTRIBUTES(Local_108[iVar6 /*18*/], 2, 0);
									TASK::TASK_SMART_FLEE_PED(Local_108[iVar6 /*18*/], PLAYER::PLAYER_PED_ID(), 300f, 100000, 0, 0);
								}
							}
						}
					}
					iVar0++;
				}
			}
			else
			{
				if (func_38(iLocal_165, 10f))
				{
					func_37(iLocal_165);
				}
				iLocal_165++;
				if (iLocal_165 > 3)
				{
					iLocal_165 = 0;
				}
			}
			func_44();
			func_29();
			break;
		
		case 6:
			if (func_38(iLocal_165, 1125515264))
			{
				func_37(iLocal_165);
			}
			iLocal_165++;
			if (iLocal_165 > 3)
			{
				iLocal_165 = 0;
			}
			break;
	}
	iVar0 = 0;
	while (iVar0 < Local_108)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_108[iVar0 /*18*/]) && !PED::IS_PED_INJURED(Local_108[iVar0 /*18*/]))
		{
			if (iLocal_46 > 1)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_133))
				{
					func_28(iVar0);
					if (ENTITY::DOES_ENTITY_EXIST(Local_108[iVar0 /*18*/].f_2) && ENTITY::IS_ENTITY_ATTACHED(Local_108[iVar0 /*18*/].f_2))
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(Local_108[iVar0 /*18*/], 0))
						{
							if (ENTITY::IS_ENTITY_VISIBLE(Local_108[iVar0 /*18*/].f_2))
							{
								if (TASK::IS_PED_GETTING_UP(Local_108[iVar0 /*18*/]))
								{
									ENTITY::SET_ENTITY_VISIBLE(Local_108[iVar0 /*18*/].f_2, 0);
								}
							}
							else if (!TASK::IS_PED_GETTING_UP(Local_108[iVar0 /*18*/]))
							{
								ENTITY::SET_ENTITY_VISIBLE(Local_108[iVar0 /*18*/].f_2, 1);
							}
							if (!ENTITY::IS_ENTITY_OCCLUDED(Local_108[iVar0 /*18*/]))
							{
								if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_108[iVar0 /*18*/], sLocal_133, func_27(iVar0), 3))
								{
									if (!Local_108[iVar0 /*18*/].f_B)
									{
										if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_108[iVar0 /*18*/], sLocal_133, "grip", 3))
										{
											TASK::TASK_PLAY_ANIM(Local_108[iVar0 /*18*/], sLocal_133, "grip", 1000f, -1000f, -1, 57, 0, 0, 0, 0);
											Local_108[iVar0 /*18*/].f_B = 1;
										}
									}
								}
								else if (Local_108[iVar0 /*18*/].f_B)
								{
									TASK::TASK_PLAY_ANIM(Local_108[iVar0 /*18*/], sLocal_133, "grip", 1000f, -1000f, -1, 48, 0.99f, 0, 0, 0);
									Local_108[iVar0 /*18*/].f_B = 0;
								}
							}
							if (!Local_108[iVar0 /*18*/].f_A)
							{
								STREAMING::REQUEST_ANIM_SET(sLocal_133);
								if (STREAMING::HAS_ANIM_SET_LOADED(sLocal_133))
								{
									PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(Local_108[iVar0 /*18*/], sLocal_133);
									Local_108[iVar0 /*18*/].f_A = 1;
								}
							}
						}
						else
						{
							if (Local_108[iVar0 /*18*/].f_B)
							{
								TASK::TASK_PLAY_ANIM(Local_108[iVar0 /*18*/], sLocal_133, "grip", 1000f, -1000f, -1, 48, 0.99f, 0, 0, 0);
								Local_108[iVar0 /*18*/].f_B = 0;
							}
							if (Local_108[iVar0 /*18*/].f_A)
							{
								PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(Local_108[iVar0 /*18*/]);
								Local_108[iVar0 /*18*/].f_A = 0;
							}
						}
						if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_108[iVar0 /*18*/]) && func_26(Local_108[iVar0 /*18*/], PED::GET_VEHICLE_PED_IS_IN(Local_108[iVar0 /*18*/], 0)) == -1)
						{
							if (ENTITY::IS_ENTITY_VISIBLE(Local_108[iVar0 /*18*/].f_2))
							{
								ENTITY::SET_ENTITY_VISIBLE(Local_108[iVar0 /*18*/].f_2, 0);
							}
						}
						else if (!ENTITY::IS_ENTITY_VISIBLE(Local_108[iVar0 /*18*/].f_2))
						{
							ENTITY::SET_ENTITY_VISIBLE(Local_108[iVar0 /*18*/].f_2, 1);
						}
					}
					else
					{
						if (Local_108[iVar0 /*18*/].f_B)
						{
							TASK::TASK_PLAY_ANIM(Local_108[iVar0 /*18*/], sLocal_133, "grip", 1000f, -1000f, -1, 48, 0.99f, 0, 0, 0);
							Local_108[iVar0 /*18*/].f_B = 0;
						}
						if (Local_108[iVar0 /*18*/].f_A)
						{
							PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(Local_108[iVar0 /*18*/]);
							Local_108[iVar0 /*18*/].f_A = 0;
						}
					}
				}
			}
			if (iLocal_44 != 7)
			{
				if (PED::IS_PED_BEING_JACKED(Local_108[iVar0 /*18*/]) && PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()))
				{
					func_171(7);
				}
			}
		}
		iVar0++;
	}
	if (iLocal_44 != 7)
	{
		iVar0 = 0;
		while (iVar0 < Local_107)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_107[iVar0 /*18*/]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_107[iVar0 /*18*/], 0))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_107[iVar0 /*18*/], 0))
					{
						func_171(7);
					}
				}
			}
			iVar0++;
		}
	}
}

int func_26(int iParam0, int iParam1)//Position - 0x2BBC
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

char* func_27(int iParam0)//Position - 0x2C28
{
	switch (iParam0)
	{
		case 0:
		case 5:
			return "idle_a";
			break;
		
		case 1:
		case 6:
			return "idle_b";
			break;
		
		case 2:
		case 7:
			return "idle_c";
			break;
		
		case 3:
			return "idle_d";
			break;
		
		case 4:
			return "idle_e";
			break;
		
		default:
			break;
	}
	return "";
}

void func_28(int iParam0)//Position - 0x2C9E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (MISC::IS_BIT_SET(Local_108[iParam0 /*18*/].f_F, iVar0))
		{
			iVar1 = 5;
			iVar2 = (iVar1 + iLocal_135);
			iVar3 = iVar0;
			if (iVar3 < iVar1)
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_108[iParam0 /*18*/], sLocal_133, func_27(iParam0), 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_108[iParam0 /*18*/], sLocal_133, func_27(iParam0)) > 0.9f)
					{
						MISC::CLEAR_BIT(&(Local_108[iParam0 /*18*/].f_F), iVar0);
					}
				}
			}
			else if (iVar3 < iVar2)
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_108[iParam0 /*18*/], sLocal_134, iLocal_135[(iVar3 - iVar1)], 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_108[iParam0 /*18*/], sLocal_134, iLocal_135[(iVar3 - iVar1)]) > 0.9f)
					{
						MISC::CLEAR_BIT(&(Local_108[iParam0 /*18*/].f_F), iVar0);
					}
				}
			}
			else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_108[iParam0 /*18*/], sLocal_133, "grip", 3))
			{
				MISC::CLEAR_BIT(&(Local_108[iParam0 /*18*/].f_F), iVar0);
			}
		}
		iVar0++;
	}
}

void func_29()//Position - 0x2D9B
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iLocal_66))
	{
		iVar0 = func_58(iLocal_148);
		if (((ENTITY::DOES_ENTITY_EXIST(Local_107[iLocal_148 /*18*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_107[iLocal_148 /*18*/], 0)) && ENTITY::DOES_ENTITY_EXIST(Local_108[iVar0 /*18*/])) && !PED::IS_PED_INJURED(Local_108[iVar0 /*18*/]))
		{
			if (VEHICLE::IS_VEHICLE_MODEL(Local_107[iLocal_148 /*18*/], joaat("cavalcade2")))
			{
				if (SYSTEM::VDIST2(Local_108[iVar0 /*18*/].f_6, Local_52) < SYSTEM::POW(30f, 2f) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_107[iLocal_148 /*18*/], 0) == Local_108[iVar0 /*18*/])
				{
					if (!Local_108[iVar0 /*18*/].f_9)
					{
						if (!func_36(iVar0))
						{
							func_30(iVar0);
						}
					}
					else if (!func_36(iVar0) && (MISC::GET_GAME_TIMER() - Local_108[iVar0 /*18*/].f_D) > 1000)
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_108[iVar0 /*18*/], sLocal_134, "base", 3))
						{
							TASK::TASK_PLAY_ANIM(Local_108[iVar0 /*18*/], sLocal_134, "base", 8f, 1000f, -1, 16, 0, 0, 0, 0);
						}
					}
				}
			}
			else if (!Local_108[iVar0 /*18*/].f_9)
			{
				if (SYSTEM::VDIST2(Local_108[iVar0 /*18*/].f_6, Local_52) < SYSTEM::POW(30f, 2f) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_107[iLocal_148 /*18*/], 0) == Local_108[iVar0 /*18*/])
				{
					TASK::TASK_SWEEP_AIM_ENTITY(Local_108[iVar0 /*18*/], "random@paparazzi@pap_anims", "sweep_low", "sweep_med", "sweep_high", -1, iLocal_66, 1070134723, 1048576000);
					Local_108[iVar0 /*18*/].f_9 = 1;
					Local_108[iVar0 /*18*/].f_D = MISC::GET_GAME_TIMER();
				}
			}
			else if (Local_108[iVar0 /*18*/].f_9)
			{
				if ((MISC::GET_GAME_TIMER() - Local_108[iVar0 /*18*/].f_D) > 2000)
				{
					Local_108[iVar0 /*18*/].f_9 = 0;
				}
			}
		}
		iLocal_148++;
		if (iLocal_148 >= Local_107)
		{
			iLocal_148 = 0;
		}
	}
}

void func_30(int iParam0)//Position - 0x2F77
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	
	if (!PED::IS_PED_INJURED(Local_108[iParam0 /*18*/]) && !PED::IS_PED_INJURED(iLocal_66))
	{
		iVar0 = 15;
		Var1 = { Local_52 - Local_108[iParam0 /*18*/].f_6 };
		Var2 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(Local_108[iParam0 /*18*/]) };
		fVar3 = func_34(Var2, Var1);
		if (MISC::ABSF(fVar3) < 10f)
		{
			iVar0 = 5;
		}
		else if (fVar3 >= 10f && fVar3 < 60f)
		{
			iVar0 = 7;
		}
		else if (fVar3 >= 60f && fVar3 < 100f)
		{
			iVar0 = 6;
		}
		else if (fVar3 <= -10f && fVar3 > -60f)
		{
			iVar0 = 10;
		}
		else if (fVar3 < -60f && fVar3 > -100f)
		{
			iVar0 = 9;
		}
		if (iVar0 != 15)
		{
			func_31(iParam0, iVar0);
		}
	}
}

void func_31(int iParam0, int iParam1)//Position - 0x3067
{
	if (iParam1 < 15)
	{
		if (!MISC::IS_BIT_SET(Local_108[iParam0 /*18*/].f_F, iParam1))
		{
			if (func_33(iParam1))
			{
				TASK::TASK_PLAY_ANIM(Local_108[iParam0 /*18*/], sLocal_134, iLocal_135[func_32(iParam1)], 4f, -4f, -1, 16, 0, 0, 0, 0);
			}
			else if (iParam1 < 5)
			{
				TASK::TASK_PLAY_ANIM(Local_108[iParam0 /*18*/], sLocal_133, func_27(iParam0), 8f, -8f, -1, 0, 0, 0, 0, 0);
			}
			else
			{
				TASK::TASK_PLAY_ANIM(Local_108[iParam0 /*18*/], sLocal_133, "grip", 1000f, -1000f, -1, 57, 0, 0, 0, 0);
			}
			Local_108[iParam0 /*18*/].f_F = 0;
			MISC::SET_BIT(&(Local_108[iParam0 /*18*/].f_F), iParam1);
		}
	}
}

int func_32(int iParam0)//Position - 0x311E
{
	return (iParam0 - 5);
}

bool func_33(int iParam0)//Position - 0x312A
{
	int iVar0;
	
	iVar0 = iParam0;
	return (iVar0 >= 5 && iVar0 < (5 + iLocal_135));
}

float func_34(struct<3> Param0, struct<3> Param1)//Position - 0x3147
{
	float fVar0;
	
	Param0 = { func_35(Param0) };
	Param1 = { func_35(Param1) };
	fVar0 = (MISC::ATAN2(Param1.f_1, Param1.x) - MISC::ATAN2(Param0.f_1, Param0.x));
	if (fVar0 > 180f)
	{
		fVar0 = (fVar0 - 360f);
	}
	else if (fVar0 < -180f)
	{
		fVar0 = (fVar0 + 360f);
	}
	return fVar0;
}

Vector3 func_35(struct<3> Param0)//Position - 0x31AD
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

bool func_36(int iParam0)//Position - 0x31EC
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_134))
	{
		iVar1 = 5;
		while (iVar1 <= 13)
		{
			if (!bVar0)
			{
				if (MISC::IS_BIT_SET(Local_108[iParam0 /*18*/].f_F, iVar1))
				{
					bVar0 = true;
				}
			}
			iVar1++;
		}
	}
	return bVar0;
}

void func_37(int iParam0)//Position - 0x3231
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(Local_107[iParam0 /*18*/]) && ENTITY::IS_ENTITY_OCCLUDED(Local_107[iParam0 /*18*/]))
	{
		VEHICLE::DELETE_VEHICLE(&(Local_107[iParam0 /*18*/]));
	}
	if (HUD::DOES_BLIP_EXIST(Local_107[iParam0 /*18*/].f_1))
	{
		HUD::REMOVE_BLIP(&(Local_107[iParam0 /*18*/].f_1));
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (iVar0 == 1)
		{
			iVar1 = func_58(iParam0);
		}
		else
		{
			iVar1 = func_60(iParam0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_108[iVar1 /*18*/]) && ENTITY::IS_ENTITY_OCCLUDED(Local_108[iVar1 /*18*/]))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_108[iVar1 /*18*/]))
			{
				OBJECT::DELETE_OBJECT(&(Local_108[iVar1 /*18*/].f_2));
			}
			if (HUD::DOES_BLIP_EXIST(Local_108[iVar1 /*18*/].f_1))
			{
				HUD::REMOVE_BLIP(&(Local_108[iVar1 /*18*/].f_1));
			}
			PED::DELETE_PED(&(Local_108[iVar1 /*18*/]));
		}
		iVar0++;
	}
}

int func_38(int iParam0, float fParam1)//Position - 0x32FF
{
	int iVar0;
	
	iVar0 = 1;
	if (ENTITY::DOES_ENTITY_EXIST(Local_107[iParam0 /*18*/]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_107[iParam0 /*18*/], 0))
		{
			if (SYSTEM::VDIST2(Local_51, Local_107[iParam0 /*18*/].f_8) < (fParam1 * fParam1) || !ENTITY::IS_ENTITY_OCCLUDED(Local_107[iParam0 /*18*/]))
			{
				iVar0 = 0;
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_55(iParam0, 0)))
	{
		if (!PED::IS_PED_INJURED(func_55(iParam0, 0)))
		{
			if (SYSTEM::VDIST2(Local_51, Local_108[func_60(iParam0) /*18*/].f_6) < (fParam1 * fParam1) || !ENTITY::IS_ENTITY_OCCLUDED(func_55(iParam0, 0)))
			{
				iVar0 = 0;
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_55(iParam0, 1)))
	{
		if (!PED::IS_PED_INJURED(func_55(iParam0, 1)))
		{
			if (SYSTEM::VDIST2(Local_51, Local_108[func_58(iParam0) /*18*/].f_6) < (fParam1 * fParam1) || !ENTITY::IS_ENTITY_OCCLUDED(func_55(iParam0, 1)))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

float func_39(float fParam0, float fParam1, float fParam2)//Position - 0x33F8
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

void func_40(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, struct<3> Param7, int iParam8, float fParam9)//Position - 0x341F
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (((((ENTITY::DOES_ENTITY_EXIST(iParam1) && iParam0 != iParam1) && !VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iParam1))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iParam1))) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iParam1))) && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam1)))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam1, 1), *uParam4, 1) > 20f)
			{
				if (func_43(iParam0, iParam1, iLocal_118, ENTITY::GET_ENTITY_COORDS(iParam1, 1), ENTITY::GET_ENTITY_ROTATION(iParam1, 2)))
				{
					*uParam2 = { *uParam4 };
					*uParam3 = *uParam5;
					*uParam2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam2, *uParam3, Param7) };
					*uParam4 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
					*uParam5 = ENTITY::GET_ENTITY_HEADING(iParam1);
				}
			}
			if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0))
			{
				*uParam6 = MISC::GET_GAME_TIMER();
			}
			else if ((MISC::GET_GAME_TIMER() - *uParam6) > iParam8)
			{
				if ((func_42(iParam0, iParam1, 1) > fParam9 && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam1, 1), *uParam2, 1) > 20f) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), *uParam2) > 100f)
				{
					if (!func_41(*uParam2))
					{
						if (!CAM::IS_SPHERE_VISIBLE(*uParam2, 6f))
						{
							MISC::CLEAR_AREA_OF_PEDS(*uParam2, 6f, 0);
							MISC::CLEAR_AREA_OF_VEHICLES(*uParam2, 6f, 0, 0, 0, 0, 0);
							ENTITY::SET_ENTITY_COORDS(iParam0, *uParam2, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(iParam0, *uParam3);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iParam0);
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(iParam0, func_39((ENTITY::GET_ENTITY_SPEED(iParam1) + 10f), 10f, 60f));
							VEHICLE::SET_VEHICLE_ENGINE_ON(iParam0, 1, 1);
							*uParam6 = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
		}
		else
		{
			*uParam6 = MISC::GET_GAME_TIMER();
		}
	}
}

int func_41(struct<3> Param0)//Position - 0x35E8
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

float func_42(int iParam0, int iParam1, int iParam2)//Position - 0x3612
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

int func_43(int iParam0, int iParam1, int iParam2, struct<3> Param3, struct<3> Param4)//Position - 0x366E
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	var uVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	struct<3> Var12;
	int iVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var3, &Var4);
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam1), &Var5, &uVar6);
		fVar7 = MISC::ABSF((Var4.f_2 - Var3.f_2));
		fVar8 = MISC::ABSF((Var4.x - Var3.x));
		fVar9 = MISC::ABSF((Var4.f_1 - Var3.f_1));
		if (fVar8 > fVar7)
		{
			fVar10 = (fVar8 / 2f);
			fVar11 = (fVar10 - MISC::ABSF(Var3.f_2));
		}
		else
		{
			fVar10 = (fVar9 / 2f);
			fVar11 = (fVar10 - MISC::ABSF(Var3.x));
		}
		Var12.f_2 = (Var12.f_2 + (Var5.f_2 - Var3.f_2));
		ENTITY::SET_ENTITY_COORDS(iParam2, Param3, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_ROTATION(iParam2, Param4, 2, 1);
		Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam2, Vector((fVar11 * 1.25f), ((fVar9 / 2f) - (fVar10 * 0.75f)), 0f) + Var12) };
		Var2 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam2, Vector((fVar11 * 1.25f), ((-fVar9 / 2f) + (fVar10 * 0.75f)), 0f) + Var12) };
		uVar17 = SHAPETEST::START_SHAPE_TEST_CAPSULE(Var2, Var1, fVar10, 19, PLAYER::PLAYER_PED_ID(), 4);
		if (SHAPETEST::GET_SHAPE_TEST_RESULT(uVar17, &iVar13, &uVar14, &uVar15, &uVar16) != 2)
		{
		}
		if (iVar13 != 0)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_44()//Position - 0x37A4
{
	bool bVar0;
	
	if ((MISC::GET_GAME_TIMER() - iLocal_147) > 100)
	{
		if ((MISC::GET_GAME_TIMER() - Local_108[iLocal_146 /*18*/].f_C) > 500)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_108[iLocal_146 /*18*/]) && !PED::IS_PED_INJURED(Local_108[iLocal_146 /*18*/]))
			{
				bVar0 = true;
				if (!Local_108[iLocal_146 /*18*/].f_9 && PED::IS_PED_IN_ANY_VEHICLE(Local_108[iLocal_146 /*18*/], 0))
				{
					bVar0 = false;
				}
				if (bVar0)
				{
					if (((ENTITY::IS_ENTITY_PLAYING_ANIM(Local_108[iLocal_146 /*18*/], sLocal_133, func_27(iLocal_146), 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_108[iLocal_146 /*18*/], sLocal_133, func_27(iLocal_146)) > 0.5f) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_108[iLocal_146 /*18*/], sLocal_133, func_27(iLocal_146)) < 0.75f) || Local_108[iLocal_146 /*18*/].f_9)
					{
						GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_rcpap1_camera", Local_108[iLocal_146 /*18*/].f_2, 0.019f, -0.01f, 0.046f, 0f, 0f, -180f, 1065353216, 0, 0, 0);
						if ((iLocal_146 % 3) == 0)
						{
							AUDIO::PLAY_SOUND_FROM_COORD(-1, "SHUTTER_FLASH", ENTITY::GET_ENTITY_COORDS(Local_108[iLocal_146 /*18*/].f_2, 1), "CAMERA_FLASH_SOUNDSET", 0, 0, 0);
						}
						else if ((iLocal_146 % 3) == 1)
						{
							AUDIO::PLAY_SOUND_FROM_COORD(-1, "SHUTTER", ENTITY::GET_ENTITY_COORDS(Local_108[iLocal_146 /*18*/].f_2, 1), "CAMERA_FLASH_SOUNDSET", 0, 0, 0);
						}
						else
						{
							AUDIO::PLAY_SOUND_FROM_COORD(-1, "FLASH", ENTITY::GET_ENTITY_COORDS(Local_108[iLocal_146 /*18*/].f_2, 1), "CAMERA_FLASH_SOUNDSET", 0, 0, 0);
						}
						Local_108[iLocal_146 /*18*/].f_C = MISC::GET_GAME_TIMER();
					}
					iLocal_147 = MISC::GET_GAME_TIMER();
				}
			}
			iLocal_146++;
			if (iLocal_146 >= Local_108)
			{
				iLocal_146 = 0;
			}
		}
	}
}

void func_45(int iParam0, int iParam1)//Position - 0x3947
{
	if (!PED::IS_PED_INJURED(Local_108[iParam1 /*18*/]) && !PED::IS_PED_INJURED(iParam0))
	{
		if (!PED::IS_PED_FACING_PED(Local_108[iParam1 /*18*/], iParam0, 20f))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(Local_108[iParam1 /*18*/], -875674219) != 1)
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_108[iParam1 /*18*/], iParam0, 0);
			}
		}
		else if ((MISC::GET_GAME_TIMER() - Local_108[iParam1 /*18*/].f_D) > 2000)
		{
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_108[iParam1 /*18*/], sLocal_133, func_27(iParam1), 3))
			{
				TASK::TASK_PLAY_ANIM(Local_108[iParam1 /*18*/], sLocal_133, func_27(iParam1), 4f, -4f, -1, 0, 0, 0, 0, 0);
				Local_108[iParam1 /*18*/].f_D = MISC::GET_GAME_TIMER();
			}
		}
	}
}

void func_46(int iParam0, int iParam1)//Position - 0x39F7
{
	struct<3> Var0;
	
	if (!PED::IS_PED_INJURED(Local_108[iParam1 /*18*/]) && !PED::IS_PED_INJURED(iParam0))
	{
		Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, func_48(iParam1)) };
		switch (Local_108[iParam1 /*18*/].f_10)
		{
			case 0:
				func_47(Var0, iParam1, iParam0);
				Local_108[iParam1 /*18*/].f_10++;
				break;
			
			case 1:
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_108[iParam1 /*18*/], 713668775) != 1 || SYSTEM::VDIST(Var0, Local_108[iParam1 /*18*/].f_6) > 5f)
				{
					Local_108[iParam1 /*18*/].f_10++;
				}
				break;
			
			case 2:
				if (SYSTEM::VDIST(Var0, Local_108[iParam1 /*18*/].f_6) > 10f)
				{
					func_47(Var0, iParam1, iParam0);
					Local_108[iParam1 /*18*/].f_10++;
				}
				else
				{
					func_45(iParam0, iParam1);
				}
				break;
			
			case 3:
				if (SYSTEM::VDIST2(Var0, Local_108[iParam1 /*18*/].f_3) > 25f)
				{
					func_47(Var0, iParam1, iParam0);
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_108[iParam1 /*18*/], 713668775) != 1)
				{
					Local_108[iParam1 /*18*/].f_10 = (Local_108[iParam1 /*18*/].f_10 - 1);
				}
				break;
			}
	}
}

void func_47(struct<3> Param0, int iParam1, int iParam2)//Position - 0x3B48
{
	struct<3> Var0;
	int iVar1;
	
	Var0 = { func_35(ENTITY::GET_ENTITY_COORDS(iParam2, 1) - Param0) };
	iVar1 = MISC::GET_HEADING_FROM_VECTOR_2D(Var0.x, Var0.f_1);
	Local_108[iParam1 /*18*/].f_3 = { Param0 };
	TASK::CLEAR_PED_TASKS(Local_108[iParam1 /*18*/]);
	if (SYSTEM::VDIST(Param0, Local_108[iParam1 /*18*/].f_6) < 2f)
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_108[iParam1 /*18*/], Local_108[iParam1 /*18*/].f_3, 1f, -1, 0.5f, 512, iVar1);
	}
	else
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_108[iParam1 /*18*/], Local_108[iParam1 /*18*/].f_3, 2f, -1, 0.5f, 512, iVar1);
	}
}

Vector3 func_48(int iParam0)//Position - 0x3BE2
{
	switch (iParam0)
	{
		case 0:
			return -0.6578f, 3.328f, 0.2129f;
			break;
		
		case 1:
			return 0.5781f, 3.1584f, 0.2203f;
			break;
		
		case 2:
			return 1.6953f, 2.4036f, 0.1413f;
			break;
		
		case 3:
			return 2.2778f, 1.3153f, 0.1534f;
			break;
		
		case 4:
			return 2.0457f, 0.0073f, 0.2707f;
			break;
		
		case 5:
			return 2.097f, -1.2978f, 0.23f;
			break;
		
		case 6:
			return 2.0693f, -3.2216f, 0.3726f;
			break;
		
		case 7:
			return 1.0275f, -3.6726f, 0.155f;
			break;
		
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_49()//Position - 0x3CCF
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	
	iVar0 = 0;
	while (iVar0 < Local_108)
	{
		if (HUD::DOES_BLIP_EXIST(Local_108[iVar0 /*18*/].f_1))
		{
			if (PED::IS_PED_INJURED(Local_108[iVar0 /*18*/]))
			{
				HUD::REMOVE_BLIP(&(Local_108[iVar0 /*18*/].f_1));
			}
			else if (PED::IS_PED_IN_ANY_VEHICLE(Local_108[iVar0 /*18*/], 0))
			{
				HUD::REMOVE_BLIP(&(Local_108[iVar0 /*18*/].f_1));
			}
		}
		else if (!PED::IS_PED_INJURED(Local_108[iVar0 /*18*/]) && !PED::IS_PED_IN_ANY_VEHICLE(Local_108[iVar0 /*18*/], 0))
		{
			Local_108[iVar0 /*18*/].f_1 = func_173(Local_108[iVar0 /*18*/], 1, 145);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_108[iVar0 /*18*/].f_1, "EP_PAPBLIP");
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_107)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_107[iVar0 /*18*/], 0))
		{
			if (HUD::DOES_BLIP_EXIST(Local_107[iVar0 /*18*/].f_1))
			{
				Var1 = { HUD::GET_BLIP_COORDS(Local_107[iVar0 /*18*/].f_1) };
				Var2 = { Local_107[iVar0 /*18*/].f_8 };
				Var1.x = (Var1.x + ((Var2.x - Var1.x) / 10f));
				Var1.f_1 = (Var1.f_1 + ((Var2.f_1 - Var1.f_1) / 10f));
				Var1.f_2 = (Var1.f_2 + ((Var2.f_2 - Var1.f_2) / 10f));
				HUD::SET_BLIP_COORDS(Local_107[iVar0 /*18*/].f_1, Var1);
				if (func_52(Local_107[iVar0 /*18*/], 1, 0, 0))
				{
					HUD::REMOVE_BLIP(&(Local_107[iVar0 /*18*/].f_1));
				}
			}
			else if (!func_52(Local_107[iVar0 /*18*/], 1, 0, 0))
			{
				Local_107[iVar0 /*18*/].f_1 = func_50(Local_107[iVar0 /*18*/].f_8, 0);
				HUD::SET_BLIP_COLOUR(Local_107[iVar0 /*18*/].f_1, 1);
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_107[iVar0 /*18*/].f_1, "EP_PAPBLIP");
				HUD::SET_BLIP_PRIORITY(Local_107[iVar0 /*18*/].f_1, 9);
			}
		}
		else if (HUD::DOES_BLIP_EXIST(Local_107[iVar0 /*18*/].f_1))
		{
			HUD::REMOVE_BLIP(&(Local_107[iVar0 /*18*/].f_1));
		}
		iVar0++;
	}
}

var func_50(struct<3> Param0, int iParam1)//Position - 0x3EA4
{
	var uVar0;
	
	uVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_SCALE(uVar0, func_51(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(uVar0, iParam1);
	return uVar0;
}

float func_51(bool bParam0, float fParam1, float fParam2)//Position - 0x3ED0
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_52(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x3EE7
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(uParam0) + 1;
	if (!ENTITY::IS_ENTITY_DEAD(uParam0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, (iVar0 - 1)))
			{
				iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, (iVar0 - 1));
				if (iParam3 && iVar2 == PLAYER::PLAYER_PED_ID())
				{
				}
				else if (bParam2)
				{
					if (!PED::IS_PED_INJURED(iVar2))
					{
						if (PED::IS_PED_A_PLAYER(iVar2))
						{
							return 0;
						}
					}
					else if (iParam1 == 0)
					{
						return 0;
					}
				}
				else if (iParam1 == 0)
				{
					return 0;
				}
				else
				{
					iVar3 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, (iVar0 - 1));
					if (!PED::IS_PED_INJURED(iVar3))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	return 1;
}

void func_53(int iParam0, struct<3> Param1, float fParam2, char* sParam3, char* sParam4, char* sParam5)//Position - 0x3F98
{
	if (!PED::IS_PED_INJURED(Local_108[iParam0 /*18*/]))
	{
		if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(Local_108[iParam0 /*18*/], 1), Param1) > 1.5f)
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(Local_108[iParam0 /*18*/], 713668775) != 1)
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_108[iParam0 /*18*/], Param1, 2f, -1, 0.25f, 0, fParam2);
			}
		}
		else if (MISC::ABSF((func_54(ENTITY::GET_ENTITY_HEADING(Local_108[iParam0 /*18*/])) - func_54(fParam2))) > 10f)
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(Local_108[iParam0 /*18*/], 1920390111) != 1)
			{
				TASK::TASK_ACHIEVE_HEADING(Local_108[iParam0 /*18*/], fParam2, 0);
			}
		}
		else
		{
			switch (Local_108[iParam0 /*18*/].f_10)
			{
				case 0:
					if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_108[iParam0 /*18*/], sParam3, sParam4, 3))
						{
							TASK::TASK_PLAY_ANIM(Local_108[iParam0 /*18*/], sParam3, sParam4, 4f, -4f, -1, 1, 0, 0, 0, 0);
						}
					}
					else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_108[iParam0 /*18*/], sParam3, sParam4, 3))
					{
						TASK::TASK_PLAY_ANIM(Local_108[iParam0 /*18*/], sParam3, sParam4, 4f, -4f, -1, 0, 0, 0, 0, 0);
					}
					else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_108[iParam0 /*18*/], sParam3, sParam4) > 0.99f)
					{
						TASK::TASK_PLAY_ANIM(Local_108[iParam0 /*18*/], sParam3, sParam5, 4f, -4f, -1, 0, 0, 0, 0, 0);
						Local_108[iParam0 /*18*/].f_10++;
					}
					break;
				
				case 1:
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_108[iParam0 /*18*/], sParam3, sParam5, 3))
					{
						TASK::TASK_PLAY_ANIM(Local_108[iParam0 /*18*/], sParam3, sParam5, 4f, -4f, -1, 0, 0, 0, 0, 0);
					}
					else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_108[iParam0 /*18*/], sParam3, sParam5) > 0.99f)
					{
						TASK::TASK_PLAY_ANIM(Local_108[iParam0 /*18*/], sParam3, sParam4, 4f, -4f, -1, 0, 0, 0, 0, 0);
						Local_108[iParam0 /*18*/].f_10 = 0;
					}
					break;
				}
			}
	}
}

float func_54(float fParam0)//Position - 0x4173
{
	if (fParam0 >= 180f)
	{
		fParam0 = (fParam0 - 360f);
	}
	if (fParam0 < -180f)
	{
		fParam0 = (fParam0 + 360f);
	}
	return fParam0;
}

var func_55(int iParam0, int iParam1)//Position - 0x41A7
{
	if (iParam1 == 0)
	{
		return Local_108[func_60(iParam0) /*18*/];
	}
	return Local_108[func_58(iParam0) /*18*/];
}

void func_56(int iParam0, struct<3> Param1, float fParam2, bool bParam3)//Position - 0x41CF
{
	if ((iParam0 % 2) == 1)
	{
		Local_107[iParam0 /*18*/] = VEHICLE::CREATE_VEHICLE(joaat("vader"), Param1, fParam2, 1, 1);
	}
	else
	{
		Local_107[iParam0 /*18*/] = VEHICLE::CREATE_VEHICLE(joaat("cavalcade2"), Param1, fParam2, 1, 1);
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_107[iParam0 /*18*/], 0);
	}
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_107[iParam0 /*18*/]);
	VEHICLE::SET_VEHICLE_STRONG(Local_107[iParam0 /*18*/], 1);
	if (bParam3)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(func_55(iParam0, 0)))
		{
			func_57(func_60(iParam0), Param1, fParam2);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(func_55(iParam0, 1)))
		{
			func_57(func_58(iParam0), Param1, fParam2);
		}
		if (!PED::IS_PED_INJURED(func_55(iParam0, 0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_107[iParam0 /*18*/], 0))
		{
			PED::SET_PED_INTO_VEHICLE(func_55(iParam0, 0), Local_107[iParam0 /*18*/], -1);
		}
		if (!PED::IS_PED_INJURED(func_55(iParam0, 1)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_107[iParam0 /*18*/], 0))
		{
			PED::SET_PED_INTO_VEHICLE(func_55(iParam0, 1), Local_107[iParam0 /*18*/], 0);
		}
		VEHICLE::SET_VEHICLE_ENGINE_ON(Local_107[iParam0 /*18*/], 1, 1);
	}
}

void func_57(int iParam0, struct<3> Param1, float fParam2)//Position - 0x42E2
{
	Local_108[iParam0 /*18*/] = PED::CREATE_PED(26, joaat("a_m_y_genstreet_02"), Param1, fParam2, 1, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_108[iParam0 /*18*/], 1, 0);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_108[iParam0 /*18*/], 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_108[iParam0 /*18*/], 0, 1);
	PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Local_108[iParam0 /*18*/], 3);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_108[iParam0 /*18*/], 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_108[iParam0 /*18*/], 17, 1);
	PED::SET_PED_FLEE_ATTRIBUTES(Local_108[iParam0 /*18*/], 2, 0);
	ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_108[iParam0 /*18*/], 0);
	PED::SET_PED_KEEP_TASK(Local_108[iParam0 /*18*/], 1);
	PED::SET_PED_SHOOT_RATE(Local_108[iParam0 /*18*/], 100);
	PED::SET_PED_FIRING_PATTERN(Local_108[iParam0 /*18*/], -957453492);
	PED::SET_PED_CONFIG_FLAG(Local_108[iParam0 /*18*/], 101, 1);
	PED::SET_PED_CONFIG_FLAG(Local_108[iParam0 /*18*/], 185, 0);
	ENTITY::SET_ENTITY_HEALTH(Local_108[iParam0 /*18*/], 300);
	PED::SET_PED_COMPONENT_VARIATION(Local_108[iParam0 /*18*/], 3, (iParam0 % 2), SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 2f)), 0);
	if (Global_3 || bLocal_55)
	{
		ENTITY::SET_ENTITY_INVINCIBLE(Local_108[iParam0 /*18*/], 1);
		ENTITY::SET_ENTITY_HEALTH(Local_108[iParam0 /*18*/], 500);
	}
	PED::SET_PED_TARGET_LOSS_RESPONSE(Local_108[iParam0 /*18*/], 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_108[iParam0 /*18*/], 2, 1);
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_108[iParam0 /*18*/], 2f);
	ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_108[iParam0 /*18*/], 0);
	PED::SET_PED_HELMET(Local_108[iParam0 /*18*/], 0);
	Local_108[iParam0 /*18*/].f_2 = OBJECT::CREATE_OBJECT(joaat("prop_pap_camera_01"), PED::GET_PED_BONE_COORDS(Local_108[iParam0 /*18*/], 28422, 0f, 0f, 0f), 1, 1, 0);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_108[iParam0 /*18*/].f_2, Local_108[iParam0 /*18*/], PED::GET_PED_BONE_INDEX(Local_108[iParam0 /*18*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	if (ENTITY::DOES_ENTITY_EXIST(Local_108[0 /*18*/].f_2))
	{
		ENTITY::SET_ENTITY_VISIBLE(Local_108[0 /*18*/].f_2, 0);
	}
	Local_108[iParam0 /*18*/].f_11 = ENTITY::GET_ENTITY_HEALTH(Local_108[iParam0 /*18*/]);
}

int func_58(int iParam0)//Position - 0x44A2
{
	return iParam0 * 2 + 1;
}

void func_59(int iParam0)//Position - 0x44B0
{
	if ((iParam0 % 2) == 1)
	{
		Local_108[iParam0 /*18*/].f_E = ((iParam0 - 1) / 2);
	}
	else
	{
		Local_108[iParam0 /*18*/].f_E = (iParam0 / 2);
	}
}

int func_60(int iParam0)//Position - 0x44DD
{
	return iParam0 * 2;
}

void func_61(int iParam0)//Position - 0x44E9
{
	Local_107[iParam0 /*18*/].f_11 = 0;
}

int func_62()//Position - 0x44FA
{
	bool bVar0;
	bool bVar1;
	
	if (!PED::IS_PED_INJURED(iLocal_66))
	{
		bVar0 = false;
		if (func_65())
		{
			if (ENTITY::DOES_ENTITY_EXIST(func_64()))
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(func_64(), 1), Local_52) < 5f && ENTITY::GET_ENTITY_SPEED(iLocal_69) < 1f)
				{
					bVar0 = true;
				}
			}
		}
		else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_69, 0))
		{
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_69, 0) && PED::IS_PED_IN_VEHICLE(iLocal_66, iLocal_69, 0))
			{
				fLocal_150 = (fLocal_150 + MISC::GET_FRAME_TIME());
			}
			else if (fLocal_150 > 0f)
			{
				fLocal_150 = 0f;
			}
		}
		if (bVar0)
		{
			fLocal_149 = (fLocal_149 + MISC::GET_FRAME_TIME());
		}
		else if (fLocal_149 > 0f)
		{
			fLocal_149 = 0f;
		}
		if (fLocal_149 > 30f)
		{
			bVar1 = true;
		}
		if (iLocal_56)
		{
			if (!PED::IS_PED_SITTING_IN_VEHICLE(iLocal_66, iLocal_69))
			{
				if (PED::IS_PED_RAGDOLL(iLocal_66))
				{
					bVar1 = true;
				}
				iLocal_56 = 0;
			}
		}
		if (!iLocal_56)
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_66, iLocal_69))
			{
				iLocal_56 = 1;
			}
		}
		if (fLocal_150 > 30f)
		{
			bVar1 = true;
		}
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_69, 0) && (!bLocal_128 || iLocal_44 == 1))
		{
			bVar1 = true;
		}
		if (SYSTEM::VDIST(Local_52, Local_51) > 30f)
		{
			bVar1 = true;
		}
		if (((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_69, 0) && func_63(iLocal_69)) && (!bLocal_128 || iLocal_44 == 1)) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_66, 1), Local_49) > 15f)
		{
			bVar1 = true;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_69, 0) && ENTITY::IS_ENTITY_IN_WATER(iLocal_69))
		{
			bVar1 = true;
		}
		if (bVar1)
		{
			if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 1)
			{
				sLocal_131 = "REPAP_GUP";
			}
			else
			{
				sLocal_131 = "REPAP_GUP2";
			}
			return 1;
		}
	}
	return 0;
}

int func_63(int iParam0)//Position - 0x46B7
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 3, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 2, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 1, 40000))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_64()//Position - 0x471C
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar1 = -1;
	fVar2 = 999999f;
	iVar0 = 0;
	while (iVar0 < Local_108)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Local_108[iVar0 /*18*/]) && !PED::IS_PED_INJURED(Local_108[iVar0 /*18*/])) && !PED::IS_PED_INJURED(iLocal_66))
		{
			if (SYSTEM::VDIST2(Local_52, Local_108[iVar0 /*18*/].f_6) < fVar2)
			{
				fVar2 = SYSTEM::VDIST2(Local_52, Local_108[iVar0 /*18*/].f_6);
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 != -1)
	{
		return Local_108[iVar1 /*18*/];
	}
	return 0;
}

int func_65()//Position - 0x47AA
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_69, 0))
	{
		if (!PED::IS_PED_INJURED(iLocal_66))
		{
			if (PED::IS_PED_IN_VEHICLE(iLocal_66, iLocal_69, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_69, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_66()//Position - 0x47E7
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_108)
	{
		if (func_67(Local_108[iVar0 /*18*/], 0, 0))
		{
			return 1;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_108[iVar0 /*18*/]))
		{
			if (PED::IS_PED_INJURED(Local_108[iVar0 /*18*/]) || ENTITY::IS_ENTITY_DEAD(Local_108[iVar0 /*18*/]))
			{
				if (iLocal_137[iVar0] > 50)
				{
					iLocal_109++;
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_67(int iParam0, int iParam1, bool bParam2)//Position - 0x4858
{
	struct<3> Var0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 7))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, 1);
		}
		if (!bParam2)
		{
			if (MISC::IS_BULLET_IN_AREA(Var0, 5f, 1))
			{
				return 1;
			}
		}
		if (SYSTEM::VDIST2(Var0, Local_51) < 400f)
		{
			if (!bParam2)
			{
				if ((WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6) && !WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(PLAYER::PLAYER_PED_ID())) && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
				{
					return 1;
				}
			}
			if ((iVar1 == joaat("weapon_petrolcan") && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID())) && SYSTEM::VDIST2(Local_51, Var0) < 9f)
			{
				return 1;
			}
			if (((PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0)) && (func_68(Local_51, iParam0) && SYSTEM::VDIST2(Local_51, ENTITY::GET_ENTITY_COORDS(iParam0, 1)) < 100f)) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				return 1;
			}
			if (iLocal_136 > 150)
			{
				return 1;
			}
		}
		if (GRAPHICS::GET_IS_PETROL_DECAL_IN_RANGE(PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f), 6f))
		{
			return 1;
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iParam0) && iParam1)
	{
		return 1;
	}
	return 0;
}

int func_68(struct<3> Param0, int iParam1)//Position - 0x49B1
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
	Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam1, 0f, 1f, 0f) - Var0 };
	Var2 = { Param0 - Var0 };
	fVar3 = func_69(Var1, Var2);
	if (fVar3 > 0.5f)
	{
		return 1;
	}
	return 0;
}

float func_69(struct<3> Param0, struct<3> Param1)//Position - 0x4A01
{
	return (((Param0.x * Param1.x) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

void func_70()//Position - 0x4A22
{
	if (iLocal_44 != 11)
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_122))
		{
			HUD::REMOVE_BLIP(&uLocal_122);
		}
		if (HUD::DOES_BLIP_EXIST(uLocal_123))
		{
			HUD::REMOVE_BLIP(&uLocal_123);
		}
		if (HUD::DOES_BLIP_EXIST(uLocal_120))
		{
			HUD::REMOVE_BLIP(&uLocal_120);
		}
		iLocal_45 = iLocal_44;
		iLocal_44 = 11;
	}
	else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 3)
		{
			if (!func_73())
			{
				func_71("REPAP_COP1");
			}
		}
		else
		{
			func_171(5);
		}
	}
	else if (func_5(&Local_138, cLocal_132, "REPAP_COP2", 4, 0, 0, 0))
	{
		iLocal_44 = iLocal_45;
	}
}

void func_71(char* sParam0)//Position - 0x4ABB
{
	if ((MISC::GET_GAME_TIMER() - iLocal_196) > 5000)
	{
		if (!func_72())
		{
			if (func_5(&Local_138, cLocal_132, sParam0, 4, 0, 0, 0))
			{
				iLocal_196 = MISC::GET_GAME_TIMER();
			}
		}
	}
}

int func_72()//Position - 0x4AF3
{
	if (Global_3D4C != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

bool func_73()//Position - 0x4B15
{
	if (!PED::IS_PED_INJURED(iLocal_66) && SYSTEM::VDIST2(Local_51, Local_52) < 400f)
	{
		if (!iLocal_110 && (MISC::GET_GAME_TIMER() - iLocal_112) > 5000)
		{
			if (iLocal_62 > 10)
			{
				iLocal_110 = 1;
				iLocal_62 = 0;
			}
		}
		if ((!iLocal_115 && !iLocal_110) && (MISC::GET_GAME_TIMER() - iLocal_116) > 4000)
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6) && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				if (iLocal_117 > 2)
				{
					if (!Global_3 && !bLocal_55)
					{
						func_171(5);
					}
				}
				else
				{
					iLocal_115 = 1;
					iLocal_117++;
				}
			}
		}
		if (((!iLocal_113 && !iLocal_110) && !iLocal_115) && (MISC::GET_GAME_TIMER() - iLocal_114) > 15000)
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				iLocal_113 = 1;
			}
		}
		if (iLocal_110)
		{
			if (iLocal_111)
			{
				if (func_5(&Local_138, cLocal_132, "REPAP_HIT", 4, 0, 0, 0))
				{
					iLocal_112 = MISC::GET_GAME_TIMER();
					iLocal_110 = 0;
				}
			}
			else if (func_5(&Local_138, cLocal_132, "REPAP_HUR", 4, 0, 0, 0))
			{
				iLocal_112 = MISC::GET_GAME_TIMER();
				iLocal_110 = 0;
				iLocal_111 = 1;
			}
		}
		if (iLocal_115)
		{
			if (func_5(&Local_138, cLocal_132, "REPAP_SHOOT", 4, 0, 0, 0))
			{
				iLocal_116 = MISC::GET_GAME_TIMER();
				iLocal_115 = 0;
			}
		}
		if (iLocal_113)
		{
			if (func_5(&Local_138, cLocal_132, "REPAP_GUN", 4, 0, 0, 0))
			{
				iLocal_114 = MISC::GET_GAME_TIMER();
				iLocal_113 = 0;
			}
		}
	}
	return ((iLocal_113 || iLocal_115) || iLocal_110);
}

void func_74()//Position - 0x4CC5
{
	if (!PED::IS_PED_INJURED(iLocal_66))
	{
		PED::SET_PED_KEEP_TASK(iLocal_66, 1);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, uLocal_54, 1862763509);
		if (!Global_3 && !bLocal_55)
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_66, 317, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_66, 0);
		}
	}
	func_78(-1, 0);
	func_75();
	AUDIO::UNLOCK_MISSION_NEWS_STORY(62);
	func_267();
}

void func_75()//Position - 0x4D1F
{
	func_76();
}

int func_76()//Position - 0x4D2C
{
	if (func_77(0))
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

bool func_77(bool bParam0)//Position - 0x4D77
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_10B8D, 0);
}

void func_78(int iParam0, int iParam1)//Position - 0x4DA2
{
	if (iParam0 == -1)
	{
		iParam0 = func_96();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_95(iParam0))
	{
		func_94(iParam0, iParam1);
		if (!func_93(51))
		{
			func_89("RE_REWARD", 1, 0, 4000, 10000, func_92(), 0, 138, 0);
			func_88(51);
		}
		if (func_87(iParam0))
		{
			Global_17C49.f_6E20.f_2 = 3;
		}
		if (func_86(iParam0, iParam1) != 322)
		{
			func_80(func_86(iParam0, iParam1), Local_42.x, Local_42.f_1);
		}
		Global_17C3D = iParam1;
		if (Global_17C3B == 0)
		{
			if (((Global_17C3E == 1 || Global_17C3E == 5) || Global_17C3E == 11) || Global_17C3E == 25)
			{
				func_79(2);
			}
			else if ((Global_17C3E == 26 || Global_17C3E == 8) || Global_17C3E == 17)
			{
				func_79(7);
			}
			else
			{
				func_79(1);
			}
		}
	}
}

void func_79(int iParam0)//Position - 0x4EA6
{
	Global_17C3B = iParam0;
}

void func_80(int iParam0, var uParam1, var uParam2)//Position - 0x4EB4
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
		func_84((891 + iParam0), 1, -1, 1);
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
		func_81();
	}
}

void func_81()//Position - 0x4F9C
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
		func_83(13, SYSTEM::FLOOR(Global_17C49.f_2100.f_F0D));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_10A95)
		{
			if (func_82() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_17B3F = 0;
				}
				if (!Global_D5DE)
				{
					func_76();
				}
			}
		}
	}
}

int func_82()//Position - 0x545D
{
	return Global_5F7C;
}

int func_83(int iParam0, int iParam1)//Position - 0x5468
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

int func_84(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x54B9
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
		iParam2 = func_85();
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

int func_85()//Position - 0x5716
{
	return Global_1407E1;
}

int func_86(int iParam0, int iParam1)//Position - 0x5722
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

int func_87(int iParam0)//Position - 0x5A96
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

void func_88(int iParam0)//Position - 0x5AC5
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

void func_89(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x5B07
{
	func_90(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_90(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x5B27
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
		func_91();
	}
}

void func_91()//Position - 0x5CF9
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

int func_92()//Position - 0x5E19
{
	func_20();
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

int func_93(int iParam0)//Position - 0x5E5F
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

void func_94(int iParam0, int iParam1)//Position - 0x5EA2
{
	MISC::SET_BIT(&(Global_17C49.f_6E20.f_8[iParam0]), iParam1);
}

int func_95(int iParam0)//Position - 0x5EBD
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

int func_96()//Position - 0x5F6E
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	uVar1 = func_97(Var0);
	return uVar1;
}

int func_97(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0x5F8B
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

int func_98()//Position - 0x6165
{
	if (Global_6067)
	{
		func_79(4);
		return 1;
	}
	return 0;
}

void func_99()//Position - 0x617D
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_46 != 5)
	{
		iLocal_46 = 5;
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_120))
	{
		HUD::REMOVE_BLIP(&uLocal_120);
	}
	switch (iLocal_129)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_66))
			{
				TASK::TASK_SMART_FLEE_PED(iLocal_66, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
			}
			iVar0 = 0;
			while (iVar0 < Local_108)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_108[iVar0 /*18*/]))
				{
					if (ENTITY::IS_ENTITY_OCCLUDED(Local_108[iVar0 /*18*/]) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_108[iVar0 /*18*/], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > 900f)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_108[iVar0 /*18*/].f_2))
						{
							OBJECT::DELETE_OBJECT(&(Local_108[iVar0 /*18*/].f_2));
						}
						PED::DELETE_PED(&(Local_108[iVar0 /*18*/]));
					}
				}
				if (HUD::DOES_BLIP_EXIST(Local_108[iVar0 /*18*/].f_1))
				{
					HUD::REMOVE_BLIP(&(Local_108[iVar0 /*18*/].f_1));
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < Local_107)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_107[iVar0 /*18*/]))
				{
					if (ENTITY::IS_ENTITY_OCCLUDED(Local_107[iVar0 /*18*/]) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_107[iVar0 /*18*/], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > 900f)
					{
						VEHICLE::DELETE_VEHICLE(&(Local_107[iVar0 /*18*/]));
					}
				}
				if (HUD::DOES_BLIP_EXIST(Local_107[iVar0 /*18*/].f_1))
				{
					HUD::REMOVE_BLIP(&(Local_107[iVar0 /*18*/].f_1));
				}
				iVar0++;
			}
			SYSTEM::SETTIMERA(0);
			iLocal_202 = 0;
			iLocal_129++;
			break;
		
		case 1:
			iVar1 = 0;
			iVar0 = 0;
			while (iVar0 < Local_108)
			{
				if ((ENTITY::DOES_ENTITY_EXIST(Local_108[iVar0 /*18*/]) && !PED::IS_PED_INJURED(Local_108[iVar0 /*18*/])) && !ENTITY::IS_ENTITY_DEAD(Local_108[iVar0 /*18*/]))
				{
					iVar1++;
					func_46(PLAYER::PLAYER_PED_ID(), iVar0);
					if (ENTITY::IS_ENTITY_OCCLUDED(Local_108[iVar0 /*18*/]) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_108[iVar0 /*18*/], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > 2500f)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_108[iVar0 /*18*/].f_2))
						{
							OBJECT::DELETE_OBJECT(&(Local_108[iVar0 /*18*/].f_2));
						}
						PED::DELETE_PED(&(Local_108[iVar0 /*18*/]));
					}
				}
				iVar0++;
			}
			if (!iLocal_202)
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(func_64(), 1)) < 100f)
				{
					iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
					if (func_19() == 1)
					{
						func_18(&Local_138, 6);
						func_18(&Local_138, 7);
						func_18(&Local_138, 8);
						switch (iVar2)
						{
							case 0:
								func_17(&Local_138, 6, func_64(), "PAP1ESCAPE", 0, 1);
								if (ENTITY::DOES_ENTITY_EXIST(Local_138[6 /*10*/]) && !PED::IS_PED_INJURED(Local_138[6 /*10*/]))
								{
									if (func_5(&Local_138, cLocal_132, "REPAP_PAP1", 4, 0, 0, 0))
									{
										iLocal_202 = 1;
									}
								}
								break;
							
							case 1:
								func_17(&Local_138, 7, func_64(), "PAP2ESCAPE", 0, 1);
								if (ENTITY::DOES_ENTITY_EXIST(Local_138[7 /*10*/]) && !PED::IS_PED_INJURED(Local_138[7 /*10*/]))
								{
									if (func_5(&Local_138, cLocal_132, "REPAP_PAP2", 4, 0, 0, 0))
									{
										iLocal_202 = 1;
									}
								}
								break;
							
							case 2:
								func_17(&Local_138, 8, func_64(), "PAP3ESCAPE", 0, 1);
								if (ENTITY::DOES_ENTITY_EXIST(Local_138[8 /*10*/]) && !PED::IS_PED_INJURED(Local_138[8 /*10*/]))
								{
									if (func_5(&Local_138, cLocal_132, "REPAP_PAP3", 4, 0, 0, 0))
									{
										iLocal_202 = 1;
									}
								}
								break;
						}
					}
					else if (func_19() == 2)
					{
						func_18(&Local_138, 6);
						func_18(&Local_138, 5);
						iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
						switch (iVar2)
						{
							case 0:
								func_17(&Local_138, 6, func_64(), "PAP1ESCAPE", 0, 1);
								if (ENTITY::DOES_ENTITY_EXIST(Local_138[iVar2 /*10*/]) && !PED::IS_PED_INJURED(Local_138[iVar2 /*10*/]))
								{
									if (func_5(&Local_138, cLocal_132, "REPAP_TAKE1T", 4, 0, 0, 0))
									{
										iLocal_202 = 1;
									}
								}
								break;
							
							case 1:
								func_17(&Local_138, 5, func_64(), "PAP2ESCAPE", 0, 1);
								if (ENTITY::DOES_ENTITY_EXIST(Local_138[iVar2 /*10*/]) && !PED::IS_PED_INJURED(Local_138[iVar2 /*10*/]))
								{
									if (func_5(&Local_138, cLocal_132, "REPAP_TAKE2T", 4, 0, 0, 0))
									{
										iLocal_202 = 1;
									}
								}
								break;
							
							case 2:
								func_17(&Local_138, 5, func_64(), "PAP2ESCAPE", 0, 1);
								if (ENTITY::DOES_ENTITY_EXIST(Local_138[iVar2 /*10*/]) && !PED::IS_PED_INJURED(Local_138[iVar2 /*10*/]))
								{
									if (func_5(&Local_138, cLocal_132, "REPAP_TAKE2T", 4, 0, 0, 0))
									{
										iLocal_202 = 1;
									}
								}
								break;
						}
					}
					else
					{
						func_18(&Local_138, 6);
						func_18(&Local_138, 5);
						iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
						switch (iVar2)
						{
							case 0:
								func_17(&Local_138, 6, func_64(), "PAP1ESCAPE", 0, 1);
								if (ENTITY::DOES_ENTITY_EXIST(Local_138[iVar2 /*10*/]) && !PED::IS_PED_INJURED(Local_138[iVar2 /*10*/]))
								{
									if (func_5(&Local_138, cLocal_132, "REPAP_TAKE1M", 4, 0, 0, 0))
									{
										iLocal_202 = 1;
									}
								}
								break;
							
							case 1:
								func_17(&Local_138, 5, func_64(), "PAP2ESCAPE", 0, 1);
								if (ENTITY::DOES_ENTITY_EXIST(Local_138[iVar2 /*10*/]) && !PED::IS_PED_INJURED(Local_138[iVar2 /*10*/]))
								{
									if (func_5(&Local_138, cLocal_132, "REPAP_TAKE2M", 4, 0, 0, 0))
									{
										iLocal_202 = 1;
									}
								}
								break;
							
							case 2:
								func_17(&Local_138, 5, func_64(), "PAP2ESCAPE", 0, 1);
								if (ENTITY::DOES_ENTITY_EXIST(Local_138[iVar2 /*10*/]) && !PED::IS_PED_INJURED(Local_138[iVar2 /*10*/]))
								{
									if (func_5(&Local_138, cLocal_132, "REPAP_TAKE2M", 4, 0, 0, 0))
									{
										iLocal_202 = 1;
									}
								}
								break;
							}
						}
					}
			}
			if (func_66())
			{
				func_183();
				func_267();
			}
			if (iVar1 == 0)
			{
				func_267();
			}
			break;
	}
}

void func_100(char* sParam0)//Position - 0x6736
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	
	if (iLocal_46 != 5)
	{
		iLocal_46 = 5;
	}
	if (!iLocal_201)
	{
		iVar0 = 0;
		while (iVar0 < Local_108)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_108[iVar0 /*18*/]) && !PED::IS_PED_INJURED(Local_108[iVar0 /*18*/]))
			{
				TASK::CLEAR_PED_TASKS(Local_108[iVar0 /*18*/]);
				Local_108[iVar0 /*18*/].f_10 = 2;
			}
			iVar0++;
		}
		iLocal_201 = 1;
	}
	iVar0 = 0;
	while (iVar0 < Local_108)
	{
		if (HUD::DOES_BLIP_EXIST(Local_108[iVar0 /*18*/].f_1))
		{
			HUD::REMOVE_BLIP(&(Local_108[iVar0 /*18*/].f_1));
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_108[iVar0 /*18*/]))
		{
			if (!PED::IS_PED_INJURED(Local_108[iVar0 /*18*/]))
			{
				iVar1++;
				if (!PED::IS_PED_INJURED(iLocal_66))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(Local_108[iVar0 /*18*/], 0))
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(Local_108[iVar0 /*18*/], 0, 0);
					}
					else
					{
						func_46(iLocal_66, iVar0);
					}
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(Local_108[iVar0 /*18*/], -1146898486) != 1)
				{
					TASK::TASK_WANDER_STANDARD(Local_108[iVar0 /*18*/], 1193033728, 0);
				}
			}
			if ((ENTITY::IS_ENTITY_OCCLUDED(Local_108[iVar0 /*18*/]) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_108[iVar0 /*18*/], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > 400f) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_108[iVar0 /*18*/], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > 400f)
			{
				PED::DELETE_PED(&(Local_108[iVar0 /*18*/]));
				if (ENTITY::DOES_ENTITY_EXIST(Local_108[iVar0 /*18*/].f_2))
				{
					OBJECT::DELETE_OBJECT(&(Local_108[iVar0 /*18*/].f_2));
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_107)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_107[iVar0 /*18*/]))
		{
			if ((ENTITY::IS_ENTITY_OCCLUDED(Local_107[iVar0 /*18*/]) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_107[iVar0 /*18*/], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > 2500f) && func_52(Local_107[iVar0 /*18*/], 0, 0, 0))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_107[iVar0 /*18*/]));
			}
		}
		if (HUD::DOES_BLIP_EXIST(Local_107[iVar0 /*18*/].f_1))
		{
			HUD::REMOVE_BLIP(&(Local_107[iVar0 /*18*/].f_1));
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_66))
	{
		if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_66) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_52) > 2500f)
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_66);
			func_267();
		}
	}
	if (func_66() || func_67(iLocal_66, 1, 1))
	{
		func_171(5);
	}
	iVar0 = 0;
	while (iVar0 < Local_108)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_108[iVar0 /*18*/]))
		{
			if (!PED::IS_PED_INJURED(Local_108[iVar0 /*18*/]))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	switch (iLocal_129)
	{
		case 0:
			if (HUD::DOES_BLIP_EXIST(uLocal_120))
			{
				HUD::REMOVE_BLIP(&uLocal_120);
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_121))
			{
				HUD::REMOVE_BLIP(&uLocal_121);
			}
			if (!PED::IS_PED_INJURED(iLocal_66))
			{
				TASK::CLEAR_PED_TASKS(iLocal_66);
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_66, 3f);
			}
			func_101();
			if (SYSTEM::VDIST(Local_51, Local_52) < 30f)
			{
				if (func_5(&Local_138, cLocal_132, sParam0, 4, 0, 0, 0))
				{
					iVar0 = 0;
					while (iVar0 < Local_108)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_108[iVar0 /*18*/]))
						{
							if (!PED::IS_PED_INJURED(Local_108[iVar0 /*18*/]))
							{
								TASK::CLEAR_PED_TASKS(Local_108[iVar0 /*18*/]);
							}
						}
						iVar0++;
					}
					iLocal_129++;
				}
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < Local_108)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_108[iVar0 /*18*/]))
					{
						if (!PED::IS_PED_INJURED(Local_108[iVar0 /*18*/]))
						{
							TASK::CLEAR_PED_TASKS(Local_108[iVar0 /*18*/]);
						}
					}
					iVar0++;
				}
				iLocal_129++;
			}
			break;
		
		case 1:
			if (((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_69, 0) && PED::IS_PED_IN_VEHICLE(iLocal_66, iLocal_69, 0)) && !bLocal_128) && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_69, -1))
			{
				if (SYSTEM::VDIST(Local_52, Local_48) < 100f)
				{
					TASK::OPEN_SEQUENCE_TASK(&uVar2);
					TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(0, iLocal_69);
					TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_69, Local_48, 20f, 0, joaat("serrano"), 786599, 10f, 10f);
					TASK::TASK_VEHICLE_PARK(0, iLocal_69, Local_48, 288.7089f, 1, 50f, 0);
					TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, iLocal_69, ENTITY::GET_ENTITY_COORDS(iLocal_69, 1), 5, 10f, 262144, 2f, 2f, 1);
					TASK::TASK_LEAVE_VEHICLE(0, iLocal_69, 0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_49, 1f, -1, 0.25f, 512, fLocal_50);
					TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING", 0, 1);
					TASK::CLOSE_SEQUENCE_TASK(uVar2);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_66, uVar2);
					TASK::CLEAR_SEQUENCE_TASK(&uVar2);
				}
				else
				{
					TASK::OPEN_SEQUENCE_TASK(&uVar3);
					TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(0, iLocal_69);
					TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_69, 15f, 786468);
					TASK::CLOSE_SEQUENCE_TASK(uVar3);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_66, uVar3);
					TASK::CLEAR_SEQUENCE_TASK(&uVar3);
				}
				iLocal_129 = 1000;
			}
			else
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_66, 0))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_66, 0, 0);
				}
				iLocal_129++;
			}
			break;
		
		case 2:
			if (iVar1 > 0)
			{
				TASK::TASK_SMART_FLEE_PED(iLocal_66, PLAYER::PLAYER_PED_ID(), 3000f, -1, 1, 0);
				iLocal_129 = 1000;
			}
			else
			{
				if (SYSTEM::VDIST(Local_52, Local_48) < 100f)
				{
					TASK::OPEN_SEQUENCE_TASK(&uVar4);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_49, 1f, -1, 0.25f, 512, fLocal_50);
					TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING", 0, 1);
					TASK::CLOSE_SEQUENCE_TASK(uVar4);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_66, uVar4);
					TASK::CLEAR_SEQUENCE_TASK(&uVar4);
				}
				else
				{
					TASK::TASK_WANDER_STANDARD(iLocal_66, 1193033728, 0);
				}
				iLocal_129 = 1000;
			}
			break;
		
		case 1000:
			if (iVar1 == 0)
			{
				func_267();
			}
			break;
	}
}

void func_101()//Position - 0x6C99
{
	Global_38DE = 0;
	func_102();
}

void func_102()//Position - 0x6CA9
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_413F = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_3D4C = 6;
	}
}

void func_103()//Position - 0x6CCA
{
	func_101();
	if (!PED::IS_PED_INJURED(iLocal_66) && SYSTEM::VDIST2(Local_51, Local_52) < 900f)
	{
		TASK::CLEAR_PED_TASKS(iLocal_66);
		if (func_5(&Local_138, cLocal_132, "REPAP_CRZY", 4, 0, 0, 0))
		{
			func_183();
			func_171(10);
		}
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_66, -2065892691);
	}
	else
	{
		func_183();
		func_171(10);
	}
}

void func_104()//Position - 0x6D34
{
	var uVar0;
	
	switch (iLocal_129)
	{
		case 0:
			func_132();
			if (!PED::IS_PED_INJURED(iLocal_66))
			{
				if (!HUD::DOES_BLIP_EXIST(uLocal_120))
				{
					uLocal_120 = func_173(iLocal_66, 0, 145);
				}
				if (HUD::DOES_BLIP_EXIST(uLocal_123))
				{
					HUD::REMOVE_BLIP(&uLocal_123);
				}
				if (HUD::DOES_BLIP_EXIST(uLocal_122))
				{
					HUD::REMOVE_BLIP(&uLocal_122);
				}
				TASK::CLEAR_PED_TASKS(iLocal_66);
				TASK::OPEN_SEQUENCE_TASK(&uVar0);
				TASK::TASK_LEAVE_VEHICLE(0, iLocal_69, 0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_49, 1f, 30000, 0.25f, 512, fLocal_50);
				TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING", 0, 1);
				TASK::CLOSE_SEQUENCE_TASK(uVar0);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_66, uVar0);
				TASK::CLEAR_SEQUENCE_TASK(&uVar0);
				if (PED::IS_PED_IN_GROUP(iLocal_66))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_66);
				}
				func_101();
				iLocal_129++;
			}
			break;
		
		case 1:
			if (!func_72() && !PED::IS_PED_INJURED(iLocal_66))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iLocal_66, Local_49, 3f, 3f, 3f, 0, 1, 0) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_49, 5f, 5f, 5f, 0, 1, 0))
				{
					iLocal_129++;
				}
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(iLocal_66))
			{
				func_131(0);
				if (func_5(&Local_138, cLocal_132, "REPAP_THK", 4, 0, 0, 0))
				{
					func_106(func_19(), 1, 150, 0, 1);
					iLocal_129++;
				}
			}
			break;
		
		case 3:
			if (!func_72() && !PED::IS_PED_INJURED(iLocal_66))
			{
				SYSTEM::SETTIMERA(0);
				iLocal_129++;
			}
			break;
		
		case 4:
			if (SYSTEM::TIMERA() > 2000)
			{
				if (func_105())
				{
					func_74();
				}
			}
			break;
	}
}

int func_105()//Position - 0x6ED2
{
	return 1;
}

void func_106(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x6EDB
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
	func_107(Global_17C49.f_744E[iParam0 /*29*/].f_11, 1, iParam1, iParam2, 0);
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

int func_107(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x6FC2
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_130();
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
					func_129(99, 1);
					func_128(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_128(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_128(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_115(0);
			switch (iParam2)
			{
				case 125:
				case 127:
				case 123:
				case 124:
				case 126:
					if (func_114(5))
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
							func_128(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_128(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_128(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_114(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_128(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_128(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_128(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_128(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_128(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_128(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_128(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_128(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_128(joaat("sp2_money_spent_property"), iParam3);
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
									func_128(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_128(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_128(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_128(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_128(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_128(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_114(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_128(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_128(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_128(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_128(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_128(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_128(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_113(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_129(95, iParam3);
					break;
				
				case 1:
					func_129(97, iParam3);
					break;
				
				case 2:
					func_129(96, iParam3);
					break;
			}
			func_129(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_110(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_110(iVar1);
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
					func_128(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_128(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_128(joaat("sp2_total_cash_earned"), iParam3);
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
	func_109(iParam0);
	if (Global_8861 == 15)
	{
		func_108(0);
	}
	return 1;
}

void func_108(bool bParam0)//Position - 0x75C1
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

void func_109(int iParam0)//Position - 0x7843
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

void func_110(int iParam0)//Position - 0x789D
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
	else if (MISC::IS_BIT_SET(Global_17C49.f_5CED.f_1D7, iParam0) || MISC::IS_BIT_SET(Global_200000[func_112() /*8053*/].f_167C.f_A, iParam0))
	{
		bVar0 = true;
		MISC::CLEAR_BIT(&(Global_17C49.f_5CED.f_1D7), iParam0);
		MISC::CLEAR_BIT(&(Global_200000[func_112() /*8053*/].f_167C.f_A), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_111(iParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_111(int iParam0)//Position - 0x795E
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

int func_112()//Position - 0x79D7
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_113(int iParam0)//Position - 0x79E4
{
	func_129(93, iParam0);
	func_129(29, iParam0);
	func_129(30, iParam0);
}

bool func_114(int iParam0)//Position - 0x7A04
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return MISC::IS_BIT_SET(Global_17C49.f_5CED.f_1D7, iParam0);
	}
	return MISC::IS_BIT_SET(Global_200000[func_112() /*8053*/].f_167C.f_A, iParam0);
}

int func_115(bool bParam0)//Position - 0x7A40
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
		func_83(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_116(27, 1);
	return 1;
}

int func_116(int iParam0, int iParam1)//Position - 0x7AF7
{
	if (iParam0 >= 61)
	{
		return 0;
	}
	return func_117(iParam0, iParam1);
}

int func_117(int iParam0, int iParam1)//Position - 0x7B12
{
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_6072 != 0 && !Global_10A95)
	{
		return 0;
	}
	if (func_127(&Global_26D4DB))
	{
		if (func_125(&Global_26D4DB, iParam0))
		{
			return 0;
		}
		if (func_118(&Global_26D4DB, iParam0))
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

int func_118(var uParam0, int iParam1)//Position - 0x7B96
{
	int iVar0;
	var uVar1[61];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_125(uParam0, iParam1))
	{
		return 0;
	}
	func_121(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_119(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_119(var uParam0, int iParam1)//Position - 0x7C1C
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_125(uParam0, iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_120(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_120(var uParam0, int iParam1)//Position - 0x7C6C
{
	return (*uParam0)[iParam1] == 61;
}

void func_121(var uParam0)//Position - 0x7C7D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_124(uParam0, iVar0);
		iVar0++;
	}
	func_122(&(uParam0->f_3E), (8f - 0.5f));
}

void func_122(var uParam0, float fParam1)//Position - 0x7CB4
{
	uParam0->f_1 = (func_123(MISC::IS_BIT_SET(*uParam0, 4)) - fParam1);
	MISC::SET_BIT(uParam0, 1);
	MISC::CLEAR_BIT(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_123(bool bParam0)//Position - 0x7CE2
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

void func_124(var uParam0, int iParam1)//Position - 0x7D2A
{
	(*uParam0)[iParam1] = 61;
}

bool func_125(var uParam0, int iParam1)//Position - 0x7D3A
{
	return func_126(uParam0, iParam1) != -1;
}

int func_126(var uParam0, int iParam1)//Position - 0x7D4C
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

bool func_127(var uParam0)//Position - 0x7D79
{
	return uParam0->f_44 == 1;
}

void func_128(int iParam0, int iParam1)//Position - 0x7D87
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, 1);
}

void func_129(int iParam0, int iParam1)//Position - 0x7DAA
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

void func_130()//Position - 0x7E07
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

void func_131(bool bParam0)//Position - 0x7E7C
{
	if (!PED::IS_PED_INJURED(iLocal_66))
	{
		if (iLocal_169 > 1)
		{
			if (!PED::IS_PED_FACING_PED(iLocal_66, PLAYER::PLAYER_PED_ID(), 60f))
			{
				iLocal_169 = 0;
				iLocal_170 = 0;
			}
		}
		switch (iLocal_169)
		{
			case 0:
				TASK::CLEAR_PED_TASKS(iLocal_66);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_66, PLAYER::PLAYER_PED_ID(), -1, 16, 2);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_168);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 16, 2);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_168);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_66, uLocal_168);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_168);
				iLocal_169++;
				break;
			
			case 1:
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_66, 242628503) != 1)
				{
					iLocal_169++;
				}
				break;
			
			case 2:
				if (bParam0)
				{
					switch (iLocal_170)
					{
						case 0:
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_66, "random@paparazzi@wait", "wait_a", 3))
							{
								TASK::TASK_PLAY_ANIM(iLocal_66, "random@paparazzi@wait", "wait_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
							}
							else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_66, "random@paparazzi@wait", "wait_a") > 0.95f)
							{
								TASK::TASK_PLAY_ANIM(iLocal_66, "random@paparazzi@wait", "wait_b", 4f, -4f, -1, 0, 0, 0, 0, 0);
								iLocal_170++;
							}
							break;
						
						case 1:
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_66, "random@paparazzi@wait", "wait_b", 3))
							{
								TASK::TASK_PLAY_ANIM(iLocal_66, "random@paparazzi@wait", "wait_b", 4f, -4f, -1, 0, 0, 0, 0, 0);
							}
							else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_66, "random@paparazzi@wait", "wait_b") > 0.95f)
							{
								TASK::TASK_PLAY_ANIM(iLocal_66, "random@paparazzi@wait", "wait_c", 4f, -4f, -1, 0, 0, 0, 0, 0);
								iLocal_170++;
							}
							break;
						
						case 2:
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_66, "random@paparazzi@wait", "wait_c", 3))
							{
								TASK::TASK_PLAY_ANIM(iLocal_66, "random@paparazzi@wait", "wait_c", 4f, -4f, -1, 0, 0, 0, 0, 0);
							}
							else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_66, "random@paparazzi@wait", "wait_c") > 0.95f)
							{
								TASK::TASK_PLAY_ANIM(iLocal_66, "random@paparazzi@wait", "wait_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
								iLocal_170 = 0;
							}
							break;
						}
				}
				break;
			}
	}
}

void func_132()//Position - 0x809C
{
	if (HUD::DOES_BLIP_EXIST(uLocal_124))
	{
		HUD::REMOVE_BLIP(&uLocal_124);
	}
}

void func_133()//Position - 0x80B5
{
	var uVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_69, 0))
	{
		switch (iLocal_129)
		{
			case 0:
				if (!PED::IS_PED_INJURED(iLocal_66) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_69, 0))
				{
					func_132();
					func_137(1, 1, 0, 0);
					if (HUD::DOES_BLIP_EXIST(uLocal_122))
					{
						HUD::REMOVE_BLIP(&uLocal_122);
					}
					if (HUD::DOES_BLIP_EXIST(uLocal_120))
					{
						HUD::REMOVE_BLIP(&uLocal_120);
					}
					if (HUD::DOES_BLIP_EXIST(uLocal_121))
					{
						HUD::REMOVE_BLIP(&uLocal_121);
					}
					if (PED::IS_PED_IN_GROUP(iLocal_66))
					{
						PED::REMOVE_PED_FROM_GROUP(iLocal_66);
					}
					func_135();
					if (!PED::IS_PED_INJURED(iLocal_66))
					{
						TASK::TASK_LOOK_AT_COORD(iLocal_66, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_69, -10f, 5f, 0f), -1, 16, 4);
					}
					TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_69, 10f, 5f, 0f), 15000, 16, 4);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 1280);
					if ((bLocal_128 || Global_3) || bLocal_55)
					{
						while (!func_134(&Local_138, cLocal_132, "REPAP_THK", "REPAP_THK_1", 4, 0, 0))
						{
							SYSTEM::WAIT(0);
						}
					}
					else
					{
						while (!func_5(&Local_138, cLocal_132, "REPAP_THK", 4, 0, 0, 0))
						{
							SYSTEM::WAIT(0);
						}
					}
					func_106(func_19(), 1, 750, 0, 1);
					if (!PED::IS_PED_INJURED(iLocal_66))
					{
						TASK::TASK_LOOK_AT_COORD(iLocal_66, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_69, -10f, 5f, 0f), -1, 16, 4);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_66, 0, 0);
					}
					TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_69, 10f, 5f, 0f), 15000, 16, 4);
					iLocal_129++;
				}
				break;
			
			case 1:
				if (!func_72() && !PED::IS_PED_INJURED(iLocal_66))
				{
					TASK::OPEN_SEQUENCE_TASK(&uVar0);
					TASK::TASK_LEAVE_VEHICLE(0, iLocal_69, 0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_49, 1f, 30000, 0.25f, 512, fLocal_50);
					TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING", 0, 1);
					TASK::CLOSE_SEQUENCE_TASK(uVar0);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_66, uVar0);
					TASK::CLEAR_SEQUENCE_TASK(&uVar0);
					iLocal_129++;
					SYSTEM::SETTIMERA(0);
				}
				break;
			
			case 2:
				if (!PED::IS_PED_INJURED(iLocal_66) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_69, 0))
				{
					if (!PED::IS_PED_IN_VEHICLE(iLocal_66, iLocal_69, 0))
					{
						SYSTEM::SETTIMERA(0);
						if (bLocal_128)
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
							func_137(0, 1, 0, 0);
							iLocal_129 = 5;
						}
						else
						{
							iLocal_129++;
						}
					}
				}
				break;
			
			case 3:
				if ((!PED::IS_PED_INJURED(iLocal_66) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_69, 0)) && SYSTEM::TIMERA() > 1000)
				{
					TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_69, 0);
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_69, 10000, 0, 3);
					iLocal_129++;
				}
				break;
			
			case 4:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_69, 0) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_69, 0))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
					func_137(0, 1, 0, 0);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_69, 2);
					SYSTEM::SETTIMERA(0);
					iLocal_129++;
				}
				break;
			
			case 5:
				if (SYSTEM::TIMERA() > 1000)
				{
					if (func_105())
					{
						if (!bLocal_128)
						{
							if (!func_93(19))
							{
								func_89("AM_H_CALLTX", 1, 0, -1, 10000, 7, 0, 0, 0);
								func_88(19);
							}
						}
						func_74();
					}
				}
				break;
			}
	}
}

bool func_134(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x83E0
{
	func_16(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_6(sParam2, iParam4, 0);
}

void func_135()//Position - 0x8434
{
	Global_38DE = 0;
	func_136();
}

void func_136()//Position - 0x8444
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

void func_137(bool bParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x8468
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID());
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
		func_143(1);
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
		func_142(1, iParam3, iParam2);
		Global_D5E4 = 1;
		Global_105F5 = 1;
		Global_10A93 = 1;
	}
	else
	{
		func_143(0);
		HUD::THEFEED_RESUME();
		Global_D5E4 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
		func_142(0, iParam3, iParam2);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_138(PLAYER::PLAYER_ID()))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
		}
		Global_10A93 = 0;
	}
}

int func_138(int iParam0)//Position - 0x8539
{
	if (func_140(iParam0, 0))
	{
		return 1;
	}
	if (func_139())
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

bool func_139()//Position - 0x857A
{
	return MISC::IS_BIT_SET(Global_240005, 3);
}

bool func_140(int iParam0, int iParam1)//Position - 0x858B
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_141(-1, 0) == 8;
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

int func_141(int iParam0, bool bParam1)//Position - 0x85D6
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_85();
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

int func_142(int iParam0, var uParam1, var uParam2)//Position - 0x8617
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

void func_143(int iParam0)//Position - 0x8648
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

void func_144()//Position - 0x866B
{
	if (Global_3 || bLocal_55)
	{
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.7f);
	}
	if (bLocal_128 && !PED::IS_PED_INJURED(iLocal_66))
	{
		if (!func_164(iLocal_66))
		{
			if (!HUD::DOES_BLIP_EXIST(uLocal_120))
			{
				uLocal_120 = func_173(iLocal_66, 0, 145);
			}
		}
		else
		{
			if (func_65())
			{
				if (!HUD::DOES_BLIP_EXIST(uLocal_122))
				{
					uLocal_122 = func_50(Local_48, 1);
				}
				if (HUD::DOES_BLIP_EXIST(uLocal_123))
				{
					HUD::REMOVE_BLIP(&uLocal_123);
				}
			}
			else
			{
				if (!HUD::DOES_BLIP_EXIST(uLocal_123))
				{
					uLocal_123 = func_50(Local_49, 1);
				}
				if (HUD::DOES_BLIP_EXIST(uLocal_122))
				{
					HUD::REMOVE_BLIP(&uLocal_122);
				}
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_120))
			{
				HUD::REMOVE_BLIP(&uLocal_120);
			}
		}
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_69, 0))
		{
			if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0)) && func_163(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
			{
				iLocal_69 = 0;
				iLocal_69 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_69, 1, 1);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_69, 1);
				VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_69, 0, 0);
			}
		}
		if (HUD::DOES_BLIP_EXIST(uLocal_123) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_66, 0))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_49, 15f, 15f, 15f, 0, 1, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 231.7982f, 672.7683f, 189.2f, 1f, 1f, 2.5f, 1, 1, 0))
			{
				func_171(4);
			}
		}
		else if (iLocal_129 != 100)
		{
			if (func_65() && func_162(1, 1, 1))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_69, 225.5938f, 681.1489f, 188.4262f, 232.02f, 681.3113f, 191.9843f, 8.75f, 0, 1, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 226.6788f, 681.0637f, 189f, 1f, 1f, 2.5f, 1, 1, 0))
				{
					SYSTEM::SETTIMERA(0);
					iLocal_129 = 100;
				}
			}
			else if (!PED::IS_PED_IN_VEHICLE(iLocal_66, iLocal_69, 0))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_66, -1794415470) != 1)
				{
					TASK::TASK_ENTER_VEHICLE(iLocal_66, iLocal_69, -1, func_161(iLocal_69), 2f, 8388608, 0);
				}
			}
		}
	}
	else
	{
		if (iLocal_129 != 100)
		{
			if (func_65() && func_162(1, 1, 1))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_69, 225.5938f, 681.1489f, 188.4262f, 232.02f, 681.3113f, 191.9843f, 8.75f, 0, 1, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 226.6788f, 681.0637f, 189f, 1f, 1f, 2.5f, 1, 1, 0))
				{
					SYSTEM::SETTIMERA(0);
					iLocal_129 = 100;
				}
			}
		}
		func_158(1);
	}
	switch (iLocal_129)
	{
		case 0:
			if (func_65())
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_66, "VEH@STD@PS@IDLE_PANIC", "sit", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_66, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 3))
				{
					TASK::CLEAR_PED_TASKS(iLocal_66);
				}
				if (func_5(&Local_138, cLocal_132, "REPAP_HM", 4, 0, 0, 0))
				{
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.5f);
					iLocal_129++;
				}
				if (!func_157())
				{
					func_152();
				}
			}
			break;
		
		case 1:
			if (!func_73())
			{
				if (func_65())
				{
					if (!func_72())
					{
						if (func_19() == 0)
						{
							if (func_5(&Local_138, cLocal_132, "REPAP_LIFTM", 4, 0, 0, 0))
							{
								iLocal_129++;
							}
						}
						else if (func_19() == 1)
						{
							if (func_5(&Local_138, cLocal_132, "REPAP_LIFTF", 4, 0, 0, 0))
							{
								iLocal_129++;
							}
						}
						else if (func_5(&Local_138, cLocal_132, "REPAP_LIFTT", 4, 0, 0, 0))
						{
							iLocal_129++;
						}
					}
				}
			}
			break;
		
		case 2:
			if (!func_73())
			{
				if (func_65())
				{
					if (func_5(&Local_138, cLocal_132, "REPAP_PLEAD", 4, 0, 0, 0))
					{
						SYSTEM::SETTIMERA(0);
						if (Global_3 || bLocal_55)
						{
							iLocal_129 = 99;
						}
						else
						{
							iLocal_129++;
						}
					}
				}
			}
			break;
		
		case 3:
			if (SYSTEM::TIMERA() > 7000)
			{
				if (func_148("REPAP_HOME1", (func_151() && !func_73())))
				{
					iLocal_129++;
				}
			}
			break;
		
		case 4:
			if (func_19() == 0)
			{
				if (func_148("REPAP_HOME1M", (func_151() && !func_73())))
				{
					iLocal_129++;
				}
			}
			else if (func_19() == 1)
			{
				if (func_148("REPAP_HOME1F", (func_151() && !func_73())))
				{
					iLocal_129++;
				}
			}
			else if (func_148("REPAP_HOME1T", (func_151() && !func_73())))
			{
				iLocal_129++;
			}
			break;
		
		case 5:
			if (func_148("REPAP_HOME1L", (func_151() && !func_73())))
			{
				SYSTEM::SETTIMERA(0);
				iLocal_129++;
			}
			break;
		
		case 6:
			if (!func_73())
			{
				if (SYSTEM::TIMERA() > 7000)
				{
					if (func_151())
					{
						if (func_5(&Local_138, cLocal_132, "REPAP_HOME2", 4, 0, 0, 0))
						{
							iLocal_129++;
						}
					}
				}
			}
			break;
		
		case 7:
			if (!func_73())
			{
				if (func_151() && !func_72())
				{
					if (func_147("REPAP_HOME2"))
					{
						iLocal_129++;
					}
				}
			}
			break;
		
		case 8:
			if (func_148("REPAP_HOME2L", (func_151() && !func_73())))
			{
				iLocal_129++;
			}
			break;
		
		case 9:
			if (!func_73())
			{
				if (func_151() && !func_72())
				{
					if (func_147("REPAP_RESP2"))
					{
						SYSTEM::SETTIMERA(0);
						iLocal_129++;
					}
				}
			}
			break;
		
		case 10:
			if (SYSTEM::TIMERA() > 7000)
			{
				if (func_148("REPAP_HOME3", (func_151() && !func_73())))
				{
					iLocal_129++;
				}
			}
			break;
		
		case 11:
			if (!func_73())
			{
				if (func_151() && !func_72())
				{
					if (func_147("REPAP_HOME3"))
					{
						SYSTEM::SETTIMERA(0);
						iLocal_129++;
					}
				}
			}
			break;
		
		case 12:
			if (SYSTEM::TIMERA() > 7000)
			{
				if (func_148("REPAP_HOME4", (func_151() && !func_73())))
				{
					iLocal_129++;
				}
			}
			break;
		
		case 13:
			if (!func_73())
			{
				if (func_151() && !func_72())
				{
					if (func_147("REPAP_HOME4"))
					{
						SYSTEM::SETTIMERA(0);
						iLocal_129++;
					}
				}
			}
			break;
		
		case 14:
			if (SYSTEM::TIMERA() > 7000)
			{
				if (func_148("REPAP_NOBAN", (func_151() && !func_73())))
				{
					iLocal_129++;
				}
			}
			break;
		
		case 15:
			if (!func_73())
			{
				if (func_151() && !func_72())
				{
					if (func_147("REPAP_NOBAN"))
					{
						iLocal_129++;
					}
				}
			}
			break;
		
		case 16:
			if (!func_73())
			{
				if (func_151() && !func_72())
				{
					if (func_5(&Local_138, cLocal_132, "REPAP_NOBANL", 4, 0, 0, 0))
					{
						iLocal_129++;
					}
				}
			}
			break;
		
		case 17:
			func_73();
			break;
		
		case 100:
			if (func_146(iLocal_69, 5f, 5, 1056964608, 0, 1))
			{
				func_172("");
				func_171(3);
			}
			break;
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		func_70();
	}
	if (func_19() == 2)
	{
		if ((func_145() && !func_157()) && iLocal_44 != 8)
		{
			if (!PED::IS_PED_INJURED(iLocal_66))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iLocal_66, -1034.6f, 4918.6f, 205.9f, 5f, 5f, 5f, 0, 1, 0))
				{
					if (!PED::IS_PED_GROUP_MEMBER(iLocal_66, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
					{
						PED::SET_PED_AS_GROUP_MEMBER(iLocal_66, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()));
					}
					func_101();
					iLocal_44 = 8;
				}
			}
		}
	}
}

var func_145()//Position - 0x8E76
{
	return Global_6066;
}

int func_146(int iParam0, int iParam1, int iParam2, float fParam3, int iParam4, bool bParam5)//Position - 0x8E81
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
		VEHICLE::BRING_VEHICLE_TO_HALT(iParam0, iParam1, iParam2, iParam4);
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

int func_147(char* sParam0)//Position - 0x9003
{
	struct<3> Var0;
	
	StringConCat(&Var0, sParam0, 24);
	if (func_19() == 0)
	{
		StringConCat(&Var0, "M", 24);
	}
	else if (func_19() == 1)
	{
		StringConCat(&Var0, "F", 24);
	}
	else
	{
		StringConCat(&Var0, "T", 24);
	}
	if (func_5(&Local_138, cLocal_132, &Var0, 4, 0, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_148(char* sParam0, bool bParam1)//Position - 0x9057
{
	if (bParam1)
	{
		if (!iLocal_57)
		{
			if (func_5(&Local_138, cLocal_132, sParam0, 4, 0, 0, 0))
			{
				iLocal_57 = 1;
				iLocal_58 = 0;
			}
		}
		else if (iLocal_58)
		{
			if (func_150(&Local_138, cLocal_132, sParam0, &Local_60, 4, 0, 0))
			{
				iLocal_58 = 0;
			}
		}
		if ((iLocal_57 && !iLocal_58) && bParam1)
		{
			if (iLocal_61 == -1)
			{
				if (!func_72())
				{
					iLocal_61 = MISC::GET_GAME_TIMER();
				}
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_61) > 500)
			{
				iLocal_61 = -1;
				iLocal_57 = 0;
				iLocal_58 = 0;
				return 1;
			}
		}
	}
	else if (iLocal_57 && !iLocal_58)
	{
		Local_60 = { func_149() };
		func_135();
		iLocal_58 = 1;
	}
	return 0;
}

struct<6> func_149()//Position - 0x9107
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

bool func_150(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x91B3
{
	func_16(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_6(sParam2, iParam4, 0);
}

int func_151()//Position - 0x9207
{
	if (bLocal_128)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_69, 0))
		{
			if (func_65())
			{
				return 1;
			}
		}
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_66, 0))
		{
			if (SYSTEM::VDIST2(Local_51, Local_52) < 400f)
			{
				return 1;
			}
		}
	}
	else
	{
		return func_65();
	}
	return 0;
}

void func_152()//Position - 0x9268
{
	if (func_19() == 2)
	{
		if (!HUD::DOES_BLIP_EXIST(uLocal_124))
		{
			func_155();
			uLocal_124 = func_154(-1034.6f, 4918.6f, 205.9f, 0);
			HUD::SET_BLIP_SPRITE(uLocal_124, 269);
			func_153();
		}
	}
}

void func_153()//Position - 0x92AC
{
	if (!func_157())
	{
		if (func_19() == 2)
		{
			Global_6066 = 1;
		}
	}
}

var func_154(struct<3> Param0, int iParam1)//Position - 0x92C8
{
	return func_50(Param0, iParam1);
}

void func_155()//Position - 0x92DA
{
	if (func_19() == 2)
	{
		if (!Global_6068)
		{
			func_156("CULT_BLIP_HELP", -1);
			Global_6068 = 1;
		}
	}
}

void func_156(char* sParam0, int iParam1)//Position - 0x92FE
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

int func_157()//Position - 0x9315
{
	if (Global_17C49.f_6E20.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

void func_158(bool bParam0)//Position - 0x9331
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_69, 0) && !PED::IS_PED_INJURED(iLocal_66))
	{
		if (func_65())
		{
			if (bParam0)
			{
				if (!HUD::DOES_BLIP_EXIST(uLocal_122))
				{
					uLocal_122 = func_50(Local_48, 1);
				}
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_120))
			{
				HUD::REMOVE_BLIP(&uLocal_120);
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_121))
			{
				HUD::REMOVE_BLIP(&uLocal_121);
			}
		}
		else
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_122))
			{
				HUD::REMOVE_BLIP(&uLocal_122);
			}
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_69, 0))
			{
				if (!HUD::DOES_BLIP_EXIST(uLocal_121))
				{
					uLocal_121 = func_159(iLocal_69, 0, 0);
				}
			}
			if (!PED::IS_PED_IN_VEHICLE(iLocal_66, iLocal_69, 0))
			{
				if (!HUD::DOES_BLIP_EXIST(uLocal_120))
				{
					uLocal_120 = func_173(iLocal_66, 0, 145);
				}
			}
			else if (HUD::DOES_BLIP_EXIST(uLocal_120))
			{
				HUD::REMOVE_BLIP(&uLocal_120);
			}
		}
	}
}

int func_159(int iParam0, bool bParam1, bool bParam2)//Position - 0x9405
{
	return func_160(iParam0, !bParam1, bParam2);
}

int func_160(int iParam0, bool bParam1, bool bParam2)//Position - 0x9418
{
	var uVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		return 0;
	}
	uVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_51(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		HUD::SET_BLIP_SCALE(uVar0, func_51(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_51(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return uVar0;
}

int func_161(int iParam0)//Position - 0x94BC
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		iVar1 = 0;
		while (iVar1 <= (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0) - 1))
		{
			if (iVar0 == -1)
			{
				iVar2 = iVar1;
				if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, iVar2))
				{
					iVar0 = iVar2;
				}
			}
			iVar1++;
		}
	}
	return iVar0;
}

int func_162(bool bParam0, bool bParam1, bool bParam2)//Position - 0x9505
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

int func_163(int iParam0)//Position - 0x95E5
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0))
	{
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1))
		{
			return 1;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 0))
		{
			return 1;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 1))
		{
			return 1;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_164(int iParam0)//Position - 0x9630
{
	if (PED::IS_PED_GROUP_MEMBER(iParam0, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
	{
		if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, 25f, 25f, 25f, 0, 1, 0))
		{
			PED::REMOVE_PED_FROM_GROUP(iParam0);
		}
		return 1;
	}
	else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, Global_12, 0, 1, 0))
	{
		PED::SET_PED_AS_GROUP_MEMBER(iParam0, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()));
	}
	return 0;
}

void func_165()//Position - 0x969A
{
	if (!PED::IS_PED_INJURED(iLocal_66) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_69, 0))
	{
		if (!PED::IS_PED_IN_VEHICLE(iLocal_66, iLocal_69, 1))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_66, -1794415470) != 1)
			{
				TASK::TASK_ENTER_VEHICLE(iLocal_66, iLocal_69, -1, func_161(iLocal_69), 2f, 8388608, 0);
			}
		}
		if ((ENTITY::DOES_ENTITY_EXIST(func_64()) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_66, 1), ENTITY::GET_ENTITY_COORDS(func_64(), 1)) < 100f) && (ENTITY::GET_ENTITY_SPEED(iLocal_69) < 5f || !VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iLocal_69))))
		{
			if (bLocal_128)
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_66, "VEH@STD@PS@IDLE_PANIC", "sit", 3) && PED::IS_PED_SITTING_IN_VEHICLE(iLocal_66, iLocal_69))
				{
					TASK::TASK_PLAY_ANIM(iLocal_66, "VEH@STD@PS@IDLE_PANIC", "sit", 4f, -4f, -1, 48, 0, 0, 0, 0);
				}
			}
			else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_66, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 3) && PED::IS_PED_SITTING_IN_VEHICLE(iLocal_66, iLocal_69))
			{
				TASK::TASK_PLAY_ANIM(iLocal_66, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 4f, -4f, -1, 48, 0, 0, 0, 0);
			}
		}
		else if ((ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_66, "VEH@STD@PS@IDLE_PANIC", "sit", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_66, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 3)) && PED::IS_PED_SITTING_IN_VEHICLE(iLocal_66, iLocal_69))
		{
			TASK::CLEAR_PED_TASKS(iLocal_66);
		}
		switch (iLocal_129)
		{
			case 0:
				if (SYSTEM::TIMERA() > 2000)
				{
					if (ENTITY::DOES_ENTITY_EXIST(func_64()) && !PED::IS_PED_INJURED(func_64()))
					{
						func_18(&Local_138, 4);
						func_17(&Local_138, 4, func_64(), "PAPARAZZO", 0, 1);
					}
					iLocal_46 = 2;
					func_101();
					if (func_5(&Local_138, cLocal_132, "REPAP_GO", 4, 0, 0, 0))
					{
						PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.2f);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_66, 1);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, uLocal_54, 1862763509);
						iLocal_118 = OBJECT::CREATE_OBJECT(joaat("prop_ld_test_01"), Local_67, 1, 1, 0);
						ENTITY::SET_ENTITY_COLLISION(iLocal_118, 0, 0);
						ENTITY::SET_ENTITY_VISIBLE(iLocal_118, 0);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_118, 1);
						iLocal_129++;
					}
				}
				break;
			
			case 1:
				func_167();
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_66, 243.5571f, 77.51265f, 90.08002f, 268.2083f, 144.2189f, 109.853f, 23.25f, 0, 1, 0))
				{
					iLocal_129++;
					iLocal_130 = MISC::GET_GAME_TIMER();
					iLocal_46 = 3;
				}
				break;
			
			case 2:
				if (!bLocal_197)
				{
					if (((((iLocal_199 != 1 && iLocal_199 != 3) && iLocal_199 != 6) && iLocal_199 != 9) && iLocal_199 != 11) && iLocal_199 != 13)
					{
						bLocal_198 = false;
						if (ENTITY::DOES_ENTITY_EXIST(func_64()) && ENTITY::IS_ENTITY_AT_ENTITY(func_64(), iLocal_69, 5f, 5f, 3f, 0, 1, 0))
						{
							bLocal_197 = true;
						}
					}
				}
				else
				{
					if (!func_72())
					{
						bLocal_198 = true;
					}
					if (ENTITY::DOES_ENTITY_EXIST(func_64()))
					{
						if (!ENTITY::IS_ENTITY_AT_ENTITY(func_64(), iLocal_69, 5f, 5f, 3f, 0, 1, 0))
						{
							bLocal_197 = false;
						}
					}
				}
				if (bLocal_198)
				{
					if (!func_73())
					{
						if (!func_166())
						{
							func_167();
						}
					}
				}
				else
				{
					switch (iLocal_199)
					{
						case 0:
							if (((!bLocal_197 && func_151()) && !func_73()) && !func_72())
							{
								if (func_5(&Local_138, cLocal_132, "REPAP_CHT", 4, 0, 0, 0))
								{
									iLocal_199++;
								}
							}
							break;
						
						case 1:
							if (((!bLocal_197 && func_151()) && !func_73()) && !func_72())
							{
								if (func_147("REPAP_RES1"))
								{
									iLocal_200 = MISC::GET_GAME_TIMER();
									iLocal_199++;
								}
							}
							break;
						
						case 2:
							if ((MISC::GET_GAME_TIMER() - iLocal_200) > 8000)
							{
								if (((!bLocal_197 && func_151()) && !func_73()) && !func_72())
								{
									if (func_147("REPAP_CHT2"))
									{
										iLocal_199++;
									}
								}
							}
							break;
						
						case 3:
							if (((!bLocal_197 && func_151()) && !func_73()) && !func_72())
							{
								if (func_5(&Local_138, cLocal_132, "REPAP_RESP2L", 4, 0, 0, 0))
								{
									iLocal_200 = MISC::GET_GAME_TIMER();
									iLocal_199++;
								}
							}
							break;
						
						case 4:
							if ((MISC::GET_GAME_TIMER() - iLocal_200) > 6000)
							{
								if (func_19() == 0)
								{
									if (func_148("REPAP_CHT3M", ((func_151() && !func_73()) && !bLocal_197)))
									{
										iLocal_199++;
									}
								}
								else if (func_19() == 1)
								{
									if (func_148("REPAP_CHT3F", ((func_151() && !func_73()) && !bLocal_197)))
									{
										iLocal_199++;
									}
								}
								else if (func_148("REPAP_CHT3T", ((func_151() && !func_73()) && !bLocal_197)))
								{
									iLocal_199++;
								}
								if (iLocal_199 > 4)
								{
									iLocal_200 = MISC::GET_GAME_TIMER();
								}
							}
							break;
						
						case 5:
							if ((MISC::GET_GAME_TIMER() - iLocal_200) > 8000)
							{
								if (func_19() == 0)
								{
									if (func_148("REPAP_CHT4M", ((func_151() && !func_73()) && !bLocal_197)))
									{
										iLocal_199++;
									}
								}
								else if (func_19() == 1)
								{
									if (func_148("REPAP_CHT4F", ((func_151() && !func_73()) && !bLocal_197)))
									{
										iLocal_199++;
									}
								}
								else if (func_148("REPAP_CHT4T", ((func_151() && !func_73()) && !bLocal_197)))
								{
									iLocal_199++;
								}
								if (iLocal_199 > 5)
								{
									iLocal_200 = MISC::GET_GAME_TIMER();
								}
							}
							break;
						
						case 6:
							if ((MISC::GET_GAME_TIMER() - iLocal_200) > 8000)
							{
								if (func_19() == 0)
								{
									if (func_148("REPAP_CHT5M", ((func_151() && !func_73()) && !bLocal_197)))
									{
										iLocal_199++;
									}
								}
								else if (func_19() == 1)
								{
									if (func_148("REPAP_CHT5F", ((func_151() && !func_73()) && !bLocal_197)))
									{
										iLocal_199++;
									}
								}
								else if (func_148("REPAP_CHT5T", ((func_151() && !func_73()) && !bLocal_197)))
								{
									iLocal_199++;
								}
								if (iLocal_199 > 6)
								{
									iLocal_200 = MISC::GET_GAME_TIMER();
								}
							}
							break;
						
						case 7:
							if ((MISC::GET_GAME_TIMER() - iLocal_200) > 8000)
							{
								if (((!bLocal_197 && func_151()) && !func_73()) && !func_72())
								{
									if (func_147("REPAP_CHT6"))
									{
										iLocal_199++;
									}
								}
							}
							break;
						
						case 8:
							if (((!bLocal_197 && func_151()) && !func_73()) && !func_72())
							{
								if (func_5(&Local_138, cLocal_132, "REPAP_RESP6L", 4, 0, 0, 0))
								{
									iLocal_200 = MISC::GET_GAME_TIMER();
									iLocal_199++;
								}
							}
							break;
						
						case 9:
							if ((MISC::GET_GAME_TIMER() - iLocal_200) > 8000)
							{
								if (((!bLocal_197 && func_151()) && !func_73()) && !func_72())
								{
									if (func_147("REPAP_CHT7"))
									{
										iLocal_199++;
									}
								}
							}
							break;
						
						case 10:
							if (((!bLocal_197 && func_151()) && !func_73()) && !func_72())
							{
								if (func_5(&Local_138, cLocal_132, "REPAP_RESP7L", 4, 0, 0, 0))
								{
									iLocal_200 = MISC::GET_GAME_TIMER();
									iLocal_199++;
								}
							}
							break;
						
						case 11:
							if ((MISC::GET_GAME_TIMER() - iLocal_200) > 8000)
							{
								if (((!bLocal_197 && func_151()) && !func_73()) && !func_72())
								{
									if (func_147("REPAP_CHT8"))
									{
										iLocal_199++;
									}
								}
							}
							break;
						
						case 12:
							if (((!bLocal_197 && func_151()) && !func_73()) && !func_72())
							{
								if (func_5(&Local_138, cLocal_132, "REPAP_RESP8L", 4, 0, 0, 0))
								{
									iLocal_199++;
								}
							}
							break;
						}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(func_64()))
				{
					SYSTEM::SETTIMERA(0);
					iLocal_129++;
					func_135();
					if (!Global_3 && !bLocal_55)
					{
						iLocal_46 = 6;
					}
				}
				if (Global_3 || bLocal_55)
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 244.2175f, 441.0128f, 126.2767f, 33.5f, 40f, 14.75f, 0, 1, 0) && func_65())
					{
						iLocal_46 = 4;
						iLocal_65 = MISC::GET_GAME_TIMER();
					}
				}
				break;
			
			case 3:
				if (SYSTEM::TIMERA() > 3000 && func_65())
				{
					func_172("MAG_2_ESCAPE_PAP_TAKE_ACTRESS_HOME");
					if (func_5(&Local_138, cLocal_132, "REPAP_LOS", 4, 0, 0, 0))
					{
						func_171(2);
					}
				}
				break;
			
			case 4:
				break;
			
			case 5:
				break;
		}
		func_158(0);
	}
}

int func_166()//Position - 0x9FC3
{
	int iVar0;
	
	iVar0 = func_24();
	if ((MISC::GET_GAME_TIMER() - iLocal_195) > 5000)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_69) && PED::IS_PED_IN_VEHICLE(iLocal_66, iLocal_69, 0))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_69, 1))
			{
				if (iVar0 != -1 && (MISC::GET_GAME_TIMER() - Local_108[iVar0 /*18*/].f_C) < 3000)
				{
					if (func_5(&Local_138, cLocal_132, "REPAP_WHINE", 4, 0, 0, 0))
					{
						iLocal_195 = MISC::GET_GAME_TIMER();
						return 1;
					}
				}
			}
			else if (func_5(&Local_138, cLocal_132, "REPAP_EXIT", 4, 0, 0, 0))
			{
				iLocal_195 = MISC::GET_GAME_TIMER();
				return 1;
			}
		}
	}
	return 0;
}

void func_167()//Position - 0xA065
{
	int iVar0;
	
	if ((MISC::GET_GAME_TIMER() - iLocal_144) > iLocal_145)
	{
		if ((!PED::IS_PED_INJURED(iLocal_66) && ENTITY::DOES_ENTITY_EXIST(func_64())) && !PED::IS_PED_INJURED(func_64()))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_52, ENTITY::GET_ENTITY_COORDS(func_64(), 1), 1) < 8f)
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
				func_18(&Local_138, 4);
				func_18(&Local_138, 5);
				func_18(&Local_138, 6);
				func_18(&Local_138, 7);
				switch (iVar0)
				{
					case 0:
						func_17(&Local_138, 4, func_64(), "PAPARAZZO", 0, 1);
						if (ENTITY::DOES_ENTITY_EXIST(Local_138[4 /*10*/]) && !PED::IS_PED_INJURED(Local_138[4 /*10*/]))
						{
							if (func_5(&Local_138, cLocal_132, "REPAP_PP", 4, 0, 0, 0))
							{
								iLocal_144 = MISC::GET_GAME_TIMER();
								iLocal_145 = MISC::GET_RANDOM_INT_IN_RANGE(2000, 3000);
							}
						}
						break;
					
					case 1:
						func_17(&Local_138, 4, func_64(), "PAPARAZZO", 0, 1);
						if (ENTITY::DOES_ENTITY_EXIST(Local_138[4 /*10*/]) && !PED::IS_PED_INJURED(Local_138[4 /*10*/]))
						{
							if (func_5(&Local_138, cLocal_132, "REPAP_CALL1", 4, 0, 0, 0))
							{
								iLocal_144 = MISC::GET_GAME_TIMER();
								iLocal_145 = MISC::GET_RANDOM_INT_IN_RANGE(2000, 3000);
							}
						}
						break;
					
					case 2:
						func_17(&Local_138, 5, func_64(), "PAP2", 0, 1);
						if (ENTITY::DOES_ENTITY_EXIST(Local_138[5 /*10*/]) && !PED::IS_PED_INJURED(Local_138[5 /*10*/]))
						{
							if (func_5(&Local_138, cLocal_132, "REPAP_CALL2", 4, 0, 0, 0))
							{
								iLocal_144 = MISC::GET_GAME_TIMER();
								iLocal_145 = MISC::GET_RANDOM_INT_IN_RANGE(2000, 3000);
							}
						}
						break;
					
					case 3:
						func_17(&Local_138, 6, func_64(), "PAP3", 0, 1);
						if (ENTITY::DOES_ENTITY_EXIST(Local_138[6 /*10*/]) && !PED::IS_PED_INJURED(Local_138[6 /*10*/]))
						{
							if (func_5(&Local_138, cLocal_132, "REPAP_CALL3", 4, 0, 0, 0))
							{
								iLocal_144 = MISC::GET_GAME_TIMER();
								iLocal_145 = MISC::GET_RANDOM_INT_IN_RANGE(2000, 3000);
							}
						}
						break;
					
					case 4:
						func_17(&Local_138, 7, func_64(), "PAP4", 0, 1);
						if (ENTITY::DOES_ENTITY_EXIST(Local_138[7 /*10*/]) && !PED::IS_PED_INJURED(Local_138[7 /*10*/]))
						{
							if (func_5(&Local_138, cLocal_132, "REPAP_CALL4", 4, 0, 0, 0))
							{
								iLocal_144 = MISC::GET_GAME_TIMER();
								iLocal_145 = MISC::GET_RANDOM_INT_IN_RANGE(2000, 3000);
							}
						}
						break;
					}
				}
			}
	}
}

void func_168()//Position - 0xA2CC
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	char cVar3[24];
	char* sVar4;
	char cVar5[24];
	var uVar6;
	
	if (!PED::IS_PED_INJURED(iLocal_66))
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_120))
		{
			HUD::SHOW_HEIGHT_ON_BLIP(uLocal_120, iLocal_193);
		}
		switch (iLocal_129)
		{
			case 0:
				STREAMING::REQUEST_ANIM_DICT("random@paparazzi@peek");
				STREAMING::REQUEST_ANIM_DICT("random@paparazzi@trans");
				STREAMING::REQUEST_ANIM_DICT("random@paparazzi@wait");
				if ((STREAMING::HAS_ANIM_DICT_LOADED("random@paparazzi@peek") && STREAMING::HAS_ANIM_DICT_LOADED("random@paparazzi@trans")) && STREAMING::HAS_ANIM_DICT_LOADED("random@paparazzi@wait"))
				{
					uLocal_173 = PED::CREATE_SYNCHRONIZED_SCENE(Local_186, Local_187, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_66, uLocal_173, "random@paparazzi@peek", "left_peek_a", 1000f, -8f, 1, 0, 1148846080, 0);
					TASK::TASK_LOOK_AT_ENTITY(iLocal_66, PLAYER::PLAYER_PED_ID(), -1, 4, 4);
					sLocal_174[0] = "peek_a";
					sLocal_174[1] = "peek_b";
					sLocal_174[2] = "peek_c";
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.2f);
					iLocal_171 = 0;
					iLocal_188 = 0;
					iLocal_193 = 0;
					iLocal_59 = 1;
					iLocal_189 = 0;
					iLocal_56 = 0;
					fLocal_190 = 0f;
					iLocal_129++;
				}
				break;
			
			case 1:
				if (MISC::IS_BIT_SET(iLocal_189, 0))
				{
					if (!MISC::IS_BIT_SET(iLocal_189, 1))
					{
						MISC::SET_BIT(&iLocal_189, 1);
					}
					else
					{
						iLocal_189 = 0;
					}
				}
				iVar2 = 0;
				bVar0 = ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_180, Local_181, fLocal_182, 0, 1, 0);
				bVar1 = ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_177, Local_178, fLocal_179, 0, 1, 0);
				if (MISC::ARE_STRINGS_EQUAL(sLocal_176, "right_"))
				{
					if (bVar1)
					{
						sLocal_176 = "left_";
						iVar2 = 1;
					}
				}
				else if (bVar0)
				{
					sLocal_176 = "right_";
					iVar2 = 1;
				}
				if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_173) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_173) > 0.9f) || iVar2)
				{
					if (iLocal_189 == 0)
					{
						TASK::CLEAR_PED_TASKS(iLocal_66);
						iLocal_175++;
						if (iLocal_175 >= 3)
						{
							iLocal_175 = 0;
						}
						StringCopy(&cVar3, sLocal_176, 24);
						StringConCat(&cVar3, sLocal_174[iLocal_175], 24);
						uLocal_173 = PED::CREATE_SYNCHRONIZED_SCENE(Local_186, Local_187, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_66, uLocal_173, "random@paparazzi@peek", &cVar3, 4f, -4f, 1, 0, 1148846080, 0);
						MISC::SET_BIT(&iLocal_189, 0);
					}
				}
				if (bVar0 || bVar1)
				{
					if (fLocal_190 <= 20f)
					{
						fLocal_190 = (fLocal_190 + MISC::GET_FRAME_TIME());
					}
					if ((MISC::GET_GAME_TIMER() - iLocal_172) > 5000 && iLocal_189 == 0)
					{
						if (SYSTEM::VDIST2(Local_51, Local_52) < (22.2f * 22.2f))
						{
							if (fLocal_190 < 10f)
							{
								if (iLocal_191)
								{
									sVar4 = "REPAP_SHT1";
								}
								else
								{
									sVar4 = "REPAP_SHT2";
								}
							}
							else
							{
								sVar4 = "REPAP_PRT";
							}
							if (func_19() == 1)
							{
								func_17(&Local_138, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
							}
							else if (func_19() == 0)
							{
								func_17(&Local_138, 1, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
							}
							else
							{
								func_17(&Local_138, 1, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
							}
							if (func_5(&Local_138, cLocal_132, sVar4, 4, 0, 0, 0))
							{
								iLocal_191 = 1;
								if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_66, 7f, 7f, 7f, 0, 1, 0))
								{
									TASK::CLEAR_PED_TASKS(iLocal_66);
									StringCopy(&cVar5, sLocal_176, 24);
									StringConCat(&cVar5, "come_here", 24);
									uLocal_173 = PED::CREATE_SYNCHRONIZED_SCENE(Local_186, Local_187, 2);
									TASK::TASK_SYNCHRONIZED_SCENE(iLocal_66, uLocal_173, "random@paparazzi@peek", &cVar5, 4f, -4f, 1, 0, 1148846080, 0);
									MISC::SET_BIT(&iLocal_189, 0);
								}
								iLocal_172 = MISC::GET_GAME_TIMER();
							}
						}
					}
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_183, Local_184, fLocal_185, 0, 1, 0) && iLocal_189 == 0)
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_119))
					{
						HUD::REMOVE_BLIP(&uLocal_119);
						if (!HUD::DOES_BLIP_EXIST(uLocal_120))
						{
							uLocal_120 = func_173(iLocal_66, 0, 145);
						}
					}
					TASK::CLEAR_PED_TASKS(iLocal_66);
					uLocal_173 = PED::CREATE_SYNCHRONIZED_SCENE(Local_186, Local_187, 2);
					if (bVar1)
					{
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_66, uLocal_173, "random@paparazzi@trans", "trans_left_to_wait", 8f, -4f, 1, 0, 1148846080, 0);
					}
					else
					{
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_66, uLocal_173, "random@paparazzi@trans", "trans_right_to_wait", 8f, -4f, 1, 0, 1148846080, 0);
					}
					MISC::SET_BIT(&iLocal_189, 0);
					iLocal_129++;
				}
				break;
			
			case 2:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_173) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_173) > 0.9f)
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_66, 242628503) != 1)
					{
						TASK::CLEAR_PED_TASKS(iLocal_66);
						TASK::TASK_PLAY_ANIM(iLocal_66, "random@paparazzi@wait", "wait_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
						iLocal_169 = 2;
						SYSTEM::SETTIMERA(0);
					}
					iLocal_129++;
				}
				break;
			
			case 3:
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (func_170())
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_69);
						iLocal_69 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_69, 1, 1);
						VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_69, 0, 0);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_69, 1);
						bLocal_128 = true;
					}
				}
				if (!bLocal_128)
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_69, 1);
					if (func_134(&Local_138, cLocal_132, "REPAP_EXP", "REPAP_EXP_2", 4, 0, 0))
					{
						SYSTEM::SETTIMERA(0);
						iLocal_193 = 1;
						iLocal_129 = 100;
					}
				}
				else if (func_134(&Local_138, cLocal_132, "REPAP_EXPB", "REPAP_EXPB_2", 4, 0, 0))
				{
					SYSTEM::SETTIMERA(0);
					iLocal_193 = 1;
					iLocal_129++;
				}
				if (SYSTEM::TIMERA() > 2000)
				{
					func_169(Local_67, 1);
				}
				break;
			
			case 4:
				func_49();
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_69, 0))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_69, iLocal_66, Global_12 + Vector(2f, 12f, 12f), 0, 1, 0) && !bLocal_128)
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_66, 242628503) != 1 && !iLocal_188)
						{
							TASK::OPEN_SEQUENCE_TASK(&uVar6);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 259.2552f, 122.2986f, 100.441f, 1f, 20000, 0.25f, 0, 1193033728);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
							TASK::CLOSE_SEQUENCE_TASK(uVar6);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_66, uVar6);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_66, 0, 0);
							TASK::CLEAR_SEQUENCE_TASK(&uVar6);
							iLocal_188 = 1;
						}
						else
						{
							PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_66, 1f);
							func_169(259.2552f, 122.2986f, 100.441f, 0);
						}
					}
					else
					{
						func_169(Local_67, 1);
					}
					if (!bLocal_128)
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_69, 0))
						{
							if (HUD::DOES_BLIP_EXIST(uLocal_121))
							{
								HUD::REMOVE_BLIP(&uLocal_121);
							}
							if (!HUD::DOES_BLIP_EXIST(uLocal_120))
							{
								uLocal_120 = func_173(iLocal_66, 0, 145);
							}
						}
					}
					if ((ENTITY::IS_ENTITY_AT_ENTITY(iLocal_69, iLocal_66, Global_12, 0, 1, 0) && func_163(iLocal_69)) && (SYSTEM::TIMERA() > 6000 || !bLocal_128))
					{
						if (!iLocal_171)
						{
							func_101();
							if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
							{
								if (func_19() == 1)
								{
									if (func_5(&Local_138, cLocal_132, "REPAP_ONF", 4, 0, 0, 0))
									{
										iLocal_171 = 1;
									}
								}
								else if (func_19() == 0)
								{
									if (func_5(&Local_138, cLocal_132, "REPAP_ONM", 4, 0, 0, 0))
									{
										iLocal_171 = 1;
									}
								}
								else if (func_5(&Local_138, cLocal_132, "REPAP_ONT", 4, 0, 0, 0))
								{
									iLocal_171 = 1;
								}
							}
							else if (func_19() == 1)
							{
								if (func_5(&Local_138, cLocal_132, "REPAP_INF", 4, 0, 0, 0))
								{
									iLocal_171 = 1;
								}
							}
							else if (func_19() == 0)
							{
								if (func_5(&Local_138, cLocal_132, "REPAP_INM", 4, 0, 0, 0))
								{
									iLocal_171 = 1;
								}
							}
							else if (func_5(&Local_138, cLocal_132, "REPAP_INT", 4, 0, 0, 0))
							{
								iLocal_171 = 1;
							}
						}
						else
						{
							if (!bLocal_128)
							{
								iLocal_129 = -5;
							}
							else
							{
								iLocal_129++;
							}
							TASK::CLEAR_PED_TASKS(iLocal_66);
							TASK::TASK_ENTER_VEHICLE(iLocal_66, iLocal_69, -1, func_161(iLocal_69), 1f, 8388608, 0);
						}
					}
				}
				break;
			
			case -5:
				if (bLocal_128)
				{
					func_169(Local_67, 1);
				}
				else
				{
					func_169(259.2552f, 122.2986f, 100.441f, 0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_69, 0))
				{
					if (func_146(iLocal_69, 1093140480, 1, 1056964608, 0, 1))
					{
						iLocal_129 = 5;
					}
				}
				break;
			
			case 5:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_69, 0))
				{
					if (!PED::IS_PED_INJURED(iLocal_66) && PED::IS_PED_IN_VEHICLE(iLocal_66, iLocal_69, 0))
					{
						if (HUD::DOES_BLIP_EXIST(uLocal_120))
						{
							HUD::REMOVE_BLIP(&uLocal_120);
						}
						TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
						func_171(1);
					}
					else
					{
						if (!Global_3 && !bLocal_55)
						{
							if ((PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_69, 0) && !PED::IS_PED_IN_VEHICLE(iLocal_66, iLocal_69, 1)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_69, 225.1779f, 125.6632f, 113.6647f, 262.3032f, 111.8771f, 97.16339f, 37f, 0, 1, 0))
							{
								if (bLocal_128)
								{
									PED::SET_PED_FLEE_ATTRIBUTES(iLocal_66, 2, 1);
									sLocal_131 = "REPAP_GUP";
									func_171(6);
								}
								else
								{
									PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, 0);
									PED::SET_PED_FLEE_ATTRIBUTES(iLocal_66, 2, 1);
									sLocal_131 = "REPAP_CP";
									func_171(6);
								}
							}
						}
						if (!PED::IS_PED_IN_VEHICLE(iLocal_66, iLocal_69, 0))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_66, -1794415470) != 1)
							{
								TASK::CLEAR_PED_TASKS(iLocal_66);
								TASK::TASK_ENTER_VEHICLE(iLocal_66, iLocal_69, -1, func_161(iLocal_69), 1f, 8388608, 0);
							}
							else if (SYSTEM::VDIST(Local_52, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_69, 1f, 0f, 0f)) < 1f)
							{
								PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_66, 1f);
							}
						}
					}
				}
				break;
			
			case 100:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_69, 0))
				{
					if (!func_72())
					{
						func_101();
						if (func_19() == 1)
						{
							if (func_5(&Local_138, cLocal_132, "REPAP_YSF", 4, 0, 0, 0))
							{
								iLocal_129++;
							}
						}
						else if (func_19() == 0)
						{
							func_101();
							if (func_5(&Local_138, cLocal_132, "REPAP_YSM", 4, 0, 0, 0))
							{
								iLocal_129++;
							}
							iLocal_59 = 0;
						}
						else if (func_5(&Local_138, cLocal_132, "REPAP_YST", 4, 0, 0, 0))
						{
							iLocal_129++;
						}
					}
				}
				if (iLocal_129 == 101)
				{
					fLocal_194 = 0f;
				}
				func_169(Local_67, 1);
				break;
			
			case 101:
				if (SYSTEM::VDIST2(Local_51, Local_52) < 49f && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 3f)
					{
						fLocal_194 = (fLocal_194 + MISC::GET_FRAME_TIME());
					}
					else
					{
						fLocal_194 = (fLocal_194 - (MISC::GET_FRAME_TIME() * 2f));
					}
					if (fLocal_194 > 10f)
					{
						if (func_5(&Local_138, cLocal_132, "REPAP_PRT", 4, 0, 0, 0))
						{
							fLocal_194 = 0f;
						}
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_69, 0))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_69, 0) && func_170())
					{
						bLocal_128 = true;
						iLocal_59 = 1;
						iLocal_69 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_69, 1, 1);
					}
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_69, 0))
					{
						if (HUD::DOES_BLIP_EXIST(uLocal_121))
						{
							HUD::REMOVE_BLIP(&uLocal_121);
						}
						if (!HUD::DOES_BLIP_EXIST(uLocal_120))
						{
							uLocal_120 = func_173(iLocal_66, 0, 145);
						}
					}
					else
					{
						if (HUD::DOES_BLIP_EXIST(uLocal_120))
						{
							HUD::REMOVE_BLIP(&uLocal_120);
						}
						if (!HUD::DOES_BLIP_EXIST(uLocal_121))
						{
							uLocal_121 = func_159(iLocal_69, 0, 0);
						}
					}
					if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_69))
					{
						if (HUD::DOES_BLIP_EXIST(uLocal_121))
						{
							HUD::REMOVE_BLIP(&uLocal_121);
						}
						if (!HUD::DOES_BLIP_EXIST(uLocal_120))
						{
							uLocal_120 = func_173(iLocal_66, 0, 145);
						}
						func_172("MAG_2_ESCAPE_PAP_CHASE");
						iLocal_129 = 4;
					}
					if (!iLocal_59)
					{
						if (SYSTEM::VDIST2(Local_51, Local_53) < 9f && func_19() == 0)
						{
							if (func_5(&Local_138, cLocal_132, "REPAP_MIKE", 4, 0, 0, 0))
							{
								iLocal_59 = 1;
							}
						}
					}
				}
				func_169(Local_67, 1);
				break;
		}
		if (!Global_3 && !bLocal_55)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_69, 0))
			{
				if (SYSTEM::VDIST(Local_51, Local_67) > 75f)
				{
					func_171(6);
				}
				if (func_184())
				{
					func_171(5);
				}
			}
		}
		if (!bLocal_128)
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_69, 0))
			{
				if (!Global_3 && !bLocal_55)
				{
					func_171(5);
				}
			}
			else
			{
				if (!bLocal_128)
				{
					if (!Global_3 && !bLocal_55)
					{
						if (ENTITY::GET_ENTITY_HEALTH(iLocal_69) < iLocal_63)
						{
							if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_69, PLAYER::PLAYER_PED_ID(), 1))
							{
								iLocal_64 = (iLocal_64 + (iLocal_63 - ENTITY::GET_ENTITY_HEALTH(iLocal_69)));
							}
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_69);
						}
						if (iLocal_64 > 250)
						{
							if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iLocal_66, iLocal_69) && SYSTEM::VDIST(Local_52, Local_53) < 25f)
							{
								func_171(5);
							}
						}
					}
				}
				iLocal_63 = ENTITY::GET_ENTITY_HEALTH(iLocal_69);
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_66))
		{
			if (PED::IS_PED_FLEEING(iLocal_66))
			{
				if (!Global_3 && !bLocal_55)
				{
					func_171(5);
				}
			}
		}
	}
}

void func_169(struct<3> Param0, bool bParam1)//Position - 0xAF56
{
	if (SYSTEM::VDIST(Local_52, Param0) > 2.5f)
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_66, 713668775) != 1)
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_66, Param0, 1f, -1, 0.25f, 0, 1193033728);
		}
	}
	else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_66, 713668775) != 1)
	{
		func_131(bParam1);
		TASK::TASK_LOOK_AT_ENTITY(iLocal_66, PLAYER::PLAYER_PED_ID(), -1, 16, 2);
	}
}

bool func_170()//Position - 0xAFBF
{
	return (((((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0)) && (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))) || VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))))) && VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) > 0) && func_163(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))) && !Global_17890);
}

void func_171(int iParam0)//Position - 0xB040
{
	iLocal_44 = iParam0;
	iLocal_129 = 0;
}

void func_172(char* sParam0)//Position - 0xB050
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_143)
	{
		if (!MISC::ARE_STRINGS_EQUAL(iLocal_143[iVar0], sParam0))
		{
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE(iLocal_143[iVar0]))
			{
				AUDIO::STOP_AUDIO_SCENE(iLocal_143[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_143)
	{
		if (MISC::ARE_STRINGS_EQUAL(iLocal_143[iVar0], sParam0))
		{
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE(iLocal_143[iVar0]))
			{
				AUDIO::START_AUDIO_SCENE(iLocal_143[iVar0]);
			}
		}
		iVar0++;
	}
}

var func_173(int iParam0, bool bParam1, int iParam2)//Position - 0xB0D5
{
	var uVar0;
	
	uVar0 = func_160(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(uVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_17C49.f_744E[iParam2 /*29*/].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uVar0, &(Global_17C49.f_744E[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_174(int iParam0)//Position - 0xB127
{
	if (func_177())
	{
		Global_17C3F = 1;
		Global_17C3C = MISC::GET_GAME_TIMER();
		if (func_87(Global_17C3E))
		{
			func_175(0);
		}
		HUD::SET_MISSION_NAME(1, "RE_TITLE");
		if (iParam0 && func_87(Global_17C3E))
		{
			HUD::FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

void func_175(int iParam0)//Position - 0xB17A
{
	switch (iParam0)
	{
		case 0:
			if (Global_17C49.f_6E20.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_156(func_176(iParam0), -1);
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
					func_156(func_176(iParam0), -1);
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
					func_156(func_176(iParam0), -1);
					Global_17C49.f_6E20.f_4++;
					MISC::SET_BIT(&Global_17C45, 2);
				}
			}
			break;
	}
}

char* func_176(int iParam0)//Position - 0xB25B
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

int func_177()//Position - 0xB29D
{
	switch (func_178(&Global_5FB7, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD()))
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

int func_178(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0xB2D3
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
		if (func_182(0))
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
		if (!func_180(iParam2))
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
			func_179(uParam0, iParam4);
		}
	}
	return 2;
}

void func_179(var uParam0, int iParam1)//Position - 0xB40A
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

bool func_180(int iParam0)//Position - 0xB459
{
	return func_181(iParam0, Global_8861);
}

int func_181(int iParam0, int iParam1)//Position - 0xB46A
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

int func_182(int iParam0)//Position - 0xB64B
{
	if (Global_8861 == 15)
	{
		return 0;
	}
	if (func_180(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_183()//Position - 0xB66D
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iLocal_66))
	{
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_66, 2, 0);
		TASK::TASK_SMART_FLEE_PED(iLocal_66, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
	}
	iVar0 = 0;
	while (iVar0 < Local_108)
	{
		if (!PED::IS_PED_INJURED(Local_108[iVar0 /*18*/]))
		{
			TASK::TASK_SMART_FLEE_PED(Local_108[iVar0 /*18*/], PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_108[iVar0 /*18*/], -2065892691);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_108[iVar0 /*18*/], 0);
		}
		iVar0++;
	}
}

int func_184()//Position - 0xB6EA
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < Local_108)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_108[iVar1 /*18*/]) && !PED::IS_PED_INJURED(Local_108[iVar1 /*18*/]))
		{
			if (ENTITY::IS_ENTITY_VISIBLE(Local_108[iVar1 /*18*/]))
			{
				if (((MISC::IS_BULLET_IN_AREA(Local_108[iVar1 /*18*/].f_6, 5f, 1) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, Local_108[iVar1 /*18*/].f_6, 10f)) || PED::IS_PED_FLEEING(Local_108[iVar1 /*18*/])) || (iLocal_137[iVar1] > 10 && iLocal_44 == 0))
				{
					iVar0 = 1;
				}
			}
		}
		iVar1++;
	}
	if (iLocal_109 > 1)
	{
		iVar0 = 1;
	}
	iVar1 = 0;
	while (iVar1 < Local_107)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_107[iVar1 /*18*/]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_107[iVar1 /*18*/], 0) && ENTITY::IS_ENTITY_VISIBLE(Local_107[iVar1 /*18*/]))
			{
				if (FIRE::IS_ENTITY_ON_FIRE(Local_107[iVar1 /*18*/]))
				{
					iVar0 = 1;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_185()//Position - 0xB7E4
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_42) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_196())
		{
			return 0;
		}
	}
	if (func_192())
	{
		return 1;
	}
	if (func_186(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_186(float fParam0, bool bParam1)//Position - 0xB86A
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
		if (func_21(func_19()))
		{
			iVar5 = func_92();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (MISC::IS_BIT_SET(Global_17C49.f_41BC[iVar1 /*6*/], 2) && !MISC::IS_BIT_SET(Global_17C49.f_41BC[iVar1 /*6*/], 3))
				{
					func_187(iVar1, &Var0);
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

void func_187(int iParam0, var uParam1)//Position - 0xB921
{
	switch (iParam0)
	{
		case 0:
			func_188(uParam1, "Abigail1", func_190(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_189(iParam0), 1, 0);
			break;
		
		case 1:
			func_188(uParam1, "Abigail2", func_190(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_189(iParam0), 1, 0);
			break;
		
		case 2:
			func_188(uParam1, "Barry1", func_190(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_189(iParam0), 1, 0);
			break;
		
		case 3:
			func_188(uParam1, "Barry2", func_190(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_189(iParam0), 1, 1);
			break;
		
		case 4:
			func_188(uParam1, "Barry3", func_190(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_189(iParam0), 0, 0);
			break;
		
		case 5:
			func_188(uParam1, "Barry3A", func_190(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_189(iParam0), 0, 1);
			break;
		
		case 6:
			func_188(uParam1, "Barry3C", func_190(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_189(iParam0), 0, 1);
			break;
		
		case 7:
			func_188(uParam1, "Barry4", func_190(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_189(iParam0), 0, 0);
			break;
		
		case 8:
			func_188(uParam1, "Dreyfuss1", func_190(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_189(iParam0), 0, 0);
			break;
		
		case 9:
			func_188(uParam1, "Epsilon1", func_190(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_189(iParam0), 0, 0);
			break;
		
		case 10:
			func_188(uParam1, "Epsilon2", func_190(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_189(iParam0), 1, 0);
			break;
		
		case 11:
			func_188(uParam1, "Epsilon3", func_190(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_189(iParam0), 0, 0);
			break;
		
		case 12:
			func_188(uParam1, "Epsilon4", func_190(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_189(iParam0), 0, 0);
			break;
		
		case 13:
			func_188(uParam1, "Epsilon5", func_190(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_189(iParam0), 1, 0);
			break;
		
		case 14:
			func_188(uParam1, "Epsilon6", func_190(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_189(iParam0), 0, 1);
			break;
		
		case 15:
			func_188(uParam1, "Epsilon7", func_190(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_189(iParam0), 0, 0);
			break;
		
		case 16:
			func_188(uParam1, "Epsilon8", func_190(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_189(iParam0), 1, 0);
			break;
		
		case 17:
			func_188(uParam1, "Extreme1", func_190(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_189(iParam0), 0, 1);
			break;
		
		case 18:
			func_188(uParam1, "Extreme2", func_190(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_189(iParam0), 0, 1);
			break;
		
		case 19:
			func_188(uParam1, "Extreme3", func_190(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_189(iParam0), 0, 1);
			break;
		
		case 20:
			func_188(uParam1, "Extreme4", func_190(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_189(iParam0), 0, 0);
			break;
		
		case 21:
			func_188(uParam1, "Fanatic1", func_190(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_189(iParam0), 1, 0);
			break;
		
		case 22:
			func_188(uParam1, "Fanatic2", func_190(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_189(iParam0), 1, 0);
			break;
		
		case 23:
			func_188(uParam1, "Fanatic3", func_190(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_189(iParam0), 0, 1);
			break;
		
		case 24:
			func_188(uParam1, "Hao1", func_190(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_189(iParam0), 0, 1);
			break;
		
		case 25:
			func_188(uParam1, "Hunting1", func_190(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_189(iParam0), 0, 1);
			break;
		
		case 26:
			func_188(uParam1, "Hunting2", func_190(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_189(iParam0), 0, 1);
			break;
		
		case 27:
			func_188(uParam1, "Josh1", func_190(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_189(iParam0), 1, 0);
			break;
		
		case 28:
			func_188(uParam1, "Josh2", func_190(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_189(iParam0), 1, 1);
			break;
		
		case 29:
			func_188(uParam1, "Josh3", func_190(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_189(iParam0), 1, 1);
			break;
		
		case 30:
			func_188(uParam1, "Josh4", func_190(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_189(iParam0), 1, 0);
			break;
		
		case 31:
			func_188(uParam1, "Maude1", func_190(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_189(iParam0), 0, 1);
			break;
		
		case 32:
			func_188(uParam1, "Minute1", func_190(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_189(iParam0), 0, 1);
			break;
		
		case 33:
			func_188(uParam1, "Minute2", func_190(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_189(iParam0), 0, 1);
			break;
		
		case 34:
			func_188(uParam1, "Minute3", func_190(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_189(iParam0), 0, 1);
			break;
		
		case 35:
			func_188(uParam1, "MrsPhilips1", func_190(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_189(iParam0), 0, 0);
			break;
		
		case 36:
			func_188(uParam1, "MrsPhilips2", func_190(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_189(iParam0), 0, 0);
			break;
		
		case 37:
			func_188(uParam1, "Nigel1", func_190(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_189(iParam0), 1, 0);
			break;
		
		case 38:
			func_188(uParam1, "Nigel1A", func_190(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_189(iParam0), 1, 1);
			break;
		
		case 39:
			func_188(uParam1, "Nigel1B", func_190(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_189(iParam0), 1, 1);
			break;
		
		case 40:
			func_188(uParam1, "Nigel1C", func_190(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_189(iParam0), 1, 1);
			break;
		
		case 41:
			func_188(uParam1, "Nigel1D", func_190(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_189(iParam0), 1, 1);
			break;
		
		case 42:
			func_188(uParam1, "Nigel2", func_190(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_189(iParam0), 1, 1);
			break;
		
		case 43:
			func_188(uParam1, "Nigel3", func_190(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_189(iParam0), 1, 1);
			break;
		
		case 44:
			func_188(uParam1, "Omega1", func_190(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_189(iParam0), 0, 0);
			break;
		
		case 45:
			func_188(uParam1, "Omega2", func_190(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_189(iParam0), 0, 0);
			break;
		
		case 46:
			func_188(uParam1, "Paparazzo1", func_190(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_189(iParam0), 0, 1);
			break;
		
		case 47:
			func_188(uParam1, "Paparazzo2", func_190(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_189(iParam0), 0, 1);
			break;
		
		case 48:
			func_188(uParam1, "Paparazzo3", func_190(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_189(iParam0), 0, 0);
			break;
		
		case 49:
			func_188(uParam1, "Paparazzo3A", func_190(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_189(iParam0), 0, 1);
			break;
		
		case 50:
			func_188(uParam1, "Paparazzo3B", func_190(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_189(iParam0), 0, 1);
			break;
		
		case 51:
			func_188(uParam1, "Paparazzo4", func_190(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_189(iParam0), 0, 0);
			break;
		
		case 52:
			func_188(uParam1, "Rampage1", func_190(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_189(iParam0), 0, 0);
			break;
		
		case 54:
			func_188(uParam1, "Rampage3", func_190(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_189(iParam0), 1, 0);
			break;
		
		case 55:
			func_188(uParam1, "Rampage4", func_190(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_189(iParam0), 1, 0);
			break;
		
		case 56:
			func_188(uParam1, "Rampage5", func_190(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_189(iParam0), 0, 0);
			break;
		
		case 53:
			func_188(uParam1, "Rampage2", func_190(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_189(iParam0), 1, 0);
			break;
		
		case 57:
			func_188(uParam1, "TheLastOne", func_190(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_189(iParam0), 0, 1);
			break;
		
		case 58:
			func_188(uParam1, "Tonya1", func_190(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_189(iParam0), 0, 1);
			break;
		
		case 59:
			func_188(uParam1, "Tonya2", func_190(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_189(iParam0), 0, 1);
			break;
		
		case 60:
			func_188(uParam1, "Tonya3", func_190(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_189(iParam0), 0, 1);
			break;
		
		case 61:
			func_188(uParam1, "Tonya4", func_190(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_189(iParam0), 0, 1);
			break;
		
		case 62:
			func_188(uParam1, "Tonya5", func_190(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_189(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_188(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)//Position - 0xCA99
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

int func_189(int iParam0)//Position - 0xCB2A
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

struct<2> func_190(int iParam0)//Position - 0xCE70
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_191(iParam0) };
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

struct<2> func_191(int iParam0)//Position - 0xCEA6
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

int func_192()//Position - 0xD2F1
{
	if (func_195() && !func_196())
	{
		return 1;
	}
	if (func_194() && func_193())
	{
		return 1;
	}
	return 0;
}

bool func_193()//Position - 0xD323
{
	return Global_17B2F > 0;
}

int func_194()//Position - 0xD331
{
	if (Global_154F9 != -1)
	{
		return 1;
	}
	return 0;
}

int func_195()//Position - 0xD346
{
	if (Global_154F9 != -1)
	{
		return MISC::IS_BIT_SET(Global_13D03[Global_154F9 /*34*/].f_F, 20);
	}
	return 0;
}

int func_196()//Position - 0xD36C
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

void func_197()//Position - 0xD389
{
	func_199(39, 1);
	func_199(40, 1);
	func_199(41, 1);
	func_199(42, 1);
	func_199(43, 1);
	uLocal_119 = func_198(Local_67);
	iLocal_66 = PED::CREATE_PED(26, joaat("a_f_y_bevhills_03"), Local_67, fLocal_68, 1, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_66, 1, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_66, 17, 1);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_66, 128, 1);
	PED::SET_PED_KEEP_TASK(iLocal_66, 1);
	PED::SET_PED_CAN_BE_DRAGGED_OUT(iLocal_66, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_66, 0, 0, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_66, 2, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_66, 3, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_66, 4, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_66, 7, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_66, 8, 0, 0, 0);
	PED::SET_PED_DIES_INSTANTLY_IN_WATER(iLocal_66, 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_66, 1);
	PED::SET_PED_CAN_BE_TARGETTED(iLocal_66, 0);
	AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_66, "LACEY");
	if (Global_3 || bLocal_55)
	{
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_66, 1);
	}
	if (PED::ADD_RELATIONSHIP_GROUP("CELEBRITY", &uLocal_54))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_66, uLocal_54);
	}
	iLocal_69 = VEHICLE::CREATE_VEHICLE(joaat("surano"), Local_70, fLocal_71, 1, 1);
	ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_69, Local_70, 0, 0, 1);
	ENTITY::SET_ENTITY_QUATERNION(iLocal_69, 0.1293f, -0.0323f, -0.1606f, 0.978f);
	VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_69, 0, 0);
	VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_69, 10);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_69);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_69, 3);
	VEHICLE::SET_VEHICLE_DISABLE_TOWING(iLocal_69, 1);
	AUDIO::SET_VEHICLE_RADIO_LOUD(iLocal_69, 1);
	AUDIO::SET_VEH_RADIO_STATION(iLocal_69, AUDIO::GET_RADIO_STATION_NAME(1));
	if (func_19() == 1)
	{
		func_17(&Local_138, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	}
	else if (func_19() == 0)
	{
		func_17(&Local_138, 1, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	}
	else
	{
		func_17(&Local_138, 1, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	}
	func_17(&Local_138, 3, iLocal_66, "LACEY", 0, 1);
	iLocal_135[0] = "idle_a";
	iLocal_135[1] = "idle_b";
	iLocal_135[2] = "idle_c";
	iLocal_135[3] = "idle_d";
	iLocal_135[4] = "idle_e";
	iLocal_135[5] = "idle_f";
	iLocal_135[6] = "idle_g";
	iLocal_135[7] = "idle_h";
	iLocal_135[8] = "idle_i";
	iLocal_143[0] = "MAG_2_ESCAPE_PAP_GET_CAR";
	iLocal_143[1] = "MAG_2_ESCAPE_PAP_CHASE";
	iLocal_143[2] = "MAG_2_ESCAPE_PAP_TAKE_ACTRESS_HOME";
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("vader"), 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("surano"), 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("cavalcade2"), 1);
}

var func_198(struct<3> Param0)//Position - 0xD5E6
{
	var uVar0;
	
	uVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_ALPHA(uVar0, 0);
	HUD::SET_BLIP_DISPLAY(uVar0, 0);
	return uVar0;
}

void func_199(int iParam0, bool bParam1)//Position - 0xD608
{
	if (bParam1)
	{
		if (!func_206(iParam0, 2, 1))
		{
			func_205(iParam0, 2, 1);
		}
	}
	else if (func_206(iParam0, 2, 1))
	{
		func_200(iParam0, 2, 1);
	}
}

void func_200(int iParam0, int iParam1, bool bParam2)//Position - 0xD63F
{
	var uVar0;
	
	if (bParam2)
	{
		MISC::CLEAR_BIT(&(Global_15F9E.f_4F3[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_82() == 0)
		{
			uVar0 = func_203(func_204(iParam0), -1, 0);
			MISC::CLEAR_BIT(&uVar0, iParam1);
			func_201(func_204(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_17C49.f_29C[iParam0]), iParam1);
	}
}

void func_201(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xD6A7
{
	int iVar0;
	
	iVar0 = Global_25744D[iParam0 /*6*/][func_202(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, uParam1, iParam3);
	}
}

int func_202(var uParam0)//Position - 0xD6D2
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_85();
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

int func_203(int iParam0, int iParam1, int iParam2)//Position - 0xD706
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_25744D[iParam0 /*6*/][func_202(iParam1)];
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_204(int iParam0)//Position - 0xD738
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

void func_205(int iParam0, int iParam1, bool bParam2)//Position - 0xD9E1
{
	var uVar0;
	
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_15F9E.f_4F3[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_82() == 0)
		{
			uVar0 = func_203(func_204(iParam0), -1, 0);
			MISC::SET_BIT(&uVar0, iParam1);
			func_201(func_204(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_17C49.f_29C[iParam0]), iParam1);
	}
}

int func_206(int iParam0, int iParam1, bool bParam2)//Position - 0xDA49
{
	if (bParam2)
	{
		return MISC::IS_BIT_SET(Global_15F9E.f_4F3[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_82() == 0)
		{
			return MISC::IS_BIT_SET(func_203(func_204(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return MISC::IS_BIT_SET(Global_17C49.f_29C[iParam0], iParam1);
	}
	return 0;
}

int func_207()//Position - 0xDAA9
{
	if (!iLocal_72)
	{
		func_215(&uLocal_73, joaat("surano"));
		func_215(&uLocal_73, joaat("prop_ld_test_01"));
		func_215(&uLocal_73, joaat("a_f_y_bevhills_03"));
		func_215(&uLocal_73, joaat("a_m_y_genstreet_02"));
		func_215(&uLocal_73, joaat("vader"));
		func_215(&uLocal_73, joaat("cavalcade2"));
		func_215(&uLocal_73, joaat("prop_pap_camera_01"));
		func_212(&uLocal_73);
		iLocal_72 = 1;
	}
	if (!func_208(&uLocal_73))
	{
		return 0;
	}
	STREAMING::REQUEST_ANIM_DICT("random@escape_paparazzi@standing@");
	STREAMING::REQUEST_ANIM_DICT("random@paparazzi@pap_anims");
	STREAMING::REQUEST_ANIM_DICT("random@paparazzi@peek");
	STREAMING::REQUEST_ANIM_DICT("random@paparazzi@trans");
	STREAMING::REQUEST_ANIM_DICT("random@paparazzi@wait");
	STREAMING::REQUEST_ANIM_DICT("veh@std@ps@idle_panic");
	STREAMING::REQUEST_ANIM_DICT("veh@low@front_ps@idle_panic");
	STREAMING::REQUEST_ANIM_DICT(sLocal_134);
	HUD::REQUEST_ADDITIONAL_TEXT("ESCPAP", 0);
	if (((((((((STREAMING::HAS_ANIM_DICT_LOADED("random@escape_paparazzi@standing@") && STREAMING::HAS_ANIM_DICT_LOADED("random@paparazzi@pap_anims")) && STREAMING::HAS_ANIM_DICT_LOADED("random@paparazzi@peek")) && STREAMING::HAS_ANIM_DICT_LOADED("random@paparazzi@trans")) && STREAMING::HAS_ANIM_DICT_LOADED("random@paparazzi@wait")) && STREAMING::HAS_ANIM_DICT_LOADED("veh@std@ps@idle_panic")) && STREAMING::HAS_ANIM_DICT_LOADED("veh@low@front_ps@idle_panic")) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_134)) && HUD::HAS_ADDITIONAL_TEXT_LOADED(0)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Distant_Camera_Flash", false))
	{
		return 1;
	}
	return 0;
}

int func_208(var uParam0)//Position - 0xDBE3
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
			if (!func_209(uParam0[iVar0 /*2*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_1F = 0;
	return 1;
}

bool func_209(var uParam0)//Position - 0xDC45
{
	return func_210(*uParam0, "NULL", uParam0->f_1);
}

int func_210(int iParam0, char* sParam1, int iParam2)//Position - 0xDC5A
{
	if (MISC::IS_BIT_SET(uParam0, 30))
	{
		if (MISC::IS_BIT_SET(iParam0, 29))
		{
			switch (func_211(iParam0))
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
					return AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, MISC::IS_BIT_SET(iParam0, 27));
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

int func_211(int iParam0)//Position - 0xDD4D
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

void func_212(var uParam0)//Position - 0xDD79
{
	func_213(uParam0, 9, -1, 0);
}

void func_213(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0xDD8B
{
	int iVar0;
	
	if (!func_214(iParam1))
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

int func_214(int iParam0)//Position - 0xDE4E
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

void func_215(var uParam0, int iParam1)//Position - 0xDEED
{
	func_213(uParam0, 0, iParam1, 0);
}

int func_216()//Position - 0xDEFF
{
	if (!func_180(5))
	{
		return 1;
	}
	if (func_192())
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_196())
		{
			return 0;
		}
	}
	if (func_186(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_217()//Position - 0xDF61
{
	if ((Global_17C3E == func_96() && MISC::GET_RANDOM_EVENT_FLAG()) && Global_17C3F)
	{
		return 1;
	}
	return 0;
}

void func_218(var uParam0)//Position - 0xDF8C
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
						func_219(uParam0[iVar0 /*2*/]);
						uParam0->f_20 = MISC::GET_FRAME_COUNT();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_219(var uParam0)//Position - 0xE016
{
	func_220(uParam0, "NULL", uParam0->f_1);
}

void func_220(var uParam0, char* sParam1, int iParam2)//Position - 0xE02A
{
	if (MISC::IS_BIT_SET(*uParam0, 30))
	{
		switch (func_211(*uParam0))
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

void func_221(int iParam0)//Position - 0xE103
{
	if (iParam0 == -1)
	{
		iParam0 = func_96();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_223(iParam0);
	MISC::_0x65D2EBB47E1CEC21(0);
	MISC::SET_RANDOM_EVENT_FLAG(1);
	Global_17C3B = 0;
	func_222();
}

void func_222()//Position - 0xE139
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

void func_223(int iParam0)//Position - 0xE176
{
	Global_17C3E = iParam0;
}

int func_224(struct<3> Param0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0xE184
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
		iParam1 = func_96();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_265())
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
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_196())
			{
				return 0;
			}
		}
		if (!Global_17C49.f_1CAD)
		{
			return 0;
		}
		if (func_77(0))
		{
			return 0;
		}
		if (func_192())
		{
			return 0;
		}
		if (func_264())
		{
			return 0;
		}
		if (Global_17C3E != -1)
		{
			return 0;
		}
		if (func_21(func_19()))
		{
			if (func_186(100f, 1) != -1)
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
		if (!func_263(iParam1))
		{
			return 0;
		}
		if (func_21(func_19()))
		{
			if (func_262(func_19()) == 4 || func_262(func_19()) == 5)
			{
				return 0;
			}
		}
		if (func_21(func_19()))
		{
			if (!func_261(iParam1, iParam2, 145))
			{
				return 0;
			}
		}
		if (!func_260(Global_17C49.f_6E20.f_2B[iParam1]))
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
		if (func_259())
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
		if (!func_250(4))
		{
			return 0;
		}
		if (!func_180(5))
		{
			return 0;
		}
		if (func_249(iParam1, iParam2) && !bParam3)
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
		if ((iParam1 == 9 && (iParam2 == 2 || iParam2 == 5)) && !func_249(0, 0))
		{
			return 0;
		}
		if (Global_600E)
		{
			return 0;
		}
		if (func_263(30) && !func_249(30, 0))
		{
			if (iParam1 != 30)
			{
				if (SYSTEM::VDIST2(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_21(func_19()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				Var3 = { Global_17C49.f_6C1.f_21B.f_5F8[iVar2 /*3*/] };
				iVar4 = Global_17C49.f_6C1.f_21B.f_5F4[iVar2];
				if (func_248(iVar4))
				{
					if (func_226(iVar2))
					{
						if (!func_225(Var3, 0f, 0f, 0f))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Var3) < (210f * 210f))
							{
								if (func_19() != iVar2)
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

bool func_225(struct<3> Param0, struct<3> Param1)//Position - 0xE51D
{
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

bool func_226(int iParam0)//Position - 0xE546
{
	int iVar0;
	
	iVar0 = Global_17C49.f_6C1.f_21B.f_5F4[iParam0];
	return func_227(iVar0);
}

int func_227(int iParam0)//Position - 0xE567
{
	return func_228(iParam0, 1);
}

int func_228(int iParam0, int iParam1)//Position - 0xE576
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_248(iParam0))
	{
		return 0;
	}
	func_229(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_229(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0xE5C9
{
	func_230(func_241(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_230(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0xE5E7
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_240(iParam0, iParam1))
	{
		iVar0 = func_239(iParam1);
		iVar1 = func_237(iParam0);
		iVar2 = (func_237(iParam0) - func_237(iParam1));
		iVar3 = (func_239(iParam0) - func_239(iParam1));
		iVar4 = (func_236(iParam0) - func_236(iParam1));
		iVar5 = (func_235(iParam0) - func_235(iParam1));
		iVar6 = (func_234(iParam0) - func_234(iParam1));
		iVar7 = (func_233(iParam0) - func_233(iParam1));
	}
	else
	{
		iVar0 = func_239(iParam0);
		iVar1 = func_237(iParam1);
		iVar2 = (func_237(iParam1) - func_237(iParam0));
		iVar3 = (func_239(iParam1) - func_239(iParam0));
		iVar4 = (func_236(iParam1) - func_236(iParam0));
		iVar5 = (func_235(iParam1) - func_235(iParam0));
		iVar6 = (func_234(iParam1) - func_234(iParam0));
		iVar7 = (func_233(iParam1) - func_233(iParam0));
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
		iVar4 = (iVar4 + func_232(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_231(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_231(float fParam0, float fParam1, float fParam2)//Position - 0xE7E8
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

int func_232(int iParam0, int iParam1)//Position - 0xE82A
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

int func_233(int iParam0)//Position - 0xE8CC
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_234(int iParam0)//Position - 0xE8DF
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_235(int iParam0)//Position - 0xE8F2
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_236(int iParam0)//Position - 0xE905
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_237(int iParam0)//Position - 0xE917
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_238(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_238(bool bParam0, int iParam1, int iParam2)//Position - 0xE93C
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_239(int iParam0)//Position - 0xE953
{
	return iParam0 & 15;
}

int func_240(int iParam0, int iParam1)//Position - 0xE960
{
	int iVar0;
	int iVar1;
	
	if (!func_248(iParam1) || !func_248(iParam0))
	{
		return 1;
	}
	iVar0 = func_237(iParam0);
	iVar1 = func_237(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_239(iParam0);
	iVar1 = func_239(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_236(iParam0);
	iVar1 = func_236(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_235(iParam0);
	iVar1 = func_235(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_234(iParam0);
	iVar1 = func_234(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_233(iParam0);
	iVar1 = func_233(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_241()//Position - 0xEA6C
{
	var uVar0;
	
	func_247(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_246(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_245(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_244(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_243(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_242(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_242(var uParam0, int iParam1)//Position - 0xEAB2
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

void func_243(var uParam0, int iParam1)//Position - 0xEB38
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_244(var uParam0, int iParam1)//Position - 0xEB6B
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_239(*uParam0);
	iVar1 = func_237(*uParam0);
	if (iParam1 < 1 || iParam1 > func_232(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_245(var uParam0, int iParam1)//Position - 0xEBBC
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_246(var uParam0, int iParam1)//Position - 0xEBF6
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_247(var uParam0, int iParam1)//Position - 0xEC31
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_248(int iParam0)//Position - 0xEC6D
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
	iVar0 = func_233(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_234(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_235(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_237(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_239(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_236(iParam0);
	if (iVar5 < 1 || iVar5 > func_232(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_249(int iParam0, int iParam1)//Position - 0xED49
{
	if (MISC::IS_BIT_SET(Global_17C49.f_6E20.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_250(int iParam0)//Position - 0xED6C
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_19();
				if (!func_21(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_258()) || Global_17890) || Global_5F7E) || func_257()) || func_14(8, -1)) || func_256()) || func_255()) || func_254()) || func_253()) || Global_17C49.f_1738.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || func_258()) || Global_5F7E) || func_257()) || func_14(8, -1)) || func_254()) || func_256()) || func_255()) || func_253()) || Global_17C49.f_1738.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_258()) || Global_17890) || Global_5F7E) || func_257()) || func_14(8, -1)) || func_254()) || func_256()) || func_255()) || func_253()) || Global_17C49.f_1738.f_397[iVar0] == 5) || Global_8A84 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_258()) || Global_17890) || Global_5F7E) || func_257()) || func_14(8, -1)) || func_256()) || func_255()) || func_253()) || Global_17C49.f_1738.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_258() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_14(8, -1)) || func_253()) || func_252()) || Global_17C49.f_1738.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_14(8, -1) || func_256()) || func_255()) || func_252()) || func_251())
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
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_258()) || Global_5F7E) || func_257()) || func_14(8, -1)) || func_255()) || func_254()) || func_253()) || Global_17C49.f_1738.f_397[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || func_258()) || func_255()) || Global_17890) || Global_5F7E) || func_257()) || Global_8C75) || func_14(8, -1)) || func_254()) || func_252()) || func_253()) || Global_17C49.f_1738.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_258()) || Global_17890) || Global_5F7E) || func_257()) || func_14(8, -1)) || func_254()) || func_252()) || func_256()) || func_255()) || func_253())
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

var func_251()//Position - 0xF489
{
	return Global_15F91.f_1;
}

int func_252()//Position - 0xF497
{
	if (Global_154F9 != -1)
	{
		return MISC::IS_BIT_SET(Global_13D03[Global_154F9 /*34*/].f_F, 13);
	}
	return 0;
}

int func_253()//Position - 0xF4BD
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_254()//Position - 0xF4D7
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

bool func_255()//Position - 0xF501
{
	return Global_15F9E.f_123 > 0;
}

bool func_256()//Position - 0xF512
{
	return Global_15F9E.f_122 > 0;
}

var func_257()//Position - 0xF523
{
	return Global_14143C;
}

int func_258()//Position - 0xF52F
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_15725.f_2C == 1;
	}
	return 0;
}

int func_259()//Position - 0xF54B
{
	func_11();
	if (Global_BFC[Global_3839 /*2811*/][0 /*281*/].f_103 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_260(int iParam0)//Position - 0xF573
{
	return func_240(func_241(), iParam0);
}

int func_261(int iParam0, int iParam1, int iParam2)//Position - 0xF585
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_19();
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

int func_262(int iParam0)//Position - 0xF669
{
	if (!func_21(iParam0))
	{
		return 7;
	}
	return Global_17C49.f_1738.f_397[iParam0];
}

bool func_263(int iParam0)//Position - 0xF68D
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_265())
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

int func_264()//Position - 0xF6EB
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

int func_265()//Position - 0xF722
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

void func_266(var uParam0, int iParam1)//Position - 0xF7A5
{
	if (iParam1 > 0)
	{
		uParam0->f_21 = iParam1;
	}
}

void func_267()//Position - 0xF7BC
{
	func_285(0);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(-90f, -1488f, -50f, 55f, -1470f, 50f, 1);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", 1);
	func_280(&uLocal_73, 0);
	STREAMING::REMOVE_ANIM_DICT("random@escape_paparazzi@standing@");
	STREAMING::REMOVE_ANIM_DICT("random@paparazzi@pap_anims");
	STREAMING::REMOVE_ANIM_DICT("random@paparazzi@peek");
	STREAMING::REMOVE_ANIM_DICT("random@paparazzi@trans");
	STREAMING::REMOVE_ANIM_DICT("random@paparazzi@wait");
	STREAMING::REMOVE_ANIM_DICT("veh@std@ps@idle_panic");
	STREAMING::REMOVE_ANIM_DICT("veh@low@front_ps@idle_panic");
	STREAMING::REMOVE_ANIM_DICT(sLocal_134);
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	if (func_217())
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_66) && !PED::IS_PED_INJURED(iLocal_66))
	{
		if (PED::IS_PED_IN_GROUP(iLocal_66))
		{
			PED::REMOVE_PED_FROM_GROUP(iLocal_66);
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_66, 1))
		{
			if (!PED::IS_PED_FLEEING(iLocal_66))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_66, 0, 0);
			}
		}
	}
	func_269(-1);
	HUD::CLEAR_GPS_MULTI_ROUTE();
	HUD::SET_GPS_MULTI_ROUTE_RENDER(0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("vader"), 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("surano"), 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("cavalcade2"), 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_125, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_126, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_127, 0);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(93.8361f, 92.1704f, 246.1673f) + Vector(6f, 6f, 6f), Vector(93.8361f, 92.1704f, 246.1673f) - Vector(6f, 6f, 6f), 1, 1);
	if (Global_606A)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("AC_STOP");
	}
	func_268();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_268()//Position - 0xF910
{
	Global_6066 = 0;
	Global_6067 = 0;
	Global_6069 = 0;
	Global_606A = 0;
	Global_606B = 0;
}

void func_269(int iParam0)//Position - 0xF92C
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_96();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_217())
	{
		func_273(iParam0);
		HUD::SET_MISSION_NAME(0, 0);
		Global_17C40 = MISC::GET_GAME_TIMER();
		func_272(30000);
		StringCopy(&cVar0, func_271(Global_17C3E, 1), 64);
		if (func_95(Global_17C3E) > 0)
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
	func_270(&Global_5FB7);
	Global_17C3F = 0;
	func_223(-1);
}

void func_270(var uParam0)//Position - 0xF9E1
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

char* func_271(int iParam0, bool bParam1)//Position - 0xFA1E
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

void func_272(int iParam0)//Position - 0xFC67
{
	Global_8A88 = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_273(int iParam0)//Position - 0xFC79
{
	func_274(iParam0, 0, func_279(iParam0));
}

void func_274(int iParam0, int iParam1, int iParam2)//Position - 0xFC8E
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_241();
	func_277(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_276(iParam0, &uVar0);
	Var1 = { func_275(&uVar0) };
}

struct<16> func_275(var uParam0)//Position - 0xFCBD
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_235(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_234(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_233(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_236(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_239(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_237(*uParam0), 64);
	return Var0;
}

void func_276(int iParam0, var uParam1)//Position - 0xFD8C
{
	Global_17C49.f_6E20.f_2B[iParam0] = *uParam1;
}

void func_277(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xFDA4
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_237(*uParam0);
	iVar1 = func_239(*uParam0);
	iVar2 = func_236(*uParam0);
	iVar3 = func_235(*uParam0);
	iVar4 = func_234(*uParam0);
	iVar5 = func_233(*uParam0);
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
	iVar6 = func_232(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_232(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_278(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_278(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xFF26
{
	func_247(uParam0, iParam1);
	func_246(uParam0, iParam2);
	func_245(uParam0, iParam3);
	func_244(uParam0, iParam4);
	func_243(uParam0, iParam5);
	func_242(uParam0, iParam6);
}

int func_279(int iParam0)//Position - 0xFF5E
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

void func_280(var uParam0, bool bParam1)//Position - 0x1019C
{
	int iVar0;
	
	if (!bParam1)
	{
		func_282(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_281(uParam0[iVar0 /*2*/]);
		iVar0++;
	}
	uParam0->f_1F = 0;
	uParam0->f_20 = -1;
	uParam0->f_21 = 1;
}

void func_281(var uParam0)//Position - 0x101DC
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
}

void func_282(var uParam0)//Position - 0x101ED
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*2*/], 30))
		{
			func_283(uParam0[iVar0 /*2*/]);
		}
		iVar0++;
	}
	uParam0->f_1F = 1;
}

void func_283(var uParam0)//Position - 0x10226
{
	func_284(*uParam0, "NULL", uParam0->f_1);
}

void func_284(int iParam0, char* sParam1, var uParam2)//Position - 0x1023B
{
	if (MISC::IS_BIT_SET(uParam0, 30))
	{
		switch (func_211(iParam0))
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
				VEHICLE::REMOVE_VEHICLE_RECORDING(uParam2, sParam1);
				break;
			
			case 5:
				TASK::REMOVE_WAYPOINT_RECORDING(sParam1);
				break;
			
			case 6:
				AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
				break;
			
			case 7:
				SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(uParam2);
				break;
			
			case 8:
				HUD::CLEAR_ADDITIONAL_TEXT(uParam2, MISC::IS_BIT_SET(iParam0, 26));
				break;
			
			case 9:
				STREAMING::REMOVE_PTFX_ASSET();
				break;
			
			default:
				break;
		}
	}
}

void func_285(bool bParam0)//Position - 0x102FB
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 44)
	{
		func_199(iVar0, bParam0);
		iVar0++;
	}
}

