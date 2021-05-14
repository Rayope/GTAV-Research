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
	float fLocal_12 = 0f;
	float fLocal_13 = 0f;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	char* sLocal_17 = NULL;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
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
	var uLocal_55 = 0;
	var uLocal_56 = 8;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 2;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 8;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 8;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	float fLocal_86 = 0f;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	float fLocal_90 = 0f;
	float fLocal_91 = 0f;
#endregion

void __EntryFunction__()//Position - 0x0
{
	var uVar0;
	bool bVar1;
	
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
	fLocal_22 = 80f;
	fLocal_23 = 140f;
	fLocal_24 = 180f;
	iLocal_27 = 3;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_86 = ((0.05f + 0.275f) - 0.01f);
	fLocal_90 = 0.952f;
	fLocal_91 = 0.949f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(32))
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	while (true)
	{
		if (func_166(&uVar0, 5, 0))
		{
			func_24();
		}
		if (Global_1446E8.f_1 == 0)
		{
			bVar1 = true;
		}
		func_23();
		func_1();
		if (bVar1)
		{
			SCRIPT::TERMINATE_THIS_THREAD();
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0xD9
{
	int iVar0;
	
	Global_1446E8 = 0;
	Global_1446E8.f_2F3 = 0.725f;
	Global_1446E8.f_2F2 = func_16();
	Global_1446E8.f_1 = 0;
	Global_1446E8.f_2F4 = 0;
	Global_1446E8.f_2F5 = 0;
	Global_1446E8.f_2F6 = 0;
	Global_1446E8.f_2F7 = 0;
	Global_1446E8.f_2F8 = 0;
	Global_1446E8.f_2F9 = 0;
	Global_1446E8.f_2FA = 0;
	Global_1446E8.f_2FB = 0;
	Global_1446E8.f_2FC = 0;
	Global_1446E8.f_2FD = 0;
	Global_1446E8.f_2FE = 0;
	Global_1446E8.f_2FF = 0;
	Global_1446E8.f_300 = 0;
	Global_252C0A = 0;
	Global_2528B3 = 0;
	Global_252BF3 = 1;
	Global_252FC0 = 0;
	if (func_15(3))
	{
		iVar0 = 0;
		while (iVar0 <= 7)
		{
			if (func_14(3, iVar0) && func_13(3, iVar0))
			{
				func_12(iVar0);
				func_11(3, iVar0);
			}
			iVar0++;
		}
	}
	if (func_15(6))
	{
		iVar0 = 0;
		while (iVar0 <= 7)
		{
			if (func_14(6, iVar0) && func_13(6, iVar0))
			{
				func_10(iVar0);
				func_11(6, iVar0);
			}
			iVar0++;
		}
	}
	if (func_15(7))
	{
		iVar0 = 0;
		while (iVar0 <= 7)
		{
			if (func_14(7, iVar0) && func_13(7, iVar0))
			{
				func_9(iVar0);
				func_11(7, iVar0);
			}
			iVar0++;
		}
	}
	if (func_15(4))
	{
		iVar0 = 0;
		while (iVar0 <= 7)
		{
			if (func_14(4, iVar0) && func_13(4, iVar0))
			{
				func_8(iVar0);
				func_11(4, iVar0);
			}
			iVar0++;
		}
	}
	if (func_15(5))
	{
		iVar0 = 0;
		while (iVar0 <= 7)
		{
			if (func_14(5, iVar0) && func_13(5, iVar0))
			{
				func_7(iVar0);
				func_11(5, iVar0);
			}
			iVar0++;
		}
	}
	if (func_15(1))
	{
		iVar0 = 0;
		while (iVar0 <= 7)
		{
			if (func_14(1, iVar0) && func_13(1, iVar0))
			{
				func_6(iVar0);
				func_11(1, iVar0);
			}
			iVar0++;
		}
	}
	if (func_15(0))
	{
		iVar0 = 0;
		while (iVar0 <= 7)
		{
			if (func_14(0, iVar0) && func_13(0, iVar0))
			{
				func_5(iVar0);
				func_11(0, iVar0);
			}
			iVar0++;
		}
	}
	if (func_15(2))
	{
		iVar0 = 0;
		while (iVar0 <= 7)
		{
			if (func_14(2, iVar0) && func_13(2, iVar0) == 0)
			{
				func_3(iVar0);
				func_11(2, iVar0);
			}
			iVar0++;
		}
	}
	if (func_15(8))
	{
		iVar0 = 0;
		while (iVar0 <= 7)
		{
			if (func_14(8, iVar0) && func_13(8, iVar0) == 0)
			{
				func_2(iVar0);
				func_11(8, iVar0);
			}
			iVar0++;
		}
	}
}

void func_2(int iParam0)//Position - 0x3AD
{
	Global_1446E8.f_D66[iParam0] = 0f;
	StringCopy(&(Global_1446E8.f_D66.f_9[iParam0 /*16*/]), "", 64);
	Global_1446E8.f_D66.f_8A[iParam0] = 0;
	Global_1446E8.f_D66[iParam0] = 0f;
	Global_1446E8.f_D66.f_93[iParam0] = 0;
	Global_1446E8.f_D66.f_9C[iParam0] = 0;
	Global_1446E8.f_D66.f_A5[iParam0] = 0;
	Global_1446E8.f_D66.f_AE[iParam0] = 2;
}

void func_3(int iParam0)//Position - 0x424
{
	Global_1446E8.f_538[iParam0] = 0;
	Global_1446E8.f_538.f_9[iParam0] = 0;
	Global_1446E8.f_538.f_12[iParam0] = 0;
	Global_1446E8.f_538.f_1B[iParam0] = 0;
	Global_1446E8.f_538.f_24[iParam0] = 0;
	Global_1446E8.f_538.f_2D[iParam0] = 0;
	Global_1446E8.f_538.f_36[iParam0] = 0;
	Global_1446E8.f_538.f_3F[iParam0] = 0;
	Global_1446E8.f_538.f_48[iParam0] = 0;
	StringCopy(&(Global_1446E8.f_538.f_51[iParam0 /*16*/]), "", 64);
	Global_1446E8.f_538.f_D2[iParam0] = -1;
	Global_1446E8.f_538.f_DB[iParam0] = -1;
	Global_1446E8.f_538.f_E4[iParam0] = 18;
	Global_1446E8.f_538.f_ED[iParam0] = 6;
	Global_1446E8.f_538.f_F6[iParam0] = -1;
	Global_1446E8.f_538.f_FF[iParam0] = 2;
	Global_1446E8.f_538.f_108[iParam0 /*3*/] = { 0.5f, 0.5f, 0f };
	Global_1446E8.f_538.f_121[iParam0] = 0;
	Global_1446E8.f_538.f_12A[iParam0] = 1;
	Global_1446E8.f_538.f_133[iParam0] = 1;
	Global_1446E8.f_538.f_13C[iParam0] = 1;
	Global_1446E8.f_538.f_145[iParam0] = 1;
	Global_1446E8.f_538.f_14E[iParam0] = 1;
	Global_1446E8.f_538.f_157[iParam0] = 1;
	Global_1446E8.f_538.f_160[iParam0] = 1;
	Global_1446E8.f_538.f_169[iParam0] = 1;
	Global_1446E8.f_538.f_172[iParam0] = 1;
	Global_1446E8.f_538.f_17B[iParam0] = 1;
	Global_1446E8.f_538.f_184[iParam0] = 1;
	Global_1446E8.f_538.f_18D[iParam0] = 1;
	Global_1446E8.f_538.f_196[iParam0] = 1;
	Global_1446E8.f_538.f_19F[iParam0] = 1;
	Global_1446E8.f_538.f_1A8[iParam0] = 1;
	Global_1446E8.f_538.f_1B1[iParam0] = 1;
	func_4(&(Global_1446E8.f_538.f_1C3[iParam0 /*2*/]));
	Global_1446E8.f_538.f_1D4[iParam0] = -1;
	Global_1446E8.f_538.f_1EF[iParam0] = 0;
}

void func_4(var uParam0)//Position - 0x658
{
	uParam0->f_1 = 0;
}

void func_5(int iParam0)//Position - 0x665
{
	Global_1446E8.f_301[iParam0] = 0;
	Global_1446E8.f_301.f_9[iParam0] = 0;
	StringCopy(&(Global_1446E8.f_301.f_12[iParam0 /*16*/]), "", 64);
	Global_1446E8.f_301.f_93[iParam0] = -1;
	Global_1446E8.f_301.f_9C[iParam0] = 1;
	Global_1446E8.f_301.f_A5[iParam0] = -1;
	Global_1446E8.f_301.f_AE[iParam0] = 2;
	Global_1446E8.f_301.f_B7[iParam0 /*3*/] = { 0.5f, 0.5f, 0f };
	Global_1446E8.f_301.f_D0[iParam0] = 0;
	Global_1446E8.f_301.f_D9[iParam0] = 0;
	func_4(&(Global_1446E8.f_301.f_E2[iParam0 /*2*/]));
	Global_1446E8.f_301.f_F3[iParam0] = -1;
	Global_1446E8.f_301.f_10E[iParam0] = 0;
	Global_1446E8.f_301.f_117[iParam0] = 0;
	Global_1446E8.f_301.f_120[iParam0] = 0;
}

void func_6(int iParam0)//Position - 0x752
{
	Global_1446E8.f_42A[iParam0] = 0;
	Global_1446E8.f_42A.f_9[iParam0] = 0;
	StringCopy(&(Global_1446E8.f_42A.f_12[iParam0 /*16*/]), "", 64);
	Global_1446E8.f_42A.f_93[iParam0] = -1;
	Global_1446E8.f_42A.f_9C[iParam0] = 1;
	Global_1446E8.f_42A.f_A5[iParam0] = -1;
	Global_1446E8.f_42A.f_AE[iParam0] = 2;
	Global_1446E8.f_42A.f_B7[iParam0 /*3*/] = { 0.5f, 0.5f, 0f };
	Global_1446E8.f_42A.f_D0[iParam0] = 0;
	Global_256D5E[iParam0] = 0;
	Global_256D67[iParam0] = 0;
	Global_256D70[iParam0] = 0;
	Global_256D79[iParam0] = 0;
	Global_256D82[iParam0] = 0;
	Global_256D8B[iParam0] = 0;
	Global_256D94[iParam0] = 0;
	Global_256D9D[iParam0] = 0;
	Global_256DA6[iParam0] = 0;
	Global_256DAF[iParam0] = 0;
	Global_256DB8[iParam0] = 0;
	Global_256DC1[iParam0] = 0;
	Global_256DCA[iParam0] = 0;
	Global_256DD3[iParam0] = 0;
	Global_256DDC[iParam0] = 0;
	Global_256DE5[iParam0] = 0;
	func_4(&(Global_1446E8.f_42A.f_E2[iParam0 /*2*/]));
	Global_1446E8.f_42A.f_F3[iParam0] = -1;
}

void func_7(int iParam0)//Position - 0x894
{
	Global_1446E8.f_9A4[iParam0] = 0;
	StringCopy(&(Global_1446E8.f_9A4.f_9[iParam0 /*16*/]), "", 64);
	Global_1446E8.f_9A4.f_8A[iParam0] = -1;
	Global_1446E8.f_9A4.f_93[iParam0] = -1;
	Global_1446E8.f_9A4.f_9C[iParam0] = 1;
	Global_1446E8.f_9A4.f_A5[iParam0] = -1;
	Global_1446E8.f_9A4.f_AE[iParam0] = 2;
	Global_1446E8.f_9A4.f_B7[iParam0] = 0;
	func_4(&(Global_1446E8.f_9A4.f_C0[iParam0 /*2*/]));
	Global_1446E8.f_9A4.f_D1[iParam0] = -1;
}

void func_8(int iParam0)//Position - 0x92C
{
	Global_1446E8.f_8A6[iParam0] = -1;
	StringCopy(&(Global_1446E8.f_8A6.f_9[iParam0 /*16*/]), "", 64);
	Global_1446E8.f_8A6.f_8A[iParam0] = -1;
	Global_1446E8.f_8A6.f_93[iParam0] = -1;
	Global_1446E8.f_8A6.f_9C[iParam0] = 1;
	Global_1446E8.f_8A6.f_A5[iParam0] = -1;
	Global_1446E8.f_8A6.f_AE[iParam0] = 2;
	Global_1446E8.f_8A6.f_B7[iParam0] = 0;
	func_4(&(Global_1446E8.f_8A6.f_C0[iParam0 /*2*/]));
	Global_1446E8.f_8A6.f_D1[iParam0] = -1;
}

void func_9(int iParam0)//Position - 0x9C4
{
	Global_1446E8.f_C3C[iParam0] = 0;
	StringCopy(&(Global_1446E8.f_C3C.f_9[iParam0 /*16*/]), "", 64);
	Global_1446E8.f_C3C.f_8A[iParam0] = -1;
	Global_1446E8.f_C3C.f_93[iParam0] = -1;
	Global_1446E8.f_C3C.f_9C[iParam0] = 0;
	Global_1446E8.f_C3C.f_A5[iParam0] = 1;
	Global_1446E8.f_C3C.f_AE[iParam0] = 0;
	Global_1446E8.f_C3C.f_B7[iParam0] = -1;
	Global_1446E8.f_C3C.f_C9[iParam0] = 2;
	Global_1446E8.f_C3C.f_D2[iParam0] = 0;
	func_4(&(Global_1446E8.f_C3C.f_E4[iParam0 /*2*/]));
	Global_1446E8.f_C3C.f_F5[iParam0] = -1;
}

void func_10(int iParam0)//Position - 0xA78
{
	Global_1446E8.f_A90[iParam0] = 0;
	StringCopy(&(Global_1446E8.f_A90.f_9[iParam0 /*16*/]), "", 64);
	Global_1446E8.f_A90.f_8A[iParam0] = -1;
	Global_1446E8.f_A90.f_93[iParam0] = 1;
	Global_1446E8.f_A90.f_9C[iParam0] = -1;
	Global_1446E8.f_A90.f_D2[iParam0] = 2;
	Global_1446E8.f_A90.f_DB[iParam0] = 0;
	StringCopy(&(Global_1446E8.f_A90.f_E4[iParam0 /*16*/]), "", 64);
	Global_1446E8.f_A90.f_165[iParam0] = 0;
	Global_1446E8.f_A90.f_16E[iParam0] = -1f;
	func_4(&(Global_1446E8.f_A90.f_177[iParam0 /*2*/]));
	Global_1446E8.f_A90.f_188[iParam0] = -1;
	Global_1446E8.f_A90.f_1A3[iParam0] = 0;
}

void func_11(int iParam0, int iParam1)//Position - 0xB42
{
	MISC::CLEAR_BIT(&(Global_1446E8.f_E31[iParam0]), iParam1);
}

void func_12(int iParam0)//Position - 0xB5B
{
	Global_1446E8.f_730[iParam0] = 0;
	StringCopy(&(Global_1446E8.f_730.f_9[iParam0 /*16*/]), "", 64);
	Global_1446E8.f_730.f_8A[iParam0] = -1;
	Global_1446E8.f_730.f_93[iParam0] = 1;
	Global_1446E8.f_730.f_9C[iParam0] = -1;
	Global_1446E8.f_730.f_A5[iParam0] = 2;
	Global_1446E8.f_730.f_AE[iParam0] = 0;
	func_4(&(Global_1446E8.f_730.f_B7[iParam0 /*2*/]));
	Global_1446E8.f_730.f_C8[iParam0] = -1;
}

bool func_13(int iParam0, int iParam1)//Position - 0xBE5
{
	return MISC::IS_BIT_SET(Global_1446E8.f_E1D[iParam0], iParam1);
}

bool func_14(int iParam0, int iParam1)//Position - 0xBFE
{
	return MISC::IS_BIT_SET(Global_1446E8.f_E31[iParam0], iParam1);
}

int func_15(int iParam0)//Position - 0xC17
{
	if (Global_1446E8.f_E1D[iParam0] > 0)
	{
		return 1;
	}
	return 0;
}

float func_16()//Position - 0xC33
{
	float fVar0;
	
	fVar0 = (0.925f - 0.002f);
	fVar0 = (fVar0 + (-0.036f * IntToFloat(Global_1446E8.f_2F4)));
	if (Global_1446E8.f_2F5 == 1)
	{
		fVar0 = (fVar0 + -0.15f);
	}
	else if (Global_1446E8.f_2F6 == 1)
	{
		fVar0 = (fVar0 + (-0.048f - 0.753f));
	}
	if (Global_1446E8.f_2F8 == 1)
	{
		fVar0 = (fVar0 + -0.919f);
	}
	if (Global_1446E8.f_2F9 == 1)
	{
		fVar0 = (fVar0 + -0.184f);
	}
	if (Global_1446E8.f_2FA == 1)
	{
		fVar0 = (fVar0 + -0.522f);
	}
	if (Global_1446E8.f_2F7 == 1)
	{
		switch (func_17())
		{
			case 0:
				fVar0 = (fVar0 + -0.405f);
				break;
			
			case 2:
				fVar0 = (fVar0 + -0.405f);
				break;
			
			case 1:
				fVar0 = (fVar0 + -0.414f);
				break;
			
			default:
				fVar0 = (fVar0 + -0.405f);
				break;
			}
	}
	return fVar0;
}

int func_17()//Position - 0xD29
{
	func_18();
	return Global_17C49.f_6C1.f_21B.f_C8D;
}

void func_18()//Position - 0xD42
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_22(Global_17C49.f_6C1.f_21B.f_C8D) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_21(PLAYER::PLAYER_PED_ID());
			if (func_20(iVar0) && (!func_19(14) || Global_17832))
			{
				if (Global_17C49.f_6C1.f_21B.f_C8D != iVar0 && func_20(Global_17C49.f_6C1.f_21B.f_C8D))
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

bool func_19(int iParam0)//Position - 0xE3F
{
	return Global_8861 == iParam0;
}

bool func_20(int iParam0)//Position - 0xE4D
{
	return iParam0 < 3;
}

int func_21(var uParam0)//Position - 0xE59
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_22(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_22(int iParam0)//Position - 0xE96
{
	if (func_20(iParam0))
	{
		return Global_17C49.f_744E[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_23()//Position - 0xEC0
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		Global_1446E8.f_E1D[iVar0] = 0;
		iVar0++;
	}
}

void func_24()//Position - 0xEE7
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3[10];
	int iVar4;
	int iVar5;
	
	if (HUD::BUSYSPINNER_IS_DISPLAYING())
	{
		if (Global_1446E8.f_2F4 == 0)
		{
			func_165(1);
		}
	}
	func_161();
	if (func_156())
	{
		if (func_155())
		{
			Global_1441E9.f_438 = 1;
		}
		iVar0 = 0;
		while (iVar0 <= 7)
		{
			iVar4 = 0;
			if (func_13(7, iVar0))
			{
				Global_1441E9.f_439[iVar4 /*9*/][iVar0] = Global_1446E8.f_A90.f_D2[iVar0];
			}
			iVar4 = 1;
			if (func_13(3, iVar0))
			{
				Global_1441E9.f_439[iVar4 /*9*/][iVar0] = Global_1446E8.f_730.f_A5[iVar0];
			}
			iVar4 = 2;
			if (func_13(4, iVar0))
			{
				Global_1441E9.f_439[iVar4 /*9*/][iVar0] = Global_1446E8.f_8A6.f_AE[iVar0];
			}
			iVar4 = 3;
			if (func_13(5, iVar0))
			{
				Global_1441E9.f_439[iVar4 /*9*/][iVar0] = Global_1446E8.f_9A4.f_AE[iVar0];
			}
			iVar4 = 4;
			if (func_13(1, iVar0))
			{
				Global_1441E9.f_439[iVar4 /*9*/][iVar0] = Global_1446E8.f_42A.f_AE[iVar0];
			}
			iVar4 = 5;
			if (func_13(0, iVar0))
			{
				Global_1441E9.f_439[iVar4 /*9*/][iVar0] = Global_1446E8.f_301.f_AE[iVar0];
			}
			iVar4 = 6;
			if (func_13(6, iVar0))
			{
				Global_1441E9.f_439[iVar4 /*9*/][iVar0] = Global_1446E8.f_A90.f_D2[iVar0];
			}
			iVar4 = 7;
			if (func_13(2, iVar0))
			{
				Global_1441E9.f_439[iVar4 /*9*/][iVar0] = Global_1446E8.f_538.f_FF[iVar0];
			}
			iVar4 = 8;
			if (func_13(8, iVar0))
			{
				Global_1441E9.f_439[iVar4 /*9*/][iVar0] = Global_1446E8.f_D66.f_AE[iVar0];
			}
			iVar0++;
		}
		iVar4 = 0;
		if (Global_1441E9.f_438 == 1)
		{
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				iVar4 = 0;
				if (func_13(7, iVar0))
				{
					Global_1441E9.f_439[iVar4 /*9*/][iVar0] = Global_1446E8.f_C3C.f_C9[iVar0];
					if (Global_1441E9.f_439[iVar4 /*9*/][iVar0] != 1)
					{
						if ((Global_1441E9.f_48B[iVar4 /*9*/][iVar0] != Global_1446E8.f_C3C.f_C9[iVar0] && ((Global_1441E9.f_48B[iVar4 /*9*/][iVar0] == 0 && Global_1446E8.f_C3C.f_C9[iVar0] == 2) || Global_1446E8.f_C3C.f_C9[iVar0] != 2)) && ((Global_1441E9.f_48B[iVar4 /*9*/][iVar0] == 0 && Global_1446E8.f_C3C.f_C9[iVar0] == 13) || Global_1446E8.f_C3C.f_C9[iVar0] != 13))
						{
							Global_1441E9.f_48B[iVar4 /*9*/][iVar0] = Global_1446E8.f_C3C.f_C9[iVar0];
						}
					}
				}
				iVar4 = 1;
				if (func_13(3, iVar0))
				{
					Global_1441E9.f_439[iVar4 /*9*/][iVar0] = Global_1446E8.f_730.f_A5[iVar0];
					if (Global_1441E9.f_439[iVar4 /*9*/][iVar0] != 1)
					{
						if ((Global_1441E9.f_48B[iVar4 /*9*/][iVar0] != Global_1446E8.f_730.f_A5[iVar0] && ((Global_1441E9.f_48B[iVar4 /*9*/][iVar0] == 0 && Global_1446E8.f_730.f_A5[iVar0] == 2) || Global_1446E8.f_730.f_A5[iVar0] != 2)) && ((Global_1441E9.f_48B[iVar4 /*9*/][iVar0] == 0 && Global_1446E8.f_730.f_A5[iVar0] == 13) || Global_1446E8.f_730.f_A5[iVar0] != 13))
						{
							Global_1441E9.f_48B[iVar4 /*9*/][iVar0] = Global_1446E8.f_730.f_A5[iVar0];
						}
					}
				}
				iVar4 = 2;
				if (func_13(4, iVar0))
				{
					Global_1441E9.f_439[iVar4 /*9*/][iVar0] = Global_1446E8.f_8A6.f_AE[iVar0];
					if (Global_1441E9.f_439[iVar4 /*9*/][iVar0] != 1)
					{
						if ((Global_1441E9.f_48B[iVar4 /*9*/][iVar0] != Global_1446E8.f_8A6.f_AE[iVar0] && ((Global_1441E9.f_48B[iVar4 /*9*/][iVar0] == 0 && Global_1446E8.f_8A6.f_AE[iVar0] == 2) || Global_1446E8.f_8A6.f_AE[iVar0] != 2)) && ((Global_1441E9.f_48B[iVar4 /*9*/][iVar0] == 0 && Global_1446E8.f_8A6.f_AE[iVar0] == 13) || Global_1446E8.f_8A6.f_AE[iVar0] != 13))
						{
							Global_1441E9.f_48B[iVar4 /*9*/][iVar0] = Global_1446E8.f_8A6.f_AE[iVar0];
						}
					}
				}
				iVar4 = 3;
				if (func_13(5, iVar0))
				{
					Global_1441E9.f_439[iVar4 /*9*/][iVar0] = Global_1446E8.f_9A4.f_AE[iVar0];
					if (Global_1441E9.f_439[iVar4 /*9*/][iVar0] != 1)
					{
						if ((Global_1441E9.f_48B[iVar4 /*9*/][iVar0] != Global_1446E8.f_9A4.f_AE[iVar0] && ((Global_1441E9.f_48B[iVar4 /*9*/][iVar0] == 0 && Global_1446E8.f_9A4.f_AE[iVar0] == 2) || Global_1446E8.f_9A4.f_AE[iVar0] != 2)) && ((Global_1441E9.f_48B[iVar4 /*9*/][iVar0] == 0 && Global_1446E8.f_9A4.f_AE[iVar0] == 13) || Global_1446E8.f_9A4.f_AE[iVar0] != 13))
						{
							Global_1441E9.f_48B[iVar4 /*9*/][iVar0] = Global_1446E8.f_9A4.f_AE[iVar0];
						}
					}
				}
				iVar4 = 4;
				if (func_13(1, iVar0))
				{
					Global_1441E9.f_439[iVar4 /*9*/][iVar0] = Global_1446E8.f_42A.f_AE[iVar0];
					if (Global_1441E9.f_439[iVar4 /*9*/][iVar0] != 1)
					{
						if ((Global_1441E9.f_48B[iVar4 /*9*/][iVar0] != Global_1446E8.f_42A.f_AE[iVar0] && ((Global_1441E9.f_48B[iVar4 /*9*/][iVar0] == 0 && Global_1446E8.f_42A.f_AE[iVar0] == 2) || Global_1446E8.f_42A.f_AE[iVar0] != 2)) && ((Global_1441E9.f_48B[iVar4 /*9*/][iVar0] == 0 && Global_1446E8.f_42A.f_AE[iVar0] == 13) || Global_1446E8.f_42A.f_AE[iVar0] != 13))
						{
							Global_1441E9.f_48B[iVar4 /*9*/][iVar0] = Global_1446E8.f_42A.f_AE[iVar0];
						}
					}
				}
				iVar4 = 5;
				if (func_13(0, iVar0))
				{
					Global_1441E9.f_439[iVar4 /*9*/][iVar0] = Global_1446E8.f_301.f_AE[iVar0];
					if (Global_1441E9.f_439[iVar4 /*9*/][iVar0] != 1)
					{
						if ((Global_1441E9.f_48B[iVar4 /*9*/][iVar0] != Global_1446E8.f_301.f_AE[iVar0] && ((Global_1441E9.f_48B[iVar4 /*9*/][iVar0] == 0 && Global_1446E8.f_301.f_AE[iVar0] == 2) || Global_1446E8.f_301.f_AE[iVar0] != 2)) && ((Global_1441E9.f_48B[iVar4 /*9*/][iVar0] == 0 && Global_1446E8.f_301.f_AE[iVar0] == 13) || Global_1446E8.f_301.f_AE[iVar0] != 13))
						{
							Global_1441E9.f_48B[iVar4 /*9*/][iVar0] = Global_1446E8.f_301.f_AE[iVar0];
						}
					}
				}
				iVar4 = 6;
				if (func_13(6, iVar0))
				{
					Global_1441E9.f_439[iVar4 /*9*/][iVar0] = Global_1446E8.f_A90.f_D2[iVar0];
					if (Global_1441E9.f_439[iVar4 /*9*/][iVar0] != 1)
					{
						if ((Global_1441E9.f_48B[iVar4 /*9*/][iVar0] != Global_1446E8.f_A90.f_D2[iVar0] && ((Global_1441E9.f_48B[iVar4 /*9*/][iVar0] == 0 && Global_1446E8.f_A90.f_D2[iVar0] == 2) || Global_1446E8.f_A90.f_D2[iVar0] != 2)) && ((Global_1441E9.f_48B[iVar4 /*9*/][iVar0] == 0 && Global_1446E8.f_A90.f_D2[iVar0] == 13) || Global_1446E8.f_A90.f_D2[iVar0] != 13))
						{
							Global_1441E9.f_48B[iVar4 /*9*/][iVar0] = Global_1446E8.f_A90.f_D2[iVar0];
						}
					}
				}
				iVar4 = 7;
				if (func_13(2, iVar0))
				{
					Global_1441E9.f_439[iVar4 /*9*/][iVar0] = Global_1446E8.f_538.f_FF[iVar0];
					if (Global_1441E9.f_439[iVar4 /*9*/][iVar0] != 1)
					{
						if ((Global_1441E9.f_48B[iVar4 /*9*/][iVar0] != Global_1446E8.f_538.f_FF[iVar0] && ((Global_1441E9.f_48B[iVar4 /*9*/][iVar0] == 0 && Global_1446E8.f_538.f_FF[iVar0] == 2) || Global_1446E8.f_538.f_FF[iVar0] != 2)) && ((Global_1441E9.f_48B[iVar4 /*9*/][iVar0] == 0 && Global_1446E8.f_538.f_FF[iVar0] == 13) || Global_1446E8.f_538.f_FF[iVar0] != 13))
						{
							Global_1441E9.f_48B[iVar4 /*9*/][iVar0] = Global_1446E8.f_538.f_FF[iVar0];
						}
					}
				}
				iVar4 = 8;
				if (func_13(8, iVar0))
				{
					Global_1441E9.f_439[iVar4 /*9*/][iVar0] = Global_1446E8.f_D66.f_AE[iVar0];
					if (Global_1441E9.f_439[iVar4 /*9*/][iVar0] != 1)
					{
						if ((Global_1441E9.f_48B[iVar4 /*9*/][iVar0] != Global_1446E8.f_D66.f_AE[iVar0] && ((Global_1441E9.f_48B[iVar4 /*9*/][iVar0] == 0 && Global_1446E8.f_D66.f_AE[iVar0] == 2) || Global_1446E8.f_D66.f_AE[iVar0] != 2)) && ((Global_1441E9.f_48B[iVar4 /*9*/][iVar0] == 0 && Global_1446E8.f_D66.f_AE[iVar0] == 13) || Global_1446E8.f_D66.f_AE[iVar0] != 13))
						{
							Global_1441E9.f_48B[iVar4 /*9*/][iVar0] = Global_1446E8.f_D66.f_AE[iVar0];
						}
					}
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				iVar1 = 0;
				while (iVar1 <= 8)
				{
					if (Global_1441E9.f_439[iVar1 /*9*/][iVar0] != Global_1441E9.f_48B[iVar1 /*9*/][iVar0])
					{
						Global_1441E9.f_48B[iVar1 /*9*/][iVar0] = 0;
					}
					iVar1++;
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				iVar1 = 0;
				while (iVar1 <= 8)
				{
					if (Global_1441E9.f_439[iVar1 /*9*/][iVar0] == 3)
					{
						iVar3[0] = 1;
					}
					if (Global_1441E9.f_439[iVar1 /*9*/][iVar0] == 4)
					{
						iVar3[1] = 1;
					}
					if (Global_1441E9.f_439[iVar1 /*9*/][iVar0] == 5)
					{
						iVar3[2] = 1;
					}
					if (Global_1441E9.f_439[iVar1 /*9*/][iVar0] == 6)
					{
						iVar3[3] = 1;
					}
					if (Global_1441E9.f_439[iVar1 /*9*/][iVar0] == 7)
					{
						iVar3[4] = 1;
					}
					if (Global_1441E9.f_439[iVar1 /*9*/][iVar0] == 8)
					{
						iVar3[5] = 1;
					}
					if (Global_1441E9.f_439[iVar1 /*9*/][iVar0] == 9)
					{
						iVar3[6] = 1;
					}
					if (Global_1441E9.f_439[iVar1 /*9*/][iVar0] == 10)
					{
						iVar3[7] = 1;
					}
					if (Global_1441E9.f_439[iVar1 /*9*/][iVar0] == 11)
					{
						iVar3[8] = 1;
					}
					iVar1++;
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				iVar1 = 0;
				while (iVar1 <= 8)
				{
					if (Global_1441E9.f_439[iVar1 /*9*/][iVar0] == 2)
					{
						iVar2 = 0;
						while (iVar2 <= 9)
						{
							if (iVar3[iVar2] == 0)
							{
								Global_1441E9.f_439[iVar1 /*9*/][iVar0] = iVar2 + 3;
								iVar3[iVar2] = 1;
								Global_1441E9.f_48B[iVar1 /*9*/][iVar0] = Global_1441E9.f_439[iVar1 /*9*/][iVar0];
								iVar2 = 10;
							}
							iVar2++;
						}
					}
					iVar1++;
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				iVar1 = 0;
				while (iVar1 <= 8)
				{
					if (Global_1441E9.f_439[iVar1 /*9*/][iVar0] == 13)
					{
						iVar2 = 0;
						while (iVar2 <= 9)
						{
							if (iVar3[iVar2] == 0)
							{
								Global_1441E9.f_439[iVar1 /*9*/][iVar0] = iVar2 + 3;
								iVar3[iVar2] = 1;
								Global_1441E9.f_48B[iVar1 /*9*/][iVar0] = Global_1441E9.f_439[iVar1 /*9*/][iVar0];
								iVar2 = 10;
							}
							iVar2++;
						}
					}
					iVar1++;
				}
				iVar0++;
			}
			Global_1441E9.f_438 = 0;
		}
		if (Global_1446E8.f_2F8)
		{
			iVar5 = 84;
		}
		else
		{
			iVar5 = 66;
		}
		if (func_156())
		{
			iVar1 = 0;
			while (iVar1 <= 8)
			{
				if (func_15(7))
				{
					iVar0 = 0;
					while (iVar0 <= 7)
					{
						if (Global_1441E9.f_48B[0 /*9*/][iVar0] == iVar1 + 3 || Global_1441E9.f_439[0 /*9*/][iVar0] == 1)
						{
							if (func_151(Global_1441E9.f_439[0 /*9*/][iVar0]))
							{
								func_147(1);
								if (Global_1446E8.f_2F6 == 0)
								{
									GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, iVar5);
									GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(uLocal_88, uLocal_89, fLocal_90, fLocal_91);
								}
								func_130(iVar0, Global_1446E8.f_C3C[iVar0], &(Global_1446E8.f_C3C.f_9[iVar0 /*16*/]), Global_1446E8.f_C3C.f_8A[iVar0], Global_1446E8.f_C3C.f_9C[iVar0], Global_1446E8.f_C3C.f_AE[iVar0], Global_1446E8.f_C3C.f_A5[iVar0], Global_1446E8.f_C3C.f_93[iVar0], Global_1446E8.f_C3C.f_B7[iVar0], Global_1446E8.f_C3C.f_D2[iVar0], Global_1446E8.f_C3C.f_FE[iVar0], Global_1446E8.f_C3C.f_107[iVar0], Global_1446E8.f_C3C.f_121[iVar0], Global_1446E8.f_C3C.f_C0[iVar0], Global_1446E8.f_C3C.f_DB[iVar0]);
								if (Global_1446E8.f_2F6 == 0)
								{
									GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								}
								func_147(0);
							}
						}
						iVar0++;
					}
				}
				if (func_15(3))
				{
					iVar0 = 0;
					while (iVar0 <= 7)
					{
						if (Global_1441E9.f_48B[1 /*9*/][iVar0] == iVar1 + 3 || Global_1441E9.f_439[1 /*9*/][iVar0] == 1)
						{
							if (func_151(Global_1441E9.f_439[1 /*9*/][iVar0]))
							{
								func_147(1);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, iVar5);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(uLocal_88, uLocal_89, fLocal_90, fLocal_91);
								func_129(iVar0, Global_1446E8.f_730[iVar0], &(Global_1446E8.f_730.f_9[iVar0 /*16*/]), Global_1446E8.f_730.f_93[iVar0], Global_1446E8.f_730.f_8A[iVar0], Global_1446E8.f_730.f_9C[iVar0], Global_1446E8.f_730.f_AE[iVar0], &(Global_1446E8.f_730.f_D1[iVar0 /*16*/]), Global_1446E8.f_730.f_152[iVar0], Global_1446E8.f_730.f_16D[iVar0], Global_1446E8.f_730.f_15B[iVar0], Global_1446E8.f_730.f_164[iVar0]);
								GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								func_147(0);
							}
						}
						iVar0++;
					}
				}
				if (func_15(4))
				{
					iVar0 = 0;
					while (iVar0 <= 7)
					{
						if (Global_1441E9.f_48B[2 /*9*/][iVar0] == iVar1 + 3 || Global_1441E9.f_439[2 /*9*/][iVar0] == 1)
						{
							if (func_151(Global_1441E9.f_439[2 /*9*/][iVar0]))
							{
								func_147(1);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, iVar5);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(uLocal_88, uLocal_89, fLocal_90, fLocal_91);
								func_128(iVar0, Global_1446E8.f_8A6[iVar0], Global_1446E8.f_8A6.f_8A[iVar0], &(Global_1446E8.f_8A6.f_9[iVar0 /*16*/]), Global_1446E8.f_8A6.f_9C[iVar0], Global_1446E8.f_8A6.f_93[iVar0], Global_1446E8.f_8A6.f_A5[iVar0], Global_1446E8.f_8A6.f_B7[iVar0], Global_1446E8.f_8A6.f_DA[iVar0], Global_1446E8.f_8A6.f_E3[iVar0], Global_1446E8.f_8A6.f_EC[iVar0], Global_1446E8.f_8A6.f_F5[iVar0]);
								GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								func_147(0);
							}
						}
						iVar0++;
					}
				}
				if (func_15(5))
				{
					iVar0 = 0;
					while (iVar0 <= 7)
					{
						if (Global_1441E9.f_48B[3 /*9*/][iVar0] == iVar1 + 3 || Global_1441E9.f_439[3 /*9*/][iVar0] == 1)
						{
							if (func_151(Global_1441E9.f_439[3 /*9*/][iVar0]))
							{
								func_147(1);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, iVar5);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(uLocal_88, uLocal_89, fLocal_90, fLocal_91);
								func_127(iVar0, Global_1446E8.f_9A4[iVar0], Global_1446E8.f_9A4.f_8A[iVar0], &(Global_1446E8.f_9A4.f_9[iVar0 /*16*/]), Global_1446E8.f_9A4.f_9C[iVar0], Global_1446E8.f_9A4.f_93[iVar0], Global_1446E8.f_9A4.f_A5[iVar0], Global_1446E8.f_9A4.f_B7[iVar0], Global_1446E8.f_9A4.f_DA[iVar0], Global_1446E8.f_9A4.f_E3[iVar0]);
								GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								func_147(0);
							}
						}
						iVar0++;
					}
				}
				if (func_15(1))
				{
					iVar0 = 0;
					while (iVar0 <= 7)
					{
						if (Global_1441E9.f_48B[4 /*9*/][iVar0] == iVar1 + 3 || Global_1441E9.f_439[4 /*9*/][iVar0] == 1)
						{
							if (func_151(Global_1441E9.f_439[4 /*9*/][iVar0]))
							{
								func_147(1);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, iVar5);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(uLocal_88, uLocal_89, fLocal_90, fLocal_91);
								func_117(iVar0, Global_1446E8.f_42A[iVar0], Global_1446E8.f_42A.f_9[iVar0], &(Global_1446E8.f_42A.f_12[iVar0 /*16*/]), Global_1446E8.f_42A.f_9C[iVar0], Global_1446E8.f_42A.f_A5[iVar0], Global_1446E8.f_42A.f_D0[iVar0], Global_1446E8.f_42A.f_93[iVar0], Global_1446E8.f_42A.f_B7[iVar0 /*3*/], Global_1446E8.f_42A.f_B7[iVar0 /*3*/].f_1, Global_1446E8.f_42A.f_FC[iVar0], Global_1446E8.f_42A.f_105[iVar0], Global_1446E8.f_42A.f_D9[iVar0], Global_256D5E[iVar0], Global_256D67[iVar0], Global_256D70[iVar0], Global_256D79[iVar0], Global_256D82[iVar0], Global_256D8B[iVar0], Global_256D94[iVar0], Global_256D9D[iVar0]);
								GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								func_147(0);
							}
						}
						iVar0++;
					}
				}
				if (func_15(0))
				{
					iVar0 = 0;
					while (iVar0 <= 7)
					{
						if (Global_1441E9.f_48B[5 /*9*/][iVar0] == iVar1 + 3 || Global_1441E9.f_439[5 /*9*/][iVar0] == 1)
						{
							if (func_151(Global_1441E9.f_439[5 /*9*/][iVar0]))
							{
								func_147(1);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, iVar5);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(uLocal_88, uLocal_89, fLocal_90, fLocal_91);
								func_102(iVar0, Global_1446E8.f_301[iVar0], Global_1446E8.f_301.f_9[iVar0], &(Global_1446E8.f_301.f_12[iVar0 /*16*/]), Global_1446E8.f_301.f_9C[iVar0], Global_1446E8.f_301.f_93[iVar0], Global_1446E8.f_301.f_B7[iVar0 /*3*/], Global_1446E8.f_301.f_B7[iVar0 /*3*/].f_1, Global_1446E8.f_301.f_D0[iVar0], Global_1446E8.f_301.f_A5[iVar0], Global_1446E8.f_301.f_D9[iVar0], Global_1446E8.f_301.f_FC[iVar0], Global_1446E8.f_301.f_105[iVar0], Global_1446E8.f_301.f_10E[iVar0], Global_1446E8.f_301.f_117[iVar0], Global_1446E8.f_301.f_120[iVar0]);
								GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								func_147(0);
							}
						}
						iVar0++;
					}
				}
				if (func_15(6))
				{
					iVar0 = 0;
					while (iVar0 <= 7)
					{
						if (Global_1441E9.f_48B[6 /*9*/][iVar0] == iVar1 + 3 || Global_1441E9.f_439[6 /*9*/][iVar0] == 1)
						{
							if (func_151(Global_1441E9.f_439[6 /*9*/][iVar0]))
							{
								func_147(1);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, iVar5);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(uLocal_88, uLocal_89, fLocal_90, fLocal_91);
								func_83(iVar0, Global_1446E8.f_A90[iVar0], &(Global_1446E8.f_A90.f_9[iVar0 /*16*/]), Global_1446E8.f_A90.f_93[iVar0], Global_1446E8.f_A90.f_8A[iVar0], Global_1446E8.f_A90.f_9C[iVar0], Global_1446E8.f_A90.f_DB[iVar0], &(Global_1446E8.f_A90.f_E4[iVar0 /*16*/]), Global_1446E8.f_A90.f_165[iVar0], Global_1446E8.f_A90.f_16E[iVar0], Global_1446E8.f_A90.f_191[iVar0], Global_1446E8.f_A90.f_19A[iVar0], Global_1446E8.f_A90.f_A5[iVar0], Global_1446E8.f_A90.f_AE[iVar0], Global_1446E8.f_A90.f_B7[iVar0], Global_1446E8.f_A90.f_C0[iVar0], Global_1446E8.f_A90.f_C9[iVar0], Global_1446E8.f_A90.f_1A3[iVar0]);
								GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								func_147(0);
							}
						}
						iVar0++;
					}
				}
				if (func_15(2))
				{
					iVar0 = 0;
					while (iVar0 <= 7)
					{
						if (Global_1441E9.f_48B[7 /*9*/][iVar0] == iVar1 + 3 || Global_1441E9.f_439[7 /*9*/][iVar0] == 1)
						{
							if (func_151(Global_1441E9.f_439[7 /*9*/][iVar0]))
							{
								func_147(1);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, iVar5);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(uLocal_88, uLocal_89, fLocal_90, fLocal_91);
								func_58(iVar0, Global_1446E8.f_538[iVar0], &(Global_1446E8.f_538.f_51[iVar0 /*16*/]), Global_1446E8.f_538.f_E4[iVar0], Global_1446E8.f_538.f_ED[iVar0], Global_1446E8.f_538.f_D2[iVar0], Global_1446E8.f_538.f_9[iVar0], Global_1446E8.f_538.f_12[iVar0], Global_1446E8.f_538.f_1B[iVar0], Global_1446E8.f_538.f_24[iVar0], Global_1446E8.f_538.f_2D[iVar0], Global_1446E8.f_538.f_36[iVar0], Global_1446E8.f_538.f_3F[iVar0], Global_1446E8.f_538.f_48[iVar0], Global_1446E8.f_538.f_DB[iVar0], Global_1446E8.f_538.f_F6[iVar0], Global_1446E8.f_538.f_121[iVar0], Global_1446E8.f_538.f_108[iVar0 /*3*/], Global_1446E8.f_538.f_108[iVar0 /*3*/].f_1, Global_1446E8.f_538.f_12A[iVar0], Global_1446E8.f_538.f_133[iVar0], Global_1446E8.f_538.f_13C[iVar0], Global_1446E8.f_538.f_145[iVar0], Global_1446E8.f_538.f_14E[iVar0], Global_1446E8.f_538.f_157[iVar0], Global_1446E8.f_538.f_160[iVar0], Global_1446E8.f_538.f_169[iVar0], Global_1446E8.f_538.f_172[iVar0], Global_1446E8.f_538.f_17B[iVar0], Global_1446E8.f_538.f_184[iVar0], Global_1446E8.f_538.f_18D[iVar0], Global_1446E8.f_538.f_196[iVar0], Global_1446E8.f_538.f_19F[iVar0], Global_1446E8.f_538.f_1A8[iVar0], Global_1446E8.f_538.f_1B1[iVar0], Global_1446E8.f_538.f_1DD[iVar0], Global_1446E8.f_538.f_1E6[iVar0], Global_1446E8.f_538.f_1BA[iVar0], Global_256DA6[iVar0], Global_256DAF[iVar0], Global_256DB8[iVar0], Global_256DC1[iVar0], Global_256DCA[iVar0], Global_256DD3[iVar0], Global_256DDC[iVar0], Global_256DE5[iVar0], Global_1446E8.f_538.f_1EF[iVar0]);
								GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								func_147(0);
							}
						}
						iVar0++;
					}
				}
				if (func_15(8))
				{
					iVar0 = 0;
					while (iVar0 <= 7)
					{
						if (Global_1441E9.f_48B[8 /*9*/][iVar0] == iVar1 + 3 || Global_1441E9.f_439[8 /*9*/][iVar0] == 1)
						{
							if (func_151(Global_1441E9.f_439[8 /*9*/][iVar0]))
							{
								func_147(1);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, iVar5);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(uLocal_88, uLocal_89, fLocal_90, fLocal_91);
								func_26(iVar0, &(Global_1446E8.f_D66.f_9[iVar0 /*16*/]), Global_1446E8.f_D66[iVar0], Global_1446E8.f_D66.f_8A[iVar0], Global_1446E8.f_D66.f_93[iVar0], Global_1446E8.f_D66.f_9C[iVar0], Global_1446E8.f_D66.f_A5[iVar0]);
								GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								func_147(0);
							}
						}
						iVar0++;
					}
				}
				iVar1++;
			}
		}
		func_25();
	}
}

