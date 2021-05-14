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
	char* sLocal_19 = NULL;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = -1;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 1000;
	var uLocal_37 = 1000;
	var uLocal_38 = 0;
	bool bLocal_39 = 0;
	bool bLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	float fLocal_50 = 0f;
	float fLocal_51 = 0f;
	float fLocal_52 = 0f;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	float fLocal_57 = 0f;
	float fLocal_58 = 0f;
	float fLocal_59 = 0f;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	bool bLocal_76 = 0;
	bool bLocal_77 = 0;
	bool bLocal_78 = 0;
	bool bLocal_79 = 0;
	bool bLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	bool bLocal_83 = 0;
	bool bLocal_84 = 0;
	int iLocal_85 = 0;
	bool bLocal_86 = 0;
	bool bLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	bool bLocal_92 = 0;
	bool bLocal_93 = 0;
	bool bLocal_94 = 0;
	int iLocal_95 = 0;
	bool bLocal_96 = 0;
	var uLocal_97 = 0;
	bool bLocal_98 = 0;
	bool bLocal_99 = 0;
	bool bLocal_100 = 0;
	bool bLocal_101 = 0;
	bool bLocal_102 = 0;
	bool bLocal_103 = 0;
	bool bLocal_104 = 0;
	bool bLocal_105 = 0;
	bool bLocal_106 = 0;
	bool bLocal_107 = 0;
	float fLocal_108[175] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_109[175] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_110[175] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_111[175] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_112[175] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_113 = 0f;
	float fLocal_114 = 0f;
	float fLocal_115 = 0f;
	float fLocal_116 = 0f;
	float fLocal_117[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_118[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_119[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_120[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_121[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_122[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_123[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_124[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_125[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_126[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_127 = 0f;
	float fLocal_128 = 0f;
	float fLocal_129 = 0f;
	float fLocal_130 = 0f;
	float fLocal_131 = 0f;
	float fLocal_132 = 0f;
	float fLocal_133 = 0f;
	float fLocal_134 = 0f;
	float fLocal_135 = 0f;
	float fLocal_136 = 0f;
	float fLocal_137 = 0f;
	float fLocal_138 = 0f;
	float fLocal_139 = 0f;
	float fLocal_140 = 0f;
	float fLocal_141 = 0f;
	float fLocal_142 = 0f;
	float fLocal_143 = 0f;
	float fLocal_144 = 0f;
	float fLocal_145 = 0f;
	float fLocal_146 = 0f;
	float fLocal_147 = 0f;
	int iLocal_148[175] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_149[175] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_150[175] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_151[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_152[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_153[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_154[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	struct<3> Local_172[175];
	struct<3> Local_173[15];
	struct<3> Local_174[35];
	struct<3> Local_175 = { 0, 0, 0 } ;
	struct<3> Local_176 = { 0, 0, 0 } ;
	struct<3> Local_177 = { 0, 0, 0 } ;
	struct<3> Local_178 = { 0, 0, 0 } ;
	struct<3> Local_179 = { 0, 0, 0 } ;
	struct<3> Local_180 = { 0, 0, 0 } ;
	struct<3> Local_181 = { 0, 0, 0 } ;
	struct<3> Local_182 = { 0, 0, 0 } ;
	struct<3> Local_183 = { 0, 0, 0 } ;
	char cLocal_184[64] = "";
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	int iLocal_193 = 0;
	int iLocal_194[175] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_195[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_196[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_197 = 0;
	int iLocal_198 = 0;
	int iLocal_199 = 0;
	int iLocal_200[175] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_201[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_202[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_203[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_204[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_205 = 0;
	int iLocal_206 = 0;
	int iLocal_207 = 0;
	var uLocal_208 = 12;
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
	int iLocal_221 = 0;
	int iLocal_222 = 0;
	int iLocal_223 = 0;
	int iLocal_224 = 0;
	var uLocal_225 = 0;
	int iLocal_226 = 0;
	int iLocal_227 = 0;
	int iLocal_228 = 0;
	int iLocal_229 = 0;
	int iLocal_230 = 0;
	int iLocal_231 = 0;
	int iLocal_232 = 0;
	int iLocal_233 = 0;
	int iLocal_234 = 0;
	int iLocal_235 = 0;
	int iLocal_236 = 0;
	int iLocal_237 = 0;
	int iLocal_238 = 0;
	int iLocal_239 = 0;
	int iLocal_240 = 0;
	int iLocal_241 = 0;
	int iLocal_242 = 0;
	int iLocal_243 = 0;
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	int iLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	int iLocal_252 = 0;
	int iLocal_253 = 0;
	int iLocal_254 = 0;
	int iLocal_255 = 0;
	int iLocal_256 = 0;
	int iLocal_257 = 0;
	int iLocal_258 = 0;
	int iLocal_259 = 0;
	int iLocal_260 = 0;
	int iLocal_261 = 0;
	var uLocal_262 = 0;
	int iLocal_263 = 0;
	int iLocal_264[4] = { 0, 0, 0, 0 };
	int iLocal_265 = 0;
	var uLocal_266[3] = { 0, 0, 0 };
	int iLocal_267[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	int iLocal_271 = 0;
	int iLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274[2] = { 0, 0 };
	int iLocal_275[2] = { 0, 0 };
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	int iLocal_278 = 0;
	int iLocal_279[2] = { 0, 0 };
	int iLocal_280 = 0;
	int iLocal_281 = 0;
	int iLocal_282 = 0;
	int iLocal_283 = 0;
	int iLocal_284 = 0;
	int iLocal_285[2] = { 0, 0 };
	int iLocal_286 = 0;
	int iLocal_287[2] = { 0, 0 };
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292[2] = { 0, 0 };
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	struct<3> Local_305 = { 0, 0, 0 } ;
	struct<3> Local_306 = { 0, 0, 0 } ;
	struct<3> Local_307 = { 0, 0, 0 } ;
	struct<3> Local_308 = { 0, 0, 0 } ;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	struct<3> Local_315 = { 0, 0, 0 } ;
	struct<3> Local_316 = { 0, 0, 0 } ;
	struct<3> Local_317 = { 0, 0, 0 } ;
	float fLocal_318 = 0f;
	float fLocal_319 = 0f;
	float fLocal_320 = 0f;
	float fLocal_321 = 0f;
	float fLocal_322 = 0f;
	float fLocal_323 = 0f;
	int iLocal_324 = 0;
	int iLocal_325 = 0;
	var uLocal_326 = 0;
	int iLocal_327 = 0;
	int iLocal_328 = 0;
	int iLocal_329 = 0;
	int iLocal_330 = 0;
	int iLocal_331 = 0;
	int iLocal_332 = 0;
	int iLocal_333 = 0;
	int iLocal_334 = 0;
	int iLocal_335 = 0;
	int iLocal_336 = 0;
	int iLocal_337 = 0;
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	int iLocal_340 = 0;
	int iLocal_341 = 0;
	int iLocal_342 = 0;
	int iLocal_343 = 0;
	int iLocal_344 = 0;
	int iLocal_345 = 0;
	int iLocal_346 = 0;
	int iLocal_347 = 0;
	int iLocal_348 = 0;
	int iLocal_349 = 0;
	int iLocal_350 = 0;
	int iLocal_351 = 0;
	int iLocal_352 = 0;
	int iLocal_353 = 0;
	int iLocal_354 = 0;
	int iLocal_355 = 0;
	int iLocal_356 = 0;
	int iLocal_357 = 0;
	int iLocal_358 = 0;
	int iLocal_359 = 0;
	int iLocal_360 = 0;
	int iLocal_361 = 0;
	int iLocal_362[3] = { 0, 0, 0 };
	int iLocal_363[2] = { 0, 0 };
	int iLocal_364 = 0;
	int iLocal_365 = 0;
	int iLocal_366 = 0;
	int iLocal_367 = 0;
	int iLocal_368 = 0;
	int iLocal_369 = 0;
	int iLocal_370 = 0;
	int iLocal_371 = 0;
	int iLocal_372 = 0;
	int iLocal_373 = 0;
	int iLocal_374 = 0;
	int iLocal_375 = 0;
	int iLocal_376 = 0;
	int iLocal_377 = 0;
	int iLocal_378 = 0;
	int iLocal_379 = 0;
	int iLocal_380 = 0;
	int iLocal_381 = 0;
	int iLocal_382 = 0;
	int iLocal_383 = 0;
	int iLocal_384 = 0;
	int iLocal_385 = 0;
	int iLocal_386 = 0;
	int iLocal_387 = 0;
	int iLocal_388 = 0;
	int iLocal_389 = 0;
	int iLocal_390 = 0;
	int iLocal_391 = 0;
	var uLocal_392 = 0;
	int iLocal_393 = 0;
	int iLocal_394 = 0;
	int iLocal_395 = 0;
	int iLocal_396[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_397 = 0;
	int iLocal_398 = 0;
	int iLocal_399 = 0;
	int iLocal_400 = 0;
	int iLocal_401 = 0;
	int iLocal_402 = 0;
	int iLocal_403 = 0;
	int iLocal_404 = 0;
	int iLocal_405 = 0;
	int iLocal_406 = 0;
	int iLocal_407 = 0;
	int iLocal_408 = 0;
	int iLocal_409 = 0;
	int iLocal_410 = 0;
	int iLocal_411 = 0;
	int iLocal_412[19] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_413 = 0;
	int iLocal_414 = 0;
	int iLocal_415 = 0;
	int iLocal_416 = 0;
	int iLocal_417 = 0;
	int iLocal_418 = 0;
	int iLocal_419 = 0;
	int iLocal_420 = 0;
	int iLocal_421 = 0;
	int iLocal_422 = 0;
	int iLocal_423 = 0;
	int iLocal_424 = 0;
	int iLocal_425 = 0;
	int iLocal_426 = 0;
	int iLocal_427 = 0;
	int iLocal_428[2] = { 0, 0 };
	int iLocal_429[2] = { 0, 0 };
	int iLocal_430 = 0;
	int iLocal_431 = 0;
	int iLocal_432 = 0;
	int iLocal_433 = 0;
	int iLocal_434[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_435[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_436 = 0;
	int iLocal_437 = 0;
	int iLocal_438 = 0;
	int iLocal_439 = 0;
	int iLocal_440 = 0;
	int iLocal_441 = 0;
	int iLocal_442 = 0;
	int iLocal_443 = 0;
	int iLocal_444 = 0;
	int iLocal_445 = 0;
	int iLocal_446[3] = { 0, 0, 0 };
	int iLocal_447[2] = { 0, 0 };
	int iLocal_448 = 0;
	int iLocal_449[4] = { 0, 0, 0, 0 };
	int iLocal_450 = 0;
	int iLocal_451 = 0;
	int iLocal_452 = 0;
	int iLocal_453 = 0;
	int iLocal_454 = 0;
	int iLocal_455 = 0;
	int iLocal_456 = 0;
	int iLocal_457 = 0;
	int iLocal_458 = 0;
	int iLocal_459 = 0;
	int iLocal_460 = 0;
	int iLocal_461 = 0;
	int iLocal_462 = 0;
	int iLocal_463 = 0;
	int iLocal_464[3] = { 0, 0, 0 };
	int iLocal_465[3] = { 0, 0, 0 };
	int iLocal_466 = 0;
	int iLocal_467 = 0;
	int iLocal_468 = 0;
	int iLocal_469 = 0;
	int iLocal_470 = 0;
	int iLocal_471 = 0;
	int iLocal_472 = 0;
	int iLocal_473 = 0;
	int iLocal_474 = 0;
	int iLocal_475 = 0;
	int iLocal_476 = 0;
	int iLocal_477 = 0;
	int iLocal_478 = 0;
	int iLocal_479 = 0;
	int iLocal_480 = 0;
	int iLocal_481 = 0;
	int iLocal_482 = 0;
	int iLocal_483 = 0;
	int iLocal_484 = 0;
	int iLocal_485 = 0;
	int iLocal_486[4] = { 0, 0, 0, 0 };
	int iLocal_487 = 0;
	char* sLocal_488 = NULL;
	var uLocal_489 = 16;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 21;
	var uLocal_662 = 6;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666[3] = { 0, 0, 0 };
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
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
	sLocal_19 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	iLocal_54 = 3;
	fLocal_57 = 80f;
	fLocal_58 = 140f;
	fLocal_59 = 180f;
	iLocal_65 = 1;
	iLocal_66 = 65;
	iLocal_67 = 49;
	iLocal_68 = 64;
	uLocal_72 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	uLocal_73 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	bLocal_77 = true;
	bLocal_84 = true;
	bLocal_106 = true;
	fLocal_127 = 120f;
	fLocal_128 = 0f;
	fLocal_130 = 1f;
	fLocal_131 = 0f;
	fLocal_132 = 1f;
	fLocal_133 = 30f;
	fLocal_135 = 1f;
	fLocal_136 = 5f;
	fLocal_137 = 1f;
	fLocal_138 = 1f;
	fLocal_139 = 100f;
	fLocal_140 = 100f;
	fLocal_141 = 0f;
	fLocal_142 = 7000f;
	fLocal_143 = 0f;
	fLocal_144 = 0f;
	fLocal_145 = 0.3f;
	fLocal_146 = 0.5f;
	fLocal_147 = 50f;
	iLocal_158 = -1;
	iLocal_166 = -1;
	iLocal_167 = -1;
	Local_305 = { -1024.1f, -485.3321f, 35.9816f };
	Local_306 = { -428.0263f, -2153.577f, 9.2997f };
	Local_307 = { -498.7f, -2136.5f, 8.4f };
	Local_315 = { -272.8615f, -2186.932f, 9.3174f };
	fLocal_318 = 209.7233f;
	fLocal_319 = 90.947f;
	fLocal_322 = 46.7161f;
	if (func_388(0))
	{
		func_381(24, 0);
	}
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("EXTRASUNNY", 20f);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_379(PLAYER::PLAYER_PED_ID(), 0);
		AUDIO::TRIGGER_MUSIC_EVENT("TRV4_FAIL");
		func_377();
		func_375();
	}
	func_374(1);
	MISC::SET_MISSION_FLAG(1);
	iLocal_222 = 0;
	iLocal_221 = 0;
	while (true)
	{
		RECORDING::_0x208784099002BC30("M_LegalTrouble", 0);
		if (iLocal_248 > MISC::GET_GAME_TIMER())
		{
			RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
		}
		func_370();
		func_369();
		func_367();
		func_363();
		func_362();
		switch (iLocal_221)
		{
			case 0:
				func_358();
				break;
			
			case 1:
				func_313();
				break;
			
			case 2:
				func_307();
				break;
			
			case 3:
				func_304();
				break;
			
			case 4:
				func_215();
				break;
			
			case 5:
				func_203();
				break;
			
			case 6:
				func_197();
				break;
			
			case 7:
				func_188();
				break;
			
			case 8:
				func_5();
				break;
			
			case 9:
				break;
			
			case 10:
				break;
			
			case 11:
				break;
		}
		SYSTEM::WAIT(0);
		func_1();
	}
}

void func_1()//Position - 0x287
{
	if (iLocal_410 == 0)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			func_4(PLAYER::PLAYER_PED_ID(), 476);
			iLocal_410 = 1;
		}
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (iLocal_411 == 0)
			{
				iLocal_288 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_288))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_288, 0))
					{
						func_3(iLocal_288, -1);
						func_4(iLocal_288, 479);
						iLocal_411 = 1;
					}
				}
			}
		}
		else
		{
			func_4(0, 479);
			func_3(0, -1);
			if (iLocal_411 == 1)
			{
				iLocal_411 = 0;
			}
		}
	}
	if (iLocal_412[0] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_266[0]))
		{
			if (PED::IS_PED_INJURED(uLocal_266[0]))
			{
				iLocal_232++;
				iLocal_412[0] = 1;
			}
		}
	}
	if (iLocal_412[1] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_266[1]))
		{
			if (PED::IS_PED_INJURED(uLocal_266[1]))
			{
				iLocal_232++;
				iLocal_412[1] = 1;
			}
		}
	}
	if (iLocal_412[2] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_266[2]))
		{
			if (PED::IS_PED_INJURED(uLocal_266[2]))
			{
				iLocal_232++;
				iLocal_412[2] = 1;
			}
		}
	}
	if (iLocal_412[3] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_267[0]))
		{
			if (PED::IS_PED_INJURED(iLocal_267[0]))
			{
				iLocal_232++;
				iLocal_412[3] = 1;
			}
		}
	}
	if (iLocal_412[4] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_267[1]))
		{
			if (PED::IS_PED_INJURED(iLocal_267[1]))
			{
				iLocal_232++;
				iLocal_412[4] = 1;
			}
		}
	}
	if (iLocal_412[5] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_267[2]))
		{
			if (PED::IS_PED_INJURED(iLocal_267[2]))
			{
				iLocal_232++;
				iLocal_412[5] = 1;
			}
		}
	}
	if (iLocal_412[6] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_267[3]))
		{
			if (PED::IS_PED_INJURED(iLocal_267[3]))
			{
				iLocal_232++;
				iLocal_412[6] = 1;
			}
		}
	}
	if (iLocal_412[7] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_267[4]))
		{
			if (PED::IS_PED_INJURED(iLocal_267[4]))
			{
				iLocal_232++;
				iLocal_412[7] = 1;
			}
		}
	}
	if (iLocal_412[8] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_267[5]))
		{
			if (PED::IS_PED_INJURED(iLocal_267[5]))
			{
				iLocal_232++;
				iLocal_412[8] = 1;
			}
		}
	}
	if (iLocal_412[9] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_267[6]))
		{
			if (PED::IS_PED_INJURED(iLocal_267[6]))
			{
				iLocal_232++;
				iLocal_412[9] = 1;
			}
		}
	}
	if (iLocal_412[10] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_267[7]))
		{
			if (PED::IS_PED_INJURED(iLocal_267[7]))
			{
				iLocal_232++;
				iLocal_412[10] = 1;
			}
		}
	}
	if (iLocal_412[11] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_267[8]))
		{
			if (PED::IS_PED_INJURED(iLocal_267[8]))
			{
				iLocal_232++;
				iLocal_412[11] = 1;
			}
		}
	}
	if (iLocal_412[12] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_267[9]))
		{
			if (PED::IS_PED_INJURED(iLocal_267[9]))
			{
				iLocal_232++;
				iLocal_412[12] = 1;
			}
		}
	}
	if (iLocal_412[13] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_267[10]))
		{
			if (PED::IS_PED_INJURED(iLocal_267[10]))
			{
				iLocal_232++;
				iLocal_412[13] = 1;
			}
		}
	}
	if (iLocal_412[14] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_271))
		{
			if (PED::IS_PED_INJURED(iLocal_271))
			{
				iLocal_232++;
				iLocal_412[14] = 1;
			}
		}
	}
	if (iLocal_412[15] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_272))
		{
			if (PED::IS_PED_INJURED(iLocal_272))
			{
				iLocal_232++;
				iLocal_412[15] = 1;
			}
		}
	}
	if (iLocal_412[16] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_273))
		{
			if (PED::IS_PED_INJURED(iLocal_273))
			{
				iLocal_232++;
				iLocal_412[16] = 1;
			}
		}
	}
	if (iLocal_412[17] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_274[0]))
		{
			if (PED::IS_PED_INJURED(iLocal_274[0]))
			{
				iLocal_232++;
				iLocal_412[17] = 1;
			}
		}
	}
	if (iLocal_221 == 8)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 0)
		{
			if (iLocal_413 == 0)
			{
				func_2(482, 0);
				iLocal_413 = 1;
			}
		}
	}
}

void func_2(int iParam0, bool bParam1)//Position - 0x6E8
{
	int iVar0;
	
	Global_D5E8 = iParam0;
	if (!Global_D5E6)
	{
		Global_D5E6 = 1;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_1051D)
		{
			if (Global_1051E[iVar0 /*9*/] == iParam0)
			{
				Global_1051E[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

void func_3(int iParam0, int iParam1)//Position - 0x732
{
	Global_D5E9 = iParam0;
	Global_D5EA = iParam1;
}

void func_4(int iParam0, int iParam1)//Position - 0x744
{
	int iVar0;
	
	Global_D5EB = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_1051D)
	{
		if (iParam1 == -1 || Global_1051E[iVar0 /*9*/] == iParam1)
		{
			if (Global_1051E[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_1051E[iVar0 /*9*/].f_6 = iParam0;
				Global_1051E[iVar0 /*9*/].f_7 = 1;
				Global_1051E[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

void func_5()//Position - 0x7AF
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_284))
		{
			VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_284, 0, 0, 1);
		}
	}
	if (iLocal_222 > 0)
	{
		func_186();
	}
	if (iLocal_222 == 0)
	{
		if (iLocal_342 == 1)
		{
			func_104();
			iLocal_342 = 0;
		}
		func_25(3, "STAGE_EVADE_POLICE", 1, 0, 0, 1);
		iLocal_366 = 0;
		iLocal_367 = 0;
		iLocal_368 = 0;
		iLocal_343 = 0;
		iLocal_344 = 0;
		iLocal_345 = 0;
		iLocal_397 = 0;
		iLocal_398 = 0;
		iLocal_399 = 0;
		iLocal_417 = 0;
		iLocal_418 = 0;
		iLocal_422 = 0;
		iLocal_425 = 0;
		iLocal_226 = 0;
		STREAMING::REQUEST_ANIM_DICT("Misssolomon_3");
		STREAMING::REQUEST_MODEL(joaat("oracle2"));
		STREAMING::REQUEST_MODEL(joaat("baller2"));
		if (HUD::DOES_BLIP_EXIST(uLocal_296))
		{
			HUD::REMOVE_BLIP(&uLocal_296);
		}
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Trev4_5"))
		{
			TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("Trev4_5", 0, 1f, 1f);
			TASK::REMOVE_WAYPOINT_RECORDING("Trev4_5");
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_278))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_278);
		}
		SYSTEM::SETTIMERA(0);
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (!func_24())
			{
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
			}
			func_21(0, -1, 1);
		}
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_265))
		{
			if (!PED::IS_PED_INJURED(iLocal_265))
			{
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_265, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_265, 0);
			}
		}
		AUDIO::TRIGGER_MUSIC_EVENT("TRV4_LOSE_COPS");
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_LOSE_COPS"))
		{
			AUDIO::START_AUDIO_SCENE("SOL_3_LOSE_COPS");
		}
		HUD::CLEAR_PRINTS();
		func_20("TRV4_END1", 7500, 1);
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_ENGINE_DEATH_SCENE"))
		{
			AUDIO::STOP_AUDIO_SCENE("SOL_3_ENGINE_DEATH_SCENE");
		}
		if (func_19(2))
		{
			func_18(2, 0);
		}
		uLocal_262 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-948.4f, -2992.6f, 13.3f, 6f, 5f, 4f, 60f, 0, 7);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_283))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_283, 0))
			{
				VEHICLE::SET_VEHICLE_ACTIVE_FOR_PED_NAVIGATION(iLocal_283, 0);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_284))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_284, 0))
			{
				VEHICLE::SET_VEHICLE_ACTIVE_FOR_PED_NAVIGATION(iLocal_284, 0);
			}
		}
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 3, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
		func_17(&uLocal_489, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		AUDIO::SET_AUDIO_FLAG("PoliceScannerDisabled", 0);
		iLocal_222 = 1;
	}
	if (iLocal_222 == 1)
	{
		if (iLocal_417 == 0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_292[0]))
			{
				if (STREAMING::HAS_MODEL_LOADED(joaat("oracle2")))
				{
					iLocal_292[0] = VEHICLE::CREATE_VEHICLE(joaat("oracle2"), -1025.596f, -2869.237f, 12.9585f, 241.0686f, 1, 1);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_292[0], 1);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_292[0]);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("oracle2"));
					iLocal_417 = 1;
				}
			}
		}
		if (iLocal_418 == 0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_292[1]))
			{
				if (STREAMING::HAS_MODEL_LOADED(joaat("baller2")))
				{
					iLocal_292[1] = VEHICLE::CREATE_VEHICLE(joaat("baller2"), -971.4223f, -2903.354f, 12.9652f, 61.0213f, 1, 1);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_292[1], 1);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_292[1]);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("baller2"));
					iLocal_418 = 1;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_292[0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_292[0], 0))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_292[0], 0))
				{
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_LOSE_COPS_VEHICLE"))
					{
						AUDIO::START_AUDIO_SCENE("SOL_3_LOSE_COPS_VEHICLE");
					}
				}
			}
			if (func_16(PLAYER::PLAYER_PED_ID(), iLocal_292[0], 1) > 200f || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_292[0], 0))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_292[0]));
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_292[1]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_292[1], 0))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_292[1], 0))
				{
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_LOSE_COPS_VEHICLE"))
					{
						AUDIO::START_AUDIO_SCENE("SOL_3_LOSE_COPS_VEHICLE");
					}
				}
			}
			if (func_16(PLAYER::PLAYER_PED_ID(), iLocal_292[1], 1) > 200f || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_292[1], 0))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_292[1]));
			}
		}
		if (iLocal_397 == 0)
		{
			if (!PED::IS_PED_INJURED(iLocal_267[0]))
			{
				func_14(iLocal_267[0], "SURROUNDED", 24);
				iLocal_397 = 1;
			}
		}
		if (iLocal_366 == 0)
		{
			if (SYSTEM::TIMERA() > 8000)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_285[0], 0))
				{
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_285[0], 68, "BB_Chase", 1);
					VEHICLE::_0x796A877E459B99EA(iLocal_285[0], 0f, 0f, 0.15f);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_285[1], 0))
				{
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_285[1], 69, "BB_Chase", 1);
					VEHICLE::_0x796A877E459B99EA(iLocal_285[1], 0f, 0f, 0.15f);
				}
				iLocal_366 = 1;
			}
		}
		else
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_285[0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_285[0]))
				{
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_285[0]) > 5000f)
					{
						if (VEHICLE::IS_VEHICLE_STOPPED(iLocal_285[0]))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_285[0]);
						}
					}
				}
				else if (iLocal_367 == 0)
				{
					if (!PED::IS_PED_INJURED(iLocal_267[6]))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_267[6], 0);
					}
					if (!PED::IS_PED_INJURED(iLocal_267[7]))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_267[7], 0);
					}
					iLocal_367 = 1;
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_285[1], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_285[1]))
				{
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_285[1]) > 5000f)
					{
						if (VEHICLE::IS_VEHICLE_STOPPED(iLocal_285[1]))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_285[1]);
						}
					}
				}
				else if (iLocal_368 == 0)
				{
					if (!PED::IS_PED_INJURED(iLocal_267[8]))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_267[8], 0);
					}
					if (!PED::IS_PED_INJURED(iLocal_267[9]))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_267[9], 0);
					}
					iLocal_368 = 1;
				}
			}
		}
		func_12();
		if (iLocal_422 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_284))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_284, 0))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_284, 0))
					{
						AUDIO::TRIGGER_MUSIC_EVENT("TRV4_JET_ENTERED");
						if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_LOSE_COPS_PLANE"))
						{
							AUDIO::START_AUDIO_SCENE("SOL_3_LOSE_COPS_PLANE");
						}
						RECORDING::_0x293220DA1B46CEBC(4f, 15f, 4);
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_284);
						iLocal_422 = 1;
					}
					else if (func_16(PLAYER::PLAYER_PED_ID(), iLocal_284, 1) > 200f)
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_284);
					}
				}
			}
		}
		if (iLocal_422 == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_284))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_284, 0))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_284, 0))
					{
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_LOSE_COPS_PLANE"))
						{
							AUDIO::STOP_AUDIO_SCENE("SOL_3_LOSE_COPS_PLANE");
						}
						AUDIO::TRIGGER_MUSIC_EVENT("TRV4_LOSE_COPS");
						iLocal_422 = 0;
					}
				}
			}
		}
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			if (iLocal_425 == 0)
			{
				iLocal_234 = MISC::GET_GAME_TIMER();
				iLocal_425 = 1;
			}
		}
		if (iLocal_425 == 1)
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_234 + 3500)
				{
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_LOSE_COPS_PLANE"))
					{
						AUDIO::STOP_AUDIO_SCENE("SOL_3_LOSE_COPS_PLANE");
					}
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_LOSE_COPS"))
					{
						AUDIO::STOP_AUDIO_SCENE("SOL_3_LOSE_COPS");
					}
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_LOSE_COPS_VEHICLE"))
					{
						AUDIO::STOP_AUDIO_SCENE("SOL_3_LOSE_COPS_VEHICLE");
					}
					AUDIO::TRIGGER_MUSIC_EVENT("TRV4_COPS_LOST");
					func_11(0, -1);
					func_6();
				}
			}
			else
			{
				iLocal_425 = 0;
			}
		}
	}
}

void func_6()//Position - 0xE85
{
	func_10(481, iLocal_232, 0);
	func_7(0, 0);
	func_375();
}

void func_7(bool bParam0, int iParam1)//Position - 0xEA2
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_D5E0)
	{
		Global_D5E0 = iParam1;
	}
	if (bParam0)
	{
		if ((func_388(0) && Global_10B8B.f_1 == 1) && func_9(Global_10B8B))
		{
		}
		else
		{
			Global_D5DE = 1;
		}
	}
	if (Global_17C49.f_1CAD || func_388(0))
	{
		iVar0 = func_8();
		iVar1 = Global_13CDF[iVar0 /*5*/];
		uVar2 = Global_10BA2.f_6D[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_17C49.f_1CAD)
			{
			}
			return;
		}
		if (MISC::IS_BIT_SET(Global_13CDF[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (MISC::IS_BIT_SET(Global_13CDF[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		MISC::SET_BIT(&(Global_13CDF[iVar0 /*5*/].f_1), 4);
		MISC::SET_BIT(&Global_10B8D, 1);
		Global_10B9D = uVar2;
		Global_10B9E = MISC::GET_GAME_TIMER();
	}
}

int func_8()//Position - 0xF78
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (MISC::IS_BIT_SET(Global_13CDF[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_9(int iParam0)//Position - 0xFAD
{
	switch (iParam0)
	{
		case 71:
			return 1;
			break;
		
		case 86:
			return 1;
			break;
		
		case 91:
			return 1;
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

void func_10(int iParam0, int iParam1, bool bParam2)//Position - 0xFEB
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1051D)
	{
		if (Global_1051E[iVar0 /*9*/] == iParam0)
		{
			if (bParam2)
			{
				Global_1051E[iVar0 /*9*/].f_1 = iParam1;
			}
			else
			{
				Global_1051E[iVar0 /*9*/].f_1 = (Global_1051E[iVar0 /*9*/].f_1 + iParam1);
			}
			return;
		}
		iVar0++;
	}
	if (Global_1051E[iVar0 /*9*/] != -1)
	{
		if (Global_D6BF[Global_1051E[iVar0 /*9*/] /*13*/] == 3)
		{
			if (Global_1051E[iVar0 /*9*/].f_1 > 1)
			{
				Global_1051E[iVar0 /*9*/].f_1 = 1;
			}
			if (Global_1051E[iVar0 /*9*/].f_1 < 0)
			{
				Global_1051E[iVar0 /*9*/].f_1 = 0;
			}
		}
	}
}

void func_11(bool bParam0, int iParam1)//Position - 0x1095
{
	int iVar0;
	
	if (Global_D5E6)
	{
	}
	Global_D5E6 = 0;
	if (bParam0)
	{
		Global_D5E7 = 1;
	}
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_1051D)
		{
			if (Global_D6BF[Global_1051E[iVar0 /*9*/] /*13*/] == 4)
			{
				Global_1051E[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_1051D)
		{
			if (Global_1051E[iVar0 /*9*/] > 0)
			{
				if (Global_1051E[iVar0 /*9*/] == iParam1)
				{
					Global_1051E[iVar0 /*9*/].f_5 = 0;
					return;
				}
			}
			iVar0++;
		}
	}
}

void func_12()//Position - 0x112F
{
	iLocal_230 = 0;
	while (iLocal_230 <= 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_267[iLocal_230]))
		{
			if (!PED::IS_PED_INJURED(iLocal_267[iLocal_230]))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_267[iLocal_230], 0))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (func_13(PLAYER::PLAYER_PED_ID(), iLocal_267[iLocal_230]) > 200f)
						{
							TASK::CLEAR_PED_TASKS(iLocal_267[iLocal_230]);
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_267[iLocal_230]));
						}
						else if (func_13(PLAYER::PLAYER_PED_ID(), iLocal_267[iLocal_230]) > 20f)
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_267[iLocal_230], -1207174364) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_267[iLocal_230], -1207174364) != 0)
							{
								TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(iLocal_267[iLocal_230], PLAYER::PLAYER_PED_ID(), PLAYER::PLAYER_PED_ID(), 2f, 1, 15f, 20f, 0, 0, -687903391);
							}
						}
						else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_267[iLocal_230], 780511057) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_267[iLocal_230], 780511057) != 0)
						{
							TASK::TASK_COMBAT_PED(iLocal_267[iLocal_230], PLAYER::PLAYER_PED_ID(), 0, 16);
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_267[iLocal_230], 50, 1);
						}
					}
					else if (func_13(PLAYER::PLAYER_PED_ID(), iLocal_267[iLocal_230]) > 200f)
					{
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_267[iLocal_230]));
					}
					else if (func_13(PLAYER::PLAYER_PED_ID(), iLocal_267[iLocal_230]) > 5f)
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_267[iLocal_230], -1207174364) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_267[iLocal_230], -1207174364) != 0)
						{
							TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(iLocal_267[iLocal_230], PLAYER::PLAYER_PED_ID(), PLAYER::PLAYER_PED_ID(), 2f, 1, 15f, 20f, 0, 0, -687903391);
						}
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_267[iLocal_230], 780511057) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_267[iLocal_230], 780511057) != 0)
					{
						TASK::TASK_COMBAT_PED(iLocal_267[iLocal_230], PLAYER::PLAYER_PED_ID(), 0, 16);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_267[iLocal_230], 50, 1);
					}
				}
			}
		}
		iLocal_230++;
	}
	if (iLocal_366 == 1)
	{
		if (iLocal_343 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_285[0]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_285[0], 0))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_285[0]))
					{
					}
					else
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_267[6]))
						{
							if (!PED::IS_PED_INJURED(iLocal_267[6]))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_267[6], 0);
								TASK::CLEAR_PED_TASKS(iLocal_267[6]);
								TASK::OPEN_SEQUENCE_TASK(&uLocal_303);
								TASK::TASK_LEAVE_VEHICLE(0, iLocal_285[0], 256);
								TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_303);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_267[6], uLocal_303);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_303);
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_267[7]))
						{
							if (!PED::IS_PED_INJURED(iLocal_267[7]))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_267[7], 0);
								TASK::CLEAR_PED_TASKS(iLocal_267[7]);
								TASK::OPEN_SEQUENCE_TASK(&uLocal_303);
								TASK::TASK_LEAVE_VEHICLE(0, iLocal_285[0], 256);
								TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_303);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_267[7], uLocal_303);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_303);
							}
						}
						iLocal_343 = 1;
					}
				}
			}
		}
		else if (iLocal_398 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_285[0]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_285[0], 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_267[6]))
					{
						if (!PED::IS_PED_INJURED(iLocal_267[6]))
						{
							if (!PED::IS_PED_IN_VEHICLE(iLocal_267[6], iLocal_285[0], 0))
							{
								if (func_13(PLAYER::PLAYER_PED_ID(), iLocal_267[6]) < 20f)
								{
									func_14(iLocal_267[6], "DRAW_GUN", 24);
									iLocal_398 = 1;
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_344 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_285[1]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_285[1], 0))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_285[1]))
					{
					}
					else
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_267[8]))
						{
							if (!PED::IS_PED_INJURED(iLocal_267[8]))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_267[8], 0);
								TASK::CLEAR_PED_TASKS(iLocal_267[8]);
								TASK::OPEN_SEQUENCE_TASK(&uLocal_303);
								TASK::TASK_LEAVE_VEHICLE(0, iLocal_285[1], 256);
								TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_303);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_267[8], uLocal_303);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_303);
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_267[9]))
						{
							if (!PED::IS_PED_INJURED(iLocal_267[9]))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_267[9], 0);
								TASK::CLEAR_PED_TASKS(iLocal_267[9]);
								TASK::OPEN_SEQUENCE_TASK(&uLocal_303);
								TASK::TASK_LEAVE_VEHICLE(0, iLocal_285[1], 256);
								TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_303);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_267[9], uLocal_303);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_303);
							}
						}
						iLocal_344 = 1;
					}
				}
			}
		}
	}
	if (iLocal_345 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_267[10]))
		{
			if (!PED::IS_PED_INJURED(iLocal_267[10]))
			{
				if (func_13(PLAYER::PLAYER_PED_ID(), iLocal_267[10]) > 200f)
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_267[iLocal_230]));
					STREAMING::REMOVE_ANIM_DICT("misssolomon_3");
				}
				else if (STREAMING::HAS_ANIM_DICT_LOADED("misssolomon_3"))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -923.2303f, -2948.004f, 12.9451f, 2f, 2f, 2f, 0, 1, 0))
					{
						if (!PED::IS_PED_INJURED(iLocal_267[10]))
						{
							TASK::CLEAR_PED_TASKS(iLocal_267[10]);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_303);
							TASK::TASK_PLAY_ANIM(0, "misssolomon_3", "plyr_roll_left", 8f, -8f, -1, 0, 0, 0, 0, 0);
							TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_303);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_267[10], uLocal_303);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_303);
							iLocal_345 = 1;
						}
					}
				}
			}
		}
	}
}

float func_13(int iParam0, int iParam1)//Position - 0x16FD
{
	return func_16(iParam0, iParam1, 1);
}

void func_14(var uParam0, char* sParam1, int iParam2)//Position - 0x170E
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(uParam0, sParam1, func_15(iParam2), 1);
}

int func_15(int iParam0)//Position - 0x1725
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

float func_16(int iParam0, int iParam1, int iParam2)//Position - 0x191A
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

void func_17(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x1976
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

void func_18(int iParam0, bool bParam1)//Position - 0x1A11
{
	if (MISC::IS_BIT_SET(Global_6019, iParam0))
	{
		if (!bParam1)
		{
			MISC::CLEAR_BIT(&Global_6019, iParam0);
			StringCopy(&(Global_601A[iParam0 /*6*/]), "NULL", 24);
			Global_6051[iParam0] = bParam1;
		}
	}
}

int func_19(int iParam0)//Position - 0x1A48
{
	if (MISC::IS_BIT_SET(Global_6019, iParam0))
	{
		return 1;
	}
	return 0;
}

void func_20(char* sParam0, int iParam1, int iParam2)//Position - 0x1A61
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, 1);
}

void func_21(int iParam0, int iParam1, int iParam2)//Position - 0x1A7A
{
	if (func_23() && func_24())
	{
		while (Global_15F65 != 6)
		{
			SYSTEM::WAIT(0);
		}
		MISC::SET_GAME_PAUSED(0);
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
			}
		}
		if (iParam0 != 0)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iParam0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
					{
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, 0))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, iParam1);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
							SYSTEM::WAIT(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
		}
		GRAPHICS::ANIMPOSTFX_STOP_ALL();
		func_22(0);
	}
}

void func_22(int iParam0)//Position - 0x1B3E
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&(Global_15F6A.f_14), 13);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_15F6A.f_14), 13);
	}
}

int func_23()//Position - 0x1B67
{
	if (Global_15F6A == 10 || Global_15F6A == 9)
	{
		return 1;
	}
	return 0;
}

bool func_24()//Position - 0x1B8B
{
	return MISC::IS_BIT_SET(Global_15F6A.f_14, 13);
}

void func_25(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x1B9F
{
	int iVar0;
	int iVar1;
	var uVar2;
	char[] cVar3[8];
	int iVar4;
	var uVar5;
	int iVar6;
	
	if (iParam3 == 1)
	{
		if (!MISC::ARE_STRINGS_EQUAL("FinaleC2", SCRIPT::GET_THIS_SCRIPT_NAME()))
		{
		}
	}
	iVar0 = 0;
	if (iParam3 == 1)
	{
		if (iParam0 != Global_15F8F)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_15F8F)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		func_103(1);
		if (iParam0 <= Global_15F8F)
		{
		}
		iVar1 = func_101(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_17C49.f_1CAD.f_148[iVar1 /*6*/].f_1 = 0;
			uVar2 = func_99(iVar1);
			cVar3 = { Global_13D03[iVar1 /*34*/].f_8 };
			if (iVar1 == 90)
			{
				switch (Global_17C49.f_1CAD.f_63.f_CB[7])
				{
					case 1:
						StringConCat(&cVar3, "A", 8);
						break;
					
					case 2:
						StringConCat(&cVar3, "B", 8);
						break;
					}
			}
			STATS::PLAYSTATS_MISSION_CHECKPOINT(&cVar3, uVar2, Global_15F8F, iParam0);
		}
		else
		{
			iVar4 = func_94(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
			if (iVar4 != -1)
			{
				Global_17C49.f_41BC[iVar4 /*6*/].f_4 = 0;
				MemCopy(&uVar5, {func_93(iVar4)}, 4);
				STATS::PLAYSTATS_MISSION_CHECKPOINT(&uVar5, 0, Global_15F8F, iParam0);
			}
			else
			{
				iVar6 = func_92(&(Global_15F6A.f_3));
				if (iVar6 > -1)
				{
					Global_17C49.f_6E17.f_4[iVar6] = 0;
				}
			}
		}
		Global_14A41 = iParam2;
		Global_15F8F = iParam0;
		func_26(iParam0, sParam1, iParam4, iParam5);
		if (MISC::ARE_STRINGS_EQUAL(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_15F8F)
	{
	}
}

void func_26(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x1D15
{
	func_27(&Global_16D94, SCRIPT::GET_THIS_SCRIPT_NAME(), iParam0, uParam1, iParam3, iParam2);
}

void func_27(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)//Position - 0x1D31
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_91();
	uParam0->f_1 = func_80();
	MISC::_GET_WEATHER_TYPE_TRANSITION(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_65(&(uParam0->f_871), 0);
		func_64(PLAYER::PLAYER_PED_ID());
		func_58(PLAYER::PLAYER_PED_ID(), 0);
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &(uParam0->f_2), 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object"))
		{
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_11[iVar1] = Global_17C49.f_6C1.f_21B.f_126[iVar1];
		if (iVar1 == func_55())
		{
			func_48(PLAYER::PLAYER_PED_ID(), &(uParam0->f_1D8[iVar1 /*65*/]), 1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_1D8[iVar1 /*65*/][iVar0] = Global_15E98[iVar1 /*65*/][iVar0];
				uParam0->f_1D8[iVar1 /*65*/].f_D[iVar0] = Global_15E98[iVar1 /*65*/].f_D[iVar0];
				iVar0++;
			}
			uParam0->f_1D8[iVar1 /*65*/].f_3B = Global_15E98[iVar1 /*65*/].f_3B;
			uParam0->f_1D8[iVar1 /*65*/].f_3C = Global_15E98[iVar1 /*65*/].f_3C;
			uParam0->f_1D8[iVar1 /*65*/].f_3D = Global_15E98[iVar1 /*65*/].f_3D;
			uParam0->f_1D8[iVar1 /*65*/].f_3E = Global_15E98[iVar1 /*65*/].f_3E;
			uParam0->f_1D8[iVar1 /*65*/].f_3F = Global_15E98[iVar1 /*65*/].f_3F;
			uParam0->f_1D8[iVar1 /*65*/].f_40 = Global_15E98[iVar1 /*65*/].f_40;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_1D8[iVar1 /*65*/].f_27[iVar0] = Global_15E98[iVar1 /*65*/].f_27[iVar0];
				uParam0->f_1D8[iVar1 /*65*/].f_31[iVar0] = Global_15E98[iVar1 /*65*/].f_31[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_29C[iVar1 /*284*/][iVar0 /*3*/] = { Global_17C49.f_6C1.f_21B.f_12A[iVar1 /*284*/][iVar0 /*3*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			uParam0->f_29C[iVar1 /*284*/].f_85[iVar0 /*3*/] = { Global_17C49.f_6C1.f_21B.f_12A[iVar1 /*284*/].f_85[iVar0 /*3*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				STATS::STAT_GET_INT(joaat("sp0_weap_purch_0"), &(uParam0->f_5F1[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_purch_1"), &(uParam0->f_5F1[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_5F1[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_5F1[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_5F1[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_5F1[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_5F1[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_5F1[iVar1 /*32*/].f_10[0]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_5F1[iVar1 /*32*/].f_10[1]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_5F1[iVar1 /*32*/].f_10[2]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_5F1[iVar1 /*32*/].f_10[3]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_5F1[iVar1 /*32*/].f_10[4]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_5F1[iVar1 /*32*/].f_10[5]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_5F1[iVar1 /*32*/].f_10[6]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_5F1[iVar1 /*32*/].f_10[7]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_5F1[iVar1 /*32*/].f_10[8]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_5F1[iVar1 /*32*/].f_10[9]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_5F1[iVar1 /*32*/].f_10[10]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_5F1[iVar1 /*32*/].f_10[11]), -1);
				break;
			
			case 1:
				STATS::STAT_GET_INT(joaat("sp1_weap_purch_0"), &(uParam0->f_5F1[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_purch_1"), &(uParam0->f_5F1[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_5F1[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_5F1[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_5F1[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_5F1[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_5F1[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_5F1[iVar1 /*32*/].f_10[0]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_5F1[iVar1 /*32*/].f_10[1]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_5F1[iVar1 /*32*/].f_10[2]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_5F1[iVar1 /*32*/].f_10[3]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_5F1[iVar1 /*32*/].f_10[4]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_5F1[iVar1 /*32*/].f_10[5]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_5F1[iVar1 /*32*/].f_10[6]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_5F1[iVar1 /*32*/].f_10[7]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_5F1[iVar1 /*32*/].f_10[8]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_5F1[iVar1 /*32*/].f_10[9]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_5F1[iVar1 /*32*/].f_10[10]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_5F1[iVar1 /*32*/].f_10[11]), -1);
				break;
			
			case 2:
				STATS::STAT_GET_INT(joaat("sp2_weap_purch_0"), &(uParam0->f_5F1[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_purch_1"), &(uParam0->f_5F1[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_5F1[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_5F1[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_5F1[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_5F1[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_5F1[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_5F1[iVar1 /*32*/].f_10[0]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_5F1[iVar1 /*32*/].f_10[1]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_5F1[iVar1 /*32*/].f_10[2]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_5F1[iVar1 /*32*/].f_10[3]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_5F1[iVar1 /*32*/].f_10[4]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_5F1[iVar1 /*32*/].f_10[5]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_5F1[iVar1 /*32*/].f_10[6]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_5F1[iVar1 /*32*/].f_10[7]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_5F1[iVar1 /*32*/].f_10[8]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_5F1[iVar1 /*32*/].f_10[9]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_5F1[iVar1 /*32*/].f_10[10]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_5F1[iVar1 /*32*/].f_10[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_17C49.f_5CED.f_E9[iVar1 /*69*/].f_1;
		uParam0->f_D[iVar1] = Global_CAD5[iVar1];
		uParam0->f_19[0 /*223*/][iVar1 /*74*/] = { Global_17C49.f_6C1.f_21B.f_663[0 /*223*/][iVar1 /*74*/] };
		uParam0->f_19[1 /*223*/][iVar1 /*74*/] = { Global_17C49.f_6C1.f_21B.f_663[1 /*223*/][iVar1 /*74*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_843[iVar1 /*15*/][iVar0] = Global_17C49.f_6C1.f_1ED[iVar1 /*15*/][iVar0];
			uParam0->f_843[iVar1 /*15*/].f_5[iVar0] = Global_17C49.f_6C1.f_1ED[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_843[iVar1 /*15*/].f_A[iVar0] = Global_17C49.f_6C1.f_1ED[iVar1 /*15*/].f_A[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_656[iVar1 /*164*/][iVar0] = Global_17C49.f_6C1[iVar1 /*164*/][iVar0];
			uParam0->f_656[iVar1 /*164*/].f_4[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_656[iVar1 /*164*/].f_8[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_656[iVar1 /*164*/].f_C[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_C[iVar0];
			uParam0->f_656[iVar1 /*164*/].f_10[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_10[iVar0];
			uParam0->f_656[iVar1 /*164*/].f_14[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_14[iVar0];
			uParam0->f_656[iVar1 /*164*/].f_18[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_18[iVar0];
			uParam0->f_656[iVar1 /*164*/].f_1C[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_1C[iVar0];
			uParam0->f_656[iVar1 /*164*/].f_20[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_656[iVar1 /*164*/].f_24[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_656[iVar1 /*164*/].f_28[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_656[iVar1 /*164*/].f_2C[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_2C[iVar0];
			uParam0->f_656[iVar1 /*164*/].f_30[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_30[iVar0];
			uParam0->f_656[iVar1 /*164*/].f_34[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_34[iVar0];
			uParam0->f_656[iVar1 /*164*/].f_38[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_38[iVar0];
			uParam0->f_656[iVar1 /*164*/].f_3C[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_3C[iVar0];
			uParam0->f_656[iVar1 /*164*/].f_40[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_656[iVar1 /*164*/].f_44[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_656[iVar1 /*164*/].f_48[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_656[iVar1 /*164*/].f_4C[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_4C[iVar0];
			uParam0->f_656[iVar1 /*164*/].f_50[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_50[iVar0];
			uParam0->f_656[iVar1 /*164*/].f_54[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_54[iVar0];
			uParam0->f_656[iVar1 /*164*/].f_58[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_58[iVar0];
			uParam0->f_656[iVar1 /*164*/].f_5C[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_5C[iVar0];
			uParam0->f_656[iVar1 /*164*/].f_60[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_656[iVar1 /*164*/].f_64[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_656[iVar1 /*164*/].f_68[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_656[iVar1 /*164*/].f_6C[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_6C[iVar0];
			uParam0->f_656[iVar1 /*164*/].f_70[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_70[iVar0];
			uParam0->f_656[iVar1 /*164*/].f_74[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_74[iVar0];
			uParam0->f_656[iVar1 /*164*/].f_78[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_78[iVar0];
			uParam0->f_656[iVar1 /*164*/].f_7C[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_7C[iVar0];
			uParam0->f_656[iVar1 /*164*/].f_80[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_656[iVar1 /*164*/].f_84[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_656[iVar1 /*164*/].f_88[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_656[iVar1 /*164*/].f_8C[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_8C[iVar0];
			uParam0->f_656[iVar1 /*164*/].f_90[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_90[iVar0];
			uParam0->f_656[iVar1 /*164*/].f_94[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_94[iVar0];
			uParam0->f_656[iVar1 /*164*/].f_98[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_98[iVar0];
			uParam0->f_656[iVar1 /*164*/].f_9C[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_9C[iVar0];
			uParam0->f_656[iVar1 /*164*/].f_A0[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_A0[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	STATS::STAT_GET_INT(joaat("sp0_special_ability"), &(uParam0->f_652[0]), -1);
	STATS::STAT_GET_INT(joaat("sp1_special_ability"), &(uParam0->f_652[1]), -1);
	STATS::STAT_GET_INT(joaat("sp2_special_ability"), &(uParam0->f_652[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_29(&(uParam0->f_877), uParam0, iParam5, 1, 1, 0);
	}
	func_28(&(uParam0->f_8B9));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

int func_28(var uParam0)//Position - 0x2BB5
{
	*uParam0 = Global_150C8;
	uParam0->f_1 = Global_150C9;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_29(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x2BD7
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = PLAYER::PLAYER_PED_ID();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		uParam1->f_5 = func_46(iParam2);
	}
	if (func_43(iParam2, &iVar0, iParam3, iParam5))
	{
		func_30(uParam0, uParam1, iVar0, iParam4);
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			if (VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("skylift")) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, 0))
			{
				func_30(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_30(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x2C5E
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam2, 0))
	{
		func_32(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_31(iParam2))
		{
			uParam1->f_3 = 1;
		}
		else
		{
			uParam1->f_3 = 0;
		}
		return 1;
	}
	return 0;
}

int func_31(int iParam0)//Position - 0x2C9E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_15F6A.f_16[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_32(var uParam0, int iParam1, int iParam2)//Position - 0x2CCC
{
	func_39(iParam1, &(uParam0->f_C));
	uParam0->f_7 = func_35(iParam1, 145, 0);
	uParam0->f_B = func_34(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_A)
		{
			uParam0->f_A = func_33(iParam1);
		}
	}
	if (iParam2 == 1)
	{
		*uParam0 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
		uParam0->f_6 = ENTITY::GET_ENTITY_HEADING(iParam1);
		uParam0->f_3 = { ENTITY::GET_ENTITY_VELOCITY(iParam1) };
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
		if (Global_109CB == iParam1)
		{
			uParam0->f_9 = 1;
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		uParam0->f_8 = 1;
	}
	else
	{
		uParam0->f_8 = 0;
	}
}

int func_33(int iParam0)//Position - 0x2DA8
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_10642.f_1E4[iVar0]))
		{
			if (iParam0 == Global_10642.f_1E4[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_34(int iParam0)//Position - 0x2DEA
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

int func_35(int iParam0, int iParam1, int iParam2)//Position - 0x2E4D
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_15692[iVar0]))
		{
			if (Global_15692[iVar0] == iParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_1569C[iVar0])
				{
					if (iParam2 == 0 || ENTITY::GET_ENTITY_MODEL(iParam0) == func_36(iParam1, iParam2))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_36(int iParam0, int iParam1)//Position - 0x2EDB
{
	struct<58> Var0;
	
	if (func_38(iParam0))
	{
		Var0.f_B = 12;
		Var0.f_1F = 25;
		Var0.f_39 = 2;
		func_37(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_37(int iParam0, var uParam1, int iParam2)//Position - 0x2F1D
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

bool func_38(int iParam0)//Position - 0x3195
{
	return iParam0 < 3;
}

void func_39(int iParam0, var uParam1)//Position - 0x31A1
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		func_42(uParam1);
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
		func_41(&iParam0, &(uParam1->f_9), &(uParam1->f_23));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
			{
				MISC::SET_BIT(&(uParam1->f_35), func_40(iVar0 + 1));
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

int func_40(int iParam0)//Position - 0x344D
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

int func_41(int iParam0, var uParam1, var uParam2)//Position - 0x34FD
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

void func_42(var uParam0)//Position - 0x35D7
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

int func_43(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x3688
{
	char* sVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				*uParam1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			}
			else
			{
				*uParam1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, 1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam1, 0))
				{
					if (iParam2 == 0 || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(*uParam1, 1), ENTITY::GET_ENTITY_COORDS(iParam0, 1), 1) < 100f)
					{
						if (VEHICLE::IS_VEHICLE_MODEL(*uParam1, joaat("taxi")))
						{
							if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, -1) != iParam0 && VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, -1) != 0)
							{
								return 0;
							}
						}
						if (func_44(*uParam1, func_91(), 1))
						{
							sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
							if (!MISC::ARE_STRINGS_EQUAL(sVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, 1))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (DECORATOR::DECOR_EXIST_ON(*uParam1, "IgnoredByQuickSave"))
							{
								if (DECORATOR::DECOR_GET_BOOL(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (VEHICLE::IS_VEHICLE_MODEL(*uParam1, joaat("blimp")))
						{
							return 0;
						}
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_44(int iParam0, int iParam1, bool bParam2)//Position - 0x37B5
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_45(iParam1, iVar0, &sVar1, &iVar2))
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

int func_45(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0x3826
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

int func_46(int iParam0)//Position - 0x38FF
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_47(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_47(int iParam0)//Position - 0x393C
{
	if (func_38(iParam0))
	{
		return Global_17C49.f_744E[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_48(int iParam0, var uParam1, int iParam2)//Position - 0x3966
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = func_46(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_54(iParam0, iVar1, &(uParam1->f_D[iVar1]), uParam1[iVar1], &(uParam1->f_1A[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_53(iParam0, iVar1, &(uParam1->f_27[iVar1]), &(uParam1->f_31[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_38(iVar0))
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
			if (func_52(161, -1))
			{
				uParam1->f_3B = func_49(2035, Global_10A08, 0);
			}
			else
			{
				uParam1->f_3B = func_49(740, Global_10A08, 0);
			}
			uParam1->f_3C = func_49(741, Global_10A08, 0);
			uParam1->f_3D = func_49(742, Global_10A08, 0);
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == PLAYER::PLAYER_PED_ID())
		{
			if (func_52(161, -1))
			{
				uParam1->f_3B = func_49(2035, Global_10A08, 0);
			}
			else
			{
				uParam1->f_3B = func_49(740, Global_10A08, 0);
			}
		}
	}
}

int func_49(int iParam0, int iParam1, int iParam2)//Position - 0x3B10
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_25744D[iParam0 /*6*/][func_50(iParam1)];
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_50(var uParam0)//Position - 0x3B42
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_51();
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

int func_51()//Position - 0x3B76
{
	return Global_1407E1;
}

int func_52(int iParam0, int iParam1)//Position - 0x3B82
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_25BDB1[iParam0 /*6*/][func_50(iParam1)];
	if (STATS::STAT_GET_BOOL(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_53(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)//Position - 0x3BAE
{
	int iVar0;
	
	iVar0 = func_46(iParam0);
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

void func_54(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)//Position - 0x40F7
{
	int iVar0;
	
	iVar0 = func_46(iParam0);
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

int func_55()//Position - 0x4338
{
	func_56();
	return Global_17C49.f_6C1.f_21B.f_C8D;
}

void func_56()//Position - 0x4351
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_47(Global_17C49.f_6C1.f_21B.f_C8D) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_46(PLAYER::PLAYER_PED_ID());
			if (func_38(iVar0) && (!func_57(14) || Global_17832))
			{
				if (Global_17C49.f_6C1.f_21B.f_C8D != iVar0 && func_38(Global_17C49.f_6C1.f_21B.f_C8D))
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

bool func_57(int iParam0)//Position - 0x444E
{
	return Global_8861 == iParam0;
}

void func_58(int iParam0, bool bParam1)//Position - 0x445C
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = func_46(iParam0);
	if (func_38(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		if (iParam0 == PLAYER::PLAYER_PED_ID())
		{
			func_59(iParam0, &(Global_17C49.f_6C1.f_21B.f_12A[iVar0 /*284*/]));
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
			PLAYER::GET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), &uVar3);
			if (iVar0 == 0)
			{
				STATS::STAT_SET_INT(joaat("sp0_parachute_current_tint"), uVar3, 1);
			}
			else if (iVar0 == 1)
			{
				STATS::STAT_SET_INT(joaat("sp1_parachute_current_tint"), uVar3, 1);
			}
			else if (iVar0 == 2)
			{
				STATS::STAT_SET_INT(joaat("sp2_parachute_current_tint"), uVar3, 1);
			}
		}
	}
}

void func_59(int iParam0, var uParam1)//Position - 0x454F
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
			iVar3 = func_63(iVar0);
			if (iVar3 != 0)
			{
				Var4.x = WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(iParam0, func_63(iVar0));
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
					iVar2 = func_61(Var4.x, iVar1);
					while (iVar2 != 0)
					{
						if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, Var4.x, iVar2))
						{
							MISC::SET_BIT(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_61(Var4.x, iVar1);
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
			if ((FILES::GET_DLC_WEAPON_DATA(iVar5, &Var7) && !func_60(Var7.f_1)) && iVar9 < 50)
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

int func_60(int iParam0)//Position - 0x47B3
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

int func_61(int iParam0, int iParam1)//Position - 0x48D9
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
				iVar1 = func_62(iParam0, &uVar2);
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

int func_62(int iParam0, var uParam1)//Position - 0x50F5
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

int func_63(int iParam0)//Position - 0x5130
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

void func_64(int iParam0)//Position - 0x53A4
{
	int iVar0;
	
	iVar0 = func_46(iParam0);
	if (func_38(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		Global_17C49.f_6C1.f_21B.f_126[iVar0] = PED::GET_PED_ARMOUR(iParam0);
	}
}

void func_65(var uParam0, int iParam1)//Position - 0x53E0
{
	int iVar0;
	struct<3> Var1;
	var uVar2;
	int iVar3;
	
	*uParam0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	uParam0->f_3 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
	uParam0->f_5 = PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID());
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		uParam0->f_4 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	}
	if (SYSTEM::VDIST(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f)
	{
		*uParam0 = { 301.2162f, 202.1357f, 103.3797f };
		uParam0->f_3 = 156.5144f;
	}
	else if (SYSTEM::VDIST(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f)
	{
		*uParam0 = { 394.2567f, -713.5439f, 28.2853f };
		uParam0->f_3 = 276.6273f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1425.564f, -244.3f, 15.8053f) < 10f)
	{
		*uParam0 = { -1423.472f, -214.2539f, 45.5004f };
		uParam0->f_3 = 353.8757f;
	}
	else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("finale_choice")) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (MISC::IS_BIT_SET(Global_10B8D, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (MISC::IS_BIT_SET(Global_10B8D, 5))
	{
		*uParam0 = { -745.4462f, 5595.146f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (MISC::IS_BIT_SET(Global_10B8D, 6))
	{
		*uParam0 = { -1675.521f, -1125.59f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (MISC::IS_BIT_SET(Global_10B8D, 7))
	{
		*uParam0 = { -1631.219f, -1112.805f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1272.659f, -1715.467f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.956f, -1725.189f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, 0, 1, 0))
	{
		*uParam0 = { -601.59f, 2099.197f, 128.8928f };
		uParam0->f_3 = 204.7498f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1007.393f, -477.9584f, 52.5357f) < 8f)
	{
		*uParam0 = { -1018.376f, -483.9436f, 36.0964f };
		uParam0->f_3 = 114.7664f;
	}
	else if (SYSTEM::VDIST(*uParam0, 480.6662f, -1317.808f, 28.20303f) < 15f)
	{
		*uParam0 = { 497.7238f, -1310.932f, 28.2372f };
		uParam0->f_3 = 289.3663f;
	}
	else if (SYSTEM::VDIST(*uParam0, 2329.527f, 2571.311f, 45.6779f) < 5f)
	{
		*uParam0 = { 2316.93f, 2594.153f, 45.7199f };
		uParam0->f_3 = 348.1325f;
	}
	if (iParam1 == 1)
	{
		if (func_69(&iVar0))
		{
			if (func_67(iVar0, &Var1, &uVar2))
			{
				Var1.f_2 = (Var1.f_2 + 1f);
				*uParam0 = { Var1 };
				uParam0->f_3 = uVar2;
			}
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, 1, 0))
		{
			iVar3 = func_91();
			if (iVar3 == 0)
			{
				*uParam0 = { -65.1234f, 81.2517f, 70.5644f };
				uParam0->f_3 = 71.6237f;
			}
			else if (iVar3 == 1)
			{
				*uParam0 = { -68.5531f, -1824.377f, 25.9424f };
				uParam0->f_3 = 215.8295f;
			}
			else if (iVar3 == 2)
			{
				*uParam0 = { -220.8189f, -1162.302f, 22.0242f };
				uParam0->f_3 = 70.2711f;
			}
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, 0, 1, 0))
		{
			*uParam0 = { 495.4108f, -1306.08f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, 0, 1, 0))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (func_66(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

int func_66(struct<3> Param0, char* sParam1, struct<3> Param2)//Position - 0x593B
{
	int iVar0;
	int iVar1;
	
	if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(Param0))
	{
		iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Param2, sParam1);
		if (!INTERIOR::IS_VALID_INTERIOR(iVar0))
		{
			return 0;
		}
		iVar1 = INTERIOR::GET_INTERIOR_FROM_COLLISION(Param0);
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_67(int iParam0, var uParam1, var uParam2)//Position - 0x597F
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -829.842f, -191.7454f, 36.4386f };
			*uParam2 = 29.5061f;
			break;
		
		case 1:
			*uParam1 = { 129.8484f, -1716.528f, 28.0702f };
			*uParam2 = 50.3483f;
			break;
		
		case 2:
			*uParam1 = { -1296.913f, -1120.999f, 5.3951f };
			*uParam2 = 0.9933f;
			break;
		
		case 3:
			*uParam1 = { 1938.028f, 3718.736f, 31.3154f };
			*uParam2 = 118.2305f;
			break;
		
		case 4:
			*uParam1 = { 1197.866f, -469.3809f, 65.0885f };
			*uParam2 = 346.4477f;
			break;
		
		case 5:
			*uParam1 = { -32.2161f, -135.8212f, 56.0532f };
			*uParam2 = 186.0052f;
			break;
		
		case 6:
			*uParam1 = { -287.7696f, 6238.081f, 30.2902f };
			*uParam2 = 316.1349f;
			break;
		
		case 7:
			*uParam1 = { 99.2876f, -1395.16f, 28.2759f };
			*uParam2 = 320.2739f;
			break;
		
		case 8:
			*uParam1 = { 1679.445f, 4819.056f, 41.0035f };
			*uParam2 = 4.6192f;
			break;
		
		case 9:
			*uParam1 = { 411.3063f, -809.1863f, 28.1554f };
			*uParam2 = 1.8972f;
			break;
		
		case 10:
			*uParam1 = { -1088.054f, 2699.167f, 19.2748f };
			*uParam2 = 129.7382f;
			break;
		
		case 11:
			*uParam1 = { 1194.163f, 2695.644f, 36.9225f };
			*uParam2 = 1.1454f;
			break;
		
		case 12:
			*uParam1 = { -821.2829f, -1088.027f, 10.0499f };
			*uParam2 = 120.5883f;
			break;
		
		case 13:
			*uParam1 = { -3.3416f, 6521.303f, 30.2961f };
			*uParam2 = 316.4451f;
			break;
		
		case 14:
			*uParam1 = { -1208.417f, -785.9635f, 16.0139f };
			*uParam2 = 36.3181f;
			break;
		
		case 15:
			*uParam1 = { 623.1845f, 2739.191f, 40.9588f };
			*uParam2 = 3.5411f;
			break;
		
		case 16:
			*uParam1 = { 130.9555f, -198.2084f, 53.41f };
			*uParam2 = 251.3506f;
			break;
		
		case 17:
			*uParam1 = { -3164.065f, 1067.317f, 19.6778f };
			*uParam2 = 101.2229f;
			break;
		
		case 18:
			*uParam1 = { -713.2797f, -174.2767f, 35.8962f };
			*uParam2 = 29.8138f;
			break;
		
		case 19:
			*uParam1 = { -147.0616f, -306.4322f, 37.7912f };
			*uParam2 = 160.4526f;
			break;
		
		case 20:
			*uParam1 = { -1461.355f, -230.6092f, 48.3064f };
			*uParam2 = 318.7851f;
			break;
		
		case 21:
			*uParam1 = { -1347.739f, -1278.573f, 3.8952f };
			*uParam2 = 17.9365f;
			break;
		
		case 22:
			*uParam1 = { 325.6833f, 164.3263f, 102.4425f };
			*uParam2 = 68.6407f;
			break;
		
		case 23:
			*uParam1 = { 1858.774f, 3742.393f, 32.0779f };
			*uParam2 = 301.2329f;
			break;
		
		case 24:
			*uParam1 = { -286.3272f, 6202.802f, 30.3323f };
			*uParam2 = 225.1334f;
			break;
		
		case 25:
			*uParam1 = { -1161.596f, -1417.7f, 3.712f };
			*uParam2 = 246.9161f;
			break;
		
		case 26:
			*uParam1 = { 1308.952f, -1660.611f, 50.2362f };
			*uParam2 = 163.5456f;
			break;
		
		case 27:
			*uParam1 = { -3161.585f, 1074.214f, 19.6847f };
			*uParam2 = 98.6092f;
			break;
		
		case 28:
			*uParam1 = { 28.423f, -1110.814f, 28.2848f };
			*uParam2 = 85.2495f;
			break;
		
		case 29:
			*uParam1 = { 1704.966f, 3749.709f, 33.0188f };
			*uParam2 = 45.6778f;
			break;
		
		case 30:
			*uParam1 = { 223.949f, -38.7894f, 68.6483f };
			*uParam2 = 159.4265f;
			break;
		
		case 31:
			*uParam1 = { 837.7854f, -1017.963f, 26.3045f };
			*uParam2 = 181.0445f;
			break;
		
		case 32:
			*uParam1 = { -313.1914f, 6093.351f, 30.4625f };
			*uParam2 = 315.8405f;
			break;
		
		case 33:
			*uParam1 = { -663.4631f, -952.8069f, 20.3143f };
			*uParam2 = 92.6796f;
			break;
		
		case 34:
			*uParam1 = { -1323.06f, -392.8577f, 35.4596f };
			*uParam2 = 210.7398f;
			break;
		
		case 35:
			*uParam1 = { -1106.102f, 2684.35f, 18.0953f };
			*uParam2 = 127.0383f;
			break;
		
		case 36:
			*uParam1 = { -3157.932f, 1081.309f, 19.6953f };
			*uParam2 = 100.2942f;
			break;
		
		case 37:
			*uParam1 = { 2562.882f, 312.8641f, 107.4612f };
			*uParam2 = 179.205f;
			break;
		
		case 38:
			*uParam1 = { 822.48f, -2142.875f, 27.8496f };
			*uParam2 = 355.0598f;
			break;
		
		case 39:
			*uParam1 = { -1137.053f, -1993.916f, 12.1677f };
			*uParam2 = 43.1213f;
			break;
		
		case 40:
			*uParam1 = { 717.8107f, -1084.081f, 21.3094f };
			*uParam2 = 93.2649f;
			break;
		
		case 41:
			*uParam1 = { -387.6789f, -128.2568f, 37.6796f };
			*uParam2 = 119.1085f;
			break;
		
		case 42:
			*uParam1 = { 117.8835f, 6599.415f, 31.0134f };
			*uParam2 = 90.7225f;
			break;
		
		case 43:
			*uParam1 = { 1201.709f, 2664.813f, 36.8102f };
			*uParam2 = 133.9002f;
			break;
	}
	return !func_68(*uParam1, 0f, 0f, 0f);
}

bool func_68(struct<3> Param0, struct<3> Param1)//Position - 0x5FD5
{
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

int func_69(var uParam0)//Position - 0x5FFE
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_79())
		{
			*uParam0 = func_75(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 5, -1, 0, 1);
			if (func_74(*uParam0) && !func_70(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_70(int iParam0)//Position - 0x6057
{
	return func_71(iParam0, 0, 1);
}

int func_71(int iParam0, int iParam1, bool bParam2)//Position - 0x6067
{
	if (bParam2)
	{
		return MISC::IS_BIT_SET(Global_15F9E.f_4F3[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_73() == 0)
		{
			return MISC::IS_BIT_SET(func_49(func_72(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return MISC::IS_BIT_SET(Global_17C49.f_29C[iParam0], iParam1);
	}
	return 0;
}

int func_72(int iParam0)//Position - 0x60C7
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

int func_73()//Position - 0x6370
{
	return Global_5F7C;
}

int func_74(int iParam0)//Position - 0x637B
{
	return func_71(iParam0, 5, 1);
}

int func_75(struct<3> Param0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x638B
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 43)
	{
		if (iParam1 == 5 || iParam1 == func_78(iVar0))
		{
			if (!bParam3 || func_77(iVar0))
			{
				fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, func_76(iVar0), 1);
				if ((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam2) || iParam2 == -1)) && (iParam4 || iVar0 != 21))
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

Vector3 func_76(int iParam0)//Position - 0x6422
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

int func_77(int iParam0)//Position - 0x68F3
{
	return func_71(iParam0, 0, 0);
}

int func_78(int iParam0)//Position - 0x6903
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

bool func_79()//Position - 0x6B5C
{
	return Global_15F9E.f_122 > 0;
}

var func_80()//Position - 0x6B6D
{
	var uVar0;
	
	func_90(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_89(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_88(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_83(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_82(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_81(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_81(var uParam0, int iParam1)//Position - 0x6BB3
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

void func_82(var uParam0, int iParam1)//Position - 0x6C39
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_83(var uParam0, int iParam1)//Position - 0x6C6C
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_87(*uParam0);
	iVar1 = func_85(*uParam0);
	if (iParam1 < 1 || iParam1 > func_84(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_84(int iParam0, int iParam1)//Position - 0x6CBD
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

int func_85(int iParam0)//Position - 0x6D5F
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_86(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_86(bool bParam0, int iParam1, int iParam2)//Position - 0x6D84
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_87(int iParam0)//Position - 0x6D9B
{
	return iParam0 & 15;
}

void func_88(var uParam0, int iParam1)//Position - 0x6DA8
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_89(var uParam0, int iParam1)//Position - 0x6DE2
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_90(var uParam0, int iParam1)//Position - 0x6E1D
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_91()//Position - 0x6E59
{
	func_56();
	return Global_17C49.f_6C1.f_21B.f_C8D;
}

int func_92(char* sParam0)//Position - 0x6E72
{
	if (MISC::ARE_STRINGS_EQUAL("BailBond1", sParam0))
	{
		return 0;
	}
	else if (MISC::ARE_STRINGS_EQUAL("BailBond2", sParam0))
	{
		return 1;
	}
	else if (MISC::ARE_STRINGS_EQUAL("BailBond3", sParam0))
	{
		return 2;
	}
	else if (MISC::ARE_STRINGS_EQUAL("BailBond4", sParam0))
	{
		return 3;
	}
	return -1;
}

struct<2> func_93(int iParam0)//Position - 0x6EC8
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

int func_94(char* sParam0, int iParam1)//Position - 0x7315
{
	int iVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	
	iVar2 = MISC::GET_HASH_KEY(sParam0);
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < 63)
	{
		iVar0 = iVar3;
		func_95(iVar0, &sVar1);
		if (MISC::GET_HASH_KEY(sVar1) == iVar2)
		{
			return iVar0;
		}
		iVar3++;
	}
	if (iParam1 == 0)
	{
	}
	return -1;
}

void func_95(int iParam0, var uParam1)//Position - 0x735E
{
	switch (iParam0)
	{
		case 0:
			func_96(uParam1, "Abigail1", func_98(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_97(iParam0), 1, 0);
			break;
		
		case 1:
			func_96(uParam1, "Abigail2", func_98(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_97(iParam0), 1, 0);
			break;
		
		case 2:
			func_96(uParam1, "Barry1", func_98(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_97(iParam0), 1, 0);
			break;
		
		case 3:
			func_96(uParam1, "Barry2", func_98(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_97(iParam0), 1, 1);
			break;
		
		case 4:
			func_96(uParam1, "Barry3", func_98(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 5:
			func_96(uParam1, "Barry3A", func_98(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 6:
			func_96(uParam1, "Barry3C", func_98(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 7:
			func_96(uParam1, "Barry4", func_98(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_97(iParam0), 0, 0);
			break;
		
		case 8:
			func_96(uParam1, "Dreyfuss1", func_98(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 9:
			func_96(uParam1, "Epsilon1", func_98(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 10:
			func_96(uParam1, "Epsilon2", func_98(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_97(iParam0), 1, 0);
			break;
		
		case 11:
			func_96(uParam1, "Epsilon3", func_98(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 12:
			func_96(uParam1, "Epsilon4", func_98(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 13:
			func_96(uParam1, "Epsilon5", func_98(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_97(iParam0), 1, 0);
			break;
		
		case 14:
			func_96(uParam1, "Epsilon6", func_98(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 15:
			func_96(uParam1, "Epsilon7", func_98(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 16:
			func_96(uParam1, "Epsilon8", func_98(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_97(iParam0), 1, 0);
			break;
		
		case 17:
			func_96(uParam1, "Extreme1", func_98(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 18:
			func_96(uParam1, "Extreme2", func_98(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 19:
			func_96(uParam1, "Extreme3", func_98(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 20:
			func_96(uParam1, "Extreme4", func_98(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 21:
			func_96(uParam1, "Fanatic1", func_98(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_97(iParam0), 1, 0);
			break;
		
		case 22:
			func_96(uParam1, "Fanatic2", func_98(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_97(iParam0), 1, 0);
			break;
		
		case 23:
			func_96(uParam1, "Fanatic3", func_98(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_97(iParam0), 0, 1);
			break;
		
		case 24:
			func_96(uParam1, "Hao1", func_98(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_97(iParam0), 0, 1);
			break;
		
		case 25:
			func_96(uParam1, "Hunting1", func_98(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 26:
			func_96(uParam1, "Hunting2", func_98(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 27:
			func_96(uParam1, "Josh1", func_98(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_97(iParam0), 1, 0);
			break;
		
		case 28:
			func_96(uParam1, "Josh2", func_98(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_97(iParam0), 1, 1);
			break;
		
		case 29:
			func_96(uParam1, "Josh3", func_98(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_97(iParam0), 1, 1);
			break;
		
		case 30:
			func_96(uParam1, "Josh4", func_98(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_97(iParam0), 1, 0);
			break;
		
		case 31:
			func_96(uParam1, "Maude1", func_98(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 32:
			func_96(uParam1, "Minute1", func_98(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 33:
			func_96(uParam1, "Minute2", func_98(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 34:
			func_96(uParam1, "Minute3", func_98(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 35:
			func_96(uParam1, "MrsPhilips1", func_98(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 36:
			func_96(uParam1, "MrsPhilips2", func_98(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 37:
			func_96(uParam1, "Nigel1", func_98(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_97(iParam0), 1, 0);
			break;
		
		case 38:
			func_96(uParam1, "Nigel1A", func_98(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_97(iParam0), 1, 1);
			break;
		
		case 39:
			func_96(uParam1, "Nigel1B", func_98(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_97(iParam0), 1, 1);
			break;
		
		case 40:
			func_96(uParam1, "Nigel1C", func_98(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_97(iParam0), 1, 1);
			break;
		
		case 41:
			func_96(uParam1, "Nigel1D", func_98(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_97(iParam0), 1, 1);
			break;
		
		case 42:
			func_96(uParam1, "Nigel2", func_98(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_97(iParam0), 1, 1);
			break;
		
		case 43:
			func_96(uParam1, "Nigel3", func_98(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_97(iParam0), 1, 1);
			break;
		
		case 44:
			func_96(uParam1, "Omega1", func_98(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 45:
			func_96(uParam1, "Omega2", func_98(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 46:
			func_96(uParam1, "Paparazzo1", func_98(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 47:
			func_96(uParam1, "Paparazzo2", func_98(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 48:
			func_96(uParam1, "Paparazzo3", func_98(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 49:
			func_96(uParam1, "Paparazzo3A", func_98(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 50:
			func_96(uParam1, "Paparazzo3B", func_98(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 51:
			func_96(uParam1, "Paparazzo4", func_98(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 52:
			func_96(uParam1, "Rampage1", func_98(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 54:
			func_96(uParam1, "Rampage3", func_98(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_97(iParam0), 1, 0);
			break;
		
		case 55:
			func_96(uParam1, "Rampage4", func_98(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_97(iParam0), 1, 0);
			break;
		
		case 56:
			func_96(uParam1, "Rampage5", func_98(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 53:
			func_96(uParam1, "Rampage2", func_98(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_97(iParam0), 1, 0);
			break;
		
		case 57:
			func_96(uParam1, "TheLastOne", func_98(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 58:
			func_96(uParam1, "Tonya1", func_98(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 59:
			func_96(uParam1, "Tonya2", func_98(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 60:
			func_96(uParam1, "Tonya3", func_98(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 61:
			func_96(uParam1, "Tonya4", func_98(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 62:
			func_96(uParam1, "Tonya5", func_98(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_96(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)//Position - 0x85A6
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

int func_97(int iParam0)//Position - 0x8637
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

struct<2> func_98(int iParam0)//Position - 0x897D
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_93(iParam0) };
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

int func_99(int iParam0)//Position - 0x89B5
{
	switch (iParam0)
	{
		case 69:
		case 70:
			return func_100(Global_17C49.f_1CAD.f_63.f_CB[10]);
			break;
		
		case 74:
		case 75:
			return func_100(Global_17C49.f_1CAD.f_63.f_CB[8]);
			break;
		
		case 84:
		case 85:
			return func_100(Global_17C49.f_1CAD.f_63.f_CB[11]);
			break;
		
		case 90:
			return func_100(Global_17C49.f_1CAD.f_63.f_CB[7]);
			break;
		
		case 93:
			return func_100(Global_17C49.f_1CAD.f_63.f_CB[9]);
			break;
	}
	return 0;
}

int func_100(int iParam0)//Position - 0x8A71
{
	switch (iParam0)
	{
		case 1:
		case 3:
		case 5:
		case 6:
		case 8:
			return 0;
			break;
		
		case 2:
		case 4:
		case 7:
		case 9:
			return 1;
			break;
	}
	return -1;
}

int func_101(char* sParam0, bool bParam1)//Position - 0x8AC5
{
	int iVar0;
	int iVar1;
	
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	iVar1 = func_102(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_102(int iParam0, bool bParam1)//Position - 0x8AEF
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 94)
	{
		if (Global_13D03[iVar0 /*34*/].f_6 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	if (!bParam1)
	{
	}
	return -1;
}

void func_103(bool bParam0)//Position - 0x8B25
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

void func_104()//Position - 0x8DA7
{
	MISC::SET_WEATHER_TYPE_NOW("EXTRASUNNY");
	func_185();
	func_157();
	func_106();
	if (!func_24())
	{
		func_105();
	}
	iLocal_348 = 1;
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
}

void func_105()//Position - 0x8DD6
{
	switch (iLocal_221)
	{
		case 2:
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1019.579f, -484.872f, 36.0795f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 93.7701f);
			break;
		
		case 3:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_278, 0))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_278, 0))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_278, -1);
				}
				ENTITY::SET_ENTITY_HEALTH(iLocal_278, 3000);
				ENTITY::SET_ENTITY_PROOFS(iLocal_278, 0, 1, 0, 0, 0, 0, 0, 0);
			}
			break;
		
		case 5:
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -935.4413f, -2928.061f, 12.9451f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 178.466f);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(PLAYER::PLAYER_PED_ID(), 1);
			break;
		
		case 8:
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -937.5466f, -2968.713f, 12.9451f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 111.5016f);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(PLAYER::PLAYER_PED_ID(), 1);
			break;
	}
}

void func_106()//Position - 0x8EEC
{
	switch (iLocal_221)
	{
		case 2:
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
			MISC::CLEAR_AREA(-1026.8f, -492.1f, 36f, 18f, 1, 0, 0, 0);
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-1042.5f, -500f, 41f, -1019.5f, -475f, 34f, 0, 1);
			VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(-1042.5f, -500f, 41f, -1019.5f, -475f, 34f);
			STREAMING::REQUEST_MODEL(joaat("rapidgt"));
			STREAMING::REQUEST_MODEL(joaat("surano"));
			STREAMING::REQUEST_MODEL(joaat("carbonizzare"));
			while ((!STREAMING::HAS_MODEL_LOADED(joaat("rapidgt")) || !STREAMING::HAS_MODEL_LOADED(joaat("surano"))) || !STREAMING::HAS_MODEL_LOADED(joaat("carbonizzare")))
			{
				SYSTEM::WAIT(0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_278))
			{
				MISC::CLEAR_AREA(Local_305, 5f, 1, 0, 0, 0);
				iLocal_278 = VEHICLE::CREATE_VEHICLE(joaat("rapidgt"), Local_305, fLocal_318, 1, 1);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_278, 112, 112);
				ENTITY::SET_ENTITY_HEALTH(iLocal_278, 3000);
				VEHICLE::SET_VEHICLE_STRONG(iLocal_278, 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("rapidgt"));
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("rapidgt"), 1);
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_278, 1);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_278, 1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_289))
			{
				if (STREAMING::HAS_MODEL_LOADED(joaat("surano")))
				{
					MISC::CLEAR_AREA(-1037.398f, -491.6539f, 35.5545f, 5f, 1, 0, 0, 0);
					iLocal_289 = VEHICLE::CREATE_VEHICLE(joaat("surano"), -1037.398f, -491.6539f, 35.5545f, 208.889f, 1, 1);
					VEHICLE::SET_VEHICLE_COLOURS(iLocal_289, 0, 0);
					ENTITY::SET_ENTITY_HEALTH(iLocal_289, 3000);
					VEHICLE::SET_VEHICLE_STRONG(iLocal_289, 1);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("surano"));
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("surano"), 1);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_289, 1);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_290))
			{
				if (STREAMING::HAS_MODEL_LOADED(joaat("carbonizzare")))
				{
					MISC::CLEAR_AREA(Local_305, 5f, 1, 0, 0, 0);
					iLocal_290 = VEHICLE::CREATE_VEHICLE(joaat("carbonizzare"), -1033.938f, -489.7475f, 35.8323f, 207.1758f, 1, 1);
					VEHICLE::SET_VEHICLE_COLOURS(iLocal_290, 89, 89);
					ENTITY::SET_ENTITY_HEALTH(iLocal_290, 3000);
					VEHICLE::SET_VEHICLE_STRONG(iLocal_290, 1);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("carbonizzare"));
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("carbonizzare"), 1);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_290, 1);
				}
			}
			break;
		
		case 3:
			AUDIO::PREPARE_MUSIC_EVENT("TRV4_CHASE");
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
			func_154();
			MISC::CLEAR_AREA(Local_306, 200f, 1, 0, 0, 0);
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_277))
			{
				iLocal_277 = VEHICLE::CREATE_VEHICLE(joaat("cogcabrio"), Local_306, fLocal_319, 1, 1);
				ENTITY::SET_ENTITY_PROOFS(iLocal_277, 1, 1, 1, 1, 1, 0, 0, 0);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_277, 27, 27);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cogcabrio"));
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_277, "SOL_3_MOLLY_CAR_Group", 0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_263))
			{
				iLocal_263 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_277, 26, joaat("ig_molly"), -1, 1, 1);
				ENTITY::SET_ENTITY_PROOFS(iLocal_263, 1, 1, 1, 1, 1, 0, 0, 0);
				ENTITY::SET_ENTITY_INVINCIBLE(iLocal_263, 1);
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_263, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_molly"));
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_263, 1862763509);
			}
			if (func_23())
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_278))
				{
					if (func_153())
					{
						if (!VEHICLE::IS_THIS_MODEL_A_HELI(func_152()) && !VEHICLE::IS_THIS_MODEL_A_PLANE(func_152()))
						{
							iLocal_278 = func_123(Local_315, fLocal_322);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_152());
							VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_278, 1);
						}
						else
						{
							iLocal_278 = VEHICLE::CREATE_VEHICLE(joaat("rapidgt"), Local_315, fLocal_322, 1, 1);
							VEHICLE::SET_VEHICLE_COLOURS(iLocal_278, 112, 112);
						}
					}
					else
					{
						iLocal_278 = VEHICLE::CREATE_VEHICLE(joaat("rapidgt"), Local_315, fLocal_322, 1, 1);
						VEHICLE::SET_VEHICLE_COLOURS(iLocal_278, 112, 112);
					}
					ENTITY::SET_ENTITY_HEALTH(iLocal_278, 3000);
					VEHICLE::SET_VEHICLE_STRONG(iLocal_278, 1);
					ENTITY::SET_ENTITY_PROOFS(iLocal_278, 0, 1, 0, 0, 0, 0, 0, 0);
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_278, 1);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("rapidgt"));
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_278, 1);
				}
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_278))
			{
				iLocal_278 = VEHICLE::CREATE_VEHICLE(joaat("rapidgt"), Local_315, fLocal_322, 1, 1);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_278, 112, 112);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("rapidgt"));
				ENTITY::SET_ENTITY_HEALTH(iLocal_278, 3000);
				VEHICLE::SET_VEHICLE_STRONG(iLocal_278, 1);
				ENTITY::SET_ENTITY_PROOFS(iLocal_278, 0, 1, 0, 0, 0, 0, 0, 0);
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_278, 1);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_278, 1);
			}
			break;
		
		case 5:
			iLocal_349 = 0;
			MISC::CLEAR_AREA(-973.3f, -2967.7f, 13.5f, 100f, 1, 0, 0, 0);
			SYSTEM::SETTIMERA(0);
			STREAMING::REQUEST_MODEL(joaat("jet"));
			STREAMING::REQUEST_MODEL(joaat("shamal"));
			TASK::REQUEST_WAYPOINT_RECORDING("BB_MOLLY_2");
			STREAMING::REQUEST_MODEL(joaat("s_m_y_airworker"));
			STREAMING::REQUEST_MODEL(joaat("s_m_y_cop_01"));
			STREAMING::REQUEST_MODEL(joaat("police3"));
			STREAMING::REQUEST_MODEL(joaat("ig_molly"));
			STREAMING::REQUEST_MODEL(joaat("cogcabrio"));
			STREAMING::REQUEST_MODEL(joaat("rapidgt"));
			STREAMING::REQUEST_MODEL(joaat("prop_cs_film_reel_01"));
			VEHICLE::REQUEST_VEHICLE_RECORDING(68, "BB_Chase");
			VEHICLE::REQUEST_VEHICLE_RECORDING(69, "BB_Chase");
			TASK::REQUEST_WAYPOINT_RECORDING("Trev4_5");
			STREAMING::REQUEST_PTFX_ASSET();
			STREAMING::REQUEST_ANIM_DICT("move_f@film_reel_arms");
			STREAMING::REQUEST_ANIM_DICT("misssolomon_3");
			while (((((((((((((((!STREAMING::HAS_MODEL_LOADED(joaat("jet")) || !STREAMING::HAS_MODEL_LOADED(joaat("shamal"))) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("BB_MOLLY_2")) || !STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_airworker"))) || !STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_cop_01"))) || !STREAMING::HAS_MODEL_LOADED(joaat("police3"))) || !STREAMING::HAS_MODEL_LOADED(joaat("ig_molly"))) || !STREAMING::HAS_MODEL_LOADED(joaat("cogcabrio"))) || !STREAMING::HAS_MODEL_LOADED(joaat("rapidgt"))) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_cs_film_reel_01"))) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(68, "BB_Chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(69, "BB_Chase")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Trev4_5")) || !STREAMING::HAS_PTFX_ASSET_LOADED()) || !STREAMING::HAS_ANIM_DICT_LOADED("move_f@film_reel_arms")) || !STREAMING::HAS_ANIM_DICT_LOADED("misssolomon_3"))
			{
				SYSTEM::WAIT(0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_263))
			{
				iLocal_263 = PED::CREATE_PED(26, joaat("ig_molly"), -920.5093f, -2943.93f, 12.9451f, 157.6203f, 1, 1);
				ENTITY::SET_ENTITY_INVINCIBLE(iLocal_263, 1);
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_263, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_263, 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_molly"));
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_263, 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_263, 1862763509);
			}
			iLocal_294 = OBJECT::CREATE_OBJECT(joaat("prop_cs_film_reel_01"), -929f, -2917f, 13f, 1, 1, 0);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_294, iLocal_263, PED::GET_PED_BONE_INDEX(iLocal_263, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_283))
			{
				iLocal_283 = VEHICLE::CREATE_VEHICLE(joaat("jet"), -952.1345f, -2990.269f, 12.9451f, 240.7726f, 1, 1);
				VEHICLE::SET_VEHICLE_LIVERY(iLocal_283, 2);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_283, 0);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_283, 1);
				ENTITY::SET_ENTITY_PROOFS(iLocal_283, 1, 1, 1, 1, 1, 0, 0, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("jet"));
				ENTITY::SET_ENTITY_LOD_DIST(iLocal_283, 500);
			}
			if (func_23())
			{
				if (func_153())
				{
					func_121();
					while (!func_112())
					{
						SYSTEM::WAIT(0);
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_278))
				{
					if (func_153())
					{
						iLocal_278 = func_123(-918.6263f, -2926.631f, 12.9666f, 43.1705f);
						ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_278, 1);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_152());
						VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_278, 1);
					}
					else
					{
						iLocal_278 = VEHICLE::CREATE_VEHICLE(joaat("rapidgt"), -918.6263f, -2926.631f, 12.9666f, 43.1705f, 1, 1);
						VEHICLE::SET_VEHICLE_COLOURS(iLocal_278, 112, 112);
						ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_278, 1);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("rapidgt"));
						VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_278, 1);
					}
				}
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_278))
			{
				iLocal_278 = VEHICLE::CREATE_VEHICLE(joaat("rapidgt"), -918.6263f, -2926.631f, 12.9666f, 43.1705f, 1, 1);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_278, 112, 112);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("rapidgt"));
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_278, 1);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_278, 1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_277))
			{
				iLocal_277 = VEHICLE::CREATE_VEHICLE(joaat("cogcabrio"), -928.3279f, -2916.16f, 12.945f, 61.7688f, 1, 1);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_277, 27, 27);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cogcabrio"));
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_280))
			{
				iLocal_280 = VEHICLE::CREATE_VEHICLE(joaat("police3"), -924.2796f, -2914.371f, 12.945f, 86.6188f, 1, 1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_271))
			{
				iLocal_271 = PED::CREATE_PED(6, joaat("s_m_y_cop_01"), -922.942f, -2912.509f, 12.945f, 156.2652f, 1, 1);
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_271, joaat("weapon_pistol"), 1000, 1, 1);
				func_111(iLocal_271, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_cop_01"));
			}
			SYSTEM::SETTIMERA(0);
			func_110(2, 1);
			iLocal_357 = 1;
			break;
		
		case 8:
			MISC::CLEAR_AREA(-973.3f, -2967.7f, 13.5f, 100f, 1, 0, 0, 0);
			SYSTEM::SETTIMERA(0);
			iLocal_349 = 0;
			iLocal_357 = 0;
			iLocal_336 = 0;
			STREAMING::REQUEST_MODEL(joaat("jet"));
			STREAMING::REQUEST_MODEL(joaat("s_m_y_airworker"));
			STREAMING::REQUEST_MODEL(joaat("shamal"));
			STREAMING::REQUEST_MODEL(joaat("s_m_y_cop_01"));
			STREAMING::REQUEST_MODEL(joaat("police3"));
			STREAMING::REQUEST_MODEL(joaat("cogcabrio"));
			STREAMING::REQUEST_MODEL(joaat("rapidgt"));
			STREAMING::REQUEST_MODEL(joaat("prop_jet_bloodsplat_01"));
			VEHICLE::REQUEST_VEHICLE_RECORDING(68, "BB_Chase");
			VEHICLE::REQUEST_VEHICLE_RECORDING(69, "BB_Chase");
			STREAMING::REQUEST_PTFX_ASSET();
			while ((((((((((!STREAMING::HAS_MODEL_LOADED(joaat("jet")) || !STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_airworker"))) || !STREAMING::HAS_MODEL_LOADED(joaat("shamal"))) || !STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_cop_01"))) || !STREAMING::HAS_MODEL_LOADED(joaat("police3"))) || !STREAMING::HAS_MODEL_LOADED(joaat("cogcabrio"))) || !STREAMING::HAS_MODEL_LOADED(joaat("rapidgt"))) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_jet_bloodsplat_01"))) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(68, "BB_Chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(69, "BB_Chase")) || !STREAMING::HAS_PTFX_ASSET_LOADED())
			{
				SYSTEM::WAIT(0);
			}
			func_109();
			if (func_23())
			{
				if (func_153())
				{
					func_121();
					while (!func_112())
					{
						SYSTEM::WAIT(0);
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_278))
				{
					if (func_153())
					{
						iLocal_278 = func_123(-918.6263f, -2926.631f, 12.9666f, 43.1705f);
						ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_278, 1);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_152());
						VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_278, 1);
					}
					else
					{
						iLocal_278 = VEHICLE::CREATE_VEHICLE(joaat("rapidgt"), -918.6263f, -2926.631f, 12.9666f, 43.1705f, 1, 1);
						VEHICLE::SET_VEHICLE_COLOURS(iLocal_278, 112, 112);
						ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_278, 1);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("rapidgt"));
						VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_278, 1);
					}
				}
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_278))
			{
				iLocal_278 = VEHICLE::CREATE_VEHICLE(joaat("rapidgt"), -918.6263f, -2926.631f, 12.9666f, 43.1705f, 1, 1);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_278, 112, 112);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("rapidgt"));
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_278, 1);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_278, 1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_277))
			{
				iLocal_277 = VEHICLE::CREATE_VEHICLE(joaat("cogcabrio"), -928.3279f, -2916.16f, 12.945f, 61.7688f, 1, 1);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_277, 27, 27);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cogcabrio"));
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_280))
			{
				iLocal_280 = VEHICLE::CREATE_VEHICLE(joaat("police3"), -924.2796f, -2914.371f, 12.945f, 86.6188f, 1, 1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_271))
			{
				iLocal_271 = PED::CREATE_PED(6, joaat("s_m_y_cop_01"), -922.942f, -2912.509f, 12.945f, 156.2652f, 1, 1);
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_271, joaat("weapon_pistol"), 1000, 1, 1);
				func_111(iLocal_271, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_cop_01"));
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_293))
			{
				iLocal_293 = OBJECT::CREATE_OBJECT(joaat("prop_jet_bloodsplat_01"), -946.4231f, -2979.826f, 12.9264f, 1, 1, 0);
				ENTITY::SET_ENTITY_ROTATION(iLocal_293, 0f, 0f, -121.5948f, 2, 1);
				ENTITY::SET_ENTITY_QUATERNION(iLocal_293, 0f, 0f, 0.8729f, -0.4879f);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_jet_bloodsplat_01"));
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_283))
			{
				iLocal_283 = VEHICLE::CREATE_VEHICLE(joaat("jet"), -952.1345f, -2990.269f, 12.9451f, 240.7726f, 1, 1);
				VEHICLE::SET_VEHICLE_LIVERY(iLocal_283, 2);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_283, 0);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_283, 1);
				ENTITY::SET_ENTITY_PROOFS(iLocal_283, 1, 1, 1, 1, 1, 0, 0, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("jet"));
				uLocal_671 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_trev4_747_engine_damage", iLocal_283, -11.956f, 10.528f, -7.657f, 0f, 2f, 0f, 1065353216, 0, 0, 0);
				ENTITY::SET_ENTITY_LOD_DIST(iLocal_283, 500);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_265))
			{
				iLocal_265 = PED::CREATE_PED(26, joaat("s_m_y_airworker"), -933.8942f, -2965.785f, 12.9451f, 331.7339f, 1, 1);
				func_17(&uLocal_489, 4, iLocal_265, "HangerWorker", 0, 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_airworker"));
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_265, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_265, 1);
				TASK::TASK_SMART_FLEE_PED(iLocal_265, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
				PED::SET_PED_KEEP_TASK(iLocal_265, 1);
				ENTITY::SET_ENTITY_PROOFS(iLocal_265, 0, 0, 0, 0, 0, 0, 0, 0);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_265);
			}
			if (func_108(0) == 0 || func_108(0) == joaat("weapon_unarmed"))
			{
				func_107(1);
			}
			break;
	}
}

void func_107(int iParam0)//Position - 0x9C67
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = WEAPON::GET_BEST_PED_WEAPON(PLAYER::PLAYER_PED_ID(), 0);
		if (iVar0 != joaat("weapon_unarmed"))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iVar0, iParam0);
		}
	}
}

int func_108(int iParam0)//Position - 0x9C9C
{
	if (Global_15F8F > 0)
	{
		return Global_16D94.f_15[iParam0];
	}
	return Global_164D7.f_15[iParam0];
}

void func_109()//Position - 0x9CC6
{
	if (iLocal_336 == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_285[0]))
		{
			iLocal_285[0] = VEHICLE::CREATE_VEHICLE(joaat("police3"), -994.5278f, -2903.285f, 12.9447f, 158.7951f, 1, 1);
			VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(iLocal_285[0], 0);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_267[0]))
		{
			iLocal_267[0] = PED::CREATE_PED(6, joaat("s_m_y_cop_01"), -969.06f, -2955.186f, 12.945f, 241.1703f, 1, 1);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_267[0], joaat("weapon_pistol"), 1000, 1, 1);
			PED::SET_PED_ACCURACY(iLocal_267[0], 20);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_267[0], 1);
			TASK::TASK_AIM_GUN_AT_ENTITY(iLocal_267[0], PLAYER::PLAYER_PED_ID(), -1, 1);
			func_111(iLocal_267[0], 0);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_284))
		{
			iLocal_284 = VEHICLE::CREATE_VEHICLE(joaat("shamal"), -968.3718f, -2952.298f, 12.9451f, 114.9439f, 1, 1);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_284);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("shamal"));
			ENTITY::SET_ENTITY_HEALTH(iLocal_284, 2000);
			VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_284, 0, 0, 1);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_267[6]))
		{
			iLocal_267[6] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_285[0], 6, joaat("s_m_y_cop_01"), 0, 1, 1);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_267[6], joaat("weapon_pistol"), 1000, 1, 1);
			PED::SET_PED_ACCURACY(iLocal_267[6], 20);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_267[6], 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_267[6], 1);
			func_111(iLocal_267[6], 0);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_267[7]))
		{
			iLocal_267[7] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_285[0], 6, joaat("s_m_y_cop_01"), -1, 1, 1);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_267[7], joaat("weapon_pistol"), 1000, 1, 1);
			PED::SET_PED_ACCURACY(iLocal_267[7], 20);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_267[7], 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_267[7], 1);
			func_111(iLocal_267[7], 0);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_285[1]))
		{
			iLocal_285[1] = VEHICLE::CREATE_VEHICLE(joaat("police3"), -962.2432f, -2864.16f, 12.9447f, 149.5586f, 1, 1);
			VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(iLocal_285[1], 0);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_267[8]))
		{
			iLocal_267[8] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_285[1], 6, joaat("s_m_y_cop_01"), 0, 1, 1);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_267[8], joaat("weapon_pistol"), 1000, 1, 1);
			PED::SET_PED_ACCURACY(iLocal_267[8], 20);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_267[8], 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_267[8], 1);
			func_111(iLocal_267[8], 0);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_267[9]))
		{
			iLocal_267[9] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_285[1], 6, joaat("s_m_y_cop_01"), -1, 1, 1);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_267[9], joaat("weapon_pistol"), 1000, 1, 1);
			PED::SET_PED_ACCURACY(iLocal_267[9], 20);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_267[9], 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_267[9], 1);
			func_111(iLocal_267[9], 0);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_267[10]))
		{
			iLocal_267[10] = PED::CREATE_PED(6, joaat("s_m_y_cop_01"), -922.1185f, -2939.595f, 12.9451f, 156.1408f, 1, 1);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_267[10], joaat("weapon_pistol"), 1000, 1, 1);
			PED::SET_PED_ACCURACY(iLocal_267[10], 20);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_267[10], 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_267[10], 1);
			func_111(iLocal_267[10], 0);
			PED::SET_PED_DUCKING(iLocal_267[10], 1);
		}
		iLocal_336 = 1;
	}
}

void func_110(int iParam0, int iParam1)//Position - 0xA057
{
	MISC::SET_BIT(&Global_6019, iParam0);
	StringCopy(&(Global_601A[iParam0 /*6*/]), SCRIPT::GET_THIS_SCRIPT_NAME(), 24);
	Global_6051[iParam0] = iParam1;
}

void func_111(int iParam0, bool bParam1)//Position - 0xA07E
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 64)
		{
			if (Global_D5FC[iVar0 /*2*/] != 0)
			{
				if (Global_D5FC[iVar0 /*2*/] == iParam0)
				{
					return;
				}
			}
			iVar0++;
		}
	}
	if (64 == Global_D5FB)
	{
		return;
	}
	iVar1 = -1;
	iVar2 = 0;
	while (iVar1 == -1 && iVar2 != 64)
	{
		if (Global_D5FC[iVar2 /*2*/] == 0)
		{
			iVar1 = iVar2;
		}
		iVar2++;
	}
	if (iVar1 == -1)
	{
		return;
	}
	Global_D5FC[iVar1 /*2*/] = iParam0;
	Global_D5FC[iVar1 /*2*/].f_1 = 7;
	Global_D5FB++;
}

bool func_112()//Position - 0xA119
{
	return func_113(&(Global_16D94.f_877));
}

int func_113(var uParam0)//Position - 0xA12C
{
	if (func_114(uParam0))
	{
		if (STREAMING::HAS_MODEL_LOADED(uParam0->f_C.f_2A))
		{
			return 1;
		}
		else
		{
			return 0;
		}
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_114(var uParam0)//Position - 0xA161
{
	if (uParam0->f_C.f_2A == 0)
	{
		return 0;
	}
	if (!func_115(uParam0->f_C.f_2A))
	{
		return 0;
	}
	return 1;
}

int func_115(int iParam0)//Position - 0xA18A
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
		if (!func_120())
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
		if ((((!func_119() && !func_118()) && !func_117()) && !func_116()) && !func_120())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((MISC::IS_DURANGO_VERSION() || MISC::IS_PC_VERSION()) || MISC::IS_ORBIS_VERSION())
		{
		}
		else if (!func_117())
		{
			return 0;
		}
	}
	return 1;
}

int func_116()//Position - 0xA359
{
	return 0;
}

int func_117()//Position - 0xA362
{
	return 1;
}

int func_118()//Position - 0xA36B
{
	return 1;
}

int func_119()//Position - 0xA374
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_120()//Position - 0xA38D
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

void func_121()//Position - 0xA410
{
	func_122(&(Global_16D94.f_877));
}

void func_122(var uParam0)//Position - 0xA423
{
	if (func_114(uParam0))
	{
		STREAMING::REQUEST_MODEL(uParam0->f_C.f_2A);
	}
}

int func_123(struct<3> Param0, float fParam1)//Position - 0xA441
{
	return func_124(&(Global_16D94.f_877), Param0, fParam1, 0);
}

int func_124(var uParam0, struct<3> Param1, float fParam2, bool bParam3)//Position - 0xA45B
{
	int iVar0;
	struct<3> Var1;
	bool bVar2;
	var uVar3;
	int iVar4;
	
	if (func_114(uParam0))
	{
		if (func_68(Param1, 0f, 0f, 0f))
		{
			Param1 = { *uParam0 };
			fParam2 = uParam0->f_6;
		}
		if (uParam0->f_C.f_2A == joaat("monster") || uParam0->f_C.f_2A == joaat("marshall"))
		{
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -816.8716f, 185.6238f, 71.40275f, -807.4894f, 189.3762f, 75.27323f, 6.5f, 0, 1))
			{
				Param1 = { -850.93f, 158.82f, 65.7f };
				fParam2 = 89.5f;
			}
		}
		if (func_113(uParam0))
		{
			MISC::CLEAR_AREA(Param1, 5f, 1, 0, 0, 0);
			func_151(Param1, 5f, 0);
			iVar0 = VEHICLE::CREATE_VEHICLE(uParam0->f_C.f_2A, Param1, fParam2, 1, 1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(iVar0, 1) };
				if (SYSTEM::VDIST2(Var1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar0, Param1, 0, 0, 1);
				}
				func_146(iVar0, &(uParam0->f_C), 0, 1);
				bVar2 = true;
				if (VEHICLE::IS_THIS_MODEL_A_BOAT(uParam0->f_C.f_2A) || VEHICLE::IS_THIS_MODEL_A_JETSKI(uParam0->f_C.f_2A))
				{
					if (!WATER::TEST_PROBE_AGAINST_WATER(Param1.x, Param1.f_1, (Param1.f_2 + 30f), Param1.x, Param1.f_1, (Param1.f_2 - 30f), &uVar3))
					{
						bVar2 = false;
					}
				}
				if (bVar2)
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0);
				}
				if (uParam0->f_7 == 1)
				{
					if (bParam3)
					{
						if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iVar0)))
						{
							func_145(uParam0->f_B, 1);
						}
						else if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar0)))
						{
							func_145(uParam0->f_B, 2);
						}
					}
					VEHICLE::_0xAB04325045427AAE(iVar0, 0);
					VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(iVar0, 0);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iVar0, 1);
					func_144(iVar0, uParam0->f_B);
				}
				else if ((!func_141(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_A) && MISC::ARE_STRINGS_EQUAL(SCRIPT::GET_THIS_SCRIPT_NAME(), "startup_positioning"))
				{
					iVar4 = func_140(iVar0);
					if (iVar4 == -1)
					{
						uParam0->f_A = 0;
					}
					else
					{
						func_135(iVar4);
					}
				}
				if (((Global_15F6A != 13 && Global_15F6A != 10) && Global_15F6A != 11) && Global_15F6A != 12)
				{
					if (MISC::GET_HASH_KEY(&(Global_15F6A.f_3)) == Global_10A06)
					{
						if (uParam0->f_C.f_2A == Global_17C49.f_47C3.f_45[21 /*54*/].f_2A)
						{
							func_132(24, 0);
							func_135(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					func_125(iVar0, uParam0->f_B);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_C.f_2A);
				Var1 = { ENTITY::GET_ENTITY_COORDS(iVar0, 1) };
			}
			return iVar0;
		}
	}
	return iVar0;
}

void func_125(int iParam0, int iParam1)//Position - 0xA706
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_126(iParam0))
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
	func_39(iParam0, &(Global_17C49.f_47C3.f_1286));
}

int func_126(int iParam0)//Position - 0xA907
{
	if ((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) || func_44(iParam0, 0, 0)) || func_44(iParam0, 1, 0)) || func_44(iParam0, 2, 0)) || func_34(iParam0) != 145) || func_131(iParam0)) || func_130(iParam0)) || func_129(iParam0)) || func_128(iParam0)) || !func_127(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (func_130(iParam0))
		{
		}
		if (func_130(iParam0))
		{
		}
		if (func_44(iParam0, 0, 0))
		{
		}
		if (func_44(iParam0, 1, 0))
		{
		}
		if (func_44(iParam0, 2, 0))
		{
		}
		if (func_34(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_127(int iParam0)//Position - 0xA9E4
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_115(iParam0))
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

int func_128(int iParam0)//Position - 0xAB94
{
	int iVar0;
	char* sVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	sVar1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0);
	if (iVar0 == joaat("speedo") && MISC::ARE_STRINGS_EQUAL(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_115(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_129(int iParam0)//Position - 0xABD9
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

int func_130(int iParam0)//Position - 0xAC14
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

int func_131(int iParam0)//Position - 0xAC90
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

void func_132(int iParam0, bool bParam1)//Position - 0xAD78
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_134(iParam0, 0))
		{
			func_133(iParam0, 1, 0);
			func_133(iParam0, 2, 0);
			func_133(iParam0, 3, 0);
			func_133(iParam0, 4, 0);
			func_133(iParam0, 0, 1);
			Global_10642[iParam0] = 1;
		}
	}
	else
	{
		func_133(iParam0, 0, 0);
	}
}

void func_133(int iParam0, int iParam1, bool bParam2)//Position - 0xADD5
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

bool func_134(int iParam0, int iParam1)//Position - 0xAE10
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_17C49.f_47C3[iParam0], iParam1);
}

void func_135(int iParam0)//Position - 0xAE33
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_139(&(Global_10642.f_22B[0 /*21*/]), iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_10642.f_8B[iParam0]))
		{
			bVar0 = true;
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_10642.f_8B[iParam0], 0))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_10642.f_8B[iParam0], 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_10642.f_8B[iParam0], 1, 1);
				VEHICLE::DELETE_VEHICLE(&(Global_10642.f_8B[iParam0]));
			}
		}
		Global_10642[iParam0] = 1;
		if (MISC::IS_BIT_SET(Global_10642.f_22B[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_134(iParam0, 0)) && Global_109CF.f_2A == 0) && Global_17C49.f_47C3.f_57E[Global_10642.f_22B[0 /*21*/].f_E] != 0) && Global_17C49.f_47C3.f_57E[Global_10642.f_22B[0 /*21*/].f_E] > 3) && (!func_137(0, Global_10642.f_22B[0 /*21*/].f_C) || !func_137(1, Global_10642.f_22B[0 /*21*/].f_C)))
			{
				func_136(Global_17C49.f_47C3.f_45[Global_10642.f_22B[0 /*21*/].f_E /*54*/], &Global_109CF);
				Global_10A05 = Global_17C49.f_47C3.f_12BF;
			}
			func_132(iParam0, 0);
		}
	}
}

void func_136(struct<54> Param0, var uParam1)//Position - 0xAFA8
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

int func_137(int iParam0, int iParam1)//Position - 0xB073
{
	int iVar0;
	
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_138(&(Global_17C49.f_47C3.f_113E[iVar0 /*109*/])))
	{
		return 0;
	}
	return func_115(Global_17C49.f_47C3.f_113E[iVar0 /*109*/][iParam0 /*54*/].f_2A);
}

int func_138(var uParam0)//Position - 0xB0E4
{
	return *uParam0;
}

int func_139(var uParam0, int iParam1)//Position - 0xB0EF
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
			uParam0->f_4 = func_36(0, 1);
			uParam0->f_C = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_36(0, 1);
			uParam0->f_C = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_36(1, 1);
			uParam0->f_C = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_36(1, 2);
			uParam0->f_C = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_36(1, 1);
			uParam0->f_C = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_36(1, 2);
			uParam0->f_C = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_36(2, 1);
			uParam0->f_C = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_36(2, 1);
			uParam0->f_C = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_36(2, 1);
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
			if (func_120())
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
			if (func_120())
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
		if (!func_68(Global_17C49.f_47C3.f_520[uParam0->f_E /*3*/], 0f, 0f, 0f))
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
		if (!func_68(Global_17C49.f_6C1.f_21B.f_9E0[1 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f))
		{
			*uParam0 = { Global_17C49.f_6C1.f_21B.f_9E0[1 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_17C49.f_6C1.f_21B.f_9F5[1 /*4*/][uParam0->f_C];
		}
	}
	else if (MISC::IS_BIT_SET(uParam0->f_9, 20))
	{
		if (!func_68(Global_17C49.f_6C1.f_21B.f_9E0[0 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f))
		{
			*uParam0 = { Global_17C49.f_6C1.f_21B.f_9E0[0 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_17C49.f_6C1.f_21B.f_9F5[0 /*4*/][uParam0->f_C];
		}
	}
	return iVar0;
}

int func_140(int iParam0)//Position - 0xC7E6
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Global_10642.f_1E4[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_10642.f_1E4[iVar0])) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_10642.f_1E4[iVar0], 0))
		{
			VEHICLE::GET_VEHICLE_COLOURS(iParam0, &iVar1, &iVar2);
			VEHICLE::GET_VEHICLE_COLOURS(Global_10642.f_1E4[iVar0], &iVar3, &iVar4);
			if (((ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(Global_10642.f_1E4[iVar0]) && VEHICLE::GET_VEHICLE_LIVERY(iParam0) == VEHICLE::GET_VEHICLE_LIVERY(Global_10642.f_1E4[iVar0])) && iVar1 == iVar2) && iVar3 == iVar4)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_141(int iParam0, struct<3> Param1, bool bParam2)//Position - 0xC8A8
{
	int iVar0;
	var uVar1[3];
	int iVar2;
	int iVar3;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (iVar0)
	{
		case joaat("cargobob"):
			if (func_143(iParam0, Global_10642.f_8B[38], 0))
			{
				func_135(38);
				return 1;
			}
			break;
		
		case joaat("firetruk"):
			if (func_143(iParam0, Global_10642.f_8B[43], 1))
			{
				func_135(43);
				return 1;
			}
			break;
		
		case joaat("cuban800"):
			iVar2 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar1);
			iVar3 = 0;
			while (iVar3 <= (iVar2 - 1))
			{
				if (func_143(iParam0, uVar1[iVar3], 1) && func_142(ENTITY::GET_ENTITY_COORDS(uVar1[iVar3], 1), 2136.133f, 4780.563f, 39.9702f, 5f))
				{
					if ((!bParam2 || func_68(Param1, 0f, 0f, 0f)) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, 1), ENTITY::GET_ENTITY_COORDS(uVar1[iVar3], 1), 1) < 10f)
					{
						VEHICLE::DELETE_VEHICLE(&iParam0);
						return 1;
					}
					else
					{
						return 0;
					}
				}
				iVar3++;
			}
			break;
		
		case joaat("luxor2"):
			if ((ENTITY::DOES_ENTITY_EXIST(Global_10642.f_1E4[14]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_10642.f_1E4[14], 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(Global_10642.f_1E4[14]) == joaat("luxor2") && VEHICLE::GET_VEHICLE_LIVERY(iParam0) == VEHICLE::GET_VEHICLE_LIVERY(Global_10642.f_1E4[14]))
				{
					func_135(14);
					return 1;
				}
			}
			break;
		
		case joaat("swift2"):
			if ((ENTITY::DOES_ENTITY_EXIST(Global_10642.f_1E4[20]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_10642.f_1E4[20], 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(Global_10642.f_1E4[20]) == joaat("swift2") && VEHICLE::GET_VEHICLE_LIVERY(iParam0) == VEHICLE::GET_VEHICLE_LIVERY(Global_10642.f_1E4[20]))
				{
					func_135(20);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_142(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0xCAAE
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

int func_143(int iParam0, int iParam1, bool bParam2)//Position - 0xCAFA
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1)) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
	{
		if (bParam2)
		{
			VEHICLE::GET_VEHICLE_COLOURS(iParam0, &iVar0, &iVar1);
			VEHICLE::GET_VEHICLE_COLOURS(iParam1, &iVar2, &iVar3);
			if (iVar0 == iVar2 && iVar1 == iVar3)
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

void func_144(int iParam0, int iParam1)//Position - 0xCB5A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_15692[iVar0]))
		{
			Global_15692[iVar0] = iParam0;
			Global_1569C[iVar0] = iParam1;
			Global_156A6[iVar0] = ENTITY::GET_ENTITY_MODEL(iParam0);
			if (VEHICLE::IS_THIS_MODEL_A_CAR(Global_156A6[iVar0]))
			{
				Global_156C2[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_156C2[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_145(int iParam0, int iParam1)//Position - 0xCBDC
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_15692[iVar0]))
		{
			if (iParam0 == 145 || Global_1569C[iVar0] == iParam0)
			{
				if (iParam1 == 0 || ENTITY::GET_ENTITY_MODEL(Global_15692[iVar0]) == func_36(iParam0, iParam1))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_15692[iVar0], 0))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_15692[iVar0], 0, 1);
						VEHICLE::DELETE_VEHICLE(&(Global_15692[iVar0]));
						Global_1569C[iVar0] = 145;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_146(int iParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0xCC7D
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (MISC::GET_HASH_KEY(&(uParam1->f_1)) != 0)
		{
			VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iParam0, &(uParam1->f_1));
		}
		if (*uParam1 >= 0 && *uParam1 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
		{
			VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0, *uParam1);
		}
		if (uParam1->f_2A == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
			uParam1->f_8 = 156;
		}
		if (MISC::IS_BIT_SET(uParam1->f_35, 13))
		{
			VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, uParam1->f_2F, uParam1->f_30, uParam1->f_31);
		}
		else
		{
			VEHICLE::CLEAR_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0);
		}
		if (MISC::IS_BIT_SET(uParam1->f_35, 12))
		{
			VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, uParam1->f_2F, uParam1->f_30, uParam1->f_31);
		}
		else
		{
			VEHICLE::CLEAR_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0);
		}
		VEHICLE::SET_VEHICLE_COLOURS(iParam0, uParam1->f_5, uParam1->f_6);
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, uParam1->f_7, uParam1->f_8);
		if (((MISC::IS_BIT_SET(uParam1->f_35, 15) || func_150(iParam0)) || (((uParam1->f_26 == 0 && uParam1->f_27 == 0) && uParam1->f_28 == 0) && uParam1->f_9[20] > 0)) && func_149())
		{
			uParam1->f_26 = 0;
			uParam1->f_27 = 0;
			uParam1->f_28 = 0;
		}
		else if ((uParam1->f_26 == 0 && uParam1->f_27 == 0) && uParam1->f_28 == 0)
		{
			uParam1->f_26 = 255;
			uParam1->f_27 = 255;
			uParam1->f_28 = 255;
		}
		VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, uParam1->f_26, uParam1->f_27, uParam1->f_28);
		if (uParam1->f_29 == -1 && uParam1->f_2A != joaat("granger"))
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, 0);
		}
		else
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, 0);
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, uParam1->f_29);
		}
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, !MISC::IS_BIT_SET(uParam1->f_35, 9));
		if (bParam2)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam0, uParam1->f_2E);
		}
		VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(iParam0, uParam1->f_32, uParam1->f_33, uParam1->f_34);
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 2, MISC::IS_BIT_SET(uParam1->f_35, 28));
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 3, MISC::IS_BIT_SET(uParam1->f_35, 29));
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 0, MISC::IS_BIT_SET(uParam1->f_35, 30));
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 1, MISC::IS_BIT_SET(uParam1->f_35, 31));
		VEHICLE::SET_VEHICLE_IS_STOLEN(iParam0, MISC::IS_BIT_SET(uParam1->f_35, 10));
		if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(iParam0) > 1 && uParam1->f_2B >= 0)
		{
			VEHICLE::SET_VEHICLE_LIVERY(iParam0, uParam1->f_2B);
		}
		if (uParam1->f_2D > -1 && uParam1->f_2D < 255)
		{
			if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					if (uParam1->f_2D == 6)
					{
						VEHICLE::SET_VEHICLE_WHEEL_TYPE(iParam0, uParam1->f_2D);
					}
				}
				else
				{
					VEHICLE::SET_VEHICLE_WHEEL_TYPE(iParam0, uParam1->f_2D);
				}
			}
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, 0))
		{
			if ((uParam1->f_2C == 0 || uParam1->f_2C == 3) || uParam1->f_2C == 5)
			{
				VEHICLE::RAISE_CONVERTIBLE_ROOF(iParam0, 1);
			}
			else
			{
				VEHICLE::LOWER_CONVERTIBLE_ROOF(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_147(&iParam0, &(uParam1->f_9), &(uParam1->f_23));
		}
		if (!VEHICLE::IS_THIS_MODEL_A_HELI(uParam1->f_2A) && !VEHICLE::IS_THIS_MODEL_A_BOAT(uParam1->f_2A))
		{
			iVar0 = 0;
			while (iVar0 <= 11)
			{
				if (MISC::IS_BIT_SET(uParam1->f_35, func_40(iVar0 + 1)))
				{
					if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
					{
						VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar0 + 1, 0);
					}
				}
				else if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
				{
					VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar0 + 1, 1);
				}
				iVar0++;
			}
		}
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_2A))
		{
			if (!MISC::IS_BIT_SET(uParam1->f_35, 23))
			{
				if (MISC::IS_BIT_SET(uParam1->f_35, 22))
				{
					VEHICLE::CONTROL_LANDING_GEAR(iParam0, 2);
				}
				else
				{
					VEHICLE::CONTROL_LANDING_GEAR(iParam0, 3);
				}
			}
			else
			{
				VEHICLE::CONTROL_LANDING_GEAR(iParam0, 4);
			}
		}
		if (MISC::IS_BIT_SET(uParam1->f_35, 27))
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

int func_147(int iParam0, var uParam1, var uParam2)//Position - 0xD06A
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
	VEHICLE::SET_VEHICLE_MOD_KIT(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (VEHICLE::GET_VEHICLE_MOD(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			VEHICLE::REMOVE_VEHICLE_MOD(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_148(*iParam0))
	{
		VEHICLE::SET_VEHICLE_STRONG(*iParam0, 1);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, 1);
	}
	return 1;
}

int func_148(int iParam0)//Position - 0xD19C
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) && VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
	{
		VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 25)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (VEHICLE::GET_VEHICLE_MOD(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, VEHICLE::GET_MOD_TEXT_LABEL(iParam0, iVar1, VEHICLE::GET_VEHICLE_MOD(iParam0, iVar1)), 16);
				iVar2 = MISC::GET_HASH_KEY(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == MISC::GET_HASH_KEY("MNU_CAGE") || iVar2 == MISC::GET_HASH_KEY("SABRE_CAG"))
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_149()//Position - 0xD278
{
	return DLC::IS_DLC_PRESENT(-1691188696);
}

int func_150(int iParam0)//Position - 0xD289
{
	var uVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
			{
				if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
				{
					uVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
				}
				return MISC::IS_BIT_SET(uVar0, 4);
			}
		}
	}
	return 0;
}

void func_151(struct<3> Param0, float fParam1, int iParam2)//Position - 0xD2D4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_139(&(Global_10642.f_22B[0 /*21*/]), iVar0))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Global_10642.f_22B[0 /*21*/], iParam2) <= fParam1)
			{
				func_135(iVar0);
			}
		}
		iVar0++;
	}
}

var func_152()//Position - 0xD324
{
	return Global_16D94.f_877.f_C.f_2A;
}

bool func_153()//Position - 0xD337
{
	return func_114(&(Global_16D94.f_877));
}

void func_154()//Position - 0xD34A
{
	uLocal_304 = unk_0x67D02A194A2FC2BD("BREAKING_NEWS");
	STREAMING::REQUEST_MODEL(joaat("jet"));
	STREAMING::REQUEST_MODEL(joaat("police3"));
	STREAMING::REQUEST_MODEL(joaat("maverick"));
	STREAMING::REQUEST_MODEL(joaat("bison"));
	STREAMING::REQUEST_MODEL(joaat("blista"));
	STREAMING::REQUEST_MODEL(joaat("ig_molly"));
	STREAMING::REQUEST_MODEL(joaat("cogcabrio"));
	STREAMING::REQUEST_MODEL(joaat("rapidgt"));
	VEHICLE::REQUEST_VEHICLE_RECORDING(45, "BB_Chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(35, "BB_Chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(2, "BB_Chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(54, "BB_Chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(55, "BB_Chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(67, "BB_Chase");
	func_156(1, "BB_Chase");
	if (func_23())
	{
		if (func_153())
		{
			if (!VEHICLE::IS_THIS_MODEL_A_HELI(func_152()) && !VEHICLE::IS_THIS_MODEL_A_PLANE(func_152()))
			{
				func_121();
				while (!func_112())
				{
					SYSTEM::WAIT(0);
				}
			}
		}
	}
	while (((((((!STREAMING::HAS_MODEL_LOADED(joaat("jet")) || !STREAMING::HAS_MODEL_LOADED(joaat("police3"))) || !STREAMING::HAS_MODEL_LOADED(joaat("maverick"))) || !STREAMING::HAS_MODEL_LOADED(joaat("bison"))) || !STREAMING::HAS_MODEL_LOADED(joaat("blista"))) || !STREAMING::HAS_MODEL_LOADED(joaat("ig_molly"))) || !STREAMING::HAS_MODEL_LOADED(joaat("cogcabrio"))) || !STREAMING::HAS_MODEL_LOADED(joaat("rapidgt")))
	{
		SYSTEM::WAIT(0);
	}
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_304) || !func_155(1, "BB_Chase"))
	{
		SYSTEM::WAIT(0);
	}
	while (((((!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(45, "BB_Chase") || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(35, "BB_Chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(2, "BB_Chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(54, "BB_Chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(55, "BB_Chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(67, "BB_Chase"))
	{
		SYSTEM::WAIT(0);
	}
}

bool func_155(int iParam0, char* sParam1)//Position - 0xD51F
{
	return VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam0, sParam1);
}

void func_156(int iParam0, char* sParam1)//Position - 0xD52F
{
	VEHICLE::REQUEST_VEHICLE_RECORDING(iParam0, sParam1);
}

void func_157()//Position - 0xD53F
{
	func_183();
	func_181();
	HUD::CLEAR_PRINTS();
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	PATHFIND::SET_IGNORE_NO_GPS_FLAG(0);
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_261))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_261);
	}
	if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(uLocal_262))
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(uLocal_262);
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1019.579f, -484.872f, 36.0795f, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 93.7701f);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_278))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_278, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_278))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_278);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_277))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_277, 0))
		{
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_277, 0);
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_277))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_277);
			}
		}
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_667))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_667, 0);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_668))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_668, 0);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_669))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_669, 0);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_670))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_670, 0);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_671))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_671, 0);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_666[0]))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_666[0], 0);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_666[1]))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_666[1], 0);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_666[2]))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_666[2], 0);
	}
	STREAMING::REMOVE_PTFX_ASSET();
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_263))
	{
		PED::DELETE_PED(&iLocal_263);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_265))
	{
		PED::DELETE_PED(&iLocal_265);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_268))
	{
		PED::DELETE_PED(&iLocal_268);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_269))
	{
		PED::DELETE_PED(&iLocal_269);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_270))
	{
		PED::DELETE_PED(&iLocal_270);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_271))
	{
		PED::DELETE_PED(&iLocal_271);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_272))
	{
		PED::DELETE_PED(&iLocal_272);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_273))
	{
		PED::DELETE_PED(&iLocal_273);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_264[0]))
	{
		PED::DELETE_PED(&(iLocal_264[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_264[1]))
	{
		PED::DELETE_PED(&(iLocal_264[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_264[2]))
	{
		PED::DELETE_PED(&(iLocal_264[2]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_264[3]))
	{
		PED::DELETE_PED(&(iLocal_264[3]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_266[0]))
	{
		PED::DELETE_PED(&(uLocal_266[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_266[1]))
	{
		PED::DELETE_PED(&(uLocal_266[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_266[2]))
	{
		PED::DELETE_PED(&(uLocal_266[2]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_267[0]))
	{
		PED::DELETE_PED(&(iLocal_267[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_267[1]))
	{
		PED::DELETE_PED(&(iLocal_267[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_267[2]))
	{
		PED::DELETE_PED(&(iLocal_267[2]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_267[3]))
	{
		PED::DELETE_PED(&(iLocal_267[3]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_267[4]))
	{
		PED::DELETE_PED(&(iLocal_267[4]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_267[5]))
	{
		PED::DELETE_PED(&(iLocal_267[5]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_267[6]))
	{
		PED::DELETE_PED(&(iLocal_267[6]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_267[7]))
	{
		PED::DELETE_PED(&(iLocal_267[7]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_267[8]))
	{
		PED::DELETE_PED(&(iLocal_267[8]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_267[9]))
	{
		PED::DELETE_PED(&(iLocal_267[9]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_267[10]))
	{
		PED::DELETE_PED(&(iLocal_267[10]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_274[0]))
	{
		PED::DELETE_PED(&(iLocal_274[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_275[0]))
	{
		PED::DELETE_PED(&(iLocal_275[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_275[1]))
	{
		PED::DELETE_PED(&(iLocal_275[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_277))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_277);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_278))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_278))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_278, 1, 0);
		}
		VEHICLE::DELETE_VEHICLE(&iLocal_278);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_281))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_281);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_282))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_282);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_283))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_283);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_284))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_284);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_286))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_286);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_288))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_288);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_292[0]))
	{
		VEHICLE::DELETE_VEHICLE(&(iLocal_292[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_292[1]))
	{
		VEHICLE::DELETE_VEHICLE(&(iLocal_292[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_279[0]))
	{
		VEHICLE::DELETE_VEHICLE(&(iLocal_279[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_279[1]))
	{
		VEHICLE::DELETE_VEHICLE(&(iLocal_279[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_292[0]))
	{
		VEHICLE::DELETE_VEHICLE(&(iLocal_292[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_292[1]))
	{
		VEHICLE::DELETE_VEHICLE(&(iLocal_292[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_285[0]))
	{
		VEHICLE::DELETE_VEHICLE(&(iLocal_285[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_285[1]))
	{
		VEHICLE::DELETE_VEHICLE(&(iLocal_285[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_287[0]))
	{
		VEHICLE::DELETE_VEHICLE(&(iLocal_287[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_280))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_280);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_293))
	{
		OBJECT::DELETE_OBJECT(&iLocal_293);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_294))
	{
		OBJECT::DELETE_OBJECT(&iLocal_294);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_295))
	{
		OBJECT::DELETE_OBJECT(&iLocal_295);
	}
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_DRIVE_TO_AIRPORT"))
	{
		AUDIO::STOP_AUDIO_SCENE("SOL_3_DRIVE_TO_AIRPORT");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_MAIN_CHASE"))
	{
		AUDIO::STOP_AUDIO_SCENE("SOL_3_MAIN_CHASE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_CHOPPER_CAM"))
	{
		AUDIO::STOP_AUDIO_SCENE("SOL_3_CHOPPER_CAM");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_HELI_TAKEOFF"))
	{
		AUDIO::STOP_AUDIO_SCENE("SOL_3_HELI_TAKEOFF");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_EVENT_TANKER_CRASH"))
	{
		AUDIO::STOP_AUDIO_SCENE("SOL_3_EVENT_TANKER_CRASH");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_CAR_JET_ENGINE"))
	{
		AUDIO::STOP_AUDIO_SCENE("SOL_3_CAR_JET_ENGINE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_PLANE_ON_FIRE"))
	{
		AUDIO::STOP_AUDIO_SCENE("SOL_3_PLANE_ON_FIRE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_EVENT_JET_LANDING"))
	{
		AUDIO::STOP_AUDIO_SCENE("SOL_3_EVENT_JET_LANDING");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION"))
	{
		AUDIO::STOP_AUDIO_SCENE("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_ARRIVE_AT_HANGAR"))
	{
		AUDIO::STOP_AUDIO_SCENE("SOL_3_ARRIVE_AT_HANGAR");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_ON_FOOT_CHASE"))
	{
		AUDIO::STOP_AUDIO_SCENE("SOL_3_ON_FOOT_CHASE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_LOSE_COPS"))
	{
		AUDIO::STOP_AUDIO_SCENE("SOL_3_LOSE_COPS");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_LOSE_COPS_PLANE"))
	{
		AUDIO::STOP_AUDIO_SCENE("SOL_3_LOSE_COPS_PLANE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_LOSE_COPS_VEHICLE"))
	{
		AUDIO::STOP_AUDIO_SCENE("SOL_3_LOSE_COPS_VEHICLE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_ENGINE_DEATH_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("SOL_3_ENGINE_DEATH_SCENE");
	}
	AUDIO::STOP_SOUND(iLocal_252);
	AUDIO::STOP_SOUND(iLocal_254);
	AUDIO::STOP_SOUND(iLocal_255);
	AUDIO::STOP_SOUND(iLocal_256);
	AUDIO::STOP_SOUND(iLocal_257);
	AUDIO::STOP_SOUND(iLocal_258);
	AUDIO::STOP_SOUND(iLocal_259);
	AUDIO::STOP_SOUND(iLocal_260);
	AUDIO::STOP_SOUND(iLocal_253);
	func_179(&uLocal_27, 0, 0);
	if (CAM::DOES_CAM_EXIST(uLocal_300))
	{
		CAM::DESTROY_CAM(uLocal_300, 0);
	}
	if (CAM::DOES_CAM_EXIST(uLocal_301))
	{
		CAM::DESTROY_CAM(uLocal_301, 0);
	}
	if (CAM::DOES_CAM_EXIST(uLocal_302))
	{
		CAM::DESTROY_CAM(uLocal_302, 0);
	}
	func_158(1, 1);
	STREAMING::REMOVE_ANIM_DICT("misssolomon_3");
	STREAMING::REMOVE_ANIM_DICT("amb@world_human_clipboard@male@base");
	STREAMING::REMOVE_ANIM_DICT("missheist_agency3aig_lift_waitped_a");
	VEHICLE::REMOVE_VEHICLE_RECORDING(1, "BB_CHASE");
	VEHICLE::REMOVE_VEHICLE_RECORDING(2, "BB_Chase");
	VEHICLE::REMOVE_VEHICLE_RECORDING(9, "BB_CHASE");
	VEHICLE::REMOVE_VEHICLE_RECORDING(35, "BB_Chase");
	VEHICLE::REMOVE_VEHICLE_RECORDING(45, "BB_Chase");
	VEHICLE::REMOVE_VEHICLE_RECORDING(54, "BB_Chase");
	VEHICLE::REMOVE_VEHICLE_RECORDING(55, "BB_Chase");
	VEHICLE::REMOVE_VEHICLE_RECORDING(61, "BB_CHASE");
	VEHICLE::REMOVE_VEHICLE_RECORDING(63, "BB_CHASE");
	VEHICLE::REMOVE_VEHICLE_RECORDING(64, "BB_CHASE");
	VEHICLE::REMOVE_VEHICLE_RECORDING(67, "BB_Chase");
	VEHICLE::REMOVE_VEHICLE_RECORDING(68, "BB_CHASE");
	VEHICLE::REMOVE_VEHICLE_RECORDING(69, "BB_Chase");
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_304);
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("digitalOverlay");
}

void func_158(bool bParam0, bool bParam1)//Position - 0xDD0B
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_184))
	{
		iLocal_90 = 0;
		func_178();
		PED::REMOVE_RELATIONSHIP_GROUP(iLocal_193);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(-9999f, -9999f, -9999f, 9999f, 9999f, 9999f, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
			PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), 1);
			PED::SET_CREATE_RANDOM_COPS(1);
		}
		if (bLocal_106)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_177());
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_176());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_175());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_174());
		if (!CAM::IS_SCREEN_FADED_OUT() && !bParam0)
		{
			func_173();
			func_172();
			func_169();
		}
		else
		{
			func_165();
			func_164();
		}
		if (bParam1)
		{
			func_159(0);
		}
	}
}

void func_159(bool bParam0)//Position - 0xDDC7
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 44)
	{
		func_160(iVar0, bParam0);
		iVar0++;
	}
}

void func_160(int iParam0, bool bParam1)//Position - 0xDDEA
{
	if (bParam1)
	{
		if (!func_71(iParam0, 2, 1))
		{
			func_163(iParam0, 2, 1);
		}
	}
	else if (func_71(iParam0, 2, 1))
	{
		func_161(iParam0, 2, 1);
	}
}

void func_161(int iParam0, int iParam1, bool bParam2)//Position - 0xDE21
{
	var uVar0;
	
	if (bParam2)
	{
		MISC::CLEAR_BIT(&(Global_15F9E.f_4F3[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_73() == 0)
		{
			uVar0 = func_49(func_72(iParam0), -1, 0);
			MISC::CLEAR_BIT(&uVar0, iParam1);
			func_162(func_72(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_17C49.f_29C[iParam0]), iParam1);
	}
}

void func_162(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0xDE89
{
	int iVar0;
	
	iVar0 = Global_25744D[iParam0 /*6*/][func_50(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, uParam1, iParam3);
	}
}

void func_163(int iParam0, int iParam1, bool bParam2)//Position - 0xDEB4
{
	var uVar0;
	
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_15F9E.f_4F3[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_73() == 0)
		{
			uVar0 = func_49(func_72(iParam0), -1, 0);
			MISC::SET_BIT(&uVar0, iParam1);
			func_162(func_72(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_17C49.f_29C[iParam0]), iParam1);
	}
}

void func_164()//Position - 0xDF1C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 175)
	{
		iLocal_200[iVar0] = 0;
		Local_172[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_108[iVar0] = 0f;
		fLocal_109[iVar0] = 0f;
		fLocal_110[iVar0] = 0f;
		fLocal_111[iVar0] = 0f;
		iLocal_148[iVar0] = 0;
		fLocal_112[iVar0] = 0f;
		iLocal_149[iVar0] = 0;
		iLocal_194[iVar0] = 0;
		iLocal_150[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		iLocal_201[iVar0] = 0;
		iVar0++;
	}
	iLocal_155 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		iLocal_202[iVar0] = 0;
		Local_173[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_123[iVar0] = 0f;
		fLocal_124[iVar0] = 0f;
		fLocal_125[iVar0] = 0f;
		fLocal_126[iVar0] = 0f;
		iLocal_154[iVar0] = 0;
		iLocal_195[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iLocal_204[iVar0] = 0;
		iVar0++;
	}
	iLocal_157 = 0;
	iVar0 = 0;
	while (iVar0 < 35)
	{
		iLocal_203[iVar0] = 0;
		Local_174[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_117[iVar0] = 0f;
		fLocal_118[iVar0] = 0f;
		fLocal_119[iVar0] = 0f;
		fLocal_120[iVar0] = 0f;
		iLocal_151[iVar0] = 0;
		fLocal_121[iVar0] = 0f;
		iLocal_152[iVar0] = 0;
		iLocal_196[iVar0] = 0;
		iLocal_153[iVar0] = 0;
		iVar0++;
	}
	iLocal_156 = 0;
	iLocal_159 = 0;
	iLocal_162 = 0;
	iLocal_163 = 0;
	iLocal_164 = 0;
}

void func_165()//Position - 0xE0A9
{
	func_168();
	func_167();
	func_166();
}

void func_166()//Position - 0xE0BD
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_203[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_203[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_203[iVar0]);
				}
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_203[iVar0], -1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_203[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_203[iVar0]));
			}
		}
		iLocal_152[iVar0] = 0;
		if (!bLocal_86 && !bLocal_99)
		{
			if (iLocal_151[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_151[iVar0], &cLocal_184);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!iLocal_196[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_196[iVar0]);
		}
		iVar0++;
	}
}

void func_167()//Position - 0xE1B3
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_202[iVar0]))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_202[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_202[iVar0]));
			}
		}
		iLocal_154[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!iLocal_195[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_195[iVar0]);
		}
		iVar0++;
	}
	iLocal_160 = 0;
	iLocal_157 = 0;
}

void func_168()//Position - 0xE230
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 175)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_200[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_200[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_200[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_200[iVar0]);
				}
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_200[iVar0], -1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_200[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_200[iVar0]));
			}
		}
		if (!bLocal_86 && !bLocal_99)
		{
			if (iLocal_148[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_148[iVar0], &cLocal_184);
			}
		}
		iLocal_149[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 175)
	{
		if (!iLocal_194[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_194[iVar0]);
		}
		iVar0++;
	}
	iLocal_159 = 0;
	iLocal_155 = 0;
}

void func_169()//Position - 0xE32E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_203[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_203[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_203[iVar0]);
				}
			}
			func_171(iLocal_203[iVar0]);
			func_170(iLocal_203[iVar0]);
		}
		iLocal_152[iVar0] = 0;
		iLocal_153[iVar0] = 0;
		if (!bLocal_86 && !bLocal_99)
		{
			if (iLocal_151[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_151[iVar0], &cLocal_184);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!iLocal_196[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_196[iVar0]);
		}
		iVar0++;
	}
	iLocal_161 = 0;
}

void func_170(int iParam0)//Position - 0xE3FB
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iParam0);
	}
}

void func_171(int iParam0)//Position - 0xE412
{
	float fVar0;
	int iVar1;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1);
		if (!PED::IS_PED_INJURED(iVar1))
		{
			if (!iVar1 == PLAYER::PLAYER_PED_ID())
			{
				fVar0 = ENTITY::GET_ENTITY_SPEED(iParam0);
				if (fVar0 < 8f)
				{
					fVar0 = 8f;
				}
				if (fVar0 > 62.9f)
				{
					fVar0 = 62.9f;
				}
				TASK::TASK_VEHICLE_MISSION(iVar1, iParam0, 0, 1, fVar0, 786603, 5f, 5f, 1);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 8192, 1);
				if (bLocal_107)
				{
					PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 65536, 1);
					PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 2, 0);
				}
				PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 6, 0);
			}
		}
	}
}

void func_172()//Position - 0xE4AB
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_202[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_202[iVar0]))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_202[iVar0], 1, 0);
			}
			func_170(iLocal_202[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!iLocal_195[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_195[iVar0]);
		}
		iVar0++;
	}
	iLocal_160 = 0;
	iLocal_157 = 0;
}

void func_173()//Position - 0xE52E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 175)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_200[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_200[iVar0]))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_200[iVar0], 1, 0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_200[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_200[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_200[iVar0]);
				}
			}
			func_171(iLocal_200[iVar0]);
			func_170(iLocal_200[iVar0]);
		}
		iLocal_149[iVar0] = 0;
		iLocal_150[iVar0] = 0;
		if (!bLocal_86 && !bLocal_99)
		{
			if (iLocal_148[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_148[iVar0], &cLocal_184);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 175)
	{
		if (!iLocal_194[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_194[iVar0]);
		}
		iVar0++;
	}
	iLocal_159 = 0;
	iLocal_155 = 0;
}

int func_174()//Position - 0xE61B
{
	return joaat("s_m_y_cop_01");
}

int func_175()//Position - 0xE628
{
	return joaat("police");
}

int func_176()//Position - 0xE635
{
	return joaat("sultan");
}

int func_177()//Position - 0xE642
{
	if (iLocal_197 == 0)
	{
		return joaat("a_m_y_business_01");
	}
	return iLocal_197;
}

void func_178()//Position - 0xE65F
{
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE();
	VEHICLE::SET_NUMBER_OF_PARKED_VEHICLES(-1);
	VEHICLE::SET_GARBAGE_TRUCKS(1);
	VEHICLE::SET_ALL_LOW_PRIORITY_VEHICLE_GENERATORS_ACTIVE(1);
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(1f);
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
	STREAMING::SET_PED_POPULATION_BUDGET(3);
}

void func_179(var uParam0, int iParam1, int iParam2)//Position - 0xE689
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
		if (func_180(uParam0->f_3))
		{
			HUD::CLEAR_HELP(1);
		}
	}
	if (!MISC::IS_STRING_NULL(sVar0))
	{
		if (func_180(sVar0))
		{
			HUD::CLEAR_HELP(1);
		}
	}
}

bool func_180(char* sParam0)//Position - 0xE766
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_181()//Position - 0xE779
{
	Global_38DE = 0;
	func_182();
}

void func_182()//Position - 0xE789
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_413F = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_3D4C = 6;
	}
}

void func_183()//Position - 0xE7AA
{
	Global_38DE = 0;
	func_184();
}

void func_184()//Position - 0xE7BA
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

void func_185()//Position - 0xE811
{
	if (HUD::DOES_BLIP_EXIST(uLocal_296))
	{
		HUD::REMOVE_BLIP(&uLocal_296);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_297))
	{
		HUD::REMOVE_BLIP(&uLocal_297);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_298))
	{
		HUD::REMOVE_BLIP(&uLocal_298);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_299))
	{
		HUD::REMOVE_BLIP(&uLocal_299);
	}
}

void func_186()//Position - 0xE85D
{
	if (iLocal_485 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_265))
		{
			if (!PED::IS_PED_INJURED(iLocal_265))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_265, PLAYER::PLAYER_PED_ID(), 0))
				{
					iLocal_485 = 1;
				}
			}
		}
	}
	if (iLocal_485 == 0)
	{
		if (iLocal_455 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_265))
			{
				if (!PED::IS_PED_INJURED(iLocal_265))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_263))
					{
						if (!PED::IS_PED_INJURED(iLocal_263))
						{
							if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_263))
							{
								if (TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_263) > 18)
								{
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_295))
									{
										if (ENTITY::IS_ENTITY_ATTACHED(iLocal_295))
										{
											ENTITY::DETACH_ENTITY(iLocal_295, 1, 1);
										}
									}
									uLocal_251 = PED::CREATE_SYNCHRONIZED_SCENE(-932.847f, -2978.498f, 13.946f, 0f, 0f, 16.56f, 2);
									TASK::TASK_SYNCHRONIZED_SCENE(iLocal_265, uLocal_251, "misssolomon_3", "_action", 1000f, -1000f, 4, 0, 1148846080, 0);
									TASK::TASK_LOOK_AT_ENTITY(iLocal_265, PLAYER::PLAYER_PED_ID(), 9000, 1024, 3);
									iLocal_455 = 1;
									iLocal_456 = 0;
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_455 == 1 && iLocal_457 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_265))
			{
				if (!PED::IS_PED_INJURED(iLocal_265))
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_251))
					{
						if (!iLocal_456)
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_251) > 0.25f)
							{
								func_17(&uLocal_489, 4, iLocal_265, "HangerWorker", 0, 1);
								func_187(iLocal_265, "T1M4_BCAA", "HangerWorker", 11);
								iLocal_456 = 1;
							}
						}
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_251) > 0.99f)
						{
							uLocal_251 = PED::CREATE_SYNCHRONIZED_SCENE(-932.847f, -2978.498f, 13.946f, 0f, 0f, 16.56f, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_265, uLocal_251, "misssolomon_3", "_react_to_death", 1000f, -1.5f, 3, 16, 1148846080, 0);
							iLocal_457 = 1;
						}
					}
				}
			}
		}
		if (iLocal_457 == 1 && iLocal_460 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_265))
			{
				if (!PED::IS_PED_INJURED(iLocal_265))
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_251))
					{
						if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_265, MISC::GET_HASH_KEY("ENDS_IN_RUN")))
						{
							TASK::OPEN_SEQUENCE_TASK(&uLocal_303);
							TASK::TASK_FORCE_MOTION_STATE(0, -1115154469, 0);
							TASK::TASK_GO_STRAIGHT_TO_COORD(0, -1001.9f, -2954.3f, 13.1f, 3f, -1, 40000f, 3f);
							TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_303);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_265, uLocal_303);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_303);
							PED::FORCE_PED_MOTION_STATE(iLocal_265, -1115154469, 0, 0, 0);
							iLocal_460 = 1;
						}
					}
				}
			}
		}
	}
	else if (iLocal_460 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_265))
		{
			if (!PED::IS_PED_INJURED(iLocal_265))
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_303);
				TASK::TASK_GO_STRAIGHT_TO_COORD(0, -1001.9f, -2954.3f, 13.1f, 3f, -1, 40000f, 3f);
				TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_303);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_265, uLocal_303);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_303);
				iLocal_460 = 1;
			}
		}
	}
}

void func_187(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0xEB3D
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(iParam0, sParam1, sParam2, func_15(iParam3), 0);
}

void func_188()//Position - 0xEB56
{
	if (iLocal_222 == 0)
	{
		iLocal_224 = 0;
		iLocal_252 = AUDIO::GET_SOUND_ID();
		CUTSCENE::REQUEST_CUTSCENE("TRV_4_MCS_2", 8);
		STREAMING::REQUEST_MODEL(joaat("prop_jet_bloodsplat_01"));
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Trev4_5"))
		{
			TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("Trev4_5", 0, 0.5f, 1f);
		}
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
		iLocal_222 = 1;
	}
	if (iLocal_222 == 1)
	{
		switch (iLocal_224)
		{
			case 0:
				while (!CUTSCENE::HAS_CUTSCENE_LOADED())
				{
					SYSTEM::WAIT(0);
				}
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				if (!PED::IS_PED_INJURED(iLocal_263))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_263, "Molly", 1, joaat("ig_molly"), 0);
				}
				if (!PED::IS_PED_INJURED(iLocal_265))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_265, "Airworker_Tackle_trevor", 0, joaat("s_m_y_airworker"), 0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_283, 0))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_283, "JET_TRV4", 0, joaat("jet"), 0);
				}
				func_189(1, 1, 1, 0);
				AUDIO::TRIGGER_MUSIC_EVENT("TRV4_SUCK_CS");
				CUTSCENE::START_CUTSCENE(0);
				iLocal_224++;
				break;
			
			case 1:
				func_109();
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("JET_TRV4", joaat("jet")))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_283, 0))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_283))
						{
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_283, 1);
						}
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Airworker_Tackle_trevor", joaat("s_m_y_airworker")))
				{
					if (!PED::IS_PED_INJURED(iLocal_265))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_265, 1);
						TASK::TASK_SMART_FLEE_PED(iLocal_265, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
						ENTITY::SET_ENTITY_INVINCIBLE(iLocal_265, 0);
						PED::SET_PED_CAN_BE_TARGETTED(iLocal_265, 1);
						ENTITY::SET_ENTITY_PROOFS(iLocal_265, 0, 0, 0, 0, 0, 0, 0, 0);
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
				{
					func_109();
					func_107(1);
				}
				if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					iLocal_335 = 1;
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_293))
					{
						if (STREAMING::HAS_MODEL_LOADED(joaat("prop_jet_bloodsplat_01")))
						{
							iLocal_293 = OBJECT::CREATE_OBJECT(joaat("prop_jet_bloodsplat_01"), -946.4231f, -2979.826f, 12.9264f, 1, 1, 0);
							ENTITY::SET_ENTITY_ROTATION(iLocal_293, 0f, 0f, -121.5948f, 2, 1);
							ENTITY::SET_ENTITY_QUATERNION(iLocal_293, 0f, 0f, 0.8729f, -0.4879f);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_jet_bloodsplat_01"));
						}
					}
					CUTSCENE::_0xC61B86C9F61EB404(0);
					func_189(0, 1, 1, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), 0, 2))
					{
						WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_smg"), 150, 1, 1);
					}
					iLocal_222 = 2;
				}
				break;
			}
	}
	if (iLocal_222 == 2)
	{
		iLocal_222 = 0;
		iLocal_221 = 8;
	}
}

void func_189(bool bParam0, bool bParam1, int iParam2, int iParam3)//Position - 0xEDB1
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID());
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
		func_196(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_3839.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(0);
			}
			if (!func_195())
			{
				Global_3839.f_1 = 3;
			}
			Global_3D4C = 5;
		}
		func_194(1, iParam3, iParam2);
		Global_D5E4 = 1;
		Global_105F5 = 1;
		Global_10A93 = 1;
	}
	else
	{
		func_196(0);
		HUD::THEFEED_RESUME();
		Global_D5E4 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
		func_194(0, iParam3, iParam2);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_190(PLAYER::PLAYER_ID()))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
		}
		Global_10A93 = 0;
	}
}

int func_190(int iParam0)//Position - 0xEE82
{
	if (func_192(iParam0, 0))
	{
		return 1;
	}
	if (func_191())
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

bool func_191()//Position - 0xEEC3
{
	return MISC::IS_BIT_SET(Global_240005, 3);
}

bool func_192(int iParam0, int iParam1)//Position - 0xEED4
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_193(-1, 0) == 8;
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

int func_193(int iParam0, bool bParam1)//Position - 0xEF1F
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_51();
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

int func_194(int iParam0, int iParam1, int iParam2)//Position - 0xEF60
{
	int iVar0;
	
	iVar0 = 0;
	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::_0xA0FE76168A189DDB() != iParam0 && iParam2)
		{
			CUTSCENE::_0x20746F7B1032A3C7(iParam0, iParam1, 1);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_195()//Position - 0xEF91
{
	if (Global_3839.f_1 == 1 || Global_3839.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_196(int iParam0)//Position - 0xEFB8
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

void func_197()//Position - 0xEFDB
{
	if (iLocal_441 == 0)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -926.0258f, -2958.615f, 12.46467f, -930.6525f, -2956.061f, 16.45945f, 2.75f, 0, 1, 0))
		{
			iLocal_441 = 1;
		}
	}
	else if (iLocal_445 == 0)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -938.5178f, -2972.022f, 12.46715f, -934.1034f, -2974.613f, 15.96715f, 5.25f, 0, 1, 0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 0f);
		}
		else
		{
			if (fLocal_323 < 1f)
			{
				fLocal_323 = 1f;
			}
			fLocal_323 = (fLocal_323 * 0.975f);
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), fLocal_323);
		}
	}
	if (iLocal_222 > 0)
	{
		func_186();
	}
	if (iLocal_222 == 0)
	{
		iLocal_336 = 0;
		iLocal_337 = 0;
		iLocal_338 = 0;
		iLocal_339 = 0;
		iLocal_341 = 0;
		iLocal_357 = 0;
		iLocal_419 = 0;
		iLocal_420 = 0;
		iLocal_421 = 0;
		iLocal_427 = 0;
		iLocal_442 = 0;
		iLocal_443 = 0;
		iLocal_444 = 0;
		iLocal_445 = 0;
		iLocal_446[0] = 0;
		iLocal_447[0] = 0;
		iLocal_446[1] = 0;
		iLocal_447[1] = 0;
		iLocal_446[2] = 0;
		iLocal_455 = 0;
		iLocal_457 = 0;
		iLocal_458 = 0;
		iLocal_459 = 0;
		iLocal_460 = 0;
		iLocal_463 = 0;
		iLocal_483 = 0;
		iLocal_485 = 0;
		iLocal_486[3] = 0;
		STREAMING::REQUEST_MODEL(joaat("prop_jet_bloodsplat_01"));
		INTERIOR::_0xAF348AFCB575A441("V_60_HangerRm");
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 3, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_263))
		{
			if (!PED::IS_PED_INJURED(iLocal_263))
			{
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_263))
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_263, 3f, 1);
				}
			}
		}
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
		iLocal_222 = 1;
	}
	if (iLocal_222 == 1)
	{
		if (iLocal_427 == 0)
		{
			if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Trv_4_747", 0))
			{
				iLocal_427 = 1;
			}
		}
		if (iLocal_419 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_263))
			{
				if (!PED::IS_PED_INJURED(iLocal_263))
				{
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_263))
					{
						if (TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_263) > 20)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_283))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_283, 0))
								{
									func_202(&iLocal_283);
									AUDIO::PLAY_SOUND_FROM_COORD(iLocal_252, "Trevor_4_747_Jet_Engine", -937.77f, -2981.36f, 15.44f, 0, 0, 0, 0);
									VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_283, 1, 0);
									iLocal_419 = 1;
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_442 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_263))
			{
				if (!PED::IS_PED_INJURED(iLocal_263))
				{
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_263))
					{
						if (TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_263) > 23)
						{
							TASK::CLEAR_PED_TASKS(iLocal_263);
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_283))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_283, 0))
								{
									if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_ENGINE_DEATH_SCENE"))
									{
										AUDIO::START_AUDIO_SCENE("SOL_3_ENGINE_DEATH_SCENE");
									}
									uLocal_250 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
									PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_250, iLocal_283, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_283, "chassis_Control"));
									TASK::TASK_SYNCHRONIZED_SCENE(iLocal_263, uLocal_250, "MISSSOLOMON_3", "molly_death", 1.5f, -8f, 4, 0, 1148846080, 0);
									PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_250, 1);
									iLocal_442 = 1;
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_443 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_263))
			{
				if (!PED::IS_PED_INJURED(iLocal_263))
				{
					if (iLocal_442 == 1)
					{
						Local_317 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
						if (Local_317.f_1 < -2965f)
						{
							CAM::SET_GAMEPLAY_ENTITY_HINT(iLocal_263, 0f, 0f, 0f, 1, 6000, 1000, 2000, 0);
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_263, 0);
							TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_263, 4000, 48, 4);
							iLocal_443 = 1;
						}
					}
				}
			}
		}
		else if (iLocal_444 == 0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_263))
			{
				CAM::STOP_GAMEPLAY_HINT(0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_267[0]))
				{
					if (!PED::IS_PED_INJURED(iLocal_267[0]))
					{
						TASK::CLEAR_PED_TASKS(iLocal_267[0]);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_267[0], 0);
					}
				}
				iLocal_444 = 1;
			}
		}
		if (iLocal_421 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_263))
			{
				if (!PED::IS_PED_INJURED(iLocal_263))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_294))
					{
						if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_294, iLocal_263))
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_263, "MISSSOLOMON_3", "molly_death", 3))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_250) > 0.59f)
								{
									ENTITY::DETACH_ENTITY(iLocal_294, 1, 1);
									if (HUD::DOES_BLIP_EXIST(uLocal_296))
									{
										HUD::REMOVE_BLIP(&uLocal_296);
									}
									if (!HUD::DOES_BLIP_EXIST(uLocal_299))
									{
										func_187(iLocal_263, "HIGH_FALL", "WAVELOAD_PAIN_FEMALE", 11);
										if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_ON_FOOT_CHASE"))
										{
											AUDIO::STOP_AUDIO_SCENE("SOL_3_ON_FOOT_CHASE");
										}
										if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_LOSE_COPS"))
										{
											AUDIO::START_AUDIO_SCENE("SOL_3_LOSE_COPS");
										}
										SYSTEM::SETTIMERB(0);
										iLocal_421 = 1;
									}
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_445 == 0)
		{
			if (iLocal_421 == 1 && SYSTEM::TIMERB() > 2500)
			{
				uLocal_299 = func_199(iLocal_294);
				func_20("SOL3_GOD1", 7500, -1);
				SYSTEM::SETTIMERB(0);
				iLocal_445 = 1;
			}
		}
		if (iLocal_486[3] == 0)
		{
			if (iLocal_445 == 1 && iLocal_444 == 1)
			{
				if (SYSTEM::TIMERB() > 2500)
				{
					RECORDING::_0x293220DA1B46CEBC(10f, 2f, 3);
					iLocal_486[3] = 1;
				}
			}
		}
		if (iLocal_420 == 0)
		{
			if (!PED::IS_PED_INJURED(iLocal_263))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_263, "MISSSOLOMON_3", "molly_death", 3))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_250) > 0.89f)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_283))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_283, 0))
							{
								PED::DELETE_PED(&iLocal_263);
								GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_trev4_747_blood_impact", iLocal_283, -12.5793f, 12.2f, -7.09421f, 0f, 0f, 0f, 1f, 0, 0, 0);
								uLocal_672 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_trev4_747_exhaust_plane_misfire", iLocal_283, -12.6323f, 8.1153f, -7.0876f, 0f, 0f, 0f, 1f, 0, 0, 0);
								AUDIO::PLAY_SOUND_FROM_COORD(iLocal_253, "Trevor_4_747_Man_Sucked_In", -938.6f, -2984.13f, 15.47f, 0, 0, 0, 0);
								iLocal_233 = MISC::GET_GAME_TIMER();
								iLocal_420 = 1;
							}
						}
					}
				}
			}
		}
		else
		{
			if (MISC::GET_GAME_TIMER() > iLocal_233 + 574)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_293))
				{
					if (STREAMING::HAS_MODEL_LOADED(joaat("prop_jet_bloodsplat_01")))
					{
						iLocal_293 = OBJECT::CREATE_OBJECT(joaat("prop_jet_bloodsplat_01"), -946.4231f, -2979.826f, 12.9264f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_293, 0f, 0f, -121.5948f, 2, 1);
						ENTITY::SET_ENTITY_QUATERNION(iLocal_293, 0f, 0f, 0.8729f, -0.4879f);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_jet_bloodsplat_01"));
					}
				}
				if (iLocal_483 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_283))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_283, 0))
						{
							GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_trev4_747_engine_debris", iLocal_283, -12.6286f, 6.85353f, -7.13622f, 180f, 0f, 0f, 1f, 0, 0, 0);
							VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_283, 0, 0);
							func_198();
							AUDIO::STOP_SOUND(iLocal_252);
							iLocal_483 = 1;
						}
					}
				}
			}
			if (iLocal_446[0] == 0)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_233 + 300)
				{
					if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_672))
					{
						GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_672, 0);
					}
					iLocal_446[0] = 1;
				}
			}
			else if (iLocal_447[0] == 0)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_233 + 700)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_283))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_283, 0))
						{
							uLocal_672 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_trev4_747_exhaust_plane_misfire", iLocal_283, -12.6323f, 8.1153f, -7.0876f, 0f, 0f, 0f, 1f, 0, 0, 0);
							iLocal_447[0] = 1;
						}
					}
				}
			}
			else if (iLocal_446[1] == 0)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_233 + 1000)
				{
					if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_672))
					{
						GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_672, 0);
					}
					iLocal_446[1] = 1;
				}
			}
			else if (iLocal_447[1] == 0)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_233 + 1400)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_283))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_283, 0))
						{
							uLocal_672 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_trev4_747_exhaust_plane_misfire", iLocal_283, -12.6323f, 8.1153f, -7.0876f, 0f, 0f, 0f, 1f, 0, 0, 0);
							uLocal_671 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_trev4_747_engine_damage", iLocal_283, -11.956f, 10.528f, -7.657f, 0f, 2f, 0f, 1065353216, 0, 0, 0);
							iLocal_447[1] = 1;
						}
					}
				}
			}
			else if (iLocal_446[2] == 0)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_233 + 3500)
				{
					if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_672))
					{
						GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_672, 0);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_283))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_283, 0))
						{
							ENTITY::SET_ENTITY_PROOFS(iLocal_283, 0, 0, 0, 0, 0, 0, 0, 0);
						}
					}
					iLocal_446[2] = 1;
				}
			}
		}
		if (iLocal_458 == 0)
		{
			if (iLocal_421 == 1)
			{
				if (iLocal_459 == 0)
				{
					if (!ENTITY::IS_ENTITY_IN_AIR(iLocal_294))
					{
						iLocal_243 = MISC::GET_GAME_TIMER();
						iLocal_459 = 1;
					}
				}
				else if (MISC::GET_GAME_TIMER() > iLocal_243 + 2000)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_294, 1);
					iLocal_458 = 1;
				}
			}
		}
		if (iLocal_463 == 0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_263))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_283))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_283, 0);
					iLocal_463 = 1;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_294))
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_299))
			{
				if (func_16(PLAYER::PLAYER_PED_ID(), iLocal_294, 1) < 1.5f && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "PICK_UP", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					HUD::REMOVE_BLIP(&uLocal_299);
					OBJECT::DELETE_OBJECT(&iLocal_294);
					func_109();
					iLocal_222 = 0;
					iLocal_221 = 8;
				}
			}
		}
	}
}

void func_198()//Position - 0xF8D6
{
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_667))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_667, 0);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_668))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_668, 0);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_669))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_669, 0);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_670))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_670, 0);
	}
}

int func_199(int iParam0)//Position - 0xF926
{
	return func_200(iParam0, 1, 0);
}

int func_200(int iParam0, int iParam1, bool bParam2)//Position - 0xF936
{
	var uVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	uVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_201(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
		if (!bParam2)
		{
			HUD::SET_BLIP_AS_FRIENDLY(uVar0, iParam1);
		}
		else
		{
			HUD::SET_BLIP_COLOUR(uVar0, 2);
		}
	}
	else if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_201(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(uVar0, iParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_201(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_201(bool bParam0, float fParam1, float fParam2)//Position - 0xF9DA
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_202(int iParam0)//Position - 0xF9F1
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		Var0 = { 22.6057f, -2.10018f, -6.22841f };
		Var1 = { 12.6349f, 7.89711f, -7.09742f };
		Var2 = { -22.5879f, -2.2931f, -6.22542f };
		Var3 = { -12.6675f, 8.15519f, -6.98833f };
		Var4 = { 180f, 0f, 0f };
		uLocal_667 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_trev4_747_engine_heathaze", *iParam0, Var0, Var4, 1065353216, 0, 0, 0);
		uLocal_668 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_trev4_747_engine_heathaze", *iParam0, Var1, Var4, 1065353216, 0, 0, 0);
		uLocal_669 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_trev4_747_engine_heathaze", *iParam0, Var2, Var4, 1065353216, 0, 0, 0);
		uLocal_670 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_trev4_747_engine_heathaze", *iParam0, Var3, Var4, 1065353216, 0, 0, 0);
	}
}

void func_203()//Position - 0xFAD3
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_263))
	{
		if (!PED::IS_PED_INJURED(iLocal_263))
		{
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_263))
			{
				if (func_16(PLAYER::PLAYER_PED_ID(), iLocal_263, 1) < 17f)
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_263, 3f, 1);
				}
				if (func_16(PLAYER::PLAYER_PED_ID(), iLocal_263, 1) < 22f && func_16(PLAYER::PLAYER_PED_ID(), iLocal_263, 1) > 17f)
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_263, 2f, 1);
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -921.7f, -2946.4f, 13.4f, 1) > 8f && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_263))
				{
					if (func_16(PLAYER::PLAYER_PED_ID(), iLocal_263, 1) > 22f)
					{
						TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_263, 1f, 1);
					}
				}
				else if (func_16(PLAYER::PLAYER_PED_ID(), iLocal_263, 1) > 22f)
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_263, 2f, 1);
				}
			}
		}
	}
	if (iLocal_222 > 0)
	{
		if (iLocal_441 == 0)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -926.0258f, -2958.615f, 12.46467f, -930.6525f, -2956.061f, 16.45945f, 2.75f, 0, 1, 0))
			{
				iLocal_441 = 1;
			}
		}
		else
		{
			PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
			if (fLocal_323 < 1f)
			{
				fLocal_323 = 1f;
			}
			fLocal_323 = (fLocal_323 * 0.98f);
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), fLocal_323);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_283))
		{
			STREAMING::REQUEST_MODEL(joaat("jet"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("jet")))
			{
				iLocal_283 = VEHICLE::CREATE_VEHICLE(joaat("jet"), -952.1345f, -2990.269f, 12.9451f, 240.7726f, 1, 1);
				VEHICLE::SET_VEHICLE_LIVERY(iLocal_283, 2);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_283, 0);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_283, 1);
				ENTITY::SET_ENTITY_PROOFS(iLocal_283, 1, 1, 1, 1, 1, 0, 0, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("jet"));
				ENTITY::SET_ENTITY_LOD_DIST(iLocal_283, 500);
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_265))
		{
			STREAMING::REQUEST_MODEL(joaat("s_m_y_airworker"));
			STREAMING::REQUEST_ANIM_DICT("misssolomon_3");
			STREAMING::REQUEST_MODEL(joaat("p_amb_clipboard_01"));
			if ((STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_airworker")) && STREAMING::HAS_ANIM_DICT_LOADED("misssolomon_3")) && STREAMING::HAS_MODEL_LOADED(joaat("p_amb_clipboard_01")))
			{
				iLocal_265 = PED::CREATE_PED(26, joaat("s_m_y_airworker"), -932.1812f, -2967.947f, 12.9451f, 170.7182f, 1, 1);
				ENTITY::SET_ENTITY_PROOFS(iLocal_265, 0, 0, 0, 0, 0, 0, 0, 0);
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_265, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_265, 1);
				func_17(&uLocal_489, 4, iLocal_265, "HangerWorker", 0, 1);
				iLocal_295 = OBJECT::CREATE_OBJECT(joaat("p_amb_clipboard_01"), -932.1812f, -2967.947f, 12.9451f, 1, 1, 0);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_295, iLocal_265, PED::GET_PED_BONE_INDEX(iLocal_263, 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				uLocal_251 = PED::CREATE_SYNCHRONIZED_SCENE(-932.847f, -2978.498f, 13.946f, 0f, 0f, 16.56f, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_265, uLocal_251, "misssolomon_3", "_start_loop", 1000f, -8f, 68, 0, 1148846080, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_airworker"));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_amb_clipboard_01"));
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_267[0]))
		{
			STREAMING::REQUEST_MODEL(joaat("s_m_y_cop_01"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_cop_01")))
			{
				iLocal_267[0] = PED::CREATE_PED(6, joaat("s_m_y_cop_01"), -969.06f, -2955.186f, 12.945f, 241.1703f, 1, 1);
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_267[0], joaat("weapon_pistol"), 1000, 1, 1);
				PED::SET_PED_ACCURACY(iLocal_267[0], 20);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_267[0], 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_267[0], 1);
				TASK::TASK_AIM_GUN_AT_ENTITY(iLocal_267[0], PLAYER::PLAYER_PED_ID(), -1, 1);
				func_111(iLocal_267[0], 0);
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_284))
		{
			STREAMING::REQUEST_MODEL(joaat("shamal"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("shamal")))
			{
				iLocal_284 = VEHICLE::CREATE_VEHICLE(joaat("shamal"), -968.3718f, -2952.298f, 12.9451f, 114.9439f, 1, 1);
				VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_284, 0, 0, 1);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_284);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("shamal"));
				ENTITY::SET_ENTITY_HEALTH(iLocal_284, 2000);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_284))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_284, 0))
			{
				if (func_16(PLAYER::PLAYER_PED_ID(), iLocal_284, 1) > 5f)
				{
					VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_284, 0, 0, 0);
				}
			}
		}
	}
	if (iLocal_222 == 0)
	{
		func_25(2, "STAGE_ON_FOOT_CHASE", 0, 0, 0, 1);
		if (iLocal_342 == 1)
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(0);
			}
			func_104();
			func_17(&uLocal_489, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
			iLocal_342 = 0;
		}
		iLocal_399 = 0;
		iLocal_400 = 0;
		iLocal_441 = 0;
		fLocal_323 = 3f;
		iLocal_226 = 0;
		func_158(0, 1);
		VEHICLE::REMOVE_VEHICLE_RECORDING(45, "BB_CHASE");
		VEHICLE::REMOVE_VEHICLE_RECORDING(35, "BB_CHASE");
		VEHICLE::REMOVE_VEHICLE_RECORDING(2, "BB_CHASE");
		VEHICLE::REMOVE_VEHICLE_RECORDING(54, "BB_CHASE");
		VEHICLE::REMOVE_VEHICLE_RECORDING(1, "BB_CHASE");
		VEHICLE::REMOVE_VEHICLE_RECORDING(9, "BB_CHASE");
		VEHICLE::REMOVE_VEHICLE_RECORDING(61, "BB_CHASE");
		VEHICLE::REMOVE_VEHICLE_RECORDING(63, "BB_CHASE");
		VEHICLE::REMOVE_VEHICLE_RECORDING(64, "BB_CHASE");
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_304);
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("digitalOverlay");
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_277))
		{
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_277, 0);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_277);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_286))
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_286);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_275[0]))
		{
			PED::DELETE_PED(&(iLocal_275[0]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_279[0]))
		{
			VEHICLE::DELETE_VEHICLE(&(iLocal_279[0]));
		}
		MISC::SET_FAKE_WANTED_LEVEL(0);
		AUDIO::SET_FRONTEND_RADIO_ACTIVE(1);
		if (!PED::IS_PED_INJURED(iLocal_263))
		{
			if (!HUD::DOES_BLIP_EXIST(uLocal_296))
			{
				uLocal_296 = HUD::ADD_BLIP_FOR_ENTITY(iLocal_263);
				HUD::SET_BLIP_AS_FRIENDLY(uLocal_296, 1);
			}
		}
		AUDIO::SET_AUDIO_FLAG("PoliceScannerDisabled", 1);
		if (iLocal_362[2] == 1)
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_260))
			{
				AUDIO::STOP_SOUND(iLocal_260);
			}
			AUDIO::RELEASE_SOUND_ID(iLocal_260);
			iLocal_389 = 0;
			iLocal_362[2] = 0;
		}
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 3, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
		AUDIO::TRIGGER_MUSIC_EVENT("TRV4_RUN");
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_283))
		{
			STREAMING::REQUEST_MODEL(joaat("jet"));
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_265))
		{
			STREAMING::REQUEST_MODEL(joaat("s_m_y_airworker"));
		}
		STREAMING::REQUEST_MODEL(joaat("shamal"));
		STREAMING::REQUEST_MODEL(joaat("s_m_y_cop_01"));
		STREAMING::REQUEST_MODEL(joaat("police3"));
		STREAMING::REQUEST_MODEL(joaat("p_amb_clipboard_01"));
		VEHICLE::REQUEST_VEHICLE_RECORDING(68, "BB_Chase");
		VEHICLE::REQUEST_VEHICLE_RECORDING(69, "BB_Chase");
		STREAMING::REQUEST_ANIM_DICT("misssolomon_3");
		SYSTEM::SETTIMERA(0);
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Trev4_5"))
		{
			TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("Trev4_5", 1, 1f, 1f);
		}
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (!func_24())
			{
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
			}
			func_21(0, -1, 1);
			func_20("TRV4_CHASE1", 7500, 1);
		}
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
		iLocal_222 = 1;
	}
	if (iLocal_222 == 1)
	{
		iLocal_222 = 2;
	}
	if (iLocal_222 == 2)
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -880.365f, -2942.26f, 14f, 9.55f, 15.69f, 5f, 0, 1, 0))
		{
			func_204("TRV4_FAIL1");
		}
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -945.725f, -2893.15f, 14f, 4.5f, 9.56f, 5f, 0, 1, 0))
		{
			func_204("TRV4_FAIL1");
		}
		if (SYSTEM::TIMERA() > 15000)
		{
			func_204("TRV4_FAIL1");
		}
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -932.1196f, -2934.317f, 12.9448f, 2f, 2f, 2f, 0, 1, 0))
		{
			if (!PED::IS_PED_INJURED(iLocal_263))
			{
				if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_263))
				{
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_263, "BB_MOLLY_2", 10, 4, -1);
					TASK::TASK_PLAY_ANIM(iLocal_263, "move_f@film_reel_arms", "run", 8f, -8f, -1, 49, 0, 0, 0, 0);
				}
			}
			SYSTEM::SETTIMERA(0);
			iLocal_222 = 3;
		}
	}
	if (iLocal_222 == 3)
	{
		if (!PED::IS_PED_INJURED(iLocal_263))
		{
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_263))
			{
				if (TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_263) > 18 && iLocal_404 == 0)
				{
					iLocal_349 = 0;
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_263, 3f, 1);
					iLocal_222 = 0;
					iLocal_221 = 6;
				}
			}
		}
		if (SYSTEM::TIMERA() > 50000)
		{
			if (!PED::IS_PED_INJURED(iLocal_263))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_263);
				ENTITY::SET_ENTITY_COORDS(iLocal_263, -932.5f, -2964.1f, 13.4f, 1, 0, 0, 1);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_263, "BB_MOLLY_2", 18, 4, -1);
				TASK::TASK_PLAY_ANIM(iLocal_263, "move_f@film_reel_arms", "run", 8f, -8f, -1, 49, 0, 0, 0, 0);
				iLocal_349 = 0;
				iLocal_222 = 0;
				iLocal_221 = 6;
			}
		}
	}
}

void func_204(char* sParam0)//Position - 0x10329
{
	if (iLocal_404 == 0)
	{
		if (iLocal_333)
		{
			func_194(0, 1, 1);
			CAM::SET_CAM_ACTIVE(uLocal_300, 0);
			CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
			HUD::DISPLAY_RADAR(1);
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_CHOPPER_CAM"))
			{
				AUDIO::STOP_AUDIO_SCENE("SOL_3_CHOPPER_CAM");
			}
			AUDIO::STOP_SOUND(iLocal_260);
			func_214();
			AUDIO::SET_FRONTEND_RADIO_ACTIVE(1);
			iLocal_362[2] = 0;
			iLocal_333 = 0;
		}
		AUDIO::TRIGGER_MUSIC_EVENT("TRV4_FAIL");
		sLocal_488 = sParam0;
		HUD::CLEAR_PRINTS();
		func_183();
		func_181();
		func_205(sLocal_488);
		iLocal_404 = 1;
	}
}

void func_205(char* sParam0)//Position - 0x103B1
{
	func_213(sParam0);
	func_206(0);
}

void func_206(int iParam0)//Position - 0x103C4
{
	int iVar0;
	
	if (Global_17C49.f_1CAD || func_388(0))
	{
		iVar0 = func_8();
		if (!func_207(iVar0))
		{
			return;
		}
		MISC::SET_BIT(&(Global_13CDF[iVar0 /*5*/].f_1), 5);
		Global_15F8E = iParam0;
	}
}

int func_207(int iParam0)//Position - 0x10409
{
	int iVar0;
	int iVar1;
	
	func_212();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	iVar0 = Global_13CDF[iParam0 /*5*/];
	iVar1 = Global_10BA2.f_6D[iVar0 /*4*/];
	func_211(iVar1, 1);
	PLAYER::SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(PLAYER::PLAYER_ID());
	PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID());
	func_208(&(Global_17C49.f_6C1.f_21B), iVar1);
	if (Global_14A3E == Global_15F8F)
	{
		Global_17C49.f_1CAD.f_148[iVar1 /*6*/].f_1++;
	}
	if (!MISC::IS_BIT_SET(Global_13D03[iVar1 /*34*/].f_F, 1))
	{
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			MISC::SET_FADE_IN_AFTER_DEATH_ARREST(0);
		}
	}
	Global_17C49.f_1CAD.f_148[iVar1 /*6*/].f_2++;
	Global_14A3E = Global_15F8F;
	if (iParam0 == -1)
	{
		if (Global_17C49.f_1CAD)
		{
		}
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_13CDF[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_13CDF[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_208(var uParam0, int iParam1)//Position - 0x10520
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar3;
	
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_17C49.f_4193[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !MISC::IS_BIT_SET(Global_17C49.f_1CAD.f_63.f_D9[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar3 = 0f;
			if (!func_210(Global_17C49.f_4193[iVar0], &Var2, &fVar3))
			{
				Global_17C49.f_4193[iVar0] = 318;
				func_209(&(uParam0->f_5F4[iVar0]));
				uParam0->f_5F8[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_602[iVar0] = 0f;
				uParam0->f_606[iVar0] = 0;
				uParam0->f_60A[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_614[iVar0] = 0;
				Global_156CD[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_156CD[iVar0 /*29*/].f_9 = 0f;
				Global_156CD[iVar0 /*29*/].f_C = 0f;
				Global_156CD[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_156CD[iVar0 /*29*/].f_A = 0f;
				Global_156CD[iVar0 /*29*/].f_D = 0f;
				Global_156CD[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_156CD[iVar0 /*29*/].f_B = 0f;
				Global_156CD[iVar0 /*29*/].f_E = 0f;
				Global_156CD[iVar0 /*29*/].f_11 = { 0f, 0f, 0f };
				Global_156CD[iVar0 /*29*/].f_1A = 0f;
				Global_156CD[iVar0 /*29*/].f_14 = { 0f, 0f, 0f };
				Global_156CD[iVar0 /*29*/].f_1B = 0f;
				Global_156CD[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_156CD[iVar0 /*29*/].f_1C = 0f;
			}
		}
		iVar0++;
	}
}

void func_209(var uParam0)//Position - 0x106E9
{
	*uParam0 = -15;
}

int func_210(int iParam0, var uParam1, float fParam2)//Position - 0x106F7
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*fParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { -90.0089f, -1324.195f, 28.3203f };
			*fParam2 = 194.1887f;
			return 1;
			break;
		
		case 9:
			return func_210(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_210(8, uParam1, fParam2);
			break;
		
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*fParam2 = 201.6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = { 1432.34f, -1887.383f, 70.5768f };
			*fParam2 = 350.0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = { 1666.204f, 1967.25f, 143.3213f };
			*fParam2 = 0.7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = { 135.055f, -1759.64f, 27.8957f };
			*fParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = { 687.6992f, -1744.03f, 28.3624f };
			*fParam2 = 267.1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*fParam2 = 340.0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*fParam2 = 22.9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1555.958f, 953.6136f, 77.2063f };
			*fParam2 = 152.8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*fParam2 = (250.4535f - 360f);
			return 1;
			break;
		
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*fParam2 = 119.603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*fParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*fParam2 = 51.7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*fParam2 = 151.2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = { 72.2278f, -1464.68f, 28.2915f };
			*fParam2 = 156.8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*fParam2 = 7.2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { 257.9167f, -1120.786f, 28.3684f };
			*fParam2 = 97.2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*fParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*fParam2 = 162.693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = { -1771.802f, 794.4316f, 138.4211f };
			*fParam2 = 128.9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { 1495.595f, -1848.821f, 70.2075f };
			*fParam2 = 32.2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = { 2897.554f, 4032.241f, 50.1419f };
			*fParam2 = 192.8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*fParam2 = -3.7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { 709.0244f, -2916.479f, 5.0589f };
			*fParam2 = 355.326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*fParam2 = 334.1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = { 595.2742f, -2819.183f, 5.0559f };
			*fParam2 = 46.8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*fParam2 = 165.9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 3321.537f, 4975.455f, 25.9097f };
			*fParam2 = 221.228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*fParam2 = (42f + 180f);
			return 1;
			break;
		
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*fParam2 = 98.9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*fParam2 = 220.9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*fParam2 = 83.9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = { 262.5499f, -2540.15f, 4.8433f };
			*fParam2 = -64.1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*fParam2 = 127.7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*fParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = { 37.5988f, -1351.52f, 28.2954f };
			*fParam2 = 90.0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*fParam2 = 84.6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*fParam2 = 99.6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*fParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*fParam2 = 211.8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = { 2091.258f, 4714.852f, 40.1936f };
			*fParam2 = 136.0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void func_211(int iParam0, bool bParam1)//Position - 0x11066
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_14980[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_14980[iParam0 /*2*/] = 0;
	}
}

void func_212()//Position - 0x110A4
{
	Global_15F8D = 1;
	if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_10B7D))
		{
			switch (func_91())
			{
				case 0:
					StringCopy(&Global_10B7D, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_10B7D, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_10B7D, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_10B81, "", 16);
		}
		Global_15F8D = 0;
	}
	else if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_10B7D))
		{
			switch (func_91())
			{
				case 0:
					StringCopy(&Global_10B7D, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_10B7D, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_10B7D, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_10B81, "", 16);
		}
		Global_15F8D = 0;
		MISC::SET_BIT(&(Global_15F6A.f_14), 25);
	}
}

void func_213(char* sParam0)//Position - 0x11193
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0) <= 16)
		{
			StringCopy(&Global_10B7D, sParam0, 16);
			StringCopy(&Global_10B81, "", 16);
			if (RECORDING::_IS_RECORDING())
			{
				RECORDING::_STOP_RECORDING_AND_SAVE_CLIP();
			}
		}
	}
}

void func_214()//Position - 0x111D3
{
	Global_D5E5 = 0;
}

void func_215()//Position - 0x111DF
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_283))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_277))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_277, 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_277))
				{
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) > 30000f)
					{
						STREAMING::REQUEST_MODEL(joaat("jet"));
						if (STREAMING::HAS_MODEL_LOADED(joaat("jet")))
						{
							iLocal_283 = VEHICLE::CREATE_VEHICLE(joaat("jet"), -952.1345f, -2990.269f, 12.9451f, 240.7726f, 1, 1);
							VEHICLE::SET_VEHICLE_LIVERY(iLocal_283, 2);
							VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_283, 0);
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_283, 1);
							ENTITY::SET_ENTITY_PROOFS(iLocal_283, 1, 1, 1, 1, 1, 0, 0, 0);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("jet"));
							ENTITY::SET_ENTITY_LOD_DIST(iLocal_283, 500);
						}
					}
				}
			}
		}
	}
	func_303();
	if (HUD::DOES_BLIP_EXIST(uLocal_296))
	{
		func_302(uLocal_296, iLocal_263, 300f, 0.9f, 0);
	}
	if (iLocal_222 == 0)
	{
		if (iLocal_223 < 2)
		{
			PED::SET_PED_CAN_HEAD_IK(PLAYER::PLAYER_PED_ID(), 0);
		}
		func_301();
		func_269();
		if (iLocal_394 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_203[20]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[20], 0))
				{
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_203[20], 1, 1);
					VEHICLE::SET_HELI_BLADES_FULL_SPEED(iLocal_203[20]);
					iLocal_394 = 1;
				}
			}
		}
		func_268();
		func_267();
		if (iLocal_346 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_277))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_277, 0))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_277))
					{
						func_266(uLocal_300, iLocal_286, "BB_Chase", 1);
						iLocal_346 = 1;
					}
				}
			}
		}
		else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_277, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_277))
			{
				func_265(uLocal_300, iLocal_286, fLocal_320);
				CAM::SET_CAM_FOV(uLocal_300, 45f);
			}
		}
		if (iLocal_334 == 0)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_277, 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_277))
				{
					if ((VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) > 15000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) < 125464f) && func_263(1, 0, 0))
					{
						iLocal_349 = 1;
						if (iLocal_404 == 0)
						{
							HUD::CLEAR_HELP(1);
							func_262("TRV4_HELP1", -1);
							func_257(1);
							func_179(&uLocal_27, 0, 0);
							CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
							iLocal_334 = 1;
						}
					}
				}
			}
		}
		else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_277, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_277))
			{
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_304) && func_155(1, "BB_Chase"))
				{
					if (((VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) > 15000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) < 125464f) && iLocal_404 == 0) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						func_235();
					}
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) > 125464f || !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (iLocal_333)
						{
							HUD::CLEAR_HELP(1);
							func_194(0, 1, 1);
							CAM::SET_CAM_ACTIVE(uLocal_300, 0);
							CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
							HUD::DISPLAY_RADAR(1);
							if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_CHOPPER_CAM"))
							{
								AUDIO::STOP_AUDIO_SCENE("SOL_3_CHOPPER_CAM");
							}
							AUDIO::STOP_SOUND(iLocal_260);
							func_214();
							AUDIO::SET_FRONTEND_RADIO_ACTIVE(1);
							iLocal_362[2] = 0;
							iLocal_333 = 0;
						}
					}
				}
			}
		}
		switch (iLocal_223)
		{
			case 0:
				if (iLocal_486[0] == 0)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_277, 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_277))
						{
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) > 44255f && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -1187.3f, -2847.8f, 13.6f, 1) < 100f)
							{
								RECORDING::_0x293220DA1B46CEBC(10f, 2f, 3);
								iLocal_486[0] = 1;
							}
						}
					}
				}
				if (iLocal_486[1] == 0)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_277, 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_277))
						{
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) > 52875f && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -1349f, -2720f, 14f, 1) < 50f)
							{
								RECORDING::_0x293220DA1B46CEBC(6f, 2f, 3);
								iLocal_486[1] = 1;
							}
						}
					}
				}
				if (iLocal_486[2] == 0)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_277, 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_277))
						{
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) > 87085f && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -1507f, -2520f, 14f, 1) < 70f)
							{
								RECORDING::_0x293220DA1B46CEBC(10f, 2f, 3);
								iLocal_486[2] = 1;
							}
						}
					}
				}
				func_234();
				func_233();
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_PLANE_ON_FIRE"))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_277))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_277, 0))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_277))
							{
								if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) > 64280f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) < 72000f)
								{
									if (MISC::GET_DISTANCE_BETWEEN_COORDS(-1149.6f, -2323.7f, 22.5f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) < 130f)
									{
										AUDIO::START_AUDIO_SCENE("SOL_3_PLANE_ON_FIRE");
									}
								}
							}
						}
					}
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iLocal_277))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_277, 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_277))
						{
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) > 72500f)
							{
								AUDIO::STOP_AUDIO_SCENE("SOL_3_PLANE_ON_FIRE");
							}
						}
					}
				}
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_EVENT_JET_LANDING"))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_277))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_277, 0))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_277))
							{
								if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) > 78000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) < 85000f)
								{
									AUDIO::START_AUDIO_SCENE("SOL_3_EVENT_JET_LANDING");
								}
							}
						}
					}
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iLocal_277))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_277, 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_277))
						{
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) > 85500f)
							{
								AUDIO::STOP_AUDIO_SCENE("SOL_3_EVENT_JET_LANDING");
							}
						}
					}
				}
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION"))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_277))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_277, 0))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_277))
							{
								if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) > 100000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) < 107000f)
								{
									AUDIO::START_AUDIO_SCENE("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION");
								}
							}
						}
					}
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iLocal_277))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_277, 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_277))
						{
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) > 107500f)
							{
								AUDIO::STOP_AUDIO_SCENE("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION");
							}
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_277))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_277, 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_277))
						{
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) < 10000f)
							{
								func_232();
							}
						}
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_277, 0))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_277))
					{
						if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) < 30000f)
						{
							func_231(iLocal_277, VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277));
						}
					}
				}
				if (iLocal_407 == 0)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_277, 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_277))
						{
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) > 22000f)
							{
								AUDIO::PREPARE_MUSIC_EVENT("TRV4_AIRPORT_ENTERED");
								iLocal_407 = 1;
							}
						}
					}
				}
				else if (iLocal_408 == 0)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -940.8253f, -2858.602f, 11.94482f, -1001.272f, -2823.764f, 21.00674f, 5.75f, 0, 1, 0))
					{
						AUDIO::TRIGGER_MUSIC_EVENT("TRV4_AIRPORT_ENTERED");
						iLocal_408 = 1;
					}
				}
				if (iLocal_340 == 0)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_277, 0))
					{
						if (func_16(iLocal_277, PLAYER::PLAYER_PED_ID(), 1) < 170f && ENTITY::IS_ENTITY_ON_SCREEN(iLocal_277))
						{
							if (HUD::DOES_BLIP_EXIST(uLocal_298))
							{
								HUD::REMOVE_BLIP(&uLocal_298);
							}
							if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_DRIVE_TO_AIRPORT"))
							{
								AUDIO::STOP_AUDIO_SCENE("SOL_3_DRIVE_TO_AIRPORT");
							}
							if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_MAIN_CHASE"))
							{
								AUDIO::START_AUDIO_SCENE("SOL_3_MAIN_CHASE");
							}
							if (!HUD::DOES_BLIP_EXIST(uLocal_296))
							{
								if (!PED::IS_PED_INJURED(iLocal_263))
								{
									uLocal_296 = HUD::ADD_BLIP_FOR_ENTITY(iLocal_263);
									HUD::SET_BLIP_AS_FRIENDLY(uLocal_296, 1);
								}
							}
							HUD::CLEAR_GPS_MULTI_ROUTE();
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
							{
								func_20("TRV4_CHASE2", 7500, 1);
								func_25(1, "STAGE_CHASE_START", 0, 0, 0, 1);
								AUDIO::TRIGGER_MUSIC_EVENT("TRV4_CHASE");
								iLocal_340 = 1;
							}
						}
					}
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -536.0366f, -2102.793f, 5.672412f, -464.5755f, -2165.133f, 14.75182f, 65.25f, 0, 1, 0))
					{
						if (HUD::DOES_BLIP_EXIST(uLocal_298))
						{
							HUD::REMOVE_BLIP(&uLocal_298);
						}
						if (!HUD::DOES_BLIP_EXIST(uLocal_296))
						{
							if (!PED::IS_PED_INJURED(iLocal_263))
							{
								uLocal_296 = HUD::ADD_BLIP_FOR_ENTITY(iLocal_263);
								HUD::SET_BLIP_AS_FRIENDLY(uLocal_296, 1);
							}
						}
						HUD::CLEAR_GPS_MULTI_ROUTE();
						if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
						{
							func_20("TRV4_CHASE2", 7500, 1);
							func_25(1, "STAGE_CHASE_START", 0, 0, 0, 1);
							AUDIO::TRIGGER_MUSIC_EVENT("TRV4_CHASE");
							iLocal_340 = 1;
						}
					}
				}
				else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_277, 0))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_277))
					{
						if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) < 15000f)
						{
						}
					}
				}
				if (iLocal_325 == 0)
				{
					STREAMING::REQUEST_MODEL(joaat("jet"));
					if (STREAMING::HAS_MODEL_LOADED(joaat("jet")))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_277, 0))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_277))
							{
								if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) > 18490f)
								{
									iLocal_279[1] = VEHICLE::CREATE_VEHICLE(joaat("jet"), -441.3117f, -3435.736f, 409.9454f, 148.3975f, 1, 1);
									VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_279[1], 2, "BB_Chase", 1);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("jet"));
									iLocal_325 = 1;
								}
							}
						}
					}
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iLocal_279[1]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_279[1], 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_279[1]))
						{
							VEHICLE::SET_PLAYBACK_SPEED(iLocal_279[1], fLocal_320);
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_279[1]) > 20000f)
							{
								if (func_16(PLAYER::PLAYER_PED_ID(), iLocal_279[1], 1) > 200f && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_279[1]))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_279[1]);
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_275[1]))
									{
										PED::DELETE_PED(&(iLocal_275[1]));
									}
									VEHICLE::DELETE_VEHICLE(&(iLocal_279[1]));
									iLocal_248 = MISC::GET_GAME_TIMER() + 1000;
								}
							}
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_279[1]))
							{
								if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_279[1]) > 31543f)
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_279[1]);
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_279[1], 1);
								}
							}
						}
						else if (func_16(PLAYER::PLAYER_PED_ID(), iLocal_279[1], 1) > 200f && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_279[1]))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_275[1]))
							{
								PED::DELETE_PED(&(iLocal_275[1]));
							}
							VEHICLE::DELETE_VEHICLE(&(iLocal_279[1]));
							iLocal_248 = MISC::GET_GAME_TIMER() + 1000;
						}
					}
				}
				if (iLocal_431 == 0)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_282))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_277, 0))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_277))
							{
								if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) > 23000f)
								{
									STREAMING::REQUEST_MODEL(joaat("tanker"));
									if (STREAMING::HAS_MODEL_LOADED(joaat("tanker")))
									{
										iLocal_282 = VEHICLE::CREATE_VEHICLE(joaat("tanker"), -1325f, -2779f, 14f, 233.9563f, 1, 1);
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("tanker"));
										VEHICLE::SET_VEHICLE_COLOURS(iLocal_282, 57, 57);
										iLocal_431 = 1;
									}
								}
							}
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_203[1]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[1], 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_203[1]))
						{
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_203[1]) > 13000f)
							{
								if (iLocal_369 == 0)
								{
									fLocal_122[1] = 0.5f;
									iLocal_268 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_203[1], -1);
									iLocal_369 = 1;
								}
							}
						}
					}
				}
				if (iLocal_331 == 0)
				{
					STREAMING::REQUEST_ADDITIONAL_COLLISION_AT_COORD(-1325f, -2779f, 14f);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_203[1]))
					{
						if (iLocal_360 == 0)
						{
							VEHICLE::SET_VEHICLE_COLOURS(iLocal_203[1], 57, 57);
							iLocal_360 = 1;
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_282))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_203[1]))
							{
								if (!ENTITY::IS_ENTITY_DEAD(iLocal_282))
								{
									if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_203[1]))
									{
										VEHICLE::ATTACH_VEHICLE_TO_TRAILER(iLocal_203[1], iLocal_282, 1065353216);
									}
								}
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_282))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_277))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_277, 0))
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_277))
								{
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) > 41430f)
									{
										ENTITY::DETACH_ENTITY(iLocal_282, 1, 1);
										iLocal_331 = 1;
									}
								}
							}
						}
					}
				}
				else if (iLocal_372 == 0)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[1], 0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_277, 0))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_277))
							{
								if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) > 42700f)
								{
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_268))
									{
										if (!PED::IS_PED_INJURED(iLocal_268))
										{
											ENTITY::SET_ENTITY_HEALTH(iLocal_268, 0);
										}
									}
									if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_203[1]))
									{
										VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_203[1]);
										iLocal_372 = 1;
									}
								}
							}
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_277))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_277, 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_277))
						{
							if (iLocal_466 == 0)
							{
								if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) > 38000f)
								{
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_203[1]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[1], 0))
									{
										AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Trevor_4_747_Tanker_Horn", iLocal_203[1], 0, 0, 0);
										iLocal_466 = 1;
									}
								}
							}
							if (iLocal_362[1] == 0)
							{
								if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) > 39000f)
								{
									if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_EVENT_TANKER_CRASH"))
									{
										AUDIO::START_AUDIO_SCENE("SOL_3_EVENT_TANKER_CRASH");
									}
									if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
									{
										ENTITY::SET_ENTITY_PROOFS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0, 1, 1, 0, 0, 0, 0, 0);
									}
									iLocal_362[1] = 1;
								}
							}
							if (iLocal_402 == 0)
							{
								if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) > 41611f)
								{
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_282))
									{
										if (!ENTITY::IS_ENTITY_DEAD(iLocal_282))
										{
											if (ENTITY::DOES_ENTITY_EXIST(iLocal_203[7]))
											{
												if (!ENTITY::IS_ENTITY_DEAD(iLocal_203[7]))
												{
													AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Trevor_4_747_Tanker_Explosion", iLocal_282, 0, 0, 0);
													VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_203[7]);
													VEHICLE::EXPLODE_VEHICLE(iLocal_203[7], 1, 0);
													VEHICLE::EXPLODE_VEHICLE(iLocal_282, 1, 0);
													FIRE::ADD_EXPLOSION(-1221f, -2852f, 17f, 14, 1f, 1, 0, 1065353216);
													FIRE::ADD_EXPLOSION(-1212f, -2855f, 14.34f, 14, 1f, 1, 0, 1065353216);
													ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_282);
													ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_203[1]));
													iLocal_402 = 1;
												}
											}
										}
									}
								}
							}
							if (iLocal_363[1] == 0)
							{
								if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) > 43204f)
								{
									if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_EVENT_TANKER_CRASH"))
									{
										AUDIO::STOP_AUDIO_SCENE("SOL_3_EVENT_TANKER_CRASH");
									}
									AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("SCRIPT\Trv_4_747_Tanker_Explosion");
									if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
									{
										ENTITY::SET_ENTITY_PROOFS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0, 0, 0, 0, 0, 0, 0, 0);
									}
									iLocal_363[1] = 1;
								}
							}
						}
					}
				}
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_HELI_TAKEOFF"))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_203[0]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[0], 0))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_277))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_277, 0))
								{
									if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_277))
									{
										if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) > 36000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) < 40000f)
										{
											AUDIO::START_AUDIO_SCENE("SOL_3_HELI_TAKEOFF");
										}
									}
								}
							}
						}
					}
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iLocal_203[0]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[0], 0))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_277))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_277, 0))
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_277))
								{
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) > 43204f)
									{
										AUDIO::STOP_AUDIO_SCENE("SOL_3_HELI_TAKEOFF");
									}
								}
							}
						}
					}
				}
				if (iLocal_324 == 0)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_277, 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_277))
						{
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) > 60500f)
							{
								STREAMING::REQUEST_MODEL(joaat("jet"));
							}
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) > 66500f)
							{
								if (STREAMING::HAS_MODEL_LOADED(joaat("jet")))
								{
									iLocal_279[0] = VEHICLE::CREATE_VEHICLE(joaat("jet"), -1119.072f, -1864.548f, -8.2205f, 148.3975f, 1, 1);
									ENTITY::SET_ENTITY_INVINCIBLE(iLocal_279[0], 1);
									VEHICLE::SET_VEHICLE_LIVERY(iLocal_279[0], 2);
									VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_279[0], 35, "BB_Chase", 1);
									VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_279[0], 3491f);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("jet"));
									iLocal_324 = 1;
								}
							}
						}
					}
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iLocal_279[0]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_279[0], 0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_277, 0))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_277))
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_279[0]))
								{
									VEHICLE::SET_PLAYBACK_SPEED(iLocal_279[0], fLocal_320);
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) > 80000f)
									{
										if (func_16(iLocal_279[0], PLAYER::PLAYER_PED_ID(), 1) > 200f)
										{
											VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_279[0]);
										}
									}
								}
								else if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) > 80000f)
								{
									if (func_16(iLocal_279[0], PLAYER::PLAYER_PED_ID(), 1) > 200f && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_279[0]))
									{
										if (ENTITY::DOES_ENTITY_EXIST(iLocal_275[0]))
										{
											PED::DELETE_PED(&(iLocal_275[0]));
										}
										VEHICLE::DELETE_VEHICLE(&(iLocal_279[0]));
										iLocal_248 = MISC::GET_GAME_TIMER() + 1000;
									}
								}
							}
						}
					}
				}
				if (iLocal_391 == 0)
				{
					if (iLocal_390 == 0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_277))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_277, 0))
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_277))
								{
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) > 50000f)
									{
										STREAMING::REQUEST_MODEL(joaat("s_m_y_airworker"));
										STREAMING::REQUEST_ANIM_DICT("misstrevor4");
										if (STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_airworker")))
										{
											iLocal_269 = PED::CREATE_PED(26, joaat("s_m_y_airworker"), -1170.541f, -2507.111f, 12.9455f, 218.3035f, 1, 1);
											iLocal_270 = PED::CREATE_PED(26, joaat("s_m_y_airworker"), -1168.264f, -2508.715f, 12.9455f, 70.7735f, 1, 1);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_269, 1);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_270, 1);
											STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_airworker"));
											iLocal_390 = 1;
										}
									}
								}
							}
						}
					}
					else if (ENTITY::DOES_ENTITY_EXIST(iLocal_277))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_277, 0))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_277))
							{
								if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) > 58000f)
								{
									if (!PED::IS_PED_INJURED(iLocal_269))
									{
										if (STREAMING::HAS_ANIM_DICT_LOADED("misstrevor4"))
										{
											if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_269, "misstrevor4", "dive_clear_goon1", 3))
											{
												TASK::TASK_PLAY_ANIM(iLocal_269, "misstrevor4", "dive_clear_goon1", 8f, -8f, -1, 0, 0, 0, 0, 0);
											}
										}
									}
									if (!PED::IS_PED_INJURED(iLocal_270))
									{
										if (STREAMING::HAS_ANIM_DICT_LOADED("misstrevor4"))
										{
											if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_270, "misstrevor4", "dive_clear_goon2", 3))
											{
												TASK::TASK_PLAY_ANIM(iLocal_270, "misstrevor4", "dive_clear_goon2", 8f, -8f, -1, 0, 0, 0, 0, 0);
											}
										}
									}
									iLocal_391 = 1;
								}
							}
						}
					}
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iLocal_269))
				{
					if (!PED::IS_PED_INJURED(iLocal_269))
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_269, "misstrevor4", "dive_clear_goon1", 3))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_270))
							{
								if (!PED::IS_PED_INJURED(iLocal_270))
								{
									if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_270, "misstrevor4", "dive_clear_goon2", 3))
									{
										STREAMING::REMOVE_ANIM_DICT("misstrevor4");
										ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_269);
										ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_270);
									}
								}
							}
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_203[8]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[8], 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_203[8]))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_277))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_277, 0))
								{
									if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_277))
									{
										if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) > 50200f)
										{
											if (iLocal_327 == 0)
											{
												VEHICLE::SET_PLAYBACK_SPEED(iLocal_203[8], 1f);
												if (func_16(PLAYER::PLAYER_PED_ID(), iLocal_203[8], 1) < 100f)
												{
													MISC::SET_TIME_SCALE(0.3f);
													iLocal_365 = 0;
													if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_CAR_JET_ENGINE"))
													{
														AUDIO::START_AUDIO_SCENE("SOL_3_CAR_JET_ENGINE");
													}
													CAM::SET_GAMEPLAY_VEHICLE_HINT(iLocal_203[8], 0f, 0f, 0f, 1, 1500, 500, 100);
												}
												ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_203[8], 1);
												VEHICLE::SET_VEHICLE_DOOR_BROKEN(iLocal_203[8], 1, 0);
												AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_254, "Trevor_4_747_Flying_Car", iLocal_203[8], 0, 0, 0);
												SYSTEM::SETTIMERB(0);
												iLocal_327 = 1;
											}
										}
										if (iLocal_327 == 1)
										{
											if (SYSTEM::TIMERB() > 662)
											{
												if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_CAR_JET_ENGINE"))
												{
													AUDIO::STOP_AUDIO_SCENE("SOL_3_CAR_JET_ENGINE");
												}
												MISC::SET_TIME_SCALE(1f);
												iLocal_365 = 1;
											}
											if (SYSTEM::TIMERB() > 1872)
											{
												VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_203[8]);
											}
										}
									}
								}
							}
						}
						else if (ENTITY::DOES_ENTITY_EXIST(iLocal_277))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_277, 0))
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_277))
								{
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) > 50200f)
									{
										if (!ENTITY::IS_ENTITY_IN_AIR(iLocal_203[8]))
										{
											if (iLocal_377 == 0)
											{
												AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_254, "Trevor_4_747_Carsplosion", iLocal_203[8], 0, 0, 0);
												VEHICLE::EXPLODE_VEHICLE(iLocal_203[8], 1, 0);
												iLocal_377 = 1;
											}
										}
									}
								}
							}
						}
					}
					else if (iLocal_365 == 0)
					{
						if (iLocal_327 == 1)
						{
							if (SYSTEM::TIMERB() > 662)
							{
								if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_CAR_JET_ENGINE"))
								{
									AUDIO::STOP_AUDIO_SCENE("SOL_3_CAR_JET_ENGINE");
								}
								MISC::SET_TIME_SCALE(1f);
								iLocal_365 = 1;
							}
						}
					}
				}
				else if (iLocal_365 == 0)
				{
					if (iLocal_327 == 1)
					{
						if (SYSTEM::TIMERB() > 662)
						{
							if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_CAR_JET_ENGINE"))
							{
								AUDIO::STOP_AUDIO_SCENE("SOL_3_CAR_JET_ENGINE");
							}
							MISC::SET_TIME_SCALE(1f);
							iLocal_365 = 1;
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_203[11]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[11], 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_203[11]))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_277))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_277, 0))
								{
									if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_277))
									{
										if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) > 82683f)
										{
											if (iLocal_328 == 0)
											{
												AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_256, "Trevor_4_747_Flying_Car", iLocal_203[11], 0, 0, 0);
												iLocal_328 = 1;
												SYSTEM::SETTIMERB(0);
											}
											if (iLocal_328 == 1)
											{
												if (SYSTEM::TIMERB() > 1872)
												{
													if (!ENTITY::IS_ENTITY_IN_AIR(iLocal_203[11]))
													{
														VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_203[11]);
													}
												}
											}
										}
									}
								}
							}
						}
						else if (iLocal_328 == 1)
						{
							if (iLocal_378 == 0)
							{
								if (!ENTITY::IS_ENTITY_IN_AIR(iLocal_203[11]))
								{
									AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_256, "Trevor_4_747_Carsplosion", iLocal_203[11], 0, 0, 0);
									VEHICLE::EXPLODE_VEHICLE(iLocal_203[11], 1, 0);
									iLocal_378 = 1;
								}
							}
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_203[12]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[12], 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_203[12]))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_277))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_277, 0))
								{
									if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_277))
									{
										if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) > 82463f)
										{
											if (iLocal_329 == 0)
											{
												AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_257, "Trevor_4_747_Flying_Car", iLocal_203[12], 0, 0, 0);
												iLocal_329 = 1;
												SYSTEM::SETTIMERB(0);
											}
											if (iLocal_329 == 1)
											{
												if (SYSTEM::TIMERB() > 1000)
												{
													if (!ENTITY::IS_ENTITY_IN_AIR(iLocal_203[12]))
													{
														VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_203[12]);
													}
												}
											}
										}
									}
								}
							}
							if (iLocal_462 == 0)
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_203[12]))
								{
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_203[12]) > 22216f && func_16(iLocal_278, iLocal_203[12], 1) < 90f)
									{
										MISC::SET_TIME_SCALE(0.3f);
										CAM::SET_GAMEPLAY_VEHICLE_HINT(iLocal_203[12], 0f, 0f, 0f, 1, 2000, 1000, 500);
										iLocal_244 = MISC::GET_GAME_TIMER();
										iLocal_462 = 1;
									}
								}
							}
						}
						else if (iLocal_329 == 1)
						{
							if (iLocal_379 == 0)
							{
								if (!ENTITY::IS_ENTITY_IN_AIR(iLocal_203[12]))
								{
									AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_257, "Trevor_4_747_Carsplosion", iLocal_203[12], 0, 0, 0);
									VEHICLE::EXPLODE_VEHICLE(iLocal_203[12], 1, 0);
									iLocal_379 = 1;
								}
							}
						}
					}
				}
				if (iLocal_462 == 1)
				{
				}
				if (iLocal_461 == 0 && iLocal_462 == 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_203[12]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[12], 0))
						{
							Local_316 = { ENTITY::GET_ENTITY_COORDS(iLocal_203[12], 1) };
						}
					}
					Local_317 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
					if (MISC::GET_GAME_TIMER() > iLocal_244 + 1579 || Local_317.f_1 < Local_316.f_1)
					{
						MISC::SET_TIME_SCALE(1f);
						CAM::STOP_GAMEPLAY_HINT(0);
						iLocal_461 = 1;
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_277))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_277, 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_277))
						{
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) > 105000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) < 113000f)
							{
								STREAMING::REQUEST_ADDITIONAL_COLLISION_AT_COORD(-1172.3f, -3027.5f, 13.3f);
							}
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_203[13]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[13], 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_203[13]))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_277))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_277, 0))
								{
									if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_277))
									{
										if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) > 108830f)
										{
											VEHICLE::SET_VEHICLE_CAN_BREAK(iLocal_203[13], 0);
											ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_203[13], 1);
											ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_203[13], 0);
											SYSTEM::SETTIMERA(0);
											iLocal_430 = 1;
										}
									}
								}
							}
						}
						else if (iLocal_430 == 1)
						{
							ENTITY::SET_ENTITY_HEALTH(iLocal_203[13], 0);
							VEHICLE::SET_VEHICLE_UNDRIVEABLE(iLocal_203[13], 1);
							ENTITY::SET_ENTITY_HEALTH(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_203[13], -1), 0);
						}
					}
				}
				if (iLocal_426 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_203[5]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[5], 0))
						{
							VEHICLE::SET_VEHICLE_LIVERY(iLocal_203[5], 0);
							ENTITY::SET_ENTITY_INVINCIBLE(iLocal_203[5], 1);
							iLocal_426 = 1;
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_203[15]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[15], 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_203[15]))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_277))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_277, 0))
								{
									if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_277))
									{
										if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) > 104989f)
										{
											VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_203[15]);
											func_229(iLocal_203[15], -0.04f, -2.21f, 0.887f, 0f, -1f, 0f, 5f, 1);
											func_229(iLocal_203[15], 0.44f, -0.802f, 15.303f, 0f, 0f, 0f, 12f, 1);
											VEHICLE::EXPLODE_VEHICLE(iLocal_203[15], 1, 0);
											RECORDING::_0x293220DA1B46CEBC(4f, 4f, 4);
											AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Trevor_4_747_Carsplosion", iLocal_203[15], 0, 0, 0);
											AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("SCRIPT\Trv_4_747_Cop_Cars");
										}
									}
								}
							}
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_277))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_277, 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_277))
						{
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) > 112000f)
							{
								TASK::REQUEST_WAYPOINT_RECORDING("BB_MOLLY_2");
								STREAMING::REQUEST_ANIM_DICT("misssolomon_3");
								STREAMING::REQUEST_ANIM_DICT("move_f@film_reel_arms");
								iLocal_223 = 1;
							}
						}
					}
				}
				break;
			
			case 1:
				if (iLocal_438 == 0)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -887.1561f, -2957.106f, 12.46766f, -848.108f, -2997.588f, 18.23435f, 5f, 0, 1, 0))
					{
						iLocal_438 = 1;
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_287[0]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_287[0], 0))
					{
						AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_287[0], 0);
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_287[0]));
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_274[0]))
				{
					if (!PED::IS_PED_INJURED(iLocal_274[0]))
					{
						TASK::CLEAR_PED_TASKS(iLocal_274[0]);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_274[0]));
					}
				}
				if (iLocal_393 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_277))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_277, 0))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_277))
							{
								if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) > 115000f)
								{
									TASK::REQUEST_WAYPOINT_RECORDING("Trev4_5");
									STREAMING::REQUEST_MODEL(joaat("prop_cs_film_reel_01"));
									if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
									{
										STREAMING::NEW_LOAD_SCENE_START_SPHERE(-930.7f, -2916.9f, 13.4f, 10f, 0);
									}
									iLocal_393 = 1;
								}
							}
						}
					}
				}
				if (iLocal_404 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_277))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_277, 0))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_277))
							{
								if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) > 120000f)
								{
									if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_ARRIVE_AT_HANGAR"))
									{
										AUDIO::START_AUDIO_SCENE("SOL_3_ARRIVE_AT_HANGAR");
									}
									VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(iLocal_277);
								}
								if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) > 125513f)
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_277);
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_277, 1);
									func_228();
									PED::CLEAR_PED_NON_CREATION_AREA();
									PATHFIND::SET_PED_PATHS_IN_AREA(-833.86f, -2564.17f, 13.43f, -814.37f, -2521.04f, 12.94f, 1, 0);
									AUDIO::STOP_AUDIO_SCENE("TREVOR_4_MAIN_CHASE");
									if (!CAM::DOES_CAM_EXIST(uLocal_302))
									{
										uLocal_302 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
									}
									if (!CAM::DOES_CAM_EXIST(uLocal_301))
									{
										uLocal_301 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
									}
									iLocal_235 = MISC::GET_GAME_TIMER();
									CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
									MISC::SET_INSTANCE_PRIORITY_HINT(0);
									iLocal_223 = 2;
								}
							}
						}
					}
				}
				break;
			
			case 2:
				Local_317 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(iLocal_277);
				if (iLocal_438 == 0)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -887.1561f, -2957.106f, 12.46766f, -848.108f, -2997.588f, 18.23435f, 5f, 0, 1, 0))
					{
						iLocal_438 = 1;
					}
				}
				if (iLocal_404 == 0)
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_317, -930.7f, -2916.9f, 13.4f, 1) < 45f)
					{
						iLocal_223 = 3;
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_277))
					{
						if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_277))
						{
							if (iLocal_438 == 1)
							{
								iLocal_223 = 3;
							}
						}
					}
					if (MISC::GET_GAME_TIMER() > iLocal_235 + 5000 && iLocal_438 == 1)
					{
						iLocal_223 = 3;
					}
				}
				break;
			
			case 3:
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
				}
				VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(iLocal_277);
				if (!PED::IS_PED_INJURED(iLocal_263))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_263, "misssolomon_3", "molly_escapes_car_mol", 3))
					{
					}
				}
				if (iLocal_414 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_277))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_277, 0))
						{
							if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_277))
							{
								if (STREAMING::HAS_ANIM_DICT_LOADED("misssolomon_3"))
								{
									if (!PED::IS_PED_INJURED(iLocal_263))
									{
										if (!ENTITY::DOES_ENTITY_EXIST(iLocal_294))
										{
											if (STREAMING::HAS_MODEL_LOADED(joaat("prop_cs_film_reel_01")))
											{
												iLocal_294 = OBJECT::CREATE_OBJECT(joaat("prop_cs_film_reel_01"), -929f, -2917f, 13f, 1, 1, 0);
												ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_294, iLocal_263, PED::GET_PED_BONE_INDEX(iLocal_263, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
											}
										}
										if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_263, "misssolomon_3", "molly_escapes_car_mol", 3))
										{
											ENTITY::FREEZE_ENTITY_POSITION(iLocal_277, 0);
											uLocal_249 = PED::CREATE_SYNCHRONIZED_SCENE(-929.492f, -2913.472f, 14.16f, 0f, 0f, -28.96f, 2);
											ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_277, uLocal_249, "molly_escapes_car_car", "misssolomon_3", 8f, -8f, 0, 1000f);
											TASK::TASK_SYNCHRONIZED_SCENE(iLocal_263, uLocal_249, "misssolomon_3", "molly_escapes_car_mol", 1000f, -1000f, 5, 0, 1148846080, 0);
											PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_249, 0);
											AUDIO::TRIGGER_MUSIC_EVENT("TRV4_EXIT_CARS");
										}
										else
										{
											iLocal_414 = 1;
										}
									}
								}
							}
						}
					}
				}
				if (iLocal_416 == 0)
				{
					if (iLocal_414 == 1)
					{
						if (!PED::IS_PED_INJURED(iLocal_263))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_263, -937.6656f, -2927.864f, 12.77007f, -934.8479f, -2929.484f, 14.46523f, 1.5f, 0, 1, 0))
							{
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_263, "misssolomon_3", "molly_escapes_car_mol", 3))
								{
									ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_263, -1000f, 1);
								}
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_263);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_263, 1);
								ENTITY::SET_ENTITY_COORDS(iLocal_263, -934.8388f, -2932.831f, 12.9649f, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(iLocal_263, 236.5739f);
								TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_263, "BB_MOLLY_2", 1, 4, -1);
								if (STREAMING::HAS_ANIM_DICT_LOADED("move_f@film_reel_arms"))
								{
									TASK::TASK_PLAY_ANIM(iLocal_263, "move_f@film_reel_arms", "run", 8f, -8f, -1, 49, 0, 0, 0, 0);
								}
								iLocal_416 = 1;
							}
						}
					}
				}
				if (iLocal_404 == 0)
				{
					if (iLocal_424 == 0)
					{
						if (iLocal_423 == 0)
						{
							if (!PED::IS_PED_INJURED(iLocal_263))
							{
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_263, "misssolomon_3", "molly_escapes_car_mol", 3))
								{
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_249) > 0.18f || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -930.7f, -2916.9f, 13.4f, 1) < 10f)
									{
										iLocal_224 = 0;
										iLocal_423 = 1;
									}
								}
							}
						}
						while (iLocal_423 == 1)
						{
							RECORDING::_0x208784099002BC30("M_LegalTrouble", 0);
							switch (iLocal_224)
							{
								case 0:
									CAM::SET_CAM_PARAMS(uLocal_302, -927.0851f, -2921.173f, 13.66304f, 1.738541f, 1.294743f, 28.05799f, 34.66404f, 0, 1, 1, 2);
									CAM::SET_CAM_PARAMS(uLocal_301, -927.0851f, -2921.173f, 13.66304f, 1.738541f, 1.294742f, 32.59915f, 34.66404f, 0, 1, 1, 2);
									CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_301, uLocal_302, 4000, 1, 1);
									HUD::DISPLAY_RADAR(0);
									HUD::DISPLAY_HUD(0);
									CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_286))
									{
										VEHICLE::DELETE_VEHICLE(&iLocal_286);
									}
									if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
									{
										ENTITY::SET_ENTITY_COORDS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), -918.6157f, -2926.646f, 12.9667f, 1, 0, 0, 1);
										ENTITY::SET_ENTITY_HEADING(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 47.9465f);
									}
									else
									{
										ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -918.6157f, -2926.646f, 12.9667f, 1, 0, 0, 1);
										ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 47.9465f);
									}
									if (!PED::IS_PED_INJURED(iLocal_263))
									{
										func_17(&uLocal_489, 2, iLocal_263, "MOLLY", 0, 1);
										PED::SET_FORCE_FOOTSTEP_UPDATE(iLocal_263, 1);
									}
									RECORDING::_0x293220DA1B46CEBC(4f, 0f, 3);
									RECORDING::_0x48621C9FCA3EBD28(4);
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
									iLocal_450 = 0;
									iLocal_224++;
									break;
								
								case 1:
									if (!PED::IS_PED_INJURED(iLocal_263))
									{
										if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_263, "misssolomon_3", "molly_escapes_car_mol", 3))
										{
											if (iLocal_450 == 0)
											{
												if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_249) > 0.3f)
												{
													if (func_227(&uLocal_489, "T1M4AUD", "SOL3_GETOUT", 7, 0, 0, 0))
													{
														RECORDING::_0x293220DA1B46CEBC(6f, 7f, 4);
														iLocal_450 = 1;
													}
												}
											}
											if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_249) > 0.5f)
											{
												CAM::SET_CAM_PARAMS(uLocal_302, -926.0932f, -2916.891f, 14.47074f, -3.471637f, 1.294743f, 125.8315f, 34.66404f, 0, 1, 1, 2);
												CAM::SET_CAM_PARAMS(uLocal_301, -926.0932f, -2916.891f, 14.47074f, -3.471636f, 1.294743f, 135.4584f, 34.66404f, 0, 1, 1, 2);
												CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_301, uLocal_302, 4000, 1, 1);
												iLocal_247 = MISC::GET_GAME_TIMER();
												iLocal_224++;
											}
										}
									}
									break;
								
								case 2:
									if (!PED::IS_PED_INJURED(iLocal_263))
									{
										if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_263, "misssolomon_3", "molly_escapes_car_mol", 3))
										{
											if ((iLocal_247 != -1 && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4) && (MISC::GET_GAME_TIMER() - iLocal_247) >= 2230)
											{
												GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
												AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
												iLocal_247 = -1;
											}
											if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_249) > 0.85f)
											{
												HUD::DISPLAY_HUD(1);
												HUD::DISPLAY_RADAR(1);
												CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
												CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
												iLocal_261 = 346732587;
												OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_261, joaat("v_ilev_ss_door5_r"), -935.641f, -2927.185f, 14.0945f, 1, 1, 0);
												OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_261, 1f, 0, 1);
												PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
												if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
												{
													TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0);
													if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) != 4 && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
													{
														PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 1, 0);
													}
												}
												PED::SET_FORCE_FOOTSTEP_UPDATE(iLocal_263, 0);
												RECORDING::_0x81CBAE94390F9F89();
												RECORDING::_0x293220DA1B46CEBC(0f, 4f, 3);
												iLocal_236 = MISC::GET_GAME_TIMER();
												iLocal_423 = 0;
												iLocal_424 = 1;
												iLocal_224++;
											}
										}
									}
									break;
							}
							SYSTEM::WAIT(0);
						}
					}
				}
				if (iLocal_424 == 1)
				{
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_261, 5, 0, 1);
					if (iLocal_467 == 0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_263))
						{
							if (!PED::IS_PED_INJURED(iLocal_263))
							{
								if (ENTITY::IS_ENTITY_AT_COORD(iLocal_263, -935.3f, -2927.3f, 13f, 1.5f, 1.5f, 2f, 0, 1, 0))
								{
									AUDIO::PLAY_SOUND_FROM_COORD(-1, "Trevor_4_747_Molly_Open_Doors", -935.1f, -2927.6f, 13.2f, 0, 0, 0, 0);
									iLocal_467 = 1;
								}
							}
						}
					}
				}
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_MAIN_CHASE"))
					{
						AUDIO::STOP_AUDIO_SCENE("SOL_3_MAIN_CHASE");
					}
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_ARRIVE_AT_HANGAR"))
					{
						AUDIO::STOP_AUDIO_SCENE("SOL_3_ARRIVE_AT_HANGAR");
					}
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_ON_FOOT_CHASE"))
					{
						AUDIO::START_AUDIO_SCENE("SOL_3_ON_FOOT_CHASE");
					}
				}
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					func_216();
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -929.7908f, -2928.213f, 12.19499f, -935.7283f, -2924.685f, 15.44832f, 4.75f, 0, 1, 1))
				{
					if (iLocal_416 == 0)
					{
						if (!PED::IS_PED_INJURED(iLocal_263))
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_263, "misssolomon_3", "molly_escapes_car_mol", 3))
							{
								ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_263, -1000f, 1);
							}
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_263);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_263, 1);
							ENTITY::SET_ENTITY_COORDS(iLocal_263, -934.8388f, -2932.831f, 12.9649f, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(iLocal_263, 236.5739f);
							TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_263, "BB_MOLLY_2", 1, 4, -1);
							if (STREAMING::HAS_ANIM_DICT_LOADED("move_f@film_reel_arms"))
							{
								TASK::TASK_PLAY_ANIM(iLocal_263, "move_f@film_reel_arms", "run", 8f, -8f, -1, 49, 0, 0, 0, 0);
							}
							iLocal_416 = 1;
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_283))
					{
						VEHICLE::DELETE_VEHICLE(&iLocal_283);
					}
					iLocal_222 = 0;
					iLocal_224 = 0;
					iLocal_221 = 5;
				}
				break;
			}
	}
}

void func_216()//Position - 0x13698
{
	if (iLocal_400 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_203[14]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[14], 0))
			{
				iLocal_271 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_203[14], -1);
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_271, joaat("weapon_pistol"), 1000, 1, 1);
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_271, 1, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_271, 1);
				PED::SET_PED_ACCURACY(iLocal_271, 5);
				ENTITY::SET_ENTITY_HEALTH(iLocal_271, 150);
				func_17(&uLocal_489, 3, iLocal_271, "TREV4POLICE3", 0, 1);
			}
		}
		iLocal_400 = 1;
	}
	else if (iLocal_399 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_271))
		{
			if (!PED::IS_PED_INJURED(iLocal_271))
			{
				TASK::CLEAR_PED_TASKS(iLocal_271);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_271, ENTITY::GET_ENTITY_COORDS(iLocal_271, 1), 5f, 0, 0);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_303);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
				TASK::TASK_SEEK_COVER_FROM_PED(0, PLAYER::PLAYER_PED_ID(), 5000, 1);
				TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_303);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_271, uLocal_303);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_303);
				iLocal_399 = 1;
			}
		}
	}
	else if (iLocal_433 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_271))
		{
			if (!PED::IS_PED_INJURED(iLocal_271))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_271, 0) && func_13(PLAYER::PLAYER_PED_ID(), iLocal_271) < 20f)
				{
					if (!func_226())
					{
						if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
						{
							func_17(&uLocal_489, 4, iLocal_271, "SOL3COP", 0, 1);
							if (func_217(&uLocal_489, "T1M4AUD", "SOL3_MOLPOL", "SOL3_MOLPOL_2", 7, 0, 0))
							{
								iLocal_433 = 1;
							}
						}
					}
				}
			}
		}
	}
}

bool func_217(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x13820
{
	func_225(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_218(sParam2, iParam4, 0);
}

int func_218(char* sParam0, int iParam1, bool bParam2)//Position - 0x13874
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
					func_184();
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
		if (func_224(8, -1))
		{
			return 0;
		}
		Global_3D98 = { Global_3D92 };
		func_223();
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
				func_222();
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
				if (func_221())
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
			if (func_195())
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
			func_220();
			Global_3D56 = bParam2;
		}
		Global_3D4E = iParam1;
		StringCopy(&Global_3BCF, sParam0, 24);
		Global_38DE = 0;
		func_219();
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
		func_184();
	}
	return 0;
}

void func_219()//Position - 0x13B40
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

void func_220()//Position - 0x13B72
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

int func_221()//Position - 0x13C07
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

void func_222()//Position - 0x13CA0
{
	if (func_57(14))
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
		Global_3839 = func_91();
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

void func_223()//Position - 0x13D41
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

bool func_224(int iParam0, int iParam1)//Position - 0x13D99
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

void func_225(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x13DD4
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

int func_226()//Position - 0x13E2A
{
	if (Global_3D4C != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

bool func_227(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x13E4C
{
	func_225(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_218(sParam2, iParam3, 0);
}

void func_228()//Position - 0x13E9A
{
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_666[0]))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_666[0], 0);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_666[1]))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_666[1], 0);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_666[2]))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_666[2], 0);
	}
	if (iLocal_380 == 1)
	{
		AUDIO::RELEASE_SOUND_ID(iLocal_258);
		iLocal_388 = 0;
	}
}

void func_229(int iParam0, struct<3> Param1, struct<3> Param2, float fParam3, bool bParam4)//Position - 0x13EFC
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iParam0);
		}
		Var1 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
		if (bParam4)
		{
			Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Param1) };
		}
		else
		{
			Var0 = { Param1 };
		}
		Var2 = { func_230(Var0 - Var1) };
		Var2 = { Var2 * Vector(fParam3, fParam3, fParam3) };
		ENTITY::APPLY_FORCE_TO_ENTITY(iParam0, 3, Var2, Param2, 0, 0, 1, 1, 0, 1);
	}
}

Vector3 func_230(struct<3> Param0)//Position - 0x13F78
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

void func_231(int iParam0, float fParam1)//Position - 0x13FB7
{
	int iVar0;
	struct<3> Var1;
	
	if (iLocal_165 < 15)
	{
		if (iLocal_165 == 0)
		{
			Local_180 = { 99999.9f, 99999.9f, 99999.9f };
			Local_181 = { -99999.9f, -99999.9f, -99999.9f };
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
			{
				iVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
				Var1 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, (fParam1 + (SYSTEM::TO_FLOAT((iLocal_165 - 1)) * 2000f))) };
				if (Var1.x < Local_180.x)
				{
					Local_180.x = Var1.x;
				}
				if (Var1.f_1 < Local_180.f_1)
				{
					Local_180.f_1 = Var1.f_1;
				}
				if (Var1.f_2 < Local_180.f_2)
				{
					Local_180.f_2 = Var1.f_2;
				}
				if (Var1.x > Local_181.x)
				{
					Local_181.x = Var1.x;
				}
				if (Var1.f_1 > Local_181.f_1)
				{
					Local_181.f_1 = Var1.f_1;
				}
				if (Var1.f_2 > Local_181.f_2)
				{
					Local_181.f_2 = Var1.f_2;
				}
			}
		}
		iLocal_165++;
	}
	else if (!bLocal_105)
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(-9999.9f, -9999.9f, -9999.9f, 9999.9f, 9999.9f, 9999.9f, 1);
		Local_180 = { Local_180 + Vector((fLocal_147 * -1f), (fLocal_147 * -1f), (fLocal_147 * -1f)) };
		Local_181 = { Local_181 + Vector(fLocal_147, fLocal_147, fLocal_147) };
		Local_178 = { Local_180 };
		Local_179 = { Local_181 };
		PATHFIND::SET_ROADS_IN_AREA(Local_178, Local_179, 0, 0);
		iLocal_165 = 0;
	}
}

void func_232()//Position - 0x1412C
{
	iLocal_88 = 1;
}

void func_233()//Position - 0x14137
{
	if (iLocal_330 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_277))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_277))
			{
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) > 55000f)
				{
					STREAMING::REQUEST_MODEL(joaat("firetruk"));
					STREAMING::REQUEST_MODEL(joaat("s_m_y_fireman_01"));
					STREAMING::REQUEST_ANIM_DICT("missheist_agency3aig_lift_waitped_a");
					if ((STREAMING::HAS_MODEL_LOADED(joaat("firetruk")) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_fireman_01"))) && STREAMING::HAS_ANIM_DICT_LOADED("missheist_agency3aig_lift_waitped_a"))
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_281))
						{
							MISC::CLEAR_AREA(-1129.566f, -2319.888f, 12.9445f, 10f, 0, 0, 0, 0);
							iLocal_281 = VEHICLE::CREATE_VEHICLE(joaat("firetruk"), -1129.566f, -2319.888f, 12.9445f, 16.5423f, 1, 1);
						}
						uLocal_666[0] = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_trev4_trailer_fire", -1151f, -2311f, 15f, 0f, 0f, 0f, 1065353216, 0, 0, 0, 0);
						if (iLocal_380 == 0)
						{
							AUDIO::PLAY_SOUND_FROM_COORD(iLocal_258, "Trevor_4_747_Loud_Fire", -1151f, -2311f, 15f, 0, 0, 0, 0);
							iLocal_380 = 1;
						}
						uLocal_666[1] = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_trev4_trailer_fire", -1140f, -2328f, 18f, 0f, 0f, 0f, 1065353216, 0, 0, 0, 0);
						uLocal_666[2] = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_trev4_trailer_fire", -1150f, -2327f, 19f, 0f, 0f, 0f, 1065353216, 0, 0, 0, 0);
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_264[0]))
						{
							iLocal_264[0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_281, 21, joaat("s_m_y_fireman_01"), -1, 1, 1);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_264[0], 1);
							PED::SET_PED_KEEP_TASK(iLocal_264[0], 1);
							TASK::TASK_VEHICLE_SHOOT_AT_COORD(iLocal_264[0], -1147.07f, -2320.65f, 18.93f, 1101004800);
						}
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_264[1]))
						{
							iLocal_264[1] = PED::CREATE_PED(21, joaat("s_m_y_fireman_01"), -1138.313f, -2313.277f, 12.9445f, 155.4271f, 1, 1);
							TASK::TASK_PLAY_ANIM(iLocal_264[1], "missheist_agency3aig_lift_waitped_a", "idle_b", 8f, -8f, -1, 9, 0, 0, 0, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_264[1], 1);
							PED::SET_PED_KEEP_TASK(iLocal_264[1], 1);
						}
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_264[2]))
						{
							iLocal_264[2] = PED::CREATE_PED(21, joaat("s_m_y_fireman_01"), -1145.362f, -2309.387f, 12.9445f, 96.0786f, 1, 1);
							TASK::TASK_PLAY_ANIM(iLocal_264[2], "missheist_agency3aig_lift_waitped_a", "idle_a", 8f, -8f, -1, 9, 0, 0, 0, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_264[2], 1);
							PED::SET_PED_KEEP_TASK(iLocal_264[2], 1);
						}
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_264[3]))
						{
							iLocal_264[3] = PED::CREATE_PED(21, joaat("s_m_y_fireman_01"), -1147.461f, -2314.511f, 13.1518f, 57.8707f, 1, 1);
							TASK::TASK_PLAY_ANIM(iLocal_264[3], "missheist_agency3aig_lift_waitped_a", "idle_c", 8f, -8f, -1, 9, 0, 0, 0, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_264[3], 1);
							PED::SET_PED_KEEP_TASK(iLocal_264[3], 1);
						}
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_fireman_01"));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("firetruk"));
						iLocal_330 = 1;
					}
				}
			}
		}
	}
	if (iLocal_330 == 1)
	{
		if (iLocal_464[0] == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_264[1]))
			{
				if (!PED::IS_PED_INJURED(iLocal_264[1]))
				{
					if (iLocal_465[0] == 0)
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_264[1], "missheist_agency3aig_lift_waitped_a", "idle_b", 3))
						{
							iLocal_465[0] = 1;
						}
					}
					if (iLocal_465[0] == 1)
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_264[1], "missheist_agency3aig_lift_waitped_a", "idle_b", 3))
						{
							TASK::TASK_COWER(iLocal_264[1], -1);
							PED::SET_PED_KEEP_TASK(iLocal_264[1], 1);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_264[1], 0);
							iLocal_464[0] = 1;
						}
					}
				}
			}
		}
		if (iLocal_464[1] == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_264[2]))
			{
				if (!PED::IS_PED_INJURED(iLocal_264[2]))
				{
					if (iLocal_465[1] == 0)
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_264[2], "missheist_agency3aig_lift_waitped_a", "idle_a", 3))
						{
							iLocal_465[1] = 1;
						}
					}
					if (iLocal_465[1] == 1)
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_264[2], "missheist_agency3aig_lift_waitped_a", "idle_a", 3))
						{
							TASK::TASK_COWER(iLocal_264[2], -1);
							PED::SET_PED_KEEP_TASK(iLocal_264[2], 1);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_264[2], 0);
							iLocal_464[1] = 1;
						}
					}
				}
			}
		}
		if (iLocal_464[2] == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_264[3]))
			{
				if (!PED::IS_PED_INJURED(iLocal_264[3]))
				{
					if (iLocal_465[2] == 0)
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_264[3], "missheist_agency3aig_lift_waitped_a", "idle_c", 3))
						{
							iLocal_465[2] = 1;
						}
					}
					if (iLocal_465[2] == 1)
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_264[3], "missheist_agency3aig_lift_waitped_a", "idle_c", 3))
						{
							TASK::TASK_COWER(iLocal_264[3], -1);
							PED::SET_PED_KEEP_TASK(iLocal_264[3], 1);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_264[3], 0);
							iLocal_464[2] = 1;
						}
					}
				}
			}
		}
	}
}

void func_234()//Position - 0x14617
{
	if (iLocal_401 == 0)
	{
		STREAMING::REQUEST_MODEL(joaat("police3"));
		STREAMING::REQUEST_MODEL(joaat("s_m_y_cop_01"));
		VEHICLE::REQUEST_VEHICLE_RECORDING(1, "BB_AIChase");
		if (STREAMING::HAS_MODEL_LOADED(joaat("police3")) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_cop_01")))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_277, 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_277))
				{
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) > 15500f)
					{
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, 0);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
						iLocal_287[0] = VEHICLE::CREATE_VEHICLE(joaat("police3"), -847.2593f, -2379.987f, 15.9304f, 196.4921f, 1, 1);
						iLocal_274[0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_287[0], 6, joaat("s_m_y_cop_01"), -1, 1, 1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_274[0], 1);
						AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_287[0], "SOL_3_POLICE_CARS_Group", 0);
						func_111(iLocal_274[0], 0);
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_287[0], 1, 1);
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_287[0], 1, "BB_AIChase", 1);
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_274[0], joaat("weapon_pistol"), 1000, 1, 1);
						VEHICLE::SET_VEHICLE_SIREN(iLocal_287[0], 1);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("police3"));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_cop_01"));
						iLocal_401 = 1;
					}
				}
			}
		}
	}
	if (iLocal_401 == 1)
	{
		if (iLocal_428[0] == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_287[0]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_287[0], 0))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_287[0]))
					{
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_287[0], fLocal_320);
						if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_287[0]) > 13000f)
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_287[0]);
						}
					}
					else if (ENTITY::DOES_ENTITY_EXIST(iLocal_274[0]))
					{
						if (!PED::IS_PED_INJURED(iLocal_274[0]))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_274[0], 1);
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
								TASK::TASK_VEHICLE_CHASE(iLocal_274[0], PLAYER::PLAYER_PED_ID());
								PED::SET_PED_KEEP_TASK(iLocal_274[0], 1);
							}
							else
							{
								TASK::TASK_COMBAT_PED(iLocal_274[0], PLAYER::PLAYER_PED_ID(), 0, 16);
								PED::SET_PED_KEEP_TASK(iLocal_274[0], 1);
							}
							VEHICLE::REMOVE_VEHICLE_RECORDING(1, "BB_AIChase");
							iLocal_237 = MISC::GET_GAME_TIMER();
							iLocal_428[0] = 1;
						}
					}
				}
			}
		}
		if (iLocal_429[0] == 0)
		{
			if (iLocal_428[0] == 1)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_237 + 500)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_274[0]))
					{
						if (!PED::IS_PED_INJURED(iLocal_274[0]))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
								TASK::SET_TASK_VEHICLE_CHASE_BEHAVIOR_FLAG(iLocal_274[0], 16, 1);
								TASK::SET_TASK_VEHICLE_CHASE_BEHAVIOR_FLAG(iLocal_274[0], 1, 1);
								iLocal_429[0] = 1;
							}
							else
							{
								iLocal_429[0] = 1;
							}
						}
					}
				}
			}
		}
	}
}

void func_235()//Position - 0x148A0
{
	if (!iLocal_332)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[20], 0))
		{
			uLocal_300 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
			CAM::SET_CAM_ACTIVE(uLocal_300, 1);
			iLocal_333 = 0;
			iLocal_332 = 1;
		}
	}
	else if (func_250(&uLocal_27, 1, 0, 0) && iLocal_404 == 0)
	{
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			HUD::CLEAR_HELP(1);
		}
		if (func_226())
		{
			HUD::CLEAR_PRINTS();
			func_181();
		}
		if (iLocal_362[2] == 0)
		{
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_CHOPPER_CAM"))
			{
				AUDIO::START_AUDIO_SCENE("SOL_3_CHOPPER_CAM");
			}
			AUDIO::PLAY_SOUND_FRONTEND(iLocal_260, "Trevor_4_747_TV", 0, 1);
			iLocal_362[2] = 1;
		}
		func_241(1, 1, 30, 5, 0);
		if (iLocal_351 == 0)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_304, "SET_TEXT");
			func_240("TRV4_NEWS1");
			func_240("");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			iLocal_351 = 1;
		}
		if (iLocal_352 == 0)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_304, "SET_SCROLL_TEXT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(1f);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
			func_240("TRV4_NEWS2");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_304, "SET_SCROLL_TEXT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
			func_240("TRV4_NEWS6");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_304, "SET_SCROLL_TEXT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(1f);
			func_240("TRV4_NEWS7");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_304, "SET_SCROLL_TEXT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(2f);
			func_240("TRV4_NEWS8");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_304, "SET_SCROLL_TEXT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(3f);
			func_240("TRV4_NEWS9");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_304, "SET_SCROLL_TEXT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(4f);
			func_240("TRV4_NEWS10");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_304, "DISPLAY_SCROLL_TEXT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(1f);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			iLocal_242 = (MISC::GET_GAME_TIMER() - 5000);
			iLocal_352 = 1;
		}
		if (MISC::GET_GAME_TIMER() > iLocal_242 + 5000)
		{
			func_239();
			iLocal_242 = MISC::GET_GAME_TIMER();
		}
		if (iLocal_353 == 0)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_277, 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_277))
				{
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) > 25000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) < 50000f)
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_304, "SET_SCROLL_TEXT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(1f);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(1f);
						func_240("TRV4_NEWS5");
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_304, "DISPLAY_SCROLL_TEXT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(1f);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(1f);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						iLocal_353 = 1;
					}
				}
			}
		}
		if (iLocal_354 == 0)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_277, 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_277))
				{
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) > 77600f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) < 115000f)
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_304, "SET_SCROLL_TEXT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(1f);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(2f);
						func_240("TRV4_NEWS3");
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_304, "DISPLAY_SCROLL_TEXT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(1f);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(2f);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						iLocal_354 = 1;
					}
				}
			}
		}
		if (iLocal_355 == 0)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_277, 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_277))
				{
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) > 115000f)
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_304, "SET_SCROLL_TEXT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(1f);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(3f);
						func_240("TRV4_NEWS4");
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_304, "DISPLAY_SCROLL_TEXT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(1f);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(3f);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						iLocal_355 = 1;
					}
				}
			}
		}
		HUD::SET_TEXT_RENDER_ID(uLocal_225);
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uLocal_304, 255, 255, 255, 0, 0);
		if (iLocal_333 == 0)
		{
			func_194(1, 1, 1);
			CAM::SHAKE_CAM(uLocal_300, "ROAD_VIBRATION_SHAKE", 1f);
			CAM::SET_CAM_ACTIVE(uLocal_300, 1);
			CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
			HUD::DISPLAY_RADAR(0);
			PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID());
			func_238();
			iLocal_333 = 1;
		}
		func_236();
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(1);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(15);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
		PAD::DISABLE_CONTROL_ACTION(0, 85, 1);
		AUDIO::SET_FRONTEND_RADIO_ACTIVE(0);
	}
	else if (iLocal_333)
	{
		func_194(0, 1, 1);
		CAM::SET_CAM_ACTIVE(uLocal_300, 0);
		CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
		HUD::DISPLAY_RADAR(1);
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_CHOPPER_CAM"))
		{
			AUDIO::STOP_AUDIO_SCENE("SOL_3_CHOPPER_CAM");
		}
		AUDIO::STOP_SOUND(iLocal_260);
		func_214();
		AUDIO::SET_FRONTEND_RADIO_ACTIVE(1);
		iLocal_362[2] = 0;
		iLocal_333 = 0;
	}
}

void func_236()//Position - 0x14CDE
{
	RECORDING::_STOP_RECORDING_THIS_FRAME();
	func_237();
}

void func_237()//Position - 0x14CEE
{
	Global_42CA.f_86 = 1;
}

void func_238()//Position - 0x14CFC
{
	Global_D5E5 = 1;
}

void func_239()//Position - 0x14D08
{
	if (iLocal_227 > 4)
	{
		iLocal_227 = 0;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_304, "DISPLAY_SCROLL_TEXT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_227);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	iLocal_227++;
}

void func_240(char* sParam0)//Position - 0x14D3F
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_241(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4)//Position - 0x14D51
{
	if (!func_249())
	{
		func_249();
	}
	else if (bParam0)
	{
		if (iParam4 == 1)
		{
			if (iLocal_49 <= 225 && iLocal_43 == 0)
			{
				iLocal_49 += 30;
				if (iLocal_49 >= 225)
				{
					iLocal_43 = 1;
				}
			}
			else if (iLocal_49 >= 30)
			{
				iLocal_49 = (iLocal_49 - 30);
				if (iLocal_49 <= 30)
				{
					iLocal_43 = 0;
				}
			}
		}
		func_248(1, 200);
		if (iLocal_47 <= iParam2 && iLocal_42 == 0)
		{
			iLocal_47++;
			func_245(1, iLocal_47);
			if (iLocal_47 == iParam2)
			{
				iLocal_42 = 1;
				iLocal_48 = MISC::GET_RANDOM_INT_IN_RANGE(iParam3, iParam2);
			}
		}
		else if (iLocal_47 > 0)
		{
			if (iLocal_47 > iLocal_48)
			{
				iLocal_47 = (iLocal_47 - 1);
				func_245(1, iLocal_47);
				if (iLocal_47 == iLocal_48)
				{
					iLocal_42 = 0;
				}
			}
		}
		if (bParam1)
		{
			func_242(1, 40, 1, 1, 1);
		}
	}
}

void func_242(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x14E1F
{
	if (!func_249())
	{
		func_249();
	}
	else if (bParam0)
	{
		if (bParam2)
		{
			if (!func_244(0))
			{
				func_243(0);
			}
			else
			{
				GRAPHICS::DRAW_SPRITE("digitalOverlay", "nscuzz1", 0.5f, fLocal_50, 1f, 0.2f, 0f, 255, 255, 255, iParam1, 0);
			}
			if (fLocal_50 < 1f)
			{
				fLocal_50 = (fLocal_50 + 0.01f);
			}
			else
			{
				fLocal_50 = 0f;
			}
		}
		if (bParam3)
		{
			if (!func_244(1))
			{
				func_243(1);
			}
			else
			{
				GRAPHICS::DRAW_SPRITE("digitalOverlay", "nscuzz2", 0.5f, fLocal_51, 1f, 0.2f, 0f, 255, 255, 255, iParam1, 0);
			}
			if (fLocal_51 < 1f)
			{
				fLocal_51 = (fLocal_51 + 0.02f);
			}
			else
			{
				fLocal_51 = 0f;
			}
		}
		if (bParam4)
		{
			if (!func_244(2))
			{
				func_243(2);
			}
			else
			{
				GRAPHICS::DRAW_SPRITE("digitalOverlay", "nscuzz3", 0.5f, fLocal_52, 1f, 0.2f, 0f, 255, 255, 255, iParam1, 0);
			}
			if (fLocal_52 < 1f)
			{
				fLocal_52 = (fLocal_52 + 0.028f);
			}
			else
			{
				fLocal_52 = 0f;
			}
		}
	}
}

void func_243(int iParam0)//Position - 0x14F26
{
	if (iParam0 < 32)
	{
		MISC::SET_BIT(&uLocal_53, iParam0);
	}
}

int func_244(int iParam0)//Position - 0x14F40
{
	if (MISC::IS_BIT_SET(uLocal_53, iParam0))
	{
		return 1;
	}
	return 0;
}

void func_245(bool bParam0, int iParam1)//Position - 0x14F58
{
	if (!func_249())
	{
		func_249();
	}
	else if (bParam0)
	{
		iLocal_45 = func_247(5);
		iLocal_44 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
		while (iLocal_46 == iLocal_45)
		{
			iLocal_45 = func_247(5);
		}
		if (iLocal_45 == 0)
		{
			if (!func_244(3))
			{
				func_243(3);
			}
			else
			{
				GRAPHICS::DRAW_SPRITE("digitalOverlay", "Static1", 0.5f, 0.5f, (1f * func_246(bLocal_39)), (1f * func_246(bLocal_40)), 0f, 255, 255, 255, iParam1, 0);
			}
		}
		if (iLocal_45 == 1)
		{
			if (!func_244(4))
			{
				func_243(4);
			}
			else
			{
				GRAPHICS::DRAW_SPRITE("digitalOverlay", "Static2", 0.5f, 0.5f, (1f * func_246(bLocal_39)), (1f * func_246(bLocal_40)), 0f, 255, 255, 255, iParam1, 0);
			}
		}
		if (iLocal_45 == 2)
		{
			if (!func_244(5))
			{
				func_243(5);
			}
			else
			{
				GRAPHICS::DRAW_SPRITE("digitalOverlay", "Static3", 0.5f, 0.5f, (1f * func_246(bLocal_39)), (1f * func_246(bLocal_40)), 0f, 255, 255, 255, iParam1, 0);
			}
		}
		if (iLocal_45 == 3)
		{
			if (!func_244(6))
			{
				func_243(6);
			}
			else
			{
				GRAPHICS::DRAW_SPRITE("digitalOverlay", "Static4", 0.5f, 0.5f, (1f * func_246(bLocal_39)), (1f * func_246(bLocal_40)), 0f, 255, 255, 255, iParam1, 0);
			}
		}
		if (iLocal_45 == 4)
		{
			if (!func_244(7))
			{
				func_243(7);
			}
			else
			{
				GRAPHICS::DRAW_SPRITE("digitalOverlay", "Static5", 0.5f, 0.5f, (1f * func_246(bLocal_39)), (1f * func_246(bLocal_40)), 0f, 255, 255, 255, iParam1, 0);
			}
		}
	}
}

float func_246(bool bParam0)//Position - 0x150EE
{
	if (bParam0)
	{
		return -1f;
	}
	else
	{
		return 1f;
	}
	return 1f;
}

int func_247(int iParam0)//Position - 0x15107
{
	if (MISC::GET_RANDOM_INT_IN_RANGE(0, 50) > 25)
	{
		bLocal_39 = true;
	}
	else
	{
		bLocal_39 = false;
	}
	if (MISC::GET_RANDOM_INT_IN_RANGE(0, 50) > 25)
	{
		bLocal_40 = true;
	}
	else
	{
		bLocal_40 = false;
	}
	return MISC::GET_RANDOM_INT_IN_RANGE(0, iParam0);
}

void func_248(bool bParam0, int iParam1)//Position - 0x15140
{
	if (!func_249())
	{
		func_249();
	}
	else if (bParam0)
	{
		if (iLocal_41)
		{
			if (!func_244(8))
			{
				func_243(8);
			}
			else
			{
				GRAPHICS::DRAW_SPRITE("digitalOverlay", "nscanline1", 0.5f, 0.5f, 1f, 1f, 0f, 255, 255, 255, iParam1, 0);
			}
			iLocal_41 = 0;
		}
		else
		{
			if (!func_244(8))
			{
				func_243(8);
			}
			else
			{
				GRAPHICS::DRAW_SPRITE("digitalOverlay", "nscanline1", 0.5f, 0.5f, -1f, -1f, 0f, 255, 255, 255, iParam1, 0);
			}
			iLocal_41 = 1;
		}
	}
}

int func_249()//Position - 0x151D1
{
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("digitalOverlay", 0);
	if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("digitalOverlay"))
	{
		return 1;
	}
	return 0;
}

int func_250(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x151F2
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
					if (func_256(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_255(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_255(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_256(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_254(uParam0))
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
						if (!func_256(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = MISC::GET_GAME_TIMER();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_255(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_255(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_256(bParam1, bParam2, bParam3))
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
					if (!func_256(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_255(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_255(bParam1, bParam2, bParam3) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
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
				else if (!func_256(bParam1, bParam2, bParam3))
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
						if (func_253(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_252(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || func_252(bParam1, bParam2, bParam3))
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
					else if (func_253(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_254(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_263(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_251();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

void func_251()//Position - 0x1555E
{
	MISC::SET_BIT(&Global_8D8, 4);
}

int func_252(bool bParam0, bool bParam1, bool bParam2)//Position - 0x1556E
{
	if (!func_263(bParam0, bParam1, bParam2))
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

int func_253(bool bParam0, bool bParam1, bool bParam2)//Position - 0x155C0
{
	if (!func_263(bParam0, bParam1, bParam2))
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

int func_254(var uParam0)//Position - 0x15609
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

int func_255(bool bParam0, bool bParam1, bool bParam2)//Position - 0x15634
{
	if (!func_263(bParam0, bParam1, bParam2))
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

int func_256(bool bParam0, bool bParam1, bool bParam2)//Position - 0x15693
{
	if (!func_263(bParam0, bParam1, bParam2))
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

void func_257(bool bParam0)//Position - 0x156E9
{
	if (bParam0)
	{
		func_261();
		if (Global_3839.f_1 == 10 || Global_3839.f_1 == 9)
		{
			MISC::SET_BIT(&Global_8D8, 16);
		}
		Global_3839.f_1 = 1;
		if (func_260(0))
		{
			func_258(0);
		}
	}
	else if (Global_3839.f_1 == 1)
	{
		if (!Global_3839.f_1 == 0)
		{
			Global_3839.f_1 = 3;
		}
	}
}

void func_258(int iParam0)//Position - 0x1574C
{
	if (Global_38D7)
	{
		func_259(0, 0);
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
	if (!func_195())
	{
		Global_3839.f_1 = 3;
	}
}

void func_259(bool bParam0, bool bParam1)//Position - 0x157BC
{
	if (bParam0)
	{
		if (func_260(0))
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

int func_260(int iParam0)//Position - 0x15830
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

void func_261()//Position - 0x1588A
{
	if (Global_3839.f_1 == 9 || Global_3839.f_1 == 10)
	{
		Global_3D81 = 0;
		Global_3D7D = 1;
	}
}

void func_262(char* sParam0, int iParam1)//Position - 0x158B3
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

int func_263(bool bParam0, bool bParam1, bool bParam2)//Position - 0x158CA
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
	if (func_260(0))
	{
		return 0;
	}
	if (func_264())
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

bool func_264()//Position - 0x15A46
{
	return MISC::GET_GAME_TIMER() <= Global_4354.f_140A + 100;
}

void func_265(var uParam0, int iParam1, float fParam2)//Position - 0x15A5B
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam1))
		{
			VEHICLE::SET_PLAYBACK_SPEED(iParam1, fParam2);
			Var0 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
			Var1 = { ENTITY::GET_ENTITY_ROTATION(iParam1, 2) };
			CAM::SET_CAM_COORD(uParam0, Var0);
			CAM::SET_CAM_ROT(uParam0, Var1, 2);
		}
	}
}

void func_266(var uParam0, int iParam1, char* sParam2, int iParam3)//Position - 0x15AA9
{
	struct<3> Var0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		ENTITY::SET_ENTITY_VISIBLE(iParam1, 0);
		ENTITY::SET_ENTITY_COLLISION(iParam1, 0, 0);
		ENTITY::SET_ENTITY_INVINCIBLE(iParam1, 1);
		ENTITY::SET_ENTITY_PROOFS(iParam1, 1, 1, 1, 1, 1, 0, 0, 0);
		VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iParam1, iParam3, sParam2, 1);
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
		CAM::SET_CAM_COORD(uParam0, Var0);
		CAM::SET_CAM_ROT(uParam0, ENTITY::GET_ENTITY_ROTATION(iParam1, 2), 2);
	}
}

void func_267()//Position - 0x15B10
{
	if (iLocal_259 != -1)
	{
		if (iLocal_381 == 1)
		{
			if (iLocal_373 == 0)
			{
				AUDIO::RELEASE_SOUND_ID(iLocal_259);
				iLocal_383 = 0;
				iLocal_373 = 1;
			}
		}
	}
	if (iLocal_254 != -1)
	{
		if (iLocal_377 == 1)
		{
			if (iLocal_375 == 0)
			{
				AUDIO::RELEASE_SOUND_ID(iLocal_254);
				iLocal_384 = 0;
				iLocal_375 = 1;
			}
		}
	}
	if (iLocal_255 != -1)
	{
		if (iLocal_382 == 1)
		{
			if (iLocal_364 == 0)
			{
				AUDIO::RELEASE_SOUND_ID(iLocal_255);
				iLocal_385 = 0;
				iLocal_364 = 1;
			}
		}
	}
	if (iLocal_256 != -1)
	{
		if (iLocal_378 == 1)
		{
			if (iLocal_374 == 0)
			{
				AUDIO::RELEASE_SOUND_ID(iLocal_256);
				iLocal_386 = 0;
				iLocal_374 = 1;
			}
		}
	}
	if (iLocal_257 != -1)
	{
		if (iLocal_379 == 1)
		{
			if (iLocal_376 == 0)
			{
				AUDIO::RELEASE_SOUND_ID(iLocal_257);
				iLocal_387 = 0;
				iLocal_376 = 1;
			}
		}
	}
}

void func_268()//Position - 0x15BCC
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_203[19]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_203[19]))
		{
			if (!VEHICLE::IS_VEHICLE_SIREN_ON(iLocal_203[19]))
			{
				VEHICLE::SET_VEHICLE_SIREN(iLocal_203[19], 1);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_203[7]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_203[7]))
		{
			if (!VEHICLE::IS_VEHICLE_SIREN_ON(iLocal_203[7]))
			{
				VEHICLE::SET_VEHICLE_SIREN(iLocal_203[7], 1);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_203[8]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_203[8]))
		{
			if (!VEHICLE::IS_VEHICLE_SIREN_ON(iLocal_203[8]))
			{
				VEHICLE::SET_VEHICLE_SIREN(iLocal_203[8], 1);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_203[9]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_203[9]))
		{
			if (!VEHICLE::IS_VEHICLE_SIREN_ON(iLocal_203[9]))
			{
				VEHICLE::SET_VEHICLE_SIREN(iLocal_203[9], 1);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_203[10]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_203[10]))
		{
			if (!VEHICLE::IS_VEHICLE_SIREN_ON(iLocal_203[10]))
			{
				VEHICLE::SET_VEHICLE_SIREN(iLocal_203[10], 1);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_203[11]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_203[11]))
		{
			if (!VEHICLE::IS_VEHICLE_SIREN_ON(iLocal_203[11]))
			{
				VEHICLE::SET_VEHICLE_SIREN(iLocal_203[11], 1);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_203[13]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_203[13]))
		{
			if (!VEHICLE::IS_VEHICLE_SIREN_ON(iLocal_203[13]))
			{
				VEHICLE::SET_VEHICLE_SIREN(iLocal_203[13], 1);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_203[14]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_203[14]))
		{
			if (!VEHICLE::IS_VEHICLE_SIREN_ON(iLocal_203[14]))
			{
				VEHICLE::SET_VEHICLE_SIREN(iLocal_203[14], 1);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_203[15]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_203[15]))
		{
			if (!VEHICLE::IS_VEHICLE_SIREN_ON(iLocal_203[15]))
			{
				VEHICLE::SET_VEHICLE_SIREN(iLocal_203[15], 1);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_203[16]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_203[16]))
		{
			if (!VEHICLE::IS_VEHICLE_SIREN_ON(iLocal_203[16]))
			{
				VEHICLE::SET_VEHICLE_SIREN(iLocal_203[16], 1);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_203[17]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_203[17]))
		{
			if (!VEHICLE::IS_VEHICLE_SIREN_ON(iLocal_203[17]))
			{
				VEHICLE::SET_VEHICLE_SIREN(iLocal_203[17], 1);
			}
		}
	}
}

void func_269()//Position - 0x15E38
{
	if (func_300())
	{
		fLocal_321 = 0.5f;
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) > 40f)
		{
			fLocal_321 = 0.85f;
		}
		else
		{
			fLocal_321 = 0.9f;
		}
	}
	else
	{
		fLocal_321 = 0.9f;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_277))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_277, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_277))
			{
				if (iLocal_356 == 0)
				{
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) < 10000f)
					{
						if (func_16(PLAYER::PLAYER_PED_ID(), iLocal_277, 1) < 100f || ENTITY::IS_ENTITY_ON_SCREEN(iLocal_277))
						{
							func_296(iLocal_277, PLAYER::PLAYER_PED_ID(), &fLocal_320, 1f, 40f, 55f, 100f, 1.7f, 1f, fLocal_321, 0);
							VEHICLE::SET_PLAYBACK_SPEED(iLocal_277, fLocal_320);
							func_270(iLocal_277, fLocal_320);
						}
						else
						{
							func_296(iLocal_277, PLAYER::PLAYER_PED_ID(), &fLocal_320, 0.6f, 40f, 50f, 60f, 1.7f, 1f, fLocal_321, 0);
							VEHICLE::SET_PLAYBACK_SPEED(iLocal_277, fLocal_320);
							func_270(iLocal_277, fLocal_320);
						}
					}
				}
				else if (func_16(PLAYER::PLAYER_PED_ID(), iLocal_277, 1) > 175f)
				{
					fLocal_320 = 0.6f;
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_277, fLocal_320);
					func_270(iLocal_277, fLocal_320);
				}
				else if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) < 10000f)
				{
					func_296(iLocal_277, PLAYER::PLAYER_PED_ID(), &fLocal_320, 1f, 25f, 40f, 180f, 1.7f, 1f, fLocal_321, 0);
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_277, fLocal_320);
					func_270(iLocal_277, fLocal_320);
				}
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) > 10000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) < 23000f)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[8], 0))
					{
						func_296(iLocal_203[8], PLAYER::PLAYER_PED_ID(), &fLocal_320, 1f, 25f, 30f, 50f, 1.7f, 0.5f, fLocal_321, 1);
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_277, fLocal_320);
						func_270(iLocal_277, fLocal_320);
					}
					else
					{
						func_296(iLocal_277, PLAYER::PLAYER_PED_ID(), &fLocal_320, 1f, 25f, 35f, 180f, 1.7f, 0.5f, fLocal_321, 1);
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_277, fLocal_320);
						func_270(iLocal_277, fLocal_320);
					}
				}
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) > 23000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) < 32000f)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_203[7]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[7], 0))
						{
							func_296(iLocal_203[7], PLAYER::PLAYER_PED_ID(), &fLocal_320, 1f, 20f, 30f, 100f, 1.8f, 1f, fLocal_321, 0);
							VEHICLE::SET_PLAYBACK_SPEED(iLocal_277, fLocal_320);
							func_270(iLocal_277, fLocal_320);
						}
						else if (ENTITY::DOES_ENTITY_EXIST(iLocal_203[8]))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[8], 0))
							{
								func_296(iLocal_203[8], PLAYER::PLAYER_PED_ID(), &fLocal_320, 1f, 10f, 20f, 40f, 1.8f, 1f, fLocal_321, 0);
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_277, fLocal_320);
								func_270(iLocal_277, fLocal_320);
							}
							else
							{
								func_296(iLocal_277, PLAYER::PLAYER_PED_ID(), &fLocal_320, 1f, 25f, 40f, 100f, 1.8f, 1f, fLocal_321, 0);
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_277, fLocal_320);
								func_270(iLocal_277, fLocal_320);
							}
						}
						else
						{
							func_296(iLocal_277, PLAYER::PLAYER_PED_ID(), &fLocal_320, 1f, 25f, 40f, 100f, 1.8f, 1f, fLocal_321, 0);
							VEHICLE::SET_PLAYBACK_SPEED(iLocal_277, fLocal_320);
							func_270(iLocal_277, fLocal_320);
						}
					}
					else if (ENTITY::DOES_ENTITY_EXIST(iLocal_203[8]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[8], 0))
						{
							func_296(iLocal_203[8], PLAYER::PLAYER_PED_ID(), &fLocal_320, 1f, 10f, 20f, 40f, 1.8f, 1f, fLocal_321, 0);
							VEHICLE::SET_PLAYBACK_SPEED(iLocal_277, fLocal_320);
							func_270(iLocal_277, fLocal_320);
						}
						else
						{
							func_296(iLocal_277, PLAYER::PLAYER_PED_ID(), &fLocal_320, 1f, 25f, 40f, 100f, 1.8f, 1f, fLocal_321, 0);
							VEHICLE::SET_PLAYBACK_SPEED(iLocal_277, fLocal_320);
							func_270(iLocal_277, fLocal_320);
						}
					}
					else
					{
						func_296(iLocal_277, PLAYER::PLAYER_PED_ID(), &fLocal_320, 1f, 25f, 40f, 100f, 1.8f, 1f, fLocal_321, 0);
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_277, fLocal_320);
						func_270(iLocal_277, fLocal_320);
					}
				}
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) > 32000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) < 39000f)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_203[7]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[7], 0))
						{
							func_296(iLocal_203[7], PLAYER::PLAYER_PED_ID(), &fLocal_320, 1f, 22f, 25f, 100f, 1.8f, 0.5f, fLocal_321, 1);
							VEHICLE::SET_PLAYBACK_SPEED(iLocal_277, fLocal_320);
							func_270(iLocal_277, fLocal_320);
						}
						else
						{
							func_296(iLocal_277, PLAYER::PLAYER_PED_ID(), &fLocal_320, 1f, 25f, 35f, 150f, 1.8f, 0.5f, fLocal_321, 1);
							VEHICLE::SET_PLAYBACK_SPEED(iLocal_277, fLocal_320);
							func_270(iLocal_277, fLocal_320);
						}
					}
					else
					{
						func_296(iLocal_277, PLAYER::PLAYER_PED_ID(), &fLocal_320, 1f, 25f, 35f, 150f, 1.8f, 0.5f, fLocal_321, 1);
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_277, fLocal_320);
						func_270(iLocal_277, fLocal_320);
					}
				}
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) > 39000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) < 56000f)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[8], 0))
					{
						func_296(iLocal_203[8], PLAYER::PLAYER_PED_ID(), &fLocal_320, 1f, 25f, 40f, 100f, 1.8f, 1f, fLocal_321, 0);
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_277, fLocal_320);
						func_270(iLocal_277, fLocal_320);
					}
					else
					{
						func_296(iLocal_277, PLAYER::PLAYER_PED_ID(), &fLocal_320, 1f, 25f, 35f, 150f, 1.8f, 1f, fLocal_321, 0);
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_277, fLocal_320);
						func_270(iLocal_277, fLocal_320);
					}
				}
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) > 56000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) < 65000f)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[11], 0))
					{
						func_296(iLocal_203[11], PLAYER::PLAYER_PED_ID(), &fLocal_320, 1f, 25f, 30f, 100f, 1.8f, 1f, fLocal_321, 0);
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_277, fLocal_320);
						func_270(iLocal_277, fLocal_320);
					}
					else
					{
						func_296(iLocal_277, PLAYER::PLAYER_PED_ID(), &fLocal_320, 1f, 25f, 35f, 100f, 1.8f, 1f, fLocal_321, 0);
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_277, fLocal_320);
						func_270(iLocal_277, fLocal_320);
					}
				}
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) > 65000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) < 90000f)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_203[13]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[13], 0))
						{
							func_296(iLocal_203[13], PLAYER::PLAYER_PED_ID(), &fLocal_320, 1f, 30f, 35f, 50f, 1.8f, 1f, fLocal_321, 0);
							VEHICLE::SET_PLAYBACK_SPEED(iLocal_277, fLocal_320);
							func_270(iLocal_277, fLocal_320);
						}
						else
						{
							func_296(iLocal_277, PLAYER::PLAYER_PED_ID(), &fLocal_320, 1f, 45f, 55f, 150f, 1.8f, 1f, fLocal_321, 0);
							VEHICLE::SET_PLAYBACK_SPEED(iLocal_277, fLocal_320);
							func_270(iLocal_277, fLocal_320);
						}
					}
					else
					{
						func_296(iLocal_277, PLAYER::PLAYER_PED_ID(), &fLocal_320, 1f, 45f, 55f, 150f, 1.8f, 1f, fLocal_321, 0);
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_277, fLocal_320);
						func_270(iLocal_277, fLocal_320);
					}
				}
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) > 90000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) < 110000f)
				{
					func_296(iLocal_277, PLAYER::PLAYER_PED_ID(), &fLocal_320, 1f, 60f, 70f, 150f, 1.5f, 0.5f, fLocal_321, 1);
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_277, fLocal_320);
					func_270(iLocal_277, fLocal_320);
				}
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) > 110000f)
				{
					func_296(iLocal_277, PLAYER::PLAYER_PED_ID(), &fLocal_320, 1f, 100f, 120f, 150f, 1.6f, 1f, fLocal_321, 0);
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_277, fLocal_320);
					func_270(iLocal_277, fLocal_320);
				}
			}
		}
	}
}

void func_270(int iParam0, float fParam1)//Position - 0x166EE
{
	float fVar0;
	struct<3> Var1;
	int iVar2;
	
	fVar0 = MISC::GET_FRAME_TIME();
	fVar0 = (fVar0 * 1000f);
	bLocal_105 = false;
	if (!bLocal_87)
	{
		if (bLocal_86)
		{
			func_295();
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				MISC::CLEAR_AREA(Var1, 1000f, 1, 0, 0, 0);
			}
			bLocal_87 = true;
		}
	}
	else if (!bLocal_86)
	{
		func_178();
		bLocal_87 = false;
	}
	if (bLocal_86)
	{
		fParam1 = 1f;
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	}
	if (!bLocal_80)
	{
		if (iLocal_75)
		{
			fLocal_132 = 0f;
		}
		else
		{
			fLocal_132 = 1f;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
			{
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					if (func_294(PLAYER::PLAYER_PED_ID(), iParam0))
					{
						iLocal_85 = 1;
					}
					else
					{
						iLocal_85 = 0;
					}
				}
				fLocal_129 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
				VEHICLE::SET_PLAYBACK_SPEED(iParam0, ((fParam1 * fLocal_130) * fLocal_132));
				if (bLocal_84)
				{
					func_293(iParam0, fLocal_129);
					func_292(iParam0, fLocal_139);
					if (fLocal_134 > 1000f)
					{
						if (iLocal_171 == 0)
						{
							func_291(iParam0, fLocal_139);
						}
						fVar0 = ((fLocal_129 + 4000f) + (SYSTEM::TO_FLOAT(iLocal_171) * 2000f));
						func_290(iParam0, fVar0, fLocal_133);
						iLocal_171++;
						if (iLocal_171 > 2)
						{
							fLocal_134 = 0f;
						}
					}
					else
					{
						iLocal_171 = 0;
						fLocal_134 = (fLocal_134 + (MISC::GET_FRAME_TIME() * 1000f));
					}
				}
			}
		}
		iVar2 = 0;
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
			{
				iVar2 = 1;
			}
		}
		if (fLocal_129 == 0f || CAM::IS_SCREEN_FADED_OUT())
		{
			iVar2 = 1;
		}
		if (iVar2 && !bLocal_92)
		{
			if (!iLocal_74)
			{
				func_287(iParam0, ((fParam1 * fLocal_130) * fLocal_132), 0);
				if (!iLocal_95)
				{
				}
				iLocal_95 = 0;
			}
			if (bLocal_77)
			{
				func_286(iParam0);
			}
			if (!iLocal_74)
			{
				func_273(iParam0, ((fParam1 * fLocal_130) * fLocal_132), 0);
			}
		}
		if (iLocal_82)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					iLocal_205 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					Local_175 = { ENTITY::GET_ENTITY_COORDS(iLocal_205, 1) };
					ENTITY::GET_ENTITY_QUATERNION(iLocal_205, &fLocal_113, &fLocal_114, &fLocal_115, &fLocal_116);
				}
			}
			iLocal_82 = 0;
		}
		if (iLocal_81)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_205))
			{
				func_170(iLocal_206);
				iLocal_206 = iLocal_205;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_206, 0))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_206, Local_175, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_QUATERNION(iLocal_206, fLocal_113, fLocal_114, fLocal_115, fLocal_116);
			}
			fLocal_128 = fLocal_131;
			iLocal_74 = 1;
			iLocal_81 = 0;
		}
		if (iLocal_74)
		{
			while (!func_271(&iParam0, fLocal_128))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_75 = 1;
		}
		if (iLocal_88)
		{
			iLocal_88 = 0;
		}
	}
}

int func_271(int iParam0, float fParam1)//Position - 0x16989
{
	if (!iLocal_89)
	{
		iLocal_74 = 1;
		func_165();
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*iParam0);
				VEHICLE::SET_VEHICLE_FIXED(*iParam0);
			}
			if (!iLocal_158 == -1)
			{
				while (!func_272(iParam0, iLocal_158, fParam1, 1, 0, 0, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
				if (!bLocal_79)
				{
					iLocal_75 = 1;
					fLocal_132 = 0f;
					iLocal_159 = 0;
					iLocal_161 = 0;
					iLocal_160 = 0;
					iLocal_155 = 0;
					iLocal_156 = 0;
					iLocal_157 = 0;
					iLocal_162 = 0;
					iLocal_163 = 0;
					iLocal_164 = 0;
				}
			}
		}
		iLocal_89 = 1;
	}
	else
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				VEHICLE::SET_PLAYBACK_SPEED(*iParam0, ((1f * fLocal_130) * fLocal_132));
				func_272(iParam0, iLocal_158, fParam1, 1, 0, 0, 0, 0);
			}
		}
		fLocal_129 = fParam1;
		iLocal_165 = 0;
		iLocal_168 = 0;
		fLocal_144 = 0f;
		fLocal_143 = 0f;
		func_273(*iParam0, ((1f * fLocal_130) * fLocal_132), 1);
		func_287(*iParam0, ((1f * fLocal_130) * fLocal_132), 1);
		func_286(*iParam0);
		if ((iLocal_162 == 0 && iLocal_163 == 0) && iLocal_164 == 0)
		{
			iLocal_75 = 0;
			iLocal_74 = 0;
			iLocal_89 = 0;
			return 1;
		}
	}
	return 0;
}

int func_272(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x16ABB
{
	float fVar0;
	
	if (iParam1 > 0)
	{
		VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, &cLocal_184);
		if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam1, &cLocal_184))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, 0))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*uParam0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(*uParam0, 0);
					if (bParam4)
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*uParam0, iParam1, &cLocal_184, 1092616192, 786603);
					}
					else
					{
						if (iParam1 != iLocal_166 && iParam1 != iLocal_167)
						{
							if (bParam7)
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_184, 2 | 4, 0, 786603);
							}
							else if (bParam6)
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_184, 1 | 4, 0, 786603);
							}
							else
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_184, 1);
							}
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_184, 1);
						}
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*uParam0, fParam2);
						if (bParam5)
						{
							VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*uParam0, 1);
						}
						return 1;
					}
				}
				else if (VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(*uParam0) == VEHICLE::GET_VEHICLE_RECORDING_ID(iParam1, &cLocal_184))
				{
					fVar0 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(*uParam0);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*uParam0, (fParam2 - fVar0));
					if (!bParam3)
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*uParam0);
						VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, &cLocal_184);
					}
					if (bParam5)
					{
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*uParam0, 1);
					}
					return 1;
				}
				else
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*uParam0);
					ENTITY::FREEZE_ENTITY_POSITION(*uParam0, 0);
					if (bParam4)
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*uParam0, iParam1, &cLocal_184, 1092616192, 786603);
					}
					else if (iParam1 != iLocal_166 && iParam1 != iLocal_167)
					{
						if (bParam7)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_184, 2 | 4, 0, 786603);
						}
						else if (bParam6)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_184, 1 | 4, 0, 786603);
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_184, 1);
						}
					}
					else
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_184, 1);
					}
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*uParam0, fParam2);
					if (bParam5)
					{
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*uParam0, 1);
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_273(int iParam0, float fParam1, bool bParam2)//Position - 0x16CA1
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	float fVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	var uVar10;
	var uVar11;
	bool bVar12;
	int iVar13;
	int iVar14;
	
	bVar9 = PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID());
	uVar10 = PED::CAN_CREATE_RANDOM_DRIVER();
	uVar11 = PED::CAN_CREATE_RANDOM_BIKE_RIDER();
	bVar12 = false;
	if (bVar9)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		}
		Var5 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		iVar0 = iLocal_161;
		while (iVar0 < 35)
		{
			if (iLocal_152[iVar0] != 99)
			{
				if (iLocal_152[iVar0] == 0)
				{
					if (iLocal_151[iVar0] > 0)
					{
						if (!iLocal_74)
						{
							if (fLocal_129 > (fLocal_121[iVar0] - (7000f * fParam1)))
							{
								if (func_285(iLocal_196[iVar0]))
								{
									MISC::SET_BIT(&(iLocal_153[iVar0]), 0);
								}
								else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_196[iVar0]))
								{
									MISC::SET_BIT(&(iLocal_153[iVar0]), 2);
								}
								MISC::CLEAR_BIT(&(iLocal_153[iVar0]), 1);
								iLocal_152[iVar0]++;
								iLocal_163++;
							}
						}
						else
						{
							fVar6 = (fLocal_129 - fLocal_121[iVar0]);
							fVar6 = (fVar6 * fLocal_122[iVar0]);
							if (fVar6 >= 0f)
							{
								if (fVar6 < func_284(iLocal_151[iVar0]))
								{
									if (func_285(iLocal_196[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_153[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_196[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_153[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_153[iVar0]), 1);
									iLocal_152[iVar0]++;
									iLocal_163++;
								}
								else
								{
									iLocal_152[iVar0] = 99;
								}
							}
						}
					}
					else
					{
						iLocal_152[iVar0] = 99;
					}
				}
				else if (iLocal_152[iVar0] == 1)
				{
					bVar8 = false;
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_151[iVar0], &cLocal_184);
					if (MISC::IS_BIT_SET(iLocal_153[iVar0], 0))
					{
						STREAMING::REQUEST_MODEL(func_174());
						bVar8 = STREAMING::HAS_MODEL_LOADED(func_174());
					}
					else if (!bLocal_101 && ((!MISC::IS_BIT_SET(iLocal_153[iVar0], 2) && uVar10) || (MISC::IS_BIT_SET(iLocal_153[iVar0], 2) && uVar11)))
					{
						bVar8 = true;
					}
					else
					{
						STREAMING::REQUEST_MODEL(func_177());
						bVar8 = STREAMING::HAS_MODEL_LOADED(func_177());
					}
					if (bVar8)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_203[iVar0]))
						{
							STREAMING::REQUEST_MODEL(iLocal_196[iVar0]);
							if (STREAMING::HAS_MODEL_LOADED(iLocal_196[iVar0]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_151[iVar0], &cLocal_184))
							{
								if (fLocal_129 >= (fLocal_121[iVar0] - (fLocal_142 * fParam1)))
								{
									if ((iLocal_88 || bParam2) || (!bLocal_105 && !func_283(Local_174[iVar0 /*3*/], Var5, 5f, fLocal_140)))
									{
										if (bLocal_84)
										{
											func_282(Local_174[iVar0 /*3*/], Var5, fLocal_133);
										}
										iLocal_203[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_196[iVar0], Local_174[iVar0 /*3*/], 0f, 0, 0);
										if (iLocal_196[iVar0] == joaat("polmav"))
										{
											VEHICLE::SET_VEHICLE_LIVERY(iLocal_203[iVar0], 0);
										}
										if (uLocal_97 && !MISC::IS_BIT_SET(iLocal_153[iVar0], 0))
										{
											func_281(iLocal_203[iVar0]);
										}
										if (MISC::IS_BIT_SET(iLocal_153[iVar0], 3))
										{
											ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_203[iVar0], 1);
										}
										ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_203[iVar0], Local_174[iVar0 /*3*/], 0, 0, 1);
										ENTITY::SET_ENTITY_QUATERNION(iLocal_203[iVar0], fLocal_117[iVar0], fLocal_118[iVar0], fLocal_119[iVar0], fLocal_120[iVar0]);
										if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_196[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_196[iVar0]))
										{
											VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_203[iVar0]);
										}
										if (!MISC::IS_BIT_SET(iLocal_153[iVar0], 0))
										{
											VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_203[iVar0], 1, 1);
											if (CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 7)
											{
												VEHICLE::SET_VEHICLE_LIGHTS(iLocal_203[iVar0], 3);
											}
										}
										ENTITY::FREEZE_ENTITY_POSITION(iLocal_203[iVar0], 1);
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_196[iVar0]);
										iLocal_163 = (iLocal_163 - 1);
										iLocal_152[iVar0]++;
										bLocal_105 = true;
									}
								}
							}
						}
						else if (!ENTITY::IS_ENTITY_DEAD(iLocal_203[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[iVar0], 0))
						{
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_203[iVar0], Local_174[iVar0 /*3*/], 0, 0, 1);
							ENTITY::SET_ENTITY_QUATERNION(iLocal_203[iVar0], fLocal_117[iVar0], fLocal_118[iVar0], fLocal_119[iVar0], fLocal_120[iVar0]);
							if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_196[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_196[iVar0]))
							{
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_203[iVar0]);
							}
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_203[iVar0], 1);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_196[iVar0]);
							iLocal_163 = (iLocal_163 - 1);
							iLocal_152[iVar0]++;
						}
					}
				}
				else if (iLocal_152[iVar0] == 2)
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_151[iVar0], &cLocal_184);
					if (!MISC::IS_BIT_SET(iLocal_153[iVar0], 1))
					{
						bVar8 = false;
						if (MISC::IS_BIT_SET(iLocal_153[iVar0], 0))
						{
							STREAMING::REQUEST_MODEL(func_174());
							bVar8 = STREAMING::HAS_MODEL_LOADED(func_174());
							iVar13 = 2;
						}
						else if (!bLocal_101 && ((!MISC::IS_BIT_SET(iLocal_153[iVar0], 2) && uVar10) || (MISC::IS_BIT_SET(iLocal_153[iVar0], 2) && uVar11)))
						{
							bVar8 = true;
							iVar13 = 1;
						}
						else
						{
							STREAMING::REQUEST_MODEL(func_177());
							bVar8 = STREAMING::HAS_MODEL_LOADED(func_177());
							iVar13 = 0;
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_203[iVar0]))
						{
							if (!bLocal_105 && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_203[iVar0], -1))
							{
								if (bVar8)
								{
									if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_203[iVar0], 1), Var5) < 10000f || bParam2) || iLocal_88)
									{
										func_279(&(iLocal_203[iVar0]), iVar13, 1);
										MISC::SET_BIT(&(iLocal_153[iVar0]), 1);
									}
								}
							}
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[iVar0], 0))
					{
						if (fLocal_129 >= fLocal_121[iVar0])
						{
							if (14 > iLocal_156)
							{
								fVar6 = (fLocal_129 - fLocal_121[iVar0]);
								fVar6 = (fVar6 * fLocal_122[iVar0]);
								if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_151[iVar0], &cLocal_184))
								{
									if (fVar6 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_151[iVar0], &cLocal_184))
									{
										Var3 = { ENTITY::GET_ENTITY_COORDS(iLocal_203[iVar0], 1) };
										Var4 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_151[iVar0], fVar6, &cLocal_184) };
										if (((!func_283(Var3, Var5, 5f, fLocal_140) && func_283(Var4, Var5, 5f, fLocal_140)) && !iLocal_88) && !bParam2)
										{
											if (!MISC::IS_BIT_SET(iLocal_153[iVar0], 1))
											{
												func_279(&(iLocal_203[iVar0]), iVar13, 1);
											}
											iLocal_156++;
											iLocal_152[iVar0]++;
										}
										else if (((!bLocal_105 || MISC::IS_BIT_SET(iLocal_153[iVar0], 1)) || iLocal_88) || bParam2)
										{
											if (func_272(&(iLocal_203[iVar0]), iLocal_151[iVar0], fVar6, 1, 0, 0, bLocal_103, bLocal_102))
											{
												VEHICLE::SET_PLAYBACK_SPEED(iLocal_203[iVar0], (fParam1 * fLocal_122[iVar0]));
												if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[iVar0], 0))
												{
													if (MISC::IS_BIT_SET(iLocal_153[iVar0], 0))
													{
														VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_203[iVar0], 1, 1);
														VEHICLE::SET_VEHICLE_SIREN(iLocal_203[iVar0], 1);
														VEHICLE::SET_VEHICLE_LIGHTS(iLocal_203[iVar0], 2);
														if (!VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_196[iVar0]))
														{
															AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_203[iVar0], 1);
														}
													}
												}
												if (!MISC::IS_BIT_SET(iLocal_153[iVar0], 1))
												{
													func_279(&(iLocal_203[iVar0]), iVar13, 1);
												}
												iLocal_156++;
												iLocal_152[iVar0]++;
											}
										}
									}
									else
									{
										if (!MISC::IS_BIT_SET(iLocal_153[iVar0], 1))
										{
											func_279(&(iLocal_203[iVar0]), iVar13, 1);
										}
										iLocal_156++;
										iLocal_152[iVar0]++;
									}
								}
							}
							else
							{
								if (!MISC::IS_BIT_SET(iLocal_153[iVar0], 1))
								{
									func_279(&(iLocal_203[iVar0]), iVar13, 1);
								}
								iLocal_156++;
								iLocal_152[iVar0]++;
							}
						}
					}
					else
					{
						if (!MISC::IS_BIT_SET(iLocal_153[iVar0], 1))
						{
							func_279(&(iLocal_203[iVar0]), iVar13, 1);
						}
						iLocal_156++;
						iLocal_152[iVar0]++;
					}
				}
				else if (iLocal_152[iVar0] == 3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[iVar0], 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_203[iVar0]))
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_203[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								if (bVar9)
								{
									if (((!bLocal_78 && !iLocal_75) && !bLocal_94) && (((!bLocal_103 && !bLocal_102) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_203[iVar0])) || func_278(iLocal_203[iVar0])))
									{
										if (ENTITY::DOES_ENTITY_EXIST(iVar2))
										{
											bVar8 = false;
											if (bLocal_96)
											{
												bVar8 = true;
											}
											else
											{
												fVar7 = ENTITY::GET_ENTITY_SPEED(iVar2);
												if (fVar7 < 1f)
												{
													bVar8 = true;
												}
												else if (MISC::ABSF((fVar7 - ENTITY::GET_ENTITY_SPEED(iLocal_203[iVar0]))) > 15f)
												{
													bVar8 = true;
												}
												else if (!func_277(iLocal_203[iVar0], iVar2, 45f))
												{
													bVar8 = true;
												}
												else if (func_275(iVar2, iLocal_203[iVar0], 0))
												{
													bVar8 = true;
												}
											}
											if (bVar8)
											{
												func_274(iLocal_203[iVar0]);
												iLocal_152[iVar0]++;
											}
										}
									}
									else
									{
										VEHICLE::SET_PLAYBACK_SPEED(iLocal_203[iVar0], (fParam1 * fLocal_122[iVar0]));
									}
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_203[iVar0]);
							}
						}
						else
						{
							iLocal_152[iVar0]++;
						}
					}
					else
					{
						iLocal_152[iVar0]++;
					}
				}
				else if (iLocal_152[iVar0] == 4)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[iVar0], 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_203[iVar0]))
						{
							iLocal_152[iVar0]++;
						}
						else
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_203[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_203[iVar0], (fParam1 * fLocal_122[iVar0]));
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_203[iVar0]);
							}
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_151[iVar0], &cLocal_184))
							{
								if (fLocal_129 > (fLocal_121[iVar0] + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_151[iVar0], &cLocal_184)))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_203[iVar0]);
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_203[iVar0]);
							}
						}
					}
					else
					{
						iLocal_152[iVar0]++;
					}
				}
				else if (iLocal_152[iVar0] == 5)
				{
					if (!iLocal_203[iVar0] == iLocal_207)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[iVar0], 0))
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_203[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								iVar14 = TASK::GET_SCRIPT_TASK_STATUS(iVar1, 242628503);
								if (iVar14 == 7)
								{
									fVar7 = ENTITY::GET_ENTITY_SPEED(iLocal_203[iVar0]);
									if (fVar7 < 8f)
									{
										fVar7 = 8f;
									}
									if (fVar7 > 62.9f)
									{
										fVar7 = 62.9f;
									}
									TASK::SET_DRIVE_TASK_CRUISE_SPEED(iVar1, fVar7);
								}
							}
						}
						if (!bLocal_86 && !bLocal_99)
						{
							if (iLocal_151[iVar0] > 0)
							{
								VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_151[iVar0], &cLocal_184);
							}
						}
						if (!bLocal_76)
						{
							if (!bLocal_104)
							{
								func_170(iLocal_203[iVar0]);
							}
						}
						else if (ENTITY::DOES_ENTITY_EXIST(iLocal_203[iVar0]))
						{
							VEHICLE::DELETE_VEHICLE(&(iLocal_203[iVar0]));
						}
					}
					iLocal_156 = (iLocal_156 - 1);
					iLocal_152[iVar0] = 99;
				}
				if (!bVar12)
				{
					iLocal_161 = iVar0;
					bVar12 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_169();
	}
}

void func_274(int iParam0)//Position - 0x1789F
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		func_171(iParam0);
		VEHICLE::SET_PLAYBACK_TO_USE_AI(iParam0, 786603);
	}
}

int func_275(int iParam0, int iParam1, bool bParam2)//Position - 0x178C1
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
		if (bParam2)
		{
			Var5 = { ENTITY::GET_ENTITY_VELOCITY(iParam1) };
			Var4 = { Var5 / FtoV(SYSTEM::VMAG(Var5)) };
		}
		else
		{
			Var2 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam1, 0f, 5f, 0f) };
			Var4 = { Var2 - Var1 };
		}
	}
	Var3 = { Var1 - Var0 };
	Var3.f_2 = 0f;
	Var4.f_2 = 0f;
	if (func_276(Var3, Var4) < 0f)
	{
		return 1;
	}
	return 0;
}

float func_276(struct<3> Param0, struct<3> Param1)//Position - 0x1795E
{
	return (((Param0.x * Param1.x) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

int func_277(int iParam0, int iParam1, float fParam2)//Position - 0x1797F
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		Var0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(iParam0, 0) };
	}
	else
	{
		return 0;
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
	{
		Var1 = { ENTITY::GET_ENTITY_SPEED_VECTOR(iParam1, 0) };
	}
	else
	{
		return 0;
	}
	Var0.f_2 = 0f;
	Var1.f_2 = 0f;
	fVar2 = func_276(Var0, Var1);
	if (fVar2 < 0f)
	{
		return 0;
	}
	fVar2 = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var0.x, Var0.f_1, Var1.x, Var1.f_1);
	if (!fVar2 < fParam2)
	{
		return 0;
	}
	return 1;
}

int func_278(var uParam0)//Position - 0x17A02
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bLocal_100)
	{
		iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
			if (iVar2 == joaat("phantom"))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iVar1))
				{
					if (VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(iVar1, &iVar0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar0, uParam0))
							{
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_279(var uParam0, int iParam1, bool bParam2)//Position - 0x17A5F
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(*uParam0, -1))
		{
			if (iParam1 == 2)
			{
				iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 6, func_174(), -1, 0, 0);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, iLocal_193);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_174());
			}
			else if (iParam1 == 1)
			{
				iVar0 = PED::CREATE_RANDOM_PED_AS_DRIVER(*uParam0, 1);
				if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*uParam0)))
				{
					PED::GIVE_PED_HELMET(iVar0, 1, 4096, -1);
				}
			}
			else
			{
				iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 4, func_177(), -1, 0, 0);
				if (bLocal_106)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_177());
				}
			}
			if (bParam2)
			{
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iVar0, 1);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(iVar0, 0);
				PED::SET_PED_CONFIG_FLAG(iVar0, 32, 0);
			}
			if (bLocal_107)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 8192, 1);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 65536, 1);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, 0);
				VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(*uParam0, 1);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, 1);
			func_280(iVar0);
			bLocal_105 = true;
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_280(int iParam0)//Position - 0x17B54
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
	}
}

void func_281(int iParam0)//Position - 0x17B6B
{
	int iVar0;
	int iVar1;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 12);
	if (iLocal_198 >= -1 && iLocal_199 >= -1)
	{
		while (iVar0 == iLocal_198 || iVar0 == iLocal_199)
		{
			iVar0++;
		}
	}
	else if (iLocal_198 >= -1)
	{
		if (iVar0 == iLocal_198)
		{
			iVar0++;
		}
	}
	iVar1 = iVar0;
	switch (iVar1)
	{
		case 0:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 0, 0);
			break;
		
		case 1:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 2, 2);
			break;
		
		case 2:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 4, 4);
			break;
		
		case 3:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 27, 27);
			break;
		
		case 4:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 7, 7);
			break;
		
		case 5:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 73, 73);
			break;
		
		case 6:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 68, 68);
			break;
		
		case 7:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 62, 62);
			break;
		
		case 8:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 132, 132);
			break;
		
		case 9:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 117, 0);
			break;
		
		case 10:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 52, 52);
			break;
		
		case 11:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 88, 88);
			break;
		
		case 12:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 1, 1);
			break;
		
		case 13:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 36, 36);
			break;
		
		case 14:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 95, 95);
			break;
		
		default:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 73, 73);
			break;
	}
}

void func_282(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0x17CE4
{
	bool bVar0;
	int iVar1;
	
	bVar0 = true;
	if (!bLocal_87)
	{
		if (!func_283(Param0, Param1, fParam2, 200f))
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (!ENTITY::IS_ENTITY_DEAD(iVar1))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(iVar1, Param0, fParam2, fParam2, fParam2, 0, 1, 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				MISC::CLEAR_AREA_OF_VEHICLES(Param0, fParam2, 0, 0, 0, 0, 0);
			}
		}
	}
}

int func_283(struct<3> Param0, struct<3> Param1, float fParam2, float fParam3)//Position - 0x17D54
{
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		if (!bLocal_87)
		{
			if (!iLocal_74)
			{
				if (SYSTEM::VMAG2(Param1 - Param0) - fParam2) < (fParam3 * fParam3)
				{
					if (CAM::IS_SPHERE_VISIBLE(Param0, fParam2))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

float func_284(int iParam0)//Position - 0x17D9B
{
	var uVar0;
	
	VEHICLE::REQUEST_VEHICLE_RECORDING(iParam0, &cLocal_184);
	while (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam0, &cLocal_184))
	{
		SYSTEM::WAIT(0);
	}
	uVar0 = VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iParam0, &cLocal_184);
	VEHICLE::REMOVE_VEHICLE_RECORDING(iParam0, &cLocal_184);
	return uVar0;
}

int func_285(int iParam0)//Position - 0x17DD7
{
	if (((((((iParam0 == joaat("police") || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("policeb")) || iParam0 == joaat("policet")) || iParam0 == joaat("polmav")) || iParam0 == joaat("pranger")) || iParam0 == joaat("sheriff"))
	{
		return 1;
	}
	return 0;
}

void func_286(int iParam0)//Position - 0x17E51
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	bool bVar3;
	bool bVar4;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		bVar3 = false;
		bVar4 = false;
		iVar0 = iLocal_160;
		while (iVar0 < 15)
		{
			switch (iLocal_154[iVar0])
			{
				case 0:
					if (!iLocal_195[iVar0] == 0)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iParam0, Local_173[iVar0 /*3*/], fLocal_127, fLocal_127, fLocal_127, 0, 1, 0))
						{
							iLocal_162++;
							iLocal_154[iVar0]++;
						}
					}
					else
					{
						iLocal_154[iVar0] = 99;
					}
					break;
				
				case 1:
					if (6 > iLocal_157)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_202[iVar0]))
						{
							STREAMING::REQUEST_MODEL(iLocal_195[iVar0]);
							if (STREAMING::HAS_MODEL_LOADED(iLocal_195[iVar0]))
							{
								if ((iLocal_74 || iLocal_88) || (!bLocal_105 && !func_283(Local_173[iVar0 /*3*/], Var1, 5f, fLocal_140)))
								{
									if (bLocal_84)
									{
										func_282(Local_173[iVar0 /*3*/], Var1, fLocal_133);
									}
									iLocal_202[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_195[iVar0], Local_173[iVar0 /*3*/], 0f, 0, 0);
									if (iLocal_195[iVar0] == joaat("polmav"))
									{
										VEHICLE::SET_VEHICLE_LIVERY(iLocal_202[iVar0], 0);
									}
									ENTITY::SET_ENTITY_QUATERNION(iLocal_202[iVar0], fLocal_123[iVar0], fLocal_124[iVar0], fLocal_125[iVar0], fLocal_126[iVar0]);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_195[iVar0]);
									if (VEHICLE::IS_VEHICLE_MODEL(iLocal_202[iVar0], func_175()))
									{
										VEHICLE::SET_VEHICLE_SIREN(iLocal_202[iVar0], 1);
										if (!VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_195[iVar0]))
										{
											AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_202[iVar0], 1);
										}
									}
									if (VEHICLE::IS_VEHICLE_MODEL(iLocal_202[iVar0], func_176()))
									{
										VEHICLE::SET_VEHICLE_COLOURS(iLocal_202[iVar0], 0, 0);
									}
									ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_202[iVar0], 1);
									iLocal_162 = (iLocal_162 - 1);
									iLocal_157++;
									iLocal_154[iVar0]++;
									bLocal_105 = true;
								}
							}
						}
						else
						{
							iLocal_162 = (iLocal_162 - 1);
							iLocal_157++;
							iLocal_154[iVar0]++;
						}
					}
					break;
				
				case 2:
					if (!bVar3)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_202[iVar0], 0))
						{
							Var2 = { ENTITY::GET_ENTITY_COORDS(iLocal_202[iVar0], 1) };
						}
						if (fLocal_141 == 0f || SYSTEM::VDIST2(Var1, Var2) < (fLocal_141 * fLocal_141))
						{
							if (!func_275(iLocal_202[iVar0], iParam0, 0))
							{
								if (!bLocal_76)
								{
									func_170(iLocal_202[iVar0]);
								}
								else
								{
									VEHICLE::DELETE_VEHICLE(&(iLocal_202[iVar0]));
								}
								iLocal_157 = (iLocal_157 - 1);
								iLocal_154[iVar0] = 99;
								bVar3 = true;
							}
						}
					}
					break;
			}
			if (iLocal_154[iVar0] != 99)
			{
				if (!bVar4)
				{
					iLocal_160 = iVar0;
					bVar4 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_172();
	}
}

void func_287(int iParam0, float fParam1, int iParam2)//Position - 0x18149
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	float fVar9;
	float fVar10;
	bool bVar11;
	bool bVar12;
	var uVar13;
	var uVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	bool bVar18;
	struct<3> Var19;
	
	iVar5 = 0;
	bVar12 = PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID());
	uVar13 = PED::CAN_CREATE_RANDOM_DRIVER();
	uVar14 = PED::CAN_CREATE_RANDOM_BIKE_RIDER();
	if (bVar12)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar5 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		}
		Var8 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	}
	iVar1 = 0;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
		{
			fLocal_129 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
		}
		iVar16 = -1;
		bVar17 = false;
		bVar18 = false;
		iVar0 = iLocal_159;
		while (iVar0 < 175 && !bVar17)
		{
			if (iLocal_149[iVar0] != 99)
			{
				if (iLocal_149[iVar0] == 0)
				{
					if (iLocal_148[iVar0] > 0 && iLocal_194[iVar0] != 0)
					{
						if (!iLocal_74)
						{
							if (fLocal_129 < (fLocal_112[iVar0] + 20000f))
							{
								if (fLocal_129 >= (fLocal_112[iVar0] - (7000f * fParam1)))
								{
									if (func_285(iLocal_194[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_150[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_194[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_150[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_150[iVar0]), 1);
									iLocal_164++;
									iLocal_149[iVar0]++;
								}
								else if (iVar1 > 2)
								{
									bVar17 = true;
								}
								else
								{
									iVar1++;
								}
							}
							else
							{
								func_289(iVar0, 1090519040);
							}
						}
						else
						{
							fVar9 = (fLocal_129 - fLocal_112[iVar0]);
							if (fVar9 >= 0f)
							{
								if (fVar9 < func_284(iLocal_148[iVar0]))
								{
									if (func_285(iLocal_194[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_150[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_194[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_150[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_150[iVar0]), 1);
									iLocal_164++;
									iLocal_149[iVar0]++;
								}
								else
								{
									func_289(iVar0, 1090519040);
								}
							}
						}
					}
					else
					{
						func_289(iVar0, 1090519040);
					}
				}
				else if (iLocal_149[iVar0] == 1)
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_148[iVar0], &cLocal_184);
					bVar11 = false;
					if (MISC::IS_BIT_SET(iLocal_150[iVar0], 0))
					{
						STREAMING::REQUEST_MODEL(func_174());
						if (STREAMING::HAS_MODEL_LOADED(func_174()))
						{
							bVar11 = true;
						}
					}
					else if (!bLocal_101 && ((!MISC::IS_BIT_SET(iLocal_150[iVar0], 2) && uVar13) || (MISC::IS_BIT_SET(iLocal_150[iVar0], 2) && uVar14)))
					{
						bVar11 = true;
					}
					else
					{
						STREAMING::REQUEST_MODEL(func_177());
						bVar11 = STREAMING::HAS_MODEL_LOADED(func_177());
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_200[iVar0]))
					{
						STREAMING::REQUEST_MODEL(iLocal_194[iVar0]);
						if ((STREAMING::HAS_MODEL_LOADED(iLocal_194[iVar0]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_148[iVar0], &cLocal_184)) && bVar11)
						{
							if (fLocal_129 >= (fLocal_112[iVar0] - (fLocal_142 * fParam1)))
							{
								if ((iLocal_88 || iParam2) || (!bLocal_105 && !func_283(Local_172[iVar0 /*3*/], Var8, 5f, fLocal_140)))
								{
									if (bLocal_84)
									{
										func_282(Local_172[iVar0 /*3*/], Var8, fLocal_133);
									}
									iLocal_200[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_194[iVar0], Local_172[iVar0 /*3*/], 0f, 0, 0);
									if (iLocal_194[iVar0] == joaat("polmav"))
									{
										VEHICLE::SET_VEHICLE_LIVERY(iLocal_200[iVar0], 0);
									}
									if (uLocal_97 && !MISC::IS_BIT_SET(iLocal_150[iVar0], 0))
									{
										func_281(iLocal_200[iVar0]);
									}
									ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_200[iVar0], Local_172[iVar0 /*3*/], 0, 0, 1);
									ENTITY::SET_ENTITY_QUATERNION(iLocal_200[iVar0], fLocal_108[iVar0], fLocal_109[iVar0], fLocal_110[iVar0], fLocal_111[iVar0]);
									if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_194[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_194[iVar0]))
									{
										VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_200[iVar0]);
									}
									if (MISC::IS_BIT_SET(iLocal_150[iVar0], 3))
									{
										ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_200[iVar0], 1);
									}
									if (!MISC::IS_BIT_SET(iLocal_150[iVar0], 0))
									{
										VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_200[iVar0], 1, 1);
										if (CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 7)
										{
											VEHICLE::SET_VEHICLE_LIGHTS(iLocal_200[iVar0], 3);
										}
									}
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_200[iVar0], 1);
									ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_200[iVar0], 1);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_194[iVar0]);
									iLocal_164 = (iLocal_164 - 1);
									iLocal_149[iVar0]++;
									bLocal_105 = true;
								}
								else if (fLocal_129 > fLocal_112[iVar0])
								{
									iLocal_164 = (iLocal_164 - 1);
									func_289(iVar0, 1090519040);
								}
							}
						}
					}
				}
				else if (iLocal_149[iVar0] == 2)
				{
					bVar11 = false;
					if (((iVar3 < 8 && (iVar0 > iLocal_170 || iLocal_170 == 0)) || iLocal_88) || iParam2)
					{
						if (!MISC::IS_BIT_SET(iLocal_150[iVar0], 1))
						{
							if (MISC::IS_BIT_SET(iLocal_150[iVar0], 0))
							{
								STREAMING::REQUEST_MODEL(func_174());
								bVar11 = STREAMING::HAS_MODEL_LOADED(func_174());
								iVar15 = 2;
							}
							else if (!bLocal_101 && ((!MISC::IS_BIT_SET(iLocal_150[iVar0], 2) && uVar13) || (MISC::IS_BIT_SET(iLocal_150[iVar0], 2) && uVar14)))
							{
								bVar11 = true;
								iVar15 = 1;
							}
							else
							{
								STREAMING::REQUEST_MODEL(func_177());
								bVar11 = STREAMING::HAS_MODEL_LOADED(func_177());
								iVar15 = 0;
							}
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_200[iVar0]))
							{
								if (!bLocal_105 && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_200[iVar0], -1))
								{
									if (bVar11)
									{
										if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_200[iVar0], 1), Var8) < 10000f || iParam2) || iLocal_88)
										{
											func_279(&(iLocal_200[iVar0]), iVar15, 0);
											MISC::SET_BIT(&(iLocal_150[iVar0]), 1);
										}
									}
								}
							}
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_200[iVar0], 0))
						{
							VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_148[iVar0], &cLocal_184);
							if (fLocal_129 >= fLocal_112[iVar0])
							{
								if (12 > iLocal_155)
								{
									fVar9 = (fLocal_129 - fLocal_112[iVar0]);
									if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_148[iVar0], &cLocal_184))
									{
										if (fVar9 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_148[iVar0], &cLocal_184))
										{
											Var6 = { ENTITY::GET_ENTITY_COORDS(iLocal_200[iVar0], 1) };
											Var7 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_148[iVar0], fVar9, &cLocal_184) };
											if (!func_283(Var6, Var8, 5f, fLocal_140) && func_283(Var7, Var8, 5f, fLocal_140))
											{
												if (!MISC::IS_BIT_SET(iLocal_150[iVar0], 1))
												{
													func_279(&(iLocal_200[iVar0]), iVar15, 0);
												}
												func_289(iVar0, 1090519040);
											}
											else if (((!bLocal_105 || MISC::IS_BIT_SET(iLocal_150[iVar0], 1)) || iLocal_88) || iParam2)
											{
												if (func_272(&(iLocal_200[iVar0]), iLocal_148[iVar0], fVar9, 1, 0, 0, 1, bLocal_102))
												{
													if (!MISC::IS_BIT_SET(iLocal_150[iVar0], 1))
													{
														func_279(&(iLocal_200[iVar0]), iVar15, 0);
													}
													ENTITY::SET_ENTITY_COLLISION(iLocal_200[iVar0], 1, 0);
													VEHICLE::SET_PLAYBACK_SPEED(iLocal_200[iVar0], fParam1);
													iLocal_155++;
													iLocal_149[iVar0]++;
												}
											}
										}
										else
										{
											if (!MISC::IS_BIT_SET(iLocal_150[iVar0], 1))
											{
												func_279(&(iLocal_200[iVar0]), iVar15, 0);
											}
											func_289(iVar0, 1090519040);
										}
									}
									else if (fVar9 > VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_148[iVar0], &cLocal_184))
									{
										if (!MISC::IS_BIT_SET(iLocal_150[iVar0], 1))
										{
											func_279(&(iLocal_200[iVar0]), iVar15, 0);
										}
										func_289(iVar0, 1090519040);
									}
								}
								else
								{
									if (!MISC::IS_BIT_SET(iLocal_150[iVar0], 1))
									{
										func_279(&(iLocal_200[iVar0]), iVar15, 0);
									}
									func_289(iVar0, 1090519040);
								}
							}
							else if (iLocal_85 && !bLocal_93)
							{
								if (!MISC::IS_BIT_SET(iLocal_150[iVar0], 1))
								{
									func_279(&(iLocal_200[iVar0]), iVar15, 0);
								}
								func_289(iVar0, 1090519040);
							}
						}
						else
						{
							if (!MISC::IS_BIT_SET(iLocal_150[iVar0], 1))
							{
								func_279(&(iLocal_200[iVar0]), iVar15, 0);
							}
							func_289(iVar0, 1090519040);
						}
						iVar3++;
						iLocal_170 = iVar0;
					}
				}
				else if (iLocal_149[iVar0] == 3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_200[iVar0], 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_200[iVar0]))
						{
							iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_200[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar4))
							{
								if (bVar12)
								{
									bVar18 = false;
									if (!bLocal_83)
									{
										if ((!bLocal_78 && !iLocal_75) && func_278(iLocal_200[iVar0]))
										{
											if (iVar2 < 3 && (iVar0 > iLocal_169 || iLocal_169 == 0))
											{
												if (!ENTITY::IS_ENTITY_DEAD(iVar5))
												{
													bVar11 = false;
													if (!func_288(iLocal_200[iVar0], iVar5) || func_275(iVar5, iLocal_200[iVar0], 0))
													{
														bVar18 = true;
													}
												}
												iLocal_169 = iVar0;
												iVar2++;
											}
										}
										else if (((!bLocal_98 && !MISC::IS_BIT_SET(iLocal_150[iVar0], 4)) && iVar2 < 3) && (iVar0 > iLocal_169 || iLocal_169 == 0))
										{
											Var19 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0, ENTITY::GET_ENTITY_COORDS(iLocal_200[iVar0], 1)) };
											if (Var19.f_1 < 0f)
											{
												if (MISC::ABSF(Var19.f_1) > MISC::ABSF(Var19.x))
												{
													bVar18 = true;
												}
											}
											iVar2++;
											iLocal_169 = iVar0;
										}
									}
									if (bVar18)
									{
										func_274(iLocal_200[iVar0]);
										iLocal_149[iVar0]++;
									}
									else
									{
										VEHICLE::SET_PLAYBACK_SPEED(iLocal_200[iVar0], fParam1);
									}
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_200[iVar0]);
							}
						}
						else
						{
							iLocal_149[iVar0]++;
						}
					}
					else
					{
						iLocal_149[iVar0]++;
					}
				}
				else if (iLocal_149[iVar0] == 4)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_200[iVar0], 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_200[iVar0]))
						{
							iLocal_149[iVar0]++;
						}
						else
						{
							iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_200[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar4))
							{
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_200[iVar0], fParam1);
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_200[iVar0]);
							}
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_148[iVar0], &cLocal_184))
							{
								if (fLocal_129 > (fLocal_112[iVar0] + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_148[iVar0], &cLocal_184)))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_200[iVar0]);
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_200[iVar0]);
							}
						}
					}
					else
					{
						iLocal_149[iVar0]++;
					}
				}
				else if (iLocal_149[iVar0] == 5)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_200[iVar0]))
					{
						fVar10 = ENTITY::GET_ENTITY_SPEED(iLocal_200[iVar0]);
					}
					iLocal_155 = (iLocal_155 - 1);
					func_289(iVar0, fVar10);
				}
				if (iVar16 == -1)
				{
					iVar16 = iVar0;
				}
			}
			iVar0++;
		}
		if (iVar16 != -1)
		{
			iLocal_159 = iVar16;
		}
		if (iVar2 < 3)
		{
			iLocal_169 = 0;
		}
		if (iVar3 < 8)
		{
			iLocal_170 = 0;
		}
	}
	else
	{
		func_173();
	}
}

int func_288(int iParam0, int iParam1)//Position - 0x18CB0
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		Var0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(iParam0, 0) };
	}
	else
	{
		return 0;
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
	{
		Var1 = { ENTITY::GET_ENTITY_SPEED_VECTOR(iParam1, 0) };
	}
	else
	{
		return 0;
	}
	Var0.f_2 = 0f;
	Var1.f_2 = 0f;
	fVar2 = func_276(Var0, Var1);
	if (fVar2 < 0f)
	{
		return 0;
	}
	return 1;
}

void func_289(int iParam0, float fParam1)//Position - 0x18D14
{
	int iVar0;
	
	if (!iLocal_194[iParam0] == 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_194[iParam0]);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_200[iParam0]))
	{
		ENTITY::SET_ENTITY_COLLISION(iLocal_200[iParam0], 1, 0);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_200[iParam0], 0);
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_200[iParam0], -1);
		if (!PED::IS_PED_INJURED(iVar0) && iVar0 != PLAYER::PLAYER_PED_ID())
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, 0);
			if (fParam1 < 8f)
			{
				fParam1 = 8f;
			}
			if (fParam1 > 62.9f)
			{
				fParam1 = 62.9f;
			}
			TASK::TASK_VEHICLE_MISSION(iVar0, iLocal_200[iParam0], 0, 1, fParam1, 786603, 5f, 5f, 1);
			PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 8192, 1);
			if (bLocal_107)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 65536, 1);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, 0);
			}
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 6, 0);
			TASK::SET_DRIVE_TASK_CRUISE_SPEED(iVar0, fParam1);
		}
	}
	if (!bLocal_76)
	{
		if (!bLocal_104)
		{
			func_280(iVar0);
			func_170(iLocal_200[iParam0]);
		}
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			PED::DELETE_PED(&iVar0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_200[iParam0]))
		{
			VEHICLE::DELETE_VEHICLE(&(iLocal_200[iParam0]));
		}
	}
	if (!bLocal_86 && !bLocal_99)
	{
		if (iLocal_148[iParam0] > 0)
		{
			VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_148[iParam0], &cLocal_184);
		}
	}
	iLocal_149[iParam0] = 99;
}

void func_290(int iParam0, float fParam1, float fParam2)//Position - 0x18E6D
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
		{
			uVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			Var1 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(uVar0, fParam1) };
			Var2 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
			Var3 = { Var2 - Var1 };
			fVar5 = SYSTEM::VMAG(Var3);
			if (fVar5 > fParam2)
			{
				fVar5 = fParam2;
			}
			func_282(Var1, Var4, fVar5);
		}
	}
}

void func_291(int iParam0, float fParam1)//Position - 0x18EF0
{
	if (!bLocal_87)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > (fParam1 * fParam1))
				{
					STREAMING::SET_VEHICLE_POPULATION_BUDGET(1);
				}
				else
				{
					STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
				}
			}
		}
	}
}

void func_292(int iParam0, float fParam1)//Position - 0x18F3D
{
	if (!bLocal_87)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > (fParam1 * fParam1))
				{
					VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(1f);
				}
				else
				{
					VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				}
			}
		}
	}
}

void func_293(int iParam0, float fParam1)//Position - 0x18F8A
{
	var uVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
	{
		fVar1 = (fLocal_143 + 2000f);
		fVar2 = (fLocal_144 + 2000f);
		bVar4 = false;
		if (fVar1 < (fParam1 + 25000f))
		{
			uVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			if (fVar1 <= VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(uVar0))
			{
				if (iLocal_165 == 0)
				{
					Local_180 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(uVar0, fLocal_143) };
					iLocal_165++;
				}
				else if (iLocal_165 == 1)
				{
					Local_181 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fVar1) };
					iLocal_165++;
				}
				else if (!bLocal_105)
				{
					if (Local_180.x > Local_181.x)
					{
						fVar3 = Local_180.x;
						Local_180.x = Local_181.x;
						Local_181.x = fVar3;
					}
					if (Local_180.f_1 > Local_181.f_1)
					{
						fVar3 = Local_180.f_1;
						Local_180.f_1 = Local_181.f_1;
						Local_181.f_1 = fVar3;
					}
					if (Local_180.f_2 > Local_181.f_2)
					{
						fVar3 = Local_180.f_2;
						Local_180.f_2 = Local_181.f_2;
						Local_181.f_2 = fVar3;
					}
					Local_180 = { Local_180 - Vector(fLocal_147, fLocal_147, fLocal_147) };
					Local_181 = { Local_181 + Vector(fLocal_147, fLocal_147, fLocal_147) };
					PATHFIND::SET_ROADS_IN_AREA(Local_180, Local_181, 0, 0);
					fLocal_143 = fVar1;
					iLocal_165 = 0;
				}
			}
		}
		if (fVar2 < (fParam1 - 8000f))
		{
			iVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			if (iLocal_168 == 0)
			{
				Local_182 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fLocal_144) };
				iLocal_168++;
			}
			else if (iLocal_168 == 1)
			{
				Local_183 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fVar2) };
				iLocal_168++;
			}
			else if (!bLocal_105 && !bVar4)
			{
				if (Local_182.x > Local_183.x)
				{
					fVar3 = Local_182.x;
					Local_182.x = Local_183.x;
					Local_183.x = fVar3;
				}
				if (Local_182.f_1 > Local_183.f_1)
				{
					fVar3 = Local_182.f_1;
					Local_182.f_1 = Local_183.f_1;
					Local_183.f_1 = fVar3;
				}
				if (Local_182.f_2 > Local_183.f_2)
				{
					fVar3 = Local_182.f_2;
					Local_182.f_2 = Local_183.f_2;
					Local_183.f_2 = fVar3;
				}
				Local_182 = { Local_182 - Vector(fLocal_147, fLocal_147, fLocal_147) };
				Local_183 = { Local_183 + Vector(fLocal_147, fLocal_147, fLocal_147) };
				PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Local_182, Local_183, 1);
				fLocal_144 = fVar2;
				iLocal_168 = 0;
			}
		}
	}
}

int func_294(int iParam0, int iParam1)//Position - 0x191D7
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (PED::IS_PED_IN_VEHICLE(iParam0, iParam1, 0))
			{
				return 0;
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
		Var2 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam1, 0f, 5f, 0f) };
		Var4 = { Var2 - Var1 };
	}
	Var3 = { Var1 - Var0 };
	Var3.f_2 = 0f;
	Var4.f_2 = 0f;
	fVar5 = func_276(Var3, Var4);
	if (fVar5 < 0f)
	{
		return 1;
	}
	return 0;
}

void func_295()//Position - 0x19278
{
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-9000f, -9000f, -1000f, 9000f, 9000f, 1500f, 0, 1);
	VEHICLE::SET_NUMBER_OF_PARKED_VEHICLES(0);
	VEHICLE::SET_GARBAGE_TRUCKS(0);
	VEHICLE::SET_ALL_LOW_PRIORITY_VEHICLE_GENERATORS_ACTIVE(0);
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
	STREAMING::SET_PED_POPULATION_BUDGET(3);
}

void func_296(int iParam0, int iParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, bool bParam10)//Position - 0x192C2
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
	int iVar9;
	int iVar10;
	
	if (iLocal_90 == 0)
	{
		if (*fParam2 < fParam3)
		{
			*fParam2 = fParam3;
			iLocal_90 = 1;
		}
	}
	if (fParam8 < 0f)
	{
		fParam8 = fLocal_138;
	}
	fVar0 = (fParam3 * fParam7);
	if (!fVar0 > fParam3)
	{
		fVar0 = (fParam3 + 0.1f);
	}
	fVar5 = (fParam3 * fParam9);
	fVar6 = (((fParam6 - fParam5) * 0.4f) + fParam5);
	fVar2 = func_299(iParam0, iParam1);
	if (fVar2 < 0f)
	{
		fVar2 = (fVar2 * -1f);
	}
	fVar3 = fVar2;
	if (fVar3 < fParam4)
	{
		fVar3 = fParam4;
	}
	if (fVar3 > fVar6)
	{
		fVar3 = fVar6;
	}
	fVar4 = fParam3;
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (func_294(iParam1, iParam0))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iParam1, 0))
			{
				fVar4 = fVar0;
			}
			else if (fVar2 < 50f)
			{
				fVar4 = fParam3;
			}
			else
			{
				fVar4 = fVar0;
			}
		}
		else if (fVar2 < fParam5)
		{
			if (func_298(iParam0, iParam1) < fParam5)
			{
				fVar1 = func_297(iParam0, iParam1);
				fVar1 = (fVar1 + -15f);
				if (fVar1 < 0f)
				{
					fVar1 = 0f;
				}
				if (fVar1 > 75f)
				{
					fVar1 = 75f;
				}
				fVar7 = ((75f - fVar1) / 75f);
			}
			else
			{
				fVar7 = 1f;
			}
			fVar4 = ((((((fParam5 - fParam4) - (fVar3 - fParam4)) / (fParam5 - fParam4)) * (fVar0 - fParam3)) * fVar7) + fParam3);
		}
		else if (fVar2 > fParam6)
		{
			fVar4 = fVar5;
			iLocal_91 = 1;
		}
		else if (iLocal_91)
		{
			if (fVar2 < fVar6)
			{
				fVar4 = fParam3;
				iLocal_91 = 0;
			}
			else
			{
				fVar4 = fVar5;
			}
		}
		else
		{
			fVar4 = fParam3;
		}
	}
	fVar1 = (fVar4 - *fParam2);
	if (fVar1 > 0f)
	{
		fVar1 = MISC::GET_FRAME_TIME();
		fVar8 = ((fLocal_145 * fParam3) * fVar1);
		fVar1 = (fVar4 - *fParam2);
		if (fVar1 > fVar8)
		{
			fVar1 = fVar8;
		}
		*fParam2 = (*fParam2 + fVar1);
	}
	else
	{
		fVar1 = MISC::GET_FRAME_TIME();
		fVar8 = ((fLocal_146 * fParam3) * fVar1);
		fVar1 = (fVar4 - *fParam2);
		if (fVar1 < (fVar8 * -1f))
		{
			fVar1 = (fVar8 * -1f);
		}
		*fParam2 = (*fParam2 + fVar1);
	}
	if (bParam10)
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iParam1, 0))
			{
				iVar9 = PED::GET_VEHICLE_PED_IS_IN(iParam1, 0);
				if (!ENTITY::IS_ENTITY_DEAD(iVar9))
				{
					iVar10 = ENTITY::GET_ENTITY_MODEL(iVar9);
					if (VEHICLE::IS_THIS_MODEL_A_CAR(iVar10) || VEHICLE::IS_THIS_MODEL_A_BIKE(iVar10))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar9, 0))
						{
							fVar1 = fVar4;
							if (fVar1 < fParam3)
							{
								fVar1 = fParam3;
							}
							fVar1 = (fVar1 - fParam3);
							fVar1 = (fVar1 / (fVar0 - fParam3));
							fVar1 = (fVar1 * fParam8);
							fVar1 = (fVar1 * (fLocal_136 - fLocal_137));
							fVar1 = (fVar1 + fLocal_137);
							fLocal_135 = fVar1;
							if (fLocal_135 < fLocal_137)
							{
								fLocal_135 = fLocal_137;
							}
							if (fLocal_135 > fLocal_136)
							{
								fLocal_135 = fLocal_136;
							}
							PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), fLocal_135);
						}
					}
				}
			}
		}
	}
}

var func_297(int iParam0, int iParam1)//Position - 0x19577
{
	struct<2> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	var uVar4;
	int iVar5;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		Var0 = ENTITY::GET_ENTITY_FORWARD_X(iParam0);
		Var0.f_1 = ENTITY::GET_ENTITY_FORWARD_Y(iParam0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam1, 0))
		{
			iVar5 = PED::GET_VEHICLE_PED_IS_IN(iParam1, 0);
			Var3.x = ENTITY::GET_ENTITY_FORWARD_X(iVar5);
			Var3.f_1 = ENTITY::GET_ENTITY_FORWARD_Y(iVar5);
		}
		else
		{
			Var2 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam1, 0f, 5f, 0f) };
			Var3 = { Var2 - Var1 };
		}
	}
	uVar4 = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var0, Var0.f_1, Var3.x, Var3.f_1);
	return uVar4;
}

float func_298(int iParam0, int iParam1)//Position - 0x19606
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
	}
	Var2 = { Var1 - Var0 };
	Var2.f_2 = 0f;
	fVar3 = SYSTEM::VMAG(Var2);
	return fVar3;
}

float func_299(int iParam0, int iParam1)//Position - 0x19656
{
	struct<2> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		Var0 = ENTITY::GET_ENTITY_FORWARD_X(iParam0);
		Var0.f_1 = ENTITY::GET_ENTITY_FORWARD_Y(iParam0);
		Var2 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
	}
	Var1 = { Var3 - Var2 };
	fVar4 = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var1.x, Var1.f_1, Var0, Var0.f_1);
	fVar4 = (fVar4 + -90f);
	if (fVar4 < 0f)
	{
		fVar4 = (fVar4 * -1f);
	}
	Var1.f_2 = 0f;
	return (SYSTEM::VMAG(Var1) * SYSTEM::SIN(fVar4));
}

int func_300()//Position - 0x196E4
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_277))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_277, 0))
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_277))
			{
				iLocal_395 = 1;
			}
			else
			{
				iLocal_395 = 0;
			}
		}
		else
		{
			iLocal_395 = 1;
		}
	}
	else
	{
		iLocal_395 = 1;
	}
	iLocal_231 = 0;
	while (iLocal_231 <= 24)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_203[iLocal_231]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[iLocal_231], 0))
			{
				if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_203[iLocal_231]))
				{
					iLocal_396[iLocal_231] = 1;
				}
				else
				{
					iLocal_396[iLocal_231] = 0;
				}
			}
			else
			{
				iLocal_396[iLocal_231] = 1;
			}
		}
		else
		{
			iLocal_396[iLocal_231] = 1;
		}
		iLocal_231++;
	}
	if (((((((((((((((((((((((((iLocal_395 == 1 && iLocal_396[0] == 1) && iLocal_396[1] == 1) && iLocal_396[2] == 1) && iLocal_396[3] == 1) && iLocal_396[4] == 1) && iLocal_396[5] == 1) && iLocal_396[6] == 1) && iLocal_396[7] == 1) && iLocal_396[8] == 1) && iLocal_396[9] == 1) && iLocal_396[10] == 1) && iLocal_396[11] == 1) && iLocal_396[12] == 1) && iLocal_396[13] == 1) && iLocal_396[14] == 1) && iLocal_396[15] == 1) && iLocal_396[16] == 1) && iLocal_396[17] == 1) && iLocal_396[18] == 1) && iLocal_396[19] == 1) && iLocal_396[20] == 1) && iLocal_396[21] == 1) && iLocal_396[22] == 1) && iLocal_396[23] == 1) && iLocal_396[24] == 1)
	{
		return 1;
	}
	return 0;
}

void func_301()//Position - 0x198FE
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_203[4]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[4], 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_203[4]))
			{
				Local_308 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				Var1 = { ENTITY::GET_ENTITY_COORDS(iLocal_203[4], 1) };
				if (Local_308.x < (Var1.x - 10f) && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_203[4]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_203[4]);
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_203[4]));
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_203[3]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[3], 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_203[3]))
			{
				Local_308 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_203[3], 1) };
				if (Local_308.x < (Var0.x - 10f) && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_203[3]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_203[3]);
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_203[3]));
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_203[21]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[21], 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_203[21]))
			{
				Local_308 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				Var2 = { ENTITY::GET_ENTITY_COORDS(iLocal_203[21], 1) };
				if (Local_308.x < (Var2.x - 10f) && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_203[21]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_203[21]);
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_203[21]));
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_203[0]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[0], 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_277))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_277, 0))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_277))
					{
						if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) > 50000f && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_203[0]))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_203[0]))
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_203[0]);
							}
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_203[0]));
						}
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_281))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_281, 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_277))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_277, 0))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_277))
					{
						if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) > 90000f && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_281))
						{
							GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_666[0], 0);
							GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_666[1], 0);
							GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_666[2], 0);
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_264[0]))
							{
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_264[0]));
							}
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_264[1]))
							{
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_264[1]));
							}
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_264[2]))
							{
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_264[2]));
							}
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_264[3]))
							{
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_264[3]));
							}
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_281);
							STREAMING::REMOVE_ANIM_DICT("missheist_agency3aig_lift_waitped_a");
						}
					}
				}
			}
		}
	}
}

void func_302(var uParam0, int iParam1, float fParam2, float fParam3, int iParam4)//Position - 0x19BCD
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

void func_303()//Position - 0x19D26
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_203[2]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[2], 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_277))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_277, 0))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_277))
					{
						if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) < 50530f)
						{
							if (!VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iLocal_203[2]))
							{
								VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_203[2], 1, 1);
							}
						}
						else if (VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iLocal_203[2]))
						{
							VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_203[2], 0, 0);
						}
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_203[5]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[5], 0))
		{
			if (!VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iLocal_203[5]))
			{
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_203[5], 1, 1);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_279[0]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_279[0], 0))
		{
			if (!VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iLocal_279[0]))
			{
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_279[0], 1, 1);
			}
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_279[0], -1))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_275[0]))
				{
					STREAMING::REQUEST_MODEL(joaat("s_m_m_gentransport"));
					if (STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_gentransport")))
					{
						iLocal_275[0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_279[0], 26, joaat("s_m_m_gentransport"), -1, 1, 1);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_gentransport"));
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_279[1]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_279[1], 0))
		{
			if (!VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iLocal_279[1]))
			{
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_279[1], 1, 1);
			}
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_279[1], -1))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_275[1]))
				{
					STREAMING::REQUEST_MODEL(joaat("s_m_m_gentransport"));
					if (STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_gentransport")))
					{
						iLocal_275[1] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_279[1], 26, joaat("s_m_m_gentransport"), -1, 1, 1);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_gentransport"));
					}
				}
			}
		}
	}
}

void func_304()//Position - 0x19EF5
{
	if (iLocal_222 == 0)
	{
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\Trv_4_747_Cop_Cars", 0);
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\Trv_4_747_Plane_Explosion", 0);
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\Trv_4_747_Tanker_Explosion", 0);
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\TV_Monitors", 0);
		if (iLocal_384 == 0)
		{
			iLocal_254 = AUDIO::GET_SOUND_ID();
			iLocal_384 = 1;
		}
		if (iLocal_385 == 0)
		{
			iLocal_255 = AUDIO::GET_SOUND_ID();
			iLocal_385 = 1;
		}
		if (iLocal_386 == 0)
		{
			iLocal_256 = AUDIO::GET_SOUND_ID();
			iLocal_386 = 1;
		}
		if (iLocal_387 == 0)
		{
			iLocal_257 = AUDIO::GET_SOUND_ID();
			iLocal_387 = 1;
		}
		if (iLocal_388 == 0)
		{
			iLocal_258 = AUDIO::GET_SOUND_ID();
			iLocal_388 = 1;
		}
		if (iLocal_383 == 0)
		{
			iLocal_259 = AUDIO::GET_SOUND_ID();
			iLocal_383 = 1;
		}
		if (iLocal_389 == 0)
		{
			iLocal_260 = AUDIO::GET_SOUND_ID();
			iLocal_389 = 1;
		}
		if (iLocal_342 == 1)
		{
			func_104();
			iLocal_342 = 0;
		}
		if (!CAM::DOES_CAM_EXIST(uLocal_300))
		{
			uLocal_300 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
			CAM::SET_CAM_FOV(uLocal_300, 40f);
		}
		iLocal_340 = 0;
		iLocal_334 = 0;
		iLocal_346 = 0;
		iLocal_330 = 0;
		iLocal_325 = 0;
		iLocal_331 = 0;
		iLocal_324 = 0;
		iLocal_360 = 0;
		iLocal_362[0] = 0;
		iLocal_363[0] = 0;
		iLocal_362[1] = 0;
		iLocal_363[1] = 0;
		iLocal_362[2] = 0;
		iLocal_364 = 0;
		iLocal_365 = 0;
		iLocal_328 = 0;
		iLocal_329 = 0;
		iLocal_327 = 0;
		iLocal_369 = 0;
		iLocal_372 = 0;
		iLocal_373 = 0;
		iLocal_374 = 0;
		iLocal_376 = 0;
		iLocal_375 = 0;
		iLocal_377 = 0;
		iLocal_378 = 0;
		iLocal_379 = 0;
		iLocal_380 = 0;
		iLocal_381 = 0;
		iLocal_382 = 0;
		iLocal_390 = 0;
		iLocal_391 = 0;
		iLocal_393 = 0;
		iLocal_394 = 0;
		iLocal_401 = 0;
		iLocal_402 = 0;
		iLocal_466 = 0;
		iLocal_348 = 1;
		iLocal_349 = 1;
		iLocal_357 = 1;
		iLocal_407 = 0;
		iLocal_408 = 0;
		iLocal_414 = 0;
		iLocal_416 = 0;
		iLocal_423 = 0;
		iLocal_424 = 0;
		iLocal_426 = 0;
		iLocal_428[0] = 0;
		iLocal_428[1] = 0;
		iLocal_429[0] = 0;
		iLocal_429[1] = 0;
		iLocal_430 = 0;
		iLocal_431 = 0;
		iLocal_433 = 0;
		iLocal_438 = 0;
		iLocal_439 = 0;
		iLocal_440 = 0;
		iLocal_461 = 0;
		iLocal_462 = 0;
		iLocal_467 = 0;
		iLocal_226 = 0;
		iLocal_239 = 0;
		iLocal_230 = 0;
		while (iLocal_230 <= 2)
		{
			iLocal_464[iLocal_230] = 0;
			iLocal_465[iLocal_230] = 0;
			iLocal_230++;
		}
		iLocal_230 = 0;
		while (iLocal_230 <= 2)
		{
			iLocal_486[iLocal_230] = 0;
			iLocal_230++;
		}
		iLocal_230 = 0;
		while (iLocal_230 <= 6)
		{
			iLocal_434[iLocal_230] = 0;
			iLocal_435[iLocal_230] = 0;
			iLocal_230++;
		}
		STREAMING::REQUEST_PTFX_ASSET();
		iLocal_88 = 1;
		bLocal_94 = true;
		func_249();
		uLocal_225 = HUD::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID();
		MISC::CLEAR_AREA(-823.71f, -2548.2f, 13.75f, 20f, 1, 0, 0, 0);
		PED::SET_PED_NON_CREATION_AREA(-833.86f, -2564.17f, 13.43f, -814.37f, -2521.04f, 12.94f);
		PATHFIND::SET_PED_PATHS_IN_AREA(-833.86f, -2564.17f, 13.43f, -814.37f, -2521.04f, 12.94f, 0, 0);
		PATHFIND::SET_ROADS_IN_AREA(-482f, -2118f, 6f, -1072f, -2724f, 17f, 0, 1);
		func_110(2, 1);
		func_306("BB_Chase", 45, 0, 1);
		PLAYER::SET_MAX_WANTED_LEVEL(3);
		func_17(&uLocal_489, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (!func_24())
			{
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
			}
			func_21(iLocal_278, -1, 1);
		}
		iLocal_223 = 0;
		iLocal_222 = 1;
	}
	if (iLocal_222 == 1)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		func_305();
		iLocal_222 = 2;
	}
	if (iLocal_222 == 2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_286))
		{
			iLocal_286 = VEHICLE::CREATE_VEHICLE(joaat("blista"), 0f, 0f, 1f, 0f, 1, 1);
		}
		while (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(45, "BB_Chase"))
		{
			SYSTEM::WAIT(0);
		}
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_278, 0))
			{
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_278, 1, 1);
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_278, 30f);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_277))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_277, 0))
			{
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_277, 45, "BB_Chase", 1);
				SYSTEM::SETTIMERB(0);
				func_232();
				MISC::SET_INSTANCE_PRIORITY_HINT(2);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_278))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_278, 0))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_278);
					}
				}
				if (!CAM::IS_SCREEN_FADED_IN())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				iLocal_222 = 0;
				iLocal_221 = 4;
			}
		}
	}
}

void func_305()//Position - 0x1A32E
{
	Local_173[0 /*3*/] = { -583.6427f, -2157.497f, 5.7947f };
	fLocal_123[0] = -0.0003f;
	fLocal_124[0] = -0.0085f;
	fLocal_125[0] = 0.9998f;
	fLocal_126[0] = 0.0158f;
	iLocal_195[0] = joaat("blista");
	Local_172[4 /*3*/] = { -827.2035f, -2575.697f, 13.5688f };
	fLocal_108[4] = 0.0004f;
	fLocal_109[4] = -0.0003f;
	fLocal_110[4] = -0.2526f;
	fLocal_111[4] = 0.9676f;
	iLocal_148[4] = 50;
	fLocal_112[4] = 20310f;
	iLocal_194[4] = joaat("manana");
	Local_173[1 /*3*/] = { -1033.717f, -2949.014f, 13.4922f };
	fLocal_123[1] = 0.0032f;
	fLocal_124[1] = -0.0003f;
	fLocal_125[1] = -0.0255f;
	fLocal_126[1] = 0.9997f;
	iLocal_195[1] = joaat("bison2");
	Local_174[0 /*3*/] = { -1178.365f, -2845.981f, 13.9027f };
	fLocal_117[0] = 0.0018f;
	fLocal_118[0] = 0.0123f;
	fLocal_119[0] = 0.9644f;
	fLocal_120[0] = 0.2642f;
	iLocal_151[0] = 9;
	fLocal_121[0] = 22357f;
	fLocal_122[0] = 1f;
	iLocal_196[0] = joaat("buzzard");
	Local_174[1 /*3*/] = { -1376.197f, -2755.167f, 14.0646f };
	fLocal_117[1] = -0.0012f;
	fLocal_118[1] = 0.0013f;
	fLocal_119[1] = 0.8439f;
	fLocal_120[1] = -0.5365f;
	iLocal_151[1] = 10;
	fLocal_121[1] = 27135f;
	fLocal_122[1] = 1f;
	iLocal_196[1] = joaat("packer");
	Local_174[2 /*3*/] = { -1342.543f, -2688.482f, 22.8254f };
	fLocal_117[2] = 0.0057f;
	fLocal_118[2] = -0.0014f;
	fLocal_119[2] = -0.2451f;
	fLocal_120[2] = 0.9695f;
	iLocal_151[2] = 11;
	fLocal_121[2] = 35135f;
	fLocal_122[2] = 1f;
	iLocal_196[2] = joaat("jet");
	Local_174[3 /*3*/] = { -898.3506f, -2698.965f, 20.159f };
	fLocal_117[3] = 0.0065f;
	fLocal_118[3] = 0.0191f;
	fLocal_119[3] = -0.2629f;
	fLocal_120[3] = 0.9646f;
	iLocal_151[3] = 3;
	fLocal_121[3] = 6764f;
	fLocal_122[3] = 1f;
	iLocal_196[3] = joaat("bus");
	Local_174[4 /*3*/] = { -576.655f, -2231.905f, 5.2834f };
	fLocal_117[4] = 0.0043f;
	fLocal_118[4] = 0.0331f;
	fLocal_119[4] = -0.3125f;
	fLocal_120[4] = 0.9493f;
	iLocal_151[4] = 4;
	fLocal_121[4] = 2102f;
	fLocal_122[4] = 1f;
	iLocal_196[4] = joaat("bison");
	Local_174[5 /*3*/] = { -994.9925f, -3154.125f, 23.1145f };
	fLocal_117[5] = 0.0056f;
	fLocal_118[5] = 0.0029f;
	fLocal_119[5] = 0.4915f;
	fLocal_120[5] = 0.8708f;
	iLocal_151[5] = 21;
	fLocal_121[5] = 92500f;
	fLocal_122[5] = 1f;
	iLocal_196[5] = joaat("jet");
	Local_174[7 /*3*/] = { -553.3315f, -2073.951f, 6.8909f };
	fLocal_117[7] = 0.0072f;
	fLocal_118[7] = 0.0176f;
	fLocal_119[7] = 0.9739f;
	fLocal_120[7] = -0.2263f;
	iLocal_151[7] = 54;
	fLocal_121[7] = 0f;
	fLocal_122[7] = 1f;
	iLocal_196[7] = joaat("police3");
	Local_174[8 /*3*/] = { -561.7264f, -2076.761f, 6.7664f };
	fLocal_117[8] = -0.027f;
	fLocal_118[8] = 0.0016f;
	fLocal_119[8] = 0.9169f;
	fLocal_120[8] = -0.3981f;
	iLocal_151[8] = 108;
	fLocal_121[8] = 150f;
	fLocal_122[8] = 1f;
	iLocal_196[8] = joaat("police3");
	Local_174[11 /*3*/] = { -1563.918f, -2745.409f, 13.5643f };
	fLocal_117[11] = -0.0022f;
	fLocal_118[11] = -0.0019f;
	fLocal_119[11] = 0.928f;
	fLocal_120[11] = -0.3726f;
	iLocal_151[11] = 111;
	fLocal_121[11] = 36000f;
	fLocal_122[11] = 1f;
	iLocal_196[11] = joaat("police3");
	Local_174[12 /*3*/] = { -1026.024f, -2336.396f, 13.5678f };
	fLocal_117[12] = -0.0083f;
	fLocal_118[12] = -0.0054f;
	fLocal_119[12] = 0.55f;
	fLocal_120[12] = 0.8351f;
	iLocal_151[12] = 112;
	fLocal_121[12] = 60000f;
	fLocal_122[12] = 1f;
	iLocal_196[12] = joaat("police3");
	Local_174[13 /*3*/] = { -1013.316f, -2340.457f, 13.5678f };
	fLocal_117[13] = -0.0086f;
	fLocal_118[13] = -0.005f;
	fLocal_119[13] = 0.5052f;
	fLocal_120[13] = 0.8629f;
	iLocal_151[13] = 113;
	fLocal_121[13] = 60000f;
	fLocal_122[13] = 1f;
	iLocal_196[13] = joaat("police3");
	Local_174[14 /*3*/] = { -1221.049f, -2731.169f, 13.5681f };
	fLocal_117[14] = -0.0083f;
	fLocal_118[14] = -0.0057f;
	fLocal_119[14] = 0.6469f;
	fLocal_120[14] = 0.7625f;
	iLocal_151[14] = 61;
	fLocal_121[14] = 80000f;
	fLocal_122[14] = 1f;
	iLocal_196[14] = joaat("police3");
	Local_174[15 /*3*/] = { -1227.203f, -2735.872f, 13.568f };
	fLocal_117[15] = -0.0041f;
	fLocal_118[15] = -0.0091f;
	fLocal_119[15] = 0.9133f;
	fLocal_120[15] = 0.4072f;
	iLocal_151[15] = 62;
	fLocal_121[15] = 80000f;
	fLocal_122[15] = 1f;
	iLocal_196[15] = joaat("police3");
	Local_174[19 /*3*/] = { -1240.048f, -2203.457f, 14.0347f };
	fLocal_117[19] = 0.0002f;
	fLocal_118[19] = 0.0018f;
	fLocal_119[19] = 0.9611f;
	fLocal_120[19] = -0.2763f;
	iLocal_151[19] = 66;
	fLocal_121[19] = 55125f;
	fLocal_122[19] = 1f;
	iLocal_196[19] = joaat("firetruk");
	Local_174[20 /*3*/] = { -438.0192f, -2060.751f, 73.6354f };
	fLocal_117[20] = -0.0005f;
	fLocal_118[20] = 0.0018f;
	fLocal_119[20] = 0.9559f;
	fLocal_120[20] = 0.2938f;
	iLocal_151[20] = 67;
	fLocal_121[20] = 0f;
	fLocal_122[20] = 1f;
	iLocal_196[20] = joaat("maverick");
	Local_174[21 /*3*/] = { -546.8047f, -2187.925f, 5.8819f };
	fLocal_117[21] = -0.0252f;
	fLocal_118[21] = -0.0034f;
	fLocal_119[21] = 0.9369f;
	fLocal_120[21] = 0.3487f;
	iLocal_151[21] = 5;
	fLocal_121[21] = 3834f;
	fLocal_122[21] = 1f;
	iLocal_196[21] = joaat("blista");
	Local_174[22 /*3*/] = { -1001.674f, -2947.732f, 13.3947f };
	fLocal_117[22] = 0.001f;
	fLocal_118[22] = -0.0004f;
	fLocal_119[22] = 0.8616f;
	fLocal_120[22] = 0.5075f;
	iLocal_151[22] = 6;
	fLocal_121[22] = 20176f;
	fLocal_122[22] = 1f;
	iLocal_196[22] = joaat("airtug");
	Local_174[23 /*3*/] = { -1249.588f, -2525.9f, 13.3942f };
	fLocal_117[23] = 0.001f;
	fLocal_118[23] = -0.0001f;
	fLocal_119[23] = 0.9749f;
	fLocal_120[23] = -0.2228f;
	iLocal_151[23] = 7;
	fLocal_121[23] = 48538f;
	fLocal_122[23] = 1f;
	iLocal_196[23] = joaat("airtug");
	Local_174[24 /*3*/] = { -1362.538f, -2625.609f, 13.3895f };
	fLocal_117[24] = -0.0001f;
	fLocal_118[24] = 0.0018f;
	fLocal_119[24] = 0.5344f;
	fLocal_120[24] = 0.8452f;
	iLocal_151[24] = 8;
	fLocal_121[24] = 75112f;
	fLocal_122[24] = 1f;
	iLocal_196[24] = joaat("airtug");
}

void func_306(char* sParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x1AC40
{
	struct<3> Var0;
	
	StringCopy(&cLocal_184, sParam0, 64);
	bLocal_84 = true;
	iLocal_89 = 0;
	iLocal_155 = 0;
	iLocal_156 = 0;
	iLocal_157 = 0;
	iLocal_158 = iParam1;
	iLocal_159 = 0;
	iLocal_160 = 0;
	iLocal_161 = 0;
	iLocal_165 = 0;
	iLocal_168 = 0;
	iLocal_166 = -1;
	iLocal_167 = -1;
	iLocal_169 = 0;
	iLocal_170 = 0;
	fLocal_143 = 0f;
	fLocal_144 = 0f;
	fLocal_129 = 0f;
	iLocal_90 = 0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		Local_176.x = (Var0.x - 100f);
		Local_176.f_1 = (Var0.f_1 - 100f);
		Local_176.f_2 = (Var0.f_2 - 100f);
		Local_177.x = (Var0.x + 100f);
		Local_177.f_1 = (Var0.f_1 + 100f);
		Local_177.f_2 = (Var0.f_2 + 100f);
		PATHFIND::SET_ROADS_IN_AREA(Local_176, Local_177, 0, 0);
		if (bParam2)
		{
			MISC::CLEAR_AREA_OF_VEHICLES(Var0, 500f, 0, 0, 0, 0, 0);
		}
	}
	PED::ADD_RELATIONSHIP_GROUP("rgh_traffic", &iLocal_193);
	func_295();
	if (bParam3)
	{
		func_159(1);
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), 0);
		PED::SET_CREATE_RANDOM_COPS(0);
	}
	func_164();
}

void func_307()//Position - 0x1AD61
{
	if (iLocal_222 == 0)
	{
		RECORDING::_0x293220DA1B46CEBC(0f, 14f, 4);
		if (iLocal_342 == 1)
		{
			func_104();
			iLocal_342 = 0;
		}
		iLocal_356 = 0;
		iLocal_357 = 0;
		iLocal_359 = 0;
		iLocal_361 = 0;
		iLocal_371 = 0;
		iLocal_324 = 0;
		iLocal_325 = 0;
		iLocal_328 = 0;
		iLocal_330 = 0;
		iLocal_331 = 0;
		iLocal_332 = 0;
		iLocal_333 = 0;
		iLocal_334 = 0;
		iLocal_335 = 0;
		iLocal_340 = 0;
		iLocal_349 = 0;
		iLocal_347 = 0;
		iLocal_406 = 0;
		iLocal_409 = 0;
		iLocal_448 = 0;
		iLocal_370 = 0;
		iLocal_348 = 1;
		iLocal_226 = 0;
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iLocal_358 = 1;
		}
		else
		{
			iLocal_358 = 0;
		}
		func_17(&uLocal_489, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		PATHFIND::SET_IGNORE_NO_GPS_FLAG(1);
		PATHFIND::SET_ROADS_IN_AREA(-617f, -2274f, 0f, -406.01f, -2044f, 15f, 0, 1);
		iLocal_229 = MISC::GET_GAME_TIMER();
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (!func_24())
			{
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
			}
			func_21(0, -1, 1);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_278);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_289);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_290);
		}
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
		if (!HUD::DOES_BLIP_EXIST(uLocal_298))
		{
			uLocal_298 = func_312(Local_307, 0);
		}
		AUDIO::TRIGGER_MUSIC_EVENT("TRV4_GAMEPLAY_START");
		Local_317 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		iLocal_222 = 1;
	}
	if (iLocal_222 == 1)
	{
		if (iLocal_347 == 0 && iLocal_361 == 1)
		{
			if (!func_226() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
			{
				func_20("TRV4_GO1", 7500, 1);
				iLocal_347 = 1;
			}
		}
		if (iLocal_370 == 0 && !func_311())
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_307, 1) < 800f)
			{
				iLocal_228 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
				if (iLocal_228 == 0)
				{
					AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_Sol_3_01", 0f);
					RECORDING::_0x293220DA1B46CEBC(0f, 6f, 3);
					iLocal_370 = 1;
				}
				if (iLocal_228 == 1)
				{
					AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_Sol_3_02", 0f);
					RECORDING::_0x293220DA1B46CEBC(0f, 6f, 3);
					iLocal_370 = 1;
				}
			}
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_307, 1) < 600f)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_277))
			{
				STREAMING::REQUEST_MODEL(joaat("cogcabrio"));
				if (STREAMING::HAS_MODEL_LOADED(joaat("cogcabrio")))
				{
					iLocal_277 = VEHICLE::CREATE_VEHICLE(joaat("cogcabrio"), -428.0226f, -2153.558f, 9.2992f, 90.9098f, 1, 1);
					ENTITY::SET_ENTITY_PROOFS(iLocal_277, 0, 1, 1, 1, 0, 0, 0, 0);
					VEHICLE::SET_VEHICLE_COLOURS(iLocal_277, 27, 27);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cogcabrio"));
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_277, "SOL_3_MOLLY_CAR_Group", 0);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_263))
			{
				STREAMING::REQUEST_MODEL(joaat("ig_molly"));
				if (STREAMING::HAS_MODEL_LOADED(joaat("ig_molly")))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_277))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_277, 0))
						{
							iLocal_263 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_277, 26, joaat("ig_molly"), -1, 1, 1);
							ENTITY::SET_ENTITY_INVINCIBLE(iLocal_263, 1);
							PED::SET_PED_CAN_BE_TARGETTED(iLocal_263, 0);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cogcabrio"));
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_molly"));
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_263, 1862763509);
							iLocal_357 = 1;
						}
					}
				}
			}
		}
		else
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_263))
			{
				PED::DELETE_PED(&iLocal_263);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_277))
			{
				VEHICLE::DELETE_VEHICLE(&iLocal_277);
			}
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_307, 1) < 500f)
		{
			if (iLocal_359 == 0)
			{
				uLocal_304 = unk_0x67D02A194A2FC2BD("BREAKING_NEWS");
				STREAMING::REQUEST_MODEL(joaat("police3"));
				STREAMING::REQUEST_MODEL(joaat("maverick"));
				STREAMING::REQUEST_MODEL(joaat("bison"));
				STREAMING::REQUEST_MODEL(joaat("blista"));
				VEHICLE::REQUEST_VEHICLE_RECORDING(45, "BB_Chase");
				VEHICLE::REQUEST_VEHICLE_RECORDING(35, "BB_Chase");
				VEHICLE::REQUEST_VEHICLE_RECORDING(2, "BB_Chase");
				VEHICLE::REQUEST_VEHICLE_RECORDING(54, "BB_Chase");
				VEHICLE::REQUEST_VEHICLE_RECORDING(55, "BB_Chase");
				VEHICLE::REQUEST_VEHICLE_RECORDING(67, "BB_Chase");
				func_156(1, "BB_Chase");
				AUDIO::PREPARE_MUSIC_EVENT("TRV4_CHASE");
				iLocal_359 = 1;
			}
		}
		else if (iLocal_359 == 1)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("police3"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("maverick"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bison"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("blista"));
			VEHICLE::REMOVE_VEHICLE_RECORDING(45, "BB_Chase");
			VEHICLE::REMOVE_VEHICLE_RECORDING(35, "BB_Chase");
			VEHICLE::REMOVE_VEHICLE_RECORDING(2, "BB_Chase");
			VEHICLE::REMOVE_VEHICLE_RECORDING(54, "BB_Chase");
			VEHICLE::REMOVE_VEHICLE_RECORDING(55, "BB_Chase");
			VEHICLE::REMOVE_VEHICLE_RECORDING(67, "BB_Chase");
			func_310(1, "BB_Chase");
			AUDIO::CANCEL_MUSIC_EVENT("TRV4_CHASE");
			iLocal_359 = 0;
		}
		if (iLocal_371 == 0)
		{
			if (MISC::GET_GAME_TIMER() > (iLocal_229 + 135000))
			{
				HUD::CLEAR_PRINTS();
				func_20("TRV4_WARN1", 7500, 1);
				iLocal_229 = MISC::GET_GAME_TIMER();
				iLocal_371 = 1;
			}
		}
		if (iLocal_371 == 1)
		{
			if (MISC::GET_GAME_TIMER() > (iLocal_229 + 135000))
			{
				func_204("TRV4_FAIL1");
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_DRIVE_TO_AIRPORT"))
			{
				AUDIO::START_AUDIO_SCENE("SOL_3_DRIVE_TO_AIRPORT");
			}
			if (iLocal_406 == 0)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("TRV4_CAR_ENTERED");
				iLocal_406 = 1;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_278))
			{
				iLocal_278 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				ENTITY::SET_ENTITY_PROOFS(iLocal_278, 0, 1, 0, 0, 0, 0, 0, 0);
				VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(iLocal_278);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_278, 1);
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iLocal_278))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_278, 0))
			{
				if (iLocal_358 == 0)
				{
					ENTITY::SET_ENTITY_PROOFS(iLocal_278, 0, 0, 0, 0, 0, 0, 0, 0);
					iLocal_358 = 1;
				}
				if (iLocal_350 == 1)
				{
					VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(iLocal_278);
					iLocal_350 = 0;
				}
				if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_278, 1))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_278);
				}
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (iLocal_409 == 0)
			{
				HUD::START_GPS_MULTI_ROUTE(156, 1, 0);
				HUD::ADD_POINT_TO_GPS_MULTI_ROUTE(-244f, -1842.74f, 28.48f);
				HUD::ADD_POINT_TO_GPS_MULTI_ROUTE(-1.5f, -2014.4f, 11.5f);
				HUD::ADD_POINT_TO_GPS_MULTI_ROUTE(-498.7f, -2136.5f, 8.4f);
				HUD::SET_GPS_MULTI_ROUTE_RENDER(1);
				iLocal_409 = 1;
			}
		}
		else if (iLocal_409 == 1)
		{
			HUD::SET_GPS_MULTI_ROUTE_RENDER(0);
			iLocal_409 = 0;
		}
		if ((iLocal_359 == 1 && ENTITY::DOES_ENTITY_EXIST(iLocal_277)) && ENTITY::DOES_ENTITY_EXIST(iLocal_263))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_277, 0))
			{
				if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_277, func_309(PLAYER::PLAYER_PED_ID()), 0))
				{
					func_308();
					iLocal_222 = 0;
					iLocal_224 = 0;
					iLocal_221 = 3;
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_277, 0))
			{
				if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_277))
				{
					func_308();
					iLocal_222 = 0;
					iLocal_224 = 0;
					iLocal_221 = 3;
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_277, 0))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_277, 1), 200f, 132f, 100f, 0, 1, 0))
				{
					iLocal_356 = 0;
					func_308();
					iLocal_222 = 0;
					iLocal_224 = 0;
					iLocal_221 = 3;
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_277, 0))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -577f, -2051.5f, 7f, 84f, 87.5f, 15f, 0, 1, 0))
				{
					iLocal_356 = 1;
					func_308();
					iLocal_222 = 0;
					iLocal_224 = 0;
					iLocal_221 = 3;
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_277, 0))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -703.5f, -1969.5f, 10f, 53.5f, 62.5f, 10f, 0, 1, 0))
				{
					HUD::CLEAR_GPS_MULTI_ROUTE();
					PATHFIND::SET_IGNORE_NO_GPS_FLAG(0);
					iLocal_356 = 1;
					func_308();
					iLocal_222 = 0;
					iLocal_224 = 0;
					iLocal_221 = 3;
				}
			}
		}
	}
}

void func_308()//Position - 0x1B470
{
	while (((!STREAMING::HAS_MODEL_LOADED(joaat("police3")) || !STREAMING::HAS_MODEL_LOADED(joaat("maverick"))) || !STREAMING::HAS_MODEL_LOADED(joaat("bison"))) || !STREAMING::HAS_MODEL_LOADED(joaat("blista")))
	{
		SYSTEM::WAIT(0);
	}
	while (((((!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(45, "BB_Chase") || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(35, "BB_Chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(2, "BB_Chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(54, "BB_Chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(55, "BB_Chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(67, "BB_Chase"))
	{
		SYSTEM::WAIT(0);
	}
}

var func_309(int iParam0)//Position - 0x1B51C
{
	var uVar0;
	
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, 1);
	return uVar0;
}

void func_310(int iParam0, char* sParam1)//Position - 0x1B530
{
	VEHICLE::REMOVE_VEHICLE_RECORDING(iParam0, sParam1);
}

int func_311()//Position - 0x1B540
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

var func_312(struct<3> Param0, int iParam1)//Position - 0x1B565
{
	var uVar0;
	
	uVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_SCALE(uVar0, func_201(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(uVar0, iParam1);
	return uVar0;
}

void func_313()//Position - 0x1B591
{
	if (iLocal_222 == 0)
	{
		iLocal_335 = 1;
		iLocal_415 = 0;
		iLocal_432 = 0;
		iLocal_436 = 0;
		while (iLocal_335 == 1)
		{
			RECORDING::_0x208784099002BC30("M_LegalTrouble", 0);
			switch (iLocal_224)
			{
				case 0:
					CUTSCENE::REQUEST_CUTSCENE("sol_3_int", 8);
					if (func_357())
					{
						while (!func_329(61, &uLocal_654, 0, 1, 0, 0, 0))
						{
							SYSTEM::WAIT(0);
						}
						iLocal_405 = 0;
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
						func_189(1, 1, 1, 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Michael", 0, 0, 0);
						if (ENTITY::DOES_ENTITY_EXIST(Global_15350[0]))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_15350[0], 0))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_15350[0], 1, 1);
								iLocal_278 = Global_15350[0];
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(Global_15350[1]))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_15350[1], 0))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_15350[1], 1, 1);
								iLocal_289 = Global_15350[1];
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(Global_15350[2]))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_15350[2], 0))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_15350[2], 1, 1);
								iLocal_290 = Global_15350[2];
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(Global_15350[3]))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_15350[3], 0))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_15350[3], 1, 1);
								iLocal_291 = Global_15350[3];
							}
						}
						CUTSCENE::START_CUTSCENE(0);
						RECORDING::_0x48621C9FCA3EBD28(4);
						func_328();
						if (!CAM::IS_SCREEN_FADED_IN())
						{
							CAM::DO_SCREEN_FADE_IN(250);
						}
						iLocal_224++;
					}
					break;
				
				case 1:
					if (iLocal_415 == 0)
					{
						if (CUTSCENE::IS_CUTSCENE_ACTIVE())
						{
							if (iLocal_436 == 0)
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_291))
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_291, 0))
									{
										if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_291)))
										{
											VEHICLE::CONTROL_LANDING_GEAR(iLocal_291, 2);
											ENTITY::SET_ENTITY_COORDS(iLocal_291, -1048.722f, -506.8387f, 35.0386f, 1, 0, 0, 1);
											ENTITY::SET_ENTITY_HEADING(iLocal_291, 357.1288f);
											VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_291, 1);
											VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_291);
											func_318(-1048.722f, -506.8387f, 35.0386f, 357.1288f, 0, 145);
											iLocal_436 = 1;
										}
										if (((VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iLocal_291)) || VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iLocal_291))) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iLocal_291))) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(iLocal_291)))
										{
											if ((((((((ENTITY::GET_ENTITY_MODEL(iLocal_291) != joaat("bus") && ENTITY::GET_ENTITY_MODEL(iLocal_291) != joaat("pounder")) && ENTITY::GET_ENTITY_MODEL(iLocal_291) != joaat("packer")) && ENTITY::GET_ENTITY_MODEL(iLocal_291) != joaat("airbus")) && ENTITY::GET_ENTITY_MODEL(iLocal_291) != joaat("ambulance")) && ENTITY::GET_ENTITY_MODEL(iLocal_291) != joaat("barracks")) && ENTITY::GET_ENTITY_MODEL(iLocal_291) != joaat("barracks2")) && ENTITY::GET_ENTITY_MODEL(iLocal_291) != joaat("benson")) && ENTITY::GET_ENTITY_MODEL(iLocal_291) != joaat("biff"))
											{
												ENTITY::SET_ENTITY_COORDS(iLocal_291, -1027.657f, -486.6945f, 35.9571f, 1, 0, 0, 1);
												ENTITY::SET_ENTITY_HEADING(iLocal_291, 207.7515f);
												VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_291);
												func_318(-1027.657f, -486.6945f, 35.9571f, 207.7515f, 0, 145);
												iLocal_436 = 1;
											}
										}
										if ((((!VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_291)) && !VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iLocal_291))) && !VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iLocal_291))) && !VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iLocal_291))) && !VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(iLocal_291)))
										{
											VEHICLE::DELETE_VEHICLE(&iLocal_291);
											iLocal_436 = 1;
										}
									}
								}
							}
							func_316(&uLocal_654, 0, 0, 2000, 1, 1, 0, 1);
							iLocal_415 = 1;
						}
					}
					if (iLocal_405 == 0)
					{
						PED::ADD_RELATIONSHIP_GROUP("SecGuards", &iLocal_487);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_487);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_487, 1862763509);
						HUD::REQUEST_ADDITIONAL_TEXT("TREV4", 0);
						iLocal_405 = 1;
					}
					if (iLocal_432 == 0)
					{
						if (CUTSCENE::IS_CUTSCENE_PLAYING())
						{
							PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
							PED::CLEAR_PED_BLOOD_DAMAGE(PLAYER::PLAYER_PED_ID());
							PED::RESET_PED_VISIBLE_DAMAGE(PLAYER::PLAYER_PED_ID());
							if (CUTSCENE::GET_CUTSCENE_TIME() > 120000)
							{
								AUDIO::TRIGGER_MUSIC_EVENT("TRV4_START");
								iLocal_432 = 1;
							}
						}
					}
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1012.268f, -480.0742f, 38.9757f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 121.4087f);
						PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 2f, 3000, 0, 1, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
						PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -530524, 0, 0, 0);
					}
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
					{
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					}
					if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
					{
						func_315(61);
						if (iLocal_432 == 0)
						{
							AUDIO::TRIGGER_MUSIC_EVENT("TRV4_START_CS_SKIP");
							iLocal_432 = 1;
						}
						RECORDING::_0x81CBAE94390F9F89();
						func_189(0, 1, 1, 0);
						iLocal_224++;
					}
					break;
				
				case 2:
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_278))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_278, 0))
						{
							if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_278, 1))
							{
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_278);
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_289))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_289, 0))
						{
							if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_289, 1))
							{
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_289);
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_290))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_290, 0))
						{
							if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_290, 1))
							{
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_290);
							}
						}
					}
					func_314();
					iLocal_335 = 0;
					iLocal_224 = 0;
					iLocal_222 = 0;
					iLocal_221 = 2;
					break;
			}
			SYSTEM::WAIT(0);
		}
	}
}

void func_314()//Position - 0x1BB0F
{
	Global_D5E4 = 0;
}

void func_315(int iParam0)//Position - 0x1BB1B
{
	if (Global_154F9 != -1)
	{
		if (iParam0 == Global_154F9)
		{
			Global_154FD = 1;
			return;
		}
	}
}

void func_316(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x1BB3F
{
	int iVar0;
	
	if (iParam4 == 1)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()), 64);
	}
	if (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), !bParam1, 0);
	}
	if (bParam7)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1);
		}
	}
	if (!bParam1 && iParam6)
	{
		CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0, 3, 0);
	}
	else
	{
		CAM::RENDER_SCRIPT_CAMS(bParam1, iParam2, iParam3, 1, 0, 0);
	}
	if (bParam1)
	{
		HUD::CLEAR_HELP(1);
	}
	else
	{
		if (CAM::DOES_CAM_EXIST(uParam0->f_4))
		{
			if (CAM::IS_CAM_ACTIVE(uParam0->f_4))
			{
				CAM::SET_CAM_ACTIVE(uParam0->f_4, 0);
			}
			CAM::DESTROY_CAM(uParam0->f_4, 1);
		}
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
		}
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			ENTITY::SET_ENTITY_VISIBLE(iVar0, 1);
		}
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TOD_SHIFT_SCENE"))
		{
			AUDIO::STOP_SOUND(uParam0->f_A);
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
			AUDIO::STOP_AUDIO_SCENE("TOD_SHIFT_SCENE");
		}
	}
	func_189(bParam1, 1, 0, 0);
	func_317();
	if (!bParam1 && iParam5)
	{
		if (uParam0->f_5)
		{
			CLOCK::SET_CLOCK_TIME(uParam0->f_7, 0, 0);
		}
		else
		{
			CLOCK::SET_CLOCK_TIME(uParam0->f_8, 0, 0);
		}
	}
	if (!bParam1)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(250);
		}
	}
	if (!bParam1)
	{
		if (Global_17C49.f_47C3.f_1099 != -15)
		{
			Global_17C49.f_47C3.f_1099 = func_80();
		}
	}
}

void func_317()//Position - 0x1BCAC
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		HUD::THEFEED_REMOVE_ITEM(Global_17C49.f_306B[iVar0 /*104*/].f_10);
		iVar0++;
	}
}

void func_318(struct<3> Param0, float fParam1, int iParam2, int iParam3)//Position - 0x1BCD8
{
	struct<3> Var0;
	var uVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(Global_164D7.f_4))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_164D7.f_4, 0))
		{
			if (func_327(24) != Global_164D7.f_4)
			{
				if (iParam2 == 1)
				{
					if (func_324(ENTITY::GET_ENTITY_COORDS(Global_164D7.f_4, 1), iParam3, &Var0, &uVar1))
					{
						Param0 = { Var0 };
						fParam1 = uVar1;
					}
				}
				func_319(Global_164D7.f_4, Param0, fParam1, 24, 0);
			}
		}
	}
}

void func_319(int iParam0, struct<3> Param1, float fParam2, int iParam3, bool bParam4)//Position - 0x1BD53
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
		func_323(iParam3);
		Var0.f_9 = 25;
		Var0.f_23 = 2;
		func_39(iParam0, &Var0);
		if (func_68(Param1, 0f, 0f, 0f))
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
		func_321(iParam3, Var0, Param1, fParam2, func_34(iParam0));
		func_320(iParam3, iParam0, 0);
	}
}

void func_320(int iParam0, int iParam1, int iParam2)//Position - 0x1BE7E
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_139(&(Global_10642.f_22B[0 /*21*/]), iParam0))
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
				Global_17C49.f_47C3.f_1099 = func_80();
			}
			if (iParam1 != Global_10642.f_8B[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_327(iParam0);
					if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)) && iParam1 != iVar0)
					{
						func_125(iVar0, 145);
					}
				}
				Global_109CC = iParam1;
				Global_109CD = iParam0;
				Global_109CE = iParam2;
			}
		}
	}
}

void func_321(int iParam0, struct<54> Param1, struct<3> Param2, float fParam3, int iParam4)//Position - 0x1BF9B
{
	if (func_139(&(Global_10642.f_22B[0 /*21*/]), iParam0))
	{
		if (MISC::IS_BIT_SET(Global_10642.f_22B[0 /*21*/].f_9, 10))
		{
			func_322(iParam0);
			func_136(Param1, &(Global_17C49.f_47C3.f_45[Global_10642.f_22B[0 /*21*/].f_E /*54*/]));
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
			func_132(iParam0, 1);
		}
	}
}

void func_322(int iParam0)//Position - 0x1C0A1
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_139(&(Global_10642.f_22B[0 /*21*/]), iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_10642.f_8B[iParam0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_10642.f_8B[iParam0], 1, 1);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_10642.f_8B[iParam0]));
			Global_10642.f_8B[iParam0] = 0;
		}
		if (MISC::IS_BIT_SET(Global_10642.f_22B[0 /*21*/].f_9, 13))
		{
			func_132(iParam0, 0);
		}
	}
}

void func_323(int iParam0)//Position - 0x1C11B
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_322(iParam0);
	func_132(iParam0, 0);
}

int func_324(struct<3> Param0, int iParam1, var uParam2, var uParam3)//Position - 0x1C142
{
	int iVar0;
	
	iVar0 = func_325(Param0, iParam1, 1);
	switch (iVar0)
	{
		case 0:
			*uParam2 = { -827.351f, 157.785f, 68.2143f };
			*uParam3 = 85.1509f;
			return 1;
			break;
		
		case 1:
		case 2:
			*uParam2 = { 1992.523f, 3813.916f, 31.1008f };
			*uParam3 = 122.1498f;
			return 1;
			break;
		
		case 3:
			*uParam2 = { -1184.258f, -1496.556f, 3.3895f };
			*uParam3 = 303.2098f;
			return 1;
			break;
		
		case 4:
			*uParam2 = { 118.1067f, -1325.906f, 28.3706f };
			*uParam3 = 123.5016f;
			return 1;
			break;
		
		case 5:
			*uParam2 = { -18.118f, -1455.126f, 29.5004f };
			*uParam3 = 273.2822f;
			return 1;
			break;
		
		case 6:
			*uParam2 = { 1.5947f, 543.4017f, 173.4644f };
			*uParam3 = 310.7556f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

int func_325(struct<3> Param0, int iParam1, int iParam2)//Position - 0x1C258
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
				if (func_326(iVar0) || iParam2 == 0)
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

bool func_326(int iParam0)//Position - 0x1C2E7
{
	return MISC::IS_BIT_SET(Global_17C49.f_156E[iParam0], 0);
}

int func_327(int iParam0)//Position - 0x1C2FF
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_10642.f_8B[iParam0];
}

void func_328()//Position - 0x1C31B
{
	Global_D5E4 = 1;
}

bool func_329(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x1C327
{
	struct<2> Var0;
	
	func_356(iParam0, &Var0);
	func_355(iParam0, &Var0, &(Var0.f_1));
	return func_330(uParam1, &Var0, bParam2, bParam3, bParam4, bParam5, bParam6);
}

int func_330(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x1C355
{
	int iVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	
	uParam0->f_7 = *uParam1;
	uParam0->f_8 = uParam1->f_1;
	if ((func_388(0) && !bParam2) && !bParam4)
	{
		if (uParam0->f_5)
		{
			CLOCK::SET_CLOCK_TIME(uParam0->f_7, 0, 0);
		}
		else
		{
			CLOCK::SET_CLOCK_TIME(uParam0->f_8, 0, 0);
		}
		return 1;
	}
	if (uParam0->f_2 == 0)
	{
		if (uParam0->f_7 != -1 && uParam0->f_8 != -1)
		{
			if (bParam2 || !func_353(uParam0->f_8, uParam0->f_7))
			{
				if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("TIME_LAPSE", 0))
				{
					uParam0->f_6 = 0;
					uParam0->f_2 = 1;
				}
			}
			else
			{
				uParam0->f_2 = -1;
				return 1;
			}
		}
		else
		{
			uParam0->f_2 = -1;
			return 1;
		}
	}
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	if (uParam0->f_2 == 1)
	{
		if (bParam2)
		{
			CAM::DESTROY_CAM(uParam0->f_4, 0);
			uParam0->f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 0);
			CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_F, 3, 2);
			if (uParam1->f_11 < 0)
			{
				CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_8, uParam1->f_B, uParam1->f_F, 3, 2);
			}
			else
			{
				CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_F, 3, 2);
			}
			CAM::SET_CAM_FOV(uParam0->f_4, uParam1->f_E);
			CAM::SET_CAM_ACTIVE(uParam0->f_4, 1);
			if (!bParam6)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 0);
				}
				iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 0);
					}
					ENTITY::SET_ENTITY_VISIBLE(iVar0, 0);
				}
			}
			uVar1 = CAM::GET_CAM_FAR_CLIP(uParam0->f_4);
			INTERIOR::CLEAR_ROOM_FOR_GAME_VIEWPORT();
			MISC::CLEAR_AREA_OF_COPS(uParam1->f_2, uVar1, 0);
			GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(uParam1->f_2, uVar1);
			GRAPHICS::REMOVE_DECALS_IN_RANGE(uParam1->f_2, uVar1);
			if (bParam3)
			{
				MISC::CLEAR_AREA(uParam1->f_2, 5000f, 1, 1, 0, 0);
			}
			func_352(&(uParam0->f_1), 0, 0, 0, CLOCK::GET_CLOCK_DAY_OF_MONTH(), CLOCK::GET_CLOCK_MONTH(), CLOCK::GET_CLOCK_YEAR());
			func_316(uParam0, 1, 0, 2000, 1, 1, 0, 1);
			uParam0->f_2 = 2;
		}
		else if (!func_353(uParam0->f_7, uParam0->f_8))
		{
			if (uParam0->f_5)
			{
				CAM::DESTROY_CAM(uParam0->f_4, 0);
				uParam0->f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 0);
				CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_F, 3, 2);
				if (uParam1->f_11 < 0)
				{
					CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_8, uParam1->f_B, uParam1->f_F, 3, 2);
				}
				else
				{
					CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_F, 3, 2);
				}
				CAM::SET_CAM_FOV(uParam0->f_4, uParam1->f_E);
				CAM::SET_CAM_ACTIVE(uParam0->f_4, 1);
				if (!bParam6)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
					{
						ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 0);
					}
					iVar2 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar2))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar2, 1, 0);
						}
						ENTITY::SET_ENTITY_VISIBLE(iVar2, 0);
					}
				}
				uVar3 = CAM::GET_CAM_FAR_CLIP(uParam0->f_4);
				INTERIOR::CLEAR_ROOM_FOR_GAME_VIEWPORT();
				MISC::CLEAR_AREA_OF_COPS(uParam1->f_2, uVar3, 0);
				GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(uParam1->f_2, uVar3);
				GRAPHICS::REMOVE_DECALS_IN_RANGE(uParam1->f_2, uVar3);
				if (bParam3)
				{
					MISC::CLEAR_AREA(uParam1->f_2, 5000f, 1, 1, 0, 0);
				}
				func_352(&(uParam0->f_1), 0, 0, 8, CLOCK::GET_CLOCK_DAY_OF_MONTH(), CLOCK::GET_CLOCK_MONTH(), CLOCK::GET_CLOCK_YEAR());
				func_316(uParam0, 1, 0, 2000, 1, 1, 0, 1);
				uParam0->f_2 = 2;
			}
			else
			{
				AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
				uParam0->f_2 = -1;
				return 1;
			}
		}
		else if (!uParam0->f_5)
		{
			CAM::DESTROY_CAM(uParam0->f_4, 0);
			uParam0->f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 0);
			CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_F, 3, 2);
			if (uParam1->f_11 < 0)
			{
				CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_8, uParam1->f_B, uParam1->f_F, 3, 2);
			}
			else
			{
				CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_F, 3, 2);
			}
			CAM::SET_CAM_FOV(uParam0->f_4, uParam1->f_E);
			CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(uParam0->f_4, 3);
			CAM::SET_CAM_ACTIVE(uParam0->f_4, 1);
			if (!bParam6)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 0);
				}
				iVar4 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (ENTITY::DOES_ENTITY_EXIST(iVar4))
				{
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar4))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar4, 1, 0);
					}
					ENTITY::SET_ENTITY_VISIBLE(iVar4, 0);
				}
			}
			uVar5 = CAM::GET_CAM_FAR_CLIP(uParam0->f_4);
			INTERIOR::CLEAR_ROOM_FOR_GAME_VIEWPORT();
			MISC::CLEAR_AREA_OF_COPS(uParam1->f_2, uVar5, 0);
			GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(uParam1->f_2, uVar5);
			GRAPHICS::REMOVE_DECALS_IN_RANGE(uParam1->f_2, uVar5);
			if (bParam3)
			{
				MISC::CLEAR_AREA(uParam1->f_2, 5000f, 0, 1, 0, 0);
			}
			func_352(&(uParam0->f_1), 0, 0, 0, CLOCK::GET_CLOCK_DAY_OF_MONTH(), CLOCK::GET_CLOCK_MONTH(), CLOCK::GET_CLOCK_YEAR());
			func_316(uParam0, 1, 0, 2000, 1, 1, 0, 1);
			uParam0->f_2 = 2;
		}
		else
		{
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
			uParam0->f_2 = -1;
			return 1;
		}
	}
	if (uParam0->f_2 == 2)
	{
		if (bParam3)
		{
			MISC::CLEAR_AREA(uParam1->f_2, 5000f, 0, 1, 0, 0);
		}
		if (!uParam0->f_5)
		{
			if (func_333(uParam0->f_8, 0, &(uParam1->f_12), &(uParam1->f_16), uParam0, -1082130432, 0, 1, 1065353216))
			{
				if (uParam1->f_11 < 0)
				{
					uParam0->f_9 = MISC::GET_GAME_TIMER();
					uParam0->f_2 = 3;
				}
				else
				{
					uParam0->f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 0);
					CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_F, 3, 2);
					CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_8, uParam1->f_B, uParam1->f_F, 3, 2);
					CAM::SET_CAM_FOV(uParam0->f_4, uParam1->f_E);
					CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(uParam0->f_4, 3);
					CAM::SET_CAM_ACTIVE(uParam0->f_4, 1);
					uParam0->f_9 = MISC::GET_GAME_TIMER();
					uParam0->f_2 = 22;
				}
			}
		}
		else if (func_333(uParam0->f_7, 0, &(uParam1->f_12), &(uParam1->f_16), uParam0, -1082130432, 0, 1, 1065353216))
		{
			if (uParam1->f_11 < 0)
			{
				uParam0->f_9 = MISC::GET_GAME_TIMER();
				uParam0->f_2 = 3;
			}
			else
			{
				uParam0->f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 0);
				CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_F, 3, 2);
				CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_8, uParam1->f_B, uParam1->f_F, 3, 2);
				CAM::SET_CAM_FOV(uParam0->f_4, uParam1->f_E);
				CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(uParam0->f_4, 3);
				CAM::SET_CAM_ACTIVE(uParam0->f_4, 1);
				uParam0->f_9 = MISC::GET_GAME_TIMER();
				uParam0->f_2 = 22;
			}
		}
		if (!bParam5)
		{
			if (func_331(1000) || uParam0->f_6)
			{
				uParam0->f_6 = 1;
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(250);
				}
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
					return 0;
				}
				if (uParam0->f_3 != 0)
				{
					func_333(uParam0->f_7, 0, &(uParam1->f_12), &(uParam1->f_16), uParam0, 1f, 0, 1, 1065353216);
				}
				uParam0->f_2 = 4;
			}
		}
	}
	if (uParam0->f_2 == 22)
	{
		if (bParam3)
		{
			MISC::CLEAR_AREA(uParam1->f_2, 5000f, 0, 1, 0, 0);
		}
		if (CAM::DOES_CAM_EXIST(uParam0->f_4) && CAM::IS_CAM_INTERPOLATING(uParam0->f_4))
		{
		}
		else
		{
			uParam0->f_9 = MISC::GET_GAME_TIMER();
			uParam0->f_2 = 3;
		}
		if (!bParam5)
		{
			if (func_331(1000) || uParam0->f_6)
			{
				uParam0->f_6 = 1;
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(250);
				}
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
					return 0;
				}
				uParam0->f_2 = 4;
			}
		}
	}
	if (uParam0->f_2 == 3)
	{
		if (bParam3)
		{
			MISC::CLEAR_AREA(uParam1->f_2, 5000f, 0, 1, 0, 0);
		}
		if (uParam0->f_9 + 1000 > MISC::GET_GAME_TIMER())
		{
			uParam0->f_2 = 4;
		}
	}
	if (uParam0->f_2 == 4)
	{
		uParam0->f_6 = 0;
		uParam0->f_2 = -1;
		return 1;
	}
	if (uParam0->f_2 == -1)
	{
		return 1;
	}
	return 0;
}

int func_331(int iParam0)//Position - 0x1CAFE
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
			if (func_332())
			{
				Global_1A = MISC::GET_GAME_TIMER();
				return 1;
			}
		}
	}
	return 0;
}

int func_332()//Position - 0x1CB48
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

int func_333(int iParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, float fParam5, int iParam6, bool bParam7, float fParam8)//Position - 0x1CB7A
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	
	fVar0 = -1f;
	switch (uParam4->f_3)
	{
		case 0:
			*uParam4 = func_80();
			iVar5 = func_80();
			func_88(&iVar5, iParam0);
			func_89(&iVar5, iParam1);
			func_90(&iVar5, 0);
			if (func_350(*uParam4, iVar5))
			{
				func_349(&iVar5, 0, 0, 0, 1, 0, 0);
			}
			func_347(*uParam4, iVar5, &iVar1, &iVar2, &iVar3, &uVar6, &uVar7, &uVar8);
			uParam4->f_B = ((iVar1 + iVar2 * 60) + (iVar3 + iParam6) * 3600);
			func_340((SYSTEM::TO_FLOAT(uParam4->f_B) / 3600f));
			if (bParam7)
			{
				GRAPHICS::CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(0.6f);
				GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(0);
				GRAPHICS::_0x0AE73D8DF3A762B2(0);
			}
			func_339();
			uParam4->f_A = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(uParam4->f_A, "TIME_LAPSE_MASTER", 0, 1);
			AUDIO::START_AUDIO_SCENE("TOD_SHIFT_SCENE");
			func_317();
			uParam4->f_3++;
			break;
		
		case 1:
		case 2:
			if ((CAM::DOES_CAM_EXIST(uParam4->f_4) && CAM::IS_CAM_INTERPOLATING(uParam4->f_4)) || !(fParam5 >= 0.99f || fParam5 == -1f))
			{
				if (CAM::DOES_CAM_EXIST(uParam4->f_4) && CAM::IS_CAM_INTERPOLATING(uParam4->f_4))
				{
					fVar0 = CAM::GET_CAM_SPLINE_PHASE(uParam4->f_4);
				}
				else if (!(fParam5 >= 0.99f || fParam5 == -1f))
				{
					fVar0 = fParam5;
				}
				else
				{
					fVar0 = -1f;
				}
				if (fVar0 >= 0.5f)
				{
					if (uParam4->f_3 == 1)
					{
						if (MISC::GET_HASH_KEY(sParam2) != 0)
						{
							MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST(sParam2, fParam8);
						}
						if (MISC::GET_HASH_KEY(sParam3) != 0)
						{
							MISC::_CLEAR_CLOUD_HAT();
							MISC::LOAD_CLOUD_HAT(sParam3, 0);
						}
						uParam4->f_3 = 2;
					}
				}
			}
			if (fVar0 >= 0.99f || fVar0 == -1f)
			{
				iVar5 = *uParam4;
				func_349(&iVar5, uParam4->f_B, 0, 0, 0, 0, 0);
				CLOCK::SET_CLOCK_TIME(func_338(iVar5), func_337(iVar5), func_336(iVar5));
				if (bParam7)
				{
					GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
				}
				AUDIO::STOP_SOUND(uParam4->f_A);
				AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
				if (bParam7)
				{
					GRAPHICS::_0x0AE73D8DF3A762B2(1);
					GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(1);
				}
				return 1;
			}
			fVar11 = fVar0;
			fVar9 = 0.1f;
			fVar10 = 0.9f;
			fVar12 = func_335(((fVar11 - fVar9) / (fVar10 - fVar9)), 0f, 1f);
			iVar4 = SYSTEM::ROUND((IntToFloat(uParam4->f_B) * fVar12));
			iVar5 = *uParam4;
			func_349(&iVar5, iVar4, 0, 0, 0, 0, 0);
			CLOCK::SET_CLOCK_TIME(func_338(iVar5), func_337(iVar5), func_336(iVar5));
			if (func_334(iVar5) != CLOCK::GET_CLOCK_DAY_OF_MONTH())
			{
				CLOCK::SET_CLOCK_DATE(func_334(iVar5), func_87(iVar5), func_85(iVar5));
			}
			func_236();
			GRAPHICS::_0xE3E2C1B4C59DBC77(6);
			break;
	}
	return 0;
}

int func_334(int iParam0)//Position - 0x1CE0F
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

float func_335(float fParam0, float fParam1, float fParam2)//Position - 0x1CE21
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

int func_336(int iParam0)//Position - 0x1CE48
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_337(int iParam0)//Position - 0x1CE5B
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_338(int iParam0)//Position - 0x1CE6E
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_339()//Position - 0x1CE81
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	AUDIO::SET_VEH_RADIO_STATION(iVar0, "OFF");
	return 1;
}

void func_340(float fParam0)//Position - 0x1CECD
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_346(&(Global_17C49.f_3FE5.f_AF[iVar0 /*19*/].f_5)))
		{
			func_341(&(Global_17C49.f_3FE5.f_AF[iVar0 /*19*/].f_5), (fParam0 * 60f));
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_346(&(Global_17C49.f_3FE5.f_16A[iVar1 /*3*/])))
		{
			func_341(&(Global_17C49.f_3FE5.f_16A[iVar1 /*3*/]), (fParam0 * 60f));
		}
		iVar1++;
	}
	AUDIO::SKIP_RADIO_FORWARD();
}

void func_341(var uParam0, float fParam1)//Position - 0x1CF5E
{
	if (func_346(uParam0))
	{
		func_342(uParam0, (func_344(uParam0) + fParam1));
	}
}

void func_342(var uParam0, float fParam1)//Position - 0x1CF81
{
	uParam0->f_1 = (func_343(MISC::IS_BIT_SET(*uParam0, 4)) - fParam1);
	MISC::SET_BIT(uParam0, 1);
	MISC::CLEAR_BIT(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_343(bool bParam0)//Position - 0x1CFAF
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

float func_344(var uParam0)//Position - 0x1CFF7
{
	if (func_346(uParam0))
	{
		if (func_345(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_343(MISC::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

bool func_345(var uParam0)//Position - 0x1D036
{
	return MISC::IS_BIT_SET(*uParam0, 2);
}

bool func_346(var uParam0)//Position - 0x1D046
{
	return MISC::IS_BIT_SET(*uParam0, 1);
}

void func_347(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0x1D056
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_350(iParam0, iParam1))
	{
		iVar0 = func_87(iParam1);
		iVar1 = func_85(iParam0);
		iVar2 = (func_85(iParam0) - func_85(iParam1));
		iVar3 = (func_87(iParam0) - func_87(iParam1));
		iVar4 = (func_334(iParam0) - func_334(iParam1));
		iVar5 = (func_338(iParam0) - func_338(iParam1));
		iVar6 = (func_337(iParam0) - func_337(iParam1));
		iVar7 = (func_336(iParam0) - func_336(iParam1));
	}
	else
	{
		iVar0 = func_87(iParam0);
		iVar1 = func_85(iParam1);
		iVar2 = (func_85(iParam1) - func_85(iParam0));
		iVar3 = (func_87(iParam1) - func_87(iParam0));
		iVar4 = (func_334(iParam1) - func_334(iParam0));
		iVar5 = (func_338(iParam1) - func_338(iParam0));
		iVar6 = (func_337(iParam1) - func_337(iParam0));
		iVar7 = (func_336(iParam1) - func_336(iParam0));
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
		iVar4 = (iVar4 + func_84(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_348(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_348(float fParam0, float fParam1, float fParam2)//Position - 0x1D257
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

void func_349(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1D299
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_85(*iParam0);
	iVar1 = func_87(*iParam0);
	iVar2 = func_334(*iParam0);
	iVar3 = func_338(*iParam0);
	iVar4 = func_337(*iParam0);
	iVar5 = func_336(*iParam0);
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
	iVar6 = func_84(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_84(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_352(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_350(int iParam0, int iParam1)//Position - 0x1D41B
{
	int iVar0;
	int iVar1;
	
	if (!func_351(iParam1) || !func_351(iParam0))
	{
		return 1;
	}
	iVar0 = func_85(iParam0);
	iVar1 = func_85(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_87(iParam0);
	iVar1 = func_87(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_334(iParam0);
	iVar1 = func_334(iParam1);
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
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_337(iParam0);
	iVar1 = func_337(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_336(iParam0);
	iVar1 = func_336(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_351(int iParam0)//Position - 0x1D527
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
	iVar0 = func_336(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_337(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_338(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_85(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_87(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_334(iParam0);
	if (iVar5 < 1 || iVar5 > func_84(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_352(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1D603
{
	func_90(uParam0, iParam1);
	func_89(uParam0, iParam2);
	func_88(uParam0, iParam3);
	func_83(uParam0, iParam4);
	func_82(uParam0, iParam5);
	func_81(uParam0, iParam6);
}

bool func_353(int iParam0, int iParam1)//Position - 0x1D63B
{
	return func_354(CLOCK::GET_CLOCK_HOURS(), iParam0, iParam1);
}

int func_354(int iParam0, int iParam1, int iParam2)//Position - 0x1D64F
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == 24)
	{
		iParam1 = 0;
	}
	if (iParam1 < 0 || iParam1 >= 24)
	{
		return 0;
	}
	if (iParam2 == 24)
	{
		iParam2 = 0;
	}
	if (iParam2 < 0 || iParam2 >= 24)
	{
		return 0;
	}
	if (iParam1 == iParam2)
	{
		return 1;
	}
	bVar0 = iParam2 < iParam1;
	iVar1 = iParam1;
	iVar2 = iParam2;
	if (bVar0)
	{
		iVar2 = 24;
	}
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	if (!bVar0)
	{
		return 0;
	}
	iVar1 = 0;
	iVar2 = iParam2;
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	return 0;
}

void func_355(int iParam0, var uParam1, var uParam2)//Position - 0x1D6F8
{
	switch (iParam0)
	{
		case 65:
			*uParam1 = 20;
			*uParam2 = 22;
			break;
		
		case 27:
			*uParam1 = 20;
			*uParam2 = 20;
			break;
		
		default:
			*uParam1 = Global_13D03[iParam0 /*34*/].f_E;
			*uParam2 = Global_13D03[iParam0 /*34*/].f_D;
			break;
	}
}

void func_356(int iParam0, var uParam1)//Position - 0x1D74A
{
	uParam1->f_11 = -1;
	switch (iParam0)
	{
		case 1:
		case 2:
			uParam1->f_2 = { -58.1338f, -1115.653f, 25.8856f };
			uParam1->f_5 = { 18.4907f, 0f, 3.566f };
			uParam1->f_8 = { -58.3857f, -1115.083f, 26.0824f };
			uParam1->f_B = { 18.4907f, 0f, 2.0628f };
			uParam1->f_E = 40.0256f;
			uParam1->f_F = 4000;
			StringCopy(&(uParam1->f_12), "EXTRASUNNY", 16);
			StringCopy(&(uParam1->f_16), "cirrocumulus", 16);
			uParam1->f_10 = 0;
			break;
		
		case 17:
		case 18:
			uParam1->f_2 = { -830.1f, 171.4f, 71.5f };
			uParam1->f_5 = { 17.5f, 0f, -76f };
			uParam1->f_8 = { -829.5f, 171.6f, 71.7f };
			uParam1->f_B = { 17.9f, 0f, -75.4f };
			uParam1->f_E = 47.9931f;
			uParam1->f_F = 6600;
			uParam1->f_10 = 0;
			StringCopy(&(uParam1->f_12), "EXTRASUNNY", 16);
			StringCopy(&(uParam1->f_16), "cirrocumulus", 16);
			break;
		
		case 21:
		case 22:
			uParam1->f_2 = { -776.5807f, 181.1033f, 72.2059f };
			uParam1->f_5 = { 11.8135f, 0f, 95.7275f };
			uParam1->f_8 = { -776.8288f, 181.0926f, 72.2551f };
			uParam1->f_B = { 11.8134f, 0f, 95.7284f };
			uParam1->f_E = 46.7255f;
			uParam1->f_F = 5500;
			uParam1->f_10 = 0;
			StringCopy(&(uParam1->f_12), "EXTRASUNNY", 16);
			StringCopy(&(uParam1->f_16), "cirrocumulus", 16);
			break;
		
		case 20:
			switch (func_91())
			{
				case 0:
					uParam1->f_2 = { -846.3013f, 186.777f, 72.0316f };
					uParam1->f_5 = { 4.202026f, 0f, -111.2882f };
					uParam1->f_8 = { -846.1907f, 186.7339f, 72.0403f };
					uParam1->f_B = { 4.202f, 0f, -111.2882f };
					uParam1->f_E = 47f;
					uParam1->f_F = 5500;
					uParam1->f_10 = 0;
					break;
				
				case 2:
					uParam1->f_2 = { -846.3013f, 186.777f, 72.0316f };
					uParam1->f_5 = { 4.202026f, 0f, -111.2882f };
					uParam1->f_8 = { -846.1907f, 186.7339f, 72.0403f };
					uParam1->f_B = { 4.202f, 0f, -111.2882f };
					uParam1->f_E = 47f;
					uParam1->f_F = 5500;
					uParam1->f_10 = 0;
					break;
			}
			break;
		
		case 40:
			uParam1->f_2 = { -8.0845f, -1450.367f, 36.8585f };
			uParam1->f_5 = { 13.3776f, 0f, 4.513f };
			uParam1->f_8 = { -9.0519f, -1450.444f, 36.8585f };
			uParam1->f_B = { 13.3776f, 0f, 4.513f };
			uParam1->f_E = 39.9659f;
			uParam1->f_F = 7200;
			uParam1->f_10 = 0;
			break;
		
		case 27:
			uParam1->f_2 = { -1576.132f, 5160.888f, 24.1175f };
			uParam1->f_5 = { 4.8389f, -0.011f, 92.1057f };
			uParam1->f_8 = { -1576.132f, 5160.888f, 24.1175f };
			uParam1->f_B = { 4.8389f, -0.011f, 92.1057f };
			uParam1->f_E = 40f;
			uParam1->f_F = 7200;
			uParam1->f_10 = 0;
			break;
		
		case 43:
			uParam1->f_2 = { -7.205f, -1471.656f, 31.1614f };
			uParam1->f_5 = { 9.3776f, 0f, 11.4737f };
			uParam1->f_8 = { -7.2909f, -1471.232f, 31.2546f };
			uParam1->f_B = { 9.3776f, 0f, 11.4737f };
			uParam1->f_E = 38.5265f;
			uParam1->f_F = 5000;
			uParam1->f_10 = 0;
			break;
		
		case 61:
			uParam1->f_2 = { -1060.658f, -464.0052f, 44.994f };
			uParam1->f_5 = { 5.6441f, 0f, -138.7474f };
			uParam1->f_8 = { -1060.658f, -464.0052f, 44.994f };
			uParam1->f_B = { 4.8242f, 0f, -118.3167f };
			uParam1->f_E = 37f;
			uParam1->f_F = 5000;
			uParam1->f_10 = 0;
			break;
		
		case 91:
		case 93:
			uParam1->f_2 = { 1406.112f, 3590.231f, 34.4113f };
			uParam1->f_5 = { 17.5005f, 0f, 55.9579f };
			uParam1->f_8 = { 1405.673f, 3590.525f, 34.4113f };
			uParam1->f_B = { 18.4979f, 0f, 55.9579f };
			uParam1->f_E = 56.3199f;
			uParam1->f_F = 6000;
			uParam1->f_10 = 0;
			break;
		
		case 69:
		case 86:
		case 90:
			uParam1->f_2 = { 739.1493f, -990.3961f, 29.85194f };
			uParam1->f_5 = { 17.19917f, 0f, 44.21184f };
			uParam1->f_8 = { 738.4197f, -989.6462f, 30.17581f };
			uParam1->f_B = { 17.19917f, 0f, 44.21184f };
			uParam1->f_E = 47.56362f;
			uParam1->f_F = 6000;
			StringCopy(&(uParam1->f_12), "EXTRASUNNY", 16);
			StringCopy(&(uParam1->f_16), "cirrocumulus", 16);
			uParam1->f_10 = 0;
			break;
		
		case 70:
			uParam1->f_2 = { 2503.9f, -288.8f, 112.8f };
			uParam1->f_5 = { -0.2f, 0f, -169.6f };
			uParam1->f_8 = { 2503.9f, -288.8f, 112.8f };
			uParam1->f_B = { -0.2f, 0f, -169.6f };
			uParam1->f_E = 47.6f;
			uParam1->f_F = 5000;
			StringCopy(&(uParam1->f_12), "EXTRASUNNY", 16);
			StringCopy(&(uParam1->f_16), "cirrocumulus", 16);
			uParam1->f_10 = 1;
			break;
		
		case 45:
			uParam1->f_2 = { -458.5666f, 1010.097f, 316.3736f };
			uParam1->f_5 = { 14.47186f, 0f, -18.28884f };
			uParam1->f_8 = { -457.3f, 1011.6f, 316.9f };
			uParam1->f_B = { 14.5f, 0f, -18.5f };
			uParam1->f_E = 50f;
			uParam1->f_F = 6000;
			uParam1->f_10 = 0;
			break;
		
		case 49:
			uParam1->f_2 = { -723.9982f, -155.7184f, 38.12362f };
			uParam1->f_5 = { 30.12048f, 0f, -99.11243f };
			uParam1->f_8 = { -722.4385f, -155.7817f, 37.4443f };
			uParam1->f_B = { 2.0429f, 0f, -101.5132f };
			uParam1->f_E = 45f;
			uParam1->f_F = 6000;
			uParam1->f_10 = 0;
			break;
		
		case 9:
			switch (func_91())
			{
				case 2:
					uParam1->f_2 = { 416.3221f, -960.2586f, 30.6696f };
					uParam1->f_5 = { 21.5747f, 0f, -135.2969f };
					uParam1->f_8 = { 416.8894f, -960.832f, 30.9887f };
					uParam1->f_B = { 21.9916f, 0f, -135.2969f };
					uParam1->f_E = 47.1057f;
					uParam1->f_F = 6000;
					uParam1->f_10 = 0;
					break;
				
				case 1:
					uParam1->f_2 = { 1393.363f, -2052.581f, 65.4054f };
					uParam1->f_5 = { 2.5107f, 0f, 51.1167f };
					uParam1->f_8 = { 1393.456f, -2052.656f, 68.146f };
					uParam1->f_B = { 2.5107f, 0f, 51.1167f };
					uParam1->f_E = 35.9859f;
					uParam1->f_F = 6000;
					uParam1->f_10 = 0;
					break;
			}
			break;
		
		case 30:
			uParam1->f_2 = { 59.3f, -751.7f, 46.8f };
			uParam1->f_5 = { 61.9f, 0f, -63.8f };
			uParam1->f_8 = { 59.3f, -751.7f, 46.8f };
			uParam1->f_B = { 61.9f, 0f, -63.8f };
			uParam1->f_E = 46.6f;
			uParam1->f_F = 6000;
			uParam1->f_10 = 0;
			break;
		
		case 39:
			uParam1->f_2 = { 3841.93f, 4464.658f, 2.6587f };
			uParam1->f_5 = { 8.4859f, 0.0024f, 143.0775f };
			uParam1->f_8 = { 3842.54f, 4464.184f, 2.6587f };
			uParam1->f_B = { 8.4859f, 0.0024f, 142.0089f };
			uParam1->f_E = 34.1544f;
			uParam1->f_F = 3000;
			uParam1->f_10 = 0;
			break;
		
		case 71:
			uParam1->f_2 = { -1193.1f, -1525.3f, 4.4f };
			uParam1->f_5 = { 9.4f, 0f, -78.8f };
			uParam1->f_8 = { -1192.2f, -1525.1f, 4.4f };
			uParam1->f_B = { 9.4f, 0f, -78.5f };
			uParam1->f_E = 30.4f;
			uParam1->f_F = 6000;
			uParam1->f_10 = 0;
			break;
		
		case 74:
			uParam1->f_2 = { -24.2f, -2417.6f, 7.8f };
			uParam1->f_5 = { 10.4f, 0f, 80.4f };
			uParam1->f_8 = { -23.8f, -2414.8f, 7.8f };
			uParam1->f_B = { 10.4f, 0f, 81.4f };
			uParam1->f_E = 48.1095f;
			uParam1->f_F = 6000;
			uParam1->f_10 = 0;
			break;
		
		case 84:
		case 85:
		case 65:
			uParam1->f_2 = { 146.9733f, -1310.644f, 30.85177f };
			uParam1->f_5 = { 16.26885f, -2.1E-05f, 45.00475f };
			uParam1->f_8 = { 146.9733f, -1310.644f, 30.85177f };
			uParam1->f_B = { 16.26885f, -2.1E-05f, 45.00475f };
			uParam1->f_E = 39.4027f;
			uParam1->f_F = 6000;
			uParam1->f_10 = 0;
			break;
		
		case 62:
		case 15:
		case 16:
			uParam1->f_2 = { 1998.215f, 3816.983f, 33.0117f };
			uParam1->f_5 = { 5.9088f, 0f, 89.1989f };
			uParam1->f_8 = { 1997.154f, 3817.004f, 33.1215f };
			uParam1->f_B = { 5.9088f, 0f, 89.1989f };
			uParam1->f_E = 36.8186f;
			uParam1->f_F = 6000;
			uParam1->f_10 = 0;
			if (iParam0 == 62)
			{
				if (func_91() != 2)
				{
					uParam1->f_2 = { 0f, 0f, 0f };
					uParam1->f_5 = { 0f, 0f, 0f };
					uParam1->f_8 = { 0f, 0f, 0f };
					uParam1->f_B = { 0f, 0f, 0f };
					uParam1->f_E = -1f;
					uParam1->f_F = -1;
					uParam1->f_10 = 0;
				}
			}
			break;
		
		case 63:
			uParam1->f_2 = { 1576f, 3363.9f, 55.5f };
			uParam1->f_5 = { 0.5f, 0f, -123.8f };
			uParam1->f_8 = { 1575.2f, 3364.4f, 49.2f };
			uParam1->f_B = { -4.3f, 0f, -124.1f };
			uParam1->f_E = 50f;
			uParam1->f_F = 8000;
			uParam1->f_10 = 0;
			break;
		
		case 64:
			uParam1->f_2 = { 1566f, 3378.8f, 42.8f };
			uParam1->f_5 = { -2.4f, 0f, -126.3f };
			uParam1->f_8 = { 1567.6f, 3376.9f, 45f };
			uParam1->f_B = { 1.6f, 0f, -124.6f };
			uParam1->f_E = 34.7f;
			uParam1->f_F = 8000;
			uParam1->f_10 = 0;
			break;
		
		case 24:
			uParam1->f_2 = { 1339.573f, -2550.873f, 56.28254f };
			uParam1->f_5 = { -2.348373f, -2.1E-05f, 159.736f };
			uParam1->f_8 = { 1334.491f, -2549.345f, 47.69109f };
			uParam1->f_B = { 2.789334f, -2.1E-05f, -156.4397f };
			uParam1->f_E = 25.66f;
			uParam1->f_F = 8000;
			uParam1->f_10 = 0;
			break;
		
		case 25:
			uParam1->f_2 = { 2383.651f, 2624.787f, 46.9527f };
			uParam1->f_5 = { 14.6191f, 0f, 64.366f };
			uParam1->f_8 = { 2383.929f, 2622.802f, 47.2707f };
			uParam1->f_B = { 33.17714f, -0.13073f, 12.31436f };
			uParam1->f_E = 35.31843f;
			uParam1->f_F = 6000;
			uParam1->f_10 = 0;
			break;
		
		case 26:
			uParam1->f_2 = { 1755.519f, -1474.981f, 126.1743f };
			uParam1->f_5 = { 4.5341f, 0f, 89.6405f };
			uParam1->f_8 = { 1772.26f, -1475.085f, 125.9465f };
			uParam1->f_B = { 5.8327f, 0f, 89.6405f };
			uParam1->f_E = 32.7f;
			uParam1->f_F = 6500;
			uParam1->f_10 = 0;
			break;
		
		case 3:
			uParam1->f_2 = { -1514.257f, -947.7281f, 15.0253f };
			uParam1->f_5 = { -3.5807f, -0.0001f, -46.3209f };
			uParam1->f_8 = { -1512.601f, -949.2796f, 14.8827f };
			uParam1->f_B = { -4.7682f, -0.0001f, -34.1393f };
			uParam1->f_E = 29.9555f;
			uParam1->f_F = 6000;
			uParam1->f_10 = 0;
			break;
		
		case 4:
			uParam1->f_2 = { -698.2578f, -934.4238f, 31.6909f };
			uParam1->f_5 = { -22.0467f, 0f, 32.1888f };
			uParam1->f_8 = { -697.8695f, -935.0406f, 31.9861f };
			uParam1->f_B = { -20.6093f, 0f, 32.1888f };
			uParam1->f_E = 30f;
			uParam1->f_F = 6000;
			uParam1->f_10 = 0;
			break;
		
		case 5:
			uParam1->f_2 = { 221.8613f, -830.6434f, 45.3154f };
			uParam1->f_5 = { -13.9263f, 0f, 140.7092f };
			uParam1->f_8 = { 227.5233f, -832.8285f, 45.3154f };
			uParam1->f_B = { -13.9263f, 0f, 140.7092f };
			uParam1->f_E = 35f;
			uParam1->f_F = 6000;
			uParam1->f_10 = 0;
			break;
		
		case 6:
			uParam1->f_2 = { -23.3747f, -120.3161f, 64.139f };
			uParam1->f_5 = { -5.7232f, 0f, 5.1015f };
			uParam1->f_8 = { -22.5824f, -122.52f, 64.139f };
			uParam1->f_B = { -5.7232f, 0f, 6.6362f };
			uParam1->f_E = 35f;
			uParam1->f_F = 6000;
			uParam1->f_10 = 0;
			break;
		
		case 7:
			uParam1->f_2 = { 803.5977f, -1075.869f, 37.1981f };
			uParam1->f_5 = { -10.7685f, 0f, -38.1705f };
			uParam1->f_8 = { 803.5977f, -1075.869f, 32.7981f };
			uParam1->f_B = { -10.7685f, 0f, -38.1705f };
			uParam1->f_E = 35f;
			uParam1->f_F = 6000;
			uParam1->f_10 = 0;
			break;
		
		default:
			uParam1->f_2 = { 0f, 0f, 0f };
			uParam1->f_5 = { 0f, 0f, 0f };
			uParam1->f_8 = { 0f, 0f, 0f };
			uParam1->f_B = { 0f, 0f, 0f };
			uParam1->f_E = -1f;
			uParam1->f_F = -1;
			uParam1->f_10 = 0;
			break;
	}
	if (MISC::GET_HASH_KEY("RAIN") == MISC::GET_PREV_WEATHER_TYPE_HASH_NAME())
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_12)))
		{
			StringCopy(&(uParam1->f_12), "EXTRASUNNY", 16);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_16)))
		{
			StringCopy(&(uParam1->f_16), "cirrocumulus", 16);
		}
	}
}

bool func_357()//Position - 0x1E633
{
	bool bVar0;
	
	bVar0 = CUTSCENE::HAS_CUTSCENE_LOADED();
	if (!Global_10A94)
	{
		if (!bVar0)
		{
			Global_10A94 = 1;
		}
	}
	return bVar0;
}

void func_358()//Position - 0x1E656
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	if (!func_23())
	{
		if (func_388(0))
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
			STREAMING::REQUEST_MODEL(joaat("rapidgt"));
			STREAMING::REQUEST_MODEL(joaat("surano"));
			STREAMING::REQUEST_MODEL(joaat("carbonizzare"));
			while ((!STREAMING::HAS_MODEL_LOADED(joaat("rapidgt")) || !STREAMING::HAS_MODEL_LOADED(joaat("surano"))) || !STREAMING::HAS_MODEL_LOADED(joaat("carbonizzare")))
			{
				SYSTEM::WAIT(0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_278))
			{
				MISC::CLEAR_AREA(Local_305, 5f, 1, 0, 0, 0);
				iLocal_278 = VEHICLE::CREATE_VEHICLE(joaat("rapidgt"), Local_305, fLocal_318, 1, 1);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_278, 112, 112);
				ENTITY::SET_ENTITY_HEALTH(iLocal_278, 3000);
				VEHICLE::SET_VEHICLE_STRONG(iLocal_278, 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("rapidgt"));
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("rapidgt"), 1);
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_278, 1);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_278, 1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_289))
			{
				if (STREAMING::HAS_MODEL_LOADED(joaat("surano")))
				{
					MISC::CLEAR_AREA(-1037.398f, -491.6539f, 35.5545f, 5f, 1, 0, 0, 0);
					iLocal_289 = VEHICLE::CREATE_VEHICLE(joaat("surano"), -1037.398f, -491.6539f, 35.5545f, 208.889f, 1, 1);
					VEHICLE::SET_VEHICLE_COLOURS(iLocal_289, 0, 0);
					ENTITY::SET_ENTITY_HEALTH(iLocal_289, 3000);
					VEHICLE::SET_VEHICLE_STRONG(iLocal_289, 1);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("surano"));
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("surano"), 1);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_289, 1);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_290))
			{
				if (STREAMING::HAS_MODEL_LOADED(joaat("carbonizzare")))
				{
					MISC::CLEAR_AREA(Local_305, 5f, 1, 0, 0, 0);
					iLocal_290 = VEHICLE::CREATE_VEHICLE(joaat("carbonizzare"), -1033.938f, -489.7475f, 35.8323f, 207.1758f, 1, 1);
					VEHICLE::SET_VEHICLE_COLOURS(iLocal_290, 89, 89);
					ENTITY::SET_ENTITY_HEALTH(iLocal_290, 3000);
					VEHICLE::SET_VEHICLE_STRONG(iLocal_290, 1);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("carbonizzare"));
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("carbonizzare"), 1);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_290, 1);
				}
			}
		}
		iLocal_222 = 0;
		iLocal_224 = 0;
		iLocal_342 = 0;
		iLocal_221 = 1;
	}
	else
	{
		PED::ADD_RELATIONSHIP_GROUP("SecGuards", &iLocal_487);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_487);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_487, 1862763509);
		if (Global_14A40 == 1)
		{
			if (func_361() == 0)
			{
				func_360(Local_315, fLocal_322, 1, 0);
				iLocal_222 = 0;
				iLocal_342 = 1;
				AUDIO::TRIGGER_MUSIC_EVENT("TRV4_START_RT");
				iLocal_221 = 3;
			}
			if (func_361() == 1)
			{
				func_360(-935.4413f, -2928.061f, 12.9451f, 178.466f, 1, 0);
				iLocal_222 = 0;
				iLocal_342 = 1;
				AUDIO::TRIGGER_MUSIC_EVENT("TRV4_FOOT_CHASE_RT");
				iLocal_221 = 5;
			}
			if (func_361() == 2)
			{
				func_360(-937.5466f, -2968.713f, 12.9451f, 111.5016f, 1, 0);
				iLocal_222 = 0;
				iLocal_342 = 1;
				AUDIO::TRIGGER_MUSIC_EVENT("TRV4_EVADE_RT");
				iLocal_221 = 8;
			}
			if (func_361() == 3)
			{
				func_360(-920.0547f, -2744.661f, 12.9322f, 357.1374f, 1, 0);
				func_359();
			}
		}
		else
		{
			if (func_361() == 0)
			{
				func_360(-1019.579f, -484.872f, 36.0795f, 93.7701f, 1, 0);
				iLocal_222 = 0;
				iLocal_342 = 1;
				AUDIO::TRIGGER_MUSIC_EVENT("TRV4_START_RT");
				iLocal_221 = 2;
			}
			if (func_361() == 1)
			{
				func_360(Local_315, fLocal_322, 1, 0);
				iLocal_222 = 0;
				iLocal_342 = 1;
				AUDIO::TRIGGER_MUSIC_EVENT("TRV4_START_RT");
				iLocal_221 = 3;
			}
			if (func_361() == 2)
			{
				func_360(-935.4413f, -2928.061f, 12.9451f, 178.466f, 1, 0);
				iLocal_222 = 0;
				iLocal_342 = 1;
				AUDIO::TRIGGER_MUSIC_EVENT("TRV4_FOOT_CHASE_RT");
				iLocal_221 = 5;
			}
			if (func_361() == 3)
			{
				func_360(-937.5466f, -2968.713f, 12.9451f, 111.5016f, 1, 0);
				iLocal_222 = 0;
				iLocal_342 = 1;
				AUDIO::TRIGGER_MUSIC_EVENT("TRV4_EVADE_RT");
				iLocal_221 = 8;
			}
		}
		HUD::REQUEST_ADDITIONAL_TEXT("TREV4", 0);
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
		{
			SYSTEM::WAIT(0);
		}
	}
}

void func_359()//Position - 0x1EA3D
{
	if (iLocal_222 == 0)
	{
		MISC::CLEAR_AREA(-920.0547f, -2744.662f, 12.8434f, 20f, 1, 0, 0, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
		iLocal_222++;
	}
	if (iLocal_222 == 1)
	{
		STREAMING::LOAD_SCENE(-920.0547f, -2744.662f, 12.8434f);
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			func_21(0, -1, 1);
			CAM::DO_SCREEN_FADE_IN(800);
		}
		func_6();
	}
}

void func_360(struct<3> Param0, float fParam1, int iParam2, int iParam3)//Position - 0x1EAB7
{
	if (func_23())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
		MISC::CLEAR_BIT(&(Global_15F6A.f_14), 2);
		MISC::SET_GAME_PAUSED(1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
		}
		Global_15F66 = { Param0 };
		Global_15F69 = fParam1;
		Global_15F65 = 1;
		if (iParam2 == 1)
		{
			MISC::SET_BIT(&(Global_15F6A.f_14), 14);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_15F6A.f_14), 14);
		}
		if (iParam3 == 1)
		{
			MISC::SET_BIT(&(Global_15F6A.f_14), 24);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_15F6A.f_14), 24);
		}
		func_22(1);
	}
}

int func_361()//Position - 0x1EB4C
{
	if (!Global_15F6A == 10 && !Global_15F6A == 9)
	{
		return 0;
	}
	return Global_15F6A.f_2;
}

void func_362()//Position - 0x1EB76
{
	if (iLocal_434[0] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_203[7]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[7], 0))
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_203[7], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_434[0] = 1;
			}
		}
	}
	if (iLocal_435[0] == 0)
	{
		if (iLocal_434[0] == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_203[7]))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[7], 0))
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_203[7], 0);
					iLocal_435[0] = 1;
				}
				else if (iLocal_221 == 5)
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_203[7], 0);
					iLocal_435[0] = 1;
				}
			}
			else
			{
				iLocal_435[0] = 1;
			}
		}
	}
	if (iLocal_434[1] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_203[8]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[8], 0))
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_203[8], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_434[1] = 1;
			}
		}
	}
	if (iLocal_435[1] == 0)
	{
		if (iLocal_434[1] == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_203[8]))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[8], 0))
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_203[8], 0);
					iLocal_435[1] = 1;
				}
				else if (iLocal_221 == 5)
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_203[8], 0);
					iLocal_435[1] = 1;
				}
			}
			else
			{
				iLocal_435[1] = 1;
			}
		}
	}
	if (iLocal_434[2] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_203[11]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[11], 0))
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_203[11], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_434[2] = 1;
			}
		}
	}
	if (iLocal_435[2] == 0)
	{
		if (iLocal_434[2] == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_203[11]))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[11], 0))
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_203[11], 0);
					iLocal_435[2] = 1;
				}
				else if (iLocal_221 == 5)
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_203[11], 0);
					iLocal_435[2] = 1;
				}
			}
			else
			{
				iLocal_435[2] = 1;
			}
		}
	}
	if (iLocal_434[3] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_203[12]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[12], 0))
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_203[12], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_434[3] = 1;
			}
		}
	}
	if (iLocal_435[3] == 0)
	{
		if (iLocal_434[3] == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_203[12]))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[12], 0))
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_203[12], 0);
					iLocal_435[3] = 1;
				}
				else if (iLocal_221 == 5)
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_203[12], 0);
					iLocal_435[3] = 1;
				}
			}
			else
			{
				iLocal_435[3] = 1;
			}
		}
	}
	if (iLocal_434[4] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_203[13]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[13], 0))
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_203[13], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_434[4] = 1;
			}
		}
	}
	if (iLocal_435[4] == 0)
	{
		if (iLocal_434[4] == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_203[13]))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[13], 0))
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_203[13], 0);
					iLocal_435[4] = 1;
				}
				else if (iLocal_221 == 5)
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_203[13], 0);
					iLocal_435[4] = 1;
				}
			}
			else
			{
				iLocal_435[4] = 1;
			}
		}
	}
	if (iLocal_434[5] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_203[14]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[14], 0))
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_203[14], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_434[5] = 1;
			}
		}
	}
	if (iLocal_435[5] == 0)
	{
		if (iLocal_434[5] == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_203[14]))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[14], 0))
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_203[14], 0);
					iLocal_435[5] = 1;
				}
				else if (iLocal_221 == 5)
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_203[14], 0);
					iLocal_435[5] = 1;
				}
			}
			else
			{
				iLocal_435[5] = 1;
			}
		}
	}
	if (iLocal_434[6] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_203[15]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[15], 0))
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_203[15], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_434[6] = 1;
			}
		}
	}
	if (iLocal_435[6] == 0)
	{
		if (iLocal_434[6] == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_203[15]))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[15], 0))
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_203[15], 0);
					iLocal_435[6] = 1;
				}
				else if (iLocal_221 == 5)
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_203[15], 0);
					iLocal_435[6] = 1;
				}
			}
			else
			{
				iLocal_435[6] = 1;
			}
		}
	}
}

void func_363()//Position - 0x1F01D
{
	switch (iLocal_221)
	{
		case 2:
			if (iLocal_222 > 0)
			{
				if (iLocal_226 == 0)
				{
					iLocal_361 = 0;
					iLocal_448 = 0;
					iLocal_471 = 0;
					iLocal_472 = 0;
					func_17(&uLocal_489, 1, 0, "Devin", 0, 1);
					func_17(&uLocal_489, 0, PLAYER::PLAYER_PED_ID(), "Michael", 0, 1);
					iLocal_226 = 1;
				}
				if (iLocal_226 == 1)
				{
					if (iLocal_361 == 0)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_317, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) > 2f)
						{
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
							{
								if (func_227(&uLocal_489, "T1M4AUD", "T1M4_CHASE", 3, 0, 0, 0))
								{
									iLocal_361 = 1;
								}
							}
						}
					}
					if (iLocal_448 == 0)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_317, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) > 100f)
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
								if (func_366(&uLocal_489, 29, "T1M4AUD", "SOL3_DEVCALL", 7, 0, 0, 1))
								{
									RECORDING::_0x293220DA1B46CEBC(4f, 10f, 4);
									iLocal_448 = 1;
								}
							}
						}
					}
					if (iLocal_471 == 0 && iLocal_448 == 1)
					{
						if (func_365())
						{
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
							{
								if (func_227(&uLocal_489, "T1M4AUD", "T1M4_REACT", 3, 0, 0, 0))
								{
									iLocal_471 = 1;
								}
							}
						}
					}
					if (iLocal_472 == 0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_277))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_277, 0))
							{
								if (func_16(PLAYER::PLAYER_PED_ID(), iLocal_277, 1) < 200f && ENTITY::IS_ENTITY_ON_SCREEN(iLocal_277))
								{
									if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
									{
										if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
										{
											if (func_227(&uLocal_489, "T1M4AUD", "T1M4_CHASE2", 3, 0, 0, 0))
											{
												RECORDING::_0x293220DA1B46CEBC(3f, 12f, 4);
												iLocal_472 = 1;
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 4:
			if (iLocal_222 >= 0)
			{
				if (iLocal_226 == 0)
				{
					iLocal_449[0] = 0;
					iLocal_449[1] = 0;
					iLocal_449[2] = 0;
					iLocal_449[3] = 0;
					iLocal_468 = 0;
					iLocal_469 = 0;
					iLocal_470 = 0;
					iLocal_473 = 0;
					iLocal_474 = 0;
					iLocal_475 = 0;
					iLocal_476 = 0;
					iLocal_477 = 0;
					iLocal_240 = MISC::GET_GAME_TIMER();
					func_17(&uLocal_489, 0, PLAYER::PLAYER_PED_ID(), "Michael", 0, 1);
					func_17(&uLocal_489, 4, 0, "SOL3COP", 0, 1);
					iLocal_226 = 1;
				}
				if (iLocal_226 == 1)
				{
					if (iLocal_472 == 0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_277))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_277, 0))
							{
								if (func_16(PLAYER::PLAYER_PED_ID(), iLocal_277, 1) < 200f && ENTITY::IS_ENTITY_ON_SCREEN(iLocal_277))
								{
									if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
									{
										if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
										{
											if (func_227(&uLocal_489, "T1M4AUD", "T1M4_CHASE2", 3, 0, 0, 0))
											{
												iLocal_472 = 1;
											}
										}
									}
								}
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_277))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_277, 0))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_277))
							{
								if (iLocal_449[0] == 0)
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[7], 0) || VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[8], 0))
									{
										if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) > 7000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) < 28000f)
										{
											if (!func_226())
											{
												if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
												{
													if (func_227(&uLocal_489, "T1M4AUD", "T1M4_POLICE", 7, 0, 0, 0))
													{
														iLocal_449[0] = 1;
													}
												}
											}
										}
									}
								}
								if (iLocal_449[1] == 0)
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[7], 0) || VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[8], 0))
									{
										if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) > 28000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) < 34500f)
										{
											if (!func_226())
											{
												if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
												{
													if (func_227(&uLocal_489, "T1M4AUD", "T1M4_POLICE2", 7, 0, 0, 0))
													{
														RECORDING::_0x293220DA1B46CEBC(4f, 4f, 4);
														iLocal_449[1] = 1;
													}
												}
											}
										}
									}
								}
								if (iLocal_449[2] == 0)
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[7], 0) || VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[8], 0))
									{
										if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) > 36000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) < 41000f)
										{
											if (!func_226())
											{
												if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
												{
													if (func_227(&uLocal_489, "T1M4AUD", "T1M4_POLICE3", 7, 0, 0, 0))
													{
														RECORDING::_0x293220DA1B46CEBC(2f, 4f, 4);
														iLocal_449[2] = 1;
													}
												}
											}
										}
									}
								}
								if (iLocal_469 == 0)
								{
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) > 41000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) < 43500f)
									{
										if (ENTITY::DOES_ENTITY_EXIST(iLocal_282) && ENTITY::IS_ENTITY_ON_SCREEN(iLocal_282))
										{
											if (!func_226())
											{
												if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
												{
													if (func_227(&uLocal_489, "T1M4AUD", "T1M4_BOOM", 7, 0, 0, 0))
													{
														RECORDING::_0x293220DA1B46CEBC(4f, 4f, 4);
														iLocal_469 = 1;
													}
												}
											}
										}
									}
								}
								if (iLocal_470 == 0)
								{
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) > 50509f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) < 50872f)
									{
										if (ENTITY::DOES_ENTITY_EXIST(iLocal_282) && ENTITY::IS_ENTITY_ON_SCREEN(iLocal_282))
										{
											if (!func_226())
											{
												if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
												{
													if (func_227(&uLocal_489, "T1M4AUD", "T1M4_BLOW", 7, 0, 0, 0))
													{
														iLocal_470 = 1;
													}
												}
											}
										}
									}
								}
								if (iLocal_449[3] == 0)
								{
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) > 58000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) < 68000f)
									{
										if (!func_226())
										{
											if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
											{
												if (func_227(&uLocal_489, "T1M4AUD", "T1M4_POLICE4", 7, 0, 0, 0))
												{
													iLocal_449[3] = 1;
												}
											}
										}
									}
								}
								if (iLocal_473 == 0 && iLocal_449[3] == 1)
								{
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) < 76000f)
									{
										if (!func_226())
										{
											if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
											{
												if (func_227(&uLocal_489, "T1M4AUD", "T1M4_CHASE3", 7, 0, 0, 0))
												{
													iLocal_473 = 1;
												}
											}
										}
									}
								}
								if (iLocal_468 == 0)
								{
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) > 80000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) < 82000f)
									{
										if (ENTITY::DOES_ENTITY_EXIST(iLocal_279[0]))
										{
											if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_279[0], 0))
											{
												if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_279[0]))
												{
													if (!func_226())
													{
														if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
														{
															if (func_227(&uLocal_489, "T1M4AUD", "T1M4_CHASE4", 7, 0, 0, 0))
															{
																RECORDING::_0x293220DA1B46CEBC(3f, 10f, 4);
																iLocal_468 = 1;
															}
														}
													}
												}
											}
										}
									}
								}
								if (iLocal_474 == 0)
								{
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) > 82100f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) < 83500f)
									{
										if (ENTITY::DOES_ENTITY_EXIST(iLocal_203[11]))
										{
											if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_203[11]))
											{
												if (!func_226())
												{
													if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
													{
														if (func_227(&uLocal_489, "T1M4AUD", "T1M4_CHASE5", 7, 0, 0, 0))
														{
															iLocal_474 = 1;
														}
													}
												}
											}
										}
										else if (ENTITY::DOES_ENTITY_EXIST(iLocal_203[12]))
										{
											if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_203[12]))
											{
												if (!func_226())
												{
													if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
													{
														if (func_227(&uLocal_489, "T1M4AUD", "T1M4_CHASE5", 7, 0, 0, 0))
														{
															iLocal_474 = 1;
														}
													}
												}
											}
										}
									}
								}
								if (iLocal_477 == 0)
								{
									if ((VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) > 101891f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) < 105000f) && ENTITY::IS_ENTITY_ON_SCREEN(iLocal_277))
									{
										if (!func_226())
										{
											if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
											{
												if (func_227(&uLocal_489, "T1M4AUD", "T1M4_CHASE7", 7, 0, 0, 0))
												{
													RECORDING::_0x293220DA1B46CEBC(3f, 10f, 4);
													iLocal_477 = 1;
												}
											}
										}
									}
								}
								if (((VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) > 105500f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) < 119000f) && MISC::GET_GAME_TIMER() > iLocal_240 + 7000) && iLocal_476 == 0)
								{
									if (!func_226())
									{
										if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
										{
											if (func_227(&uLocal_489, "T1M4AUD", "T1M4_POLICE5", 7, 0, 0, 0))
											{
												iLocal_240 = MISC::GET_GAME_TIMER();
												iLocal_476 = 1;
											}
										}
									}
								}
								if (iLocal_475 == 0 && iLocal_476 == 1)
								{
									if (!func_226())
									{
										if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
										{
											if (func_227(&uLocal_489, "T1M4AUD", "T1M4_CHASE6", 7, 0, 0, 0))
											{
												iLocal_475 = 1;
											}
										}
									}
								}
								if (((VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) > 105500f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) < 119000f) && MISC::GET_GAME_TIMER() > iLocal_240 + 7000) && iLocal_475 == 1)
								{
									if (!func_226())
									{
										if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
										{
											if (func_227(&uLocal_489, "T1M4AUD", "T1M4_POLICE5", 7, 0, 0, 0))
											{
												iLocal_240 = MISC::GET_GAME_TIMER();
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 5:
			if (iLocal_222 > 0)
			{
				if (iLocal_226 == 0)
				{
					iLocal_451 = 0;
					iLocal_478 = 0;
					iLocal_484 = 0;
					iLocal_479 = 1;
					iLocal_245 = MISC::GET_GAME_TIMER();
					func_17(&uLocal_489, 0, PLAYER::PLAYER_PED_ID(), "Michael", 0, 1);
					if (!PED::IS_PED_INJURED(iLocal_263))
					{
						func_17(&uLocal_489, 2, iLocal_263, "MOLLY", 0, 1);
					}
					iLocal_226 = 1;
				}
				if (iLocal_226 == 1)
				{
					if (iLocal_484 == 0)
					{
						AUDIO::PLAY_AMBIENT_SPEECH_FROM_POSITION_NATIVE("T1M4_BBAA", "AIRPORTANNO", -939.5f, -2932.2f, 16f, "SPEECH_PARAMS_FORCE_FRONTEND");
						iLocal_484 = 1;
					}
					if (iLocal_479 == 1)
					{
						if (iLocal_451 == 0)
						{
							if (!func_226())
							{
								if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
								{
									if (func_227(&uLocal_489, "T1M4AUD", "SOL3_RUNS", 7, 0, 0, 0))
									{
										RECORDING::_0x293220DA1B46CEBC(4f, 6f, 4);
										iLocal_241 = MISC::GET_GAME_TIMER();
										iLocal_451 = 1;
										iLocal_478 = 1;
										iLocal_479 = 0;
									}
								}
							}
						}
						if (MISC::GET_GAME_TIMER() > iLocal_241 + 5000)
						{
							if (!func_226())
							{
								if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
								{
									if (func_227(&uLocal_489, "T1M4AUD", "SOL3_RUNS", 7, 0, 0, 0))
									{
										RECORDING::_0x293220DA1B46CEBC(4f, 6f, 4);
										iLocal_241 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					}
					if (iLocal_478 == 1 && MISC::GET_GAME_TIMER() > iLocal_245 + 4000)
					{
						if (!func_226())
						{
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
							{
								if (func_227(&uLocal_489, "T1M4AUD", "T1M4_SHOUT1", 7, 0, 0, 0))
								{
									RECORDING::_0x293220DA1B46CEBC(4f, 6f, 4);
									iLocal_245 = MISC::GET_GAME_TIMER();
									iLocal_479 = 1;
									iLocal_478 = 0;
								}
							}
						}
					}
				}
			}
			break;
		
		case 6:
			if (iLocal_222 > 0)
			{
				if (iLocal_226 == 0)
				{
					iLocal_452 = 0;
					iLocal_453 = 0;
					iLocal_454 = 0;
					iLocal_480 = 0;
					iLocal_481 = 0;
					func_17(&uLocal_489, 0, PLAYER::PLAYER_PED_ID(), "Michael", 0, 1);
					if (!PED::IS_PED_INJURED(iLocal_263))
					{
						func_17(&uLocal_489, 2, iLocal_263, "MOLLY", 0, 1);
					}
					iLocal_226 = 1;
				}
				if (iLocal_226 == 1)
				{
					if (iLocal_452 == 0)
					{
						if (!func_226())
						{
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
							{
								if (func_227(&uLocal_489, "T1M4AUD", "SOL3_PAST", 7, 0, 0, 0))
								{
									iLocal_452 = 1;
								}
							}
						}
					}
					if (iLocal_452 == 1 && iLocal_454 == 0)
					{
						if (!func_226())
						{
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
							{
								if (func_227(&uLocal_489, "T1M4AUD", "SOL3_WATCH", 7, 0, 0, 0))
								{
									iLocal_454 = 1;
								}
							}
						}
					}
					if (iLocal_453 == 0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_263))
						{
							if (!PED::IS_PED_INJURED(iLocal_263))
							{
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_250))
								{
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_250) > 0.65f && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_250) < 0.835f)
									{
										if (!func_226())
										{
											if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
											{
												if (func_227(&uLocal_489, "T1M4AUD", "SOL3_SUCKS", 7, 0, 0, 0))
												{
													RECORDING::_0x293220DA1B46CEBC(8f, 8f, 4);
													iLocal_453 = 1;
												}
											}
										}
									}
								}
							}
						}
					}
					if (iLocal_480 == 0)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_263))
						{
							if (!func_226())
							{
								if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
								{
									if (func_227(&uLocal_489, "T1M4AUD", "T1M4_SMUSH", 7, 0, 0, 0))
									{
										iLocal_480 = 1;
									}
								}
							}
						}
					}
					if (iLocal_480 == 1 && iLocal_481 == 0)
					{
						if (!func_226())
						{
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
							{
								if (func_227(&uLocal_489, "T1M4AUD", "T1M4_SMUSH2", 7, 0, 0, 0))
								{
									iLocal_481 = 1;
								}
							}
						}
					}
				}
			}
			break;
		
		case 8:
			if (iLocal_222 > 0)
			{
				if (iLocal_226 == 0)
				{
					iLocal_482 = 0;
					iLocal_246 = MISC::GET_GAME_TIMER();
					func_17(&uLocal_489, 0, PLAYER::PLAYER_PED_ID(), "Michael", 0, 1);
					iLocal_226 = 1;
				}
				if (iLocal_226 == 1)
				{
					if (iLocal_482 == 0)
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							iLocal_276 = func_364(PLAYER::PLAYER_PED_ID(), joaat("COP"), 0, 0, 28);
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_276))
							{
								if (func_16(PLAYER::PLAYER_PED_ID(), iLocal_276, 1) < 40f)
								{
									if (!func_226())
									{
										if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
										{
											if (func_227(&uLocal_489, "T1M4AUD", "T1M4_COPS", 7, 0, 0, 0))
											{
												iLocal_482 = 1;
											}
										}
									}
								}
							}
						}
					}
					if (iLocal_482 == 1 && MISC::GET_GAME_TIMER() > iLocal_246 + 5000)
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							iLocal_276 = func_364(PLAYER::PLAYER_PED_ID(), joaat("COP"), 0, 0, 28);
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_276))
							{
								if (func_16(PLAYER::PLAYER_PED_ID(), iLocal_276, 1) < 40f)
								{
									if (!func_226())
									{
										if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
										{
											if (func_227(&uLocal_489, "T1M4AUD", "T1M4_COPS", 7, 0, 0, 0))
											{
												iLocal_246 = MISC::GET_GAME_TIMER();
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
	}
}

int func_364(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1FE33
{
	int iVar0[16];
	int iVar1;
	
	iVar1 = 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		PED::GET_PED_NEARBY_PEDS(iParam0, &iVar0, iParam4);
		iVar1 = 0;
		while (iVar1 <= (iVar0 - 1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0[iVar1]))
			{
				if (!PED::IS_PED_INJURED(iVar0[iVar1]))
				{
					if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0[iVar1]) == iParam1)
					{
						if (iParam2 <= 0)
						{
							if (iParam3 == 1)
							{
								if (ENTITY::IS_ENTITY_ON_SCREEN(iVar0[iVar1]))
								{
									return iVar0[iVar1];
								}
							}
							else
							{
								return iVar0[iVar1];
							}
						}
						else if (iVar1 + iParam2) <= (iVar0 - 1)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iVar0[(iVar1 + iParam2)]))
							{
								if (!PED::IS_PED_INJURED(iVar0[(iVar1 + iParam2)]))
								{
									if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0[(iVar1 + iParam2)]) == iParam1)
									{
										if (iParam3 == 1)
										{
											if (ENTITY::IS_ENTITY_ON_SCREEN(iVar0[(iVar1 + iParam2)]))
											{
												return iVar0[(iVar1 + iParam2)];
											}
										}
										else
										{
											return iVar0[(iVar1 + iParam2)];
										}
									}
								}
							}
						}
					}
				}
			}
			iVar1++;
		}
	}
	return 0;
}

int func_365()//Position - 0x1FF3A
{
	if (Global_3D4C == 0)
	{
		return 1;
	}
	return 0;
}

bool func_366(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x1FF51
{
	func_225(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_3D7C = 1;
	Global_3D53 = 1;
	Global_3D5A = 0;
	Global_3D55 = 0;
	Global_412B = 0;
	Global_412D = 0;
	Global_4131 = 0;
	Global_3D51 = 0;
	Global_3D80 = 0;
	Global_3D82 = 0;
	Global_280001 = 0;
	return func_218(sParam3, iParam4, bParam7);
}

void func_367()//Position - 0x1FF9F
{
	if (((iLocal_221 == 4 || iLocal_221 == 5) || iLocal_221 == 8) || iLocal_221 == 6)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_368(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 2, 200, 0))
			{
				PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
				PLAYER::_0x4669B3ED80F24B4E(PLAYER::PLAYER_ID());
			}
		}
	}
	if (iLocal_440 == 0)
	{
		if (iLocal_221 == 4)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (func_368(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 2, 200, 0))
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 3, 0);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
					iLocal_440 = 1;
				}
			}
		}
	}
}

int func_368(struct<3> Param0, int iParam1, int iParam2, bool bParam3)//Position - 0x20048
{
	struct<3> Var0[15];
	struct<3> Var1[15];
	float fVar2[15];
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar5 = 0;
	switch (iParam1)
	{
		case 1:
			Var0[0 /*3*/] = { -1332.211f, 100.4608f, 40.38437f };
			Var1[0 /*3*/] = { -1094.238f, 148.4274f, 73f };
			fVar2[0] = 171.25f;
			Var0[1 /*3*/] = { -999.7344f, -110.2231f, 25.25706f };
			Var1[1 /*3*/] = { -1149.494f, 109.2558f, 73f };
			fVar2[1] = 132f;
			Var0[2 /*3*/] = { -1035.113f, -84.95885f, 28.2746f };
			Var1[2 /*3*/] = { -1261.103f, 50.08148f, 73f };
			fVar2[2] = 132f;
			iVar3 = 3;
			break;
		
		case 2:
			Var0[0 /*3*/] = { -804.3439f, -3346.5f, 10f };
			Var1[0 /*3*/] = { -1816.954f, -2768.893f, IntToFloat((250 + iParam2)) };
			fVar2[0] = 247f;
			Var0[1 /*3*/] = { -1911.488f, -2934.197f, 10f };
			Var1[1 /*3*/] = { -968.6236f, -3477.748f, IntToFloat((250 + iParam2)) };
			fVar2[1] = 149f;
			Var0[2 /*3*/] = { -844.9433f, -2802.785f, 10f };
			Var1[2 /*3*/] = { -1011.081f, -3086.904f, IntToFloat((250 + iParam2)) };
			fVar2[2] = 185.5f;
			Var0[3 /*3*/] = { -1021.086f, -2952.277f, 10f };
			Var1[3 /*3*/] = { -1599.008f, -2616.271f, IntToFloat((250 + iParam2)) };
			fVar2[3] = 250f;
			Var0[4 /*3*/] = { -1027.136f, -2436.457f, 10f };
			Var1[4 /*3*/] = { -1392.61f, -2226.763f, IntToFloat((250 + iParam2)) };
			fVar2[4] = 193.5f;
			Var0[5 /*3*/] = { -1497.549f, -2408.712f, 10f };
			Var1[5 /*3*/] = { -1136.917f, -2617.955f, IntToFloat((250 + iParam2)) };
			fVar2[5] = 234.5f;
			Var0[6 /*3*/] = { -982.7924f, -2831.709f, 12.93313f };
			Var1[6 /*3*/] = { -966.4677f, -2803.458f, 16.68313f };
			fVar2[6] = 16f;
			Var0[7 /*3*/] = { -1110.083f, -3496.806f, 12f };
			Var1[7 /*3*/] = { -1955.298f, -3010.431f, IntToFloat((250 + iParam2)) };
			fVar2[7] = 80f;
			Var0[8 /*3*/] = { -1886.899f, -3193.024f, 12f };
			Var1[8 /*3*/] = { -1836.143f, -3105.268f, IntToFloat((250 + iParam2)) };
			fVar2[8] = 142f;
			Var0[9 /*3*/] = { -1134.337f, -3535.648f, 12f };
			Var1[9 /*3*/] = { -1259.649f, -3463.486f, IntToFloat((250 + iParam2)) };
			fVar2[9] = 30.75f;
			Var0[10 /*3*/] = { -969.1279f, -3463.899f, 12f };
			Var1[10 /*3*/] = { -896.3734f, -3505.715f, IntToFloat((250 + iParam2)) };
			fVar2[10] = 150f;
			Var0[11 /*3*/] = { -1369.491f, -2173.579f, 10f };
			Var1[11 /*3*/] = { -1685.626f, -2720.364f, IntToFloat((250 + iParam2)) };
			fVar2[11] = 29.25f;
			Var0[12 /*3*/] = { -1010.926f, -3550.943f, 10f };
			Var1[12 /*3*/] = { -1110.198f, -3493.617f, IntToFloat((250 + iParam2)) };
			fVar2[12] = 43f;
			iVar3 = 13;
			break;
		
		case 3:
			Var0[0 /*3*/] = { -1773.944f, 3287.334f, 30f };
			Var1[0 /*3*/] = { -2029.776f, 2845.083f, IntToFloat((250 + iParam2)) };
			fVar2[0] = 250f;
			Var0[1 /*3*/] = { -2725.889f, 3291.099f, 30f };
			Var1[1 /*3*/] = { -2009.182f, 2879.835f, IntToFloat((250 + iParam2)) };
			fVar2[1] = 180f;
			Var0[2 /*3*/] = { -2442.026f, 3326.699f, 30f };
			Var1[2 /*3*/] = { -2033.928f, 3089.049f, IntToFloat((250 + iParam2)) };
			fVar2[2] = 200f;
			Var0[3 /*3*/] = { -1917.165f, 3374.209f, 30f };
			Var1[3 /*3*/] = { -2016.791f, 3195.058f, IntToFloat((250 + iParam2)) };
			fVar2[3] = 86.25f;
			Var0[4 /*3*/] = { -2192.753f, 3373.278f, 30f };
			Var1[4 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam2)) };
			fVar2[4] = 140.5f;
			Var0[5 /*3*/] = { -2077.663f, 3344.514f, 30f };
			Var1[5 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam2)) };
			fVar2[5] = 140.5f;
			Var0[6 /*3*/] = { -2861.755f, 3352.661f, 30f };
			Var1[6 /*3*/] = { -2715.871f, 3269.916f, IntToFloat((250 + iParam2)) };
			fVar2[6] = 90f;
			Var0[7 /*3*/] = { -2005.574f, 3364.533f, 30f };
			Var1[7 /*3*/] = { -1977.569f, 3330.888f, IntToFloat((250 + iParam2)) };
			fVar2[7] = 100f;
			Var0[8 /*3*/] = { -1682.235f, 3004.285f, 30f };
			Var1[8 /*3*/] = { -1942.747f, 2947.441f, IntToFloat((250 + iParam2)) };
			fVar2[8] = 248.75f;
			Var0[9 /*3*/] = { -2393.295f, 2936.406f, 31.6801f };
			Var1[9 /*3*/] = { -2453.037f, 3006.863f, 52.31003f };
			fVar2[9] = 128f;
			Var0[10 /*3*/] = { -2347.185f, 3023.83f, 31.56573f };
			Var1[10 /*3*/] = { -2517.33f, 2989.063f, 49.95644f };
			fVar2[10] = 127.25f;
			Var0[11 /*3*/] = { -2259.922f, 3358.04f, 29.99972f };
			Var1[11 /*3*/] = { -2299.772f, 3385.79f, 38.06014f };
			fVar2[11] = 16f;
			Var0[12 /*3*/] = { -2476.309f, 3363.914f, 31.67933f };
			Var1[12 /*3*/] = { -2431.981f, 3287.669f, 39.97826f };
			fVar2[12] = 214.25f;
			Var0[13 /*3*/] = { -2103.081f, 2797.783f, 29.37864f };
			Var1[13 /*3*/] = { -2096.821f, 2874.423f, 57.80989f };
			fVar2[13] = 65.75f;
			if (bParam3)
			{
				iVar6 = iParam2;
			}
			else
			{
				iVar6 = 0;
			}
			Var1[9 /*3*/].f_2 = (Var1[9 /*3*/].f_2 + IntToFloat(iVar6));
			Var1[10 /*3*/].f_2 = (Var1[10 /*3*/].f_2 + IntToFloat(iVar6));
			Var1[11 /*3*/].f_2 = (Var1[11 /*3*/].f_2 + IntToFloat(iVar6));
			Var1[12 /*3*/].f_2 = (Var1[12 /*3*/].f_2 + IntToFloat(iVar6));
			Var1[13 /*3*/].f_2 = (Var1[13 /*3*/].f_2 + IntToFloat(iVar6));
			iVar3 = 14;
			break;
		
		case 4:
			Var0[0 /*3*/] = { 1541.607f, 2527.555f, 40f };
			Var1[0 /*3*/] = { 1815.575f, 2535.06f, IntToFloat((150 + iParam2)) };
			fVar2[0] = 114f;
			Var0[1 /*3*/] = { 1788.879f, 2445.727f, 40f };
			Var1[1 /*3*/] = { 1716.96f, 2502.957f, IntToFloat((150 + iParam2)) };
			fVar2[1] = 88.5f;
			Var0[2 /*3*/] = { 1601.157f, 2436.244f, 40f };
			Var1[2 /*3*/] = { 1650.078f, 2515.923f, IntToFloat((150 + iParam2)) };
			fVar2[2] = 133.25f;
			Var0[3 /*3*/] = { 1706.331f, 2407.597f, 40f };
			Var1[3 /*3*/] = { 1698.555f, 2460.208f, IntToFloat((150 + iParam2)) };
			fVar2[3] = 104.5f;
			Var0[4 /*3*/] = { 1712.452f, 2756.218f, 40f };
			Var1[4 /*3*/] = { 1718.848f, 2589.162f, IntToFloat((150 + iParam2)) };
			fVar2[4] = 121.75f;
			Var0[5 /*3*/] = { 1830.228f, 2661.24f, 40f };
			Var1[5 /*3*/] = { 1774.812f, 2679.419f, IntToFloat((150 + iParam2)) };
			fVar2[5] = 84.5f;
			Var0[6 /*3*/] = { 1559.05f, 2632.22f, 40f };
			Var1[6 /*3*/] = { 1657.208f, 2595.484f, IntToFloat((150 + iParam2)) };
			fVar2[6] = 103.75f;
			Var0[7 /*3*/] = { 1612.021f, 2716.869f, 40f };
			Var1[7 /*3*/] = { 1657.165f, 2669.721f, IntToFloat((150 + iParam2)) };
			fVar2[7] = 104.25f;
			Var0[8 /*3*/] = { 1809.872f, 2729.827f, 40f };
			Var1[8 /*3*/] = { 1789.855f, 2705.037f, IntToFloat((150 + iParam2)) };
			fVar2[8] = 91f;
			Var0[9 /*3*/] = { 1818.789f, 2605.948f, 40f };
			Var1[9 /*3*/] = { 1783.114f, 2606.783f, IntToFloat((150 + iParam2)) };
			fVar2[9] = 51.25f;
			iVar3 = 10;
			break;
		
		case 5:
			Var0[0 /*3*/] = { 3411.002f, 3663.185f, 20f };
			Var1[0 /*3*/] = { 3615.583f, 3626.194f, IntToFloat((40 + iParam2)) };
			fVar2[0] = 45.75f;
			Var0[1 /*3*/] = { 3426.66f, 3733.078f, 20f };
			Var1[1 /*3*/] = { 3643.801f, 3694.362f, IntToFloat((40 + iParam2)) };
			fVar2[1] = 99f;
			Var0[2 /*3*/] = { 3446.036f, 3795.688f, 20f };
			Var1[2 /*3*/] = { 3650.914f, 3766.152f, IntToFloat((40 + iParam2)) };
			fVar2[2] = 81.5f;
			iVar3 = 3;
			break;
		
		case 6:
			Var0[0 /*3*/] = { 526.053f, -3391.497f, -10f };
			Var1[0 /*3*/] = { 523.2289f, -3118.678f, IntToFloat((10 + iParam2)) };
			fVar2[0] = 120f;
			Var0[1 /*3*/] = { 459.4397f, -3199.99f, 4.819676f };
			Var1[1 /*3*/] = { 593.8928f, -3199.998f, 30.06926f };
			fVar2[1] = 170f;
			Var0[2 /*3*/] = { 552.8467f, -3111.054f, 4.819394f };
			Var1[2 /*3*/] = { 585.3137f, -3111.844f, 17.56923f };
			fVar2[2] = 12.5f;
			Var0[3 /*3*/] = { 598.4666f, -3140.147f, 4.819257f };
			Var1[3 /*3*/] = { 597.4973f, -3117.063f, 17.31926f };
			fVar2[3] = 9.75f;
			iVar3 = 4;
			break;
		
		case 7:
			Var0[0 /*3*/] = { -1108.55f, -570.8798f, 20f };
			Var1[0 /*3*/] = { -1187.811f, -477.5037f, IntToFloat((50 + iParam2)) };
			fVar2[0] = 162f;
			Var0[1 /*3*/] = { -1201.378f, -485.9673f, 20f };
			Var1[1 /*3*/] = { -1215.796f, -464.8281f, IntToFloat((50 + iParam2)) };
			fVar2[1] = 124f;
			Var0[2 /*3*/] = { -985.6311f, -525.4233f, 20f };
			Var1[2 /*3*/] = { -1013.393f, -475.2057f, IntToFloat((50 + iParam2)) };
			fVar2[2] = 55f;
			Var0[3 /*3*/] = { -1055.849f, -477.8226f, 20f };
			Var1[3 /*3*/] = { -1073.333f, -498.717f, IntToFloat((50 + iParam2)) };
			fVar2[3] = 142f;
			iVar3 = 4;
			break;
		
		case 8:
			Var0[0 /*3*/] = { 461.5684f, -984.572f, 29.43951f };
			Var1[0 /*3*/] = { 471.17f, -984.4292f, 40.14212f };
			fVar2[0] = 7.75f;
			Var0[1 /*3*/] = { 457.3404f, -984.756f, 34.43951f };
			Var1[1 /*3*/] = { 457.2084f, -993.7189f, 29.38958f };
			fVar2[1] = 14.75f;
			Var0[2 /*3*/] = { 477.6227f, -986.6f, 40.00819f };
			Var1[2 /*3*/] = { 424.8687f, -986.3279f, 48.71241f };
			fVar2[2] = 31.5f;
			Var0[3 /*3*/] = { 474.3889f, -974.4613f, 39.55761f };
			Var1[3 /*3*/] = { 474.0358f, -1021.972f, 49.10033f };
			fVar2[3] = 30.5f;
			Var0[4 /*3*/] = { 442.1768f, -974.1888f, 29.68951f };
			Var1[4 /*3*/] = { 442.1855f, -979.8635f, 33.43951f };
			fVar2[4] = 6.75f;
			iVar3 = 5;
			break;
	}
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var0[iVar4 /*3*/], Var1[iVar4 /*3*/], fVar2[iVar4], iVar5, 1))
		{
			return 1;
		}
		iVar4++;
	}
	return 0;
}

void func_369()//Position - 0x20D9C
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iLocal_278 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		}
	}
}

void func_370()//Position - 0x20DC8
{
	if (iLocal_348 == 1)
	{
		if (iLocal_221 == 4)
		{
			if (iLocal_223 > 1 && iLocal_423 == 0)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -828.6987f, -2938.073f, 12.21745f, -807.6911f, -2905.148f, 16.35626f, 28f, 0, 1, 0))
				{
					func_204("TRV4_FAIL1");
				}
			}
		}
		if (iLocal_221 == 6)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_294))
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_299))
				{
					if (func_16(PLAYER::PLAYER_PED_ID(), iLocal_294, 1) > 100f)
					{
						func_204("TRV4_FAIL6");
					}
				}
			}
		}
		if (iLocal_221 == 4)
		{
			if (iLocal_223 == 2)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_235 + 7000 && iLocal_438 == 0)
				{
					func_204("TRV4_FAIL1");
				}
			}
		}
		if (iLocal_221 == 4)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_277))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_277, 0))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_277))
					{
						if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) > 62000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) < 77000f)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -1219f, -2570f, 13f, 1) < 210f)
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
								{
									if (ENTITY::GET_ENTITY_HEADING(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) < 200f && ENTITY::GET_ENTITY_HEADING(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) > 125f)
									{
										if (iLocal_437 == 0)
										{
											iLocal_238 = MISC::GET_GAME_TIMER();
											iLocal_437 = 1;
										}
										if (iLocal_437 == 1 && MISC::GET_GAME_TIMER() > iLocal_238 + 4000)
										{
											func_204("TRV4_FAIL1");
										}
									}
									else if (iLocal_437 == 1)
									{
										iLocal_437 = 0;
									}
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_221 == 5 || iLocal_221 == 6)
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -928.9f, -2935f, 13f, 1) < 5f && !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				func_204("TRV4_FAIL1");
			}
		}
		if (iLocal_221 == 2 || iLocal_221 == 4)
		{
			if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
			{
				if (func_368(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 2, 200, 0))
				{
					func_204("TRV4_FAIL2");
				}
				else if (!func_180("TRV4_HELP3"))
				{
					func_373("TRV4_HELP3");
				}
			}
			else if (func_180("TRV4_HELP3"))
			{
				HUD::CLEAR_HELP(1);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_277))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_277, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_263))
				{
					if (!PED::IS_PED_INJURED(iLocal_263))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(iLocal_263, 0);
						ENTITY::SET_ENTITY_HEALTH(iLocal_263, 0);
					}
				}
			}
		}
		if (iLocal_357 == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_263))
			{
				if (PED::IS_PED_INJURED(iLocal_263))
				{
					func_204("TRV4_FAIL3");
				}
			}
		}
		if (iLocal_221 == 4)
		{
			if (iLocal_349 == 1)
			{
				if (!PED::IS_PED_INJURED(iLocal_263))
				{
					if (func_13(PLAYER::PLAYER_PED_ID(), iLocal_263) > 300f)
					{
						if (iLocal_403 == 1)
						{
							HUD::CLEAR_PRINTS();
							func_20("TRV4_WARN1", 7500, 1);
							iLocal_403 = 0;
						}
					}
					else if (iLocal_403 == 0)
					{
						iLocal_403 = 1;
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_277, 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_277))
						{
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) < 40000f)
							{
								if (func_13(PLAYER::PLAYER_PED_ID(), iLocal_263) > 400f)
								{
									func_204("TRV4_FAIL1");
								}
							}
							else if (func_13(PLAYER::PLAYER_PED_ID(), iLocal_263) > 350f)
							{
								func_204("TRV4_FAIL1");
							}
						}
					}
				}
			}
			if (iLocal_223 == 3)
			{
				if (iLocal_424 == 1)
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -934.4f, -2927.2f, 13.2f, 1) > 25f || MISC::GET_GAME_TIMER() > iLocal_236 + 12000)
					{
						func_204("TRV4_FAIL1");
					}
				}
			}
		}
		if (iLocal_221 == 2 || iLocal_221 == 4)
		{
			if (PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()))
			{
				func_204("TRV4_FAIL1");
			}
		}
		if (iLocal_221 == 4)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_277, 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_277))
				{
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) > 111509f)
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1070.838f, -2942.241f, 12.19534f, -1009.038f, -2977.609f, 17.44443f, 89.5f, 0, 1, 0))
						{
							func_204("TRV4_FAIL1");
						}
					}
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_277) > 122000f)
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							if (ENTITY::IS_ENTITY_UPSIDEDOWN(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
							{
								if (iLocal_439 == 0)
								{
									iLocal_239 = MISC::GET_GAME_TIMER();
									iLocal_439 = 1;
								}
								if (iLocal_439 == 1)
								{
									if (MISC::GET_GAME_TIMER() > iLocal_239 + 4000)
									{
										func_204("TRV4_FAIL1");
									}
								}
							}
							else
							{
								iLocal_439 = 0;
							}
						}
					}
				}
			}
		}
		if (iLocal_221 == 2)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -803.4108f, -2173.417f, -1.911488f, -605.6846f, -2358.229f, 27.32842f, 250f, 0, 1, 0))
			{
				func_204("TRV4_FAIL1");
			}
		}
		if (iLocal_404 == 1)
		{
			if (func_372())
			{
				func_371();
			}
		}
	}
}

void func_371()//Position - 0x212D6
{
	func_379(PLAYER::PLAYER_PED_ID(), 0);
	func_375();
}

int func_372()//Position - 0x212EB
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_15F6A == 7 || Global_15F6A == 8)
	{
		return 1;
	}
	return 0;
}

void func_373(char* sParam0)//Position - 0x21318
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}

void func_374(bool bParam0)//Position - 0x2132E
{
	if (bParam0)
	{
		StringCopy(&Global_17899, SCRIPT::GET_THIS_SCRIPT_NAME(), 24);
		Global_17893 = 1;
	}
	else
	{
		StringCopy(&Global_17899, "NULL", 24);
		Global_17893 = 0;
	}
}

void func_375()//Position - 0x2135A
{
	func_381(24, 1);
	AUDIO::SET_AUDIO_FLAG("PoliceScannerDisabled", 0);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-1042.5f, -500f, 41f, -1019.5f, -475f, 34f, 1, 1);
	func_376();
	func_179(&uLocal_27, 0, 0);
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	PATHFIND::SET_IGNORE_NO_GPS_FLAG(0);
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_286))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_286);
	}
	func_374(0);
	if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(uLocal_262))
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(uLocal_262);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_263))
	{
		if (!PED::IS_PED_INJURED(iLocal_263))
		{
			PED::SET_PED_KEEP_TASK(iLocal_263, 1);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_263);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_265))
	{
		if (!PED::IS_PED_INJURED(iLocal_265))
		{
			PED::SET_PED_KEEP_TASK(iLocal_265, 1);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_265);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_268))
	{
		if (!PED::IS_PED_INJURED(iLocal_268))
		{
			PED::SET_PED_KEEP_TASK(iLocal_268, 1);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_268);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_269))
	{
		if (!PED::IS_PED_INJURED(iLocal_269))
		{
			PED::SET_PED_KEEP_TASK(iLocal_269, 1);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_269);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_270))
	{
		if (!PED::IS_PED_INJURED(iLocal_270))
		{
			PED::SET_PED_KEEP_TASK(iLocal_270, 1);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_270);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_271))
	{
		if (!PED::IS_PED_INJURED(iLocal_271))
		{
			PED::SET_PED_KEEP_TASK(iLocal_271, 1);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_271);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_272))
	{
		if (!PED::IS_PED_INJURED(iLocal_272))
		{
			PED::SET_PED_KEEP_TASK(iLocal_272, 1);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_272);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_273))
	{
		if (!PED::IS_PED_INJURED(iLocal_273))
		{
			PED::SET_PED_KEEP_TASK(iLocal_273, 1);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_273);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_264[0]))
	{
		if (!PED::IS_PED_INJURED(iLocal_264[0]))
		{
			PED::SET_PED_KEEP_TASK(iLocal_264[0], 1);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_264[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_264[1]))
	{
		if (!PED::IS_PED_INJURED(iLocal_264[1]))
		{
			PED::SET_PED_KEEP_TASK(iLocal_264[1], 1);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_264[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_264[2]))
	{
		if (!PED::IS_PED_INJURED(iLocal_264[2]))
		{
			PED::SET_PED_KEEP_TASK(iLocal_264[2], 1);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_264[2]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_264[3]))
	{
		if (!PED::IS_PED_INJURED(iLocal_264[3]))
		{
			PED::SET_PED_KEEP_TASK(iLocal_264[3], 1);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_264[3]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_266[0]))
	{
		if (!PED::IS_PED_INJURED(uLocal_266[0]))
		{
			PED::SET_PED_KEEP_TASK(uLocal_266[0], 1);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_266[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_266[1]))
	{
		if (!PED::IS_PED_INJURED(uLocal_266[1]))
		{
			PED::SET_PED_KEEP_TASK(uLocal_266[1], 1);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_266[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_266[2]))
	{
		if (!PED::IS_PED_INJURED(uLocal_266[2]))
		{
			PED::SET_PED_KEEP_TASK(uLocal_266[2], 1);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_266[2]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_267[0]))
	{
		if (!PED::IS_PED_INJURED(iLocal_267[0]))
		{
			PED::SET_PED_KEEP_TASK(iLocal_267[0], 1);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_267[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_267[1]))
	{
		if (!PED::IS_PED_INJURED(iLocal_267[1]))
		{
			PED::SET_PED_KEEP_TASK(iLocal_267[1], 1);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_267[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_267[2]))
	{
		if (!PED::IS_PED_INJURED(iLocal_267[2]))
		{
			PED::SET_PED_KEEP_TASK(iLocal_267[2], 1);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_267[2]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_267[3]))
	{
		if (!PED::IS_PED_INJURED(iLocal_267[3]))
		{
			PED::SET_PED_KEEP_TASK(iLocal_267[3], 1);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_267[3]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_267[4]))
	{
		if (!PED::IS_PED_INJURED(iLocal_267[4]))
		{
			PED::SET_PED_KEEP_TASK(iLocal_267[4], 1);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_267[4]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_267[5]))
	{
		if (!PED::IS_PED_INJURED(iLocal_267[5]))
		{
			PED::SET_PED_KEEP_TASK(iLocal_267[5], 1);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_267[5]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_267[6]))
	{
		if (!PED::IS_PED_INJURED(iLocal_267[6]))
		{
			PED::SET_PED_KEEP_TASK(iLocal_267[6], 1);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_267[6]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_267[7]))
	{
		if (!PED::IS_PED_INJURED(iLocal_267[7]))
		{
			PED::SET_PED_KEEP_TASK(iLocal_267[7], 1);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_267[7]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_267[8]))
	{
		if (!PED::IS_PED_INJURED(iLocal_267[8]))
		{
			PED::SET_PED_KEEP_TASK(iLocal_267[8], 1);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_267[8]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_267[9]))
	{
		if (!PED::IS_PED_INJURED(iLocal_267[9]))
		{
			PED::SET_PED_KEEP_TASK(iLocal_267[9], 1);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_267[9]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_267[10]))
	{
		if (!PED::IS_PED_INJURED(iLocal_267[10]))
		{
			PED::SET_PED_KEEP_TASK(iLocal_267[10], 1);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_267[10]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_274[0]))
	{
		if (!PED::IS_PED_INJURED(iLocal_274[0]))
		{
			PED::SET_PED_KEEP_TASK(iLocal_274[0], 1);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_274[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_275[0]))
	{
		if (!PED::IS_PED_INJURED(iLocal_275[0]))
		{
			PED::SET_PED_KEEP_TASK(iLocal_275[0], 1);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_275[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_275[1]))
	{
		if (!PED::IS_PED_INJURED(iLocal_275[1]))
		{
			PED::SET_PED_KEEP_TASK(iLocal_275[1], 1);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_275[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_277))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_277);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_278))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_278, 0))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_278);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_281))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_281);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_282))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_282);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_283))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_283);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_284))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_284);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_286))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_286);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_288))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_288, 0))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_288);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_292[0]))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_292[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_292[1]))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_292[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_279[0]))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_279[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_279[1]))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_279[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_292[0]))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_292[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_292[1]))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_292[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_285[0]))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_285[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_285[1]))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_285[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_287[0]))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_287[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_280))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_280);
	}
	AUDIO::CANCEL_MUSIC_EVENT("TRV4_START");
	AUDIO::CANCEL_MUSIC_EVENT("TRV4_GAMEPLAY_START");
	AUDIO::CANCEL_MUSIC_EVENT("TRV4_START_CS_SKIP");
	AUDIO::CANCEL_MUSIC_EVENT("TRV4_START_RT");
	AUDIO::CANCEL_MUSIC_EVENT("TRV4_FOOT_CHASE_RT");
	AUDIO::CANCEL_MUSIC_EVENT("TRV4_EVADE_RT");
	AUDIO::CANCEL_MUSIC_EVENT("TRV4_CAR_ENTERED");
	AUDIO::CANCEL_MUSIC_EVENT("TRV4_AIRPORT_ENTERED");
	AUDIO::CANCEL_MUSIC_EVENT("TRV4_CHASE");
	AUDIO::CANCEL_MUSIC_EVENT("TRV4_JET_ENTERED");
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_261))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_261);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_671))
	{
		GRAPHICS::REMOVE_PARTICLE_FX(uLocal_671, 0);
	}
	HUD::CLEAR_GPS_MULTI_ROUTE();
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_304);
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("digitalOverlay");
	PATHFIND::SET_ROADS_IN_AREA(-617f, -2274f, 0f, -406.01f, -2044f, 15f, 1, 1);
	PATHFIND::SET_ROADS_IN_AREA(-482f, -2118f, 6f, -1072f, -2724f, 17f, 1, 1);
	if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Trev4_5"))
	{
		TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("Trev4_5", 0, 0.5f, 1f);
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	MISC::SET_TIME_SCALE(1f);
	HUD::DISPLAY_RADAR(1);
	HUD::DISPLAY_HUD(1);
	STREAMING::REMOVE_ANIM_DICT("missheist_agency3aig_lift_waitped_a");
	func_257(0);
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
	if (func_19(2))
	{
		func_18(2, 0);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_376()//Position - 0x21B94
{
	int iVar0;
	
	Global_D5FB = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 64)
	{
		Global_D5FC[iVar0 /*2*/] = 0;
		iVar0++;
	}
}

void func_377()//Position - 0x21BBE
{
	int iVar0;
	
	if (SCRIPT::HAS_SCRIPT_LOADED("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 1424);
	}
	if (Global_17C49.f_1CAD || func_388(0))
	{
		if (!func_378())
		{
			iVar0 = func_8();
			if (iVar0 != -1)
			{
				if (!func_207(iVar0))
				{
					return;
				}
				MISC::SET_BIT(&(Global_13CDF[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_212();
		}
	}
}

int func_378()//Position - 0x21C2F
{
	if (((Global_15F6A == 13 || Global_15F6A == 10) || Global_15F6A == 11) || Global_15F6A == 12)
	{
		return 0;
	}
	return 1;
}

void func_379(int iParam0, int iParam1)//Position - 0x21C6D
{
	int iVar0;
	
	iVar0 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, 0))
		{
			if (iVar0 != 0 && iVar0 != joaat("weapon_unarmed"))
			{
				if (!func_380(iParam1, iVar0))
				{
					iVar0 = 0;
				}
			}
		}
	}
	if (Global_15F8F > 0)
	{
		Global_16D94.f_15[iParam1] = iVar0;
	}
	else
	{
		Global_164D7.f_15[iParam1] = iVar0;
	}
}

int func_380(int iParam0, int iParam1)//Position - 0x21CD3
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_15F8F > 0)
	{
		iVar0 = 0;
		while (iVar0 < 44)
		{
			if (Global_16D94.f_29C[iParam0 /*284*/][iVar0 /*3*/] == iParam1)
			{
				if (Global_16D94.f_29C[iParam0 /*284*/][iVar0 /*3*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			if (Global_16D94.f_29C[iParam0 /*284*/].f_85[iVar0 /*3*/] == iParam1)
			{
				if (Global_16D94.f_29C[iParam0 /*284*/].f_85[iVar0 /*3*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 44)
		{
			if (Global_164D7.f_29C[iParam0 /*284*/][iVar0 /*3*/] == iParam1)
			{
				if (Global_164D7.f_29C[iParam0 /*284*/][iVar0 /*3*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			if (Global_164D7.f_29C[iParam0 /*284*/].f_85[iVar0 /*3*/] == iParam1)
			{
				if (Global_164D7.f_29C[iParam0 /*284*/].f_85[iVar0 /*3*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_381(int iParam0, bool bParam1)//Position - 0x21E06
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "NULL";
	iVar1 = 0;
	sVar0 = func_385(iParam0, &iVar1);
	if (!MISC::ARE_STRINGS_EQUAL("NONE", sVar0) && iVar1 != 0)
	{
		if (bParam1)
		{
			if (INTERIOR::IS_INTERIOR_DISABLED(iVar1))
			{
				return;
			}
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iVar1)
			{
				func_384(iParam0, 1);
				return;
			}
		}
		else
		{
			if (!INTERIOR::IS_INTERIOR_DISABLED(iVar1))
			{
				return;
			}
			if (func_382(iParam0))
			{
				func_384(iParam0, 0);
			}
		}
		INTERIOR::DISABLE_INTERIOR(iVar1, bParam1);
		if (bParam1)
		{
		}
	}
}

int func_382(int iParam0)//Position - 0x21E91
{
	struct<2> Var0;
	
	Var0 = { func_383(iParam0) };
	if (MISC::IS_BIT_SET(Global_783E[Var0.f_1], Var0))
	{
		return 1;
	}
	return 0;
}

struct<2> func_383(var uParam0)//Position - 0x21EBA
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<2> Var3;
	
	iVar0 = uParam0;
	iVar1 = 0;
	iVar2 = 0;
	Var3 = -1;
	Var3.f_1 = -1;
	while (iVar1 < 2)
	{
		iVar2 += 32;
		if (iVar0 < iVar2)
		{
			Var3.f_1 = iVar1;
			Var3 = (iVar0 - Var3.f_1 * 32);
			return Var3;
		}
		iVar1++;
	}
	return Var3;
}

void func_384(int iParam0, bool bParam1)//Position - 0x21F0C
{
	struct<2> Var0;
	
	Var0 = { func_383(iParam0) };
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_783E[Var0.f_1]), Var0);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_783E[Var0.f_1]), Var0);
	}
}

var func_385(int iParam0, int iParam1)//Position - 0x21F44
{
	struct<5> Var0;
	
	Var0 = { func_386(iParam0) };
	*iParam1 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var0, Var0.f_3);
	return Var0.f_4;
}

struct<5> func_386(int iParam0)//Position - 0x21F69
{
	struct<5> Var0;
	struct<3> Var1;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { -447.4833f, 280.3197f, 77.5215f };
			Var0.f_3 = "v_comedy";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 1:
			Var0 = { -1906.786f, -573.7576f, 19.0773f };
			Var0.f_3 = "v_psycheoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 2:
			Var0 = { 1399.973f, 1148.756f, 113.3336f };
			Var0.f_3 = "v_ranch";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 3:
			Var0 = { -598.6379f, -1608.399f, 26.0108f };
			Var0.f_3 = "v_recycle";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 4:
			Var0 = { -556.5089f, 286.3181f, 81.1763f };
			Var0.f_3 = "v_rockclub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 5:
			Var0 = { -111.7116f, -11.912f, 69.5196f };
			Var0.f_3 = "v_janitor";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 6:
			Var0 = { 1274.934f, -1714.726f, 53.7715f };
			Var0.f_3 = "v_lesters";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 7:
			Var0 = { 147.433f, -2201.37f, 3.688f };
			Var0.f_3 = "v_torture";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 8:
			Var0 = { 320.9934f, 265.2515f, 82.1221f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Vinewood)";
			break;
		
		case 9:
			Var0 = { -1425.564f, -244.3f, 15.8053f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Morningwood)";
			break;
		
		case 10:
			Var0 = { 377.153f, -717.567f, 10.0536f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Downtown)";
			break;
		
		case 11:
			Var0 = { 245.1564f, 370.211f, 104.7382f };
			Var0.f_3 = "v_epsilonism";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 12:
			Var0 = { 173.1176f, -1003.279f, -99.9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 13:
			Var0 = { 199.9715f, -999.6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 14:
			Var0 = { 228.6058f, -992.0537f, -99.9999f };
			Var0.f_3 = "v_garagel";
			Var0.f_3 = "hei_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 15:
			Var0 = { 1854.254f, 3686.739f, 33.2671f };
			Var0.f_3 = "v_sheriff";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 16:
			Var0 = { -444.8907f, 6013.587f, 30.7164f };
			Var0.f_3 = "v_sheriff2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 17:
			Var0 = { 3522.845f, 3707.965f, 19.9918f };
			Var0.f_3 = "v_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 18:
			Var0 = { 717.2994f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 19:
			Var0 = { 717.299f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweatempty";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 20:
			Var0 = { 2449.785f, 4983.825f, 45.8106f };
			Var0.f_3 = "v_farmhouse";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1087.195f, -1988.445f, 28.649f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 23:
			Var0 = { 982.233f, -2160.382f, 28.4761f };
			Var0.f_3 = "v_abattoir";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 21:
			Var0 = { 479.0568f, -1316.825f, 28.2038f };
			Var0.f_3 = "v_chopshop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 24:
			Var0 = { -1005.663f, -478.3461f, 49.0265f };
			Var0.f_3 = "v_58_sol_office";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 25:
			Var1 = { func_387(1) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (1)";
			break;
		
		case 26:
			Var1 = { func_387(2) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (2)";
			break;
		
		case 27:
			Var1 = { func_387(3) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (3)";
			break;
		
		case 28:
			Var1 = { func_387(4) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (4)";
			break;
		
		case 29:
			Var1 = { func_387(5) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (5)";
			break;
		
		case 30:
			Var1 = { func_387(6) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (6)";
			break;
		
		case 31:
			Var1 = { func_387(7) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (7)";
			break;
		
		case 32:
			Var0 = { Global_1001A3[34 /*1425*/].f_92.f_411 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (8)";
			break;
		
		case 33:
			Var1 = { func_387(35) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (9)";
			break;
		
		case 34:
			Var1 = { func_387(36) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (10)";
			break;
		
		case 35:
			Var1 = { func_387(37) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (11)";
			break;
		
		case 36:
			Var1 = { func_387(38) };
			Var0 = { -20.1f, -580.8f, 91.3f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (12)";
			break;
		
		case 37:
			Var1 = { func_387(39) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (13)";
			break;
		
		case 38:
			Var1 = { func_387(40) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (14)";
			break;
		
		case 39:
			Var1 = { func_387(41) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (15)";
			break;
		
		case 40:
			Var1 = { func_387(42) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (16)";
			break;
		
		case 41:
			Var1 = { func_387(43) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (17)";
			break;
		
		case 42:
			Var0 = { -470.3754f, -698.5207f, 51.5276f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (18)";
			break;
		
		case 43:
			Var0 = { -460.6133f, -691.5562f, 69.9067f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (19)";
			break;
		
		case 44:
			Var0 = { 300.633f, -997.4288f, -99.9727f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (20)";
			break;
		
		case 45:
			Var0 = { -16.29585f, -684.0385f, 33.50832f };
			Var0.f_3 = "dt1_03_carpark";
			Var0.f_4 = "dt1_03_carpark";
			break;
		
		case 46:
			Var0 = { 341.1f, -1000f, -99.2f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = "v_apart_midspaz";
			break;
		
		case 47:
			Var0 = { 199.9716f, -1018.954f, -100f };
			Var0.f_3 = "v_garagem_sp";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 48:
			Var0 = { -1388.001f, -618.4197f, 30.8196f };
			Var0.f_3 = "v_bahama";
			Var0.f_4 = Var0.f_3;
			break;
		
		default:
			break;
	}
	return Var0;
}

struct<6> func_387(int iParam0)//Position - 0x22828
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case -1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 2:
			Var0 = { -761.0982f, 317.6259f, 169.5963f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { -761.1888f, 317.6295f, 216.0503f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { -795.3856f, 340.0188f, 152.7941f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 61:
			Var0 = { -778.5056f, 332.3779f, 212.1968f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 5:
			Var0 = { -258.1807f, -950.6853f, 70.0239f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 6:
			Var0 = { -285.0051f, -957.6552f, 85.3035f };
			Var0.f_3 = { 0f, 0f, -110f };
			break;
		
		case 7:
			Var0 = { -1471.882f, -530.7484f, 62.34918f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 34:
			Var0 = { -1471.882f, -530.7484f, 49.72156f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 62:
			Var0 = { -1463.15f, -540.2369f, 74.2439f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 35:
			Var0 = { -885.3702f, -451.4775f, 119.327f };
			Var0.f_3 = { 0f, 0f, 27.55617f };
			break;
		
		case 36:
			Var0 = { -913.0385f, -438.4284f, 114.3997f };
			Var0.f_3 = { 0f, 0f, -153.3093f };
			break;
		
		case 37:
			Var0 = { -892.5499f, -430.4789f, 88.25368f };
			Var0.f_3 = { 0f, 0f, 116.9193f };
			break;
		
		case 38:
			Var0 = { -35.0462f, -576.317f, 82.90739f };
			Var0.f_3 = { 0f, 0f, 160f };
			break;
		
		case 39:
			Var0 = { -10.3788f, -590.7431f, 93.02542f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 65:
			Var0 = { -22.2487f, -589.1461f, 80.2305f };
			Var0.f_3 = { 0f, 0f, 69.88f };
			break;
		
		case 40:
			Var0 = { -900.6311f, -376.7462f, 78.27306f };
			Var0.f_3 = { 0f, 0f, 26.92611f };
			break;
		
		case 41:
			Var0 = { -929.483f, -374.5104f, 102.2329f };
			Var0.f_3 = { 0f, 0f, -152.5531f };
			break;
		
		case 63:
			Var0 = { -914.4202f, -375.8189f, 114.4743f };
			Var0.f_3 = { 0f, 0f, -63f };
			break;
		
		case 42:
			Var0 = { -617.1647f, 64.6042f, 100.8196f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 43:
			Var0 = { -584.2015f, 42.7133f, 86.4187f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { -609.5665f, 50.2203f, 98.3998f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			Var0 = { 342.8157f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			Var0 = { 260.3297f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

bool func_388(bool bParam0)//Position - 0x22CA6
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_10B8D, 0);
}

