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
	char* sLocal_18[13] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char* sLocal_19[13] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_20 = 0;
	char* sLocal_21[7] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	bool bLocal_28 = 0;
	bool bLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	struct<3> Local_33 = { 0, 0, 0 } ;
	struct<3> Local_34 = { 0, 0, 0 } ;
	float fLocal_35 = 0f;
	float fLocal_36 = 0f;
	float fLocal_37 = 0f;
	float fLocal_38 = 0f;
	float fLocal_39 = 0f;
	struct<3> Local_40 = { 0, 0, 0 } ;
	struct<3> Local_41 = { 0, 0, 0 } ;
	struct<3> Local_42 = { 0, 0, 0 } ;
	struct<3> Local_43 = { 0, 0, 0 } ;
	struct<3> Local_44 = { 0, 0, 0 } ;
	struct<3> Local_45 = { 0, 0, 0 } ;
	float fLocal_46 = 0f;
	float fLocal_47 = 0f;
	float fLocal_48 = 0f;
	float fLocal_49 = 0f;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	float fLocal_64 = 0f;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	char cLocal_95[16] = "";
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	float fLocal_105 = 0f;
	float fLocal_106 = 0f;
	float fLocal_107 = 0f;
	float fLocal_108 = 0f;
	float fLocal_109 = 0f;
	float fLocal_110 = 0f;
	float fLocal_111 = 0f;
	float fLocal_112 = 0f;
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
	iLocal_25 = 1;
	bLocal_28 = true;
	bLocal_29 = true;
	fLocal_35 = 0f;
	fLocal_36 = 172f;
	fLocal_39 = 1f;
	iLocal_87 = 1200;
	iLocal_88 = 1200;
	iLocal_89 = 166;
	fLocal_105 = 0.5f;
	fLocal_106 = 0.85f;
	fLocal_107 = 0.5f;
	fLocal_108 = -0.25f;
	fLocal_109 = 0.25f;
	fLocal_110 = 0.3f;
	fLocal_111 = 0.3f;
	fLocal_112 = 0.075f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (!func_132())
	{
		Global_26CF0D = 99;
		Global_26CF0E = 99;
		iLocal_23 = 99;
	}
	else
	{
		Global_26CF0D = 0;
		Global_26CF0E = 0;
	}
	sLocal_18[0] = "No_Filter";
	sLocal_18[1] = "phone_cam1";
	sLocal_18[2] = "phone_cam2";
	sLocal_18[3] = "phone_cam3";
	sLocal_18[4] = "phone_cam4";
	sLocal_18[5] = "phone_cam5";
	sLocal_18[6] = "phone_cam6";
	sLocal_18[7] = "phone_cam7";
	sLocal_18[8] = "phone_cam8";
	sLocal_18[9] = "phone_cam9";
	sLocal_18[10] = "phone_cam10";
	sLocal_18[11] = "phone_cam11";
	sLocal_18[12] = "phone_cam12";
	sLocal_19[0] = "No_Border";
	sLocal_19[1] = "frame1";
	sLocal_19[2] = "frame2";
	sLocal_19[3] = "frame3";
	sLocal_19[4] = "frame4";
	sLocal_19[5] = "frame5";
	sLocal_19[6] = "frame6";
	sLocal_19[7] = "frame7";
	sLocal_19[8] = "frame8";
	sLocal_19[9] = "frame9";
	sLocal_19[10] = "frame10";
	sLocal_19[11] = "frame11";
	sLocal_19[12] = "frame12";
	sLocal_21[0] = "No_Expression";
	sLocal_21[1] = "mood_Aiming_1";
	sLocal_21[2] = "mood_Happy_1";
	sLocal_21[3] = "mood_smug_1";
	sLocal_21[4] = "mood_Injured_1";
	sLocal_21[5] = "mood_sulk_1";
	sLocal_21[6] = "mood_Angry_1";
	func_131();
	if (func_130(1, 1, !iLocal_30))
	{
		iLocal_30 = 1;
	}
	func_129();
	iLocal_62 = AUDIO::GET_SOUND_ID();
	if (Global_3802 == 0)
	{
		fLocal_46 = 0.207f;
		fLocal_47 = 0.158f;
		fLocal_48 = 0.207f;
		fLocal_49 = 0.335f;
	}
	else
	{
		fLocal_46 = 0.24f;
		fLocal_47 = 0.258f;
		fLocal_48 = 0.24f;
		fLocal_49 = 0.435f;
	}
	Global_4155 = 0;
	Global_4156 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()))
		{
			Global_4155 = 1;
		}
		if (GRAPHICS::GET_USINGNIGHTVISION())
		{
			Global_4155 = 1;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()), 0))
		{
			Global_4155 = 1;
		}
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, 1))
		{
			Global_4155 = 1;
		}
		if (PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID()))
		{
			Global_4155 = 1;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (iLocal_81 == 1)
			{
				Global_4155 = 1;
			}
			uLocal_98 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if ((ENTITY::GET_ENTITY_MODEL(uLocal_98) == joaat("rhino") || ENTITY::GET_ENTITY_MODEL(iLocal_98) == joaat("cutter")) || ENTITY::GET_ENTITY_MODEL(iLocal_98) == joaat("submersible"))
			{
				Global_4155 = 1;
			}
			else if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_98, -1) == PLAYER::PLAYER_PED_ID())
			{
				if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(iLocal_98) > 0f)
				{
					if (!Global_10A95)
					{
						if (!func_128())
						{
							TASK::TASK_VEHICLE_TEMP_ACTION(PLAYER::PLAYER_PED_ID(), iLocal_98, 6, 4000);
						}
					}
				}
			}
		}
	}
	if (Global_10A95)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), 0);
		}
	}
	MISC::CLEAR_BIT(&Global_8D7, 21);
	func_127(0);
	MISC::SET_BIT(&Global_8D7, 17);
	if (Global_37FF == 0)
	{
		func_126();
	}
	else
	{
		uLocal_90 = unk_0x67D02A194A2FC2BD("camera_gallery");
		uLocal_91 = unk_0x67D02A194A2FC2BD("instructional_buttons");
		while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_90) || !GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_91))
		{
			SYSTEM::WAIT(0);
			RECORDING::_STOP_RECORDING_THIS_FRAME();
			PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
		}
		if (Global_10A95)
		{
			iLocal_94 = 2;
		}
		else
		{
			switch (func_125())
			{
				case 0:
					iLocal_94 = 2;
					break;
				
				case 2:
					iLocal_94 = 2;
					break;
				
				case 3:
					iLocal_94 = 2;
					break;
				}
		}
		func_124(uLocal_90, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(iLocal_94), -1082130432, -1082130432, -1082130432, -1082130432);
		func_123(uLocal_90, "CLOSE_SHUTTER");
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_3826, "DISPLAY_VIEW");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(16);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	Local_40 = { Global_3811 };
	Local_41 = { Global_380A[Global_3802 /*3*/] };
	Global_4156 = 1;
	iLocal_68 = 1;
	iLocal_69 = 1;
	iLocal_70 = 1;
	iLocal_71 = 1;
	iLocal_72 = 1;
	iLocal_73 = 1;
	iLocal_74 = 0;
	iLocal_75 = 0;
	if (Global_3839.f_1 > 3)
	{
		Global_3839.f_1 = 8;
	}
	if (iLocal_81 == 0)
	{
		MISC::CLEAR_BIT(&Global_8D9, 3);
	}
	func_121();
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	if (NETWORK::NETWORK_HAS_SOCIAL_NETWORKING_SHARING_PRIV())
	{
	}
	if (Global_187385.f_11153)
	{
	}
	if (GRAPHICS::GET_IS_WIDESCREEN())
	{
		fLocal_39 = 1f;
	}
	else
	{
		fLocal_39 = 1f;
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		RECORDING::_STOP_RECORDING_THIS_FRAME();
		PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
		if (!Global_17C49.f_3011.f_51)
		{
			if (!MISC::IS_BIT_SET(Global_26D408, 13))
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (!MISC::IS_BIT_SET(Global_8D8, 28))
					{
						if (iLocal_78 && iLocal_81 == 0)
						{
							MISC::SET_BIT(&Global_26D408, 13);
							Global_17C49.f_3011.f_51 = 1;
							func_120("CELL_FOC_HLP", -1);
						}
					}
				}
			}
		}
		if (!HUD::IS_PAUSE_MENU_ACTIVE())
		{
			if (Global_187385.f_11152 == 0 && Global_187385.f_11153 == 0)
			{
				HUD::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
			}
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 200, 1);
			}
			PAD::DISABLE_CONTROL_ACTION(0, 44, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 47, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 91, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 92, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 68, 1);
			if (iLocal_99 == 0)
			{
				PAD::SET_INPUT_EXCLUSIVE(0, Global_381E);
			}
			PAD::SET_INPUT_EXCLUSIVE(0, Global_381B);
			if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
			{
				iLocal_80 = 1;
				Global_3839.f_1 = 3;
				MISC::SET_GAME_PAUSED(0);
			}
			if (MISC::IS_STUNT_JUMP_IN_PROGRESS())
			{
				Global_3839.f_1 = 3;
				MISC::SET_GAME_PAUSED(0);
			}
			if (MISC::IS_BIT_SET(Global_8D8, 3))
			{
				Global_3839.f_1 = 3;
				MISC::SET_GAME_PAUSED(0);
			}
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (func_109())
				{
					Global_3839.f_1 = 3;
					MISC::SET_GAME_PAUSED(0);
				}
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0))
				{
					Global_3839.f_1 = 3;
					MISC::SET_GAME_PAUSED(0);
				}
				if ((PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, 1) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
				{
					if (func_108())
					{
					}
					else
					{
						Global_3839.f_1 = 3;
						MISC::SET_GAME_PAUSED(0);
					}
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					if (Global_10A95 == 1)
					{
						Global_3839.f_1 = 3;
					}
				}
				if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
				{
					if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(PLAYER::PLAYER_PED_ID()) > 0.3f)
					{
						Global_3839.f_1 = 3;
					}
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					func_107();
					iLocal_98 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(iLocal_98) < 0f)
					{
						func_105(0);
					}
					if (iLocal_65 == 1)
					{
						if (iLocal_66 == 1)
						{
							if (!CAM::_0x1F2300CB7FA7B7F6())
							{
								func_105(0);
							}
						}
						else if (!CAM::_0x1F2300CB7FA7B7F6())
						{
							iLocal_66 = 1;
							SYSTEM::WAIT(0);
							RECORDING::_STOP_RECORDING_THIS_FRAME();
						}
					}
				}
				else if (Global_10A95 == 0)
				{
					if (MISC::IS_BIT_SET(Global_8D7, 18))
					{
						func_104();
						if ((Global_3839 == 0 || Global_3839 == 1) || Global_3839 == 2)
						{
							if (!PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(PLAYER::PLAYER_PED_ID()))
							{
								if (PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
								{
								}
								else
								{
									Global_3839.f_1 = 3;
									MISC::SET_GAME_PAUSED(0);
								}
							}
						}
					}
				}
			}
			if (iLocal_92)
			{
				func_103();
			}
			if (Global_3839.f_1 < 4)
			{
			}
			if (iLocal_102 == 0)
			{
				if (iLocal_53 == 0)
				{
					if (iLocal_54 == 0)
					{
						if (iLocal_61 == 0)
						{
							if (Global_3839.f_1 > 3)
							{
								if (iLocal_99)
								{
									func_101();
									if (Global_415A == 0 && Global_4157 == 6)
									{
										HUD::CLEAR_FLOATING_HELP(0, 1);
										HUD::BUSYSPINNER_OFF();
										iLocal_99 = 0;
										func_100();
										if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
										{
											Local_33 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
										}
										func_99();
										iLocal_59++;
										if (func_132())
										{
											func_124(uLocal_90, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_59), SYSTEM::TO_FLOAT(iLocal_60), -1082130432, -1082130432, -1082130432);
										}
										else
										{
											func_124(uLocal_90, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_59), SYSTEM::TO_FLOAT(iLocal_60), -1082130432, -1082130432, -1082130432);
										}
										iLocal_82 = 0;
										iLocal_83 = 0;
										iLocal_84 = 0;
										iLocal_77 = 0;
										func_98();
									}
									if (Global_4157 == 0)
									{
										iLocal_99 = 0;
										HUD::BUSYSPINNER_OFF();
										if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
										{
											Local_33 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
										}
										func_97();
										iLocal_82 = 0;
										iLocal_83 = 0;
										iLocal_84 = 0;
										iLocal_77 = 0;
										func_98();
										if (func_132())
										{
											if (Global_26CF0E == 0)
											{
												if (!MISC::IS_BIT_SET(Global_26D408, 2))
												{
													func_124(uLocal_90, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
											}
										}
										else if (!MISC::IS_BIT_SET(Global_26D408, 2))
										{
											func_124(uLocal_90, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
										}
										func_96();
										func_95(1);
									}
								}
								else if (Global_3839.f_1 != 9)
								{
									if (Global_4156 == 1)
									{
										if (Global_4155 == 0)
										{
											func_94();
										}
									}
									else if ((Global_B37 - Global_B36) > Global_B38)
									{
										if (func_93(2, Global_3819, 0))
										{
											if (func_92() && iLocal_77)
											{
											}
											else if (iLocal_77 == 0)
											{
												MISC::SET_GAME_PAUSED(0);
												AUDIO::STOP_SOUND(iLocal_62);
												iLocal_93 = 0;
												if (Global_4155 == 0)
												{
													func_99();
													Global_4155 = 1;
													HUD::CLEAR_FLOATING_HELP(0, 1);
													iLocal_78 = 0;
													iLocal_68 = 1;
													iLocal_69 = 1;
													iLocal_70 = 1;
													iLocal_71 = 1;
													iLocal_72 = 1;
													iLocal_73 = 1;
													func_91(0, 0);
													func_95(0);
													iLocal_65 = 0;
													func_90();
													iLocal_92 = 0;
													func_88(0, 1);
													func_124(Global_3826, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
											}
										}
									}
									if (iLocal_51 == 0)
									{
										if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
										{
											func_87();
											iLocal_51 = 1;
										}
									}
									else if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										func_87();
										iLocal_51 = 0;
									}
									if (iLocal_52 == 0)
									{
										if (MISC::IS_BIT_SET(Global_8D7, 28))
										{
											func_87();
											iLocal_52 = 1;
										}
									}
									else if (!MISC::IS_BIT_SET(Global_8D7, 28))
									{
										func_87();
										iLocal_52 = 0;
									}
									if (Global_4155 == 1)
									{
										func_80();
									}
									else if (Global_3839.f_1 > 4)
									{
										if (iLocal_74 == 1 && iLocal_75 == 0)
										{
											func_76();
										}
										if (iLocal_74 == 0 && iLocal_75 == 1)
										{
											func_97();
											if (iLocal_86 == 1 || iLocal_86 == 0)
											{
												if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
												{
													if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
													{
														func_123(uLocal_90, "CLOSE_SHUTTER");
														iLocal_85 = MISC::GET_GAME_TIMER();
														while (MISC::GET_GAME_TIMER() < (iLocal_85 + iLocal_87) && Global_3839.f_1 > 3)
														{
															HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
															func_103();
															func_75();
															RECORDING::_STOP_RECORDING_THIS_FRAME();
															SYSTEM::WAIT(0);
														}
													}
												}
												if (func_132())
												{
													if (Global_26CF0E == 0)
													{
														if (!MISC::IS_BIT_SET(Global_26D408, 2))
														{
															func_124(uLocal_90, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
														}
													}
												}
												else if (!MISC::IS_BIT_SET(Global_26D408, 2))
												{
													func_124(uLocal_90, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
												func_103();
												HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
												iLocal_82 = 0;
												iLocal_83 = 0;
												iLocal_84 = 0;
												iLocal_77 = 0;
												func_98();
												iLocal_86 = 0;
												func_123(uLocal_90, "OPEN_SHUTTER");
											}
											func_96();
											func_95(1);
											func_74();
										}
									}
									if (iLocal_93 == 1)
									{
										func_71();
									}
									if (iLocal_79)
									{
										if (SYSTEM::TIMERB() > 500)
										{
											iLocal_78 = 1;
											iLocal_79 = 0;
											MISC::SET_BIT(&Global_8D7, 18);
											if (Global_4155 == 0)
											{
												func_88(1, 1);
											}
										}
									}
									if (iLocal_77 == 0)
									{
										if (iLocal_78 && Global_4155 == 0)
										{
											if ((iLocal_80 == 0 && iLocal_75 == 0) && Global_4158 == 0)
											{
												func_10();
											}
										}
										else
										{
											func_75();
										}
									}
									else if (iLocal_74 == 0)
									{
										func_5();
									}
								}
							}
						}
					}
				}
				else
				{
					if (Global_3839.f_1 > 3)
					{
						if (Global_4156 == 1)
						{
							if (Global_4155 == 0)
							{
								func_94();
							}
						}
					}
					func_4();
				}
			}
			else
			{
				if (iLocal_104 == 1)
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "CELL_CAM_FW_1", iLocal_101, "CELL_CAM_FW_2", 0, -1, "", "", 1);
				}
				if (iLocal_104 == 2)
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "ERROR_NO_SC_CAMERAPHONE", iLocal_101, "", 0, -1, "", "", 1);
				}
				if (iLocal_104 == 6)
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "SC_ERROR_BANNED", iLocal_101, "", 0, -1, "", "", 1);
				}
				if (iLocal_104 == 3)
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "ERROR_UPDATE_SC_CAMERAPHONE", iLocal_101, "", 0, -1, "", "", 1);
				}
				if (iLocal_104 == 7)
				{
					if (MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION())
					{
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "CELL_CAM_TEMP_3X", iLocal_101, "", 0, -1, "", "", 1);
					}
					if (MISC::IS_PS3_VERSION() || MISC::IS_ORBIS_VERSION())
					{
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "CELL_CAM_TEMP_3P", iLocal_101, "", 0, -1, "", "", 1);
					}
					if (MISC::IS_PC_VERSION())
					{
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "CELL_CAM_TEMP_30", iLocal_101, "", 0, -1, "", "", 1);
					}
				}
				if (iLocal_104 == 4)
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "CELL_CAM_CCW_1", iLocal_101, "CELL_CAM_CCW_2", 0, -1, "", "", 1);
				}
				if (iLocal_104 == 5)
				{
					iVar0 = NETWORK::NETWORK_GET_AGE_GROUP();
					switch (iVar0)
					{
						case -1:
							HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "HUD_AGE_I", iLocal_101, "", 0, -1, "", "", 1);
							break;
						
						case 0:
							HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "HUD_AGE_P", iLocal_101, "", 0, -1, "", "", 1);
							break;
						
						case 1:
							HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "HUD_AGE_C", iLocal_101, "", 0, -1, "", "", 1);
							break;
						
						case 2:
							HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "HUD_AGE_T", iLocal_101, "", 0, -1, "", "", 1);
							break;
						
						default:
							HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "HUD_AGE_P", iLocal_101, "", 0, -1, "", "", 1);
							break;
						}
				}
				if (iLocal_104 == 0)
				{
				}
				if (iLocal_104 == 2 || iLocal_104 == 3)
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 202))
					{
						iLocal_102 = 0;
						iLocal_104 = 0;
						func_88(0, 1);
					}
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 201))
					{
						iLocal_103 = 1;
					}
					if (iLocal_103 == 1)
					{
						if (PAD::IS_CONTROL_JUST_RELEASED(2, 201))
						{
							iLocal_102 = 0;
							iLocal_104 = 0;
							func_88(0, 1);
							iLocal_103 = 0;
							HUD::SET_SOCIAL_CLUB_TOUR("Gallery");
							HUD::OPEN_SOCIAL_CLUB_MENU();
						}
					}
				}
				else if (iLocal_104 == 7)
				{
					if (MISC::IS_ORBIS_VERSION())
					{
						if (PAD::IS_CONTROL_JUST_PRESSED(2, 201))
						{
							iLocal_102 = 0;
							iLocal_104 = 0;
							func_88(0, 1);
							iLocal_61 = 0;
						}
					}
					else if (PAD::IS_CONTROL_JUST_PRESSED(2, 202))
					{
						iLocal_102 = 0;
						iLocal_104 = 0;
						func_88(0, 1);
						iLocal_61 = 0;
					}
					if (!MISC::IS_ORBIS_VERSION())
					{
						if (PAD::IS_CONTROL_JUST_PRESSED(2, Global_381D))
						{
							iLocal_102 = 0;
							iLocal_104 = 0;
							func_88(0, 1);
							if (MISC::IS_BIT_SET(Global_8D8, 28))
							{
								iLocal_61 = 0;
							}
							else
							{
								iLocal_61 = 2;
							}
							iLocal_57 = MISC::GET_GAME_TIMER();
							PLAYER::DISPLAY_SYSTEM_SIGNIN_UI(1);
						}
					}
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(2, 201))
				{
					iLocal_102 = 0;
					iLocal_104 = 0;
					func_88(0, 1);
				}
			}
		}
		iLocal_58 = MISC::GET_GAME_TIMER();
		if (func_3() || iLocal_80)
		{
			func_1(0);
			func_91(0, 0);
			func_95(0);
			iLocal_65 = 0;
			func_90();
			Global_4155 = 0;
			Global_4156 = 0;
			Global_4158 = 0;
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_90);
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_91);
			MISC::SET_GAME_PAUSED(0);
			if (Global_38D9 == 1)
			{
				MISC::SET_BIT(&Global_8D7, 17);
			}
			else
			{
				MISC::CLEAR_BIT(&Global_8D7, 17);
			}
			HUD::CLEAR_FLOATING_HELP(0, 1);
			PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), 1);
			MISC::CLEAR_BIT(&Global_8D9, 3);
			MISC::CLEAR_BIT(&Global_26D408, 3);
			HUD::RESET_HUD_COMPONENT_VALUES(15);
			Global_4159 = 1;
			AUDIO::STOP_SOUND(iLocal_62);
			AUDIO::RELEASE_SOUND_ID(iLocal_62);
			HUD::BUSYSPINNER_OFF();
			func_90();
			MOBILE::_0xA2CCBE62CD4C91A4(0);
			MOBILE::_SET_MOBILE_PHONE_UNK(0);
			MOBILE::_0x1B0B4AEED5B9B41C(1f);
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), "Mood_Normal_1", 0);
				PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID());
			}
			if (Global_26CF0E > 0 && Global_26CF0E < 13)
			{
				GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sLocal_19[Global_26CF0E]);
			}
			MISC::CLEAR_BIT(&Global_8D7, 18);
			func_88(0, 1);
			if (func_130(0, 1, iLocal_30))
			{
				iLocal_30 = 0;
			}
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	}
}