void func_25()//Position - 0x2855
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		Global_1446E8.f_E27[iVar0] = Global_1446E8.f_E1D[iVar0];
		iVar0++;
	}
}

void func_26(int iParam0, char* sParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6)//Position - 0x2886
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	if (func_13(8, iParam0))
	{
		uVar2 = 2;
		func_27(iParam0, &uVar0, &uVar1, &uVar2, 1, sParam1, iParam3, uParam2, uParam4, uParam5, uParam6);
	}
}

void func_27(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, char* sParam5, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10)//Position - 0x28B7
{
	struct<9> Var0;
	struct<8> Var1;
	
	Global_1446E8++;
	if (func_57())
	{
		func_56(&Var1, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
		func_55(uParam1, 0);
		func_53(uParam1);
		func_52(8, iParam0);
		if (Global_1446E8 == 1)
		{
			func_51(iParam4);
		}
		func_46(uParam2, iParam4, uParam1, &Var0);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", 0);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("Hunting", 0);
		if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars") && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("Hunting"))
		{
			Var1 = *uParam2;
			Var1.f_1 = uParam2->f_1;
			Var1 = (Var1 + 0.079f);
			Var1.f_1 = (Var1.f_1 + 0.008f);
			Var1.f_2 = (Var1.f_2 + 0.157f);
			Var1.f_3 = (Var1.f_3 + 0.036f);
			Var1.f_4 += 255;
			Var1.f_5 += 255;
			Var1.f_6 += 255;
			Var1.f_7 = 140;
			if (func_45())
			{
				Var1 = (Var1 + -0.025f);
				Var1.f_2 = (Var1.f_2 + 0.05f);
			}
			Global_1446E8.f_E46 = (Global_1446E8.f_E46 + Var1.f_3);
			func_37("TimerBars", "ALL_BLACK_bg", &Var1, 1, 0, 4, 0);
			Var0.f_4 = uParam8;
			Var0.f_5 = uParam9;
			Var0.f_6 = uParam10;
			Var0.f_7 = 255;
			Var0.f_8 = uParam7;
			func_37("Hunting", "HuntingWindArrow_32", &Var0, 1, 0, 4, 0);
			uParam1->f_3 = uParam8;
			uParam1->f_4 = uParam9;
			uParam1->f_5 = uParam10;
			uParam1->f_6 = 255;
			func_36(uParam1, 0);
			uParam7 = uParam7;
			(*uParam3)[0 /*9*/] = (*uParam3)[0 /*9*/];
			func_29(uParam2, uParam1, sParam5, iParam6, 2);
			func_28();
		}
	}
}

void func_28()//Position - 0x2A45
{
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
}

void func_29(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x2A52
{
	char* sVar0;
	
	sVar0 = sParam2;
	if (!func_35(sVar0))
	{
		if (func_33())
		{
			func_36(uParam1, 0);
			HUD::SET_TEXT_JUSTIFICATION(iParam4);
			func_30(func_32(*uParam0), func_31(uParam0->f_1), sVar0, iParam3, 0);
		}
	}
}

void func_30(var uParam0, var uParam1, char* sParam2, var uParam3, int iParam4)//Position - 0x2A94
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(uParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(uParam0, uParam1, iParam4);
}

float func_31(float fParam0)//Position - 0x2AB2
{
	return (fParam0 + fLocal_13);
}

float func_32(float fParam0)//Position - 0x2ABF
{
	return (fParam0 + fLocal_12);
}

int func_33()//Position - 0x2ACC
{
	if (func_34())
	{
		return 1;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 0;
	}
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADING_IN())
	{
		return 0;
	}
	if (MISC::IS_FRONTEND_FADING())
	{
		return 0;
	}
	return 1;
}

bool func_34()//Position - 0x2B0B
{
	return Global_1406B8;
}

int func_35(char* sParam0)//Position - 0x2B17
{
	if (MISC::IS_STRING_NULL(sParam0))
	{
		return 1;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "") || MISC::ARE_STRINGS_EQUAL(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

void func_36(var uParam0, bool bParam1)//Position - 0x2B4E
{
	HUD::SET_TEXT_FONT(*uParam0);
	if (!uParam0->f_8 == 0f || !uParam0->f_9 == 0f)
	{
		HUD::SET_TEXT_WRAP(uParam0->f_8, uParam0->f_9);
	}
	HUD::SET_TEXT_SCALE(uParam0->f_1, uParam0->f_2);
	HUD::SET_TEXT_COLOUR(uParam0->f_3, uParam0->f_4, uParam0->f_5, uParam0->f_6);
	switch (uParam0->f_7)
	{
		case 0:
			break;
		
		case 1:
			HUD::SET_TEXT_OUTLINE();
			HUD::SET_TEXT_DROP_SHADOW();
			break;
		
		case 3:
			HUD::SET_TEXT_DROP_SHADOW();
			break;
		
		case 2:
			HUD::SET_TEXT_OUTLINE();
			break;
	}
	if (bParam1)
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	}
}

void func_37(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x2BE7
{
	struct<9> Var0;
	
	Var0 = { *uParam2 };
	switch (iParam4)
	{
		case 0:
			func_44(&Var0);
			break;
		
		case 1:
			func_43(&Var0);
			break;
		
		case 5:
			func_42(&Var0);
			break;
		
		case 6:
			func_41(&Var0);
			break;
		
		case 7:
			func_40(&Var0);
			break;
		
		case 8:
			func_39(&Var0);
			break;
		
		case 9:
			func_38(&Var0);
			break;
	}
	if (func_33())
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
		if (iParam3 == 1)
		{
			GRAPHICS::DRAW_SPRITE(sParam0, sParam1, func_32(Var0), func_31(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6);
		}
		else
		{
			GRAPHICS::DRAW_SPRITE(sParam0, sParam1, func_32(Var0), func_31(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6);
		}
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	}
}

void func_38(var uParam0)//Position - 0x2CEC
{
	uParam0->f_4 = 128;
	uParam0->f_5 = 128;
	uParam0->f_6 = 128;
}

void func_39(var uParam0)//Position - 0x2D06
{
	uParam0->f_7 = 2;
}

void func_40(var uParam0)//Position - 0x2D13
{
	uParam0->f_7 = 5;
}

void func_41(var uParam0)//Position - 0x2D20
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 70;
}

void func_42(var uParam0)//Position - 0x2D3D
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 100;
}

void func_43(var uParam0)//Position - 0x2D5A
{
	uParam0->f_4 = (uParam0->f_4 - 50);
	uParam0->f_5 = (uParam0->f_5 - 50);
	uParam0->f_6 = (uParam0->f_6 - 50);
}

void func_44(var uParam0)//Position - 0x2D83
{
	uParam0->f_4 = uParam0->f_4;
	uParam0->f_5 = uParam0->f_5;
	uParam0->f_6 = uParam0->f_6;
	uParam0->f_7 = uParam0->f_7;
}

int func_45()//Position - 0x2DAB
{
	if ((LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 9) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 10)
	{
		return 1;
	}
	return 0;
}

void func_46(var uParam0, int iParam1, var uParam2, var uParam3)//Position - 0x2DDC
{
	float fVar0;
	
	fVar0 = func_50(0);
	*uParam0 = 0.795f;
	uParam0->f_1 = func_49(iParam1);
	uParam0->f_1 = (uParam0->f_1 + func_48(uParam2));
	func_47(iParam1, -fVar0);
	uParam0->f_1 = (uParam0->f_1 + func_48(uParam2));
	*uParam3 = 0.9375f;
	uParam3->f_1 = (uParam0->f_1 + 0.009f);
	uParam3->f_2 = 0.02f;
	uParam3->f_3 = 0.02f;
}

void func_47(int iParam0, float fParam1)//Position - 0x2E4C
{
	switch (iParam0)
	{
		case 1:
			Global_1446E8.f_2F2 = (Global_1446E8.f_2F2 + fParam1);
			break;
		
		case 2:
			Global_1446E8.f_2F3 = (Global_1446E8.f_2F3 + fParam1);
			break;
	}
}

float func_48(var uParam0)//Position - 0x2E8F
{
	float fVar0;
	
	switch (uParam0->f_A)
	{
		case 6:
			fVar0 = 0f;
			break;
	}
	return fVar0;
}

float func_49(int iParam0)//Position - 0x2EAE
{
	switch (iParam0)
	{
		case 1:
			return Global_1446E8.f_2F2;
			break;
		
		case 2:
			return Global_1446E8.f_2F3;
			break;
	}
	return Global_1446E8.f_2F2;
}

float func_50(int iParam0)//Position - 0x2EEA
{
	float fVar0;
	
	fVar0 = ((0.025f + 0.006f) + 0.0009f);
	if (iParam0 == 1)
	{
		fVar0 = (fVar0 + 0.008f);
	}
	return fVar0;
}

void func_51(int iParam0)//Position - 0x2F17
{
	switch (iParam0)
	{
		case 1:
			Global_1446E8.f_2F2 = func_16();
			break;
		
		case 2:
			Global_1446E8.f_2F3 = func_16();
			break;
	}
}

void func_52(int iParam0, var uParam1)//Position - 0x2F4E
{
	MISC::SET_BIT(&(Global_1446E8.f_E31[iParam0]), uParam1);
}

void func_53(var uParam0)//Position - 0x2F67
{
	float fVar0;
	
	fVar0 = ((((0.88f - 0.062f) + 0.026f) + 0.027f) + 0.03f);
	if (Global_1446E8.f_2FC)
	{
		fVar0 = (fVar0 + -0.034f);
		if (GRAPHICS::GET_IS_WIDESCREEN() == 0)
		{
			fVar0 = (fVar0 + -0.02f);
		}
	}
	if (Global_1446E8.f_2FD && Global_1446E8.f_2FC == 0)
	{
		fVar0 = (fVar0 + (-0.015f - 0.003f));
		if (GRAPHICS::GET_IS_WIDESCREEN() == 0)
		{
			fVar0 = (fVar0 + -0.017f);
		}
	}
	if ((Global_1446E8.f_2FE && Global_1446E8.f_2FD == 0) && Global_1446E8.f_2FC == 0)
	{
		fVar0 = (fVar0 + -0.038f);
	}
	if (Global_1446E8.f_2F6 == 1)
	{
		fVar0 = (fVar0 + -0.113f);
	}
	if (((LOCALIZATION::GET_CURRENT_LANGUAGE() == 7 && LOCALIZATION::GET_CURRENT_LANGUAGE() == 1) && !GRAPHICS::GET_IS_WIDESCREEN()) && Global_1446E8.f_2FE)
	{
		fVar0 = (fVar0 + -0.007f);
	}
	if (Global_1446E8.f_2FF)
	{
		if ((((LOCALIZATION::GET_CURRENT_LANGUAGE() != 0 && LOCALIZATION::GET_CURRENT_LANGUAGE() != 5) && LOCALIZATION::GET_CURRENT_LANGUAGE() != 6) && LOCALIZATION::GET_CURRENT_LANGUAGE() != 9) && LOCALIZATION::GET_CURRENT_LANGUAGE() != 11)
		{
			fVar0 = (fVar0 + -0.009f);
		}
		else
		{
			fVar0 = (fVar0 + -0.009f);
		}
	}
	if (Global_1446E8.f_300)
	{
		if (func_54())
		{
			fVar0 = (fVar0 + -0.03f);
		}
		else if ((((LOCALIZATION::GET_CURRENT_LANGUAGE() != 0 && LOCALIZATION::GET_CURRENT_LANGUAGE() != 5) && LOCALIZATION::GET_CURRENT_LANGUAGE() != 6) && LOCALIZATION::GET_CURRENT_LANGUAGE() != 9) && LOCALIZATION::GET_CURRENT_LANGUAGE() != 11)
		{
			fVar0 = (fVar0 + -0.024f);
		}
		else
		{
			fVar0 = (fVar0 + -0.019f);
		}
	}
	if (((((((((LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 7) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 1) && Global_1446E8.f_2FD == 0) && Global_1446E8.f_2FC == 0) && Global_1446E8.f_2F6 == 0) && Global_1446E8.f_2FE == 0) && Global_1446E8.f_2FF == 0) && Global_1446E8.f_300 == 0) && MISC::IS_PC_VERSION())
	{
		fVar0 = (fVar0 + -0.005f);
	}
	uParam0->f_9 = fVar0;
}

int func_54()//Position - 0x31BA
{
	int iVar0;
	var uVar1;
	
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

void func_55(var uParam0, int iParam1)//Position - 0x31DE
{
	*uParam0 = 0;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.288f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 23;
}

void func_56(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8, float fParam9)//Position - 0x322A
{
	*uParam0 = fParam1;
	uParam0->f_1 = (fParam2 + fParam9);
	uParam0->f_2 = fParam3;
	uParam0->f_3 = fParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = iParam7;
	uParam0->f_7 = iParam8;
}

int func_57()//Position - 0x3264
{
	return 1;
}

void func_58(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, int iParam15, bool bParam16, float fParam17, float fParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, int iParam35, int iParam36, int iParam37, int iParam38, int iParam39, int iParam40, int iParam41, int iParam42, int iParam43, int iParam44, int iParam45, bool bParam46)//Position - 0x326D
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (func_13(2, iParam0))
	{
		uVar2 = 9;
		if (iParam1 < 9)
		{
			func_59(iParam0, &uVar0, &uVar1, &uVar2, &uVar3, iParam1, 1, iParam3, iParam4, sParam2, iParam5, uParam6, uParam7, uParam8, uParam9, uParam10, uParam11, uParam12, uParam13, iParam14, iParam15, bParam16, fParam17, fParam18, uParam19, uParam20, uParam21, uParam22, uParam23, uParam24, uParam25, uParam26, uParam27, uParam28, uParam29, uParam30, uParam31, uParam32, uParam33, uParam34, iParam35, iParam36, iParam37, iParam38, iParam39, iParam40, iParam41, iParam42, iParam43, iParam44, iParam45, bParam46);
		}
	}
}

void func_59(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, int iParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19, int iParam20, bool bParam21, float fParam22, float fParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, int iParam40, int iParam41, int iParam42, int iParam43, int iParam44, int iParam45, int iParam46, int iParam47, int iParam48, int iParam49, int iParam50, bool bParam51)//Position - 0x32FA
{
	struct<9> Var0;
	bool bVar1;
	int iVar2;
	struct<9> Var3;
	
	Global_1446E8++;
	if (func_57())
	{
		if (iParam40 == 2)
		{
		}
		func_52(2, iParam0);
		if (Global_1446E8 == 1)
		{
			func_51(iParam6);
		}
		func_78(uParam2, uParam3, &Var0, uParam4, iParam6, fParam22, fParam23, uParam1);
		if (func_45())
		{
			func_77(uParam1, 0);
		}
		else if (bParam51)
		{
			func_55(uParam1, 0);
		}
		else if (bParam21)
		{
			func_76(uParam1, 3);
		}
		else
		{
			func_55(uParam1, 0);
		}
		func_53(uParam1);
		if (iParam19 == 0)
		{
			func_75(iParam0);
		}
		if (iParam41 == 0)
		{
			func_74(iParam0);
		}
		iVar2 = func_73();
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar2);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", 0);
		if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
		{
			if (func_72(iParam19, &(Global_1446E8.f_AC[iParam0 /*2*/]), &(Global_1446E8.f_BD[iParam0 /*2*/])))
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = false;
			}
			if (!func_71(fParam22, fParam23))
			{
				Var0 = *uParam2;
				Var0.f_1 = uParam2->f_1;
				Var0 = (Var0 + 0.079f);
				Var0.f_1 = (Var0.f_1 + 0.012f);
				Var0.f_2 = (Var0.f_2 + 0.157f);
				Var0.f_3 = (Var0.f_3 + 0.028f);
				Var0.f_4 += 255;
				Var0.f_5 += 255;
				Var0.f_6 += 255;
				Var0.f_7 = 140;
				if (func_45())
				{
					Var0 = (Var0 + -0.025f);
					Var0.f_2 = (Var0.f_2 + 0.05f);
				}
				Global_1446E8.f_E46 = (Global_1446E8.f_E46 + Var0.f_3);
				if (iParam41 > 0)
				{
					Var3 = { Var0 };
					if (func_166(&(Global_1446E8.f_2A4[iParam0 /*2*/]), 2000, 0) == 0)
					{
						if (func_70(Global_1446E8.f_2A4[iParam0 /*2*/], 1250, 0))
						{
							Global_1446E8.f_2B5[iParam0] = (Global_1446E8.f_2B5[iParam0] - 17);
						}
						Var3.f_7 = Global_1446E8.f_2B5[iParam0];
						func_69(&Var3, iParam7);
						func_37("TimerBars", "ALL_WHITE_bg", &Var3, 1, 0, iVar2, 0);
					}
				}
				else
				{
					Global_1446E8.f_2B5[iParam0] = 255;
					func_68(&(Global_1446E8.f_2A4[iParam0 /*2*/]), 0, 0);
				}
				func_37("TimerBars", "ALL_BLACK_bg", &Var0, 1, 0, iVar2, 0);
			}
			iVar2 = func_73();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar2);
			func_67(uParam1, iParam42);
			if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9)
			{
				uParam2->f_1 = (uParam2->f_1 + -0.009f);
			}
			else
			{
				uParam2->f_1 = (uParam2->f_1 + -0.003f);
			}
			if (func_45())
			{
				if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9)
				{
					uParam2->f_1 = (uParam2->f_1 + -0.009f);
				}
				else
				{
					uParam2->f_1 = (uParam2->f_1 + -0.007f);
				}
			}
			if (func_45() == 0)
			{
				if (bParam51)
				{
					uParam2->f_1 = (uParam2->f_1 + 0.003f);
				}
				else if (bParam21)
				{
					uParam2->f_1 = (uParam2->f_1 + -0.002f);
				}
			}
			else if (bParam21)
			{
				uParam2->f_1 = (uParam2->f_1 + 0.007f);
			}
			else
			{
				uParam2->f_1 = (uParam2->f_1 + 0.007f);
			}
			if (!func_71(fParam22, fParam23))
			{
				func_36(uParam1, 0);
				if (bParam51)
				{
					func_66(uParam2, uParam1, sParam9, "", iParam42, 2);
				}
				else if (bParam21 == 1)
				{
					func_66(uParam2, uParam1, sParam9, "", iParam42, 2);
				}
				else if (iParam20 == -1)
				{
					func_64(uParam2, uParam1, sParam9, 0, 1);
				}
				else
				{
					func_29(uParam2, uParam1, sParam9, iParam20, 2);
				}
			}
			if (bVar1)
			{
				func_60(iParam5, uParam3, iParam7, iParam8, iParam10, uParam11, uParam12, uParam13, uParam14, uParam15, uParam16, uParam17, uParam18, uParam24, uParam25, uParam26, uParam27, uParam28, uParam29, uParam30, uParam31, uParam32, uParam33, uParam34, uParam35, uParam36, uParam37, uParam38, uParam39, iVar2, iParam43, iParam44, iParam45, iParam46, iParam47, iParam48, iParam49, iParam50);
			}
			func_28();
		}
	}
}

