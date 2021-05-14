#region Local Var
	var uLocal_0 = 0;
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
	int iLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	float fLocal_16 = 0f;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	char* sLocal_19 = NULL;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
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
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	struct<3> Local_44 = { 0, 0, 0 } ;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	struct<3> Local_49 = { 0, 0, 0 } ;
	float fLocal_50 = 0f;
	float fLocal_51 = 0f;
	float fLocal_52 = 0f;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	bool bLocal_56 = 0;
	int iLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
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
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	char* sLocal_78 = NULL;
	char* sLocal_79 = NULL;
	char* sLocal_80 = NULL;
	char* sLocal_81 = NULL;
	struct<3> Local_82 = { 0, 0, 0 } ;
	struct<3> Local_83 = { 0, 0, 0 } ;
	struct<3> Local_84 = { 0, 0, 0 } ;
	struct<3> Local_85 = { 0, 0, 0 } ;
	struct<3> Local_86 = { 0, 0, 0 } ;
	struct<3> Local_87 = { 0, 0, 0 } ;
	float fLocal_88 = 0f;
	float fLocal_89 = 0f;
	float fLocal_90 = 0f;
	float fLocal_91 = 0f;
	float fLocal_92 = 0f;
	float fLocal_93 = 0f;
	float fLocal_94 = 0f;
	float fLocal_95 = 0f;
	struct<3> Local_96 = { 0, 0, 0 } ;
	struct<3> Local_97 = { 0, 0, 0 } ;
	float fLocal_98 = 0f;
	char* sLocal_99 = NULL;
	char* sLocal_100 = NULL;
	struct<10> Local_101[16];
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	char* sLocal_106 = NULL;
	char* sLocal_107 = NULL;
	char* sLocal_108 = NULL;
	char* sLocal_109 = NULL;
	char* sLocal_110 = NULL;
	char* sLocal_111 = NULL;
	char* sLocal_112 = NULL;
	char[] cLocal_113[8] = 0;
	int iLocal_114 = 0;
	bool bLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	var uLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	char* sLocal_125 = NULL;
	char* sLocal_126 = NULL;
	char* sLocal_127 = NULL;
	char* sLocal_128 = NULL;
	struct<3> Local_129 = { 0, 0, 0 } ;
	struct<3> Local_130 = { 0, 0, 0 } ;
	int iLocal_131 = 0;
	struct<3> Local_132 = { 0, 0, 0 } ;
	struct<3> Local_133 = { 0, 0, 0 } ;
	struct<3> Local_134 = { 0, 0, 0 } ;
	struct<3> Local_135 = { 0, 0, 0 } ;
	int iLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = -1;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 1000;
	var uLocal_147 = 1000;
	var uLocal_148 = 0;
	bool bLocal_149 = 0;
	struct<18> Local_150 = { 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5 } ;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	struct<3> Var0;
	int iVar1;
	
	iLocal_3 = 3;
	iLocal_4 = 1;
	iLocal_5 = 134;
	iLocal_6 = 134;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 1;
	iLocal_10 = 134;
	iLocal_11 = 1;
	iLocal_12 = 12;
	iLocal_13 = 12;
	fLocal_16 = 0.001f;
	sLocal_19 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_51 = 10f;
	fLocal_52 = 7f;
	iLocal_53 = 1;
	sLocal_79 = "random@car_thief@waving_ig_1";
	fLocal_98 = 1f;
	iLocal_118 = 786603;
	iLocal_119 = 786469;
	sLocal_126 = "car_returned_peyote";
	sLocal_127 = "girl_car_returned";
	sLocal_128 = "player_car_returned";
	Local_49 = { ScriptParam_150.f_1[0 /*3*/] };
	uLocal_50 = ScriptParam_150.f_11[0];
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		func_220();
	}
	func_219();
	if (iLocal_120 == 2)
	{
		if (func_218(34))
		{
			SCRIPT::TERMINATE_THIS_THREAD();
		}
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				if (Var0.f_2 > 23f || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -743.3924f, -2129.82f, 12.07619f, -708.892f, -2160.705f, 19.7035f, 124.5f, 0, 1, 0))
				{
					SCRIPT::TERMINATE_THIS_THREAD();
				}
			}
		}
	}
	if (func_177(Local_49, 17, iLocal_120, 0, 0))
	{
		func_174(-1);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		func_173();
		func_172(uLocal_58, &uLocal_61);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::_0xC3376F42B1FACCC6(PLAYER::PLAYER_ID());
		}
		func_171();
		if (!func_170())
		{
			if (func_169())
			{
				func_220();
			}
			if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
			{
				switch (iLocal_45)
				{
					case 0:
						if (func_152())
						{
							PED::SET_CREATE_RANDOM_COPS(0);
							iLocal_45 = 1;
						}
						break;
					
					case 1:
						if (!PED::IS_PED_INJURED(iLocal_71))
						{
							if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(iLocal_70)) && func_151(iLocal_72)) && !func_150(0))
							{
								if (func_149())
								{
									if (func_151(iLocal_75))
									{
										VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iLocal_75, 0);
									}
									func_140(1);
									PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
									func_135(39, 1);
									func_135(40, 1);
									func_135(41, 1);
									func_135(42, 1);
									func_135(43, 1);
									SYSTEM::SETTIMERA(0);
								}
							}
							else
							{
								if (!PED::IS_PED_INJURED(iLocal_70))
								{
									TASK::TASK_SMART_FLEE_PED(iLocal_70, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
									PED::SET_PED_KEEP_TASK(iLocal_70, 1);
									SYSTEM::WAIT(0);
								}
								func_220();
							}
						}
						else
						{
							if (!PED::IS_PED_INJURED(iLocal_70) && func_151(iLocal_72))
							{
								TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_70, iLocal_72, 20f, iLocal_118);
								PED::SET_PED_KEEP_TASK(iLocal_70, 1);
								SYSTEM::WAIT(0);
							}
							func_103(0);
						}
						break;
				}
			}
			else
			{
				func_220();
			}
		}
		else
		{
			if (PED::IS_PED_INJURED(iLocal_71))
			{
				if (Local_101[2 /*10*/].f_7)
				{
					func_102(&Local_101, 2);
				}
			}
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
			func_94();
			if (func_151(iLocal_72) && !func_93())
			{
				if (func_91())
				{
					if (!PED::IS_PED_INJURED(iLocal_70))
					{
						switch (iLocal_46)
						{
							case 0:
								if (!PED::IS_PED_INJURED(iLocal_71))
								{
									if (PED::IS_PED_IN_VEHICLE(iLocal_71, iLocal_72, 0))
									{
										if (iLocal_120 == 2)
										{
											ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_71, 1);
											ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_72, 1);
											TASK::OPEN_SEQUENCE_TASK(&uLocal_73);
											TASK::TASK_VEHICLE_MISSION_PED_TARGET(0, iLocal_72, PLAYER::PLAYER_PED_ID(), 8, 30f, iLocal_119, 200f, 10f, 0);
											TASK::CLOSE_SEQUENCE_TASK(uLocal_73);
											TASK::TASK_PERFORM_SEQUENCE(iLocal_71, uLocal_73);
											TASK::CLEAR_SEQUENCE_TASK(&uLocal_73);
										}
										else
										{
											ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_71, 1);
											TASK::OPEN_SEQUENCE_TASK(&uLocal_73);
											TASK::TASK_VEHICLE_TEMP_ACTION(0, iLocal_72, 30, 1000);
											TASK::TASK_VEHICLE_MISSION_PED_TARGET(0, iLocal_72, PLAYER::PLAYER_PED_ID(), 8, 40f, iLocal_119, 200f, 10f, 1);
											TASK::CLOSE_SEQUENCE_TASK(uLocal_73);
											TASK::TASK_PERFORM_SEQUENCE(iLocal_71, uLocal_73);
											TASK::CLEAR_SEQUENCE_TASK(&uLocal_73);
										}
										Local_132 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iLocal_72, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_72, "wheel_lr")) };
										Local_133 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_72, Local_132) };
										GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_wheel_burnout", iLocal_72, Local_133 + Vector(-0.5f, -1f, 0f), 0f, 180f, 0f, 0.25f, 0, 0, 0);
										Local_134 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iLocal_72, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_72, "wheel_rr")) };
										Local_135 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_72, Local_134) };
										GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_wheel_burnout", iLocal_72, Local_135 + Vector(-0.5f, -1f, 0f), 0f, 180f, 0f, 0.25f, 0, 0, 0);
										SYSTEM::SETTIMERA(0);
										if (!HUD::DOES_BLIP_EXIST(uLocal_59))
										{
											uLocal_59 = func_89(iLocal_72, 1, 0);
										}
										MISC::SET_INSTANCE_PRIORITY_HINT(2);
										iLocal_46 = 1;
									}
									else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_72, PLAYER::PLAYER_PED_ID(), 1))
									{
										if (!PED::IS_PED_INJURED(iLocal_71))
										{
											TASK::TASK_SMART_FLEE_PED(iLocal_71, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
											PED::SET_PED_KEEP_TASK(iLocal_71, 1);
											SYSTEM::WAIT(0);
										}
										func_220();
									}
								}
								else
								{
									TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_70, iLocal_72, 20f, iLocal_118);
									PED::SET_PED_KEEP_TASK(iLocal_70, 1);
									SYSTEM::WAIT(0);
									func_103(0);
								}
								break;
							
							case 1:
								if (func_151(iLocal_72))
								{
									if (iLocal_120 == 1)
									{
										if (SYSTEM::TIMERA() < 5000)
										{
											if (SYSTEM::TIMERA() > 2000)
											{
												fLocal_98 = (fLocal_98 + 0.4f);
											}
											else
											{
												fLocal_98 = (fLocal_98 + 0.2f);
											}
											if (fLocal_98 > 30f)
											{
												fLocal_98 = 30f;
											}
											VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_72, fLocal_98);
											iVar1 = VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(iLocal_72, 1), 5f, 0, 4);
											if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
											{
												if (func_151(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
												{
													if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), iLocal_72))
													{
														SYSTEM::SETTIMERA(5000);
													}
												}
												if (func_151(iVar1))
												{
													if (iVar1 != iLocal_72)
													{
														if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar1, iLocal_72))
														{
															SYSTEM::SETTIMERA(5000);
														}
													}
												}
											}
										}
									}
									if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_72) < 700f)
									{
										func_220();
									}
								}
								func_66();
								if ((((((func_65() || func_64()) || ENTITY::IS_ENTITY_UPSIDEDOWN(iLocal_72)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_72, 1, 5000)) || FIRE::IS_ENTITY_ON_FIRE(iLocal_72)) || PED::IS_PED_INJURED(iLocal_71)) || !PED::IS_PED_IN_VEHICLE(iLocal_71, iLocal_72, 0))
								{
									if (AUDIO::IS_AUDIO_SCENE_ACTIVE("RE_CAR_STEAL_SCENE"))
									{
										if (func_151(iLocal_72))
										{
											AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_72, 0);
										}
										AUDIO::STOP_AUDIO_SCENE("RE_CAR_STEAL_SCENE");
									}
									if (HUD::DOES_BLIP_EXIST(uLocal_59))
									{
										HUD::REMOVE_BLIP(&uLocal_59);
									}
									func_63();
									if (HUD::DOES_BLIP_EXIST(uLocal_58))
									{
										HUD::REMOVE_BLIP(&uLocal_58);
									}
									ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_70);
									VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_72, 50f, 5, 0);
									uLocal_60 = func_89(iLocal_72, 0, 0);
									fLocal_92 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_72, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
									fLocal_90 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_72, 1), ENTITY::GET_ENTITY_COORDS(iLocal_70, 1));
									fLocal_91 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_70, 1));
									func_61(&uLocal_137, 0, 0);
									iLocal_46 = 2;
								}
								break;
							
							case 2:
								if (func_151(iLocal_72))
								{
									if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_72) < 700f)
									{
										func_220();
									}
								}
								if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
								{
									func_220();
								}
								if (!ENTITY::IS_ENTITY_DEAD(iLocal_71))
								{
									if (!PED::IS_PED_IN_VEHICLE(iLocal_71, iLocal_72, 0))
									{
										func_60(iLocal_71, &uLocal_62, -1, 0, 0, 0, -1082130432, 0);
									}
								}
								else
								{
									func_59(&uLocal_62);
								}
								if (!PED::IS_PED_INJURED(iLocal_71))
								{
									if (!PED::IS_PED_IN_COMBAT(iLocal_71, PLAYER::PLAYER_PED_ID()))
									{
										TASK::TASK_COMBAT_PED(iLocal_71, PLAYER::PLAYER_PED_ID(), 0, 16);
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(iLocal_71));
									}
								}
								if ((SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_72, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > (fLocal_92 + 220f) || SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_72, 1), ENTITY::GET_ENTITY_COORDS(iLocal_70, 1)) > (fLocal_90 + 220f)) || SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_70, 1)) > (fLocal_91 + 220f))
								{
									if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_72, 0))
									{
										func_103(0);
									}
									else
									{
										func_220();
									}
								}
								if (HUD::DOES_BLIP_EXIST(uLocal_60))
								{
									if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_72, 0))
									{
										HUD::REMOVE_BLIP(&uLocal_60);
										uLocal_58 = func_55(iLocal_70, 0, 0);
										func_54(&uLocal_61);
										func_61(&uLocal_137, 0, 0);
										if (!iLocal_55)
										{
											if (iLocal_120 == 1)
											{
												Local_84 = { -2258.759f, 4274.059f, 45.9166f };
											}
											else if (bLocal_56)
											{
												Local_84 = { -483.4162f, -2160.874f, 8.359f };
											}
											else
											{
												Local_84 = { -485.9905f, -2153.542f, 8.1999f };
											}
											if (!CAM::IS_SPHERE_VISIBLE(Local_84, 2f) && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_70))
											{
												ENTITY::SET_ENTITY_COORDS(iLocal_70, Local_84, 1, 0, 0, 1);
												ENTITY::SET_ENTITY_HEADING(iLocal_70, fLocal_89);
												iLocal_55 = 1;
											}
										}
										iLocal_47 = 3;
										iLocal_123 = MISC::GET_GAME_TIMER();
									}
									else if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_72, iLocal_70, 20f, 20f, 7f, 0, 1, 0))
									{
										func_53();
										if (func_52())
										{
											if (VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(iLocal_70, iLocal_72, -1, 0, 0))
											{
												if (!bLocal_115)
												{
													if (func_42(&Local_101, cLocal_113, sLocal_109, 4, 0, 0, 0))
													{
													}
												}
												TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_70, iLocal_72, 35f, iLocal_118);
												PED::SET_PED_KEEP_TASK(iLocal_70, 1);
												func_103(1);
											}
										}
									}
								}
								else if (HUD::DOES_BLIP_EXIST(uLocal_58))
								{
									if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_72, 0))
									{
										if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_70, fLocal_51, fLocal_51, fLocal_51, 0, 1, 0))
										{
											if (func_41(1, 0, 1))
											{
												HUD::REMOVE_BLIP(&uLocal_58);
												if (iLocal_120 == 1)
												{
													if (func_40(ENTITY::GET_ENTITY_HEADING(iLocal_72), 336f, 90f))
													{
														sLocal_125 = "RANDOM@CAR_THEFT_1@MCS_2";
													}
													else
													{
														sLocal_125 = "RANDOM@CAR_THEFT_1@MCS_2";
													}
												}
												else
												{
													sLocal_125 = "RANDOM@CAR_THEFT_1@MCS_3";
												}
												STREAMING::REQUEST_ANIM_DICT(sLocal_125);
												iLocal_47 = 4;
												iLocal_46 = 3;
											}
										}
										else
										{
											func_38(ENTITY::GET_ENTITY_COORDS(iLocal_70, 1), &fLocal_51, &fLocal_52);
										}
									}
									else
									{
										HUD::REMOVE_BLIP(&uLocal_58);
										uLocal_60 = func_89(iLocal_72, 0, 0);
										iLocal_47 = 0;
									}
								}
								break;
							
							case 3:
								if (iLocal_120 == 1)
								{
									if (func_4())
									{
										if (func_3(iLocal_70))
										{
											PED::SET_PED_RESET_FLAG(iLocal_70, 310, 1);
										}
										func_103(1);
									}
								}
								else if (func_4())
								{
									if (func_3(iLocal_70))
									{
										PED::SET_PED_RESET_FLAG(iLocal_70, 310, 1);
									}
									func_103(1);
								}
								break;
						}
					}
					else
					{
						if (!PED::IS_PED_INJURED(iLocal_71))
						{
							if (PED::IS_PED_IN_VEHICLE(iLocal_71, iLocal_72, 0))
							{
								TASK::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_71, iLocal_72, PLAYER::PLAYER_PED_ID(), 8, 50f, iLocal_119, 10f, 10f, 0);
								PED::SET_PED_KEEP_TASK(iLocal_71, 1);
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(iLocal_71));
							}
							else
							{
								TASK::TASK_SMART_FLEE_PED(iLocal_71, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
								PED::SET_PED_KEEP_TASK(iLocal_71, 1);
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(iLocal_71));
							}
						}
						SYSTEM::WAIT(0);
						func_220();
					}
				}
				else
				{
					if (iLocal_46 == 1)
					{
						if (func_151(iLocal_72))
						{
							VEHICLE::DELETE_VEHICLE(&iLocal_72);
						}
						if (!PED::IS_PED_INJURED(iLocal_71))
						{
							PED::DELETE_PED(&iLocal_71);
						}
					}
					if (!PED::IS_PED_INJURED(iLocal_70))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_70, sLocal_78, "agitated_idle_a", 3))
						{
							ENTITY::STOP_ENTITY_ANIM(iLocal_70, "waiting", sLocal_78, -2f);
						}
						func_1(iLocal_70, "GENERIC_CURSE_HIGH", 24);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_73);
						TASK::TASK_GO_STRAIGHT_TO_COORD(0, Local_87, 1f, 20000, 40000f, 1056964608);
						TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_STAND_MOBILE", 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_73);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_70, uLocal_73);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_73);
					}
					func_220();
				}
			}
			else
			{
				if (!PED::IS_PED_INJURED(iLocal_71))
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_71, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
					PED::SET_PED_KEEP_TASK(iLocal_71, 1);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_72))
				{
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_72, 50f);
				}
				func_220();
			}
		}
	}
}