void func_1(int iParam0)//Position - 0x101F
{
	if (func_2())
	{
		if (iParam0 == 1)
		{
			MOBILE::_CELL_CAM_SET_LEAN(1);
		}
		else if (Global_3839.f_1 > 3)
		{
			MOBILE::_CELL_CAM_SET_LEAN(0);
		}
	}
}

int func_2()//Position - 0x104A
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Global_10A95)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
	iVar1 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_26D4D2 || iVar2)
	{
		return 1;
	}
	return 1;
}

int func_3()//Position - 0x1091
{
	if (((Global_3839.f_1 == 1 || Global_3839.f_1 == 3) || Global_3839.f_1 == 0) || Global_3801 == 1)
	{
		Global_382C = 1;
		return 1;
	}
	return 0;
}

void func_4()//Position - 0x10D4
{
	iLocal_56 = GRAPHICS::GET_STATUS_OF_SORTED_LIST_OPERATION(0);
	switch (iLocal_56)
	{
		case 0:
			iLocal_53 = 0;
			iLocal_59 = GRAPHICS::GET_CURRENT_NUMBER_OF_CLOUD_PHOTOS();
			iLocal_60 = GRAPHICS::GET_MAXIMUM_NUMBER_OF_CLOUD_PHOTOS();
			if (iLocal_54 == 1)
			{
				if (iLocal_77 == 0)
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_90))
					{
						if (func_132())
						{
							if (Global_26CF0E == 0)
							{
								if (!MISC::IS_BIT_SET(Global_26D408, 2))
								{
									func_124(uLocal_90, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
								}
							}
							func_124(uLocal_90, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_59), SYSTEM::TO_FLOAT(iLocal_60), -1082130432, -1082130432, -1082130432);
						}
						else
						{
							if (!MISC::IS_BIT_SET(Global_26D408, 2))
							{
								func_124(uLocal_90, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							func_124(uLocal_90, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_59), SYSTEM::TO_FLOAT(iLocal_60), -1082130432, -1082130432, -1082130432);
						}
					}
				}
				else if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_90))
				{
					func_124(uLocal_90, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_124(uLocal_90, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_59), SYSTEM::TO_FLOAT(iLocal_60), -1082130432, -1082130432, -1082130432);
				}
				iLocal_54 = 0;
			}
			HUD::BUSYSPINNER_OFF();
			break;
		
		case 1:
			if (!HUD::BUSYSPINNER_IS_ON())
			{
				HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON("CELL_SPINNER2");
				HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(1);
			}
			break;
		
		case 2:
			if (MISC::IS_BIT_SET(Global_8D8, 28))
			{
				iLocal_53 = 0;
				iLocal_59 = 0;
				iLocal_60 = 0;
			}
			else
			{
				Global_3839.f_1 = 3;
				Global_4159 = 1;
			}
			HUD::BUSYSPINNER_OFF();
			break;
	}
}

void func_5()//Position - 0x126F
{
	if (func_93(2, Global_381A, 0))
	{
		func_1(0);
		if (MISC::IS_BIT_SET(Global_8D8, 28))
		{
			MISC::SET_GAME_PAUSED(0);
			SYSTEM::SETTIMERB(0);
			func_100();
			iLocal_77 = 0;
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				Local_33 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			}
			func_99();
			iLocal_86 = 1;
		}
		else if (func_9())
		{
			if (MISC::IS_BIT_SET(Global_8D8, 14))
			{
				func_120("CELL_299", -1);
			}
			else
			{
				func_99();
				func_8();
			}
		}
		else
		{
			iLocal_102 = 1;
			func_88(1, 1);
		}
	}
	if (MISC::IS_BIT_SET(Global_8D7, 22))
	{
		func_1(0);
		while (SYSTEM::TIMERA() < 2000)
		{
			SYSTEM::WAIT(0);
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			RECORDING::_STOP_RECORDING_THIS_FRAME();
			func_75();
			func_107();
			func_103();
		}
		MISC::SET_GAME_PAUSED(0);
		func_100();
		SYSTEM::SETTIMERB(0);
		iLocal_77 = 0;
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			Local_33 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		}
		func_98();
		func_99();
	}
	if (func_93(2, Global_381E, 0))
	{
		func_1(0);
		if (func_92() || MISC::IS_BIT_SET(Global_8D8, 28))
		{
		}
		else
		{
			MISC::SET_GAME_PAUSED(0);
			SYSTEM::SETTIMERB(0);
			iLocal_86 = 1;
			func_100();
			iLocal_77 = 0;
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				Local_33 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			}
			func_99();
		}
	}
	if (MISC::IS_BIT_SET(Global_8D7, 28))
	{
		if (func_93(2, Global_381D, 0))
		{
			func_1(0);
			MISC::SET_GAME_PAUSED(0);
			GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(0, 0);
			SYSTEM::WAIT(0);
			RECORDING::_STOP_RECORDING_THIS_FRAME();
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			SYSTEM::WAIT(0);
			RECORDING::_STOP_RECORDING_THIS_FRAME();
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			GRAPHICS::FREE_MEMORY_FOR_HIGH_QUALITY_PHOTO();
			GRAPHICS::FREE_MEMORY_FOR_LOW_QUALITY_PHOTO();
			Global_4159 = 1;
			iLocal_93 = 0;
			iLocal_76 = 0;
			func_88(0, 1);
			Global_4155 = 1;
			HUD::CLEAR_FLOATING_HELP(0, 1);
			iLocal_78 = 0;
			iLocal_68 = 1;
			iLocal_69 = 1;
			iLocal_70 = 1;
			iLocal_71 = 1;
			iLocal_72 = 1;
			iLocal_73 = 1;
			func_6();
			iLocal_77 = 0;
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				Local_33 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			}
			func_91(0, 0);
			func_95(0);
			iLocal_65 = 0;
			func_90();
			MISC::SET_BIT(&Global_8D7, 9);
			iLocal_92 = 0;
			func_124(Global_3826, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
}

void func_6()//Position - 0x149A
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_382E, 1);
		func_7();
	}
}

void func_7()//Position - 0x14BF
{
	if (func_2())
	{
		MOBILE::_CELL_CAM_MOVE_FINGER(5);
	}
}

void func_8()//Position - 0x14D3
{
	iLocal_99 = 1;
	Global_415A = 1;
	HUD::CLEAR_FLOATING_HELP(0, 1);
}

int func_9()//Position - 0x14E8
{
	if (iLocal_57 == iLocal_58)
	{
		if (iLocal_55)
		{
			iLocal_55 = 1;
		}
	}
	if (Global_3839.f_1 < 4)
	{
		return 0;
	}
	if (iLocal_59 == iLocal_60 || iLocal_59 > iLocal_60)
	{
		iLocal_104 = 1;
		iLocal_101 = 2;
		return 0;
	}
	return 1;
}