void func_60(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33, int iParam34, int iParam35, int iParam36, int iParam37)//Position - 0x36AB
{
	bool bVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	struct<9> Var5;
	bool bVar6;
	
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", 0);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("Cross", 0);
	if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars") && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("Cross"))
	{
		fVar3 = -0.0094f;
		iVar4 = 0;
		while (iVar4 <= (iParam0 - 1))
		{
			(*uParam1)[iVar4 /*9*/] = ((*uParam1)[iVar4 /*9*/] + (fVar3 * IntToFloat(iVar4)));
			if (func_63(iVar4, iParam4))
			{
				switch (iVar4)
				{
					case 0:
						bVar0 = uParam5;
						iVar1 = uParam13;
						iVar2 = uParam21;
						break;
					
					case 1:
						bVar0 = uParam6;
						iVar1 = uParam14;
						iVar2 = uParam22;
						break;
					
					case 2:
						bVar0 = uParam7;
						iVar1 = uParam15;
						iVar2 = uParam23;
						break;
					
					case 3:
						bVar0 = uParam8;
						iVar1 = uParam16;
						iVar2 = uParam24;
						break;
					
					case 4:
						bVar0 = uParam9;
						iVar1 = uParam17;
						iVar2 = uParam25;
						break;
					
					case 5:
						bVar0 = uParam10;
						iVar1 = uParam18;
						iVar2 = uParam26;
						break;
					
					case 6:
						bVar0 = uParam11;
						iVar1 = uParam19;
						iVar2 = uParam27;
						break;
					
					case 7:
						bVar0 = uParam12;
						iVar1 = uParam20;
						iVar2 = uParam28;
						break;
				}
				bVar6 = false;
				if (iVar2 == 2)
				{
					bVar6 = true;
					iVar2 = 1;
				}
				Var5 = { func_62(*(uParam1[iVar4 /*9*/]), bVar0, iParam2, iParam3, iVar1, iVar2) };
				if (bVar6)
				{
					Var5.f_7 = 51;
				}
				func_37("TimerBars", "Circle_checkpoints", &Var5, 0, 0, iParam29, 0);
				if (func_61(iVar4, iParam30, iParam31, iParam32, iParam33, iParam34, iParam35, iParam36, iParam37))
				{
					func_69(uParam1[iVar4 /*9*/], 2);
					func_37("Cross", "Circle_checkpoints_Cross", uParam1[iVar4 /*9*/], 0, 0, iParam29, 0);
				}
			}
			iVar4++;
		}
	}
}

