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
	int iLocal_18[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	var uLocal_31 = 0;
	struct<16> Local_32 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_33[19];
	struct<16> Local_34[19];
	int iLocal_35 = 0;
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
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
	{
		func_42();
	}
	func_41();
	Global_4176 = 0;
	Global_17C49.f_3011[Global_3839 /*20*/].f_12 = 0;
	Global_38D6 = 0;
	func_40(Global_3826, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_38();
	func_37();
	if (Global_3839.f_1 > 3)
	{
		Global_3839.f_1 = 7;
	}
	iLocal_29 = MISC::GET_GAME_TIMER();
	Global_383D = 1;
	while (true)
	{
		SYSTEM::WAIT(0);
		if (iLocal_28 == 0)
		{
			iLocal_30 = MISC::GET_GAME_TIMER();
			if ((iLocal_30 - iLocal_29) > 500)
			{
				iLocal_28 = 1;
			}
		}
		if (Global_3839.f_1 != 9)
		{
			switch (Global_3839.f_1)
			{
				case 7:
					if (Global_4176 == 0)
					{
						if (Global_256EFB == 0)
						{
							func_32();
							func_28();
						}
					}
					break;
				
				case 8:
					if (Global_4176 == 1)
					{
						func_5();
						func_32();
					}
					break;
				
				default:
					break;
			}
			if (Global_4176 == 0)
			{
				if (func_4())
				{
					func_42();
				}
			}
			else if (func_3(2, Global_3819, 0) || MISC::IS_BIT_SET(Global_8D8, 12))
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_17C49.f_306B[iLocal_22 /*104*/]), "CELL_FINV"))
				{
				}
				else
				{
					SYSTEM::WAIT(0);
					MISC::CLEAR_BIT(&Global_8D8, 12);
					func_2();
					Global_3823 = 1;
					Global_4176 = 0;
					if (Global_3839.f_1 > 3)
					{
						Global_3839.f_1 = 7;
					}
					if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
					{
						func_42();
					}
					func_40(Global_3826, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_38();
					func_37();
					if (Global_17C49.f_306B[iLocal_22 /*104*/].f_1D > 0)
					{
						if (Global_17C49.f_306B[iLocal_22 /*104*/].f_1F == 1)
						{
							Global_17C49.f_306B[iLocal_22 /*104*/].f_1D = 4;
							Global_17C49.f_306B[iLocal_22 /*104*/].f_18 = 1;
						}
						else
						{
							Global_17C49.f_306B[iLocal_22 /*104*/].f_1D = 4;
							Global_17C49.f_306B[iLocal_22 /*104*/].f_18 = 1;
						}
					}
				}
			}
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
		{
			func_42();
		}
		if (func_1())
		{
			func_42();
		}
	}
}

int func_1()//Position - 0x237
{
	if (((Global_3839.f_1 == 1 || Global_3839.f_1 == 3) || Global_3839.f_1 == 0) || Global_3801 == 1)
	{
		Global_382C = 1;
		return 1;
	}
	return 0;
}

void func_2()//Position - 0x27A
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_382E, 1);
	}
}

int func_3(int iParam0, int iParam1, int iParam2)//Position - 0x29A
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

int func_4()//Position - 0x30C
{
	if (Global_B35 == 1 || Global_3839.f_1 < 7)
	{
		Global_382C = 1;
		return 1;
	}
	return 0;
}

void func_5()//Position - 0x335
{
	func_6();
}

