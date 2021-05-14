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
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	struct<3> Local_59 = { 0, 0, 0 } ;
	float fLocal_60 = 0f;
	struct<3> Local_61 = { 0, 0, 0 } ;
	struct<3> Local_62 = { 0, 0, 0 } ;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	struct<3> Local_67[2];
	bool bLocal_68 = 0;
	float fLocal_69 = 0f;
	float fLocal_70 = 0f;
	float fLocal_71 = 0f;
	float fLocal_72 = 0f;
	float fLocal_73 = 0f;
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
	bool bLocal_86 = 0;
	bool bLocal_87 = 0;
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
	sLocal_20 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_37 = 3;
	iLocal_43 = 1;
	iLocal_44 = 65;
	iLocal_45 = 49;
	iLocal_46 = 64;
	Local_59 = { -1124.392f, -514.7001f, 33.21493f };
	fLocal_60 = 200f;
	Local_61 = { 2490f, 3777f, 2402.879f };
	Local_62 = { -2052f, 3237f, 1450.078f };
	iLocal_63 = -1;
	iLocal_65 = -1;
	bLocal_68 = true;
	fLocal_69 = 10f;
	fLocal_70 = 90f;
	fLocal_71 = 35f;
	fLocal_72 = 60f;
	fLocal_73 = 275f;
	iLocal_74 = 1500;
	iLocal_75 = -1;
	iLocal_77 = 3000;
	iLocal_78 = 708;
	iLocal_79 = 377;
	iLocal_80 = 1000;
	iLocal_81 = 2093;
	iLocal_84 = -1;
	iLocal_85 = -1;
	bLocal_86 = true;
	bLocal_87 = true;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_12();
	}
	while (CAM::IS_SCREEN_FADED_OUT())
	{
		SYSTEM::WAIT(0);
	}
	if (!STREAMING::IS_IPL_ACTIVE("ufo"))
	{
		STREAMING::REQUEST_IPL("ufo");
	}
	Local_67[0 /*3*/] = { Local_61 };
	Local_67[1 /*3*/] = { Local_62 };
	while (true)
	{
		func_11(PLAYER::PLAYER_PED_ID());
		if (Global_5F80 == 1)
		{
			func_12();
		}
		if (bLocal_68)
		{
			if (!func_10(PLAYER::PLAYER_PED_ID(), Local_67[0 /*3*/], (290f + 50f)))
			{
				if (!func_10(PLAYER::PLAYER_PED_ID(), Local_67[1 /*3*/], (290f + 50f)))
				{
					func_12();
				}
			}
			if (iLocal_66 != 0)
			{
				if (!func_10(PLAYER::PLAYER_PED_ID(), Local_67[0 /*3*/], (fLocal_73 + 50f)))
				{
					if (!func_10(PLAYER::PLAYER_PED_ID(), Local_67[1 /*3*/], (fLocal_73 + 50f)))
					{
						AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_SPECIAL_UFO_01", 0, 1);
						AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_SPECIAL_UFO_02", 0, 1);
						iLocal_66 = 0;
						iLocal_65 = -1;
					}
				}
			}
		}
		func_8();
		switch (iLocal_66)
		{
			case 0:
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 < Local_67.x)
				{
					if (func_10(PLAYER::PLAYER_PED_ID(), Local_67[iVar0 /*3*/], fLocal_73))
					{
						iLocal_65 = iVar0;
						iLocal_66 = 1;
						AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_SPECIAL_UFO_01", 1, 1);
						AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_SPECIAL_UFO_02", 1, 1);
					}
					iVar0++;
				}
				break;
			
			case 1:
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 < Local_67.x)
				{
					if (func_10(PLAYER::PLAYER_PED_ID(), Local_67[iVar0 /*3*/], fLocal_70))
					{
						iLocal_65 = iVar0;
						iLocal_66 = 2;
					}
					iVar0++;
				}
				break;
			
			case 2:
				if (iLocal_65 == -1)
				{
					iLocal_66 = 1;
				}
				else
				{
					iLocal_63 = MISC::GET_GAME_TIMER();
					iLocal_64 = 0;
					iLocal_66 = 3;
				}
				break;
			
			case 3:
				if (func_10(PLAYER::PLAYER_PED_ID(), Local_67[iLocal_65 /*3*/], fLocal_70))
				{
					iLocal_64 = (MISC::GET_GAME_TIMER() - iLocal_63);
					if (iLocal_64 >= iLocal_74)
					{
						iLocal_66 = 4;
						iLocal_75 = AUDIO::GET_SOUND_ID();
						iLocal_76 = MISC::GET_GAME_TIMER();
						if (iLocal_65 == 0)
						{
							AUDIO::PLAY_SOUND_FROM_COORD(iLocal_75, "SPECIAL_EVIL_UFO_DEATH_RAY", Local_67[iLocal_65 /*3*/], 0, 0, 0, 0);
						}
						else
						{
							AUDIO::PLAY_SOUND_FROM_COORD(iLocal_75, "SPECIAL_EVIL_UFO_DEATH_RAY_3", Local_67[iLocal_65 /*3*/], 0, 0, 0, 0);
						}
						func_7();
						func_6();
					}
				}
				else
				{
					iLocal_66 = 1;
				}
				break;
			
			case 4:
				func_5();
				func_7();
				func_6();
				if (MISC::GET_GAME_TIMER() > (iLocal_76 + iLocal_77))
				{
					func_4(&iLocal_75);
				}
				if (!func_10(PLAYER::PLAYER_PED_ID(), Local_67[iLocal_65 /*3*/], fLocal_73))
				{
					func_1();
					iLocal_65 = -1;
					iLocal_66 = 0;
					func_4(&iLocal_85);
					func_4(&iLocal_84);
					AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_SPECIAL_UFO_01", 0, 1);
					AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_SPECIAL_UFO_02", 0, 1);
				}
				break;
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x398
{
	var uVar0;
	
	if (func_11(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (func_2(uVar0))
			{
				VEHICLE::SET_VEHICLE_ENGINE_ON(uVar0, 1, 0);
			}
		}
	}
}