int func_61(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x383F
{
	if (iParam0 == 0 && iParam1 == 1)
	{
		return 1;
	}
	if (iParam0 == 1 && iParam2 == 1)
	{
		return 1;
	}
	if (iParam0 == 2 && iParam3 == 1)
	{
		return 1;
	}
	if (iParam0 == 3 && iParam4 == 1)
	{
		return 1;
	}
	if (iParam0 == 4 && iParam5 == 1)
	{
		return 1;
	}
	if (iParam0 == 5 && iParam6 == 1)
	{
		return 1;
	}
	if (iParam0 == 6 && iParam7 == 1)
	{
		return 1;
	}
	if (iParam0 == 7 && iParam8 == 1)
	{
		return 1;
	}
	return 0;
}

struct<9> func_62(struct<9> Param0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x38E8
{
	struct<9> Var0;
	
	Var0 = { Param0 };
	if (iParam4 == 0)
	{
		if (bParam1)
		{
			func_69(&Var0, iParam2);
		}
		else
		{
			func_69(&Var0, iParam3);
		}
	}
	else if (bParam1)
	{
		func_69(&Var0, iParam4);
	}
	else
	{
		func_69(&Var0, iParam5);
	}
	if (bParam1 == 0)
	{
	}
	return Var0;
}

int func_63(int iParam0, int iParam1)//Position - 0x393E
{
	if (iParam1 == -1)
	{
		return 1;
	}
	if (iParam0 > iParam1)
	{
		return 0;
	}
	return 1;
}

void func_64(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x395C
{
	char* sVar0;
	
	sVar0 = sParam2;
	if (!func_35(sVar0))
	{
		if (func_33())
		{
			func_36(uParam1, 0);
			HUD::SET_TEXT_RIGHT_JUSTIFY(iParam4);
			HUD::SET_TEXT_CENTRE(iParam3);
			func_65(func_32(*uParam0), func_31(uParam0->f_1), sVar0, 0);
		}
	}
}

void func_65(var uParam0, var uParam1, char* sParam2, int iParam3)//Position - 0x39A2
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(uParam0, uParam1, iParam3);
}

void func_66(var uParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x39BA
{
	char* sVar0;
	
	if (!func_35(sParam2))
	{
		if (func_33())
		{
			func_36(uParam1, 0);
			HUD::SET_TEXT_JUSTIFICATION(iParam5);
			if (func_35(sParam3))
			{
				sVar0 = "STRING";
			}
			else
			{
				sVar0 = sParam3;
			}
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sVar0);
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam4);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam2);
			HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_32(*uParam0), func_31(uParam0->f_1), 0);
		}
	}
}

void func_67(var uParam0, int iParam1)//Position - 0x3A1B
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	HUD::GET_HUD_COLOUR(iParam1, &uVar0, &uVar1, &uVar2, &uVar3);
	uParam0->f_3 = uVar0;
	uParam0->f_4 = uVar1;
	uParam0->f_5 = uVar2;
}

void func_68(var uParam0, bool bParam1, bool bParam2)//Position - 0x3A43
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

void func_69(var uParam0, int iParam1)//Position - 0x3A80
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	HUD::GET_HUD_COLOUR(iParam1, &uVar0, &uVar1, &uVar2, &uVar3);
	uParam0->f_4 = uVar0;
	uParam0->f_5 = uVar1;
	uParam0->f_6 = uVar2;
}

int func_70(var uParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x3AA8
{
	if (iParam2 == -1)
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam3)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uParam0)) >= iParam2)
		{
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), uParam0)) >= iParam2)
	{
		return 1;
	}
	return 0;
}

int func_71(float fParam0, float fParam1)//Position - 0x3AFB
{
	if (fParam0 == -1f && fParam1 == -1f)
	{
		return 0;
	}
	return 1;
}