void func_10()//Position - 0x1530
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		iVar0 = 179;
		iVar1 = 21;
	}
	else
	{
		iVar0 = 228;
		iVar1 = 229;
	}
	if (iLocal_81)
	{
		func_66();
		func_62();
		func_61();
		fLocal_35 = CAM::GET_GAMEPLAY_CAM_RELATIVE_PITCH();
		fLocal_36 = CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING();
		if (iLocal_83 == 0)
		{
			if (PAD::IS_CONTROL_PRESSED(2, iVar0) && !PAD::IS_CONTROL_PRESSED(2, iVar1))
			{
				iLocal_83 = 1;
				func_124(uLocal_91, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_124(uLocal_91, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (MISC::IS_BIT_SET(Global_8D7, 28))
				{
					func_59(uLocal_91, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 177, 1), "CELL_281");
					func_59(uLocal_91, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 179, 1), "CELL_287");
					func_59(uLocal_91, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 178, 1), "CELL_CAM_SELFIE_2");
				}
				else
				{
					func_59(uLocal_91, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 176, 1), "CELL_280");
					func_59(uLocal_91, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 177, 1), "CELL_281");
					func_59(uLocal_91, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 178, 1), "CELL_CAM_SELFIE_2");
				}
				func_58();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_91, "SET_MAX_WIDTH");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_39);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				func_124(uLocal_91, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else if (!PAD::IS_CONTROL_PRESSED(2, iVar0) || PAD::IS_CONTROL_PRESSED(2, iVar1))
		{
			iLocal_83 = 0;
			func_98();
		}
		if (iLocal_84 == 0)
		{
			if (PAD::IS_CONTROL_PRESSED(2, iVar1) && !PAD::IS_CONTROL_PRESSED(2, iVar0))
			{
				iLocal_84 = 1;
				func_124(uLocal_91, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_124(uLocal_91, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (MISC::IS_BIT_SET(Global_8D7, 28))
				{
					func_59(uLocal_91, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 177, 1), "CELL_281");
					func_59(uLocal_91, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 179, 1), "CELL_287");
				}
				else
				{
					func_59(uLocal_91, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 176, 1), "CELL_280");
					func_59(uLocal_91, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 177, 1), "CELL_281");
				}
				func_57();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_91, "SET_MAX_WIDTH");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_39);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				func_124(uLocal_91, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else if (!PAD::IS_CONTROL_PRESSED(2, iVar1) || PAD::IS_CONTROL_PRESSED(2, iVar0))
		{
			iLocal_84 = 0;
			func_98();
		}
	}
	else
	{
		PAD::ENABLE_CONTROL_ACTION(0, 2, 1);
		PAD::ENABLE_CONTROL_ACTION(0, 1, 1);
	}
	if (PAD::_0x6CD79468A1E595C6(2))
	{
		func_98();
	}
	func_107();
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 200, 1);
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 183))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_382E, 1);
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
			{
				if (MISC::IS_BIT_SET(Global_26D408, 2))
				{
					MISC::CLEAR_BIT(&Global_26D408, 2);
					if (!MISC::IS_BIT_SET(Global_26D408, 2))
					{
						func_124(uLocal_90, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					}
				}
				else
				{
					MISC::SET_BIT(&Global_26D408, 2);
					func_124(uLocal_90, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
		}
	}
	if (iLocal_81)
	{
		if (iLocal_82 == 1)
		{
			iLocal_82 = 0;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_90, "SET_FOCUS_LOCK");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
			func_56("CELL_FOCUS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (!func_55(14))
		{
			if (MISC::IS_BIT_SET(Global_26D408, 10))
			{
				if ((Global_10A95 == 0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("pi_menu")) > 0) && func_54())
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_90, "SET_FOCUS_LOCK");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_ACTTL");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(HUD::_GET_LABEL_TEXT(&Global_26D6BB));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					MISC::CLEAR_BIT(&Global_26D408, 10);
				}
			}
		}
		else if (MISC::IS_BIT_SET(Global_26D408, 10))
		{
			MISC::CLEAR_BIT(&Global_26D408, 10);
		}
		iLocal_32 = MISC::GET_GAME_TIMER();
		if ((iLocal_32 - iLocal_31) > 1500)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				Local_34 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_34, Local_33, 1) > 5f)
				{
					Global_3839.f_1 = 3;
					MISC::SET_GAME_PAUSED(0);
				}
				iLocal_31 = MISC::GET_GAME_TIMER();
			}
		}
	}
	else if (iLocal_82)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, 182))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_382E, 1);
			iLocal_82 = 0;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_90, "SET_FOCUS_LOCK");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
			func_56("CELL_FOCUS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
	else if (PAD::IS_CONTROL_PRESSED(0, 182))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_382E, 1);
		iLocal_82 = 1;
		if (!func_55(14))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_90, "SET_FOCUS_LOCK");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
			func_56("CELL_FOCUS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
	if (func_132())
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 186))
		{
			if (iLocal_81)
			{
				iLocal_23++;
				if (iLocal_23 > 0 && iLocal_23 < 7)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_382E, 1);
						PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), "Mood_Normal_1", 0);
						PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID());
						if (Global_3839 == 0)
						{
							iVar4 = 0;
							iVar2 = PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0);
							if (iVar2 == 20 || iVar2 == 14)
							{
								iVar4 = 1;
							}
							iVar3 = PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 1);
							if (iVar3 != -1)
							{
								iVar4 = 1;
							}
							if (iVar4 == 1)
							{
								if ((((iLocal_23 == 2 || iLocal_23 == 3) || iLocal_23 == 4) || iLocal_23 == 8) || iLocal_23 == 9)
								{
									if (iVar2 == -1 && iVar3 > -1)
									{
										if (iLocal_23 == 3)
										{
											PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), sLocal_21[iLocal_23], 0);
										}
									}
								}
								else
								{
									PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), sLocal_21[iLocal_23], 0);
								}
							}
							else
							{
								PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), sLocal_21[iLocal_23], 0);
							}
						}
						else
						{
							PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), sLocal_21[iLocal_23], 0);
						}
					}
				}
				if (iLocal_23 == 7 || iLocal_23 > 7)
				{
					iLocal_23 = 0;
				}
				if (iLocal_23 == 0)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
					{
						PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), "Mood_Normal_1", 0);
						PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID());
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_382E, 1);
					}
				}
			}
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 185))
		{
			if (iLocal_81)
			{
				if (bLocal_28 == 1)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_382E, 1);
					if (iLocal_27 == 0)
					{
						iLocal_27 = 1;
						iLocal_26 = 1;
						if (MISC::ARE_STRINGS_EQUAL(sLocal_18[Global_26CF0D], "phone_cam12DUMMY"))
						{
						}
						else
						{
							MOBILE::_0xA2CCBE62CD4C91A4(1);
							MOBILE::_SET_MOBILE_PHONE_UNK(1);
						}
					}
					else
					{
						iLocal_27 = 0;
						iLocal_26 = 0;
						MOBILE::_0xA2CCBE62CD4C91A4(0);
						MOBILE::_SET_MOBILE_PHONE_UNK(0);
					}
				}
			}
			else if (bLocal_29 == 1)
			{
				if (iLocal_26 == 0)
				{
					iLocal_26 = 1;
					iLocal_27 = 1;
					MOBILE::_0xA2CCBE62CD4C91A4(1);
					MOBILE::_SET_MOBILE_PHONE_UNK(1);
				}
				else
				{
					iLocal_26 = 0;
					iLocal_27 = 0;
					MOBILE::_0xA2CCBE62CD4C91A4(0);
					MOBILE::_SET_MOBILE_PHONE_UNK(0);
				}
			}
		}
	}
	if (iLocal_25 == 1)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(0, 172))
		{
			if (func_132())
			{
				Global_26CF0E++;
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_382E, 1);
			}
			if (Global_26CF0E == 13)
			{
				func_95(0);
				MOBILE::_0x1B0B4AEED5B9B41C(1f);
				GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sLocal_19[(Global_26CF0E - 1)]);
				Global_26CF0E = 0;
				func_53();
				if (iLocal_20 == 1)
				{
					MISC::CLEAR_BIT(&Global_26D408, 2);
					iLocal_20 = 0;
					func_124(uLocal_90, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
			if (Global_26CF0E > 0 && Global_26CF0E < 13)
			{
				iLocal_25 = 0;
				iLocal_24 = 0;
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sLocal_19[Global_26CF0E], 0);
			}
		}
	}
	if (Global_26CF0E > 0)
	{
		if (iLocal_25 == 0)
		{
			if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sLocal_19[Global_26CF0E]))
			{
				iLocal_24 = 1;
				iLocal_25 = 1;
				if (!GRAPHICS::_0xBCEDB009461DA156())
				{
					func_95(1);
				}
				if (iLocal_20 == 0)
				{
					if (!MISC::IS_BIT_SET(Global_26D408, 2))
					{
						iLocal_20 = 1;
					}
				}
				MISC::SET_BIT(&Global_26D408, 2);
				func_124(uLocal_90, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				MOBILE::_0x1B0B4AEED5B9B41C(0.25f);
				GRAPHICS::_0x27FEB5254759CDE3(sLocal_19[Global_26CF0E], 0);
			}
		}
		if (iLocal_24 == 1)
		{
			if (Global_26CF0E == 1 || Global_26CF0E == 3)
			{
			}
			if (Global_26CF0E == 2 || Global_26CF0E == 4)
			{
			}
		}
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(0, 173))
	{
		if (func_132())
		{
			func_90();
			Global_26CF0D++;
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_382E, 1);
		}
		if (Global_26CF0D == 13)
		{
			Global_26CF0D = 0;
		}
		if (Global_26CF0D == 0)
		{
			if (func_132())
			{
				func_90();
			}
		}
		else
		{
			func_96();
		}
		func_52();
	}
	if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 184))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
			{
				Local_33 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_382E, 1);
				func_124(uLocal_90, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_123(uLocal_90, "CLOSE_SHUTTER");
				iLocal_85 = MISC::GET_GAME_TIMER();
				while (MISC::GET_GAME_TIMER() < (iLocal_85 + iLocal_89) && Global_3839.f_1 > 3)
				{
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					func_103();
					func_75();
					RECORDING::_STOP_RECORDING_THIS_FRAME();
					SYSTEM::WAIT(0);
				}
				if (iLocal_81 == 0)
				{
					AUDIO::STOP_SOUND(iLocal_62);
					iLocal_81 = 1;
					func_51(1);
					func_50();
					MISC::SET_BIT(&Global_8D9, 3);
					iLocal_31 = MISC::GET_GAME_TIMER();
				}
				else
				{
					iLocal_83 = 0;
					iLocal_84 = 0;
					func_51(0);
					iLocal_81 = 0;
					MISC::CLEAR_BIT(&Global_8D9, 3);
				}
				iLocal_85 = MISC::GET_GAME_TIMER();
				while (MISC::GET_GAME_TIMER() < (iLocal_85 + iLocal_87) && Global_3839.f_1 > 3)
				{
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					func_103();
					func_75();
					RECORDING::_STOP_RECORDING_THIS_FRAME();
					SYSTEM::WAIT(0);
				}
				func_123(uLocal_90, "OPEN_SHUTTER");
				if (func_132())
				{
					if (Global_26CF0E == 0)
					{
						if (!MISC::IS_BIT_SET(Global_26D408, 2))
						{
							func_124(uLocal_90, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						}
					}
				}
				else if (!MISC::IS_BIT_SET(Global_26D408, 2))
				{
					func_124(uLocal_90, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_103();
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				if (MISC::IS_BIT_SET(Global_8D7, 28))
				{
					StringCopy(&cLocal_95, "CELL_296", 16);
					func_49();
				}
				else
				{
					StringCopy(&cLocal_95, "CELL_295", 16);
					func_27();
				}
			}
		}
	}
	if (iLocal_81 == 0)
	{
		if (iLocal_63 == 0)
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(0, 40) || PAD::IS_CONTROL_JUST_PRESSED(0, 41))
			{
				fLocal_64 = CAM::GET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR();
				if (fLocal_64 > 1f && fLocal_64 < 4.5f)
				{
					if (AUDIO::HAS_SOUND_FINISHED(iLocal_62))
					{
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_62, "Camera_Zoom", &Global_382E, 1);
					}
				}
				else
				{
					AUDIO::STOP_SOUND(iLocal_62);
				}
				iLocal_63 = 1;
			}
		}
		else if (PAD::IS_CONTROL_PRESSED(0, 40) || PAD::IS_CONTROL_PRESSED(0, 41))
		{
			fLocal_64 = CAM::GET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR();
			if (fLocal_64 > 1f && fLocal_64 < 4.5f)
			{
				if (AUDIO::HAS_SOUND_FINISHED(iLocal_62))
				{
					AUDIO::PLAY_SOUND_FRONTEND(iLocal_62, "Camera_Zoom", &Global_382E, 1);
				}
			}
			else
			{
				AUDIO::STOP_SOUND(iLocal_62);
			}
		}
		else
		{
			AUDIO::STOP_SOUND(iLocal_62);
		}
	}
	if (func_93(2, Global_381A, 0))
	{
		fLocal_37 = CAM::GET_GAMEPLAY_CAM_RELATIVE_PITCH();
		fLocal_38 = CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING();
		GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(0, 0);
		MISC::SET_BIT(&Global_8D7, 21);
		AUDIO::STOP_SOUND(iLocal_62);
		iLocal_77 = 1;
		func_124(uLocal_90, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_124(uLocal_90, "SHOW_REMAINING_PHOTOS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Camera_Shoot", &Global_382E, 1);
		func_123(uLocal_90, "CLOSE_SHUTTER");
		Local_42 = { -90.3f, 0f, 90f };
		MOBILE::SET_MOBILE_PHONE_ROTATION(Local_42, 0);
		if (!func_132())
		{
			func_90();
		}
		Global_4158 = 1;
		HUD::CLEAR_FLOATING_HELP(0, 1);
		while (Global_4157 < 6 && Global_3839.f_1 > 3)
		{
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			func_103();
			func_75();
			func_107();
			RECORDING::_STOP_RECORDING_THIS_FRAME();
			SYSTEM::WAIT(0);
		}
		MOBILE::CELL_CAM_ACTIVATE(0, 0);
		if (Global_37FF)
		{
			func_1(1);
		}
		iLocal_85 = MISC::GET_GAME_TIMER();
		while (MISC::GET_GAME_TIMER() < (iLocal_85 + iLocal_88) && Global_3839.f_1 > 3)
		{
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			func_103();
			func_75();
			RECORDING::_STOP_RECORDING_THIS_FRAME();
			SYSTEM::WAIT(0);
		}
		SYSTEM::SETTIMERA(0);
		func_123(uLocal_90, "OPEN_SHUTTER");
		MISC::CLEAR_BIT(&Global_8D7, 21);
		func_98();
		if (Global_3839.f_1 > 3)
		{
			if (Global_10A95)
			{
				func_20(1074, 1, -1);
				func_19();
				func_16(23, 0);
			}
			else
			{
				switch (func_11())
				{
					case 0:
						STATS::STAT_INCREMENT(joaat("sp0_no_photos_taken"), 1f);
						break;
					
					case 1:
						STATS::STAT_INCREMENT(joaat("sp1_no_photos_taken"), 1f);
						break;
					
					case 2:
						STATS::STAT_INCREMENT(joaat("sp2_no_photos_taken"), 1f);
						break;
				}
				func_19();
			}
			func_95(0);
		}
		func_103();
	}
	if (MISC::IS_BIT_SET(Global_8D7, 28))
	{
		if (func_93(2, Global_381D, 0))
		{
			GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(0, 0);
			SYSTEM::WAIT(0);
			RECORDING::_STOP_RECORDING_THIS_FRAME();
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			SYSTEM::WAIT(0);
			RECORDING::_STOP_RECORDING_THIS_FRAME();
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			GRAPHICS::FREE_MEMORY_FOR_HIGH_QUALITY_PHOTO();
			GRAPHICS::FREE_MEMORY_FOR_LOW_QUALITY_PHOTO();
			Global_4159 = 1;
			iLocal_93 = 0;
			iLocal_76 = 1;
			Global_4155 = 1;
			HUD::CLEAR_FLOATING_HELP(0, 1);
			iLocal_78 = 0;
			iLocal_68 = 1;
			iLocal_69 = 1;
			iLocal_70 = 1;
			iLocal_71 = 1;
			iLocal_72 = 1;
			iLocal_73 = 1;
			func_6();
			iLocal_77 = 0;
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				Local_33 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			}
			func_91(0, 0);
			func_95(0);
			iLocal_65 = 0;
			func_90();
			MISC::SET_BIT(&Global_8D7, 9);
			MISC::SET_GAME_PAUSED(0);
			iLocal_92 = 0;
			func_124(Global_3826, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
}

int func_11()//Position - 0x232B
{
	func_12();
	return Global_17C49.f_6C1.f_21B.f_C8D;
}

void func_12()//Position - 0x2344
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_15(Global_17C49.f_6C1.f_21B.f_C8D) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_14(PLAYER::PLAYER_PED_ID());
			if (func_13(iVar0) && (!func_55(14) || Global_17832))
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

bool func_13(int iParam0)//Position - 0x2441
{
	return iParam0 < 3;
}

int func_14(int iParam0)//Position - 0x244D
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
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

int func_15(int iParam0)//Position - 0x248A
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

void func_16(int iParam0, int iParam1)//Position - 0x24B4
{
	int iVar0;
	
	if (func_18(iParam0, iParam1))
	{
		iVar0 = func_17();
		Global_25284D[iVar0] = iParam0;
	}
}

int func_17()//Position - 0x24D7
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

int func_18(int iParam0, var uParam1)//Position - 0x250C
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

void func_19()//Position - 0x2592
{
	iLocal_71 = 1;
	iLocal_72 = 1;
	iLocal_73 = 1;
	iLocal_74 = 1;
	iLocal_75 = 0;
	Global_37FA = { Global_380A[Global_3802 /*3*/] };
	func_88(0, 1);
	func_91(0, 0);
	func_95(0);
	iLocal_65 = 0;
	func_90();
	if (!MISC::IS_BIT_SET(Global_8D8, 28))
	{
		if (NETWORK::NETWORK_HAS_SOCIAL_NETWORKING_SHARING_PRIV() == 0)
		{
			if (MISC::IS_XBOX360_VERSION())
			{
				if (iLocal_67 == 0)
				{
					iLocal_67 = 1;
				}
			}
		}
	}
}

void func_20(int iParam0, int iParam1, int iParam2)//Position - 0x25F5
{
	int iVar0;
	
	iVar0 = func_24(iParam0, func_25(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_23(iParam0))
	{
		func_22(iParam0, iVar0, iParam2, 1);
	}
	else
	{
		func_21(iParam0, iVar0, iParam2, 1);
	}
}

void func_21(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x2636
{
	int iVar0;
	
	iVar0 = Global_25744D[iParam0 /*6*/][func_25(uParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 775:
			Global_1460FF[func_25(uParam2)] = iParam1;
			break;
		
		case 776:
			Global_146105[func_25(uParam2)] = iParam1;
			break;
		
		case 777:
			Global_14610B[func_25(uParam2)] = iParam1;
			break;
		
		case 778:
			Global_146111[func_25(uParam2)] = iParam1;
			break;
		
		case 765:
			Global_1460E7[func_25(uParam2)] = iParam1;
			break;
		
		case 766:
			Global_1460ED[func_25(uParam2)] = iParam1;
			break;
		
		case 767:
			Global_1460F3[func_25(uParam2)] = iParam1;
			break;
		
		case 768:
			Global_1460F9[func_25(uParam2)] = iParam1;
			break;
		
		case 755:
			Global_1460CF[func_25(uParam2)] = iParam1;
			break;
		
		case 756:
			Global_1460D5[func_25(uParam2)] = iParam1;
			break;
		
		case 757:
			Global_1460DB[func_25(uParam2)] = iParam1;
			break;
		
		case 758:
			Global_1460E1[func_25(uParam2)] = iParam1;
			break;
		
		case 745:
			Global_146117[func_25(uParam2)] = iParam1;
			break;
		
		case 746:
			Global_14611D[func_25(uParam2)] = iParam1;
			break;
		
		case 747:
			Global_146123[func_25(uParam2)] = iParam1;
			break;
		
		case 748:
			Global_146129[func_25(uParam2)] = iParam1;
			break;
		
		case 1290:
			Global_14612F[func_25(uParam2)] = iParam1;
			break;
		
		case 627:
			Global_146135[func_25(uParam2)] = iParam1;
			break;
		
		case 1265:
			Global_14613B[func_25(uParam2)] = iParam1;
			break;
		
		case 1862:
			Global_25C7E2[0 /*6*/][func_25(uParam2)] = iParam1;
			break;
		
		case 2251:
			Global_25C7E2[1 /*6*/][func_25(uParam2)] = iParam1;
			break;
		
		case 752:
			Global_146141[func_25(uParam2)] = iParam1;
			break;
		
		case 753:
			Global_146147[func_25(uParam2)] = iParam1;
			break;
		
		case 754:
			Global_14614D[func_25(uParam2)] = iParam1;
			break;
		
		case 1223:
			Global_146153[func_25(uParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_22(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x28B0
{
	int iVar0;
	
	iVar0 = Global_25744D[iParam0 /*6*/][func_25(uParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_23(int iParam0)//Position - 0x28DB
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

int func_24(int iParam0, var uParam1, int iParam2)//Position - 0x298F
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_25744D[iParam0 /*6*/][func_25(uParam1)];
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_25(var uParam0)//Position - 0x29C1
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_26();
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

var func_26()//Position - 0x29F5
{
	return Global_1407E1;
}

void func_27()//Position - 0x2A01
{
	if (iLocal_83 == 0 && iLocal_84 == 0)
	{
		func_124(uLocal_91, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_124(uLocal_91, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_59(uLocal_91, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 177, 1), "CELL_281");
		func_59(uLocal_91, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 176, 1), "CELL_280");
		if (iLocal_81)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
				{
					if (PAD::_IS_USING_KEYBOARD(2) || MISC::IS_ORBIS_VERSION())
					{
						func_59(uLocal_91, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_59(uLocal_91, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, 1), "CELL_SP_2NP_XB");
					}
				}
				else if ((Global_10A95 == 0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("pi_menu")) > 0) && func_54())
				{
					func_47();
				}
				else
				{
					if (PAD::_IS_USING_KEYBOARD(2) || MISC::IS_ORBIS_VERSION())
					{
						func_59(uLocal_91, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_59(uLocal_91, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, 1), "CELL_SP_2NP_XB");
					}
					func_59(uLocal_91, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 183, 1), "CELL_GRID");
					func_59(uLocal_91, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(0, 1, 1), "CELL_285");
					if (func_132())
					{
						func_46(5f);
						func_45(6f);
						if (func_29(1))
						{
							func_28(7f);
							if (bLocal_28)
							{
								func_59(uLocal_91, "SET_DATA_SLOT", 8f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, 1), "CELL_DEPTH");
							}
						}
						else if (bLocal_28)
						{
							func_59(uLocal_91, "SET_DATA_SLOT", 7f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
			{
				if (!PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
				{
					func_59(uLocal_91, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(0, 1, 1), "CELL_285");
					func_59(uLocal_91, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 183, 1), "CELL_GRID");
					func_59(uLocal_91, "SET_DATA_SLOT", 5f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 39, 1), "CELL_284");
					if (func_132())
					{
						func_46(6f);
						func_45(7f);
						if (bLocal_29)
						{
							func_59(uLocal_91, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 182, 1), "CELL_FOCUS");
						}
						func_59(uLocal_91, "SET_DATA_SLOT", 8f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, 1), "CELL_DEPTH");
					}
				}
				else
				{
					func_59(uLocal_91, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(0, 1, 1), "CELL_285");
					if (func_132())
					{
						func_46(3f);
						func_45(4f);
						func_59(uLocal_91, "SET_DATA_SLOT", 8f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
			else
			{
				if (PAD::_IS_USING_KEYBOARD(2) || MISC::IS_ORBIS_VERSION())
				{
					func_59(uLocal_91, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, 1), "CELL_SP_1NP_XB");
				}
				else
				{
					func_59(uLocal_91, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, 1), "CELL_SP_1NP_XB");
				}
				if (!PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
				{
					func_59(uLocal_91, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 183, 1), "CELL_GRID");
					func_59(uLocal_91, "SET_DATA_SLOT", 5f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(0, 1, 1), "CELL_285");
					func_59(uLocal_91, "SET_DATA_SLOT", 6f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 39, 1), "CELL_284");
					if (func_132())
					{
						func_46(7f);
						func_45(8f);
						if (bLocal_29)
						{
							func_59(uLocal_91, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 182, 1), "CELL_FOCUS");
						}
						func_59(uLocal_91, "SET_DATA_SLOT", 9f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, 1), "CELL_DEPTH");
					}
				}
				else
				{
					func_59(uLocal_91, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(0, 1, 1), "CELL_285");
					if (func_132())
					{
						func_46(3f);
						func_45(4f);
						func_59(uLocal_91, "SET_DATA_SLOT", 5f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_91, "SET_MAX_WIDTH");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_39);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		func_124(uLocal_91, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_28(float fParam0)//Position - 0x2E55
{
	func_59(uLocal_91, "SET_DATA_SLOT", fParam0, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 174, 1), "CELL_ACTION");
}

int func_29(int iParam0)//Position - 0x2E75
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_44(Global_25C9DB, Global_25C9DC))
		{
			if (iParam0 == 0 || !func_30(Global_25C9DB, Global_25C9DC, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_30(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x2EB5
{
	return func_31(PLAYER::PLAYER_PED_ID(), iParam0, iParam1, bParam2, bParam3, bParam4);
}

int func_31(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x2ECF
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	uVar0 = 2;
	uVar1 = 2;
	uVar2 = 2;
	if (iParam1 == 0)
	{
		iVar6 = 3;
	}
	else if (bParam3)
	{
		iVar6 = 1;
	}
	else if (bParam4)
	{
		iVar6 = 2;
	}
	else
	{
		iVar6 = 0;
	}
	func_39(iParam1, iParam2, &uVar0, &uVar1, &uVar2, iVar6, bParam5);
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_f_freemode_01"))
		{
			iVar3 = func_38(iParam0);
			if (!iVar3 == -1)
			{
				if (func_37(&uVar0, iVar3))
				{
					return 1;
				}
			}
		}
		else
		{
			iVar4 = func_36(iParam0);
			if (!iVar4 == -1)
			{
				if (func_34(&uVar1, iVar4))
				{
					return 1;
				}
			}
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar5 = func_33(iParam0);
			if (!iVar5 == 0)
			{
				if (func_32(&uVar2, iVar5))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_32(var uParam0, int iParam1)//Position - 0x2F9D
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / 32f));
	if (MISC::IS_BIT_SET((*uParam0)[iVar0], (iParam1 - iVar0 * 32)))
	{
		return 1;
	}
	return 0;
}

var func_33(int iParam0)//Position - 0x2FD0
{
	return PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
}

bool func_34(var uParam0, int iParam1)//Position - 0x2FDF
{
	return func_35(uParam0, iParam1);
}

int func_35(var uParam0, int iParam1)//Position - 0x2FEF
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / 32f));
	if (MISC::IS_BIT_SET((*uParam0)[iVar0], (iParam1 - iVar0 * 32)))
	{
		return 1;
	}
	return 0;
}

var func_36(int iParam0)//Position - 0x3022
{
	return PED::GET_PED_PROP_INDEX(iParam0, 0);
}

bool func_37(var uParam0, int iParam1)//Position - 0x3031
{
	return func_35(uParam0, iParam1);
}

var func_38(int iParam0)//Position - 0x3041
{
	return PED::GET_PED_PROP_INDEX(iParam0, 0);
}

void func_39(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)//Position - 0x3050
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					switch (iParam5)
					{
						case 0:
							func_43(uParam3, 38, 1);
							func_41(uParam2, 37, 1);
							break;
						
						case 1:
							func_43(uParam3, 38, 1);
							func_41(uParam2, 37, 1);
							break;
						
						case 2:
							func_43(uParam3, 38, 1);
							func_41(uParam2, 37, 1);
							break;
					}
					break;
			}
			break;
		
		case 0:
			switch (iParam1)
			{
				case 6:
					if (bParam6)
					{
						func_43(uParam3, 16, 1);
						func_43(uParam3, 18, 1);
						func_43(uParam3, 38, 1);
						func_41(uParam2, 16, 1);
						func_41(uParam2, 18, 1);
						func_41(uParam2, 37, 1);
					}
					func_40(uParam4, 3, 1);
					func_40(uParam4, 4, 1);
					func_40(uParam4, 5, 1);
					func_40(uParam4, 6, 1);
					func_40(uParam4, 7, 1);
					func_40(uParam4, 8, 1);
					func_40(uParam4, 9, 1);
					func_40(uParam4, 12, 1);
					func_40(uParam4, 14, 1);
					func_40(uParam4, 15, 1);
					func_40(uParam4, 16, 1);
					func_40(uParam4, 17, 1);
					func_40(uParam4, 18, 1);
					func_40(uParam4, 19, 1);
					func_40(uParam4, 20, 1);
					func_40(uParam4, 21, 1);
					func_40(uParam4, 22, 1);
					func_40(uParam4, 23, 1);
					func_40(uParam4, 24, 1);
					func_40(uParam4, 25, 1);
					func_40(uParam4, 26, 1);
					func_40(uParam4, 36, 1);
					func_40(uParam4, 46, 1);
					func_40(uParam4, 38, 1);
					func_40(uParam4, 28, 1);
					func_40(uParam4, 10, 1);
					func_40(uParam4, 33, 1);
					break;
				
				case 1:
					if (bParam6)
					{
						func_43(uParam3, 16, 1);
						func_43(uParam3, 18, 1);
						func_43(uParam3, 38, 1);
						func_41(uParam2, 18, 1);
						func_41(uParam2, 37, 1);
					}
					func_40(uParam4, 9, 1);
					func_40(uParam4, 12, 1);
					func_40(uParam4, 13, 1);
					func_40(uParam4, 17, 1);
					func_40(uParam4, 18, 1);
					func_40(uParam4, 19, 1);
					func_40(uParam4, 20, 1);
					func_40(uParam4, 21, 1);
					func_40(uParam4, 22, 1);
					func_40(uParam4, 23, 1);
					func_40(uParam4, 24, 1);
					func_40(uParam4, 25, 1);
					func_40(uParam4, 26, 1);
					func_40(uParam4, 36, 1);
					func_40(uParam4, 46, 1);
					func_40(uParam4, 38, 1);
					func_40(uParam4, 29, 1);
					func_40(uParam4, 28, 1);
					func_40(uParam4, 8, 1);
					func_40(uParam4, 10, 1);
					func_40(uParam4, 31, 1);
					func_40(uParam4, 33, 1);
					func_40(uParam4, 34, 1);
					break;
				
				case 10:
					func_40(uParam4, 28, 1);
					break;
				
				case 12:
					if (bParam6)
					{
						func_43(uParam3, 3, 1);
						func_43(uParam3, 4, 1);
						func_43(uParam3, 6, 1);
						func_43(uParam3, 10, 1);
						func_43(uParam3, 13, 1);
						func_43(uParam3, 16, 1);
						func_43(uParam3, 18, 1);
						func_43(uParam3, 38, 1);
						func_43(uParam3, 20, 1);
						func_43(uParam3, 26, 1);
						func_43(uParam3, 27, 1);
						func_43(uParam3, 32, 1);
						func_43(uParam3, 33, 1);
						func_43(uParam3, 37, 1);
						func_43(uParam3, 39, 1);
						func_41(uParam2, 3, 1);
						func_41(uParam2, 4, 1);
						func_41(uParam2, 6, 1);
						func_41(uParam2, 8, 1);
						func_41(uParam2, 9, 1);
						func_41(uParam2, 10, 1);
						func_41(uParam2, 13, 1);
						func_41(uParam2, 18, 1);
						func_41(uParam2, 37, 1);
						func_41(uParam2, 21, 1);
						func_41(uParam2, 26, 1);
						func_41(uParam2, 27, 1);
						func_41(uParam2, 28, 1);
						func_41(uParam2, 32, 1);
						func_41(uParam2, 36, 1);
						func_41(uParam2, 38, 1);
					}
					func_40(uParam4, 2, 1);
					func_40(uParam4, 3, 1);
					func_40(uParam4, 4, 1);
					func_40(uParam4, 14, 1);
					func_40(uParam4, 15, 1);
					func_40(uParam4, 16, 1);
					func_40(uParam4, 9, 1);
					func_40(uParam4, 10, 1);
					func_40(uParam4, 12, 1);
					func_40(uParam4, 13, 1);
					func_40(uParam4, 17, 1);
					func_40(uParam4, 18, 1);
					func_40(uParam4, 19, 1);
					func_40(uParam4, 20, 1);
					func_40(uParam4, 21, 1);
					func_40(uParam4, 22, 1);
					func_40(uParam4, 23, 1);
					func_40(uParam4, 24, 1);
					func_40(uParam4, 25, 1);
					func_40(uParam4, 26, 1);
					func_40(uParam4, 36, 1);
					func_40(uParam4, 46, 1);
					func_40(uParam4, 38, 1);
					func_40(uParam4, 29, 1);
					func_40(uParam4, 28, 1);
					func_40(uParam4, 8, 1);
					func_40(uParam4, 31, 1);
					func_40(uParam4, 32, 1);
					func_40(uParam4, 33, 1);
					func_40(uParam4, 34, 1);
					break;
				
				case 15:
					if (bParam6)
					{
						func_43(uParam3, 16, 1);
						func_43(uParam3, 18, 1);
						func_43(uParam3, 38, 1);
						func_41(uParam2, 18, 1);
						func_41(uParam2, 37, 1);
						func_41(uParam2, 19, 1);
					}
					func_40(uParam4, 3, 1);
					func_40(uParam4, 6, 1);
					func_40(uParam4, 8, 1);
					func_40(uParam4, 9, 1);
					func_40(uParam4, 10, 1);
					func_40(uParam4, 13, 1);
					func_40(uParam4, 17, 1);
					func_40(uParam4, 18, 1);
					func_40(uParam4, 19, 1);
					func_40(uParam4, 20, 1);
					func_40(uParam4, 21, 1);
					func_40(uParam4, 22, 1);
					func_40(uParam4, 23, 1);
					func_40(uParam4, 24, 1);
					func_40(uParam4, 25, 1);
					func_40(uParam4, 26, 1);
					func_40(uParam4, 36, 1);
					func_40(uParam4, 46, 1);
					func_40(uParam4, 38, 1);
					func_40(uParam4, 29, 1);
					func_40(uParam4, 28, 1);
					func_40(uParam4, 31, 1);
					func_40(uParam4, 32, 1);
					func_40(uParam4, 33, 1);
					func_40(uParam4, 34, 1);
					break;
				
				case 18:
					if (bParam6)
					{
						func_43(uParam3, 4, 1);
					}
					break;
				
				case 17:
					func_40(uParam4, 9, 1);
					break;
				
				case 19:
					if (bParam6)
					{
						func_43(uParam3, 16, 1);
						func_43(uParam3, 18, 1);
						func_43(uParam3, 38, 1);
						func_41(uParam2, 16, 1);
						func_41(uParam2, 18, 1);
						func_41(uParam2, 37, 1);
					}
					func_40(uParam4, 9, 1);
					func_40(uParam4, 10, 1);
					func_40(uParam4, 18, 1);
					func_40(uParam4, 19, 1);
					func_40(uParam4, 20, 1);
					func_40(uParam4, 21, 1);
					func_40(uParam4, 22, 1);
					func_40(uParam4, 23, 1);
					func_40(uParam4, 24, 1);
					func_40(uParam4, 25, 1);
					func_40(uParam4, 26, 1);
					func_40(uParam4, 36, 1);
					func_40(uParam4, 46, 1);
					func_40(uParam4, 38, 1);
					func_40(uParam4, 29, 1);
					func_40(uParam4, 8, 1);
					break;
				
				case 21:
					if (bParam6)
					{
						func_43(uParam3, 3, 1);
						func_43(uParam3, 7, 1);
						func_43(uParam3, 0, 1);
						func_43(uParam3, 12, 1);
						func_43(uParam3, 13, 1);
						func_43(uParam3, 15, 1);
						func_43(uParam3, 16, 1);
						func_43(uParam3, 17, 1);
						func_43(uParam3, 18, 1);
						func_43(uParam3, 38, 1);
						func_43(uParam3, 20, 1);
						func_43(uParam3, 21, 1);
						func_43(uParam3, 25, 1);
						func_43(uParam3, 26, 1);
						func_43(uParam3, 27, 1);
						func_43(uParam3, 30, 1);
						func_43(uParam3, 31, 1);
						func_43(uParam3, 32, 1);
						func_43(uParam3, 33, 1);
						func_43(uParam3, 39, 1);
						func_43(uParam3, 37, 1);
						func_41(uParam2, 0, 1);
						func_41(uParam2, 2, 1);
						func_41(uParam2, 3, 1);
						func_41(uParam2, 4, 1);
						func_41(uParam2, 6, 1);
						func_41(uParam2, 7, 1);
						func_41(uParam2, 8, 1);
						func_41(uParam2, 11, 1);
						func_41(uParam2, 13, 1);
						func_41(uParam2, 15, 1);
						func_41(uParam2, 16, 1);
						func_41(uParam2, 17, 1);
						func_41(uParam2, 18, 1);
						func_41(uParam2, 37, 1);
						func_41(uParam2, 19, 1);
						func_41(uParam2, 20, 1);
						func_41(uParam2, 21, 1);
						func_41(uParam2, 22, 1);
						func_41(uParam2, 24, 1);
						func_41(uParam2, 26, 1);
						func_41(uParam2, 27, 1);
						func_41(uParam2, 28, 1);
						func_41(uParam2, 30, 1);
						func_41(uParam2, 31, 1);
						func_41(uParam2, 32, 1);
						func_41(uParam2, 38, 1);
						func_41(uParam2, 36, 1);
					}
					func_40(uParam4, 3, 1);
					func_40(uParam4, 3, 1);
					func_40(uParam4, 4, 1);
					func_40(uParam4, 14, 1);
					func_40(uParam4, 15, 1);
					func_40(uParam4, 16, 1);
					func_40(uParam4, 8, 1);
					func_40(uParam4, 9, 1);
					func_40(uParam4, 10, 1);
					func_40(uParam4, 12, 1);
					func_40(uParam4, 13, 1);
					func_40(uParam4, 17, 1);
					func_40(uParam4, 18, 1);
					func_40(uParam4, 19, 1);
					func_40(uParam4, 20, 1);
					func_40(uParam4, 21, 1);
					func_40(uParam4, 22, 1);
					func_40(uParam4, 23, 1);
					func_40(uParam4, 24, 1);
					func_40(uParam4, 25, 1);
					func_40(uParam4, 26, 1);
					func_40(uParam4, 36, 1);
					func_40(uParam4, 46, 1);
					func_40(uParam4, 38, 1);
					func_40(uParam4, 29, 1);
					func_40(uParam4, 28, 1);
					func_40(uParam4, 31, 1);
					func_40(uParam4, 33, 1);
					func_40(uParam4, 34, 1);
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 3:
					switch (iParam5)
					{
						case 0:
							func_43(uParam3, 13, 1);
							func_43(uParam3, 16, 1);
							func_43(uParam3, 38, 1);
							func_41(uParam2, 2, 1);
							func_41(uParam2, 20, 1);
							func_41(uParam2, 37, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 31, 1);
							break;
						
						case 1:
							func_43(uParam3, 4, 1);
							func_43(uParam3, 13, 1);
							func_43(uParam3, 16, 1);
							func_43(uParam3, 38, 1);
							func_41(uParam2, 2, 1);
							func_41(uParam2, 20, 1);
							func_41(uParam2, 37, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 31, 1);
							func_40(uParam4, 43, 1);
							break;
						
						case 2:
							func_43(uParam3, 13, 1);
							func_43(uParam3, 16, 1);
							func_43(uParam3, 39, 1);
							func_41(uParam2, 2, 1);
							func_41(uParam2, 20, 1);
							func_41(uParam2, 38, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 13, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 31, 1);
							break;
					}
					break;
				
				case 5:
					switch (iParam5)
					{
						case 0:
							func_43(uParam3, 16, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 38, 1);
							func_41(uParam2, 16, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 37, 1);
							func_40(uParam4, 1, 1);
							func_40(uParam4, 2, 1);
							func_40(uParam4, 3, 1);
							func_40(uParam4, 4, 1);
							func_40(uParam4, 5, 1);
							func_40(uParam4, 7, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 12, 1);
							func_40(uParam4, 13, 1);
							func_40(uParam4, 14, 1);
							func_40(uParam4, 15, 1);
							func_40(uParam4, 16, 1);
							func_40(uParam4, 17, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 43, 1);
							func_40(uParam4, 29, 1);
							break;
						
						case 1:
							func_43(uParam3, 38, 1);
							func_41(uParam2, 16, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 37, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 33, 1);
							break;
						
						case 2:
							func_43(uParam3, 16, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 38, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 37, 1);
							func_40(uParam4, 4, 1);
							func_40(uParam4, 5, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 12, 1);
							func_40(uParam4, 14, 1);
							func_40(uParam4, 15, 1);
							func_40(uParam4, 16, 1);
							func_40(uParam4, 17, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 33, 1);
							break;
					}
					break;
				
				case 21:
					switch (iParam5)
					{
						case 0:
						case 1:
							func_43(uParam3, 16, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 38, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 37, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 12, 1);
							func_40(uParam4, 17, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 29, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 31, 1);
							func_40(uParam4, 32, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 34, 1);
							func_40(uParam4, 43, 1);
							break;
					}
					break;
				
				case 22:
				case 23:
				case 24:
				case 25:
				case 26:
					switch (iParam5)
					{
						case 0:
							func_43(uParam3, 16, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 38, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 37, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 12, 1);
							func_40(uParam4, 17, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 29, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 31, 1);
							func_40(uParam4, 32, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 34, 1);
							break;
					}
					break;
				
				case 10:
					switch (iParam5)
					{
						case 0:
							func_43(uParam3, 3, 1);
							func_43(uParam3, 4, 1);
							func_43(uParam3, 6, 1);
							func_43(uParam3, 10, 1);
							func_43(uParam3, 13, 1);
							func_43(uParam3, 16, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 38, 1);
							func_43(uParam3, 20, 1);
							func_43(uParam3, 26, 1);
							func_43(uParam3, 27, 1);
							func_43(uParam3, 32, 1);
							func_43(uParam3, 33, 1);
							func_43(uParam3, 37, 1);
							func_43(uParam3, 39, 1);
							func_41(uParam2, 3, 1);
							func_41(uParam2, 4, 1);
							func_41(uParam2, 6, 1);
							func_41(uParam2, 8, 1);
							func_41(uParam2, 9, 1);
							func_41(uParam2, 10, 1);
							func_41(uParam2, 13, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 21, 1);
							func_41(uParam2, 26, 1);
							func_41(uParam2, 27, 1);
							func_41(uParam2, 28, 1);
							func_41(uParam2, 32, 1);
							func_41(uParam2, 36, 1);
							func_41(uParam2, 38, 1);
							func_40(uParam4, 3, 1);
							func_40(uParam4, 4, 1);
							func_40(uParam4, 14, 1);
							func_40(uParam4, 15, 1);
							func_40(uParam4, 16, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 12, 1);
							func_40(uParam4, 13, 1);
							func_40(uParam4, 17, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 29, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 31, 1);
							func_40(uParam4, 32, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 34, 1);
							func_40(uParam4, 43, 1);
							break;
						
						case 1:
							func_43(uParam3, 3, 1);
							func_43(uParam3, 4, 1);
							func_43(uParam3, 6, 1);
							func_43(uParam3, 13, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 38, 1);
							func_43(uParam3, 19, 1);
							func_43(uParam3, 20, 1);
							func_43(uParam3, 26, 1);
							func_43(uParam3, 27, 1);
							func_43(uParam3, 32, 1);
							func_43(uParam3, 33, 1);
							func_43(uParam3, 37, 1);
							func_43(uParam3, 39, 1);
							func_41(uParam2, 3, 1);
							func_41(uParam2, 4, 1);
							func_41(uParam2, 6, 1);
							func_41(uParam2, 8, 1);
							func_41(uParam2, 9, 1);
							func_41(uParam2, 10, 1);
							func_41(uParam2, 11, 1);
							func_41(uParam2, 13, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 21, 1);
							func_41(uParam2, 22, 1);
							func_41(uParam2, 26, 1);
							func_41(uParam2, 27, 1);
							func_41(uParam2, 28, 1);
							func_41(uParam2, 30, 1);
							func_41(uParam2, 31, 1);
							func_41(uParam2, 32, 1);
							func_41(uParam2, 36, 1);
							func_41(uParam2, 38, 1);
							func_40(uParam4, 2, 1);
							func_40(uParam4, 3, 1);
							func_40(uParam4, 4, 1);
							func_40(uParam4, 14, 1);
							func_40(uParam4, 15, 1);
							func_40(uParam4, 16, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 12, 1);
							func_40(uParam4, 13, 1);
							func_40(uParam4, 17, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 29, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 31, 1);
							func_40(uParam4, 32, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 34, 1);
							func_40(uParam4, 43, 1);
							break;
						
						case 2:
							func_43(uParam3, 38, 1);
							func_43(uParam3, 39, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 38, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 12, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 29, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 31, 1);
							func_40(uParam4, 32, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 34, 1);
							break;
					}
					break;
				
				case 13:
					switch (iParam5)
					{
						case 0:
							func_43(uParam3, 16, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 38, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 19, 1);
							func_40(uParam4, 2, 1);
							func_40(uParam4, 3, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 13, 1);
							func_40(uParam4, 17, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 29, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 31, 1);
							func_40(uParam4, 32, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 34, 1);
							func_40(uParam4, 43, 1);
							break;
						
						case 1:
							func_43(uParam3, 16, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 38, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 37, 1);
							func_40(uParam4, 2, 1);
							func_40(uParam4, 7, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 13, 1);
							func_40(uParam4, 17, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 29, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 31, 1);
							func_40(uParam4, 32, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 34, 1);
							func_40(uParam4, 43, 1);
							break;
						
						case 2:
							func_43(uParam3, 18, 1);
							func_43(uParam3, 38, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 37, 1);
							func_40(uParam4, 1, 1);
							func_40(uParam4, 2, 1);
							func_40(uParam4, 3, 1);
							func_40(uParam4, 5, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 13, 1);
							func_40(uParam4, 17, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 29, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 31, 1);
							func_40(uParam4, 32, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 34, 1);
							break;
					}
					break;
				
				case 16:
					switch (iParam5)
					{
						case 0:
							func_43(uParam3, 4, 1);
							break;
						
						case 1:
							func_40(uParam4, 43, 1);
							break;
						
						case 2:
							break;
					}
					break;
				
				case 17:
					switch (iParam5)
					{
						case 0:
							func_43(uParam3, 16, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 38, 1);
							func_41(uParam2, 16, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 37, 1);
							func_40(uParam4, 1, 1);
							func_40(uParam4, 2, 1);
							func_40(uParam4, 3, 1);
							func_40(uParam4, 5, 1);
							func_40(uParam4, 6, 1);
							func_40(uParam4, 7, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 13, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 29, 1);
							func_40(uParam4, 28, 1);
							break;
						
						case 1:
							func_43(uParam3, 16, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 38, 1);
							func_41(uParam2, 16, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 37, 1);
							func_40(uParam4, 1, 1);
							func_40(uParam4, 2, 1);
							func_40(uParam4, 3, 1);
							func_40(uParam4, 5, 1);
							func_40(uParam4, 6, 1);
							func_40(uParam4, 7, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 13, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 29, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 43, 1);
							break;
						
						case 2:
							func_43(uParam3, 16, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 38, 1);
							func_41(uParam2, 16, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 37, 1);
							func_40(uParam4, 1, 1);
							func_40(uParam4, 2, 1);
							func_40(uParam4, 3, 1);
							func_40(uParam4, 5, 1);
							func_40(uParam4, 6, 1);
							func_40(uParam4, 7, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 13, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 29, 1);
							func_40(uParam4, 28, 1);
							break;
					}
					break;
				
				case 19:
					switch (iParam5)
					{
						case 0:
							func_43(uParam3, 3, 1);
							func_43(uParam3, 7, 1);
							func_43(uParam3, 0, 1);
							func_43(uParam3, 12, 1);
							func_43(uParam3, 13, 1);
							func_43(uParam3, 15, 1);
							func_43(uParam3, 16, 1);
							func_43(uParam3, 17, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 38, 1);
							func_43(uParam3, 20, 1);
							func_43(uParam3, 21, 1);
							func_43(uParam3, 25, 1);
							func_43(uParam3, 26, 1);
							func_43(uParam3, 27, 1);
							func_43(uParam3, 30, 1);
							func_43(uParam3, 31, 1);
							func_43(uParam3, 32, 1);
							func_43(uParam3, 33, 1);
							func_43(uParam3, 39, 1);
							func_43(uParam3, 37, 1);
							func_41(uParam2, 0, 1);
							func_41(uParam2, 2, 1);
							func_41(uParam2, 3, 1);
							func_41(uParam2, 4, 1);
							func_41(uParam2, 6, 1);
							func_41(uParam2, 7, 1);
							func_41(uParam2, 8, 1);
							func_41(uParam2, 11, 1);
							func_41(uParam2, 13, 1);
							func_41(uParam2, 15, 1);
							func_41(uParam2, 16, 1);
							func_41(uParam2, 17, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 19, 1);
							func_41(uParam2, 20, 1);
							func_41(uParam2, 21, 1);
							func_41(uParam2, 22, 1);
							func_41(uParam2, 24, 1);
							func_41(uParam2, 26, 1);
							func_41(uParam2, 27, 1);
							func_41(uParam2, 28, 1);
							func_41(uParam2, 30, 1);
							func_41(uParam2, 31, 1);
							func_41(uParam2, 32, 1);
							func_41(uParam2, 38, 1);
							func_41(uParam2, 36, 1);
							func_40(uParam4, 1, 1);
							func_40(uParam4, 2, 1);
							func_40(uParam4, 3, 1);
							func_40(uParam4, 4, 1);
							func_40(uParam4, 14, 1);
							func_40(uParam4, 15, 1);
							func_40(uParam4, 16, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 13, 1);
							func_40(uParam4, 17, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 29, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 31, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 34, 1);
							func_40(uParam4, 43, 1);
							break;
						
						case 1:
							func_43(uParam3, 3, 1);
							func_43(uParam3, 7, 1);
							func_43(uParam3, 0, 1);
							func_43(uParam3, 12, 1);
							func_43(uParam3, 13, 1);
							func_43(uParam3, 15, 1);
							func_43(uParam3, 16, 1);
							func_43(uParam3, 17, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 38, 1);
							func_43(uParam3, 20, 1);
							func_43(uParam3, 21, 1);
							func_43(uParam3, 25, 1);
							func_43(uParam3, 26, 1);
							func_43(uParam3, 27, 1);
							func_43(uParam3, 30, 1);
							func_43(uParam3, 31, 1);
							func_43(uParam3, 32, 1);
							func_43(uParam3, 33, 1);
							func_43(uParam3, 39, 1);
							func_41(uParam2, 0, 1);
							func_41(uParam2, 2, 1);
							func_41(uParam2, 3, 1);
							func_41(uParam2, 4, 1);
							func_41(uParam2, 6, 1);
							func_41(uParam2, 7, 1);
							func_41(uParam2, 11, 1);
							func_41(uParam2, 13, 1);
							func_41(uParam2, 15, 1);
							func_41(uParam2, 16, 1);
							func_41(uParam2, 17, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 19, 1);
							func_41(uParam2, 20, 1);
							func_41(uParam2, 21, 1);
							func_41(uParam2, 22, 1);
							func_41(uParam2, 24, 1);
							func_41(uParam2, 38, 1);
							func_40(uParam4, 1, 1);
							func_40(uParam4, 2, 1);
							func_40(uParam4, 3, 1);
							func_40(uParam4, 4, 1);
							func_40(uParam4, 14, 1);
							func_40(uParam4, 15, 1);
							func_40(uParam4, 16, 1);
							func_40(uParam4, 6, 1);
							func_40(uParam4, 7, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 13, 1);
							func_40(uParam4, 17, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 29, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 31, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 34, 1);
							func_40(uParam4, 43, 1);
							break;
						
						case 2:
							func_43(uParam3, 1, 1);
							func_43(uParam3, 3, 1);
							func_43(uParam3, 4, 1);
							func_43(uParam3, 5, 1);
							func_43(uParam3, 7, 1);
							func_43(uParam3, 10, 1);
							func_43(uParam3, 0, 1);
							func_43(uParam3, 12, 1);
							func_43(uParam3, 13, 1);
							func_43(uParam3, 15, 1);
							func_43(uParam3, 16, 1);
							func_43(uParam3, 17, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 38, 1);
							func_43(uParam3, 20, 1);
							func_43(uParam3, 21, 1);
							func_43(uParam3, 25, 1);
							func_43(uParam3, 26, 1);
							func_43(uParam3, 27, 1);
							func_43(uParam3, 30, 1);
							func_43(uParam3, 31, 1);
							func_43(uParam3, 32, 1);
							func_43(uParam3, 33, 1);
							func_43(uParam3, 37, 1);
							func_43(uParam3, 39, 1);
							func_41(uParam2, 0, 1);
							func_41(uParam2, 1, 1);
							func_41(uParam2, 2, 1);
							func_41(uParam2, 3, 1);
							func_41(uParam2, 4, 1);
							func_41(uParam2, 5, 1);
							func_41(uParam2, 6, 1);
							func_41(uParam2, 7, 1);
							func_41(uParam2, 8, 1);
							func_41(uParam2, 9, 1);
							func_41(uParam2, 10, 1);
							func_41(uParam2, 11, 1);
							func_41(uParam2, 12, 1);
							func_41(uParam2, 13, 1);
							func_41(uParam2, 14, 1);
							func_41(uParam2, 15, 1);
							func_41(uParam2, 16, 1);
							func_41(uParam2, 17, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 19, 1);
							func_41(uParam2, 20, 1);
							func_41(uParam2, 21, 1);
							func_41(uParam2, 22, 1);
							func_41(uParam2, 23, 1);
							func_41(uParam2, 24, 1);
							func_41(uParam2, 26, 1);
							func_41(uParam2, 27, 1);
							func_41(uParam2, 28, 1);
							func_41(uParam2, 29, 1);
							func_41(uParam2, 30, 1);
							func_41(uParam2, 31, 1);
							func_41(uParam2, 32, 1);
							func_41(uParam2, 33, 1);
							func_41(uParam2, 36, 1);
							func_41(uParam2, 38, 1);
							func_40(uParam4, 1, 1);
							func_40(uParam4, 2, 1);
							func_40(uParam4, 3, 1);
							func_40(uParam4, 3, 1);
							func_40(uParam4, 4, 1);
							func_40(uParam4, 14, 1);
							func_40(uParam4, 15, 1);
							func_40(uParam4, 16, 1);
							func_40(uParam4, 6, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 12, 1);
							func_40(uParam4, 13, 1);
							func_40(uParam4, 17, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 29, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 31, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 34, 1);
							func_40(uParam4, 32, 1);
							break;
					}
					break;
				
				case 18:
					switch (iParam5)
					{
						case 0:
							break;
						
						case 1:
							func_41(uParam2, 2, 1);
							func_41(uParam2, 20, 1);
							break;
						
						case 2:
							break;
					}
					break;
				
				case 0:
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 8:
				case 10:
				case 12:
				case 14:
				case 18:
				case 22:
				case 25:
				case 29:
				case 33:
				case 19:
				case 21:
					func_39(2, 21, uParam2, uParam3, uParam4, 0, 0);
					break;
				
				case 31:
					func_39(2, 22, uParam2, uParam3, uParam4, 0, 0);
					break;
				
				case 16:
				case 26:
				case 30:
					break;
			}
			break;
	}
}

void func_40(var uParam0, int iParam1, bool bParam2)//Position - 0x5710
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / 32f));
	if (bParam2)
	{
		MISC::SET_BIT(uParam0[iVar0], (iParam1 - (32 * iVar0)));
	}
	else
	{
		MISC::CLEAR_BIT(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
}

void func_41(var uParam0, int iParam1, bool bParam2)//Position - 0x5755
{
	func_42(uParam0, iParam1, bParam2);
}

void func_42(var uParam0, int iParam1, bool bParam2)//Position - 0x5767
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / 32f));
	if (bParam2)
	{
		MISC::SET_BIT(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
	else
	{
		MISC::CLEAR_BIT(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
}

void func_43(var uParam0, int iParam1, bool bParam2)//Position - 0x57AB
{
	func_42(uParam0, iParam1, bParam2);
}

int func_44(int iParam0, int iParam1)//Position - 0x57BD
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 1:
				case 2:
				case 3:
				case 4:
				case 7:
				case 5:
				case 10:
				case 11:
				case 12:
				case 13:
				case 15:
				case 14:
				case 16:
				case 17:
				case 18:
				case 19:
				case 20:
					return 1;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_45(float fParam0)//Position - 0x5884
{
	func_59(uLocal_91, "SET_DATA_SLOT", fParam0, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 172, 1), "CELL_BORDER");
}

void func_46(float fParam0)//Position - 0x58A4
{
	func_59(uLocal_91, "SET_DATA_SLOT", fParam0, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 173, 1), "CELL_FILTER");
}

void func_47()//Position - 0x58C4
{
	if (PAD::_IS_USING_KEYBOARD(2) || MISC::IS_ORBIS_VERSION())
	{
		func_59(uLocal_91, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, 1), "CELL_SP_2NP_XB");
	}
	else
	{
		func_59(uLocal_91, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, 1), "CELL_SP_2NP_XB");
	}
	func_59(uLocal_91, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 183, 1), "CELL_GRID");
	func_59(uLocal_91, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(0, 1, 1), "CELL_285");
	func_46(5f);
	func_45(6f);
	func_48(7f);
	func_28(8f);
	if (bLocal_28)
	{
		func_59(uLocal_91, "SET_DATA_SLOT", 9f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, 1), "CELL_DEPTH");
	}
	if (!func_55(14))
	{
		if ((Global_10A95 == 0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("pi_menu")) > 0) && func_54())
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_90, "SET_FOCUS_LOCK");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_ACTTL");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(HUD::_GET_LABEL_TEXT(&Global_26D6BB));
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

void func_48(float fParam0)//Position - 0x59D1
{
	func_59(uLocal_91, "SET_DATA_SLOT", fParam0, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 175, 1), "CELL_ACCYC");
}

void func_49()//Position - 0x59F1
{
	if (iLocal_83 == 0 && iLocal_84 == 0)
	{
		func_124(uLocal_91, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_124(uLocal_91, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_59(uLocal_91, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 177, 1), "CELL_281");
		func_59(uLocal_91, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 179, 1), "CELL_287");
		if (iLocal_81)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
				{
					if (PAD::_IS_USING_KEYBOARD(2) || MISC::IS_ORBIS_VERSION())
					{
						func_59(uLocal_91, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_59(uLocal_91, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, 1), "CELL_SP_2NP_XB");
					}
					if (func_132())
					{
						func_46(3f);
						func_45(4f);
					}
				}
				else if ((Global_10A95 == 0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("pi_menu")) > 0) && func_54())
				{
					func_47();
				}
				else
				{
					if (PAD::_IS_USING_KEYBOARD(2) || MISC::IS_ORBIS_VERSION())
					{
						func_59(uLocal_91, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_59(uLocal_91, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, 1), "CELL_SP_2NP_XB");
					}
					func_59(uLocal_91, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 183, 1), "CELL_GRID");
					func_59(uLocal_91, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(0, 1, 1), "CELL_285");
					if (func_132())
					{
						func_46(5f);
						func_45(6f);
						if (func_29(1))
						{
							func_28(7f);
							if (bLocal_28)
							{
								func_59(uLocal_91, "SET_DATA_SLOT", 8f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, 1), "CELL_DEPTH");
							}
						}
						else if (bLocal_28)
						{
							func_59(uLocal_91, "SET_DATA_SLOT", 7f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
			{
				if (!PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
				{
					func_59(uLocal_91, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 183, 1), "CELL_GRID");
					func_59(uLocal_91, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(0, 1, 1), "CELL_285");
					func_59(uLocal_91, "SET_DATA_SLOT", 5f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 39, 1), "CELL_284");
					if (func_132())
					{
						func_46(6f);
						func_45(7f);
						func_59(uLocal_91, "SET_DATA_SLOT", 8f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, 1), "CELL_DEPTH");
					}
				}
				else
				{
					func_59(uLocal_91, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(0, 1, 1), "CELL_285");
					if (func_132())
					{
						func_46(3f);
						func_45(4f);
						func_59(uLocal_91, "SET_DATA_SLOT", 5f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
			else if (!PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
			{
				if (PAD::_IS_USING_KEYBOARD(2) || MISC::IS_ORBIS_VERSION())
				{
					func_59(uLocal_91, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, 1), "CELL_SP_1NP_XB");
				}
				else
				{
					func_59(uLocal_91, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, 1), "CELL_SP_1NP_XB");
				}
				func_59(uLocal_91, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 183, 1), "CELL_GRID");
				func_59(uLocal_91, "SET_DATA_SLOT", 5f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(0, 1, 1), "CELL_285");
				func_59(uLocal_91, "SET_DATA_SLOT", 6f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 39, 1), "CELL_284");
				if (func_132())
				{
					func_46(7f);
					func_45(8f);
					if (bLocal_29)
					{
						func_59(uLocal_91, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 182, 1), "CELL_FOCUS");
					}
					func_59(uLocal_91, "SET_DATA_SLOT", 9f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, 1), "CELL_DEPTH");
				}
				else
				{
					if (PAD::_IS_USING_KEYBOARD(2) || MISC::IS_ORBIS_VERSION())
					{
						func_59(uLocal_91, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, 1), "CELL_SP_1NP_XB");
					}
					else
					{
						func_59(uLocal_91, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, 1), "CELL_SP_1NP_XB");
					}
					func_59(uLocal_91, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(0, 1, 1), "CELL_285");
					if (func_132())
					{
						func_46(4f);
						func_45(5f);
						func_59(uLocal_91, "SET_DATA_SLOT", 6f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_91, "SET_MAX_WIDTH");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_39);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		func_124(uLocal_91, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_50()//Position - 0x5E79
{
	if (iLocal_81)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fLocal_35, 1065353216);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fLocal_36);
	}
}

void func_51(int iParam0)//Position - 0x5E97
{
	if (Global_187385.f_11152 == 1)
	{
	}
	else if (Global_187385.f_11153 == 1)
	{
	}
	else
	{
		MOBILE::_CELL_CAM_DISABLE_THIS_FRAME(iParam0);
	}
}

void func_52()//Position - 0x5EC7
{
	if (iLocal_27 == 1)
	{
		if (MISC::ARE_STRINGS_EQUAL(sLocal_18[Global_26CF0D], "phone_cam12DUMMY"))
		{
			MOBILE::_0xA2CCBE62CD4C91A4(0);
			MOBILE::_SET_MOBILE_PHONE_UNK(0);
		}
		else
		{
			MOBILE::_0xA2CCBE62CD4C91A4(1);
			MOBILE::_SET_MOBILE_PHONE_UNK(1);
		}
	}
}

void func_53()//Position - 0x5EFF
{
	func_124(uLocal_90, "SHOW_REMAINING_PHOTOS", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (!func_132())
	{
		GRAPHICS::SET_TIMECYCLE_MODIFIER("phone_cam");
	}
}

int func_54()//Position - 0x5F36
{
	if (func_55(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if ((ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_17C49.f_744E[0 /*29*/] || ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_17C49.f_744E[1 /*29*/]) || ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_17C49.f_744E[2 /*29*/])
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
	return 1;
}

bool func_55(int iParam0)//Position - 0x5FB1
{
	return Global_8861 == iParam0;
}

void func_56(char* sParam0)//Position - 0x5FBF
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_57()//Position - 0x5FD1
{
	if (PAD::_IS_USING_KEYBOARD(2) || MISC::IS_ORBIS_VERSION())
	{
		func_59(uLocal_91, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, 1), "CELL_SP_2NP_XB");
	}
	else
	{
		func_59(uLocal_91, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, 1), "CELL_SP_2NP_XB");
	}
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		func_59(uLocal_91, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 30, 1), "CELL_RT_RSTICK");
		func_59(uLocal_91, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(2, 1, 1), "CELL_RT_LSTICK");
	}
	else
	{
		func_59(uLocal_91, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 1, 1), "CELL_RT_RSTICK");
		func_59(uLocal_91, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(2, 0, 1), "CELL_RT_LSTICK");
	}
}