void func_1(int iParam0, char* sParam1, int iParam2)//Position - 0xB73
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, sParam1, func_2(iParam2), 1);
}

int func_2(int iParam0)//Position - 0xB8A
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

int func_3(int iParam0)//Position - 0xD7F
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_4()//Position - 0xD9F
{
	struct<3> Var0;
	char* sVar1;
	struct<3> Var2;
	float fVar3;
	
	sVar1 = "chassis";
	func_53();
	if (((!PED::IS_PED_INJURED(iLocal_70) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && func_151(iLocal_72)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_125))
	{
		switch (iLocal_48)
		{
			case 0:
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					if (func_41(1, 0, 1))
					{
						if (!MISC::IS_BIT_SET(Global_8D7, 11))
						{
							if (!PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
							{
								func_31(1, 1, 1, 0);
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
								{
									HUD::CLEAR_HELP(1);
									while (!func_30(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), fLocal_52, 1, 1056964608, 0, 1))
									{
										HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
										SYSTEM::WAIT(0);
									}
									func_30(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), fLocal_52, 0, 1056964608, 0, 1);
								}
								HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
								if (!PED::IS_PED_INJURED(iLocal_70))
								{
									PED::SET_PED_CAN_RAGDOLL(iLocal_70, 0);
								}
								func_28();
								func_23();
								HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
								iLocal_48 = 1;
							}
						}
					}
				}
				break;
			
			case 1:
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
				VEHICLE::SET_VEHICLE_DOOR_CONTROL(iLocal_72, 0, 0, 0f);
				VEHICLE::SET_VEHICLE_DOOR_LATCHED(iLocal_72, 0, 1, 1, 1);
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				if (iLocal_120 == 1)
				{
					if (func_151(iLocal_72))
					{
						if (func_40(ENTITY::GET_ENTITY_HEADING(iLocal_72), 336f, 90f))
						{
							Local_83 = { -2254.3f, 4273.361f, 44.9697f };
							fLocal_88 = 336.6557f;
							Local_82 = { -2252.683f, 4274.16f, 45.0612f };
							Local_84 = { -2257.825f, 4269.189f, 44.6334f };
							fLocal_89 = 272.8688f;
							Local_96 = { -2254.588f, 4277.307f, 45.6133f };
							Local_97 = { 6.6248f, 0.0369f, 179.5595f };
						}
						else
						{
							Local_83 = { -2254.223f, 4272.33f, 44.9193f };
							fLocal_88 = 148.0287f;
							Local_84 = { -2255.733f, 4271.32f, 44.8166f };
							fLocal_89 = 179.4774f;
							Local_82 = { -2257.088f, 4268.938f, 44.6456f };
							Local_96 = { -2255.775f, 4274.144f, 46.0666f };
							Local_97 = { 2.8781f, 0.3464f, -146.6097f };
						}
					}
					Var2 = { -2269.34f, 4279.89f, 45.47f };
					fVar3 = 53.23f;
					fLocal_95 = 50f;
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_82, 1, 0, 0, 1);
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
					ENTITY::SET_ENTITY_COORDS(iLocal_70, Local_84, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_72, fLocal_88);
					ENTITY::SET_ENTITY_COORDS(iLocal_72, Local_83, 1, 0, 0, 1);
				}
				else
				{
					if (!func_40(ENTITY::GET_ENTITY_HEADING(iLocal_72), 64.6764f, 90f))
					{
						Local_96 = { -478.7095f, -2163.598f, 10.3091f };
						Local_97 = { -7.4391f, 0.0006f, 35.6865f };
						Local_83 = { -484.9581f, -2155.266f, 8.248f };
						fLocal_88 = 243.308f;
						fLocal_95 = 22f;
					}
					else
					{
						Local_96 = { -488.0143f, -2149.419f, 9.9817f };
						Local_97 = { -11.7475f, 0.0006f, -145.0045f };
						Local_83 = { -484.3195f, -2154.188f, 8.2182f };
						fLocal_88 = 64.6764f;
						fLocal_95 = 36.9289f;
					}
					Var2 = { -486.92f, -2169.01f, 8.89f };
					fVar3 = 63.1f;
					ENTITY::SET_ENTITY_COORDS(iLocal_72, Local_83, 1, 0, 0, 1);
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_72, fLocal_88);
				}
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
				if (func_151(iLocal_72))
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_72);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_71))
					{
						if (PED::IS_PED_IN_VEHICLE(iLocal_71, iLocal_72, 0))
						{
							PED::DELETE_PED(&iLocal_71);
						}
					}
				}
				Local_129 = { 0f, 0f, 0f };
				Local_130 = { 0f, 0f, 0f };
				uLocal_121 = PED::CREATE_SYNCHRONIZED_SCENE(Local_129, Local_130, 2);
				PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_121, iLocal_72, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_72, sVar1));
				PED::SET_SYNCHRONIZED_SCENE_ORIGIN(uLocal_121, Local_129, Local_130, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_70, uLocal_121, sLocal_125, sLocal_127, 1000f, -2f, 0, 0, 1148846080, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_121, sLocal_125, sLocal_128, 1000f, -2f, 1024, 0, 1148846080, 0);
				uLocal_74 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_ANIMATED_CAMERA", Local_96, Local_97, fLocal_95, 0, 2);
				CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_74, uLocal_121, "car_returned_cam", sLocal_125);
				ENTITY::PLAY_ENTITY_ANIM(iLocal_72, sLocal_126, sLocal_125, 1000f, 0, 0, 0, 0, 262144);
				Local_129 = { ENTITY::GET_ENTITY_COORDS(iLocal_72, 1) };
				Local_130 = { ENTITY::GET_ENTITY_ROTATION(iLocal_72, 2) };
				if (func_151(iLocal_75))
				{
					if (func_22(iLocal_75, Local_83, 1) <= 11f)
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_75, Var2, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(iLocal_75, fVar3);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_75);
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_75, 1, 0);
					}
				}
				MISC::CLEAR_AREA(Local_83, 10f, 1, 0, 0, 0);
				SYSTEM::SETTIMERA(0);
				if (iLocal_120 == 2)
				{
					VEHICLE::REQUEST_VEHICLE_ASSET(joaat("rocoto"), 15);
				}
				else
				{
					VEHICLE::REQUEST_VEHICLE_ASSET(joaat("peyote"), 15);
				}
				FIRE::STOP_FIRE_IN_RANGE(Local_83, 15f);
				CAM::SET_CAM_ACTIVE(uLocal_74, 1);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				iLocal_48 = 3;
				STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
				break;
			
			case 3:
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				if (func_19())
				{
					iLocal_48 = 4;
				}
				if (iLocal_120 == 1)
				{
					if (SYSTEM::TIMERA() > 1500 && !bLocal_149)
					{
						if (func_42(&Local_101, cLocal_113, sLocal_100, 4, 0, 0, 0))
						{
							iLocal_48 = 4;
						}
					}
				}
				else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_121) && !bLocal_149)
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_121) >= 0.2f)
					{
						if (func_42(&Local_101, cLocal_113, sLocal_100, 4, 0, 0, 0))
						{
							iLocal_57 = 0;
							iLocal_48 = 4;
						}
					}
				}
				STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
				break;
			
			case 4:
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				if (iLocal_120 == 2)
				{
					if (!func_18())
					{
						if (iLocal_57 == 0)
						{
							if (func_42(&Local_101, cLocal_113, "RECT2_REWARD", 4, 0, 0, 0))
							{
								iLocal_57 = 1;
							}
						}
					}
				}
				STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
				if (iLocal_120 == 1)
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_121))
					{
						if (iLocal_131 == 0)
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_121) >= 0.83f)
							{
								TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
								TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_125, sLocal_128, 1000f, -2f, -1, 1048576, PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_121), 0, 0, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 1, 0);
								iLocal_131 = 1;
							}
						}
						if (!PED::IS_PED_INJURED(iLocal_70))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_121) >= 0.83f)
							{
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_70, sLocal_125, sLocal_127, 2))
								{
									ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_70, -1000f, 0);
									if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_70, 0))
									{
										if (func_151(iLocal_72))
										{
											PED::SET_PED_INTO_VEHICLE(iLocal_70, iLocal_72, -1);
											PED::SET_PED_RESET_FLAG(iLocal_70, 310, 1);
										}
									}
									PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_70, 1, 0);
								}
								else
								{
									PED::SET_PED_RESET_FLAG(iLocal_70, 310, 1);
								}
							}
						}
					}
				}
				else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_121))
				{
					if (iLocal_131 == 0)
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_121) >= 0.86f)
						{
							TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
							TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_125, sLocal_128, 1000f, -2f, -1, 1048576, PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_121), 0, 0, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 1, 0);
							iLocal_131 = 1;
						}
					}
					if (!PED::IS_PED_INJURED(iLocal_70))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_121) > 0.847f)
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_70, sLocal_125, sLocal_127, 2))
							{
								ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_70, -1000f, 0);
								if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_70, 0))
								{
									if (func_151(iLocal_72))
									{
										PED::SET_PED_INTO_VEHICLE(iLocal_70, iLocal_72, -1);
										PED::SET_PED_RESET_FLAG(iLocal_70, 310, 1);
									}
								}
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_70, 1, 0);
							}
							else
							{
								PED::SET_PED_RESET_FLAG(iLocal_70, 310, 1);
							}
						}
					}
				}
				if (((PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_121) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_121) >= 0.99f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_121)) || func_19())
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_72) && ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_72, sLocal_125, sLocal_126, 3))
					{
						ENTITY::SET_ENTITY_ANIM_CURRENT_TIME(iLocal_72, sLocal_125, sLocal_126, 1f);
					}
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_121))
					{
						PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_121, 1f);
					}
					if (bLocal_149)
					{
						Var0 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_125, sLocal_128, Local_129, Local_130, 1f, 2) };
						MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &(Var0.f_2));
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0, 1, 0, 0, 1);
						Var0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(sLocal_125, sLocal_128, Local_129, Local_130, 1f, 2) };
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Var0.f_2);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
					}
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -1871534317, 1, 0, 1);
					if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_70, 0))
					{
						if (func_151(iLocal_72))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_70, iLocal_72, -1);
							PED::SET_PED_RESET_FLAG(iLocal_70, 310, 1);
						}
					}
					if (!PED::IS_PED_INJURED(iLocal_70))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_70, 0))
						{
							if (func_151(iLocal_72))
							{
								VEHICLE::SET_VEHICLE_DOOR_CONTROL(iLocal_72, 0, 0, 0f);
								VEHICLE::SET_VEHICLE_DOOR_LATCHED(iLocal_72, 0, 1, 1, 1);
								iLocal_124 = MISC::GET_GAME_TIMER();
								iLocal_48 = 5;
							}
						}
					}
				}
				break;
			
			case 5:
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				if ((MISC::GET_GAME_TIMER() - iLocal_124) > 100)
				{
					if (func_3(iLocal_70) && func_151(iLocal_72))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_73);
						TASK::TASK_VEHICLE_TEMP_ACTION(0, iLocal_72, 9, 1000);
						TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_72, 25f, iLocal_118);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_73);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_70, uLocal_73);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_73);
						PED::SET_PED_RESET_FLAG(iLocal_70, 310, 1);
					}
					func_31(0, 1, 1, 0);
					if (bLocal_149)
					{
						if (CAM::DOES_CAM_EXIST(uLocal_74))
						{
							CAM::SET_CAM_ACTIVE(uLocal_74, 0);
							CAM::DESTROY_CAM(uLocal_74, 0);
						}
						CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
						SYSTEM::WAIT(750);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
						func_17(500, 1);
					}
					else
					{
						CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0, 3, 0);
						CAM::SET_CAM_ACTIVE(uLocal_74, 0);
					}
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
					func_16(&iLocal_72);
					func_5(func_10(), 4, 5);
					return 1;
				}
				else if (func_3(iLocal_70))
				{
					PED::SET_PED_RESET_FLAG(iLocal_70, 310, 1);
				}
				break;
			}
	}
	return 0;
}