int func_72(int iParam0, var uParam1, var uParam2)//Position - 0x3B18
{
	if (func_166(uParam1, iParam0, 0))
	{
		return 1;
	}
	if (func_166(uParam2, 300, 0))
	{
		if (func_166(uParam2, 800, 0))
		{
			func_4(uParam2);
			return 1;
		}
		else
		{
			return 1;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_73()//Position - 0x3B63
{
	int iVar0;
	
	iVar0 = 1;
	if (Global_1446E8.f_2FB)
	{
		iVar0 = 7;
	}
	return iVar0;
}

void func_74(int iParam0)//Position - 0x3B7D
{
	func_4(&(Global_1446E8.f_1BC[iParam0 /*2*/]));
	func_4(&(Global_1446E8.f_1CD[iParam0 /*2*/]));
}

void func_75(int iParam0)//Position - 0x3BA3
{
	func_4(&(Global_1446E8.f_AC[iParam0 /*2*/]));
	func_4(&(Global_1446E8.f_BD[iParam0 /*2*/]));
}

void func_76(var uParam0, int iParam1)//Position - 0x3BC7
{
	*uParam0 = 4;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = (0.355f + 0.092f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 6;
}

void func_77(var uParam0, int iParam1)//Position - 0x3C18
{
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = (0.508f - 0.03f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 20;
}

void func_78(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, float fParam5, float fParam6, var uParam7)//Position - 0x3C6A
{
	float fVar0;
	
	fVar0 = func_50(0);
	*uParam0 = 0.795f;
	uParam0->f_1 = func_49(iParam4);
	uParam0->f_1 = (uParam0->f_1 + func_48(uParam7));
	func_80(uParam1, iParam4, fParam5, fParam6);
	func_79(uParam3);
	if (!func_71(fParam5, fParam6))
	{
		func_47(iParam4, -fVar0);
	}
	func_56(uParam2, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
}

void func_79(var uParam0)//Position - 0x3CD1
{
	*uParam0 = 0.851f;
	uParam0->f_1 = 0.075f;
	uParam0->f_2 = 0.001f;
	uParam0->f_3 = 0.009f;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 250;
}

void func_80(var uParam0, int iParam1, float fParam2, float fParam3)//Position - 0x3D11
{
	float fVar0;
	float fVar1;
	
	if (!func_71(fParam2, fParam3))
	{
		fVar0 = (func_82() + func_49(iParam1));
		fVar1 = func_81();
	}
	else
	{
		fVar0 = fParam3;
		fVar1 = fParam2;
	}
	(*uParam0)[0 /*9*/] = fVar1;
	(uParam0[0 /*9*/])->f_1 = fVar0;
	(uParam0[0 /*9*/])->f_2 = 0.012f;
	(uParam0[0 /*9*/])->f_3 = 0.023f;
	(uParam0[0 /*9*/])->f_4 = 0;
	(uParam0[0 /*9*/])->f_5 = 0;
	(uParam0[0 /*9*/])->f_6 = 0;
	(uParam0[0 /*9*/])->f_7 = 250;
	(*uParam0)[1 /*9*/] = fVar1;
	(uParam0[1 /*9*/])->f_1 = fVar0;
	(uParam0[1 /*9*/])->f_2 = 0.012f;
	(uParam0[1 /*9*/])->f_3 = 0.023f;
	(uParam0[1 /*9*/])->f_4 = 0;
	(uParam0[1 /*9*/])->f_5 = 0;
	(uParam0[1 /*9*/])->f_6 = 0;
	(uParam0[1 /*9*/])->f_7 = 250;
	(*uParam0)[2 /*9*/] = fVar1;
	(uParam0[2 /*9*/])->f_1 = fVar0;
	(uParam0[2 /*9*/])->f_2 = 0.012f;
	(uParam0[2 /*9*/])->f_3 = 0.023f;
	(uParam0[2 /*9*/])->f_4 = 0;
	(uParam0[2 /*9*/])->f_5 = 0;
	(uParam0[2 /*9*/])->f_6 = 0;
	(uParam0[2 /*9*/])->f_7 = 250;
	(*uParam0)[3 /*9*/] = fVar1;
	(uParam0[3 /*9*/])->f_1 = fVar0;
	(uParam0[3 /*9*/])->f_2 = 0.012f;
	(uParam0[3 /*9*/])->f_3 = 0.023f;
	(uParam0[3 /*9*/])->f_4 = 0;
	(uParam0[3 /*9*/])->f_5 = 0;
	(uParam0[3 /*9*/])->f_6 = 0;
	(uParam0[3 /*9*/])->f_7 = 250;
	(*uParam0)[4 /*9*/] = fVar1;
	(uParam0[4 /*9*/])->f_1 = fVar0;
	(uParam0[4 /*9*/])->f_2 = 0.012f;
	(uParam0[4 /*9*/])->f_3 = 0.023f;
	(uParam0[4 /*9*/])->f_4 = 0;
	(uParam0[4 /*9*/])->f_5 = 0;
	(uParam0[4 /*9*/])->f_6 = 0;
	(uParam0[4 /*9*/])->f_7 = 250;
	(*uParam0)[5 /*9*/] = fVar1;
	(uParam0[5 /*9*/])->f_1 = fVar0;
	(uParam0[5 /*9*/])->f_2 = 0.012f;
	(uParam0[5 /*9*/])->f_3 = 0.023f;
	(uParam0[5 /*9*/])->f_4 = 0;
	(uParam0[5 /*9*/])->f_5 = 0;
	(uParam0[5 /*9*/])->f_6 = 0;
	(uParam0[5 /*9*/])->f_7 = 250;
	(*uParam0)[6 /*9*/] = fVar1;
	(uParam0[6 /*9*/])->f_1 = fVar0;
	(uParam0[6 /*9*/])->f_2 = 0.012f;
	(uParam0[6 /*9*/])->f_3 = 0.023f;
	(uParam0[6 /*9*/])->f_4 = 0;
	(uParam0[6 /*9*/])->f_5 = 0;
	(uParam0[6 /*9*/])->f_6 = 0;
	(uParam0[6 /*9*/])->f_7 = 250;
	(*uParam0)[7 /*9*/] = fVar1;
	(uParam0[7 /*9*/])->f_1 = fVar0;
	(uParam0[7 /*9*/])->f_2 = 0.012f;
	(uParam0[7 /*9*/])->f_3 = 0.023f;
	(uParam0[7 /*9*/])->f_4 = 0;
	(uParam0[7 /*9*/])->f_5 = 0;
	(uParam0[7 /*9*/])->f_6 = 0;
	(uParam0[7 /*9*/])->f_7 = 250;
}

float func_81()//Position - 0x3F8B
{
	float fVar0;
	
	fVar0 = ((((((((0.919f - 0.081f) + 0.004f) - 0.006f) + 0.05f) - 0.001f) - 0.005f) + 0.065f) - 0.0005f);
	return fVar0;
}

float func_82()//Position - 0x3FCC
{
	float fVar0;
	
	fVar0 = ((((0.013f - 0.002f) + 0.001f) + 0.001f) - 0.001f);
	return fVar0;
}

void func_83(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, bool bParam6, char* sParam7, int iParam8, float fParam9, int iParam10, int iParam11, int iParam12, bool bParam13, int iParam14, bool bParam15, int iParam16, int iParam17)//Position - 0x3FF5
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (func_13(6, iParam0))
	{
		func_84(iParam0, &uVar0, &uVar1, &uVar2, &uVar3, iParam1, 1, sParam2, iParam3, iParam4, iParam5, bParam6, sParam7, iParam8, fParam9, iParam10, iParam11, iParam12, bParam13, iParam14, bParam15, iParam16, iParam17, 0);
	}
}

void func_84(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, bool bParam11, char* sParam12, int iParam13, float fParam14, int iParam15, int iParam16, int iParam17, bool bParam18, int iParam19, bool bParam20, int iParam21, int iParam22, bool bParam23)//Position - 0x403C
{
	struct<8> Var0;
	struct<9> Var1;
	struct<9> Var2;
	struct<9> Var3;
	bool bVar4;
	int iVar5;
	struct<9> Var6;
	bool bVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	struct<8> Var12;
	
	Global_1446E8++;
	if (func_57())
	{
		func_56(&Var0, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
		func_56(&Var1, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
		func_56(&Var2, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
		func_56(&Var3, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
		if (func_45())
		{
			if (bParam23)
			{
				func_101(uParam1, 0);
			}
			else if (bParam11)
			{
				func_76(uParam1, 3);
			}
			else
			{
				func_101(uParam1, 0);
			}
		}
		else if (bParam23)
		{
			func_55(uParam1, 0);
		}
		else if (bParam11)
		{
			func_76(uParam1, 3);
		}
		else
		{
			func_55(uParam1, 0);
		}
		if (Global_2528B3 && bParam11)
		{
			if (func_45())
			{
				func_101(uParam1, 0);
			}
			else
			{
				func_55(uParam1, 0);
			}
		}
		if (iParam5 < 1000000)
		{
			if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 && (iParam5 > 999 || iParam19 > 999))
			{
				func_100(uParam2, 0, 0);
			}
			else
			{
				func_99(uParam2, 0, 0);
			}
		}
		else if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 && (MISC::ARE_STRINGS_EQUAL("HUD_CASH", sParam12) || MISC::ARE_STRINGS_EQUAL("HUD_CASH_NEG", sParam12)))
		{
			func_98(uParam2, 0, 0);
		}
		else
		{
			func_100(uParam2, 0, 0);
		}
		func_53(uParam1);
		func_97(uParam2);
		func_52(6, iParam0);
		if (Global_1446E8 == 1)
		{
			func_51(iParam6);
		}
		func_94(uParam2, uParam3, uParam4, iParam6, uParam1);
		if (iParam22 == 1)
		{
			iParam17 = 2;
			iParam8 = 2;
		}
		func_93(uParam2, iParam8);
		if (iParam9 == 0)
		{
			func_92(iParam0);
		}
		if (iParam16 == 0)
		{
			func_91(iParam0);
		}
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", 0);
		if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
		{
			iVar5 = func_73();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar5);
			if (func_72(iParam9, &(Global_1446E8.f_46[iParam0 /*2*/]), &(Global_1446E8.f_57[iParam0 /*2*/])))
			{
				bVar4 = true;
			}
			else
			{
				bVar4 = false;
			}
			Var3 = *uParam3;
			Var3.f_1 = uParam3->f_1;
			Var0 = *uParam3;
			Var0.f_1 = (uParam3->f_1 + 0.001f);
			if (iParam22 == 1)
			{
				Var3 = (Var3 + 0.079f);
				Var3.f_1 = (Var3.f_1 + 0.002f);
				Var3.f_2 = (Var3.f_2 + 0.157f);
				Var3.f_3 = (Var3.f_3 + 0.049f);
				Var3.f_4 += 255;
				Var3.f_5 += 255;
				Var3.f_6 += 255;
				Var3.f_7 = 140;
			}
			else if (iParam5 < 1000000)
			{
				Var3 = (Var3 + 0.079f);
				Var3.f_1 = (Var3.f_1 + 0.008f);
				Var3.f_2 = (Var3.f_2 + 0.157f);
				Var3.f_3 = (Var3.f_3 + 0.036f);
				Var3.f_4 += 255;
				Var3.f_5 += 255;
				Var3.f_6 += 255;
				Var3.f_7 = 140;
			}
			else
			{
				Var3 = (Var3 + 0.079f);
				Var3.f_1 = (Var3.f_1 + 0.01f);
				Var3.f_2 = (Var3.f_2 + 0.157f);
				Var3.f_3 = (Var3.f_3 + 0.033f);
				Var3.f_4 += 255;
				Var3.f_5 += 255;
				Var3.f_6 += 255;
				Var3.f_7 = 140;
			}
			if (func_45())
			{
				Var3 = (Var3 + -0.025f);
				Var3.f_2 = (Var3.f_2 + 0.05f);
			}
			Global_1446E8.f_E46 = (Global_1446E8.f_E46 + Var3.f_3);
			if (iParam16 > 0)
			{
				Var6 = { Var3 };
				if (func_166(&(Global_1446E8.f_2D8[iParam0 /*2*/]), 2000, 0) == 0)
				{
					if (func_70(Global_1446E8.f_2D8[iParam0 /*2*/], 1250, 0))
					{
						Global_1446E8.f_2E9[iParam0] = (Global_1446E8.f_2E9[iParam0] - 17);
					}
					Var6.f_7 = Global_1446E8.f_2E9[iParam0];
					if (iParam15 == 2)
					{
						func_69(&Var6, 6);
					}
					else
					{
						func_69(&Var6, iParam8);
					}
					func_37("TimerBars", "ALL_WHITE_bg", &Var6, 1, 0, iVar5, 0);
				}
			}
			else
			{
				Global_1446E8.f_2E9[iParam0] = 255;
				func_68(&(Global_1446E8.f_2D8[iParam0 /*2*/]), 0, 0);
			}
			if (iParam22 == 1)
			{
				func_37("TimerBars", "ALL_WHITE_bg", &Var3, 1, 0, iVar5, 0);
			}
			else
			{
				func_37("TimerBars", "ALL_BLACK_bg", &Var3, 1, 0, iVar5, 0);
			}
			iVar5 = func_73();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar5);
			func_67(uParam1, iParam17);
			bVar7 = true;
			if (Global_2528B3)
			{
				bVar7 = false;
			}
			func_36(uParam1, 0);
			if (func_45())
			{
				if (bParam11)
				{
					if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9)
					{
						uParam3->f_1 = (uParam3->f_1 + -0.012f);
						uParam4->f_1 = (uParam4->f_1 + -0.004f);
					}
					else
					{
						uParam3->f_1 = (uParam3->f_1 + -0.004f);
					}
				}
				else if (func_45())
				{
					if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9)
					{
						uParam3->f_1 = (uParam3->f_1 + -0.012f);
						uParam4->f_1 = (uParam4->f_1 + -0.004f);
					}
					else
					{
						uParam3->f_1 = (uParam3->f_1 + -0.008f);
					}
				}
			}
			else if (bParam23)
			{
				uParam3->f_1 = (uParam3->f_1 + 0f);
			}
			else if (bParam11 && Global_2528B3 == 0)
			{
				uParam3->f_1 = (uParam3->f_1 + (-0.002f - 0.004f));
			}
			if (iParam22 == 1)
			{
				uParam3->f_1 = (uParam3->f_1 - 0.007f);
				uParam4->f_1 = (uParam4->f_1 - 0.007f);
			}
			if (iParam21 == 2)
			{
				sParam7 = "HUD_ROCKET";
			}
			else if (iParam21 == 3)
			{
				sParam7 = "HUD_BOOSTS";
			}
			else if (iParam21 == 1)
			{
				sParam7 = "HUD_SPIKES";
			}
			if (bParam11 == 1)
			{
				if (bVar7)
				{
					func_66(uParam3, uParam1, sParam7, "", iParam17, 2);
				}
				else
				{
					func_66(uParam3, uParam1, sParam7, "", iParam8, 2);
				}
			}
			else if (iParam10 == -1)
			{
				func_64(uParam3, uParam1, sParam7, 0, 1);
			}
			else
			{
				func_29(uParam3, uParam1, sParam7, iParam10, 2);
			}
			if (iParam22 == 1)
			{
				Var1 = uParam2->f_9;
				Var1.f_1 = (uParam4->f_1 - 0.0175f);
				Var2 = uParam2->f_9;
				Var2.f_1 = (uParam4->f_1 + 0.0175f);
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPArrow", 0);
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPArrow"))
				{
					Var1 = (Var1 + 0.0095f);
					Var1 = (Var1 - 0.015f);
					Var1.f_1 = (Var1.f_1 + 0.019f);
					Var1.f_2 = (Var1.f_2 + 0.01f);
					Var1.f_3 = (Var1.f_3 + 0.01f);
					Var1.f_4 = Var1.f_4;
					Var1.f_5 = Var1.f_5;
					Var1.f_6 = Var1.f_6;
					Var1.f_7 = (Var1.f_7 - 50);
					Var1.f_8 = -90f;
					func_37("MPArrow", "MP_ArrowXLarge", &Var1, 1, 0, iVar5, 0);
					Var2 = (Var2 + 0.0095f);
					Var2 = (Var2 - 0.015f);
					Var2.f_1 = (Var2.f_1 + 0.019f);
					Var2.f_2 = (Var2.f_2 + 0.01f);
					Var2.f_3 = (Var2.f_3 + 0.01f);
					Var2.f_4 = Var2.f_4;
					Var2.f_5 = Var2.f_5;
					Var2.f_6 = Var2.f_6;
					Var2.f_7 = (Var2.f_7 - 50);
					Var2.f_8 = 90f;
					func_37("MPArrow", "MP_ArrowXLarge", &Var2, 1, 0, iVar5, 0);
				}
			}
			if (bParam18)
			{
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", 0);
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu"))
				{
					fVar8 = 0f;
					if (bParam11 == 1)
					{
						HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH("STRING");
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam7);
						fVar9 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
					}
					else
					{
						HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(sParam7);
						fVar9 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
					}
					if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 && bParam11 == 0)
					{
						fVar10 = (0.153f - 0.072f);
						fVar11 = -0.457f;
					}
					else if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 10 && bParam11 == 0)
					{
						fVar10 = ((0.153f - 0.01f) - 0.06f);
						fVar11 = -0.457f;
					}
					else if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 && bParam11 == 0)
					{
						fVar10 = ((0.153f - 0.012f) - 0.06f);
						fVar11 = -0.457f;
					}
					else
					{
						fVar10 = ((0.153f - 0.037f) - 0.036f);
						fVar11 = (-0.457f + 0.194f);
					}
					fVar10 = (fVar10 + 0.03f);
					if (Global_1446E8.f_2FC)
					{
						fVar10 = (fVar10 + -0.03f);
					}
					if (MISC::IS_PC_VERSION() && !GRAPHICS::GET_IS_WIDESCREEN())
					{
						fVar10 = (fVar10 + -0.015f);
					}
					if (Global_1446E8.f_2FD && Global_1446E8.f_2FC == 0)
					{
						fVar10 = (fVar10 + (-0.015f - 0.003f));
					}
					fVar8 = ((fVar11 * fVar9) + fVar10);
					Var0 = (Var0 + fVar8);
					Var0 = (Var0 - 0.015f);
					Var0.f_1 = (Var0.f_1 + 0.008f);
					Var0.f_2 = (Var0.f_2 + 0.022f);
					Var0.f_3 = (Var0.f_3 + 0.04f);
					Var0.f_4 += 194;
					Var0.f_5 += 80;
					Var0.f_6 += 80;
					Var0.f_7 = (Var0.f_7 - 50);
					func_37("CommonMenu", "MP_AlertTriangle", &Var0, 1, 0, iVar5, 0);
				}
			}
			if (bVar4)
			{
				if (iParam21 != 0)
				{
					func_90(uParam2);
					Var12 = ((*uParam4 + 0.145f) + 0.001f);
					if (func_45())
					{
						Var12.f_1 = ((uParam4->f_1 + 0.019f) - 0.006f);
					}
					else
					{
						Var12.f_1 = (uParam4->f_1 + 0.019f);
					}
					Var12.f_2 = (0.016f + 0.003f);
					Var12.f_3 = (0.032f + 0.004f);
					Var12.f_7 = 255;
					func_69(&Var12, 1);
					if (iParam21 == 4)
					{
						Var12.f_3 = (Var12.f_3 + -0.009f);
						Var12.f_2 = (Var12.f_2 + -0.002f);
						if (func_45())
						{
							Var12.f_1 = (Var12.f_1 + -0.002f);
						}
						else
						{
							Var12.f_1 = (Var12.f_1 + -0.003f);
						}
						GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPRPSymbol", 0);
						if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPRPSymbol"))
						{
							func_37("MPRPSymbol", "RP", &Var12, 1, 0, 4, 0);
						}
					}
					else if (iParam21 == 2)
					{
						GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", 0);
						if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
						{
							func_37("TimerBars", "Rockets", &Var12, 1, 0, 4, 0);
						}
					}
					else if (iParam21 == 1)
					{
						GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", 0);
						if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
						{
							func_37("TimerBars", "Spikes", &Var12, 1, 0, 4, 0);
						}
					}
					else if (iParam21 == 3)
					{
						GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", 0);
						if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
						{
							func_37("TimerBars", "Boost", &Var12, 1, 0, 4, 0);
						}
					}
				}
				func_36(uParam2, 0);
				iVar5 = func_73();
				GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar5);
				if (iParam21 == 0 || iParam21 == 4)
				{
					if (bParam20)
					{
						func_66(uParam4, uParam2, "???", "", 1, 2);
					}
					else if (iParam21 == 4)
					{
						if (iParam13 == 0)
						{
							func_29(uParam4, uParam2, "HUD_KSMULTI", iParam5, 2);
						}
						else
						{
							func_88(uParam4, uParam2, "HUD_KSMULTI", fParam14, Global_252BF3, 2);
						}
					}
					else if (func_35(sParam12))
					{
						if (iParam19 == 0)
						{
							if (iParam13 == 0)
							{
								func_29(uParam4, uParam2, "NUMBER", iParam5, 2);
							}
							else
							{
								func_88(uParam4, uParam2, "NUMBER", fParam14, Global_252BF3, 2);
							}
						}
						else
						{
							func_86(uParam4, uParam2, "TIMER_DASHES", iParam5, iParam19, 2, 0);
						}
					}
					else if (MISC::ARE_STRINGS_EQUAL("HUD_CASH", sParam12) || MISC::ARE_STRINGS_EQUAL("HUD_CASH_S", sParam12))
					{
						sParam12 = "HUD_CASH_S";
						*uParam2 = 5;
						func_36(uParam2, 0);
						func_85(uParam4, uParam2, sParam12, iParam5, 2);
					}
					else if (MISC::ARE_STRINGS_EQUAL("HUD_CASH_NEG", sParam12) || MISC::ARE_STRINGS_EQUAL("HUD_CASH_NEG_S", sParam12))
					{
						*uParam2 = 5;
						func_36(uParam2, 0);
						sParam12 = "HUD_CASH_NEG_S";
						func_85(uParam4, uParam2, sParam12, iParam5, 2);
					}
					else if (iParam13 == 0)
					{
						func_29(uParam4, uParam2, sParam12, iParam5, 2);
					}
					else
					{
						func_88(uParam4, uParam2, sParam12, fParam14, Global_252BF3, 2);
					}
				}
			}
			func_28();
		}
	}
}

void func_85(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x4BBF
{
	char* sVar0;
	
	sVar0 = sParam2;
	if (!func_35(sVar0))
	{
		if (func_33())
		{
			func_36(uParam1, 0);
			HUD::SET_TEXT_JUSTIFICATION(iParam4);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sVar0);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
			HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam3, 1);
			HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_32(*uParam0), func_31(uParam0->f_1), 0);
		}
	}
}