void func_58()//Position - 0x6080
{
	if (PAD::_IS_USING_KEYBOARD(2) || MISC::IS_ORBIS_VERSION())
	{
		func_59(uLocal_91, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, 1), "CELL_SP_2NP_XB");
	}
	else
	{
		func_59(uLocal_91, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, 1), "CELL_SP_2NP_XB");
	}
	func_59(uLocal_91, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(0, 1, 1), "CELL_LT_RSTICK");
	if (func_55(14))
	{
		func_59(uLocal_91, "SET_DATA_SLOT", 5f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 30, 1), "CELL_LT_LSTICK");
	}
	else
	{
		func_59(uLocal_91, "SET_DATA_SLOT", 5f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 39, 1), "CELL_LT_LSTICKZ");
		func_59(uLocal_91, "SET_DATA_SLOT", 6f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 30, 1), "CELL_LT_LSTICK");
	}
}

void func_59(var uParam0, char* sParam1, float fParam2, var uParam3, char* sParam4)//Position - 0x6132
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam3))
	{
		func_60(uParam3);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		func_56(sParam4);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_60(var uParam0)//Position - 0x6171
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(uParam0);
}

void func_61()//Position - 0x617F
{
	if (Global_10A95)
	{
		switch (Global_41A9)
		{
			case 0:
				if (PAD::_IS_USING_KEYBOARD(2))
				{
					func_120("CELL_CAM_SELFIE_0_KM", -1);
				}
				else
				{
					func_120("CELL_CAM_SELFIE_0", -1);
				}
				Global_41A9++;
				break;
			
			case 1:
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (PAD::_IS_USING_KEYBOARD(2))
					{
						func_120("CELL_CAM_SELFIE_1_KM", -1);
					}
					else
					{
						func_120("CELL_CAM_SELFIE_1", -1);
					}
					Global_41A9++;
				}
				break;
			
			case 2:
				break;
		}
	}
	else
	{
		switch (Global_41A8)
		{
			case 0:
				if (PAD::_IS_USING_KEYBOARD(2))
				{
					func_120("CELL_CAM_SELFIE_0_KM", -1);
				}
				else
				{
					func_120("CELL_CAM_SELFIE_0", -1);
				}
				Global_41A8++;
				break;
			
			case 1:
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (PAD::_IS_USING_KEYBOARD(2))
					{
						func_120("CELL_CAM_SELFIE_1_KM", -1);
					}
					else
					{
						func_120("CELL_CAM_SELFIE_1", -1);
					}
					Global_41A8++;
				}
				break;
			
			case 2:
				break;
			}
	}
}