void func_6()//Position - 0x341
{
	if (Global_17C49.f_306B[iLocal_22 /*104*/].f_18 == 1)
	{
		if (Global_3823 == 0)
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(2, Global_381C))
			{
				func_2();
				Global_3823 = 1;
				func_22();
				if (Global_17C49.f_306B[iLocal_22 /*104*/].f_1B == 1)
				{
					Global_17C49.f_306B[iLocal_22 /*104*/].f_63[0] = 0;
					Global_17C49.f_306B[iLocal_22 /*104*/].f_63[1] = 0;
					Global_17C49.f_306B[iLocal_22 /*104*/].f_63[2] = 0;
				}
				else
				{
					Global_17C49.f_306B[iLocal_22 /*104*/].f_63[Global_3839] = 0;
				}
				if (func_21(iLocal_22))
				{
				}
				else
				{
					Global_17C49.f_306B[iLocal_22 /*104*/].f_18 = 0;
					Global_17C49.f_306B[iLocal_22 /*104*/].f_1C = 0;
				}
				HUD::THEFEED_REMOVE_ITEM(Global_17C49.f_306B[iLocal_22 /*104*/].f_10);
				func_40(Global_3826, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_38();
				if (iLocal_20 > 0)
				{
					iLocal_20 = (iLocal_20 - 1);
				}
				func_37();
				if (Global_3839.f_1 > 3)
				{
					Global_3839.f_1 = 7;
					Global_4176 = 0;
				}
			}
		}
	}
	else if (Global_3823 == 0)
	{
		if (PAD::IS_CONTROL_PRESSED(2, Global_381D))
		{
			if (iLocal_24 == 1)
			{
				if (Global_3839.f_1 > 3)
				{
					StringCopy(&Global_105E2, HUD::_GET_LABEL_TEXT(&Global_415D), 64);
					Global_105FB = 7;
					MISC::SET_BIT(&Global_8D8, 10);
					Global_3839.f_1 = 6;
				}
				func_42();
			}
		}
	}
	if (Global_17C49.f_306B[iLocal_22 /*104*/].f_1F == 1)
	{
		if (Global_3823 == 0)
		{
			if (func_3(2, Global_381D, 0))
			{
				func_18();
				Global_3823 = 1;
				Global_17C49.f_306B[iLocal_22 /*104*/].f_1D = 2;
				Global_17C49.f_306B[iLocal_22 /*104*/].f_18 = 1;
				Global_17C49.f_306B[iLocal_22 /*104*/].f_1F = 0;
				MISC::CLEAR_BIT(&Global_8D7, 17);
				Global_4176 = 0;
				if (Global_3839.f_1 > 3)
				{
					Global_3839.f_1 = 7;
				}
				func_40(Global_3826, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_38();
				func_37();
			}
		}
	}
	if (Global_3823 == 0 && iLocal_28 == 1)
	{
		if (func_3(2, Global_381A, 0))
		{
			Global_3823 = 1;
			if (Global_17C49.f_306B[iLocal_22 /*104*/].f_1D > 0)
			{
				func_18();
				Global_17C49.f_306B[iLocal_22 /*104*/].f_1D = 3;
				Global_17C49.f_306B[iLocal_22 /*104*/].f_18 = 1;
				Global_4176 = 0;
				if (Global_3839.f_1 > 3)
				{
					Global_3839.f_1 = 7;
				}
				func_40(Global_3826, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_38();
				func_37();
			}
			else if (Global_17C49.f_306B[iLocal_22 /*104*/].f_1E == 1)
			{
				func_18();
				Global_62A = 144;
				if (Global_3839.f_1 > 3)
				{
					Global_3839.f_1 = 10;
					if (func_17() == 0)
					{
						func_15();
					}
				}
				func_14("appContacts");
				Global_3837 = SYSTEM::START_NEW_SCRIPT("appContacts", 3800);
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appContacts");
				Global_62A = Global_17C49.f_306B[iLocal_22 /*104*/].f_11;
				if (Global_17C49.f_744E[Global_62A /*29*/].f_18[Global_3839] == 0)
				{
					func_13(Global_3826, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_61[Global_62A /*10*/].f_4), "CELL_300", "CELL_211", "CELL_195", 0);
				}
				else
				{
					func_13(Global_3826, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_17C49.f_744E[Global_62A /*29*/].f_3), &(Global_17C49.f_744E[Global_62A /*29*/].f_7), "CELL_211", &(Global_17C49.f_744E[Global_62A /*29*/].f_3), 0);
				}
				func_7();
				func_42();
			}
		}
	}
}