void func_86(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x4C10
{
	char* sVar0;
	
	sVar0 = sParam2;
	if (!func_35(sVar0))
	{
		if (func_33())
		{
			func_36(uParam1, 0);
			HUD::SET_TEXT_CENTRE(iParam6);
			HUD::SET_TEXT_JUSTIFICATION(iParam5);
			func_87(func_32(*uParam0), func_31(uParam0->f_1), sVar0, iParam3, iParam4);
		}
	}
}

void func_87(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x4C59
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(uParam3);
	HUD::ADD_TEXT_COMPONENT_INTEGER(uParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(uParam0, uParam1, 0);
}

void func_88(var uParam0, var uParam1, char* sParam2, var uParam3, var uParam4, int iParam5)//Position - 0x4C7C
{
	if (!func_35(sParam2))
	{
		if (func_33())
		{
			func_36(uParam1, 0);
			HUD::SET_TEXT_JUSTIFICATION(iParam5);
			func_89(func_32(*uParam0), func_31(uParam0->f_1), sParam2, uParam3, uParam4);
		}
	}
}

void func_89(var uParam0, var uParam1, char* sParam2, var uParam3, var uParam4)//Position - 0x4CBB
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_FLOAT(uParam3, uParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(uParam0, uParam1, 0);
}

void func_90(var uParam0)//Position - 0x4CDA
{
	uParam0->f_9 = (((((((0.95f - 0.047f) + 0.001f) + 0.047f) - 0.002f) - 0.013f) - 0.002f) - 0.001f);
}

void func_91(int iParam0)//Position - 0x4D15
{
	func_4(&(Global_1446E8.f_156[iParam0 /*2*/]));
	func_4(&(Global_1446E8.f_167[iParam0 /*2*/]));
}

void func_92(int iParam0)//Position - 0x4D3B
{
	func_4(&(Global_1446E8.f_46[iParam0 /*2*/]));
	func_4(&(Global_1446E8.f_57[iParam0 /*2*/]));
}

void func_93(var uParam0, int iParam1)//Position - 0x4D5F
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	HUD::GET_HUD_COLOUR(iParam1, &uVar0, &uVar1, &uVar2, &uVar3);
	uParam0->f_3 = uVar0;
	uParam0->f_4 = uVar1;
	uParam0->f_5 = uVar2;
	uParam0->f_6 = uVar3;
}

void func_94(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4)//Position - 0x4D8D
{
	float fVar0;
	
	fVar0 = func_96(uParam0);
	*uParam1 = 0.795f;
	uParam1->f_1 = func_49(iParam3);
	uParam1->f_1 = (uParam1->f_1 + func_48(uParam4));
	*uParam2 = 0.795f;
	uParam2->f_1 = (uParam1->f_1 + func_95(uParam0));
	func_47(iParam3, -fVar0);
}

float func_95(var uParam0)//Position - 0x4DDE
{
	float fVar0;
	
	switch (uParam0->f_A)
	{
		case 9:
			fVar0 = ((((((-0.01f - 0.005f) + 0.004f) - 0.0005f) - 0.002f) + 0.002f) + 0.0005f);
			break;
		
		case 10:
			fVar0 = ((((-0.025f - 0.003f) + 0.002f) - 0.006f) + 0.001f);
			break;
		
		case 11:
			fVar0 = ((((-0.047f - 0.004f) + 0.012f) + 0.001f) + 0.007f);
			break;
		
		case 12:
			fVar0 = ((-0.019f + 0.011f) + 0.004f);
			break;
		
		case 13:
			fVar0 = (-0.012f + 0.001f);
			break;
		
		case 14:
			fVar0 = ((-0.012f + 0.001f) + 0.001f);
			break;
		
		case 15:
			fVar0 = ((((-0.035f - 0.008f) + 0.006f) + 0.013f) + 0.0005f);
			break;
		
		case 16:
			fVar0 = ((((-0.01f - 0.005f) + 0.004f) - 0.001f) + 0.001f);
			break;
		
		case 17:
			fVar0 = ((((-0.01f - 0.005f) + 0.004f) + 0.005f) + 0.0007f);
			break;
		
		case 18:
			fVar0 = ((((-0.01f - 0.005f) + 0.004f) + 0.005f) + 0.003f);
			break;
		
		case 6:
			fVar0 = (((-0.01f - 0.005f) + 0.004f) + 0.005f);
			break;
		
		case 19:
			fVar0 = (((-0.01f - 0.005f) + 0.004f) + 0.005f);
			break;
	}
	if (func_45())
	{
		fVar0 = (fVar0 + 0.003f);
	}
	return fVar0;
}

float func_96(var uParam0)//Position - 0x4FB8
{
	float fVar0;
	
	switch (uParam0->f_A)
	{
		case 9:
			fVar0 = (((((((((0.035f + 0.023f) - 0.003f) + 0.001f) - 0.007f) - 0.012f) + 0.001f) + 0.0018f) + 0.0005f) - 0.0005f);
			break;
		
		case 10:
			fVar0 = (((((((0.035f + 0.023f) - 0.003f) + 0.001f) - 0.007f) + 0.003f) + 0.002f) - 0.004f);
			break;
		
		case 11:
			fVar0 = (((((0.065f + 0.009f) - 0.006f) - 0.009f) + 0.001f) - 0.009f);
			break;
		
		case 12:
			fVar0 = 0f;
			break;
		
		case 13:
			fVar0 = (0.065f + 0.009f);
			break;
		
		case 14:
			fVar0 = (((0.065f + 0.009f) - 0.015f) - 0.022f);
			break;
		
		case 15:
			fVar0 = 0f;
			break;
		
		case 16:
			fVar0 = ((((((((0.035f + 0.023f) - 0.003f) + 0.001f) - 0.007f) - 0.012f) + 0.001f) + 0.002f) + 0.0003f);
			break;
		
		case 17:
			fVar0 = ((((((0.035f + 0.023f) - 0.003f) + 0.001f) - 0.007f) - 0.012f) - 0.0005f);
			break;
		
		case 18:
			fVar0 = (((((0.035f + 0.023f) - 0.003f) + 0.001f) - 0.007f) - 0.012f);
			break;
		
		case 19:
			fVar0 = (((((0.035f + 0.023f) - 0.003f) + 0.001f) - 0.007f) - 0.012f);
			break;
	}
	return fVar0;
}

void func_97(var uParam0)//Position - 0x5199
{
	float fVar0;
	
	fVar0 = (((((0.95f - 0.047f) + 0.001f) + 0.047f) - 0.002f) + 0.001f);
	uParam0->f_9 = fVar0;
	if (Global_1446E8.f_2F6 == 0)
	{
		switch (uParam0->f_A)
		{
			case 11:
				uParam0->f_9 = (uParam0->f_9 + 0.001f);
				break;
			
			case 10:
				uParam0->f_9 = (uParam0->f_9 + 0.001f);
				break;
			
			default:
				break;
			}
	}
	if (Global_1446E8.f_2F6 == 1)
	{
		uParam0->f_9 = fVar0;
		uParam0->f_9 = (uParam0->f_9 + -0.113f);
	}
}

void func_98(var uParam0, int iParam1, int iParam2)//Position - 0x5230
{
	*uParam0 = iParam2;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = ((((((((0.469f + 0.096f) - 0.017f) + 0.022f) - 0.062f) - 0.095f) - 0.008f) - 0.012f) - 0.06f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 18;
}

void func_99(var uParam0, int iParam1, int iParam2)//Position - 0x52AD
{
	*uParam0 = iParam2;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = ((((0.469f + 0.096f) - 0.017f) + 0.022f) - 0.062f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 16;
}

void func_100(var uParam0, int iParam1, int iParam2)//Position - 0x5312
{
	*uParam0 = iParam2;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = (((((((0.469f + 0.096f) - 0.017f) + 0.022f) - 0.062f) - 0.095f) - 0.008f) - 0.012f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 17;
}

void func_101(var uParam0, int iParam1)//Position - 0x5389
{
	*uParam0 = 0;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = (0.416f + 0.089f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 23;
}

void func_102(int iParam0, var uParam1, var uParam2, char* sParam3, int iParam4, int iParam5, float fParam6, float fParam7, bool bParam8, int iParam9, var uParam10, int iParam11, int iParam12, bool bParam13, int iParam14, bool bParam15)//Position - 0x53DB
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	if (func_13(0, iParam0))
	{
		uVar2 = 4;
		func_103(iParam0, &uVar0, &uVar1, &uVar2, uParam1, uParam2, 1, sParam3, iParam4, iParam9, bParam8, iParam5, fParam6, fParam7, uParam10, iParam11, iParam12, bParam13, iParam14, bParam15);
	}
}

void func_103(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, char* sParam7, int iParam8, int iParam9, bool bParam10, int iParam11, float fParam12, float fParam13, var uParam14, int iParam15, int iParam16, bool bParam17, int iParam18, bool bParam19)//Position - 0x541D
{
	struct<9> Var0;
	bool bVar1;
	int iVar2;
	struct<9> Var3;
	
	Global_1446E8++;
	if (func_57())
	{
		if (iParam15 == 2)
		{
		}
		func_52(0, iParam0);
		if (func_45())
		{
			if (bParam17)
			{
				func_116(uParam1, 0);
			}
			else
			{
				func_77(uParam1, 0);
			}
		}
		else if (bParam19)
		{
			func_55(uParam1, 0);
		}
		else if (bParam10)
		{
			func_76(uParam1, 3);
		}
		else if (bParam17)
		{
			func_115(uParam1, 0);
		}
		else
		{
			func_55(uParam1, 0);
		}
		if (Global_1446E8 == 1)
		{
			func_51(iParam6);
		}
		func_112(uParam2, uParam3, &Var0, iParam6, fParam12, fParam13, uParam1, bParam17);
		func_53(uParam1);
		if (iParam11 == 0)
		{
			func_111(iParam0);
		}
		if (iParam16 == 0)
		{
			func_110(iParam0);
		}
		if (func_72(iParam11, &(Global_1446E8.f_F0[iParam0 /*2*/]), &(Global_1446E8.f_101[iParam0 /*2*/])))
		{
			bVar1 = true;
		}
		else
		{
			bVar1 = false;
		}
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", 0);
		if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
		{
			iVar2 = func_73();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar2);
			if (!func_71(fParam12, fParam13))
			{
				Var0 = *uParam2;
				Var0.f_1 = uParam2->f_1;
				if (bParam17)
				{
					Var0 = (Var0 + 0.079f);
					Var0.f_1 = (Var0.f_1 + 0.008f);
					Var0.f_2 = (Var0.f_2 + 0.157f);
					Var0.f_3 = (Var0.f_3 + 0.036f);
					Var0.f_4 += 255;
					Var0.f_5 += 255;
					Var0.f_6 += 255;
					Var0.f_7 = 140;
				}
				else
				{
					Var0 = (Var0 + 0.079f);
					Var0.f_1 = (Var0.f_1 + 0.012f);
					Var0.f_2 = (Var0.f_2 + 0.157f);
					Var0.f_3 = (Var0.f_3 + 0.028f);
					Var0.f_4 += 255;
					Var0.f_5 += 255;
					Var0.f_6 += 255;
					Var0.f_7 = 140;
				}
				if (func_45())
				{
					Var0 = (Var0 + -0.025f);
					Var0.f_2 = (Var0.f_2 + 0.05f);
				}
				Global_1446E8.f_E46 = (Global_1446E8.f_E46 + Var0.f_3);
				if (iParam16 > 0)
				{
					Var3 = { Var0 };
					if (func_166(&(Global_1446E8.f_222[iParam0 /*2*/]), 2000, 0) == 0)
					{
						if (func_70(Global_1446E8.f_222[iParam0 /*2*/], 1250, 0))
						{
							Global_1446E8.f_233[iParam0] = (Global_1446E8.f_233[iParam0] - 17);
						}
						Var3.f_7 = Global_1446E8.f_233[iParam0];
						func_69(&Var3, iParam8);
						func_37("TimerBars", "ALL_WHITE_bg", &Var3, 1, 0, iVar2, 0);
					}
				}
				else
				{
					Global_1446E8.f_233[iParam0] = 255;
					func_68(&(Global_1446E8.f_222[iParam0 /*2*/]), 0, 0);
				}
				func_37("TimerBars", "ALL_BLACK_bg", &Var0, 1, 0, iVar2, 0);
			}
			if (func_45())
			{
				if (bParam17)
				{
					uParam2->f_1 = (uParam2->f_1 + -0.01f);
				}
				else if (bParam10)
				{
					if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9)
					{
						uParam2->f_1 = (uParam2->f_1 + -0.009f);
					}
					else
					{
						uParam2->f_1 = (uParam2->f_1 + -0.003f);
					}
				}
				else if (bParam17 == 0)
				{
					if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9)
					{
						uParam2->f_1 = (uParam2->f_1 + -0.009f);
					}
					else
					{
						uParam2->f_1 = (uParam2->f_1 + -0.003f);
					}
				}
				else if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9)
				{
					uParam2->f_1 = (uParam2->f_1 + -0.012f);
				}
				else
				{
					uParam2->f_1 = (uParam2->f_1 + -0.008f);
				}
			}
			else if (bParam17)
			{
				uParam2->f_1 = (uParam2->f_1 + ((-0.01f + 0.0022f) + 0.001f));
			}
			else if (bParam10)
			{
				uParam2->f_1 = (uParam2->f_1 + (-0.005f + 0.001f));
				uParam2->f_1 = (uParam2->f_1 + -0.002f);
			}
			iVar2 = func_73();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar2);
			if (!func_71(fParam12, fParam13))
			{
				if (bParam19)
				{
					func_67(uParam1, iParam8);
					func_36(uParam1, 0);
					func_66(uParam2, uParam1, sParam7, "", 1, 2);
				}
				else if (bParam10 == 1)
				{
					func_67(uParam1, iParam8);
					func_36(uParam1, 0);
					func_66(uParam2, uParam1, sParam7, "", 1, 2);
				}
				else
				{
					func_36(uParam1, 0);
					if (iParam9 == -1)
					{
						func_64(uParam2, uParam1, sParam7, 0, 1);
					}
					else
					{
						func_29(uParam2, uParam1, sParam7, iParam9, 2);
					}
				}
			}
			iVar2 = func_73();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar2);
			if (bVar1)
			{
				if (bParam17)
				{
					func_109(uParam4, uParam5, uParam3, iParam8, uParam14, iVar2);
				}
				else
				{
					func_104(uParam4, uParam5, uParam3, iParam8, uParam14, iVar2, iParam18);
				}
			}
			func_28();
		}
	}
}

void func_104(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, int iParam5, int iParam6)//Position - 0x588A
{
	struct<9> Var0[2];
	float fVar1;
	
	Var0[0 /*9*/].f_1 = 0f;
	Var0[0 /*9*/].f_2 = 0.007f;
	Var0[0 /*9*/].f_3 = 0.004f;
	Var0[1 /*9*/] = 0f;
	Var0[1 /*9*/].f_2 = 0.007f;
	Var0[1 /*9*/].f_3 = 0.004f;
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", 0);
	if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
	{
		func_108(uParam2[0 /*9*/], &(Var0[0 /*9*/]));
		func_108(uParam2[1 /*9*/], &(Var0[1 /*9*/]));
		*(uParam2[3 /*9*/]) = { *(uParam2[0 /*9*/]) };
		func_69(uParam2[1 /*9*/], iParam3);
		func_69(uParam2[3 /*9*/], iParam3);
		fVar1 = ((SYSTEM::TO_FLOAT(uParam0) / SYSTEM::TO_FLOAT(uParam1)) * 100f);
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
		(uParam2[3 /*9*/])->f_7 = 51;
		func_37("TimerBars", "DamageBarFill_128", uParam2[3 /*9*/], 0, 0, iParam5, 0);
		func_69(uParam2[3 /*9*/], iParam3);
		(uParam2[3 /*9*/])->f_7 = 51;
		func_37("TimerBars", "DamageBarFill_128", uParam2[3 /*9*/], 0, 0, iParam5, 0);
		(uParam2[3 /*9*/])->f_7 = 255;
		func_105(*(uParam2[0 /*9*/]), fVar1, uParam2[1 /*9*/], 1, 1, uParam4);
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
		func_37("TimerBars", "DamageBarFill_128", uParam2[1 /*9*/], 0, 0, iParam5, 0);
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
		if (iParam6 > 0 && fVar1 >= IntToFloat(iParam6))
		{
			func_69(uParam2[1 /*9*/], 6);
			func_105(*(uParam2[0 /*9*/]), SYSTEM::TO_FLOAT(iParam6), uParam2[1 /*9*/], 1, 1, uParam4);
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
			func_37("TimerBars", "DamageBarFill_128", uParam2[1 /*9*/], 0, 0, iParam5, 0);
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
		}
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
	}
}

void func_105(struct<9> Param0, float fParam1, var uParam2, int iParam3, int iParam4, var uParam5)//Position - 0x5A27
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
	
	fVar0 = Param0.f_2;
	fVar1 = 0f;
	fVar2 = func_107(Param0);
	fVar3 = fParam1;
	if (fParam1 < 0f)
	{
		fVar3 = 0f;
	}
	if (fParam1 > 100f)
	{
		fVar3 = 100f;
	}
	if (fParam1 > 95f && fParam1 < 100f)
	{
		fVar3 = 96f;
	}
	if (iParam4 == 0)
	{
		fVar4 = ((fVar1 - fVar0) / 100f);
		fVar5 = fVar3;
		fVar6 = fVar0;
		fVar7 = ((fVar4 * fVar5) + fVar6);
		fVar2 = Param0;
		fVar8 = func_106(Param0);
		fVar9 = (fVar8 - (fVar7 / 2f));
	}
	else
	{
		fVar4 = ((fVar0 - fVar1) / 100f);
		fVar5 = fVar3;
		fVar6 = 0f;
		fVar7 = ((fVar4 * fVar5) + fVar6);
		if (fParam1 >= 100f)
		{
			fVar7 = Param0.f_2;
		}
		fVar8 = Param0;
		fVar4 = ((fVar8 - fVar2) / 100f);
		fVar5 = fVar3;
		fVar6 = fVar2;
		fVar9 = ((fVar4 * fVar5) + fVar6);
	}
	*uParam2 = fVar9;
	uParam2->f_1 = Param0.f_1;
	uParam2->f_2 = fVar7;
	if (iParam3 == 1)
	{
		uParam2->f_3 = Param0.f_3;
	}
	uParam2->f_8 = Param0.f_8;
}