void func_62()//Position - 0x627B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	int iVar10;
	
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		iVar9 = 179;
		iVar10 = 21;
	}
	else
	{
		iVar9 = 228;
		iVar10 = 229;
	}
	if (PAD::IS_CONTROL_PRESSED(2, iVar10) && !PAD::IS_CONTROL_PRESSED(2, iVar9))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 2, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 1, 1);
		iVar0 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 30)) * 127;
		iVar1 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 31)) * 127;
		iVar2 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 1)) * 127;
		iVar3 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 2)) * 127;
		if (PAD::_IS_USING_KEYBOARD(2))
		{
			if (MISC::ABSI(iVar0) > 28 || MISC::ABSI(iVar1) > 28)
			{
				fVar6 = ((IntToFloat(iVar0) / 128f) * fLocal_112);
			}
		}
		else if (MISC::ABSI(iVar2) > 28 || MISC::ABSI(iVar3) > 28)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_112);
		}
		if (PAD::_IS_USING_KEYBOARD(2))
		{
			fVar7 = PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 290);
			fVar8 = PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 291);
			if (PAD::_0xE1615EC03B3BB4FD())
			{
				fVar8 = (fVar8 * -1f);
			}
			fVar4 = (fVar4 + fVar7);
			fVar5 = (fVar5 - fVar8);
		}
		else if (MISC::ABSI(iVar0) > 28 || MISC::ABSI(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_112);
			fVar5 = ((IntToFloat(-iVar1) / 128f) * fLocal_112);
		}
		func_65(fVar5);
		func_64(fVar6);
		func_63(fVar4);
	}
	else if (!PAD::IS_CONTROL_PRESSED(2, iVar9))
	{
		PAD::ENABLE_CONTROL_ACTION(0, 2, 1);
		PAD::ENABLE_CONTROL_ACTION(0, 1, 1);
	}
}