void func_7()//Position - 0x6BA
{
	char cVar0[24];
	
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
			func_40(Global_3826, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_11(Global_B34);
			if (Global_B34 == 1)
			{
				func_40(Global_3826, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_383D), -1082130432, -1082130432, -1082130432);
				Global_3825 = Global_383D;
			}
			else
			{
				func_40(Global_3826, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_383E), -1082130432, -1082130432, -1082130432);
				Global_3825 = Global_383E;
			}
			if (Global_382D)
			{
				func_13(Global_3826, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_13(Global_3826, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_13(Global_3826, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_13(Global_3826, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_38D9 == 0)
			{
				func_13(Global_3826, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_8D7, 17);
			}
			else if (Global_10A95)
			{
				func_13(Global_3826, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_8D7, 17);
			}
			else
			{
				if (Global_38D8 == 1)
				{
					if (Global_382D)
					{
						func_13(Global_3826, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_13(Global_3826, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_382D)
				{
					func_13(Global_3826, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_13(Global_3826, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				MISC::SET_BIT(&Global_8D7, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_40(Global_3826, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_13(Global_3826, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_13(Global_3826, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8D7, 17);
			if (MISC::IS_BIT_SET(Global_8D7, 20))
			{
				func_13(Global_3826, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_382D)
			{
				func_13(Global_3826, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_3800)
				{
					func_13(Global_3826, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_13(Global_3826, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_3838 == 1)
			{
				func_10();
				func_40(Global_3826, "SET_THEME", SYSTEM::TO_FLOAT(Global_17C49.f_3011[Global_3839 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_3D59)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_3826, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_3D5B);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_9("CELL_300");
					func_9("CELL_217");
					func_9("CELL_217");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else if (Global_17C49.f_744E[Global_62A /*29*/].f_18[Global_3839] == 0)
				{
					func_13(Global_3826, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_61[Global_62A /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_13(Global_3826, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_17C49.f_744E[Global_62A /*29*/].f_3), &(Global_17C49.f_744E[Global_62A /*29*/].f_7), "CELL_217", &(Global_17C49.f_744E[Global_62A /*29*/].f_3), 0);
				}
				func_40(Global_3826, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_3D4C == 4 || Global_3D4C == 3)
			{
				func_40(Global_3826, "SET_THEME", SYSTEM::TO_FLOAT(Global_17C49.f_3011[Global_3839 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_10();
				if (Global_3D59)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_3826, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_3D5B);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_9("CELL_300");
					func_9("CELL_219");
					func_9("CELL_219");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					if (Global_3E4E)
					{
						StringCopy(&cVar0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&cVar0, "CELL_211", 24);
					}
					if (Global_17C49.f_744E[Global_62A /*29*/].f_18[Global_3839] == 0)
					{
						func_40(Global_3826, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_13(Global_3826, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_61[Global_62A /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_40(Global_3826, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_13(Global_3826, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_17C49.f_744E[Global_62A /*29*/].f_3), &(Global_17C49.f_744E[Global_62A /*29*/].f_7), &cVar0, &(Global_17C49.f_744E[Global_62A /*29*/].f_3), 0);
					}
				}
				func_40(Global_3826, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_8();
			break;
		
		default:
			break;
	}
}

void func_8()//Position - 0xC5D
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_3826))
	{
		if (Global_3838 == 1)
		{
			if (Global_382D)
			{
				func_13(Global_3826, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_13(Global_3826, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_3D7B)
			{
				func_13(Global_3826, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (MISC::IS_BIT_SET(Global_8D7, 20))
			{
				func_13(Global_3826, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_382D)
			{
				func_13(Global_3826, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_13(Global_3826, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_13(Global_3826, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8D7, 17);
		}
		else
		{
			func_13(Global_3826, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_13(Global_3826, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8D7, 17);
			if (MISC::IS_BIT_SET(Global_8D7, 20))
			{
				func_13(Global_3826, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_382D)
			{
				func_13(Global_3826, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_3800)
				{
					func_13(Global_3826, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_13(Global_3826, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_9(char* sParam0)//Position - 0xDDD
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_10()//Position - 0xDEF
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

void func_11(int iParam0)//Position - 0x1065
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
		if (func_12(14))
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
								func_9(&(Global_8DE[iVar1 /*15*/]));
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
								func_13(Global_3826, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8DE[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_4178), -1f, &(Global_8DE[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_13(Global_3826, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8DE[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar5), -1f, &(Global_8DE[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_13(Global_3826, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8DE[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_8DE[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_13(Global_3826, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8DE[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_4173), -1f, &(Global_8DE[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_3826, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8DE[iVar1 /*15*/].f_A);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_9(&(Global_8DE[iVar1 /*15*/]));
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
								func_9(&(Global_8DE[iVar1 /*15*/]));
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
								func_9(&(Global_8DE[iVar1 /*15*/]));
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
								func_9(&(Global_8DE[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else
							{
								func_13(Global_3826, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8DE[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(0), -1f, &(Global_8DE[iVar1 /*15*/]), 0, 0, 0, 0);
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

bool func_12(int iParam0)//Position - 0x14F1
{
	return Global_8861 == iParam0;
}

void func_13(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x14FF
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
		func_9(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_9(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_9(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_9(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_9(sParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_14(char* sParam0)//Position - 0x15B2
{
	SCRIPT::REQUEST_SCRIPT(sParam0);
	while (!SCRIPT::HAS_SCRIPT_LOADED(sParam0))
	{
		SYSTEM::WAIT(0);
	}
}

void func_15()//Position - 0x15D2
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_16() && PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar1 = 1;
		}
	}
	if (!Global_10A95)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && iVar1 == 0)
		{
			iVar2 = PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0);
			if (Global_10A95)
			{
				if (((((iVar2 == 15 || iVar2 == 16) || iVar2 == 17) || iVar2 == 18) || iVar2 == 19) || PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
				{
					iVar0 = 1;
				}
			}
			else if (PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = 1;
			}
			if (!Global_3800)
			{
				if (Global_62A != 128)
				{
					if (iVar0 == 0)
					{
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
							}
							else
							{
								if (Global_10A95)
								{
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, 0);
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, 0);
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, 0);
								}
								MISC::SET_BIT(&Global_8D7, 11);
								TASK::TASK_USE_MOBILE_PHONE(PLAYER::PLAYER_PED_ID(), 1, 1);
							}
						}
					}
				}
			}
		}
	}
}

int func_16()//Position - 0x16F4
{
	var uVar0;
	int iVar1;
	
	uVar0 = CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
	iVar1 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(uVar0);
	if (iVar1 == 4)
	{
		return 1;
	}
	return 0;
}

int func_17()//Position - 0x1718
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
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
		if (func_12(14))
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
				uVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if (((((((VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(uVar3)) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(uVar3))) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(uVar3))) || ENTITY::GET_ENTITY_MODEL(uVar3) == joaat("seashark")) || ENTITY::GET_ENTITY_MODEL(uVar3) == joaat("seashark2")) || ENTITY::GET_ENTITY_MODEL(uVar3) == joaat("rhino")) || ENTITY::GET_ENTITY_MODEL(uVar3) == joaat("submersible")) || ENTITY::GET_ENTITY_MODEL(uVar3) == joaat("submersible2"))
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

void func_18()//Position - 0x192B
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_382E, 1);
		func_19();
	}
}

void func_19()//Position - 0x194F
{
	if (func_20())
	{
		MOBILE::_CELL_CAM_MOVE_FINGER(5);
	}
}

int func_20()//Position - 0x1963
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

int func_21(int iParam0)//Position - 0x19AA
{
	if ((Global_17C49.f_306B[iParam0 /*104*/].f_63[0] == 1 || Global_17C49.f_306B[iParam0 /*104*/].f_63[1] == 1) || Global_17C49.f_306B[iParam0 /*104*/].f_63[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_22()//Position - 0x19FF
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
		Global_3839 = func_23();
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

var func_23()//Position - 0x1AA0
{
	func_24();
	return Global_17C49.f_6C1.f_21B.f_C8D;
}

void func_24()//Position - 0x1AB9
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_27(Global_17C49.f_6C1.f_21B.f_C8D) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_26(PLAYER::PLAYER_PED_ID());
			if (func_25(iVar0) && (!func_12(14) || Global_17832))
			{
				if (Global_17C49.f_6C1.f_21B.f_C8D != iVar0 && func_25(Global_17C49.f_6C1.f_21B.f_C8D))
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

bool func_25(int iParam0)//Position - 0x1BB6
{
	return iParam0 < 3;
}

int func_26(var uParam0)//Position - 0x1BC2
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_27(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_27(int iParam0)//Position - 0x1BFF
{
	if (func_25(iParam0))
	{
		return Global_17C49.f_744E[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_28()//Position - 0x1C29
{
	struct<16> Var0;
	char* sVar1;
	int iVar2;
	
	if (Global_3823 == 0)
	{
		if ((func_3(2, Global_381A, 0) || Global_17C49.f_3011[Global_3839 /*20*/].f_11 == 1) || Global_4170 == 1)
		{
			if (Global_17C49.f_3011[Global_3839 /*20*/].f_11 == 0 && Global_4170 == 0)
			{
				func_18();
			}
			Global_3823 = 1;
			iLocal_28 = 0;
			iLocal_22 = iLocal_18[iLocal_20];
			if (Global_17C49.f_306B[iLocal_22 /*104*/].f_18 != 0)
			{
				if (Global_3839.f_1 > 3)
				{
					func_13(Global_3826, "SET_SOFT_KEYS", 1f, 0f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
					MISC::CLEAR_BIT(&Global_8D7, 17);
					Global_3839.f_1 = 8;
				}
				if (Global_17C49.f_3011[Global_3839 /*20*/].f_11 == 1 || Global_4170 == 1)
				{
					iLocal_22 = iLocal_18[0];
					iLocal_21 = 0;
					if (Global_17C49.f_3011[Global_3839 /*20*/].f_11 == 1)
					{
					}
					Global_4170 = 0;
				}
				else
				{
					SYSTEM::SETTIMERB(0);
					iLocal_26 = 0;
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_3826, "GET_CURRENT_SELECTION");
					uLocal_31 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
					while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_31) && iLocal_26 == 0)
					{
						SYSTEM::WAIT(0);
						if (SYSTEM::TIMERB() > 2000)
						{
							iLocal_26 = 1;
						}
					}
					if (iLocal_26 == 1)
					{
						iLocal_27 = 0;
					}
					else
					{
						iLocal_27 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uLocal_31);
					}
					if (iLocal_27 < 0)
					{
						iLocal_27 = 0;
					}
					iLocal_22 = iLocal_18[iLocal_27];
					iLocal_21 = iLocal_27;
				}
				Global_17C49.f_306B[iLocal_22 /*104*/].f_1C = 1;
				iLocal_24 = 0;
				StringCopy(&Global_415D, "NO_HYPERLINK", 64);
				Var0 = { Global_17C49.f_306B[iLocal_22 /*104*/] };
				StringConCat(&Var0, "_LINK", 64);
				if (HUD::DOES_TEXT_LABEL_EXIST(&Var0))
				{
					Global_415D = { Var0 };
					iLocal_24 = 1;
					if (Global_382D)
					{
						func_13(Global_3826, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, "CELL_267", 0, 0, 0, 0);
					}
					else
					{
						func_13(Global_3826, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					MISC::SET_BIT(&Global_8D7, 17);
					Global_17C49.f_306B[iLocal_22 /*104*/].f_1A = 1;
					Global_17C49.f_306B[iLocal_22 /*104*/].f_18 = 2;
				}
				if (Global_17C49.f_306B[iLocal_22 /*104*/].f_1A == 0)
				{
					Global_17C49.f_306B[iLocal_22 /*104*/].f_18 = 1;
				}
				func_31();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_3826, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(7);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				if (Global_17C49.f_306B[iLocal_22 /*104*/].f_11 == 145)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_2000");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17C49.f_306B[iLocal_22 /*104*/].f_32));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else
				{
					func_9(&(Global_17C49.f_744E[Global_17C49.f_306B[iLocal_22 /*104*/].f_11 /*29*/].f_3));
				}
				switch (Global_17C49.f_306B[iLocal_22 /*104*/].f_20)
				{
					case 0:
						func_9(&(Global_17C49.f_306B[iLocal_22 /*104*/]));
						break;
					
					case 1:
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_17C49.f_306B[iLocal_22 /*104*/]));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17C49.f_306B[iLocal_22 /*104*/].f_21));
						if (Global_17C49.f_306B[iLocal_22 /*104*/].f_42 == 1 && !MISC::ARE_STRINGS_EQUAL(&(Global_17C49.f_306B[iLocal_22 /*104*/].f_43), "NULL"))
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17C49.f_306B[iLocal_22 /*104*/].f_43));
						}
						if ((Global_17C49.f_306B[iLocal_22 /*104*/].f_42 == 2 && !MISC::ARE_STRINGS_EQUAL(&(Global_17C49.f_306B[iLocal_22 /*104*/].f_43), "NULL")) && !MISC::ARE_STRINGS_EQUAL(&(Global_17C49.f_306B[iLocal_22 /*104*/].f_53), "NULL"))
						{
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_17C49.f_306B[iLocal_22 /*104*/].f_43)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17C49.f_306B[iLocal_22 /*104*/].f_43));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17C49.f_306B[iLocal_22 /*104*/].f_43));
							}
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_17C49.f_306B[iLocal_22 /*104*/].f_53)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17C49.f_306B[iLocal_22 /*104*/].f_53));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17C49.f_306B[iLocal_22 /*104*/].f_53));
							}
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						break;
					
					case 2:
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_17C49.f_306B[iLocal_22 /*104*/]));
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_17C49.f_306B[iLocal_22 /*104*/].f_31);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						break;
					
					case 3:
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_17C49.f_306B[iLocal_22 /*104*/]));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17C49.f_306B[iLocal_22 /*104*/].f_21));
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_17C49.f_306B[iLocal_22 /*104*/].f_31);
						if (Global_17C49.f_306B[iLocal_22 /*104*/].f_42 == 1 && !MISC::ARE_STRINGS_EQUAL(&(Global_17C49.f_306B[iLocal_22 /*104*/].f_43), "NULL"))
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17C49.f_306B[iLocal_22 /*104*/].f_43));
						}
						if ((Global_17C49.f_306B[iLocal_22 /*104*/].f_42 == 2 && !MISC::ARE_STRINGS_EQUAL(&(Global_17C49.f_306B[iLocal_22 /*104*/].f_43), "NULL")) && !MISC::ARE_STRINGS_EQUAL(&(Global_17C49.f_306B[iLocal_22 /*104*/].f_53), "NULL"))
						{
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_17C49.f_306B[iLocal_22 /*104*/].f_43)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17C49.f_306B[iLocal_22 /*104*/].f_43));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17C49.f_306B[iLocal_22 /*104*/].f_43));
							}
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_17C49.f_306B[iLocal_22 /*104*/].f_53)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17C49.f_306B[iLocal_22 /*104*/].f_53));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17C49.f_306B[iLocal_22 /*104*/].f_53));
							}
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						break;
					
					case 4:
						func_30(iLocal_22);
						break;
					
					case 5:
						func_30(iLocal_22);
						break;
					
					case 6:
						func_30(iLocal_22);
						break;
					
					case 7:
						func_30(iLocal_22);
						break;
					
					case 8:
						func_30(iLocal_22);
						break;
					
					case 9:
						func_30(iLocal_22);
						break;
					
					case 10:
						func_30(iLocal_22);
						break;
					
					case 11:
						func_30(iLocal_22);
						break;
				}
				if (Global_4179[iLocal_22] == 0)
				{
					func_9(&(Global_17C49.f_744E[Global_17C49.f_306B[iLocal_22 /*104*/].f_11 /*29*/].f_7));
				}
				else
				{
					if (PED::IS_PEDHEADSHOT_VALID(Global_4179[iLocal_22]))
					{
						if (PED::IS_PEDHEADSHOT_READY(Global_4179[iLocal_22]))
						{
							sVar1 = PED::GET_PEDHEADSHOT_TXD_STRING(Global_4179[iLocal_22]);
						}
						else
						{
							sVar1 = "CHAR_DEFAULT";
						}
					}
					else
					{
						sVar1 = "CHAR_DEFAULT";
					}
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_2000");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sVar1);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				Global_4176 = 1;
				func_40(Global_3826, "DISPLAY_VIEW", 7f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_29(Global_3826, "SET_HEADER", "CELL_1", 0, 0, 0, 0);
				HUD::THEFEED_REMOVE_ITEM(Global_17C49.f_306B[iLocal_22 /*104*/].f_10);
				if (Global_17C49.f_306B[iLocal_22 /*104*/].f_1D > 0)
				{
					if (Global_382D)
					{
						func_13(Global_3826, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
					}
					else
					{
						func_13(Global_3826, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_17C49.f_306B[iLocal_22 /*104*/].f_1E == 1)
				{
					if (Global_382D)
					{
						func_13(Global_3826, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					}
					else
					{
						func_13(Global_3826, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else
				{
					func_13(Global_3826, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_17C49.f_306B[iLocal_22 /*104*/].f_1D > 0)
				{
					if (MISC::ARE_STRINGS_EQUAL(&(Global_17C49.f_306B[iLocal_22 /*104*/]), "CELL_FINV"))
					{
						if (Global_382D)
						{
							func_13(Global_3826, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
						}
						else
						{
							func_13(Global_3826, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
						}
					}
					else if (Global_382D)
					{
						func_13(Global_3826, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
					}
					else
					{
						func_13(Global_3826, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_382D)
				{
					func_13(Global_3826, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_13(Global_3826, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_17C49.f_306B[iLocal_22 /*104*/].f_18 == 2)
				{
					if (Global_17C49.f_306B[iLocal_22 /*104*/].f_1F == 1)
					{
						iLocal_24 = 0;
						if (Global_382D)
						{
							func_13(Global_3826, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, "CELL_264", 0, 0, 0, 0);
						}
						else
						{
							func_13(Global_3826, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						MISC::SET_BIT(&Global_8D7, 17);
					}
					else if (iLocal_24 == 0)
					{
						func_13(Global_3826, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						MISC::CLEAR_BIT(&Global_8D7, 17);
					}
				}
				else if (Global_382D)
				{
					func_13(Global_3826, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, "CELL_216", 0, 0, 0, 0);
					MISC::SET_BIT(&Global_8D7, 17);
				}
				else
				{
					func_13(Global_3826, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, 0, 0, 0, 0, 0);
					MISC::SET_BIT(&Global_8D7, 17);
				}
				Global_17C49.f_3011[Global_3839 /*20*/].f_12 = 0;
				Global_17C49.f_3011[Global_3839 /*20*/].f_11 = 0;
			}
			else
			{
				iVar2 = 0;
				if (Global_17C49.f_3011[Global_3839 /*20*/].f_11 == 1 || Global_4170 == 1)
				{
					if (Global_4170)
					{
					}
					iVar2 = 1;
				}
				Global_17C49.f_3011[Global_3839 /*20*/].f_12 = 0;
				Global_17C49.f_3011[Global_3839 /*20*/].f_11 = 0;
				if (iVar2 == 1)
				{
					iVar2 = 0;
					Global_3839.f_1 = 3;
				}
			}
		}
		if (Global_256EFB == 0)
		{
			if (Global_10A95)
			{
				PAD::SET_INPUT_EXCLUSIVE(0, Global_381D);
				if (func_3(2, Global_381D, 0))
				{
					Global_3823 = 1;
					Global_256EFB = 1;
				}
			}
		}
	}
}

void func_29(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)//Position - 0x25A8
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
	func_9(sParam2);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		func_9(sParam3);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		func_9(sParam4);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
	{
		func_9(sParam5);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
	{
		func_9(sParam6);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_30(int iParam0)//Position - 0x2603
{
	int iVar0;
	
	iVar0 = 0;
	switch (Global_17C49.f_306B[iParam0 /*104*/].f_31)
	{
		case 1:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL01");
			break;
		
		case 2:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL02");
			break;
		
		case 3:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL03");
			break;
		
		case 4:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL04");
			break;
		
		case 5:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL05");
			break;
		
		case 6:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL06");
			break;
		
		case 7:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL07");
			break;
		
		case 8:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL08");
			break;
		
		case 9:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL09");
			break;
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17C49.f_306B[iParam0 /*104*/]));
	while (iVar0 < Global_17C49.f_306B[iParam0 /*104*/].f_31)
	{
		switch (Global_17C49.f_306B[iParam0 /*104*/].f_20)
		{
			case 4:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2554DA.f_60F[iVar0 /*4*/]));
				break;
			
			case 5:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_19B0AF[iVar0 /*4*/]));
				break;
			
			case 6:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_19B0D8[iVar0 /*4*/]));
				break;
			
			case 7:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_19B0ED[iVar0 /*4*/]));
				break;
			
			case 8:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_19B0FE[iVar0 /*4*/]));
				break;
			
			case 9:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_19B10B[iVar0 /*4*/]));
				break;
			
			case 10:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_19B118[iVar0 /*4*/]));
				break;
			
			case 11:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_19B125[iVar0 /*4*/]));
				break;
		}
		iVar0++;
	}
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_31()//Position - 0x27A4
{
	int iVar0;
	
	if (iLocal_35)
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(&Local_32);
	}
	iLocal_35 = 0;
	if (Global_17C49.f_306B[iLocal_22 /*104*/].f_18 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_17C49.f_306B[iLocal_22 /*104*/]), &(Local_33[iVar0 /*6*/])))
			{
				Local_32 = { Local_34[iVar0 /*16*/] };
				iLocal_35 = 1;
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&Local_32, 0);
				while (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&Local_32))
				{
					SYSTEM::WAIT(100);
				}
			}
			iVar0++;
		}
	}
}

void func_32()//Position - 0x2824
{
	if (iLocal_25)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			iLocal_25 = 0;
		}
	}
	if (iLocal_25 == 0)
	{
		if (func_3(2, Global_3821, 0) || PAD::IS_CONTROL_JUST_PRESSED(2, 181))
		{
			if (iLocal_20 > 0)
			{
				iLocal_20 = (iLocal_20 - 1);
			}
			func_35();
			iLocal_25 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_3(2, Global_3822, 0) || PAD::IS_CONTROL_JUST_PRESSED(2, 180))
		{
			iLocal_20++;
			if (iLocal_20 == iLocal_19)
			{
				iLocal_20 = 0;
			}
			func_33();
			iLocal_25 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_33()//Position - 0x28A9
{
	func_40(Global_3826, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_382E, 1);
	func_34();
}

void func_34()//Position - 0x28E6
{
	if (func_20())
	{
		if (Global_38DC == 0)
		{
			MOBILE::_CELL_CAM_MOVE_FINGER(2);
		}
		else
		{
			MOBILE::_CELL_CAM_MOVE_FINGER(1);
		}
	}
}

void func_35()//Position - 0x2909
{
	func_40(Global_3826, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_382E, 1);
	func_36();
}

void func_36()//Position - 0x2946
{
	if (func_20())
	{
		if (Global_38DC == 0)
		{
			MOBILE::_CELL_CAM_MOVE_FINGER(1);
		}
		else
		{
			MOBILE::_CELL_CAM_MOVE_FINGER(2);
		}
	}
}

void func_37()//Position - 0x2969
{
	if (Global_17C49.f_3011[Global_3839 /*20*/].f_11 == 0)
	{
		if (iLocal_21 < 0)
		{
			iLocal_21 = 0;
		}
		func_40(Global_3826, "DISPLAY_VIEW", 6f, SYSTEM::TO_FLOAT(iLocal_21), -1082130432, -1082130432, -1082130432);
		func_29(Global_3826, "SET_HEADER", "CELL_1", 0, 0, 0, 0);
		if (Global_382D)
		{
			if (iLocal_19 > 0)
			{
				func_13(Global_3826, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_214", 0, 0, 0, 0);
			}
			else
			{
				func_13(Global_3826, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_13(Global_3826, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else
		{
			if (iLocal_19 > 0)
			{
				func_13(Global_3826, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else
			{
				func_13(Global_3826, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_13(Global_3826, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_10A95)
		{
			func_13(Global_3826, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8D7, 17);
		}
		else
		{
			func_13(Global_3826, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8D7, 17);
		}
	}
	else
	{
		iLocal_21 = 0;
	}
}

void func_38()//Position - 0x2AA5
{
	int iVar0[35];
	int iVar1;
	int iVar2;
	int iVar3;
	
	iLocal_19 = 0;
	func_22();
	iVar1 = 0;
	while (iVar1 < 34)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
		{
			func_42();
		}
		iVar2 = 0;
		iVar3 = 34;
		Global_17C49.f_306B[iVar3 /*104*/].f_12 = -1;
		Global_17C49.f_306B[iVar3 /*104*/].f_12.f_1 = 0;
		Global_17C49.f_306B[iVar3 /*104*/].f_12.f_2 = 0;
		Global_17C49.f_306B[iVar3 /*104*/].f_12.f_3 = 0;
		Global_17C49.f_306B[iVar3 /*104*/].f_12.f_5 = 0;
		while (iVar2 < 35)
		{
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
			{
				func_42();
			}
			if (iVar0[iVar2] == 0)
			{
				if (Global_17C49.f_306B[iVar2 /*104*/].f_18 != 0)
				{
					if (Global_17C49.f_306B[iVar2 /*104*/].f_63[Global_3839] == 1)
					{
						if (func_39(Global_17C49.f_306B[iVar2 /*104*/].f_12, Global_17C49.f_306B[iVar3 /*104*/].f_12))
						{
							iVar3 = iVar2;
							if (Global_17C49.f_306B[iVar3 /*104*/].f_1C == 0)
							{
								iLocal_23 = 33;
							}
							else
							{
								iLocal_23 = 34;
							}
						}
					}
				}
			}
			iVar2++;
		}
		iLocal_18[iVar1] = iVar3;
		iVar0[iVar3] = 1;
		if (Global_17C49.f_306B[iVar3 /*104*/].f_18 != 0)
		{
			if (Global_17C49.f_306B[iVar3 /*104*/].f_63[Global_3839] == 1)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_3826, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(6);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_17C49.f_306B[iVar3 /*104*/].f_12.f_2);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_17C49.f_306B[iVar3 /*104*/].f_12.f_1);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_23);
				if (Global_17C49.f_306B[iVar3 /*104*/].f_11 == 145)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFNH");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17C49.f_306B[iVar3 /*104*/].f_32));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else
				{
					func_9(&(Global_17C49.f_744E[Global_17C49.f_306B[iVar3 /*104*/].f_11 /*29*/].f_3));
				}
				switch (Global_17C49.f_306B[iVar3 /*104*/].f_20)
				{
					case 0:
						func_9(&(Global_17C49.f_306B[iVar3 /*104*/]));
						break;
					
					case 1:
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_17C49.f_306B[iVar3 /*104*/]));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17C49.f_306B[iVar3 /*104*/].f_21));
						if (Global_17C49.f_306B[iVar3 /*104*/].f_42 == 1 && !MISC::ARE_STRINGS_EQUAL(&(Global_17C49.f_306B[iVar3 /*104*/].f_43), "NULL"))
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17C49.f_306B[iVar3 /*104*/].f_43));
						}
						if ((Global_17C49.f_306B[iVar3 /*104*/].f_42 == 2 && !MISC::ARE_STRINGS_EQUAL(&(Global_17C49.f_306B[iVar3 /*104*/].f_43), "NULL")) && !MISC::ARE_STRINGS_EQUAL(&(Global_17C49.f_306B[iVar3 /*104*/].f_53), "NULL"))
						{
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_17C49.f_306B[iVar3 /*104*/].f_43)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17C49.f_306B[iVar3 /*104*/].f_43));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17C49.f_306B[iVar3 /*104*/].f_43));
							}
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_17C49.f_306B[iVar3 /*104*/].f_53)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17C49.f_306B[iVar3 /*104*/].f_53));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17C49.f_306B[iVar3 /*104*/].f_53));
							}
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						break;
					
					case 2:
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_17C49.f_306B[iVar3 /*104*/]));
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_17C49.f_306B[iVar3 /*104*/].f_31);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						break;
					
					case 3:
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_17C49.f_306B[iVar3 /*104*/]));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17C49.f_306B[iVar3 /*104*/].f_21));
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_17C49.f_306B[iVar3 /*104*/].f_31);
						if (Global_17C49.f_306B[iVar3 /*104*/].f_42 == 1 && !MISC::ARE_STRINGS_EQUAL(&(Global_17C49.f_306B[iVar3 /*104*/].f_43), "NULL"))
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17C49.f_306B[iVar3 /*104*/].f_43));
						}
						if ((Global_17C49.f_306B[iVar3 /*104*/].f_42 == 2 && !MISC::ARE_STRINGS_EQUAL(&(Global_17C49.f_306B[iVar3 /*104*/].f_43), "NULL")) && !MISC::ARE_STRINGS_EQUAL(&(Global_17C49.f_306B[iVar3 /*104*/].f_53), "NULL"))
						{
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_17C49.f_306B[iVar3 /*104*/].f_43)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17C49.f_306B[iVar3 /*104*/].f_43));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17C49.f_306B[iVar3 /*104*/].f_43));
							}
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_17C49.f_306B[iVar3 /*104*/].f_53)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17C49.f_306B[iVar3 /*104*/].f_53));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17C49.f_306B[iVar3 /*104*/].f_53));
							}
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						break;
					
					case 4:
						func_30(iVar3);
						break;
					
					case 5:
						func_30(iVar3);
						break;
					
					case 6:
						func_30(iVar3);
						break;
					
					case 7:
						func_30(iVar3);
						break;
					
					case 8:
						func_30(iVar3);
						break;
					
					case 9:
						func_30(iVar3);
						break;
					
					case 10:
						func_30(iVar3);
						break;
					
					case 11:
						func_30(iVar3);
						break;
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
		if (Global_17C49.f_306B[iVar1 /*104*/].f_18 != 0)
		{
			if (Global_17C49.f_306B[iVar1 /*104*/].f_63[Global_3839] == 1)
			{
				iLocal_19++;
			}
		}
		iVar1++;
	}
}