float func_106(struct<3> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x5B3D
{
	float fVar0;
	float fVar1;
	
	fVar0 = (Param0.f_2 / 2f);
	fVar1 = Param0.x;
	fVar1 = (fVar1 + fVar0);
	fVar1 = (fVar1 - 0.002f);
	return fVar1;
}

float func_107(struct<3> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x5B64
{
	float fVar0;
	float fVar1;
	
	fVar0 = (Param0.f_2 / 2f);
	fVar1 = Param0.x;
	fVar1 = (fVar1 - fVar0);
	return fVar1;
}

void func_108(var uParam0, var uParam1)//Position - 0x5B81
{
	*uParam0 = (*uParam0 + *uParam1);
	uParam0->f_1 = (uParam0->f_1 + uParam1->f_1);
	uParam0->f_2 = (uParam0->f_2 + uParam1->f_2);
	uParam0->f_3 = (uParam0->f_3 + uParam1->f_3);
	uParam0->f_4 = (uParam0->f_4 + uParam1->f_4);
	uParam0->f_5 = (uParam0->f_5 + uParam1->f_5);
	uParam0->f_6 = (uParam0->f_6 + uParam1->f_6);
	uParam0->f_7 = (uParam0->f_7 + uParam1->f_7);
}

void func_109(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, int iParam5)//Position - 0x5BEE
{
	struct<9> Var0[2];
	float fVar1;
	
	Var0[0 /*9*/].f_1 = -0.004f;
	Var0[0 /*9*/].f_2 = 0.007f;
	Var0[0 /*9*/].f_3 = 0.016f;
	Var0[1 /*9*/].f_2 = 0.007f;
	Var0[1 /*9*/].f_3 = 0.016f;
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", 0);
	if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
	{
		func_108(uParam2[0 /*9*/], &(Var0[0 /*9*/]));
		func_108(uParam2[1 /*9*/], &(Var0[1 /*9*/]));
		*(uParam2[3 /*9*/]) = { *(uParam2[0 /*9*/]) };
		func_69(uParam2[1 /*9*/], iParam3);
		func_69(uParam2[3 /*9*/], iParam3);
		fVar1 = ((SYSTEM::TO_FLOAT(uParam0) / SYSTEM::TO_FLOAT(uParam1)) * 100f);
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
		(uParam2[3 /*9*/])->f_7 = 51;
		func_37("TimerBars", "DamageBarFill_128", uParam2[3 /*9*/], 0, 0, iParam5, 0);
		func_69(uParam2[3 /*9*/], iParam3);
		(uParam2[3 /*9*/])->f_7 = 51;
		func_37("TimerBars", "DamageBarFill_128", uParam2[3 /*9*/], 0, 0, iParam5, 0);
		(uParam2[3 /*9*/])->f_7 = 255;
		func_105(*(uParam2[0 /*9*/]), fVar1, uParam2[1 /*9*/], 1, 1, uParam4);
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
		func_37("TimerBars", "DamageBarFill_128", uParam2[1 /*9*/], 0, 0, iParam5, 0);
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
	}
}

void func_110(int iParam0)//Position - 0x5D32
{
	func_4(&(Global_1446E8.f_200[iParam0 /*2*/]));
	func_4(&(Global_1446E8.f_211[iParam0 /*2*/]));
}

void func_111(int iParam0)//Position - 0x5D58
{
	func_4(&(Global_1446E8.f_F0[iParam0 /*2*/]));
	func_4(&(Global_1446E8.f_101[iParam0 /*2*/]));
	Global_1446E8.f_301.f_A5[iParam0] = -1;
}

void func_112(var uParam0, var uParam1, var uParam2, int iParam3, float fParam4, float fParam5, var uParam6, bool bParam7)//Position - 0x5D8B
{
	float fVar0;
	
	fVar0 = func_50(bParam7);
	*uParam0 = 0.795f;
	uParam0->f_1 = func_49(iParam3);
	uParam0->f_1 = (uParam0->f_1 + func_48(uParam6));
	func_113(uParam1, iParam3, fParam4, fParam5);
	if (!func_71(fParam4, fParam5))
	{
		func_47(iParam3, -fVar0);
	}
	func_56(uParam2, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
}

void func_113(var uParam0, int iParam1, float fParam2, float fParam3)//Position - 0x5DED
{
	float fVar0;
	float fVar1;
	
	if (!func_71(fParam2, fParam3))
	{
		fVar0 = (func_82() + func_49(iParam1));
		fVar1 = func_114();
	}
	else
	{
		fVar0 = fParam3;
		fVar1 = fParam2;
	}
	(*uParam0)[0 /*9*/] = fVar1;
	(uParam0[0 /*9*/])->f_1 = fVar0;
	(uParam0[0 /*9*/])->f_2 = 0.062f;
	(uParam0[0 /*9*/])->f_3 = 0.016f;
	(uParam0[0 /*9*/])->f_4 = 255;
	(uParam0[0 /*9*/])->f_5 = 255;
	(uParam0[0 /*9*/])->f_6 = 0;
	(uParam0[0 /*9*/])->f_7 = 250;
	(*uParam0)[1 /*9*/] = fVar1;
	(uParam0[1 /*9*/])->f_1 = fVar0;
	(uParam0[1 /*9*/])->f_2 = 0.069f;
	(uParam0[1 /*9*/])->f_3 = 0.011f;
	(uParam0[1 /*9*/])->f_4 = 255;
	(uParam0[1 /*9*/])->f_5 = 255;
	(uParam0[1 /*9*/])->f_6 = 0;
	(uParam0[1 /*9*/])->f_7 = 250;
	(*uParam0)[2 /*9*/] = fVar1;
	(uParam0[2 /*9*/])->f_1 = fVar0;
	(uParam0[2 /*9*/])->f_2 = 0.069f;
	(uParam0[2 /*9*/])->f_3 = 0.009f;
	(uParam0[2 /*9*/])->f_4 = 0;
	(uParam0[2 /*9*/])->f_5 = 0;
	(uParam0[2 /*9*/])->f_6 = 0;
	(uParam0[2 /*9*/])->f_7 = 120;
	(*uParam0)[3 /*9*/] = fVar1;
	(uParam0[3 /*9*/])->f_1 = fVar0;
	(uParam0[3 /*9*/])->f_2 = 0.069f;
	(uParam0[3 /*9*/])->f_3 = 0.008f;
	(uParam0[3 /*9*/])->f_4 = 0;
	(uParam0[3 /*9*/])->f_5 = 0;
	(uParam0[3 /*9*/])->f_6 = 0;
	(uParam0[3 /*9*/])->f_7 = 90;
}

float func_114()//Position - 0x5F47
{
	float fVar0;
	
	fVar0 = (((((0.919f - 0.081f) + 0.028f) + 0.05f) - 0.001f) - 0.002f);
	return fVar0;
}

void func_115(var uParam0, int iParam1)//Position - 0x5F76
{
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = ((0.508f - 0.03f) - 0.106f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 21;
}

void func_116(var uParam0, int iParam1)//Position - 0x5FCE
{
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = ((0.508f - 0.03f) + 0.086f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 20;
}

void func_117(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, bool bParam6, int iParam7, float fParam8, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20)//Position - 0x6026
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	if (func_13(1, iParam0))
	{
		uVar2 = 11;
		func_118(iParam0, &uVar0, &uVar1, &uVar2, &uVar5, &uVar3, &uVar4, iParam1, iParam2, 1, sParam3, iParam4, iParam5, bParam6, iParam7, fParam8, fParam9, iParam10, iParam11, 1, iParam12, iParam13, iParam14, iParam15, iParam16, iParam17, iParam18, iParam19, iParam20);
	}
}

void func_118(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, char* sParam10, int iParam11, int iParam12, bool bParam13, int iParam14, float fParam15, float fParam16, int iParam17, int iParam18, bool bParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28)//Position - 0x607A
{
	struct<9> Var0;
	struct<2> Var1;
	struct<3> Var2;
	bool bVar3;
	int iVar4;
	int iVar5;
	struct<9> Var6;
	
	Global_1446E8++;
	if (func_57())
	{
		if (iParam17 == 2)
		{
		}
		func_52(1, iParam0);
		if (func_45())
		{
			func_77(uParam1, 0);
		}
		else if (bParam13)
		{
			func_76(uParam1, 3);
		}
		else
		{
			func_55(uParam1, 0);
		}
		func_55(&Var2, 0);
		Var2.f_2 = (Var2.f_2 + (0.166f + 0.095f));
		if (Global_1446E8 == 1)
		{
			func_51(iParam9);
		}
		func_126(uParam5, 0, 0);
		func_97(uParam5);
		func_36(uParam5, 0);
		iVar4 = 0;
		if (iParam20 > 0)
		{
			iVar4 = 1;
		}
		func_124(iParam8, uParam2, uParam3, &Var0, uParam6, uParam5, uParam4, iParam9, fParam15, fParam16, uParam1, iVar4);
		Var1 = *uParam2;
		Var1.f_1 = uParam2->f_1;
		Var1.f_1 = (Var1.f_1 + (-0.006f - 0.007f));
		func_53(uParam1);
		func_123(&Var2);
		if (iParam14 == 0)
		{
			func_122(iParam0);
		}
		if (iParam18 == 0)
		{
			func_121(iParam0);
		}
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", 0);
		if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
		{
			iVar5 = func_73();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar5);
			if (func_72(iParam14, &(Global_1446E8.f_CE[iParam0 /*2*/]), &(Global_1446E8.f_DF[iParam0 /*2*/])))
			{
				bVar3 = true;
			}
			else
			{
				bVar3 = false;
			}
			if (!func_71(fParam15, fParam16))
			{
				Var0 = *uParam2;
				Var0.f_1 = uParam2->f_1;
				if (iParam8 < 9 && iParam20 == 0)
				{
					Var0 = (Var0 + 0.079f);
					Var0.f_1 = (Var0.f_1 + 0.012f);
					Var0.f_2 = (Var0.f_2 + 0.157f);
					Var0.f_3 = (Var0.f_3 + 0.028f);
					Var0.f_4 += 255;
					Var0.f_5 += 255;
					Var0.f_6 += 255;
					Var0.f_7 = 140;
				}
				else
				{
					Var0 = (Var0 + 0.079f);
					Var0.f_1 = (Var0.f_1 + 0.008f);
					Var0.f_2 = (Var0.f_2 + 0.157f);
					Var0.f_3 = (Var0.f_3 + 0.036f);
					Var0.f_4 += 255;
					Var0.f_5 += 255;
					Var0.f_6 += 255;
					Var0.f_7 = 140;
				}
				if (func_45())
				{
					Var0 = (Var0 + -0.025f);
					Var0.f_2 = (Var0.f_2 + 0.05f);
				}
				Global_1446E8.f_E46 = (Global_1446E8.f_E46 + Var0.f_3);
				if ((iParam7 == iParam8 && iParam7 > 0) || iParam18 > 0)
				{
					Var6 = { Var0 };
					if (func_166(&(Global_1446E8.f_2BE[iParam0 /*2*/]), 2000, 0) == 0)
					{
						if (func_70(Global_1446E8.f_2BE[iParam0 /*2*/], 1250, 0))
						{
							Global_1446E8.f_2CF[iParam0] = (Global_1446E8.f_2CF[iParam0] - 17);
						}
						Var6.f_7 = Global_1446E8.f_2CF[iParam0];
						func_69(&Var6, iParam11);
						func_37("TimerBars", "ALL_WHITE_bg", &Var6, 1, 0, iVar5, 0);
					}
				}
				else
				{
					Global_1446E8.f_2CF[iParam0] = 255;
					func_68(&(Global_1446E8.f_2BE[iParam0 /*2*/]), 0, 0);
				}
				func_37("TimerBars", "ALL_BLACK_bg", &Var0, 1, 0, iVar5, 0);
			}
			if (bParam13)
			{
				if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9)
				{
					uParam2->f_1 = (uParam2->f_1 + -0.009f);
				}
				else
				{
					uParam2->f_1 = (uParam2->f_1 + -0.003f);
					if (func_45() == 0)
					{
						uParam2->f_1 = (uParam2->f_1 + -0.002f);
					}
				}
			}
			else if (func_45())
			{
				if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9)
				{
					uParam2->f_1 = (uParam2->f_1 + -0.009f);
				}
				else
				{
					uParam2->f_1 = (uParam2->f_1 + -0.003f);
				}
			}
			iVar5 = func_73();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar5);
			if (!func_71(fParam15, fParam16))
			{
				func_36(uParam1, 0);
				if (bParam13 == 1)
				{
					func_66(uParam2, uParam1, sParam10, "", 1, 2);
				}
				else if (iParam12 == -1)
				{
					func_64(uParam2, uParam1, sParam10, 0, 1);
				}
				else
				{
					func_29(uParam2, uParam1, sParam10, iParam12, 2);
				}
			}
			if (iParam20 > 0)
			{
				func_29(&Var1, &Var2, "HUD_MULTSMAL", iParam20, 2);
			}
			if (bVar3)
			{
				func_119(iParam7, iParam8, uParam3, uParam5, uParam6, iParam11, iVar5, bParam19, iParam21, iParam22, iParam23, iParam24, iParam25, iParam26, iParam27, iParam28);
			}
			func_28();
		}
	}
}

void func_119(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)//Position - 0x6497
{
	float fVar0;
	int iVar1;
	char* sVar2;
	
	if (iParam1 < 9)
	{
		fVar0 = -0.0094f;
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", 0);
		if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
		{
			iVar1 = 0;
			while (iVar1 <= (iParam1 - 1))
			{
				(*uParam2)[iVar1 /*9*/] = ((*uParam2)[iVar1 /*9*/] + (fVar0 * IntToFloat(iVar1)));
				if ((iParam1 - iVar1) > iParam0)
				{
					func_69(uParam2[iVar1 /*9*/], iParam5);
					(uParam2[iVar1 /*9*/])->f_7 = 51;
					func_37("TimerBars", "Circle_checkpoints_Outline", uParam2[iVar1 /*9*/], 0, 0, iParam6, 0);
				}
				else
				{
					func_69(uParam2[iVar1 /*9*/], iParam5);
					func_37("TimerBars", "Circle_checkpoints", uParam2[iVar1 /*9*/], 0, 0, iParam6, 0);
					if (func_61(iVar1, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, iParam15))
					{
						func_69(uParam2[iVar1 /*9*/], 2);
						func_37("Cross", "Circle_checkpoints_Cross", uParam2[iVar1 /*9*/], 0, 0, iParam6, 0);
					}
				}
				iVar1++;
			}
		}
	}
	else if (iParam5 == 1)
	{
		func_86(uParam4, uParam3, "TIMER_DASHES", iParam0, iParam1, 2, 0);
	}
	else
	{
		func_120(uParam3);
		if (bParam7)
		{
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", 0);
			if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
			{
				(*uParam2)[0 /*9*/] = ((*uParam2)[0 /*9*/] + (0.058f - 0.06f));
				(uParam2[0 /*9*/])->f_1 = ((uParam2[0 /*9*/])->f_1 + -0.005f);
				(uParam2[0 /*9*/])->f_2 = ((uParam2[0 /*9*/])->f_2 + ((0.003f - 0.005f) + 0.002f));
				(uParam2[0 /*9*/])->f_3 = ((uParam2[0 /*9*/])->f_3 + (0.009f - 0.01f));
				func_69(uParam2[0 /*9*/], iParam5);
				func_37("TimerBars", "Circle_checkpoints_Big", uParam2[0 /*9*/], 0, 0, iParam6, 0);
			}
		}
		sVar2 = "TIMER_DASHES";
		if ((bParam7 == 1 && iParam0 > 99) && iParam1 > 99)
		{
			sVar2 = "TIMER_DASHES";
		}
		func_86(uParam4, uParam3, sVar2, iParam0, iParam1, 2, 0);
	}
}

void func_120(var uParam0)//Position - 0x666C
{
	uParam0->f_9 = (((((0.95f - 0.047f) + 0.001f) + 0.047f) - 0.002f) - 0.013f);
}

void func_121(int iParam0)//Position - 0x669B
{
	func_4(&(Global_1446E8.f_1DE[iParam0 /*2*/]));
	func_4(&(Global_1446E8.f_1EF[iParam0 /*2*/]));
}

void func_122(int iParam0)//Position - 0x66C1
{
	func_4(&(Global_1446E8.f_CE[iParam0 /*2*/]));
	func_4(&(Global_1446E8.f_DF[iParam0 /*2*/]));
	Global_1446E8.f_42A.f_A5[iParam0] = -1;
}

void func_123(var uParam0)//Position - 0x66F3
{
	float fVar0;
	
	fVar0 = (((((0.88f - 0.062f) + 0.026f) + 0.027f) + 0.037f) + 0.003f);
	uParam0->f_9 = fVar0;
}

void func_124(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, float fParam8, float fParam9, var uParam10, int iParam11)//Position - 0x6726
{
	float fVar0;
	
	fVar0 = func_96(uParam5);
	if (iParam0 < 9)
	{
		fVar0 = func_50(iParam11);
	}
	*uParam1 = 0.795f;
	uParam1->f_1 = func_49(iParam7);
	uParam1->f_1 = (uParam1->f_1 + func_48(uParam10));
	*uParam4 = 0.795f;
	uParam4->f_1 = (uParam1->f_1 + func_95(uParam5));
	func_125(uParam2, iParam7, fParam8, fParam9);
	func_79(uParam6);
	if (!func_71(fParam8, fParam9))
	{
		func_47(iParam7, -fVar0);
	}
	func_56(uParam3, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
}

void func_125(var uParam0, int iParam1, float fParam2, float fParam3)//Position - 0x67B4
{
	float fVar0;
	float fVar1;
	
	if (!func_71(fParam2, fParam3))
	{
		fVar0 = (func_82() + func_49(iParam1));
		fVar1 = func_81();
	}
	else
	{
		fVar0 = fParam3;
		fVar1 = fParam2;
	}
	(*uParam0)[0 /*9*/] = fVar1;
	(uParam0[0 /*9*/])->f_1 = fVar0;
	(uParam0[0 /*9*/])->f_2 = 0.012f;
	(uParam0[0 /*9*/])->f_3 = 0.023f;
	(uParam0[0 /*9*/])->f_4 = 0;
	(uParam0[0 /*9*/])->f_5 = 0;
	(uParam0[0 /*9*/])->f_6 = 0;
	(uParam0[0 /*9*/])->f_7 = 250;
	(*uParam0)[1 /*9*/] = fVar1;
	(uParam0[1 /*9*/])->f_1 = fVar0;
	(uParam0[1 /*9*/])->f_2 = 0.012f;
	(uParam0[1 /*9*/])->f_3 = 0.023f;
	(uParam0[1 /*9*/])->f_4 = 0;
	(uParam0[1 /*9*/])->f_5 = 0;
	(uParam0[1 /*9*/])->f_6 = 0;
	(uParam0[1 /*9*/])->f_7 = 250;
	(*uParam0)[2 /*9*/] = fVar1;
	(uParam0[2 /*9*/])->f_1 = fVar0;
	(uParam0[2 /*9*/])->f_2 = 0.012f;
	(uParam0[2 /*9*/])->f_3 = 0.023f;
	(uParam0[2 /*9*/])->f_4 = 0;
	(uParam0[2 /*9*/])->f_5 = 0;
	(uParam0[2 /*9*/])->f_6 = 0;
	(uParam0[2 /*9*/])->f_7 = 250;
	(*uParam0)[3 /*9*/] = fVar1;
	(uParam0[3 /*9*/])->f_1 = fVar0;
	(uParam0[3 /*9*/])->f_2 = 0.012f;
	(uParam0[3 /*9*/])->f_3 = 0.023f;
	(uParam0[3 /*9*/])->f_4 = 0;
	(uParam0[3 /*9*/])->f_5 = 0;
	(uParam0[3 /*9*/])->f_6 = 0;
	(uParam0[3 /*9*/])->f_7 = 250;
	(*uParam0)[4 /*9*/] = fVar1;
	(uParam0[4 /*9*/])->f_1 = fVar0;
	(uParam0[4 /*9*/])->f_2 = 0.012f;
	(uParam0[4 /*9*/])->f_3 = 0.023f;
	(uParam0[4 /*9*/])->f_4 = 0;
	(uParam0[4 /*9*/])->f_5 = 0;
	(uParam0[4 /*9*/])->f_6 = 0;
	(uParam0[4 /*9*/])->f_7 = 250;
	(*uParam0)[5 /*9*/] = fVar1;
	(uParam0[5 /*9*/])->f_1 = fVar0;
	(uParam0[5 /*9*/])->f_2 = 0.012f;
	(uParam0[5 /*9*/])->f_3 = 0.023f;
	(uParam0[5 /*9*/])->f_4 = 0;
	(uParam0[5 /*9*/])->f_5 = 0;
	(uParam0[5 /*9*/])->f_6 = 0;
	(uParam0[5 /*9*/])->f_7 = 250;
	(*uParam0)[6 /*9*/] = fVar1;
	(uParam0[6 /*9*/])->f_1 = fVar0;
	(uParam0[6 /*9*/])->f_2 = 0.012f;
	(uParam0[6 /*9*/])->f_3 = 0.023f;
	(uParam0[6 /*9*/])->f_4 = 0;
	(uParam0[6 /*9*/])->f_5 = 0;
	(uParam0[6 /*9*/])->f_6 = 0;
	(uParam0[6 /*9*/])->f_7 = 250;
	(*uParam0)[7 /*9*/] = fVar1;
	(uParam0[7 /*9*/])->f_1 = fVar0;
	(uParam0[7 /*9*/])->f_2 = 0.012f;
	(uParam0[7 /*9*/])->f_3 = 0.023f;
	(uParam0[7 /*9*/])->f_4 = 0;
	(uParam0[7 /*9*/])->f_5 = 0;
	(uParam0[7 /*9*/])->f_6 = 0;
	(uParam0[7 /*9*/])->f_7 = 250;
	(*uParam0)[8 /*9*/] = fVar1;
	(uParam0[8 /*9*/])->f_1 = fVar0;
	(uParam0[8 /*9*/])->f_2 = 0.012f;
	(uParam0[8 /*9*/])->f_3 = 0.023f;
	(uParam0[8 /*9*/])->f_4 = 0;
	(uParam0[8 /*9*/])->f_5 = 0;
	(uParam0[8 /*9*/])->f_6 = 0;
	(uParam0[8 /*9*/])->f_7 = 250;
	(*uParam0)[9 /*9*/] = fVar1;
	(uParam0[9 /*9*/])->f_1 = fVar0;
	(uParam0[9 /*9*/])->f_2 = 0.012f;
	(uParam0[9 /*9*/])->f_3 = 0.023f;
	(uParam0[9 /*9*/])->f_4 = 0;
	(uParam0[9 /*9*/])->f_5 = 0;
	(uParam0[9 /*9*/])->f_6 = 0;
	(uParam0[9 /*9*/])->f_7 = 250;
}

void func_126(var uParam0, int iParam1, int iParam2)//Position - 0x6ACE
{
	*uParam0 = iParam2;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = ((((((0.469f + 0.096f) - 0.017f) + 0.022f) - 0.062f) - 0.001f) - 0.013f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 9;
}

void func_127(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)//Position - 0x6B3F
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (func_13(5, iParam0))
	{
		func_84(iParam0, &uVar0, &uVar1, &uVar2, &uVar3, iParam1, 1, sParam3, iParam4, iParam5, iParam6, bParam7, "", 0, 0f, iParam8, iParam9, 0, 0, iParam2, 0, 0, 0, 0);
	}
}

void func_128(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10, bool bParam11)//Position - 0x6B7C
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (func_13(4, iParam0))
	{
		func_84(iParam0, &uVar0, &uVar1, &uVar2, &uVar3, iParam1, 1, sParam3, iParam4, iParam5, iParam6, bParam7, "", 0, 0f, iParam8, iParam9, 0, bParam10, iParam2, 0, 0, 0, bParam11);
	}
}