void func_5(int iParam0, int iParam1, int iParam2)//Position - 0x179E
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
				iVar0 = func_9(iVar1, -1, 0);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_6(iVar1, iVar0, -1, 1);
			}
			break;
	}
}

void func_6(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x188D
{
	int iVar0;
	
	iVar0 = Global_25744D[iParam0 /*6*/][func_7(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_7(var uParam0)//Position - 0x18B8
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_8();
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

int func_8()//Position - 0x18EC
{
	return Global_1407E1;
}

int func_9(int iParam0, int iParam1, int iParam2)//Position - 0x18F8
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_25744D[iParam0 /*6*/][func_7(iParam1)];
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_10()//Position - 0x192A
{
	func_11();
	return Global_17C49.f_6C1.f_21B.f_C8D;
}

void func_11()//Position - 0x1943
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_15(Global_17C49.f_6C1.f_21B.f_C8D) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_14(PLAYER::PLAYER_PED_ID());
			if (func_13(iVar0) && (!func_12(14) || Global_17832))
			{
				if (Global_17C49.f_6C1.f_21B.f_C8D != iVar0 && func_13(Global_17C49.f_6C1.f_21B.f_C8D))
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

bool func_12(int iParam0)//Position - 0x1A40
{
	return Global_8861 == iParam0;
}

bool func_13(int iParam0)//Position - 0x1A4E
{
	return iParam0 < 3;
}

int func_14(int iParam0)//Position - 0x1A5A
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_15(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_15(int iParam0)//Position - 0x1A97
{
	if (func_13(iParam0))
	{
		return Global_17C49.f_744E[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_16(int iParam0)//Position - 0x1AC1
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

void func_17(int iParam0, bool bParam1)//Position - 0x1AF8
{
	if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
	{
		if (!CAM::IS_SCREEN_FADING_IN())
		{
			CAM::DO_SCREEN_FADE_IN(iParam0);
		}
	}
	if (bParam1)
	{
		while (!CAM::IS_SCREEN_FADED_IN())
		{
			SYSTEM::WAIT(0);
		}
	}
}

int func_18()//Position - 0x1B34
{
	if (Global_3D4C != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

int func_19()//Position - 0x1B56
{
	int iVar0;
	
	iVar0 = joaat("peyote");
	if (iLocal_120 == 2)
	{
		iVar0 = joaat("rocoto");
	}
	if (func_20(1000))
	{
		if (VEHICLE::HAS_VEHICLE_ASSET_LOADED(iVar0))
		{
			CAM::SET_CAM_ACTIVE(uLocal_74, 0);
			CAM::DO_SCREEN_FADE_OUT(500);
			while (CAM::IS_SCREEN_FADING_OUT())
			{
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				SYSTEM::WAIT(0);
			}
			bLocal_149 = true;
			return 1;
		}
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		if (VEHICLE::HAS_VEHICLE_ASSET_LOADED(iVar0))
		{
			bLocal_149 = true;
			return 1;
		}
	}
	return 0;
}

int func_20(int iParam0)//Position - 0x1BC8
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
			if (func_21())
			{
				Global_1A = MISC::GET_GAME_TIMER();
				return 1;
			}
		}
	}
	return 0;
}

int func_21()//Position - 0x1C12
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

float func_22(int iParam0, struct<3> Param1, int iParam2)//Position - 0x1C44
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

void func_23()//Position - 0x1C7D
{
	if (!Global_3839.f_1 == 1)
	{
		if (func_27(0))
		{
			func_24(0);
		}
		MISC::SET_BIT(&Global_8D8, 2);
	}
}

void func_24(int iParam0)//Position - 0x1CA5
{
	if (Global_38D7)
	{
		func_26(0, 0);
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
	if (!func_25())
	{
		Global_3839.f_1 = 3;
	}
}

int func_25()//Position - 0x1D15
{
	if (Global_3839.f_1 == 1 || Global_3839.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_26(bool bParam0, bool bParam1)//Position - 0x1D3C
{
	if (bParam0)
	{
		if (func_27(0))
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

int func_27(int iParam0)//Position - 0x1DB0
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

void func_28()//Position - 0x1E0A
{
	Global_38DE = 0;
	func_29();
}

void func_29()//Position - 0x1E1A
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_413F = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_3D4C = 6;
	}
}

int func_30(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5)//Position - 0x1E3B
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
		VEHICLE::BRING_VEHICLE_TO_HALT(iParam0, fParam1, iParam2, iParam4);
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

void func_31(bool bParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x1FBD
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID());
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
		func_37(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_3839.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(0);
			}
			if (!func_25())
			{
				Global_3839.f_1 = 3;
			}
			Global_3D4C = 5;
		}
		func_36(1, iParam3, iParam2);
		Global_D5E4 = 1;
		Global_105F5 = 1;
		Global_10A93 = 1;
	}
	else
	{
		func_37(0);
		HUD::THEFEED_RESUME();
		Global_D5E4 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
		func_36(0, iParam3, iParam2);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_32(PLAYER::PLAYER_ID()))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
		}
		Global_10A93 = 0;
	}
}

int func_32(int iParam0)//Position - 0x208E
{
	if (func_34(iParam0, 0))
	{
		return 1;
	}
	if (func_33())
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

bool func_33()//Position - 0x20CF
{
	return MISC::IS_BIT_SET(Global_240005, 3);
}

bool func_34(int iParam0, int iParam1)//Position - 0x20E0
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_35(-1, 0) == 8;
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

int func_35(int iParam0, bool bParam1)//Position - 0x212B
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_8();
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

int func_36(int iParam0, var uParam1, var uParam2)//Position - 0x216C
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

void func_37(int iParam0)//Position - 0x219D
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

void func_38(struct<3> Param0, float fParam1, float fParam2)//Position - 0x21C0
{
	bool bVar0;
	struct<3> Var1;
	float fVar2;
	
	bVar0 = false;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - Param0 };
		fVar2 = MISC::GET_HEADING_FROM_VECTOR_2D(Var1.x, Var1.f_1);
		if (func_39(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), fVar2, 15f))
		{
			bVar0 = true;
		}
		Var1 = { Param0 - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		fVar2 = MISC::GET_HEADING_FROM_VECTOR_2D(Var1.x, Var1.f_1);
		if (func_39(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), fVar2, 15f))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 30f)
		{
			*fParam1 = (6f * 4f);
		}
		else if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 20f)
		{
			*fParam1 = (6f * 3f);
		}
		else if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 10f)
		{
			*fParam1 = (6f * 2f);
		}
		else
		{
			*fParam1 = 6f;
		}
		*fParam2 = ((*fParam1 / 1.33f) - 1f);
	}
	else
	{
		*fParam1 = 6f;
		*fParam2 = ((*fParam1 / 1.33f) - 1f);
	}
}

int func_39(int iParam0, float fParam1, float fParam2)//Position - 0x22C1
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		fVar0 = ENTITY::GET_ENTITY_HEADING(iParam0);
		fVar2 = (fParam1 - fParam2);
		if (fVar2 < 0f)
		{
			fVar2 = (fVar2 + 360f);
		}
		fVar1 = (fParam1 + fParam2);
		if (fVar1 >= 360f)
		{
			fVar1 = (fVar1 - 360f);
		}
		if (fVar1 > fVar2)
		{
			if (fVar0 < fVar1 && fVar0 > fVar2)
			{
				return 1;
			}
		}
		else if (fVar0 < fVar1 || fVar0 > fVar2)
		{
			return 1;
		}
	}
	return 0;
}

int func_40(float fParam0, float fParam1, float fParam2)//Position - 0x2348
{
	float fVar0;
	float fVar1;
	
	fVar1 = (fParam1 - fParam2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar0 = (fParam1 + fParam2);
	if (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 > fVar1)
	{
		if (fParam0 < fVar0 && fParam0 > fVar1)
		{
			return 1;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1)
	{
		return 1;
	}
	return 0;
}

int func_41(bool bParam0, bool bParam1, bool bParam2)//Position - 0x23BD
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

bool func_42(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x249D
{
	func_51(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_43(sParam2, iParam3, 0);
}

int func_43(char* sParam0, int iParam1, bool bParam2)//Position - 0x24EB
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
					func_50();
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
		if (func_49(8, -1))
		{
			return 0;
		}
		Global_3D98 = { Global_3D92 };
		func_48();
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
				func_47();
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
				if (func_46())
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
			if (func_25())
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
			func_45();
			Global_3D56 = bParam2;
		}
		Global_3D4E = iParam1;
		StringCopy(&Global_3BCF, sParam0, 24);
		Global_38DE = 0;
		func_44();
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
		func_50();
	}
	return 0;
}

void func_44()//Position - 0x27B7
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

void func_45()//Position - 0x27E9
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

int func_46()//Position - 0x287E
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

void func_47()//Position - 0x2917
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
		Global_3839 = func_10();
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

void func_48()//Position - 0x29B8
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

bool func_49(int iParam0, int iParam1)//Position - 0x2A10
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

void func_50()//Position - 0x2A4B
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

void func_51(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x2AA2
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

int func_52()//Position - 0x2AF8
{
	if (PED::IS_PED_INJURED(iLocal_71))
	{
		return 1;
	}
	else if (func_151(iLocal_72))
	{
		if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_71, iLocal_72, 10f, 10f, 10f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_53()//Position - 0x2B3C
{
	float fVar0;
	int iVar1;
	bool bVar2;
	
	if (func_151(iLocal_72))
	{
		fVar0 = VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_72);
		if (fVar0 > 0f && fVar0 < 650f)
		{
			bVar2 = true;
		}
		else if (fVar0 > 650f && fVar0 < 950f)
		{
		}
		else
		{
			iVar1 = 1;
		}
		if (iVar1 && VEHICLE::ARE_ALL_VEHICLE_WINDOWS_INTACT(iLocal_72))
		{
			sLocal_100 = sLocal_112;
		}
		else if (bVar2)
		{
			sLocal_100 = sLocal_111;
		}
		else
		{
			sLocal_100 = sLocal_110;
		}
	}
}

void func_54(var uParam0)//Position - 0x2BB7
{
	*uParam0 = -99;
}

var func_55(int iParam0, bool bParam1, int iParam2)//Position - 0x2BC5
{
	iParam2 = iParam2;
	return func_56(iParam0, bParam1, 145);
}

var func_56(var uParam0, bool bParam1, int iParam2)//Position - 0x2BDB
{
	var uVar0;
	
	uVar0 = func_57(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(uVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_17C49.f_744E[iParam2 /*29*/].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uVar0, &(Global_17C49.f_744E[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_57(int iParam0, bool bParam1, bool bParam2)//Position - 0x2C2D
{
	var uVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		return 0;
	}
	uVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_58(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		HUD::SET_BLIP_SCALE(uVar0, func_58(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_58(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_58(bool bParam0, float fParam1, float fParam2)//Position - 0x2CD1
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_59(var uParam0)//Position - 0x2CE8
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

int func_60(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, int iParam7)//Position - 0x2D56
{
	if (iParam3 == 0)
	{
		iParam3 = PLAYER::GET_PLAYER_INDEX();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!PED::IS_PED_INJURED(iParam0))
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
		HUD::SET_PED_AI_BLIP_FORCED_ON(iParam0, iParam4);
		HUD::SET_PED_AI_BLIP_HAS_CONE(iParam0, iParam5);
		*uParam1 = HUD::_GET_AI_BLIP_2(iParam0);
		if (!MISC::IS_BIT_SET(uParam1->f_6, 2))
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam7))
				{
					HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("MCUSTBLIP");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(iParam7);
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

void func_61(var uParam0, int iParam1, int iParam2)//Position - 0x2E75
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
		if (func_62(uParam0->f_3))
		{
			HUD::CLEAR_HELP(1);
		}
	}
	if (!MISC::IS_STRING_NULL(sVar0))
	{
		if (func_62(sVar0))
		{
			HUD::CLEAR_HELP(1);
		}
	}
}

bool func_62(char* sParam0)//Position - 0x2F52
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_63()//Position - 0x2F65
{
	if (!PED::IS_PED_INJURED(iLocal_71))
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_71, 2, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_71, 6, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_71, 3, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_71, 1, 0);
		TASK::TASK_COMBAT_PED(iLocal_71, PLAYER::PLAYER_PED_ID(), 0, 16);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_71, 0);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(iLocal_71));
	}
	else
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(iLocal_71));
	}
	if (func_151(iLocal_72))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_72, 1);
	}
}

int func_64()//Position - 0x2FD2
{
	if (func_151(iLocal_72))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_72, 40f, 40f, 10f, 0, 1, 0))
		{
			if (iLocal_76)
			{
				if (!PED::IS_PED_INJURED(iLocal_71))
				{
					if (!iLocal_117)
					{
						if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iLocal_72))
						{
							TASK::TASK_DRIVE_BY(iLocal_71, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 40f, 100, 1, -753768974);
							iLocal_117 = 1;
						}
					}
					if (MISC::GET_GAME_TIMER() > iLocal_122 + 7000)
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_72, 20f, 20f, 10f, 0, 1, 0))
						{
							if (func_42(&Local_101, cLocal_113, sLocal_108, 4, 0, 0, 0))
							{
								iLocal_122 = MISC::GET_GAME_TIMER();
							}
						}
					}
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_72);
					WEAPON::CLEAR_ENTITY_LAST_WEAPON_DAMAGE(iLocal_72);
					iLocal_76 = 0;
				}
			}
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_72, PLAYER::PLAYER_PED_ID(), 1))
			{
				if (!PED::IS_PED_INJURED(iLocal_71))
				{
					func_42(&Local_101, cLocal_113, sLocal_108, 4, 0, 0, 0);
				}
				iLocal_77++;
				iLocal_76 = 1;
			}
			if (iLocal_77 > 10)
			{
				return 1;
			}
		}
		else
		{
			iLocal_117 = 0;
			iLocal_76 = 0;
		}
	}
	return 0;
}