int func_39(struct<6> Param0, struct<6> Param1)//Position - 0x2FEB
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

void func_40(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x30D6
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

void func_41()//Position - 0x3139
{
	StringCopy(&(Local_33[0 /*6*/]), "SXT_JUL_1ST", 24);
	StringCopy(&(Local_34[0 /*16*/]), "05_a_sext_stripperJuliet", 64);
	StringCopy(&(Local_33[1 /*6*/]), "SXT_JUL_2ND", 24);
	StringCopy(&(Local_34[1 /*16*/]), "05_b_sext_stripperJuliet", 64);
	StringCopy(&(Local_33[2 /*6*/]), "SXT_JUL_NEED", 24);
	StringCopy(&(Local_34[2 /*16*/]), "05_c_sext_stripperJuliet", 64);
	StringCopy(&(Local_33[3 /*6*/]), "SXT_NIK_1ST", 24);
	StringCopy(&(Local_34[3 /*16*/]), "06_a_sext_stripperNikki", 64);
	StringCopy(&(Local_33[4 /*6*/]), "SXT_NIK_2ND", 24);
	StringCopy(&(Local_34[4 /*16*/]), "06_b_sext_stripperNikki", 64);
	StringCopy(&(Local_33[5 /*6*/]), "SXT_NIK_NEED", 24);
	StringCopy(&(Local_34[5 /*16*/]), "06_c_sext_stripperNikki", 64);
	StringCopy(&(Local_33[6 /*6*/]), "SXT_SAP_1ST", 24);
	StringCopy(&(Local_34[6 /*16*/]), "08_a_sext_stripperSapphire", 64);
	StringCopy(&(Local_33[7 /*6*/]), "SXT_SAP_2ND", 24);
	StringCopy(&(Local_34[7 /*16*/]), "08_b_sext_stripperSapphire", 64);
	StringCopy(&(Local_33[8 /*6*/]), "SXT_SAP_NEED", 24);
	StringCopy(&(Local_34[8 /*16*/]), "08_c_sext_stripperSapphire", 64);
	StringCopy(&(Local_33[9 /*6*/]), "SXT_INF_1ST", 24);
	StringCopy(&(Local_34[9 /*16*/]), "04_a_sext_stripperInfernus", 64);
	StringCopy(&(Local_33[10 /*6*/]), "SXT_INF_2ND", 24);
	StringCopy(&(Local_34[10 /*16*/]), "04_b_sext_stripperInfernus", 64);
	StringCopy(&(Local_33[11 /*6*/]), "SXT_INF_NEED", 24);
	StringCopy(&(Local_34[11 /*16*/]), "04_c_sext_stripperInfernus", 64);
	StringCopy(&(Local_33[12 /*6*/]), "SXT_TXI_1ST", 24);
	StringCopy(&(Local_34[12 /*16*/]), "11_a_sext_taxiLiz", 64);
	StringCopy(&(Local_33[13 /*6*/]), "SXT_TXI_2ND", 24);
	StringCopy(&(Local_34[13 /*16*/]), "11_b_sext_taxiLiz", 64);
	StringCopy(&(Local_33[14 /*6*/]), "SXT_TXI_NEED", 24);
	StringCopy(&(Local_34[14 /*16*/]), "11_c_sext_taxiLiz", 64);
	StringCopy(&(Local_33[15 /*6*/]), "SXT_HCH_1ST", 24);
	StringCopy(&(Local_34[15 /*16*/]), "10_a_sext_hitcherGirl", 64);
	StringCopy(&(Local_33[16 /*6*/]), "SXT_HCH_2ND", 24);
	StringCopy(&(Local_34[16 /*16*/]), "10_b_sext_hitcherGirl", 64);
	StringCopy(&(Local_33[17 /*6*/]), "SXT_HCH_NEED", 24);
	StringCopy(&(Local_34[17 /*16*/]), "10_c_sext_hitcherGirl", 64);
	StringCopy(&(Local_33[18 /*6*/]), "SOL2_PASS", 24);
	StringCopy(&(Local_34[18 /*16*/]), "executiveproducer", 64);
}

void func_42()//Position - 0x32F9
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
	{
		func_43(0);
	}
	if (iLocal_35)
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(&Local_32);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_43(int iParam0)//Position - 0x3323
{
	if (Global_38D7)
	{
		func_45(0, 0);
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
	if (!func_44())
	{
		Global_3839.f_1 = 3;
	}
}

int func_44()//Position - 0x3393
{
	if (Global_3839.f_1 == 1 || Global_3839.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_45(bool bParam0, bool bParam1)//Position - 0x33BA
{
	if (bParam0)
	{
		if (func_46(0))
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

int func_46(int iParam0)//Position - 0x342E
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