void func_63(float fParam0)//Position - 0x63FA
{
	fLocal_109 = (fLocal_109 + fParam0);
	if (fLocal_109 > 1f)
	{
		fLocal_109 = 1f;
	}
	else if (fLocal_109 < -1f)
	{
		fLocal_109 = -1f;
	}
	MOBILE::_0xD6ADE981781FCA09(fLocal_109);
}

void func_64(float fParam0)//Position - 0x6426
{
	fLocal_110 = (fLocal_110 + fParam0);
	if (fLocal_110 > 1f)
	{
		fLocal_110 = 1f;
	}
	else if (fLocal_110 < -1f)
	{
		fLocal_110 = -1f;
	}
	MOBILE::_0xF1E22DC13F5EEBAD(fLocal_110);
}

void func_65(float fParam0)//Position - 0x6452
{
	fLocal_111 = (fLocal_111 + fParam0);
	if (fLocal_111 > 1f)
	{
		fLocal_111 = 1f;
	}
	else if (fLocal_111 < -1f)
	{
		fLocal_111 = -1f;
	}
	MOBILE::_0x466DA42C89865553(fLocal_111);
}

void func_66()//Position - 0x647E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		iVar10 = 179;
		iVar11 = 178;
		if (PAD::IS_CONTROL_PRESSED(2, iVar10))
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 178))
			{
				MOBILE::_0x53F4892D18EC90A4(0.5f);
				MOBILE::_0x3117D84EFA60F77B(0.85f);
				MOBILE::_0xAC2890471901861C(0.5f);
				MOBILE::_0x15E69E2802C24B8D(-0.25f);
				fLocal_105 = 0.5f;
				fLocal_106 = 0.85f;
				fLocal_107 = 0.5f;
				fLocal_108 = -0.25f;
			}
		}
	}
	else
	{
		iVar10 = 228;
		iVar11 = 229;
	}
	if (PAD::IS_CONTROL_PRESSED(2, iVar10) && !PAD::IS_CONTROL_PRESSED(2, iVar11))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 178))
		{
			MOBILE::_0x53F4892D18EC90A4(0.5f);
			MOBILE::_0x3117D84EFA60F77B(0.85f);
			MOBILE::_0xAC2890471901861C(0.5f);
			MOBILE::_0x15E69E2802C24B8D(-0.25f);
			fLocal_105 = 0.5f;
			fLocal_106 = 0.85f;
			fLocal_107 = 0.5f;
			fLocal_108 = -0.25f;
		}
		PAD::DISABLE_CONTROL_ACTION(0, 2, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 1, 1);
		iVar0 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 30)) * 127;
		iVar1 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 31)) * 127;
		iVar2 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 1)) * 127;
		iVar3 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 2)) * 127;
		if (PAD::_IS_USING_KEYBOARD(2))
		{
			iVar1 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 39)) * 127;
			fVar8 = PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 290);
			fVar9 = PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 291);
			if (PAD::_0xE1615EC03B3BB4FD())
			{
				fVar9 = (fVar9 * -1f);
			}
			fVar6 = (fVar6 + fVar8);
			fVar7 = (fVar7 - fVar9);
		}
		else if (MISC::ABSI(iVar2) > 15 || MISC::ABSI(iVar3) > 15)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_112);
			fVar7 = ((IntToFloat(-iVar3) / 128f) * fLocal_112);
		}
		if (MISC::ABSI(iVar0) > 28 || MISC::ABSI(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_112);
			fVar5 = ((IntToFloat(iVar1) / 128f) * fLocal_112);
		}
		func_70(fVar6);
		func_69(fVar7);
		func_68(fVar4);
		if (!func_55(14))
		{
			func_67(fVar5);
		}
	}
	else if (!PAD::IS_DISABLED_CONTROL_PRESSED(2, iVar11))
	{
		PAD::ENABLE_CONTROL_ACTION(0, 2, 1);
		PAD::ENABLE_CONTROL_ACTION(0, 1, 1);
	}
	if (!PAD::IS_DISABLED_CONTROL_PRESSED(2, iVar10) && !PAD::IS_DISABLED_CONTROL_PRESSED(2, iVar11))
	{
		iVar0 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 30)) * 127;
		iVar1 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 31)) * 127;
		iVar2 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 290)) * 127;
		iVar3 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 291)) * 127;
		iVar2 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 294)) * 127;
		iVar2 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 295)) * 127;
		iVar3 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 292)) * 127;
		iVar3 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 293)) * 127;
		if (MISC::ABSI(iVar2) > 28 || MISC::ABSI(iVar3) > 28)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_112);
			fVar7 = ((IntToFloat(-iVar3) / 128f) * fLocal_112);
		}
		if (MISC::ABSI(iVar0) > 28 || MISC::ABSI(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_112);
			fVar5 = ((IntToFloat(iVar1) / 128f) * fLocal_112);
		}
		if (!func_55(14))
		{
			func_67(fVar5);
		}
	}
}

void func_67(float fParam0)//Position - 0x67A9
{
	fLocal_107 = (fLocal_107 + fParam0);
	if (fLocal_107 > 1f)
	{
		fLocal_107 = 1f;
	}
	else if (fLocal_107 < 0f)
	{
		fLocal_107 = 0f;
	}
	MOBILE::_0xAC2890471901861C(fLocal_107);
}

void func_68(float fParam0)//Position - 0x67D5
{
	fLocal_108 = (fLocal_108 + fParam0);
	if (fLocal_108 > 1f)
	{
		fLocal_108 = 1f;
	}
	else if (fLocal_108 < -1f)
	{
		fLocal_108 = -1f;
	}
	MOBILE::_0x15E69E2802C24B8D(fLocal_108);
}

void func_69(float fParam0)//Position - 0x6801
{
	fLocal_106 = (fLocal_106 + fParam0);
	if (fLocal_106 > 1.5f)
	{
		fLocal_106 = 1.5f;
	}
	else if (fLocal_106 < 0.5f)
	{
		fLocal_106 = 0.5f;
	}
	MOBILE::_0x3117D84EFA60F77B(fLocal_106);
}

void func_70(float fParam0)//Position - 0x683D
{
	fLocal_105 = (fLocal_105 + fParam0);
	if (fLocal_105 > 2f)
	{
		fLocal_105 = 2f;
	}
	else if (fLocal_105 < -1.7f)
	{
		fLocal_105 = -1.7f;
	}
	MOBILE::_0x53F4892D18EC90A4(fLocal_105);
}

void func_71()//Position - 0x6871
{
	if (Global_10B99 || Global_10B9A)
	{
		return;
	}
	if (iLocal_74 == 0)
	{
		if (!iLocal_99)
		{
			if (Global_187385.f_11152 == 0 && Global_187385.f_11153 == 0)
			{
				GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uLocal_91, 255, 255, 255, 0, 0);
			}
		}
	}
	if (iLocal_77 == 0)
	{
		if (Global_37FF)
		{
			if (Global_38D7)
			{
				if (iLocal_99 == 0)
				{
					if (Global_3839.f_1 > 3)
					{
					}
				}
			}
		}
		else
		{
			func_73(255, 255, 255, 255);
			func_72(0.059f, 0.644f, "CELL_284", 0);
			func_73(255, 255, 255, 255);
			func_72(0.165f, 0.644f, "CELL_285", 0);
			func_73(255, 255, 255, 255);
			func_72(0.275f, 0.75f, "CELL_280", 0);
			func_73(255, 255, 255, 255);
			func_72(0.275f, 0.83f, "CELL_281", 0);
		}
	}
	else if (Global_37FF)
	{
	}
	else
	{
		func_73(255, 255, 255, 255);
		func_72(0.275f, 0.75f, "CELL_287", 0);
		func_73(255, 255, 255, 255);
		func_72(0.275f, 0.79f, "CELL_286", 0);
		func_73(255, 255, 255, 255);
		func_72(0.275f, 0.83f, "CELL_281", 0);
	}
}

void func_72(float fParam0, float fParam1, char* sParam2, int iParam3)//Position - 0x69C0
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam3);
}

void func_73(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x69D8
{
	HUD::SET_TEXT_SCALE(0.4f, 0.4f);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(1, 0, 0, 0, 205);
	HUD::SET_TEXT_PROPORTIONAL(1);
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_COLOUR(iParam0, iParam1, iParam2, iParam3);
}

void func_74()//Position - 0x6A17
{
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fLocal_37, 1065353216);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fLocal_38);
}

void func_75()//Position - 0x6A30
{
	PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 44, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 3, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 4, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 5, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 6, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 1, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 2, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 39, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 47, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 56, 1);
}