int func_65()//Position - 0x30DE
{
	if (func_151(iLocal_72))
	{
		if (((VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_72, 0, 0) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_72, 1, 0)) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_72, 4, 0)) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_72, 5, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_66()//Position - 0x3129
{
	if (func_151(iLocal_72) && HUD::DOES_BLIP_EXIST(uLocal_59))
	{
		func_67(&uLocal_137, iLocal_72, 0, 0, 1, 1, 1);
	}
}

void func_67(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x3153
{
	func_68(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_68(var uParam0, var uParam1, struct<3> Param2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0x3170
{
	func_69(uParam0, uParam1, Param2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_69(var uParam0, var uParam1, struct<3> Param2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0x318E
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
	{
		func_61(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_70(uParam0, uParam1, Param2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_70(var uParam0, int iParam1, struct<3> Param2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0x31C6
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
	if (func_62(iVar0))
	{
		func_88();
	}
	if (func_87(uParam1) && ENTITY::IS_ENTITY_VISIBLE(uParam1))
	{
		iVar1 = 0;
		if (ENTITY::IS_ENTITY_A_PED(uParam1))
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
			if (func_82(uParam0, bParam5, bParam7, 0))
			{
				func_78(uParam0, iParam1, Param2, iParam4);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_75(iVar0))
				{
					if ((MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0)) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if ((iVar1 && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam6)
						{
							if (!func_62(iVar0))
							{
								func_74(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
								{
									func_73(1);
								}
							}
						}
					}
				}
			}
			else if (func_75(iVar0))
			{
				if (MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0))
				{
					if (((ENTITY::IS_ENTITY_ON_SCREEN(iParam1) && iVar1) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam6)
					{
						if (!func_62(iVar0))
						{
							func_74(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
							{
								func_73(1);
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
				if (func_62(sParam3))
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
						func_61(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 4)
					{
						func_61(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 4)
					{
						func_61(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 4)
					{
						func_61(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 4)
					{
						func_61(uParam0, iVar0, 1);
					}
				}
				else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
				{
					func_61(uParam0, iVar0, 1);
				}
			}
			if (!func_82(uParam0, bParam5, bParam7, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_72(uParam0))
				{
					func_71(uParam0);
				}
			}
		}
	}
	else
	{
		func_61(uParam0, iVar0, 0);
	}
}

void func_71(var uParam0)//Position - 0x3533
{
	if (func_87(PLAYER::PLAYER_PED_ID()))
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

int func_72(var uParam0)//Position - 0x359C
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

int func_73(bool bParam0)//Position - 0x35C7
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

void func_74(char* sParam0, int iParam1)//Position - 0x3671
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

int func_75(char* sParam0)//Position - 0x3688
{
	if (!func_76(1, 1, 0))
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(sParam0) && func_62(sParam0)) || func_62("CMN_HINT"))
		{
			HUD::CLEAR_HELP(1);
		}
		return 0;
	}
	switch (Global_8861)
	{
		case 0:
		case 3:
			if (func_73(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_73(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_73(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_76(bool bParam0, bool bParam1, bool bParam2)//Position - 0x3721
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
	if (func_27(0))
	{
		return 0;
	}
	if (func_77())
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

bool func_77()//Position - 0x389D
{
	return MISC::GET_GAME_TIMER() <= Global_4354.f_140A + 100;
}

void func_78(var uParam0, int iParam1, struct<3> Param2, int iParam3)//Position - 0x38B2
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (ENTITY::IS_ENTITY_DEAD(uParam1))
	{
		func_61(uParam0, 0, 0);
	}
	if (func_81(Param2, 0f, 0f, 0f))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam1))
		{
			uVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
			if (!PED::IS_PED_IN_ANY_VEHICLE(uVar0, 0))
			{
				if (PED::IS_PED_A_PLAYER(iVar0))
				{
					if (!func_79())
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

bool func_79()//Position - 0x39B5
{
	return func_80(PLAYER::PLAYER_ID());
}

int func_80(var uParam0)//Position - 0x39C5
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(uParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_81(struct<3> Param0, struct<3> Param1)//Position - 0x39E4
{
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

int func_82(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x3A0D
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
					if (func_86(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_85(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_85(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_86(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_72(uParam0))
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
						if (!func_86(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = MISC::GET_GAME_TIMER();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_85(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_85(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_86(bParam1, bParam2, bParam3))
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
					if (!func_86(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_85(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_85(bParam1, bParam2, bParam3) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
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
				else if (!func_86(bParam1, bParam2, bParam3))
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
						if (func_84(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_83(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || func_83(bParam1, bParam2, bParam3))
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
					else if (func_84(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_72(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_76(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_88();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_83(bool bParam0, bool bParam1, bool bParam2)//Position - 0x3D79
{
	if (!func_76(bParam0, bParam1, bParam2))
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

int func_84(bool bParam0, bool bParam1, bool bParam2)//Position - 0x3DCB
{
	if (!func_76(bParam0, bParam1, bParam2))
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

int func_85(bool bParam0, bool bParam1, bool bParam2)//Position - 0x3E14
{
	if (!func_76(bParam0, bParam1, bParam2))
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

int func_86(bool bParam0, bool bParam1, bool bParam2)//Position - 0x3E73
{
	if (!func_76(bParam0, bParam1, bParam2))
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

int func_87(int iParam0)//Position - 0x3EC9
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
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

void func_88()//Position - 0x3F24
{
	MISC::SET_BIT(&Global_8D8, 4);
}

int func_89(int iParam0, bool bParam1, int iParam2)//Position - 0x3F34
{
	iParam2 = iParam2;
	return func_90(iParam0, bParam1, 0);
}

int func_90(var uParam0, bool bParam1, bool bParam2)//Position - 0x3F49
{
	return func_57(uParam0, !bParam1, bParam2);
}

int func_91()//Position - 0x3F5C
{
	float fVar0;
	
	fVar0 = 300f;
	if (iLocal_120 == 1)
	{
		fVar0 = 220f;
	}
	if (func_151(iLocal_72))
	{
		func_92(uLocal_59, iLocal_72, fVar0, 1061158912, 0);
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_72, fVar0, fVar0, 100f, 0, 1, 0))
		{
			return 1;
		}
		else if (!ENTITY::IS_ENTITY_OCCLUDED(iLocal_72))
		{
			return 1;
		}
	}
	return 0;
}

void func_92(var uParam0, int iParam1, float fParam2, float fParam3, int iParam4)//Position - 0x3FC1
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = (fParam2 * fParam3);
	if (HUD::DOES_BLIP_EXIST(uParam0))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iParam1) && ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_A_VEHICLE(iParam1))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1), 0))
				{
					fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iParam1, 1), 1);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = SYSTEM::ROUND((255f * ((fVar1 - fVar2) / (fParam2 - fVar2))));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						HUD::SET_BLIP_FLASHES(uParam0, 1);
						HUD::SET_BLIP_ALPHA(uParam0, (255 - iVar0));
					}
					else
					{
						HUD::SET_BLIP_FLASHES(uParam0, 0);
						HUD::SET_BLIP_ALPHA(uParam0, 255);
					}
				}
			}
			else if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1)))
				{
					fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iParam1, 1), 1);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = SYSTEM::ROUND(((255f * (fVar1 - fVar2)) / (fParam2 - fVar2)));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						HUD::SET_BLIP_FLASHES(uParam0, 1);
						HUD::SET_BLIP_ALPHA(uParam0, (255 - iVar0));
					}
					else
					{
						HUD::SET_BLIP_FLASHES(uParam0, 0);
						HUD::SET_BLIP_ALPHA(uParam0, 255);
					}
				}
			}
		}
	}
}

int func_93()//Position - 0x411E
{
	if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_72, 0) && VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(iLocal_72))
	{
		return 1;
	}
	return 0;
}

void func_94()//Position - 0x4144
{
	if (!PED::IS_PED_INJURED(iLocal_70) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		switch (iLocal_47)
		{
			case 0:
				iLocal_53 = iLocal_53;
				if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_70, 0))
				{
					if (iLocal_120 == 1)
					{
						if (func_101())
						{
							iLocal_47 = 1;
						}
					}
					else if (!PED::IS_PED_RAGDOLL(iLocal_70) && !TASK::IS_PED_GETTING_UP(iLocal_70))
					{
						TASK::TASK_LOOK_AT_ENTITY(iLocal_70, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -539.4566f, -2094.491f, 6.967173f, -468.4296f, -2152.549f, 18.99127f, 26.75f, 0, 1, 0))
						{
							TASK::TASK_ACHIEVE_HEADING(iLocal_70, 345f, 0);
							iLocal_47 = 1;
						}
						else
						{
							TASK::OPEN_SEQUENCE_TASK(&uLocal_73);
							TASK::TASK_PLAY_ANIM(0, sLocal_79, "arms_waving", 2f, -8f, -1, 0, 0, 0, 0, 0);
							TASK::TASK_PLAY_ANIM(0, sLocal_79, "arms_waving", 8f, -8f, -1, 0, 0, 0, 0, 0);
							TASK::TASK_PLAY_ANIM(0, sLocal_79, "arms_waving", 8f, -2f, -1, 0, 0, 0, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_73);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_70, uLocal_73);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_73);
							iLocal_123 = MISC::GET_GAME_TIMER();
							iLocal_47 = 2;
						}
					}
				}
				break;
			
			case 1:
				if (iLocal_120 == 1)
				{
					TASK::TASK_LOOK_AT_ENTITY(iLocal_70, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_70, 242628503) != 1)
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_73);
						TASK::TASK_PLAY_ANIM(0, sLocal_79, sLocal_81, 4f, -2f, -1, 0, 0, 0, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_73);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_70, uLocal_73);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_73);
						iLocal_47 = 2;
					}
				}
				else if (PED::IS_PED_FACING_PED(iLocal_70, PLAYER::PLAYER_PED_ID(), 60f))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_70, 242628503) != 1)
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_73);
						TASK::TASK_PLAY_ANIM(0, sLocal_79, "arms_waving", 2f, -8f, -1, 0, 0, 0, 0, 0);
						if (bLocal_56 == 0)
						{
							TASK::TASK_PLAY_ANIM(0, sLocal_79, "pointing", 8f, -4f, -1, 0, 0, 0, 0, 0);
						}
						TASK::CLOSE_SEQUENCE_TASK(uLocal_73);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_70, uLocal_73);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_73);
						iLocal_47 = 2;
					}
				}
				if (func_101())
				{
					if (func_100())
					{
					}
				}
				break;
			
			case 2:
				if (func_101())
				{
					if (func_100())
					{
					}
				}
				if (iLocal_120 == 2)
				{
					if (!PED::IS_PED_FACING_PED(iLocal_70, PLAYER::PLAYER_PED_ID(), 60f) && !func_98(iLocal_70, -875674219))
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_70, PLAYER::PLAYER_PED_ID(), 0);
					}
					if (func_97(iLocal_70, PLAYER::PLAYER_PED_ID(), 1) < 25f)
					{
						if (!func_18())
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_123) > 6000)
							{
								func_96();
							}
						}
					}
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_70, 242628503) != 1 && !func_98(iLocal_70, -875674219))
				{
					if (iLocal_120 == 1)
					{
						Local_84 = { -2260.1f, 4274.24f, 44.9f };
						if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_70, Local_84, 1.5f, 1.5f, 1.5f, 0, 1, 0))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_70, 242628503) == 7)
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_73);
								TASK::TASK_GO_STRAIGHT_TO_COORD(0, Local_84, 1f, 20000, fLocal_89, 1056964608);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_73);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_70, uLocal_73);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_73);
							}
						}
						else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_70, sLocal_78, "waiting", 3))
						{
							TASK::TASK_PLAY_ANIM(iLocal_70, sLocal_78, "waiting", 4f, -4f, -1, 0, 0, 0, 0, 0);
							if (func_97(iLocal_70, PLAYER::PLAYER_PED_ID(), 1) < 25f)
							{
								func_96();
							}
						}
					}
					else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_70, sLocal_78, "waiting", 3))
					{
						TASK::TASK_PLAY_ANIM(iLocal_70, sLocal_78, "waiting", 4f, -4f, -1, 0, 0, 0, 0, 0);
					}
				}
				break;
			
			case 3:
				if (!PED::IS_PED_HEADTRACKING_PED(iLocal_70, PLAYER::PLAYER_PED_ID()))
				{
					TASK::TASK_LOOK_AT_ENTITY(iLocal_70, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				}
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_70, 40f, 40f, 10f, 0, 1, 0) && !ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_70, 9f, 9f, 9f, 0, 1, 0))
				{
					if (func_95())
					{
						if (iLocal_54)
						{
							if (iLocal_120 == 1)
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_73);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								TASK::TASK_PLAY_ANIM(0, "RANDOM@CAR_THIEF@WAITING_IG_4", "idle_a", 2f, -2f, -1, 0, 0, 0, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_73);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_70, uLocal_73);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_73);
								iLocal_54 = 0;
								iLocal_123 = MISC::GET_GAME_TIMER();
							}
							else
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_73);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								TASK::TASK_PLAY_ANIM(0, "RANDOM@CAR_THIEF@WAITING_IG_4", "idle_a", 2f, -2f, -1, 0, 0, 0, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_73);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_70, uLocal_73);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_73);
								iLocal_54 = 0;
								iLocal_123 = MISC::GET_GAME_TIMER();
							}
						}
						else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_70, "RANDOM@CAR_THIEF@WAITING_IG_4", "idle_a", 3))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_70, 242628503) == 7)
							{
								if (!PED::IS_PED_FACING_PED(iLocal_70, PLAYER::PLAYER_PED_ID(), 45f))
								{
									TASK::OPEN_SEQUENCE_TASK(&uLocal_73);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_73);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_70, uLocal_73);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_73);
								}
								else if ((MISC::GET_GAME_TIMER() - iLocal_123) > 6000)
								{
									iLocal_54 = 1;
								}
							}
						}
						else if (!PED::IS_PED_FACING_PED(iLocal_70, PLAYER::PLAYER_PED_ID(), 70f))
						{
							TASK::CLEAR_PED_TASKS(iLocal_70);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_73);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_73);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_70, uLocal_73);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_73);
							iLocal_123 += 4000;
						}
					}
					if (!PED::IS_PED_INJURED(iLocal_71))
					{
						TASK::TASK_SMART_FLEE_PED(iLocal_71, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
						PED::SET_PED_KEEP_TASK(iLocal_71, 1);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_71);
					}
				}
				else
				{
					if (iLocal_120 == 1)
					{
						Local_84 = { -2260.1f, 4274.24f, 44.9f };
					}
					else if (bLocal_56)
					{
						Local_84 = { -483.4162f, -2160.874f, 8.359f };
					}
					else
					{
						Local_84 = { -485.9905f, -2153.542f, 8.1999f };
					}
					if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_70, Local_84, 4f, 4f, 4f, 0, 1, 0))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_70, 2106541073) == 7)
						{
							TASK::TASK_GO_STRAIGHT_TO_COORD(iLocal_70, Local_84, 1f, 20000, fLocal_89, 1056964608);
						}
					}
					else if (!PED::IS_PED_FACING_PED(iLocal_70, PLAYER::PLAYER_PED_ID(), 50f))
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_70, PLAYER::PLAYER_PED_ID(), -1);
					}
					iLocal_54 = 1;
				}
				break;
			
			case 4:
				break;
			}
	}
	if (func_150(1))
	{
		if (!PED::IS_PED_INJURED(iLocal_70))
		{
			TASK::TASK_SMART_FLEE_PED(iLocal_70, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
			PED::SET_PED_KEEP_TASK(iLocal_70, 1);
			SYSTEM::WAIT(0);
		}
		func_220();
	}
}