int func_2(var uParam0)//Position - 0x3D3
{
	if (func_3(uParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_3(var uParam0)//Position - 0x3FD
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_4(int iParam0)//Position - 0x41D
{
	if (*iParam0 != -1)
	{
		AUDIO::STOP_SOUND(*iParam0);
		AUDIO::RELEASE_SOUND_ID(*iParam0);
		*iParam0 = -1;
	}
}

void func_5()//Position - 0x43E
{
	var uVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (func_2(uVar0))
		{
			VEHICLE::SET_VEHICLE_ENGINE_ON(uVar0, 0, 0);
			ENTITY::APPLY_FORCE_TO_ENTITY(uVar0, 2, 0f, 0f, -fLocal_69, 0f, 1f, 0f, 0, 0, 1, 1, 0, 1);
		}
	}
}

void func_6()//Position - 0x483
{
	if (bLocal_87)
	{
		if (MISC::GET_GAME_TIMER() > iLocal_82)
		{
			if (iLocal_84 != -1)
			{
				func_4(&iLocal_84);
				iLocal_82 = (MISC::GET_GAME_TIMER() + iLocal_81);
			}
			else
			{
				iLocal_84 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND(iLocal_84, "ent_amb_elec_crackle", 0, 0, 0, 1);
				iLocal_82 = (MISC::GET_GAME_TIMER() + iLocal_79);
			}
		}
	}
}

void func_7()//Position - 0x4CD
{
	if (bLocal_86)
	{
		if (MISC::GET_GAME_TIMER() > iLocal_83)
		{
			if (iLocal_85 != -1)
			{
				func_4(&iLocal_85);
				iLocal_83 = (MISC::GET_GAME_TIMER() + iLocal_80);
			}
			else
			{
				iLocal_85 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND(iLocal_85, "spl_stun_npc_master", 0, 0, 0, 1);
				iLocal_83 = (MISC::GET_GAME_TIMER() + iLocal_78);
			}
		}
	}
}

void func_8()//Position - 0x517
{
	struct<3> Var0;
	
	if (iLocal_65 == -1)
	{
		return;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		return;
	}
	if (!func_10(PLAYER::PLAYER_PED_ID(), Local_67[iLocal_65 /*3*/], fLocal_71))
	{
		return;
	}
	Var0 = { func_9(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - Local_67[iLocal_65 /*3*/]) * Vector(fLocal_72, fLocal_72, fLocal_72) };
	ENTITY::APPLY_FORCE_TO_ENTITY(PLAYER::PLAYER_PED_ID(), 2, Var0, 0f, 0f, 0f, 0, 0, 1, 1, 0, 1);
}

Vector3 func_9(struct<3> Param0)//Position - 0x584
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

bool func_10(var uParam0, struct<3> Param1, float fParam2)//Position - 0x5C3
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(uParam0, 1), Param1) <= (fParam2 * fParam2);
}

bool func_11(var uParam0)//Position - 0x5E0
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		return 0;
	}
	return !ENTITY::IS_ENTITY_DEAD(uParam0);
}

void func_12()//Position - 0x5FD
{
	if (STREAMING::IS_IPL_ACTIVE("ufo"))
	{
		STREAMING::REMOVE_IPL("ufo");
	}
	func_4(&iLocal_85);
	func_4(&iLocal_84);
	func_4(&iLocal_75);
	AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_SPECIAL_UFO_01", 0, 1);
	AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_SPECIAL_UFO_02", 0, 1);
	func_1();
	SCRIPT::TERMINATE_THIS_THREAD();
}