void func_76()//Position - 0x6A8A
{
	Local_43 = { Global_380A[Global_3802 /*3*/] };
	if (Global_37FF)
	{
		if (func_79())
		{
			MOBILE::GET_MOBILE_PHONE_POSITION(&Local_45);
			Local_43 = { Local_45 };
			iLocal_71 = 0;
			iLocal_72 = 0;
			iLocal_73 = 0;
		}
		func_1(1);
		if (iLocal_71)
		{
			Local_41.x = (Local_41.x + 12f);
		}
		if (Local_41.x > Local_43.x || Local_41.x == Local_43.x)
		{
			Local_41.x = Local_43.x;
			iLocal_71 = 0;
		}
		if (iLocal_72)
		{
			Local_41.f_1 = (Local_41.f_1 - 6f);
		}
		if (MISC::IS_BIT_SET(Global_8D9, 4))
		{
			if (Local_41.f_1 < (Local_43.f_1 + 15f) || Local_41.f_1 == (Local_43.f_1 + 15f))
			{
				Local_41.f_1 = (Local_43.f_1 + 15f);
				iLocal_72 = 0;
			}
		}
		else if (Local_41.f_1 < (Local_43.f_1 + 10f) || Local_41.f_1 == (Local_43.f_1 + 10f))
		{
			Local_41.f_1 = (Local_43.f_1 + 10f);
			iLocal_72 = 0;
		}
		if (iLocal_73)
		{
			Local_41.f_2 = (Local_41.f_2 - 10f);
		}
		if (Local_41.f_2 < Local_43.f_2 || Local_41.f_2 == Local_43.f_2)
		{
			Local_41.f_2 = Local_43.f_2;
			iLocal_73 = 0;
		}
		if (func_79() == 0)
		{
			if (MISC::IS_BIT_SET(Global_8D9, 4))
			{
				Local_43.f_1 = (Local_43.f_1 + 15f);
			}
			else
			{
				Local_43.f_1 = (Local_43.f_1 + 10f);
			}
			Local_43.x = (Local_43.x - 14f);
		}
		else
		{
			Local_43 = { Global_3803[Global_3802 /*3*/] };
		}
		Local_41 = { Local_43 };
		iLocal_73 = 0;
		iLocal_72 = 0;
		iLocal_71 = 0;
		MOBILE::SET_MOBILE_PHONE_POSITION(Local_41);
		if ((iLocal_71 == 0 && iLocal_72 == 0) && iLocal_73 == 0)
		{
			iLocal_74 = 0;
			Local_42 = { -90.3f, 0f, 90f };
			MOBILE::SET_MOBILE_PHONE_ROTATION(Local_42, 0);
			if (!MISC::IS_BIT_SET(Global_8D7, 22))
			{
				if (MISC::IS_BIT_SET(Global_8D7, 28))
				{
					StringCopy(&cLocal_95, "CELL_294", 16);
					func_78();
				}
				else
				{
					StringCopy(&cLocal_95, "CELL_293", 16);
					func_77();
				}
				iLocal_50 = 2;
			}
		}
	}
}

void func_77()//Position - 0x6C89
{
	func_124(uLocal_91, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_124(uLocal_91, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (MISC::IS_BIT_SET(Global_8D8, 28))
	{
		func_59(uLocal_91, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 176, 1), "CELL_286");
	}
	else
	{
		func_59(uLocal_91, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 178, 1), "CELL_277");
		func_59(uLocal_91, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 176, 1), "CELL_GALSAVE");
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_91, "SET_MAX_WIDTH");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_39);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_124(uLocal_91, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_78()//Position - 0x6D5B
{
	func_124(uLocal_91, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_124(uLocal_91, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (MISC::IS_BIT_SET(Global_8D8, 28))
	{
		func_59(uLocal_91, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 179, 1), "CELL_287");
		func_59(uLocal_91, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 176, 1), "CELL_286");
	}
	else
	{
		func_59(uLocal_91, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 179, 1), "CELL_287");
		func_59(uLocal_91, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 178, 1), "CELL_277");
		func_59(uLocal_91, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 176, 1), "CELL_GALSAVE");
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_91, "SET_MAX_WIDTH");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_39);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_124(uLocal_91, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

int func_79()//Position - 0x6E5B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		if (Global_3839.f_1 == 10 || Global_3839.f_1 == 9)
		{
			if (Global_3800 == 0)
			{
				if (Global_62A != 128)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (Global_3D4C != 2)
						{
						}
					}
				}
			}
		}
		if (func_55(14))
		{
			return 0;
		}
		if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0))
		{
			return 0;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (!CAM::_IS_IN_VEHICLE_CAM_DISABLED())
			{
				if (ENTITY::IS_ENTITY_IN_WATER(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
				{
					return 0;
				}
			}
		}
		if (((PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
		if (Global_17891)
		{
			return 0;
		}
	}
	if (Global_10A95)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
	iVar1 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || CAM::_IS_IN_VEHICLE_CAM_DISABLED()))
	{
		iVar2 = 1;
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if (((((((VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar3)) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iVar3))) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(iVar3))) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("seashark")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("seashark2")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("rhino")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("submersible")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("submersible2"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_26D4D2 || iVar2 == 1)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptrackify")) > 0 || Global_17C49.f_3011.f_59)
		{
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("michael2")) > 0)
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
			return 1;
		}
	}
	return 0;
}