bool func_95()//Position - 0x47B0
{
	if (!bLocal_115)
	{
		if (func_42(&Local_101, cLocal_113, sLocal_109, 4, 0, 0, 0))
		{
			bLocal_115 = true;
		}
	}
	return bLocal_115;
}

int func_96()//Position - 0x47D9
{
	if (!iLocal_116)
	{
		if (func_42(&Local_101, cLocal_113, sLocal_107, 4, 0, 0, 0))
		{
			iLocal_116 = 1;
		}
	}
	return iLocal_116;
}

float func_97(int iParam0, int iParam1, int iParam2)//Position - 0x4802
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
	if (!ENTITY::IS_ENTITY_DEAD(uParam1))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
	}
	else
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(iParam1, 0) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var1, iParam2);
}

int func_98(int iParam0, int iParam1)//Position - 0x485E
{
	if (func_99(uParam0))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(uParam0, iParam1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_99(int iParam0)//Position - 0x4891
{
	if (func_3(uParam0))
	{
		if (!PED::IS_PED_INJURED(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_100()//Position - 0x48B1
{
	if (!iLocal_114)
	{
		if (SYSTEM::TIMERA() > 2000)
		{
			if (func_42(&Local_101, cLocal_113, sLocal_106, 4, 0, 0, 0))
			{
				iLocal_114 = 1;
			}
		}
	}
	return iLocal_114;
}

int func_101()//Position - 0x48E4
{
	if (!PED::IS_PED_INJURED(iLocal_71) && !PED::IS_PED_INJURED(iLocal_70))
	{
		if (func_151(iLocal_72))
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_71, iLocal_72))
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

void func_102(var uParam0, int iParam1)//Position - 0x4922
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_103(bool bParam0)//Position - 0x493F
{
	int iVar0;
	
	if (iLocal_120 == 2)
	{
		iVar0 = func_10();
		switch (iVar0)
		{
			case 0:
				while (!func_126(319357731, 6, 1, 144, 7200000, 10000, -1, 199, -1, 0))
				{
					if (func_3(iLocal_70))
					{
						PED::SET_PED_RESET_FLAG(iLocal_70, 310, 1);
					}
					SYSTEM::WAIT(0);
				}
				break;
			
			case 1:
				while (!func_126(-423103492, 6, 2, 144, 7200000, 10000, -1, 199, -1, 0))
				{
					if (func_3(iLocal_70))
					{
						PED::SET_PED_RESET_FLAG(iLocal_70, 310, 1);
					}
					SYSTEM::WAIT(0);
				}
				break;
			
			case 2:
				while (!func_126(801546988, 6, 4, 144, 7200000, 10000, -1, 199, -1, 0))
				{
					if (func_3(iLocal_70))
					{
						PED::SET_PED_RESET_FLAG(iLocal_70, 310, 1);
					}
					SYSTEM::WAIT(0);
				}
				break;
			}
	}
	if (bParam0)
	{
		func_125(8);
	}
	func_107(17, iLocal_120);
	func_104();
	func_220();
}

void func_104()//Position - 0x4A3A
{
	func_105();
}

int func_105()//Position - 0x4A47
{
	if (func_106(0))
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

bool func_106(bool bParam0)//Position - 0x4A92
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_10B8D, 0);
}

void func_107(int iParam0, int iParam1)//Position - 0x4ABD
{
	if (iParam0 == -1)
	{
		iParam0 = func_123();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_122(iParam0))
	{
		func_121(iParam0, iParam1);
		if (!func_120(51))
		{
			func_116("RE_REWARD", 1, 0, 4000, 10000, func_119(), 0, 138, 0);
			func_115(51);
		}
		if (func_114(iParam0))
		{
			Global_17C49.f_6E20.f_2 = 3;
		}
		if (func_113(iParam0, iParam1) != 322)
		{
			func_108(func_113(iParam0, iParam1), Local_44.x, Local_44.f_1);
		}
		Global_17C3D = iParam1;
		if (Global_17C3B == 0)
		{
			if (((Global_17C3E == 1 || Global_17C3E == 5) || Global_17C3E == 11) || Global_17C3E == 25)
			{
				func_125(2);
			}
			else if ((Global_17C3E == 26 || Global_17C3E == 8) || Global_17C3E == 17)
			{
				func_125(7);
			}
			else
			{
				func_125(1);
			}
		}
	}
}

void func_108(int iParam0, var uParam1, var uParam2)//Position - 0x4BC1
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
		func_112((891 + iParam0), 1, -1, 1);
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
		func_109();
	}
}

void func_109()//Position - 0x4CA9
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
		func_111(13, SYSTEM::FLOOR(Global_17C49.f_2100.f_F0D));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_10A95)
		{
			if (func_110() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_17B3F = 0;
				}
				if (!Global_D5DE)
				{
					func_105();
				}
			}
		}
	}
}

int func_110()//Position - 0x516A
{
	return Global_5F7C;
}

int func_111(int iParam0, int iParam1)//Position - 0x5175
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