void func_129(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, bool bParam6, char* sParam7, int iParam8, bool bParam9, int iParam10, int iParam11)//Position - 0x6BBB
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (func_13(3, iParam0))
	{
		func_84(iParam0, &uVar0, &uVar1, &uVar2, &uVar3, iParam1, 1, sParam2, iParam3, iParam4, iParam5, bParam6, sParam7, 0, 0f, iParam10, iParam11, iParam8, 0, 0, bParam9, 0, 0, 0);
	}
}

void func_130(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, var uParam6, int iParam7, int iParam8, bool bParam9, int iParam10, int iParam11, bool bParam12, var uParam13, int iParam14)//Position - 0x6BF9
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	if (func_13(7, iParam0))
	{
		func_131(iParam0, &uVar0, &uVar1, &uVar2, &uVar3, &uVar4, &uVar5, iParam1, 1, iParam3, iParam4, uParam2, uParam6, iParam5, iParam7, iParam8, bParam9, iParam10, iParam11, bParam12, uParam13, iParam14);
	}
}

void func_131(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, var uParam11, var uParam12, int iParam13, int iParam14, int iParam15, bool bParam16, int iParam17, int iParam18, bool bParam19, var uParam20, int iParam21)//Position - 0x6C3A
{
	var uVar0;
	var uVar1;
	struct<9> Var2;
	bool bVar3;
	int iVar4;
	struct<9> Var5;
	
	Global_1446E8++;
	if (iParam17 == 2)
	{
	}
	func_56(&Var2, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
	func_52(7, iParam0);
	if (func_45())
	{
		func_101(uParam1, 0);
	}
	else
	{
		func_55(uParam1, 0);
	}
	func_146(&uVar0, 0);
	switch (iParam13)
	{
		case 1:
		case 0:
		case 5:
			if (bParam19)
			{
				func_145(uParam3, 0);
				func_126(uParam2, 0, 0);
			}
			else
			{
				func_145(uParam3, 0);
				func_126(uParam2, 0, 5);
			}
			func_97(uParam2);
			func_97(uParam3);
			break;
		
		case 2:
			func_126(uParam2, 0, 0);
			func_97(&uVar0);
			func_97(uParam3);
			func_144(uParam2);
			break;
		
		case 3:
			func_126(uParam2, 0, 0);
			func_97(&uVar0);
			func_97(uParam3);
			func_144(uParam2);
			break;
		
		case 4:
			func_126(uParam3, 0, 0);
			if (bParam19)
			{
				func_126(uParam2, 0, 0);
			}
			else
			{
				func_126(uParam2, 0, 5);
			}
			func_97(uParam2);
			func_97(uParam3);
			break;
	}
	func_53(uParam1);
	uParam1->f_9 = (uParam1->f_9 + (0.03f * (1f - func_143())));
	if (Global_1446E8 == 1)
	{
		func_51(iParam8);
	}
	func_142(uParam2, uParam4, uParam5, uParam6, iParam8, uParam1, &uVar0, &uVar1);
	func_93(uParam2, uParam12);
	if (iParam14 == 0)
	{
		func_141(iParam0);
	}
	if (iParam18 == 0)
	{
		func_140(iParam0);
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", 0);
	if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
	{
		iVar4 = func_73();
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar4);
		if (func_72(iParam14, &(Global_1446E8.f_8A[iParam0 /*2*/]), &(Global_1446E8.f_9B[iParam0 /*2*/])))
		{
			bVar3 = true;
		}
		else
		{
			bVar3 = false;
		}
		Var2 = *uParam4;
		Var2.f_1 = uParam4->f_1;
		if (Global_1446E8.f_2F6 == 1)
		{
			Var2 = (Var2 + -0.113f);
		}
		switch (iParam13)
		{
			case 1:
			case 0:
			case 5:
				Var2 = (Var2 + 0.079f);
				Var2.f_1 = (Var2.f_1 + 0.008f);
				Var2.f_2 = (Var2.f_2 + 0.157f);
				Var2.f_3 = (Var2.f_3 + 0.036f);
				Var2.f_4 += 255;
				Var2.f_5 += 255;
				Var2.f_6 += 255;
				Var2.f_7 = 140;
				break;
			
			case 2:
				Var2 = (Var2 + 0.079f);
				Var2.f_1 = (Var2.f_1 + 0.008f);
				Var2.f_2 = (Var2.f_2 + 0.157f);
				Var2.f_3 = (Var2.f_3 + 0.036f);
				Var2.f_4 += 255;
				Var2.f_5 += 255;
				Var2.f_6 += 255;
				Var2.f_7 = 140;
				break;
			
			case 3:
				Var2 = (Var2 + 0.079f);
				Var2.f_1 = (Var2.f_1 + 0.008f);
				Var2.f_2 = (Var2.f_2 + 0.157f);
				Var2.f_3 = (Var2.f_3 + 0.036f);
				Var2.f_4 += 255;
				Var2.f_5 += 255;
				Var2.f_6 += 255;
				Var2.f_7 = 140;
				break;
			
			case 4:
				Var2 = (Var2 + 0.079f);
				Var2.f_1 = (Var2.f_1 + 0.008f);
				Var2.f_2 = (Var2.f_2 + 0.157f);
				Var2.f_3 = (Var2.f_3 + 0.036f);
				Var2.f_4 += 255;
				Var2.f_5 += 255;
				Var2.f_6 += 255;
				Var2.f_7 = 140;
				break;
		}
		if (func_45())
		{
			Var2 = (Var2 + -0.025f);
			Var2.f_2 = (Var2.f_2 + 0.05f);
		}
		Global_1446E8.f_E46 = (Global_1446E8.f_E46 + Var2.f_3);
		if (Global_1446E8.f_2F6 == 0)
		{
			if (iParam18 > 0)
			{
				Var5 = { Var2 };
				if (func_166(&(Global_1446E8.f_2D8[iParam0 /*2*/]), 2000, 0) == 0)
				{
					if (func_70(Global_1446E8.f_2D8[iParam0 /*2*/], 1250, 0))
					{
						Global_1446E8.f_2E9[iParam0] = (Global_1446E8.f_2E9[iParam0] - 17);
					}
					Var5.f_7 = Global_1446E8.f_2E9[iParam0];
					func_69(&Var5, uParam12);
					func_37("TimerBars", "ALL_WHITE_bg", &Var5, 1, 0, iVar4, 0);
				}
			}
			else
			{
				Global_1446E8.f_2E9[iParam0] = 255;
				func_68(&(Global_1446E8.f_2D8[iParam0 /*2*/]), 0, 0);
			}
			func_37("TimerBars", "ALL_BLACK_bg", &Var2, 1, 0, iVar4, 0);
		}
		if (bParam16)
		{
			if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9)
			{
				uParam4->f_1 = (uParam4->f_1 + -0.012f);
			}
			else
			{
				uParam4->f_1 = (uParam4->f_1 + -0.004f);
			}
		}
		else if (func_45())
		{
			if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9)
			{
				uParam4->f_1 = (uParam4->f_1 + -0.012f);
			}
			else
			{
				uParam4->f_1 = (uParam4->f_1 + -0.008f);
			}
		}
		iVar4 = func_73();
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar4);
		func_93(uParam1, uParam20);
		if (Global_1446E8.f_2F6 == 0)
		{
			func_36(uParam1, 0);
			if (func_35(uParam11) == 0)
			{
				if (bParam16 == 1 || iParam21 == 1)
				{
					func_66(uParam4, uParam1, uParam11, "", 1, 2);
				}
				else if (iParam15 == -1)
				{
					func_64(uParam4, uParam1, uParam11, 0, 1);
				}
				else
				{
					func_29(uParam4, uParam1, uParam11, iParam15, 2);
				}
			}
		}
		if (bVar3)
		{
			if (iParam9 == 0)
			{
				func_139(iParam0);
			}
			if (iParam9 != 0 && func_166(&(Global_1446E8.f_C3C.f_110[iParam0 /*2*/]), 4000, 0) == 0)
			{
				if (iParam13 != 4)
				{
					if (iParam9 > 0)
					{
						func_138(uParam3);
						func_137(uParam6, uParam3, iParam9, 66, "TIMER_POS", 0, 1);
						func_136(uParam3);
					}
					else
					{
						func_135(uParam3);
						func_137(uParam6, uParam3, iParam9, 66, "STRING", 0, 1);
						func_136(uParam3);
					}
				}
				else if (iParam9 > 0)
				{
					func_135(uParam3);
					func_137(uParam6, uParam3, iParam9, 66, "TIMER_POS", 0, 1);
					func_136(uParam3);
				}
				else
				{
					func_138(uParam3);
					func_137(uParam6, uParam3, iParam9, 66, "STRING", 0, 1);
					func_136(uParam3);
				}
			}
			else
			{
				if (iParam10 != 0)
				{
					if (iParam10 == 1)
					{
						func_134(uParam2);
					}
					else if (iParam10 == 2)
					{
						func_133(uParam2);
					}
					else if (iParam10 == 3)
					{
						func_132(uParam2);
					}
				}
				if (Global_1446E8.f_2F6 == 1)
				{
					uParam2->f_7 = 0;
					GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
				}
				func_36(uParam2, 0);
				switch (iParam13)
				{
					case 1:
						if (bParam19)
						{
							func_66(uParam5, uParam2, "--:--:--", "", 1, 2);
						}
						else
						{
							*uParam5 = (*uParam5 + 0.117f);
							func_137(uParam5, uParam2, iParam7, 2567, "", 0, 1);
						}
						break;
					
					case 0:
						if (bParam19)
						{
							func_66(uParam5, uParam2, "--:--", "", 1, 2);
						}
						else
						{
							*uParam5 = (*uParam5 + 0.117f);
							func_137(uParam5, uParam2, iParam7, 6, "", 0, 1);
						}
						break;
					
					case 2:
						*uParam5 = (*uParam5 + 0.12f);
						func_137(uParam5, uParam2, iParam7, 6, "", 0, 1);
						func_64(&uVar1, &uVar0, "TIMER_AM_O", 0, 1);
						break;
					
					case 3:
						*uParam5 = (*uParam5 + 0.12f);
						func_137(uParam5, uParam2, iParam7, 6, "", 0, 1);
						func_64(&uVar1, &uVar0, "TIMER_PM_O", 0, 1);
						break;
					
					case 4:
						*uParam5 = (*uParam5 + 0.12f);
						if (bParam19)
						{
							func_66(uParam5, uParam2, "--:--:--", "", 1, 2);
						}
						else
						{
							func_137(uParam5, uParam2, iParam7, 2567, "", 0, 1);
						}
						break;
					
					case 5:
						*uParam5 = (*uParam5 + 0.117f);
						func_137(uParam5, uParam2, iParam7, 2, "", 0, 1);
						break;
					}
				}
		}
		func_28();
	}
}

void func_132(var uParam0)//Position - 0x73C7
{
	func_67(uParam0, 109);
}

void func_133(var uParam0)//Position - 0x73D7
{
	func_67(uParam0, 108);
}

void func_134(var uParam0)//Position - 0x73E7
{
	func_67(uParam0, 107);
}

void func_135(var uParam0)//Position - 0x73F7
{
	func_67(uParam0, 6);
}

void func_136(var uParam0)//Position - 0x7406
{
	func_67(uParam0, 1);
}

void func_137(var uParam0, var uParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6)//Position - 0x7415
{
	char* sVar0;
	
	if (func_33())
	{
		func_36(uParam1, 0);
		HUD::SET_TEXT_RIGHT_JUSTIFY(iParam6);
		HUD::SET_TEXT_CENTRE(iParam5);
		if (func_35(sParam4))
		{
			sVar0 = "STRING";
		}
		else
		{
			sVar0 = sParam4;
		}
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sVar0);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, iParam3);
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_32(*uParam0), func_31(uParam0->f_1), 0);
	}
}

void func_138(var uParam0)//Position - 0x746E
{
	func_67(uParam0, 18);
}

void func_139(int iParam0)//Position - 0x747E
{
	func_4(&(Global_1446E8.f_C3C.f_110[iParam0 /*2*/]));
}

void func_140(int iParam0)//Position - 0x7498
{
	func_4(&(Global_1446E8.f_19A[iParam0 /*2*/]));
	func_4(&(Global_1446E8.f_1AB[iParam0 /*2*/]));
}

void func_141(int iParam0)//Position - 0x74BE
{
	func_4(&(Global_1446E8.f_8A[iParam0 /*2*/]));
	func_4(&(Global_1446E8.f_9B[iParam0 /*2*/]));
}

void func_142(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, var uParam6, var uParam7)//Position - 0x74E2
{
	float fVar0;
	
	fVar0 = func_96(uParam0);
	*uParam1 = 0.795f;
	uParam1->f_1 = func_49(iParam4);
	uParam1->f_1 = (uParam1->f_1 + func_48(uParam5));
	*uParam2 = 0.795f;
	uParam2->f_1 = (uParam1->f_1 + func_95(uParam0));
	*uParam7 = 0.795f;
	uParam7->f_1 = (uParam1->f_1 + func_95(uParam6));
	*uParam3 = *uParam2;
	uParam3->f_1 = uParam2->f_1;
	func_47(iParam4, -fVar0);
}

float func_143()//Position - 0x7558
{
	float fVar0;
	
	fVar0 = GRAPHICS::_GET_ASPECT_RATIO(0);
	if (fVar0 > 1.7f)
	{
		return 1f;
	}
	else if (fVar0 > 1.5f)
	{
		return 1.2f;
	}
	else if (fVar0 > 1.3f)
	{
		return 1.3f;
	}
	return 1.4f;
}

void func_144(var uParam0)//Position - 0x75A7
{
	uParam0->f_9 = ((((((((0.95f - 0.047f) + 0.001f) + 0.047f) - 0.002f) - 0.013f) + 0.014f) - 0.024f) + 0.005f);
}

void func_145(var uParam0, int iParam1)//Position - 0x75E8
{
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = (0.315f + 0.183f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 15;
}

void func_146(var uParam0, int iParam1)//Position - 0x763A
{
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = (((0.5f + 0.004f) - 0.01f) - 0.11f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 19;
}

void func_147(bool bParam0)//Position - 0x7698
{
	if (func_148())
	{
		if (bParam0)
		{
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
		}
		else
		{
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(0);
		}
	}
}

int func_148()//Position - 0x76B9
{
	if (func_149(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_149(int iParam0)//Position - 0x76D1
{
	switch (func_150(iParam0))
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 6:
		case 5:
		case 7:
		case 37:
		case 32:
		case 35:
		case 38:
			return 0;
		
		default:
	}
	return 1;
}

int func_150(int iParam0)//Position - 0x7731
{
	return Global_182604[iParam0 /*324*/].f_A5;
}

int func_151(int iParam0)//Position - 0x7744
{
	if (Global_252C0A == 1)
	{
		return 0;
	}
	if (func_154() == 0)
	{
		if (HUD::IS_PAUSE_MENU_ACTIVE())
		{
			return 0;
		}
	}
	if (iParam0 != 1 && Global_1446E8.f_2F7 == 0)
	{
		if (func_152())
		{
			return 0;
		}
	}
	return 1;
}

int func_152()//Position - 0x778C
{
	struct<3> Var0;
	
	if (Global_3839.f_1 > 3)
	{
		return 1;
	}
	if (func_153())
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

int func_153()//Position - 0x77FA
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_154()//Position - 0x7814
{
	return Global_5F7C;
}

int func_155()//Position - 0x781F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		if (Global_1446E8.f_E27[iVar0] != Global_1446E8.f_E1D[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	if (Global_1446E8.f_E45)
	{
		Global_1446E8.f_E45 = 0;
		return 1;
	}
	return 0;
}

int func_156()//Position - 0x786E
{
	if (Global_14066B)
	{
		return 0;
	}
	if (Global_105F2)
	{
		return 0;
	}
	if (HUD::_IS_MULTIPLAYER_CHAT_ACTIVE())
	{
		return 0;
	}
	if (Global_19D2F5.f_4)
	{
		return 0;
	}
	if (Global_1446E8.f_2F9 || Global_1446E8.f_2FA)
	{
		return 1;
	}
	if (func_34())
	{
		return 1;
	}
	if (Global_252FC0)
	{
		return 0;
	}
	if (Global_141F3E)
	{
		return 0;
	}
	if (func_160())
	{
		return 1;
	}
	if (Global_42CA.f_4 && func_149(PLAYER::PLAYER_ID()) == 0)
	{
		return 0;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return 0;
	}
	if (Global_1446E8.f_2FB == 0)
	{
		if (func_159(PLAYER::PLAYER_PED_ID()))
		{
			func_158();
		}
	}
	if (func_157(8, -1))
	{
		return 0;
	}
	if (HUD::IS_HUD_PREFERENCE_SWITCHED_ON() == 0)
	{
		return 0;
	}
	if (func_154() == 0 || func_154() == 2)
	{
		if (Global_24D5B9[PLAYER::PLAYER_ID() /*254*/].f_DB != 99)
		{
			if (((NETWORK::NETWORK_IS_IN_SPECTATOR_MODE() == 0 && Global_18032E == 0) && !MISC::IS_BIT_SET(Global_24F57C.f_51E.f_2E7, 11)) && Global_182604[PLAYER::PLAYER_ID() /*324*/] != 0)
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_157(int iParam0, int iParam1)//Position - 0x79AC
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

void func_158()//Position - 0x79E7
{
	Global_1446E8.f_2FB = 1;
}

int func_159(var uParam0)//Position - 0x79F7
{
	int iVar0;
	
	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (!PED::IS_PED_INJURED(uParam0))
		{
			if (WEAPON::GET_CURRENT_PED_WEAPON(uParam0, &iVar0, 1))
			{
				if ((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle"))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_160()//Position - 0x7A48
{
	if (Global_198D6E)
	{
		return 1;
	}
	return 0;
}

void func_161()//Position - 0x7A5C
{
	int iVar0;
	
	if (func_164(2))
	{
		iVar0 = 0;
		while (iVar0 <= 7)
		{
			if (func_14(2, iVar0) && func_13(2, iVar0))
			{
				func_4(&(Global_1446E8.f_538.f_1C3[iVar0 /*2*/]));
			}
			else if (func_166(&(Global_1446E8.f_538.f_1C3[iVar0 /*2*/]), Global_1446E8.f_538.f_1D4[iVar0], 0) == 0)
			{
				Global_1446E8.f_1 = 1;
				func_163(2, iVar0);
			}
			else
			{
				func_162(2, iVar0);
			}
			iVar0++;
		}
	}
}

void func_162(int iParam0, int iParam1)//Position - 0x7AE6
{
	MISC::CLEAR_BIT(&(Global_1446E8.f_E3B[iParam0]), iParam1);
}

void func_163(int iParam0, int iParam1)//Position - 0x7AFF
{
	MISC::SET_BIT(&(Global_1446E8.f_E1D[iParam0]), iParam1);
}

int func_164(int iParam0)//Position - 0x7B18
{
	if (Global_1446E8.f_E3B[iParam0] > 0)
	{
		return 1;
	}
	return 0;
}

void func_165(int iParam0)//Position - 0x7B34
{
	Global_1446E8.f_2F4 = iParam0;
}

int func_166(var uParam0, int iParam1, bool bParam2)//Position - 0x7B45
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_167(uParam0, bParam2, 0);
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

void func_167(var uParam0, bool bParam1, bool bParam2)//Position - 0x7BA3
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