void func_80()//Position - 0x706E
{
	PAD::DISABLE_CONTROL_ACTION(0, 47, 1);
	PAD::SET_INPUT_EXCLUSIVE(0, Global_381B);
	Local_42 = { Global_3811 };
	Local_43 = { Global_380A[Global_3802 /*3*/] };
	if (func_79())
	{
		MOBILE::GET_MOBILE_PHONE_ROTATION(&Local_44, 0);
		Local_42 = { Local_44 };
		MOBILE::GET_MOBILE_PHONE_POSITION(&Local_45);
		Local_43 = { Local_45 };
		iLocal_68 = 0;
		iLocal_69 = 0;
		iLocal_70 = 0;
		iLocal_71 = 0;
		iLocal_72 = 0;
		iLocal_73 = 0;
	}
	if (Global_37FF)
	{
		func_124(uLocal_90, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_51(0);
		iLocal_81 = 0;
		if (MISC::IS_BIT_SET(Global_8D7, 30))
		{
			iLocal_68 = 0;
			iLocal_69 = 0;
			iLocal_70 = 0;
			func_81();
		}
		if (iLocal_71)
		{
			if (MISC::IS_BIT_SET(Global_8D7, 9))
			{
				Local_41.x = (Local_41.x + 2f);
			}
			else
			{
				Local_41.x = (Local_41.x + 12f);
			}
		}
		if (Local_41.x > Local_43.x || Local_41.x == Local_43.x)
		{
			Local_41.x = Local_43.x;
			iLocal_71 = 0;
		}
		if (iLocal_72)
		{
			Local_41.f_1 = (Local_41.f_1 - 6f);
		}
		if (Local_41.f_1 < Local_43.f_1 || Local_41.f_1 == Local_43.f_1)
		{
			Local_41.f_1 = Local_43.f_1;
			iLocal_72 = 0;
		}
		if (iLocal_73)
		{
			Local_41.f_2 = (Local_41.f_2 - 10f);
		}
		if (Local_41.f_2 < Local_43.f_2 || Local_41.f_2 == Local_43.f_2)
		{
			Local_41.f_2 = Local_43.f_2;
			iLocal_73 = 0;
		}
		if (iLocal_73 == 0)
		{
			if (iLocal_68)
			{
				Local_40.x = (Local_40.x + 1f);
			}
			if (Local_40.x > Local_42.x || Local_40.x == Local_42.x)
			{
				Local_40.x = Local_42.x;
				iLocal_68 = 0;
			}
			if (iLocal_69)
			{
				Local_40.f_1 = (Local_40.f_1 - 2f);
			}
			if (Local_40.f_1 < Local_42.f_1 || Local_40.f_1 == Local_42.f_1)
			{
				Local_40.f_1 = Local_42.f_1;
				iLocal_69 = 0;
			}
			if (iLocal_70)
			{
				Local_40.f_2 = (Local_40.f_2 - 14f);
			}
			if (Local_40.f_2 < Local_42.f_2 || Local_40.f_2 == Local_42.f_2)
			{
				Local_40.f_2 = Local_42.f_2;
				iLocal_70 = 0;
			}
		}
		if (iLocal_76)
		{
			Local_40 = { Local_42 };
			Local_41 = { Local_43 };
			iLocal_68 = 0;
			iLocal_69 = 0;
			iLocal_70 = 0;
			if (func_79() == 0)
			{
				MOBILE::SET_MOBILE_PHONE_ROTATION(Local_40, 0);
				MOBILE::SET_MOBILE_PHONE_POSITION(Local_41);
			}
			func_88(0, 1);
		}
		else if (func_79() == 0)
		{
			MOBILE::SET_MOBILE_PHONE_ROTATION(Local_40, 0);
			MOBILE::SET_MOBILE_PHONE_POSITION(Local_41);
		}
		if ((iLocal_68 == 0 && iLocal_69 == 0) && iLocal_70 == 0)
		{
			func_81();
		}
	}
	else
	{
		if (iLocal_68)
		{
			Local_40.x = (Local_40.x + 1f);
		}
		if (Local_40.x > Local_42.x || Local_40.x == Local_42.x)
		{
			iLocal_68 = 0;
		}
		if (iLocal_69)
		{
			Local_40.f_1 = (Local_40.f_1 - 2f);
		}
		if (Local_40.f_1 < Local_42.f_1 || Local_40.f_1 == Local_42.f_1)
		{
			iLocal_69 = 0;
		}
		if (iLocal_70)
		{
			Local_40.f_2 = (Local_40.f_2 - 7f);
		}
		if (Local_40.f_2 < Local_42.f_2 || Local_40.f_2 == Local_42.f_2)
		{
			iLocal_70 = 0;
		}
		if ((iLocal_68 == 0 && iLocal_69 == 0) && iLocal_70 == 0)
		{
			func_81();
		}
	}
	MOBILE::SET_MOBILE_PHONE_ROTATION(Local_40, 0);
}

void func_81()//Position - 0x7378
{
	func_1(0);
	if (func_79() == 0)
	{
		if (MISC::IS_BIT_SET(Global_8D7, 30))
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_3803[Global_3802 /*3*/]);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_380A[Global_3802 /*3*/]);
		}
		Local_40 = { Local_42 };
		MOBILE::SET_MOBILE_PHONE_ROTATION(Local_40, 0);
	}
	Global_4155 = 0;
	func_91(0, 0);
	func_95(0);
	iLocal_65 = 0;
	func_90();
	Global_382C = 1;
	Global_4158 = 0;
	if (Global_3839.f_1 > 4)
	{
		Global_3839.f_1 = 6;
		Global_3823 = 1;
		func_82();
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_90))
	{
		func_123(uLocal_90, "SHUTDOWN_MOVIE");
	}
	SYSTEM::WAIT(0);
	RECORDING::_STOP_RECORDING_THIS_FRAME();
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_91);
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_90);
	if (Global_38D9 == 1)
	{
		MISC::SET_BIT(&Global_8D7, 17);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8D7, 17);
	}
	MISC::CLEAR_BIT(&Global_8D7, 18);
	MISC::CLEAR_BIT(&Global_8D7, 21);
	HUD::CLEAR_FLOATING_HELP(0, 1);
	MISC::CLEAR_BIT(&Global_8D9, 3);
	MISC::CLEAR_BIT(&Global_26D408, 3);
	MISC::SET_GAME_PAUSED(0);
	PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), 1);
	HUD::RESET_HUD_COMPONENT_VALUES(15);
	Global_4159 = 1;
	AUDIO::STOP_SOUND(iLocal_62);
	AUDIO::RELEASE_SOUND_ID(iLocal_62);
	HUD::BUSYSPINNER_OFF();
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), "Mood_Normal_1", 0);
		PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID());
	}
	func_90();
	MOBILE::_0xA2CCBE62CD4C91A4(0);
	MOBILE::_SET_MOBILE_PHONE_UNK(0);
	MOBILE::_0x1B0B4AEED5B9B41C(1f);
	if (Global_26CF0E > 0 && Global_26CF0E < 13)
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sLocal_19[Global_26CF0E]);
	}
	func_88(0, 1);
	if (func_130(0, 1, iLocal_30))
	{
		iLocal_30 = 0;
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_82()//Position - 0x7500
{
	struct<3> Var0;
	
	if (Global_3828 == 1)
	{
		return;
	}
	if (Global_3839.f_1 < 4)
	{
		return;
	}
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_3826))
	{
		SYSTEM::WAIT(0);
	}
	switch (Global_3839.f_1)
	{
		case 6:
			func_124(Global_3826, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_86(Global_B34);
			if (Global_B34 == 1)
			{
				func_124(Global_3826, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_383D), -1082130432, -1082130432, -1082130432);
				Global_3825 = Global_383D;
			}
			else
			{
				func_124(Global_3826, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_383E), -1082130432, -1082130432, -1082130432);
				Global_3825 = Global_383E;
			}
			if (Global_382D)
			{
				func_85(Global_3826, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_85(Global_3826, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_85(Global_3826, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_85(Global_3826, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_38D9 == 0)
			{
				func_85(Global_3826, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_8D7, 17);
			}
			else if (Global_10A95)
			{
				func_85(Global_3826, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_8D7, 17);
			}
			else
			{
				if (Global_38D8 == 1)
				{
					if (Global_382D)
					{
						func_85(Global_3826, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_85(Global_3826, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_382D)
				{
					func_85(Global_3826, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_85(Global_3826, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				MISC::SET_BIT(&Global_8D7, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_124(Global_3826, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_85(Global_3826, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_85(Global_3826, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8D7, 17);
			if (MISC::IS_BIT_SET(Global_8D7, 20))
			{
				func_85(Global_3826, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_382D)
			{
				func_85(Global_3826, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_3800)
				{
					func_85(Global_3826, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_85(Global_3826, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_3838 == 1)
			{
				func_84();
				func_124(Global_3826, "SET_THEME", SYSTEM::TO_FLOAT(Global_17C49.f_3011[Global_3839 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_3D59)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_3826, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_3D5B);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_56("CELL_300");
					func_56("CELL_217");
					func_56("CELL_217");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else if (Global_17C49.f_744E[Global_62A /*29*/].f_18[Global_3839] == 0)
				{
					func_85(Global_3826, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_61[Global_62A /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_85(Global_3826, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_17C49.f_744E[Global_62A /*29*/].f_3), &(Global_17C49.f_744E[Global_62A /*29*/].f_7), "CELL_217", &(Global_17C49.f_744E[Global_62A /*29*/].f_3), 0);
				}
				func_124(Global_3826, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_3D4C == 4 || Global_3D4C == 3)
			{
				func_124(Global_3826, "SET_THEME", SYSTEM::TO_FLOAT(Global_17C49.f_3011[Global_3839 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_84();
				if (Global_3D59)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_3826, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_3D5B);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_56("CELL_300");
					func_56("CELL_219");
					func_56("CELL_219");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					if (Global_3E4E)
					{
						StringCopy(&Var0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&Var0, "CELL_211", 24);
					}
					if (Global_17C49.f_744E[Global_62A /*29*/].f_18[Global_3839] == 0)
					{
						func_124(Global_3826, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_85(Global_3826, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_61[Global_62A /*10*/].f_4), "CELL_300", &Var0, "CELL_195", 0);
					}
					else
					{
						func_124(Global_3826, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_85(Global_3826, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_17C49.f_744E[Global_62A /*29*/].f_3), &(Global_17C49.f_744E[Global_62A /*29*/].f_7), &Var0, &(Global_17C49.f_744E[Global_62A /*29*/].f_3), 0);
					}
				}
				func_124(Global_3826, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_83();
			break;
		
		default:
			break;
	}
}

void func_83()//Position - 0x7ADB
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_3826))
	{
		if (Global_3838 == 1)
		{
			if (Global_382D)
			{
				func_85(Global_3826, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_85(Global_3826, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_3D7B)
			{
				func_85(Global_3826, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (MISC::IS_BIT_SET(Global_8D7, 20))
			{
				func_85(Global_3826, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_382D)
			{
				func_85(Global_3826, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_85(Global_3826, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_85(Global_3826, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8D7, 17);
		}
		else
		{
			func_85(Global_3826, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_85(Global_3826, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8D7, 17);
			if (MISC::IS_BIT_SET(Global_8D7, 20))
			{
				func_85(Global_3826, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_382D)
			{
				func_85(Global_3826, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_3800)
				{
					func_85(Global_3826, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_85(Global_3826, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_84()//Position - 0x7C6B
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		if (Global_3839 == 0)
		{
			switch (Global_17C49.f_3011[Global_3839 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 4);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 5);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_3839 == 1)
		{
			switch (Global_17C49.f_3011[Global_3839 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 6);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 4);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_3839 == 2)
		{
			switch (Global_17C49.f_3011[Global_3839 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 5);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 6);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_3839 == 3)
		{
			switch (Global_26D4D0)
			{
				case 1:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 4);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 5);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_85(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x7EE1
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
		func_56(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam8))
	{
		func_56(iParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam9))
	{
		func_56(iParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam10))
	{
		func_56(iParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam11))
	{
		func_56(iParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_86(int iParam0)//Position - 0x7F94
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
		if (func_55(14))
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
								func_56(&(Global_8DE[iVar1 /*15*/]));
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
								func_85(Global_3826, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8DE[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_4178), -1f, &(Global_8DE[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_85(Global_3826, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8DE[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar5), -1f, &(Global_8DE[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_85(Global_3826, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8DE[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_8DE[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_85(Global_3826, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8DE[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_4173), -1f, &(Global_8DE[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_3826, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8DE[iVar1 /*15*/].f_A);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_56(&(Global_8DE[iVar1 /*15*/]));
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
								func_56(&(Global_8DE[iVar1 /*15*/]));
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
								func_56(&(Global_8DE[iVar1 /*15*/]));
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
								func_56(&(Global_8DE[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else
							{
								func_85(Global_3826, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8DE[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(0), -1f, &(Global_8DE[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_87()//Position - 0x842C
{
	switch (iLocal_50)
	{
		case 1:
			HUD::CLEAR_FLOATING_HELP(0, 1);
			if (MISC::IS_BIT_SET(Global_8D7, 28))
			{
				StringCopy(&cLocal_95, "CELL_296", 16);
				func_49();
			}
			else
			{
				StringCopy(&cLocal_95, "CELL_295", 16);
				func_27();
			}
			break;
		
		case 2:
			if (!MISC::IS_BIT_SET(Global_8D7, 22))
			{
				HUD::CLEAR_FLOATING_HELP(0, 1);
				if (MISC::IS_BIT_SET(Global_8D7, 28))
				{
					StringCopy(&cLocal_95, "CELL_294", 16);
					func_78();
				}
				else
				{
					StringCopy(&cLocal_95, "CELL_293", 16);
					func_77();
				}
				iLocal_50 = 2;
			}
			break;
		
		default:
			break;
	}
}

void func_88(bool bParam0, bool bParam1)//Position - 0x84BA
{
	if (bParam0)
	{
		if (func_89(0))
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

int func_89(int iParam0)//Position - 0x852E
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

void func_90()//Position - 0x8588
{
	if (Global_187385.f_11152 == 0 && Global_187385.f_11153 == 0)
	{
		GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	}
}

void func_91(int iParam0, int iParam1)//Position - 0x85B4
{
	if (Global_187385.f_11152 == 1)
	{
	}
	else if (Global_187385.f_11153 == 1)
	{
	}
	else
	{
		MOBILE::CELL_CAM_ACTIVATE(iParam0, iParam1);
	}
}

int func_92()//Position - 0x85E6
{
	if (MISC::IS_BIT_SET(Global_8D7, 15))
	{
		return 1;
	}
	return 0;
}

int func_93(int iParam0, int iParam1, int iParam2)//Position - 0x8602
{
	if (PAD::IS_CONTROL_JUST_PRESSED(iParam0, uParam1) || (iParam2 == 1 && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(iParam0, iParam1)))
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

void func_94()//Position - 0x8674
{
	if (Global_37FF)
	{
		Local_42 = { -90.3f, 0f, 90f };
		Local_43 = { 1.5f, 0f, -17f };
		if (func_79())
		{
			MOBILE::GET_MOBILE_PHONE_ROTATION(&Local_44, 0);
			Local_42 = { Local_44 };
			MOBILE::GET_MOBILE_PHONE_POSITION(&Local_45);
			Local_43 = { Local_45 };
			iLocal_68 = 0;
			iLocal_69 = 0;
			iLocal_70 = 0;
			iLocal_71 = 0;
			iLocal_72 = 0;
			iLocal_73 = 0;
		}
		if (iLocal_70 == 0)
		{
			if (iLocal_71)
			{
				Local_41.x = (Local_41.x - 14f);
			}
			if (Local_41.x < Local_43.x || Local_41.x == Local_43.x)
			{
				iLocal_71 = 0;
			}
			if (iLocal_72)
			{
				Local_41.f_1 = (Local_41.f_1 + 7f);
			}
			if (Local_41.f_1 > Local_43.f_1 || Local_41.f_1 == Local_43.f_1)
			{
				iLocal_72 = 0;
			}
			if (iLocal_73)
			{
				Local_41.f_2 = (Local_41.f_2 + 12f);
			}
			if (Local_41.f_2 > Local_43.f_2 || Local_41.f_2 == Local_43.f_2)
			{
				iLocal_73 = 0;
			}
		}
		if (iLocal_68)
		{
			Local_40.x = (Local_40.x - 1f);
		}
		if (Local_40.x < Local_42.x || Local_40.x == Local_42.x)
		{
			Local_40.x = Local_42.x;
			iLocal_68 = 0;
		}
		if (iLocal_69)
		{
			Local_40.f_1 = (Local_40.f_1 - 0.5f);
		}
		if (Local_40.f_1 < Local_42.f_1 || Local_40.f_1 == Local_42.f_1)
		{
			Local_40.f_1 = Local_42.f_1;
			iLocal_69 = 0;
		}
		if (iLocal_70)
		{
			Local_40.f_2 = (Local_40.f_2 + 11f);
		}
		if (Local_40.f_2 > Local_42.f_2 || Local_40.f_2 == Local_42.f_2)
		{
			Local_40.f_2 = Local_42.f_2;
			iLocal_70 = 0;
		}
		if (func_79() == 0)
		{
			MOBILE::SET_MOBILE_PHONE_ROTATION(Local_40, 0);
			MOBILE::SET_MOBILE_PHONE_POSITION(Local_41);
		}
	}
	else
	{
		Local_42 = { -93.9f, 4.9f, 90.7f };
		if (iLocal_68)
		{
			Local_40.x = (Local_40.x - 1f);
		}
		if (Local_40.x < Local_42.x || Local_40.x == Local_42.x)
		{
			iLocal_68 = 0;
		}
		if (iLocal_69)
		{
			Local_40.f_1 = (Local_40.f_1 + 2f);
		}
		if (Local_40.f_1 > Local_42.f_1 || Local_40.f_1 == Local_42.f_1)
		{
			iLocal_69 = 0;
		}
		if (iLocal_70)
		{
			Local_40.f_2 = (Local_40.f_2 + 7f);
		}
		if (Local_40.f_2 > Local_42.f_2 || Local_40.f_2 == Local_42.f_2)
		{
			iLocal_70 = 0;
		}
		MOBILE::SET_MOBILE_PHONE_ROTATION(Local_40, 0);
	}
	if (Global_37FF)
	{
		if (((((iLocal_68 == 0 && iLocal_69 == 0) && iLocal_70 == 0) && iLocal_71 == 0) && iLocal_72 == 0) && iLocal_73 == 0)
		{
			if (func_79())
			{
			}
			else
			{
				Local_40 = { Local_42 };
				MOBILE::SET_MOBILE_PHONE_ROTATION(Local_40, 0);
				Local_41 = { Local_43 };
				MOBILE::SET_MOBILE_PHONE_POSITION(Local_41);
			}
			if (iLocal_53 == 0)
			{
				Global_4156 = 0;
				func_91(1, 1);
				iLocal_65 = 1;
				func_95(1);
				func_53();
				func_96();
				func_51(0);
				SYSTEM::SETTIMERA(0);
				iLocal_92 = 1;
				iLocal_93 = 1;
				func_103();
				func_124(uLocal_90, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(iLocal_94), -1082130432, -1082130432, -1082130432, -1082130432);
				if (!MISC::IS_BIT_SET(Global_26D408, 2))
				{
					func_124(uLocal_90, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_124(uLocal_90, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_59), SYSTEM::TO_FLOAT(iLocal_60), -1082130432, -1082130432, -1082130432);
				func_126();
			}
		}
	}
	else if ((iLocal_68 == 0 && iLocal_69 == 0) && iLocal_70 == 0)
	{
		Local_40 = { Local_42 };
		MOBILE::SET_MOBILE_PHONE_ROTATION(Local_40, 0);
		Global_4156 = 0;
	}
}

void func_95(bool bParam0)//Position - 0x89EC
{
	if (func_132())
	{
		if (bParam0)
		{
			if (!GRAPHICS::_0xBCEDB009461DA156())
			{
				GRAPHICS::_0x7AC24EAB6D74118D(1);
				if (Global_26CF0E > 0 && Global_26CF0E < 99)
				{
					GRAPHICS::_0x27FEB5254759CDE3(sLocal_19[Global_26CF0E], 0);
					MOBILE::_0x1B0B4AEED5B9B41C(0.25f);
				}
			}
		}
		else if (GRAPHICS::_0xBCEDB009461DA156())
		{
			GRAPHICS::_0x7AC24EAB6D74118D(0);
		}
	}
}

void func_96()//Position - 0x8A4A
{
	if (Global_26CF0D > 0 && Global_26CF0D < 99)
	{
		GRAPHICS::SET_TIMECYCLE_MODIFIER(sLocal_18[Global_26CF0D]);
	}
}

void func_97()//Position - 0x8A73
{
	if (Global_37FF)
	{
		iLocal_75 = 0;
		func_53();
		func_88(1, 1);
		func_91(1, 1);
		iLocal_65 = 1;
		Global_4159 = 1;
	}
}

void func_98()//Position - 0x8A9B
{
	if (iLocal_77 == 0)
	{
		if (MISC::IS_BIT_SET(Global_8D7, 28))
		{
			StringCopy(&cLocal_95, "CELL_296", 16);
			func_49();
		}
		else
		{
			StringCopy(&cLocal_95, "CELL_295", 16);
			func_27();
		}
		if (MISC::ARE_STRINGS_EQUAL(&cLocal_95, "DUMMYCOMPARISON"))
		{
			fLocal_48 = fLocal_49;
			fLocal_46 = fLocal_47;
			fLocal_49 = fLocal_48;
			fLocal_47 = fLocal_46;
		}
		iLocal_50 = 1;
	}
}

void func_99()//Position - 0x8AF0
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_382E, 1);
	}
}

void func_100()//Position - 0x8B11
{
	GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(0, 0);
	iLocal_71 = 1;
	iLocal_72 = 1;
	iLocal_73 = 1;
	iLocal_74 = 0;
	iLocal_75 = 1;
}

void func_101()//Position - 0x8B2E
{
	func_102();
}

void func_102()//Position - 0x8B3A
{
	if (iLocal_100)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			iLocal_100 = 0;
		}
	}
	if (iLocal_100 == 0)
	{
	}
}

void func_103()//Position - 0x8B59
{
	if (Global_3839.f_1 > 3)
	{
		if (!HUD::IS_PAUSE_MENU_ACTIVE())
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE(uLocal_90, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
		}
	}
}

void func_104()//Position - 0x8B8B
{
	if (func_55(14))
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
		Global_3839 = func_11();
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

void func_105(int iParam0)//Position - 0x8C2C
{
	if (Global_38D7)
	{
		func_88(0, 0);
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
	if (!func_106())
	{
		Global_3839.f_1 = 3;
	}
}

int func_106()//Position - 0x8C9C
{
	if (Global_3839.f_1 == 1 || Global_3839.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_107()//Position - 0x8CC3
{
	PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 56, 1);
	if (iLocal_99 == 0)
	{
		PAD::SET_INPUT_EXCLUSIVE(0, Global_381E);
		PAD::SET_INPUT_EXCLUSIVE(0, Global_381B);
		PAD::DISABLE_CONTROL_ACTION(0, 278, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 279, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 280, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 281, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 282, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 282, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 284, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 285, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 70, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 114, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 71, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 72, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 74, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 76, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 73, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 77, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 78, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 286, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 287, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 79, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 81, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 82, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 86, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 59, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 60, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 61, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 62, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 63, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 64, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 87, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 88, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 89, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 90, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 107, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 108, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 109, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 110, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 111, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 112, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 113, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 114, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 91, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 92, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 68, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 102, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 136, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 137, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 138, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 139, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 102, 1);
	}
}

int func_108()//Position - 0x8EA2
{
	var uVar0;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(uVar0, -1))
			{
				return 1;
			}
			else if (!VEHICLE::GET_PED_IN_VEHICLE_SEAT(uVar0, -1) == PLAYER::PLAYER_PED_ID())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_109()//Position - 0x8EF3
{
	bool bVar0;
	
	func_116(&bVar0);
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
	if (func_115())
	{
		return 1;
	}
	if (Global_252FC2)
	{
		return 1;
	}
	if (func_114())
	{
		return 1;
	}
	if (func_113(157))
	{
		if (!func_112())
		{
			return 1;
		}
	}
	if (func_113(155))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_110() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_110()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_110()//Position - 0x8F86
{
	switch (func_111())
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

int func_111()//Position - 0x8FBA
{
	return Global_5F7C;
}

bool func_112()//Position - 0x8FC5
{
	return Global_250CE3.f_23C;
}

int func_113(int iParam0)//Position - 0x8FD4
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_114()//Position - 0x8FEB
{
	return Global_2528A6;
}

bool func_115()//Position - 0x8FF7
{
	return Global_250CE3.f_237;
}

void func_116(var uParam0)//Position - 0x9006
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
					func_117(iVar0);
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

void func_117(int iParam0)//Position - 0x9076
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (func_119(Var0.f_1, 1, 1))
		{
			iVar1 = PLAYER::GET_PLAYER_PED(Var0.f_1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, 0))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(iVar1, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar2, Var0.f_2) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_118(iVar2, &bVar3))
						{
							VEHICLE::REMOVE_VEHICLE_WINDOW(iVar2, Var0.f_2);
						}
						if (bVar3)
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar2);
						}
					}
				}
			}
		}
	}
}

int func_118(int iParam0, var uParam1)//Position - 0x90F7
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
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

int func_119(var uParam0, bool bParam1, bool bParam2)//Position - 0x9145
{
	int iVar0;
	
	iVar0 = uParam0;
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0))
	{
		if (bParam1)
		{
			if (!PLAYER::IS_PLAYER_PLAYING(uParam0))
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

void func_120(char* sParam0, int iParam1)//Position - 0x9189
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

void func_121()//Position - 0x91A0
{
	if (func_122())
	{
		GRAPHICS::_0x4AF92ACD3141D96C();
		if (GRAPHICS::_0x2A893980E96B659A(0))
		{
			iLocal_53 = 1;
			iLocal_61 = 0;
		}
		else
		{
			Global_4159 = 1;
			Global_3839.f_1 = 3;
			HUD::BUSYSPINNER_OFF();
		}
	}
	else
	{
		iLocal_59 = 0;
		iLocal_60 = 0;
		if (iLocal_54 == 1)
		{
			if (iLocal_77 == 0)
			{
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_90))
				{
					if (func_132())
					{
						if (Global_26CF0E == 0)
						{
							if (!MISC::IS_BIT_SET(Global_26D408, 2))
							{
								func_124(uLocal_90, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
						}
						func_124(uLocal_90, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_59), SYSTEM::TO_FLOAT(iLocal_60), -1082130432, -1082130432, -1082130432);
					}
					else
					{
						if (!MISC::IS_BIT_SET(Global_26D408, 2))
						{
							func_124(uLocal_90, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						}
						func_124(uLocal_90, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_59), SYSTEM::TO_FLOAT(iLocal_60), -1082130432, -1082130432, -1082130432);
					}
				}
			}
			else if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_90))
			{
				func_124(uLocal_90, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_124(uLocal_90, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_59), SYSTEM::TO_FLOAT(iLocal_60), -1082130432, -1082130432, -1082130432);
			}
			iLocal_54 = 0;
		}
		iLocal_61 = 0;
		HUD::BUSYSPINNER_OFF();
	}
}

int func_122()//Position - 0x92FE
{
	if (Global_187385.f_11152 == 1)
	{
		if (Global_10A95)
		{
			return 0;
		}
	}
	if (Global_187385.f_11153 == 1)
	{
		if (Global_10A95)
		{
			return 0;
		}
	}
	if (MISC::IS_XBOX360_VERSION() || MISC::IS_PS3_VERSION())
	{
		if (MISC::IS_BIT_SET(Global_8D8, 28))
		{
			return 0;
		}
	}
	return 1;
}

void func_123(var uParam0, char* sParam1)//Position - 0x935A
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_124(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x936F
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

int func_125()//Position - 0x93D2
{
	if (Global_10A95)
	{
		Global_3839 = 3;
	}
	else
	{
		Global_3839 = func_11();
	}
	if (Global_3839 > 3)
	{
		Global_3839 = 3;
	}
	return Global_17C49.f_3011[Global_3839 /*20*/].f_7;
}

void func_126()//Position - 0x9408
{
	if (Global_3839.f_1 > 3)
	{
		Global_3839.f_1 = 8;
	}
	Global_4158 = 0;
	iLocal_77 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		Local_33 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	}
	if (Global_37FF)
	{
		while (SYSTEM::TIMERA() < iLocal_87)
		{
			SYSTEM::WAIT(0);
			func_103();
			func_75();
			RECORDING::_STOP_RECORDING_THIS_FRAME();
		}
		func_123(uLocal_90, "OPEN_SHUTTER");
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		func_98();
		iLocal_79 = 1;
		SYSTEM::SETTIMERB(0);
	}
	else
	{
		func_91(1, 1);
		func_95(1);
		func_53();
		func_96();
		func_51(0);
		iLocal_65 = 1;
	}
}

void func_127(int iParam0)//Position - 0x949B
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8D7, 15);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8D7, 15);
	}
}

bool func_128()//Position - 0x94BE
{
	return Global_141422;
}

void func_129()//Position - 0x94CA
{
}

int func_130(int iParam0, int iParam1, bool bParam2)//Position - 0x94D2
{
	int iVar0;
	
	iVar0 = 0;
	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::_0xA0FE76168A189DDB() != iParam0 && bParam2)
		{
			CUTSCENE::_0x20746F7B1032A3C7(iParam0, iParam1, 1);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_131()//Position - 0x9503
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
			MOBILE::_0x53F4892D18EC90A4(fLocal_105);
			MOBILE::_0x3117D84EFA60F77B(fLocal_106);
			MOBILE::_0xAC2890471901861C(fLocal_107);
		}
		else
		{
			MOBILE::_0x53F4892D18EC90A4(fLocal_105);
			MOBILE::_0x3117D84EFA60F77B(fLocal_106);
			MOBILE::_0xAC2890471901861C(fLocal_107);
		}
	}
	MOBILE::_0x15E69E2802C24B8D(fLocal_108);
	MOBILE::_0xD6ADE981781FCA09(fLocal_109);
	MOBILE::_0xF1E22DC13F5EEBAD(fLocal_110);
	MOBILE::_0x466DA42C89865553(fLocal_111);
	func_50();
}

int func_132()//Position - 0x956F
{
	if (iLocal_22 == 0)
	{
		iLocal_22 = 1;
	}
	return 1;
}