int func_112(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x51C6
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
		iParam2 = func_8();
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

int func_113(int iParam0, int iParam1)//Position - 0x5423
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

int func_114(int iParam0)//Position - 0x5797
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

void func_115(int iParam0)//Position - 0x57C6
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

void func_116(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x5808
{
	func_117(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_117(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x582A
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
		func_118();
	}
}

void func_118()//Position - 0x59FE
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

int func_119()//Position - 0x5B1E
{
	func_11();
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

int func_120(int iParam0)//Position - 0x5B64
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

void func_121(int iParam0, int iParam1)//Position - 0x5BA7
{
	MISC::SET_BIT(&(Global_17C49.f_6E20.f_8[iParam0]), iParam1);
}

int func_122(int iParam0)//Position - 0x5BC2
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

int func_123()//Position - 0x5C73
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	uVar1 = func_124(Var0);
	return uVar1;
}

int func_124(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0x5C90
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

void func_125(int iParam0)//Position - 0x5E6A
{
	Global_17C3B = iParam0;
}

int func_126(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x5E78
{
	struct<10> Var0;
	struct<10> Var1;
	int iVar2;
	int iVar3;
	
	if (func_106(0))
	{
		return 0;
	}
	if (iParam4 < 0)
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 == 76)
	{
		return 0;
	}
	if (iParam7 == 235)
	{
		return 0;
	}
	if (iParam3 < 3)
	{
		if (MISC::IS_BIT_SET(iParam2, iParam3))
		{
			return 0;
		}
	}
	if (iParam2 < 1 || iParam2 > 7)
	{
		return 0;
	}
	if (Global_17C49.f_1738.f_362 < 10)
	{
		Var0 = iParam0;
		Var0.f_3 = func_134(iParam1);
		Var0.f_4 = (MISC::GET_GAME_TIMER() + iParam4);
		Var0.f_5 = iParam5;
		Var0.f_1 = iParam9;
		Var0.f_2 = iParam2;
		Var0.f_6 = iParam3;
		Var0.f_7 = iParam6;
		Var0.f_8 = iParam7;
		Var0.f_9 = iParam8;
		MISC::CLEAR_BIT(&(Var0.f_1), 0);
		Global_17C49.f_1738.f_2FD[Global_17C49.f_1738.f_362 /*10*/] = { Var0 };
		Global_17C49.f_1738.f_362++;
		return 1;
	}
	else
	{
		Var1 = { func_133(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9) };
		iVar2 = 0;
		func_132(&iVar2);
		iVar3 = func_131(Var1, Global_17C49.f_1738.f_2FD[iVar2 /*10*/]);
		if (iVar3 == 2)
		{
			func_129(Global_17C49.f_1738.f_2FD[iVar2 /*10*/]);
			Global_17C49.f_1738.f_2FD[iVar2 /*10*/] = { Var1 };
			func_128(&Var1);
			return 1;
		}
		else if (iVar3 == 1)
		{
			if (func_127(Var1))
			{
				func_129(Global_17C49.f_1738.f_2FD[iVar2 /*10*/]);
				Global_17C49.f_1738.f_2FD[iVar2 /*10*/] = { Var1 };
				func_128(&Var1);
				return 1;
			}
			else
			{
				if (!func_127(Global_17C49.f_1738.f_2FD[iVar2 /*10*/]))
				{
					Global_17C49.f_1738.f_2FD[iVar2 /*10*/] = { Var1 };
					func_128(&Var1);
					return 1;
				}
				func_128(&Var1);
				return 1;
			}
		}
		else
		{
			func_129(Var1);
			func_128(&Var1);
			return 1;
		}
	}
	return 0;
}

int func_127(struct<9> Param0, var uParam1)//Position - 0x609A
{
	if (Param0.f_8 == 0)
	{
		return 0;
	}
	return 1;
}

void func_128(var uParam0)//Position - 0x60B2
{
	struct<10> Var0;
	
	*uParam0 = { Var0 };
}

void func_129(struct<10> Param0)//Position - 0x60C4
{
	if (func_127(Param0))
	{
		func_130(Param0.f_8, 0);
	}
}

void func_130(int iParam0, int iParam1)//Position - 0x60E1
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_17C49.f_1AD5[iParam0] = 1;
	Global_17C49.f_1AD5.f_EC[iParam0] = (MISC::GET_GAME_TIMER() + iParam1);
}

int func_131(struct<4> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, struct<4> Param7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13)//Position - 0x611E
{
	int iVar0;
	int iVar1;
	
	iVar0 = Param0.f_3;
	iVar1 = Param7.f_3;
	if (iVar0 > iVar1)
	{
		return 2;
	}
	if (iVar0 < iVar1)
	{
		return 0;
	}
	return 1;
}

void func_132(int iParam0)//Position - 0x614F
{
	int iVar0;
	
	*iParam0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_17C49.f_1738.f_362)
	{
		if (func_131(Global_17C49.f_1738.f_2FD[iVar0 /*10*/], Global_17C49.f_1738.f_2FD[*iParam0 /*10*/]) == 0)
		{
			*iParam0 = iVar0;
		}
		iVar0++;
	}
}

struct<10> func_133(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, var uParam9)//Position - 0x61A6
{
	struct<10> Var0;
	
	Var0 = uParam0;
	Var0.f_3 = func_134(iParam1);
	Var0.f_4 = (MISC::GET_GAME_TIMER() + iParam4);
	Var0.f_5 = iParam5;
	Var0.f_1 = uParam9;
	Var0.f_2 = iParam2;
	Var0.f_6 = iParam3;
	Var0.f_7 = iParam6;
	Var0.f_8 = iParam7;
	Var0.f_9 = uParam8;
	MISC::CLEAR_BIT(&(Var0.f_1), 0);
	return Var0;
}

int func_134(int iParam0)//Position - 0x61FF
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

void func_135(int iParam0, bool bParam1)//Position - 0x6269
{
	if (bParam1)
	{
		if (!func_139(iParam0, 2, 1))
		{
			func_138(iParam0, 2, 1);
		}
	}
	else if (func_139(iParam0, 2, 1))
	{
		func_136(iParam0, 2, 1);
	}
}

void func_136(int iParam0, int iParam1, bool bParam2)//Position - 0x62A0
{
	var uVar0;
	
	if (bParam2)
	{
		MISC::CLEAR_BIT(&(Global_15F9E.f_4F3[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_110() == 0)
		{
			uVar0 = func_9(func_137(iParam0), -1, 0);
			MISC::CLEAR_BIT(&uVar0, iParam1);
			func_6(func_137(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_17C49.f_29C[iParam0]), iParam1);
	}
}

int func_137(int iParam0)//Position - 0x6308
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

void func_138(int iParam0, int iParam1, bool bParam2)//Position - 0x65B1
{
	var uVar0;
	
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_15F9E.f_4F3[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_110() == 0)
		{
			uVar0 = func_9(func_137(iParam0), -1, 0);
			MISC::SET_BIT(&uVar0, iParam1);
			func_6(func_137(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_17C49.f_29C[iParam0]), iParam1);
	}
}

int func_139(int iParam0, int iParam1, bool bParam2)//Position - 0x6619
{
	if (bParam2)
	{
		return MISC::IS_BIT_SET(Global_15F9E.f_4F3[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_110() == 0)
		{
			return MISC::IS_BIT_SET(func_9(func_137(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return MISC::IS_BIT_SET(Global_17C49.f_29C[iParam0], iParam1);
	}
	return 0;
}

int func_140(int iParam0)//Position - 0x6679
{
	if (func_143())
	{
		Global_17C3F = 1;
		Global_17C3C = MISC::GET_GAME_TIMER();
		if (func_114(Global_17C3E))
		{
			func_141(0);
		}
		HUD::SET_MISSION_NAME(1, "RE_TITLE");
		if (iParam0 && func_114(Global_17C3E))
		{
			HUD::FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

void func_141(int iParam0)//Position - 0x66CC
{
	switch (iParam0)
	{
		case 0:
			if (Global_17C49.f_6E20.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_74(func_142(iParam0), -1);
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
					func_74(func_142(iParam0), -1);
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
					func_74(func_142(iParam0), -1);
					Global_17C49.f_6E20.f_4++;
					MISC::SET_BIT(&Global_17C45, 2);
				}
			}
			break;
	}
}

char* func_142(int iParam0)//Position - 0x67AD
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

int func_143()//Position - 0x67F1
{
	switch (func_144(&Global_5FB7, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD()))
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

int func_144(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x6827
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
		if (func_148(0))
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
		if (!func_146(iParam2))
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
			func_145(uParam0, iParam4);
		}
	}
	return 2;
}

void func_145(var uParam0, int iParam1)//Position - 0x695E
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

bool func_146(int iParam0)//Position - 0x69AD
{
	return func_147(iParam0, Global_8861);
}

int func_147(int iParam0, int iParam1)//Position - 0x69BE
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

int func_148(int iParam0)//Position - 0x6B9F
{
	if (Global_8861 == 15)
	{
		return 0;
	}
	if (func_146(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_149()//Position - 0x6BC1
{
	float fVar0;
	
	switch (iLocal_120)
	{
		case 1:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2300.317f, 4179.612f, 36.98159f, -2191.317f, 4368.794f, 74.89676f, 70.75f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (bLocal_56)
			{
				fVar0 = 80f;
			}
			else
			{
				fVar0 = 80f;
			}
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -487.5048f, -2157.99f, 8.2627f, fVar0, fVar0, 40f, 0, 1, 0))
			{
				return 1;
			}
			break;
	}
	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (!PED::IS_PED_INJURED(iLocal_70))
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_70))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_150(int iParam0)//Position - 0x6C77
{
	bool bVar0;
	struct<3> Var1;
	struct<3> Var2;
	
	Var1 = { 6f, 6f, 6f };
	Var2 = { -6f, -6f, -6f };
	if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		if (!PED::IS_PED_INJURED(iLocal_70))
		{
			if (iParam0 == 0 || func_97(iLocal_70, iLocal_71, 1) > 15f)
			{
				if (MISC::IS_BULLET_IN_AREA(PED::GET_PED_BONE_COORDS(iLocal_70, 31086, 0f, 0f, 0f), 4f, 0))
				{
					bVar0 = true;
				}
				Var1 = { Var1 + PED::GET_PED_BONE_COORDS(iLocal_70, 31086, 0f, 0f, 0f) };
				Var2 = { Var2 + PED::GET_PED_BONE_COORDS(iLocal_70, 31086, 0f, 0f, 0f) };
				if ((MISC::IS_PROJECTILE_TYPE_IN_AREA(Var2, Var1, joaat("weapon_smokegrenade"), 1) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Var2, Var1, joaat("weapon_grenade"), 1)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Var2, Var1, joaat("weapon_stickybomb"), 1))
				{
					bVar0 = true;
				}
			}
			if (GRAPHICS::GET_IS_PETROL_DECAL_IN_RANGE(PED::GET_PED_BONE_COORDS(iLocal_70, 31086, 0f, 0f, 0f), 6f))
			{
				bVar0 = true;
			}
			if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, PED::GET_PED_BONE_COORDS(iLocal_70, 31086, 0f, 0f, 0f), 6f))
			{
				bVar0 = true;
			}
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_70, PLAYER::PLAYER_PED_ID(), 1))
			{
				bVar0 = true;
			}
		}
	}
	if (bVar0)
	{
	}
	return bVar0;
}

int func_151(int iParam0)//Position - 0x6D9E
{
	if (func_3(iParam0))
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

int func_152()//Position - 0x6DC8
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	char* sVar6;
	char* sVar7;
	char* sVar8;
	
	Var1 = { Local_86 };
	fVar2 = fLocal_94;
	switch (iLocal_120)
	{
		case 1:
			Local_85 = { -2257.482f, 4266.638f, 44.5095f };
			fLocal_93 = 293.9091f;
			Local_86 = { -2253.763f, 4273.17f, 44.977f };
			fLocal_94 = 185.5212f;
			iVar3 = joaat("a_f_y_vinewood_04");
			iVar5 = joaat("peyote");
			iVar4 = joaat("g_m_y_salvagoon_01");
			sVar6 = "CThiefVictim";
			sVar7 = "A_F_Y_VINEWOOD_04_WHITE_MINI_02";
			sLocal_106 = "RECT1_ATTR";
			sLocal_107 = "RECT1_HELP";
			sLocal_108 = "RECT1_FYOU";
			sLocal_109 = "RECT1_JOY";
			sLocal_110 = "RECT1_OK";
			sLocal_111 = "RECT1_BAD";
			sLocal_112 = "RECT1_GOOD";
			cLocal_113 = "RECT1AU";
			sLocal_78 = "RANDOM@CAR_THIEF@waiting_ig_4";
			sLocal_80 = "random@car_thief@waving_ig_1";
			Local_87 = { -2270.632f, 4287.437f, 44.9008f };
			fLocal_52 = 3f;
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_85) < SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_86))
			{
				Var1 = { Local_85 };
				fVar2 = fLocal_93;
				bLocal_56 = true;
				sLocal_79 = "random@car_thief@waving_ig_2";
				sLocal_81 = "waving_l";
			}
			else
			{
				sLocal_81 = "waving";
				sLocal_79 = "random@car_thief@waving_ig_1";
				Var1 = { Local_86 };
				fVar2 = fLocal_94;
			}
			break;
		
		case 2:
			Local_86 = { -538.6718f, -2183.442f, 5.2336f };
			Local_85 = { -365.7f, -2179.26f, 9.3184f };
			iVar3 = joaat("a_f_y_indian_01");
			iVar5 = joaat("rocoto");
			iVar4 = joaat("a_m_m_soucent_04");
			sVar6 = "CThiefGolfer";
			sVar8 = "A_M_M_SOUCENT_04_BLACK_MINI_01";
			sLocal_106 = "RECT2_ATTR";
			sLocal_107 = "RECT2_HELP";
			sLocal_108 = "RECT2_FYOU";
			sLocal_109 = "RECT2_JOY";
			sLocal_110 = "RECT2_OK";
			sLocal_111 = "RECT2_BAD";
			sLocal_112 = "RECT2_GOOD";
			cLocal_113 = "RECT2AU";
			sLocal_78 = "RANDOM@CAR_THIEF@waiting_ig_4";
			sLocal_79 = "RANDOM@CAR_THIEF@VICTIMPOINTS_IG_3";
			sLocal_80 = "RANDOM@CAR_THIEF@VICTIMPOINTS_IG_3";
			Local_87 = { -505.1966f, -2159.228f, 7.6466f };
			fLocal_51 = 15f;
			fLocal_52 = 3f;
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_85) < SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_86))
			{
				bLocal_56 = true;
			}
			break;
	}
	STREAMING::REQUEST_MODEL(iVar3);
	STREAMING::REQUEST_MODEL(iVar4);
	STREAMING::REQUEST_MODEL(iVar5);
	STREAMING::REQUEST_ANIM_DICT(sLocal_78);
	STREAMING::REQUEST_ANIM_DICT(sLocal_79);
	STREAMING::REQUEST_ANIM_DICT(sLocal_80);
	STREAMING::REQUEST_ANIM_DICT("RANDOM@CAR_THIEF@WAITING_IG_4");
	STREAMING::REQUEST_PTFX_ASSET();
	if (((((((STREAMING::HAS_MODEL_LOADED(iVar3) && STREAMING::HAS_MODEL_LOADED(iVar4)) && STREAMING::HAS_MODEL_LOADED(iVar5)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_78)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_79)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_80)) && STREAMING::HAS_ANIM_DICT_LOADED("RANDOM@CAR_THIEF@WAITING_IG_4")) && STREAMING::HAS_PTFX_ASSET_LOADED())
	{
		if (iLocal_120 == 1)
		{
			func_166("re_cartheft - Distance to vTop = ", SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_85));
			func_166("re_cartheft - Distance to vBottom = ", SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_86));
			iLocal_72 = VEHICLE::CREATE_VEHICLE(iVar5, Var1, fVar2, 1, 1);
			VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_72, 0, 0);
			VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iLocal_72, 0);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_72, 1);
			VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(iLocal_72, 0);
			VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(iLocal_72, 0);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_72, 2, 0);
			iLocal_71 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_72, 22, iVar4, -1, 1, 1);
			PED::SET_PED_CONFIG_FLAG(iLocal_71, 42, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_71, 3, 1);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_71, joaat("weapon_pistol"), -1, 1, 1);
			PED::SET_PED_ACCURACY(iLocal_71, 10);
			PED::SET_DRIVER_ABILITY(iLocal_71, 1f);
			PED::SET_DRIVER_RACING_MODIFIER(iLocal_71, 1f);
			VEHICLE::SET_VEHICLE_COLOURS(iLocal_72, 135, 135);
			PED::ADD_RELATIONSHIP_GROUP("re_cartheft relGroupThief", &iLocal_136);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_136, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_136, 45677184);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, 45677184, iLocal_136);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_71, iLocal_136);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_72, 1);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - Local_49 };
				uLocal_50 = MISC::GET_HEADING_FROM_VECTOR_2D(Var0.x, Var0.f_1);
			}
			iLocal_70 = PED::CREATE_PED(5, iVar3, Local_49, uLocal_50, 1, 1);
			AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_70, sVar7);
			TASK::TASK_LOOK_AT_ENTITY(iLocal_70, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_70, 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_70, 2, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_70, 3, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_70, 4, 1, 1, 0);
			AUDIO::STOP_PED_SPEAKING(iLocal_70, 1);
			if (bLocal_56)
			{
				Local_83 = { -2254.413f, 4270.227f, 44.8028f };
				fLocal_88 = 124.6557f;
				Local_82 = { -2252.683f, 4274.16f, 45.0612f };
				Local_84 = { -2257.825f, 4269.189f, 44.6334f };
				fLocal_89 = 272.8688f;
				Local_96 = { -2258.04f, 4272.244f, 45.75466f };
				Local_97 = { 1.729481f, 0f, -114.9352f };
			}
			else
			{
				Local_83 = { -2253.634f, 4269.119f, 44.7686f };
				fLocal_88 = 336.143f;
				Local_84 = { -2255.733f, 4271.32f, 44.8166f };
				fLocal_89 = 179.4774f;
				Local_82 = { -2257.088f, 4268.938f, 44.6456f };
				Local_96 = { -2254.886f, 4273.539f, 46.2282f };
				Local_97 = { -7.492095f, 0f, -168.1909f };
			}
		}
		else
		{
			if (bLocal_56)
			{
				iLocal_72 = VEHICLE::CREATE_VEHICLE(iVar5, -488.7506f, -2159.325f, 8.2581f, 15.0886f, 1, 1);
			}
			else
			{
				iLocal_72 = VEHICLE::CREATE_VEHICLE(iVar5, -486.3563f, -2159.942f, 8.2887f, 288.8187f, 1, 1);
			}
			VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_72, 0, 0);
			VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iLocal_72, 0);
			VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_72, 3);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_72, 1);
			VEHICLE::SET_VEHICLE_MOD_KIT(iLocal_72, 0);
			VEHICLE::SET_VEHICLE_MOD(iLocal_72, 11, 2, 0);
			VEHICLE::SET_VEHICLE_MOD(iLocal_72, 16, 3, 0);
			VEHICLE::SET_VEHICLE_MOD(iLocal_72, 12, 1, 0);
			VEHICLE::SET_VEHICLE_MOD(iLocal_72, 13, 1, 0);
			VEHICLE::SET_VEHICLE_WHEEL_TYPE(iLocal_72, 3);
			VEHICLE::SET_VEHICLE_MOD(iLocal_72, 23, 6, 0);
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iLocal_72, 3);
			VEHICLE::TOGGLE_VEHICLE_MOD(iLocal_72, 18, 1);
			VEHICLE::TOGGLE_VEHICLE_MOD(iLocal_72, 22, 1);
			VEHICLE::SET_VEHICLE_COLOURS(iLocal_72, 143, 0);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_72, 31, 2);
			VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(iLocal_72, 0);
			VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(iLocal_72, 0);
			if (bLocal_56)
			{
				iLocal_70 = PED::CREATE_PED(5, iVar3, -490.4008f, -2160.755f, 8.2498f, 314.0037f, 1, 1);
			}
			else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -583.0884f, -2234.249f, 4.523423f, -685.1817f, -2350.904f, 17.07073f, 178f, 0, 1, 0))
			{
				iLocal_70 = PED::CREATE_PED(5, iVar3, -486.81f, -2156.99f, 8.27f, -172.34f, 1, 1);
			}
			else
			{
				iLocal_70 = PED::CREATE_PED(5, iVar3, -486.2511f, -2161.808f, 8.3041f, 353.4264f, 1, 1);
			}
			PED::SET_PED_COMPONENT_VARIATION(iLocal_70, 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_70, 2, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_70, 3, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_70, 4, 1, 2, 0);
			iLocal_71 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_72, 22, iVar4, -1, 1, 1);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_71, joaat("weapon_pistol"), -1, 1, 1);
			PED::SET_PED_ACCURACY(iLocal_71, 10);
			PED::SET_DRIVER_ABILITY(iLocal_71, 1f);
			PED::SET_DRIVER_RACING_MODIFIER(iLocal_71, 1f);
			PED::SET_PED_CONFIG_FLAG(iLocal_71, 42, 1);
			AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_71, sVar8);
			Local_83 = { -501.9105f, -2148.019f, 8.0392f };
			fLocal_88 = 294.4744f;
			Local_82 = { -501.0442f, -2150.799f, 8.139f };
			Local_84 = { -493.8062f, -2156.036f, 8.1978f };
			Local_96 = { -504.365f, -2144.534f, 9.8585f };
			Local_97 = { -6.6935f, 0f, -127.8147f };
		}
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_70, 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_70, 185, 1);
		VEHICLE::SET_CAN_RESPRAY_VEHICLE(iLocal_72, 0);
		VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_72, 1, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_70, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_71, 1);
		TASK::TASK_LOOK_AT_ENTITY(iLocal_70, iLocal_71, -1, 0, 2);
		VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(iLocal_72);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_72, 1);
		VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_72, 0, 0);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iVar5, 1);
		AUDIO::START_AUDIO_SCENE("RE_CAR_STEAL_SCENE");
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_72, "RE_CAR_STEAL_STOLEN_VEHICLE", 0);
		VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(iLocal_72, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_70, 17, 0);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_70, 512, 1);
		switch (func_10())
		{
			case 0:
				sLocal_99 = "MICHAEL";
				break;
			
			case 1:
				sLocal_99 = "FRANKLIN";
				break;
			
			case 2:
				sLocal_99 = "TREVOR";
				break;
		}
		func_165(&Local_101, 0, PLAYER::PLAYER_PED_ID(), sLocal_99, 0, 1);
		func_165(&Local_101, 1, iLocal_70, sVar6, 0, 1);
		func_165(&Local_101, 2, iLocal_71, "CThief", 0, 1);
		return 1;
	}
	else if (func_153())
	{
		func_220();
	}
	return 0;
}

int func_153()//Position - 0x75F4
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_44) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_164())
		{
			return 0;
		}
	}
	if (func_160())
	{
		return 1;
	}
	if (func_154(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_154(float fParam0, bool bParam1)//Position - 0x767A
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
		if (func_13(func_10()))
		{
			iVar5 = func_119();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (MISC::IS_BIT_SET(Global_17C49.f_41BC[iVar1 /*6*/], 2) && !MISC::IS_BIT_SET(Global_17C49.f_41BC[iVar1 /*6*/], 3))
				{
					func_155(iVar1, &Var0);
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

void func_155(int iParam0, var uParam1)//Position - 0x7731
{
	switch (iParam0)
	{
		case 0:
			func_156(uParam1, "Abigail1", func_158(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 1:
			func_156(uParam1, "Abigail2", func_158(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 2:
			func_156(uParam1, "Barry1", func_158(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 3:
			func_156(uParam1, "Barry2", func_158(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_157(iParam0), 1, 1);
			break;
		
		case 4:
			func_156(uParam1, "Barry3", func_158(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 5:
			func_156(uParam1, "Barry3A", func_158(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 6:
			func_156(uParam1, "Barry3C", func_158(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 7:
			func_156(uParam1, "Barry4", func_158(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_157(iParam0), 0, 0);
			break;
		
		case 8:
			func_156(uParam1, "Dreyfuss1", func_158(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 9:
			func_156(uParam1, "Epsilon1", func_158(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 10:
			func_156(uParam1, "Epsilon2", func_158(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 11:
			func_156(uParam1, "Epsilon3", func_158(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 12:
			func_156(uParam1, "Epsilon4", func_158(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 13:
			func_156(uParam1, "Epsilon5", func_158(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 14:
			func_156(uParam1, "Epsilon6", func_158(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 15:
			func_156(uParam1, "Epsilon7", func_158(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 16:
			func_156(uParam1, "Epsilon8", func_158(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 17:
			func_156(uParam1, "Extreme1", func_158(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 18:
			func_156(uParam1, "Extreme2", func_158(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 19:
			func_156(uParam1, "Extreme3", func_158(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 20:
			func_156(uParam1, "Extreme4", func_158(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 21:
			func_156(uParam1, "Fanatic1", func_158(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_157(iParam0), 1, 0);
			break;
		
		case 22:
			func_156(uParam1, "Fanatic2", func_158(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_157(iParam0), 1, 0);
			break;
		
		case 23:
			func_156(uParam1, "Fanatic3", func_158(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_157(iParam0), 0, 1);
			break;
		
		case 24:
			func_156(uParam1, "Hao1", func_158(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_157(iParam0), 0, 1);
			break;
		
		case 25:
			func_156(uParam1, "Hunting1", func_158(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 26:
			func_156(uParam1, "Hunting2", func_158(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 27:
			func_156(uParam1, "Josh1", func_158(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 28:
			func_156(uParam1, "Josh2", func_158(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_157(iParam0), 1, 1);
			break;
		
		case 29:
			func_156(uParam1, "Josh3", func_158(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_157(iParam0), 1, 1);
			break;
		
		case 30:
			func_156(uParam1, "Josh4", func_158(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 31:
			func_156(uParam1, "Maude1", func_158(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 32:
			func_156(uParam1, "Minute1", func_158(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 33:
			func_156(uParam1, "Minute2", func_158(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 34:
			func_156(uParam1, "Minute3", func_158(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 35:
			func_156(uParam1, "MrsPhilips1", func_158(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 36:
			func_156(uParam1, "MrsPhilips2", func_158(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 37:
			func_156(uParam1, "Nigel1", func_158(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 38:
			func_156(uParam1, "Nigel1A", func_158(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_157(iParam0), 1, 1);
			break;
		
		case 39:
			func_156(uParam1, "Nigel1B", func_158(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_157(iParam0), 1, 1);
			break;
		
		case 40:
			func_156(uParam1, "Nigel1C", func_158(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_157(iParam0), 1, 1);
			break;
		
		case 41:
			func_156(uParam1, "Nigel1D", func_158(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_157(iParam0), 1, 1);
			break;
		
		case 42:
			func_156(uParam1, "Nigel2", func_158(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_157(iParam0), 1, 1);
			break;
		
		case 43:
			func_156(uParam1, "Nigel3", func_158(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_157(iParam0), 1, 1);
			break;
		
		case 44:
			func_156(uParam1, "Omega1", func_158(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 45:
			func_156(uParam1, "Omega2", func_158(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 46:
			func_156(uParam1, "Paparazzo1", func_158(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 47:
			func_156(uParam1, "Paparazzo2", func_158(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 48:
			func_156(uParam1, "Paparazzo3", func_158(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 49:
			func_156(uParam1, "Paparazzo3A", func_158(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 50:
			func_156(uParam1, "Paparazzo3B", func_158(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 51:
			func_156(uParam1, "Paparazzo4", func_158(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 52:
			func_156(uParam1, "Rampage1", func_158(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 54:
			func_156(uParam1, "Rampage3", func_158(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 55:
			func_156(uParam1, "Rampage4", func_158(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 56:
			func_156(uParam1, "Rampage5", func_158(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 53:
			func_156(uParam1, "Rampage2", func_158(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 57:
			func_156(uParam1, "TheLastOne", func_158(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 58:
			func_156(uParam1, "Tonya1", func_158(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 59:
			func_156(uParam1, "Tonya2", func_158(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 60:
			func_156(uParam1, "Tonya3", func_158(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 61:
			func_156(uParam1, "Tonya4", func_158(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 62:
			func_156(uParam1, "Tonya5", func_158(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_156(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)//Position - 0x8979
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

int func_157(int iParam0)//Position - 0x8A0A
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

struct<2> func_158(int iParam0)//Position - 0x8D50
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_159(iParam0) };
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

struct<2> func_159(int iParam0)//Position - 0x8D88
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

int func_160()//Position - 0x91D5
{
	if (func_163() && !func_164())
	{
		return 1;
	}
	if (func_162() && func_161())
	{
		return 1;
	}
	return 0;
}

bool func_161()//Position - 0x9207
{
	return Global_17B2F > 0;
}

int func_162()//Position - 0x9215
{
	if (Global_154F9 != -1)
	{
		return 1;
	}
	return 0;
}

int func_163()//Position - 0x922A
{
	if (Global_154F9 != -1)
	{
		return MISC::IS_BIT_SET(Global_13D03[Global_154F9 /*34*/].f_F, 20);
	}
	return 0;
}

int func_164()//Position - 0x9250
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

void func_165(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x926D
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

void func_166(char* sParam0, float fParam1)//Position - 0x9308
{
	func_168(sParam0);
	func_167(fParam1);
}

void func_167(float fParam0)//Position - 0x931C
{
	if (fParam0 != 0f)
	{
	}
}

void func_168(char* sParam0)//Position - 0x932B
{
	if (MISC::ARE_STRINGS_EQUAL(uParam0, uParam0))
	{
	}
}

int func_169()//Position - 0x933E
{
	if (!func_146(5))
	{
		return 1;
	}
	if (func_160())
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_164())
		{
			return 0;
		}
	}
	if (func_154(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_170()//Position - 0x93A0
{
	if ((Global_17C3E == func_123() && MISC::GET_RANDOM_EVENT_FLAG()) && Global_17C3F)
	{
		return 1;
	}
	return 0;
}

void func_171()//Position - 0x93CB
{
	if (func_99(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0) != iLocal_72 && PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0) != iLocal_75)
			{
				iLocal_75 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			}
		}
	}
}

void func_172(var uParam0, var uParam1)//Position - 0x9415
{
	int iVar0;
	int iVar1;
	
	if (*uParam1 == -99)
	{
		*uParam1 = MISC::GET_GAME_TIMER();
	}
	if (HUD::DOES_BLIP_EXIST(uParam0))
	{
		iVar0 = (MISC::GET_GAME_TIMER() - *uParam1);
		if (iVar0 < 5000)
		{
			iVar1 = SYSTEM::CEIL((SYSTEM::TO_FLOAT(iVar0) / 1000f));
			if ((iVar1 * 1000 - iVar0) < 500)
			{
				if (HUD::GET_BLIP_ALPHA(uParam0) != 255)
				{
					HUD::SET_BLIP_ALPHA(uParam0, 255);
				}
			}
			else if (HUD::GET_BLIP_ALPHA(uParam0) != 0)
			{
				HUD::SET_BLIP_ALPHA(uParam0, 0);
			}
		}
		else if (*uParam1 != -100)
		{
			*uParam1 = -100;
			if (HUD::GET_BLIP_ALPHA(uParam0) != 255)
			{
				HUD::SET_BLIP_ALPHA(uParam0, 255);
			}
		}
	}
}

void func_173()//Position - 0x94B4
{
}

void func_174(int iParam0)//Position - 0x94BC
{
	if (iParam0 == -1)
	{
		iParam0 = func_123();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_176(iParam0);
	MISC::_0x65D2EBB47E1CEC21(0);
	MISC::SET_RANDOM_EVENT_FLAG(1);
	Global_17C3B = 0;
	func_175();
}

void func_175()//Position - 0x94F2
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

void func_176(int iParam0)//Position - 0x952F
{
	Global_17C3E = iParam0;
}

int func_177(struct<3> Param0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x953D
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
		iParam1 = func_123();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_217())
		{
			return 0;
		}
	}
	Local_44 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_164())
			{
				return 0;
			}
		}
		if (!Global_17C49.f_1CAD)
		{
			return 0;
		}
		if (func_106(0))
		{
			return 0;
		}
		if (func_160())
		{
			return 0;
		}
		if (func_216())
		{
			return 0;
		}
		if (Global_17C3E != -1)
		{
			return 0;
		}
		if (func_13(func_10()))
		{
			if (func_154(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam4)
		{
			if ((Var1.f_2 - Local_44.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_215(iParam1))
		{
			return 0;
		}
		if (func_13(func_10()))
		{
			if (func_214(func_10()) == 4 || func_214(func_10()) == 5)
			{
				return 0;
			}
		}
		if (func_13(func_10()))
		{
			if (!func_213(iParam1, iParam2, 145))
			{
				return 0;
			}
		}
		if (!func_212(Global_17C49.f_6E20.f_2B[iParam1]))
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
		if (func_211())
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
		if (!func_202(4))
		{
			return 0;
		}
		if (!func_146(5))
		{
			return 0;
		}
		if (func_201(iParam1, iParam2) && !bParam3)
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
		if ((iParam1 == 9 && (iParam2 == 2 || iParam2 == 5)) && !func_201(0, 0))
		{
			return 0;
		}
		if (Global_600E)
		{
			return 0;
		}
		if (func_215(30) && !func_201(30, 0))
		{
			if (iParam1 != 30)
			{
				if (SYSTEM::VDIST2(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_13(func_10()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				Var3 = { Global_17C49.f_6C1.f_21B.f_5F8[iVar2 /*3*/] };
				iVar4 = Global_17C49.f_6C1.f_21B.f_5F4[iVar2];
				if (func_200(iVar4))
				{
					if (func_178(iVar2))
					{
						if (!func_81(Var3, 0f, 0f, 0f))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Var3) < (210f * 210f))
							{
								if (func_10() != iVar2)
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

bool func_178(int iParam0)//Position - 0x98D6
{
	int iVar0;
	
	iVar0 = Global_17C49.f_6C1.f_21B.f_5F4[iParam0];
	return func_179(iVar0);
}

int func_179(int iParam0)//Position - 0x98F7
{
	return func_180(iParam0, 1);
}

int func_180(int iParam0, int iParam1)//Position - 0x9906
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_200(iParam0))
	{
		return 0;
	}
	func_181(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_181(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x9959
{
	func_182(func_193(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_182(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0x9977
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_192(iParam0, iParam1))
	{
		iVar0 = func_191(iParam1);
		iVar1 = func_189(iParam0);
		iVar2 = (func_189(iParam0) - func_189(iParam1));
		iVar3 = (func_191(iParam0) - func_191(iParam1));
		iVar4 = (func_188(iParam0) - func_188(iParam1));
		iVar5 = (func_187(iParam0) - func_187(iParam1));
		iVar6 = (func_186(iParam0) - func_186(iParam1));
		iVar7 = (func_185(iParam0) - func_185(iParam1));
	}
	else
	{
		iVar0 = func_191(iParam0);
		iVar1 = func_189(iParam1);
		iVar2 = (func_189(iParam1) - func_189(iParam0));
		iVar3 = (func_191(iParam1) - func_191(iParam0));
		iVar4 = (func_188(iParam1) - func_188(iParam0));
		iVar5 = (func_187(iParam1) - func_187(iParam0));
		iVar6 = (func_186(iParam1) - func_186(iParam0));
		iVar7 = (func_185(iParam1) - func_185(iParam0));
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
		iVar4 = (iVar4 + func_184(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_183(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_183(float fParam0, float fParam1, float fParam2)//Position - 0x9B78
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

int func_184(int iParam0, int iParam1)//Position - 0x9BBA
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

int func_185(int iParam0)//Position - 0x9C5C
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_186(int iParam0)//Position - 0x9C6F
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_187(int iParam0)//Position - 0x9C82
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_188(int iParam0)//Position - 0x9C95
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_189(int iParam0)//Position - 0x9CA7
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_190(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_190(bool bParam0, int iParam1, int iParam2)//Position - 0x9CCC
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_191(int iParam0)//Position - 0x9CE3
{
	return iParam0 & 15;
}

int func_192(int iParam0, int iParam1)//Position - 0x9CF0
{
	int iVar0;
	int iVar1;
	
	if (!func_200(iParam1) || !func_200(iParam0))
	{
		return 1;
	}
	iVar0 = func_189(iParam0);
	iVar1 = func_189(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_191(iParam0);
	iVar1 = func_191(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_188(iParam0);
	iVar1 = func_188(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_187(iParam0);
	iVar1 = func_187(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_186(iParam0);
	iVar1 = func_186(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_185(iParam0);
	iVar1 = func_185(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_193()//Position - 0x9DFC
{
	var uVar0;
	
	func_199(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_198(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_197(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_196(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_195(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_194(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_194(var uParam0, int iParam1)//Position - 0x9E42
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

void func_195(var uParam0, int iParam1)//Position - 0x9EC8
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_196(var uParam0, int iParam1)//Position - 0x9EFB
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_191(*uParam0);
	iVar1 = func_189(*uParam0);
	if (iParam1 < 1 || iParam1 > func_184(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_197(var uParam0, int iParam1)//Position - 0x9F4C
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_198(var uParam0, int iParam1)//Position - 0x9F86
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_199(var uParam0, int iParam1)//Position - 0x9FC1
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_200(int iParam0)//Position - 0x9FFD
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
	iVar0 = func_185(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_186(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_187(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_189(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_191(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_188(iParam0);
	if (iVar5 < 1 || iVar5 > func_184(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_201(int iParam0, int iParam1)//Position - 0xA0D9
{
	if (MISC::IS_BIT_SET(Global_17C49.f_6E20.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_202(int iParam0)//Position - 0xA0FC
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_10();
				if (!func_13(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_210()) || Global_17890) || Global_5F7E) || func_209()) || func_49(8, -1)) || func_208()) || func_207()) || func_206()) || func_205()) || Global_17C49.f_1738.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || func_210()) || Global_5F7E) || func_209()) || func_49(8, -1)) || func_206()) || func_208()) || func_207()) || func_205()) || Global_17C49.f_1738.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_210()) || Global_17890) || Global_5F7E) || func_209()) || func_49(8, -1)) || func_206()) || func_208()) || func_207()) || func_205()) || Global_17C49.f_1738.f_397[iVar0] == 5) || Global_8A84 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_210()) || Global_17890) || Global_5F7E) || func_209()) || func_49(8, -1)) || func_208()) || func_207()) || func_205()) || Global_17C49.f_1738.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_210() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_49(8, -1)) || func_205()) || func_204()) || Global_17C49.f_1738.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_49(8, -1) || func_208()) || func_207()) || func_204()) || func_203())
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
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_210()) || Global_5F7E) || func_209()) || func_49(8, -1)) || func_207()) || func_206()) || func_205()) || Global_17C49.f_1738.f_397[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || func_210()) || func_207()) || Global_17890) || Global_5F7E) || func_209()) || Global_8C75) || func_49(8, -1)) || func_206()) || func_204()) || func_205()) || Global_17C49.f_1738.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_210()) || Global_17890) || Global_5F7E) || func_209()) || func_49(8, -1)) || func_206()) || func_204()) || func_208()) || func_207()) || func_205())
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

var func_203()//Position - 0xA819
{
	return Global_15F91.f_1;
}

int func_204()//Position - 0xA827
{
	if (Global_154F9 != -1)
	{
		return MISC::IS_BIT_SET(Global_13D03[Global_154F9 /*34*/].f_F, 13);
	}
	return 0;
}

int func_205()//Position - 0xA84D
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_206()//Position - 0xA867
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

bool func_207()//Position - 0xA891
{
	return Global_15F9E.f_123 > 0;
}

bool func_208()//Position - 0xA8A2
{
	return Global_15F9E.f_122 > 0;
}

var func_209()//Position - 0xA8B3
{
	return Global_14143C;
}

int func_210()//Position - 0xA8BF
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_15725.f_2C == 1;
	}
	return 0;
}

int func_211()//Position - 0xA8DB
{
	func_47();
	if (Global_BFC[Global_3839 /*2811*/][0 /*281*/].f_103 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_212(int iParam0)//Position - 0xA903
{
	return func_192(func_193(), iParam0);
}

int func_213(int iParam0, int iParam1, int iParam2)//Position - 0xA915
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_10();
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

int func_214(int iParam0)//Position - 0xA9F9
{
	if (!func_13(iParam0))
	{
		return 7;
	}
	return Global_17C49.f_1738.f_397[iParam0];
}

bool func_215(int iParam0)//Position - 0xAA1D
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_217())
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

int func_216()//Position - 0xAA7B
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

int func_217()//Position - 0xAAB2
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

int func_218(int iParam0)//Position - 0xAB35
{
	int iVar0;
	
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	if (Global_14980[iParam0 /*2*/])
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < Global_13CDF)
	{
		if (Global_13CDF[iVar0 /*5*/] != -1)
		{
			if (Global_10BA2.f_6D[Global_13CDF[iVar0 /*5*/] /*4*/] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_219()//Position - 0xAB9D
{
	if (SYSTEM::VDIST(Local_49, -2255.21f, 4271.04f, 44.875f) < 5f)
	{
		iLocal_120 = 1;
	}
	else if (SYSTEM::VDIST(Local_49, -500.924f, -2165.36f, 7.6988f) < 5f)
	{
		iLocal_120 = 2;
	}
}

void func_220()//Position - 0xABE8
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_71) && !ENTITY::IS_ENTITY_DEAD(iLocal_71))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_71, 0);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(iLocal_71));
		func_232(&iLocal_71, 1, 0, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_70) && !ENTITY::IS_ENTITY_DEAD(iLocal_70))
	{
		PED::SET_PED_RESET_FLAG(iLocal_70, 310, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_70, 0);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_59))
	{
		HUD::REMOVE_BLIP(&uLocal_59);
	}
	func_59(&uLocal_62);
	if (HUD::DOES_BLIP_EXIST(uLocal_60))
	{
		HUD::REMOVE_BLIP(&uLocal_60);
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("RE_CAR_STEAL_SCENE"))
	{
		if (func_151(iLocal_72))
		{
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_72, 0);
		}
		AUDIO::STOP_AUDIO_SCENE("RE_CAR_STEAL_SCENE");
	}
	if (iLocal_120 == 2)
	{
		VEHICLE::REMOVE_VEHICLE_ASSET(joaat("rocoto"));
	}
	else
	{
		VEHICLE::REMOVE_VEHICLE_ASSET(joaat("peyote"));
	}
	func_16(&iLocal_72);
	if (func_151(iLocal_75))
	{
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iLocal_75, 1);
	}
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	func_135(39, 0);
	func_135(40, 0);
	func_135(41, 0);
	func_135(42, 0);
	func_135(43, 0);
	func_221(-1);
	func_61(&uLocal_137, 0, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_221(int iParam0)//Position - 0xACFB
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_123();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_170())
	{
		func_225(iParam0);
		HUD::SET_MISSION_NAME(0, 0);
		Global_17C40 = MISC::GET_GAME_TIMER();
		func_224(30000);
		StringCopy(&cVar0, func_223(Global_17C3E, 1), 64);
		if (func_122(Global_17C3E) > 0)
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
	func_222(&Global_5FB7);
	Global_17C3F = 0;
	func_176(-1);
}

void func_222(var uParam0)//Position - 0xADB0
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

char* func_223(int iParam0, bool bParam1)//Position - 0xADED
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

void func_224(int iParam0)//Position - 0xB036
{
	Global_8A88 = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_225(int iParam0)//Position - 0xB048
{
	func_226(iParam0, 0, func_231(iParam0));
}

void func_226(int iParam0, int iParam1, int iParam2)//Position - 0xB05D
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_193();
	func_229(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_228(iParam0, &uVar0);
	Var1 = { func_227(&uVar0) };
}

struct<16> func_227(var uParam0)//Position - 0xB08C
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_187(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_186(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_185(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_188(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_191(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_189(*uParam0), 64);
	return Var0;
}

void func_228(int iParam0, var uParam1)//Position - 0xB15D
{
	Global_17C49.f_6E20.f_2B[iParam0] = *uParam1;
}

void func_229(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xB175
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_189(*uParam0);
	iVar1 = func_191(*uParam0);
	iVar2 = func_188(*uParam0);
	iVar3 = func_187(*uParam0);
	iVar4 = func_186(*uParam0);
	iVar5 = func_185(*uParam0);
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
	iVar6 = func_184(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_184(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_230(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_230(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xB2F7
{
	func_199(uParam0, iParam1);
	func_198(uParam0, iParam2);
	func_197(uParam0, iParam3);
	func_196(uParam0, iParam4);
	func_195(uParam0, iParam5);
	func_194(uParam0, iParam6);
}

int func_231(int iParam0)//Position - 0xB32F
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

void func_232(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0xB4D2
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (!PED::IS_PED_INJURED(*uParam0))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*uParam0, 0);
			if (iParam3 == 0)
			{
				TASK::CLEAR_PED_SECONDARY_TASK(*uParam0);
			}
			PED::SET_PED_KEEP_TASK(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 0);
			}
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam0);
	}
}

