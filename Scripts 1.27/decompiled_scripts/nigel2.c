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
	var uLocal_20 = 0;
	var uLocal_21 = -1;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 1000;
	var uLocal_29 = 1000;
	var uLocal_30 = 0;
	char* sLocal_31 = NULL;
	float fLocal_32 = 0f;
	struct<3> Local_33 = { 0, 0, 0 } ;
	float fLocal_34 = 0f;
	float fLocal_35 = 0f;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	float fLocal_39 = 0f;
	float fLocal_40 = 0f;
	float fLocal_41 = 0f;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	var uLocal_46 = 10;
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
	int iLocal_91 = 0;
	int iLocal_92 = 0;
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
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	bool bLocal_119 = 0;
	bool bLocal_120 = 0;
	bool bLocal_121 = 0;
	bool bLocal_122 = 0;
	bool bLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	bool bLocal_126 = 0;
	bool bLocal_127 = 0;
	int iLocal_128 = 0;
	bool bLocal_129 = 0;
	bool bLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	bool bLocal_135 = 0;
	bool bLocal_136 = 0;
	bool bLocal_137 = 0;
	int iLocal_138 = 0;
	bool bLocal_139 = 0;
	int iLocal_140 = 0;
	bool bLocal_141 = 0;
	bool bLocal_142 = 0;
	bool bLocal_143 = 0;
	bool bLocal_144 = 0;
	bool bLocal_145 = 0;
	bool bLocal_146 = 0;
	bool bLocal_147 = 0;
	bool bLocal_148 = 0;
	bool bLocal_149 = 0;
	bool bLocal_150 = 0;
	float fLocal_151[85] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_152[85] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_153[85] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_154[85] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_155[85] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_156 = 0f;
	float fLocal_157 = 0f;
	float fLocal_158 = 0f;
	float fLocal_159 = 0f;
	float fLocal_160[70] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_161[70] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_162[70] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_163[70] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_164[70] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_165[70] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_166[70] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_167[70] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_168[70] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_169[70] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_170 = 0f;
	float fLocal_171 = 0f;
	float fLocal_172 = 0f;
	float fLocal_173 = 0f;
	float fLocal_174 = 0f;
	float fLocal_175 = 0f;
	float fLocal_176 = 0f;
	float fLocal_177 = 0f;
	float fLocal_178 = 0f;
	float fLocal_179 = 0f;
	float fLocal_180 = 0f;
	float fLocal_181 = 0f;
	float fLocal_182 = 0f;
	float fLocal_183 = 0f;
	float fLocal_184 = 0f;
	float fLocal_185 = 0f;
	float fLocal_186 = 0f;
	float fLocal_187 = 0f;
	float fLocal_188 = 0f;
	float fLocal_189 = 0f;
	float fLocal_190 = 0f;
	int iLocal_191[85] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_192[85] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_193[85] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_194[70] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_195[70] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_196[70] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_197[70] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_198 = 0;
	int iLocal_199 = 0;
	int iLocal_200 = 0;
	int iLocal_201 = 0;
	int iLocal_202 = 0;
	int iLocal_203 = 0;
	int iLocal_204 = 0;
	int iLocal_205 = 0;
	int iLocal_206 = 0;
	int iLocal_207 = 0;
	int iLocal_208 = 0;
	int iLocal_209 = 0;
	int iLocal_210 = 0;
	int iLocal_211 = 0;
	int iLocal_212 = 0;
	int iLocal_213 = 0;
	int iLocal_214 = 0;
	struct<3> Local_215[85];
	struct<3> Local_216[70];
	struct<3> Local_217[70];
	struct<3> Local_218 = { 0, 0, 0 } ;
	struct<3> Local_219 = { 0, 0, 0 } ;
	struct<3> Local_220 = { 0, 0, 0 } ;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	struct<3> Local_227 = { 0, 0, 0 } ;
	struct<3> Local_228 = { 0, 0, 0 } ;
	struct<3> Local_229 = { 0, 0, 0 } ;
	struct<3> Local_230 = { 0, 0, 0 } ;
	char cLocal_231[64] = "";
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	int iLocal_240 = 0;
	int iLocal_241[85] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_242[70] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_243[70] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	int iLocal_247[85] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_248[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_249[70] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_250[70] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_251[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_252 = 0;
	int iLocal_253 = 0;
	int iLocal_254 = 0;
	var uLocal_255 = 15;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	int iLocal_271 = 0;
	int iLocal_272 = 0;
	int iLocal_273 = 0;
	struct<61> Local_274 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_278[3] = { 0, 0, 0 };
	int iLocal_279 = 0;
	int iLocal_280[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_281 = 0;
	int iLocal_282[2] = { 0, 0 };
	int iLocal_283 = 0;
	int iLocal_284 = 0;
	int iLocal_285 = 0;
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	bool bLocal_292 = 0;
	int iLocal_293 = 0;
	bool bLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	bool bLocal_297 = 0;
	int iLocal_298 = 0;
	bool bLocal_299 = 0;
	bool bLocal_300 = 0;
	bool bLocal_301 = 0;
	int iLocal_302[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_303 = 0;
	bool bLocal_304 = 0;
	bool bLocal_305 = 0;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	int iLocal_309 = 0;
	int iLocal_310 = 0;
	int iLocal_311 = 0;
	int iLocal_312 = 0;
	int iLocal_313 = 0;
	bool bLocal_314 = 0;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	int iLocal_317 = 0;
	int iLocal_318 = 0;
	var uLocal_319 = 0;
	int iLocal_320 = 0;
	int iLocal_321 = 0;
	int iLocal_322 = 0;
	int iLocal_323 = 0;
	int iLocal_324 = 0;
	int iLocal_325 = 0;
	int iLocal_326 = 0;
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
	float fLocal_338 = 0f;
	float fLocal_339 = 0f;
	float fLocal_340 = 0f;
	float fLocal_341 = 0f;
	float fLocal_342 = 0f;
	float fLocal_343 = 0f;
	int iLocal_344 = 0;
	int iLocal_345 = 0;
	int iLocal_346 = 0;
	int iLocal_347 = 0;
	struct<8> Local_348 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	int iLocal_353 = 0;
	int iLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357[5] = { 0, 0, 0, 0, 0 };
	char* sLocal_358 = NULL;
	char* sLocal_359 = NULL;
	char* sLocal_360 = NULL;
	char* sLocal_361 = NULL;
	char* sLocal_362 = NULL;
	char* sLocal_363 = NULL;
	char* sLocal_364 = NULL;
	char* sLocal_365 = NULL;
	var uLocal_366 = 16;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
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
	struct<7> Local_531 = { 0, 0, 0, 0, 0, 0, 0 } ;
	struct<7> Local_532 = { 0, 0, 0, 0, 0, 0, 0 } ;
	struct<7> Local_533 = { 0, 0, 0, 0, 0, 0, 0 } ;
	struct<7> Local_534 = { 0, 0, 0, 0, 0, 0, 0 } ;
	struct<7> Local_535 = { 0, 0, 0, 0, 0, 0, 0 } ;
	struct<2> Local_536 = { 0, 0 } ;
	struct<2> Local_537[9];
	struct<2> Local_538[4];
	struct<2> Local_539[3];
	struct<2> Local_540 = { 0, 0 } ;
	int iLocal_541 = 0;
	char cLocal_542[24] = "";
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	struct<3> Local_546 = { 0, 0, 0 } ;
	struct<3> Local_547 = { 0, 0, 0 } ;
	struct<3> Local_548 = { 0, 0, 0 } ;
	struct<3> Local_549 = { 0, 0, 0 } ;
	struct<3> Local_550 = { 0, 0, 0 } ;
	struct<61> Local_551 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	sLocal_31 = "NULL";
	fLocal_32 = 0f;
	fLocal_34 = -0.0375f;
	fLocal_35 = 0.17f;
	fLocal_39 = 80f;
	fLocal_40 = 140f;
	fLocal_41 = 180f;
	iLocal_44 = 3;
	uLocal_89 = func_565(64);
	uLocal_90 = func_565(63);
	iLocal_91 = joaat("u_m_m_aldinapoli");
	iLocal_92 = joaat("premier");
	iLocal_108 = 1;
	iLocal_109 = 65;
	iLocal_110 = 49;
	iLocal_111 = 64;
	uLocal_115 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	uLocal_116 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	bLocal_120 = true;
	bLocal_127 = true;
	bLocal_149 = true;
	fLocal_170 = 120f;
	fLocal_171 = 0f;
	fLocal_173 = 1f;
	fLocal_174 = 0f;
	fLocal_175 = 1f;
	fLocal_176 = 30f;
	fLocal_178 = 1f;
	fLocal_179 = 5f;
	fLocal_180 = 1f;
	fLocal_181 = 1f;
	fLocal_182 = 100f;
	fLocal_183 = 100f;
	fLocal_184 = 0f;
	fLocal_185 = 7000f;
	fLocal_186 = 0f;
	fLocal_187 = 0f;
	fLocal_188 = 0.3f;
	fLocal_189 = 0.5f;
	fLocal_190 = 50f;
	iLocal_201 = -1;
	iLocal_209 = -1;
	iLocal_210 = -1;
	bLocal_275 = true;
	sLocal_358 = "Nigel2U";
	sLocal_359 = "Nigel2Outro";
	sLocal_360 = "Mrs_Thornhill";
	sLocal_361 = "Nigel";
	sLocal_362 = "Trevor";
	sLocal_363 = func_564();
	sLocal_364 = "Showroom_Car";
	sLocal_365 = "EXL_2_abandoned_car";
	StringCopy(&cLocal_542, "NMT_2_MCS_2", 24);
	Local_274 = { ScriptParam_551 };
	func_562(&Local_274);
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		func_561("Force cleanup [TERMINATING]");
		func_544(1);
		func_534();
	}
	func_527();
	if (func_526())
	{
		func_525(&Local_274, 0, 1);
		iVar0 = func_524();
		if (Global_14A40 == 1)
		{
			iVar0++;
		}
		switch (iVar0)
		{
			case 0:
				func_523(-1309.016f, -641.8671f, 25.5017f, 242.3463f, 0, 0);
				iLocal_282[0] = 1;
				func_513(1, 0);
				break;
			
			case 1:
				func_523(391.08f, -615.87f, 28.33f, 333.66f, 0, 0);
				func_513(3, 0);
				break;
			
			default:
				break;
			}
	}
	while (true)
	{
		RECORDING::_0x208784099002BC30("SF_VSADN", 0);
		func_497(Local_274.f_9, 0, 0, 0, 0, 0);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			func_494();
			Local_548 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
			PLAYER::_0xC3376F42B1FACCC6(PLAYER::PLAYER_ID());
			switch (iLocal_271)
			{
				case 0:
					func_416();
					break;
				
				case 1:
					func_364();
					break;
				
				case 2:
					func_293();
					break;
				
				case 3:
					func_285();
					break;
				
				case 4:
					func_92();
					break;
				
				case 5:
					func_46();
					break;
				
				case 6:
					break;
				
				case 7:
					break;
				
				case 8:
					break;
				
				case 9:
					break;
				
				case 10:
					break;
				}
		}
		if (bLocal_275 == 0)
		{
			func_1(iLocal_272);
		}
		SYSTEM::WAIT(0);
	}
}

void func_1(int iParam0)//Position - 0x2F4
{
	int iVar0;
	
	if (iLocal_271 == iParam0)
	{
		if (func_45())
		{
			iVar0 = 0;
			if (iLocal_271 == 2 || iLocal_271 == 3)
			{
				iVar0 = Local_534;
			}
			func_43(iVar0, -1, 0);
		}
		func_34(iLocal_271);
		func_32(iLocal_271);
		if (iLocal_271 == 3)
		{
			func_22(1, 0, 1);
		}
		else if (iLocal_271 == 1)
		{
			func_22(0, 1, 1);
		}
		else
		{
			func_22(1, 1, 1);
		}
		bLocal_275 = true;
		iLocal_276 = 0;
		if (iLocal_271 == 4)
		{
			func_21(500, 1);
		}
	}
	else
	{
		func_2();
	}
}

void func_2()//Position - 0x383
{
	struct<3> Var0;
	
	if (func_20(PLAYER::PLAYER_PED_ID()))
	{
		func_18();
		HUD::CLEAR_PRINTS();
		switch (iLocal_271)
		{
			case 0:
				if (iLocal_273 == 1)
				{
					if (CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						CUTSCENE::STOP_CUTSCENE(0);
					}
				}
				break;
			
			case 1:
				if (iLocal_273 == 1)
				{
					bLocal_297 = true;
					func_14(Local_532, &Local_534, 0);
					func_14(Local_531, &Local_534, 2);
					func_14(Local_533, &Local_535, -1);
					if (func_13(Local_535))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_535))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_535);
						}
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_535, 393.4298f, -621.3337f, 28.4891f, 0, 0, 1);
						ENTITY::SET_ENTITY_QUATERNION(Local_535, -0.0081f, -0.0061f, 0.7994f, -0.6007f);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_535);
					}
					STREAMING::REQUEST_ANIM_DICT("rcmnigel2");
					while (!STREAMING::HAS_ANIM_DICT_LOADED("rcmnigel2"))
					{
						SYSTEM::WAIT(0);
					}
					func_12(1, 0);
					MISC::CLEAR_AREA_OF_VEHICLES(393.38f, -617.53f, 27.91f, 50f, 0, 0, 0, 0, 0);
					if (!func_45())
					{
						func_14(PLAYER::PLAYER_PED_ID(), &Local_534, -1);
						func_11(&Local_534, 364.7079f, -608.3558f, 27.7364f, 246.4916f, 0);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
						if (iLocal_276 == 0)
						{
							if (iLocal_272 == 2)
							{
								if (func_10(PLAYER::PLAYER_PED_ID()))
								{
									func_3(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 25f, 13, 5000, 0, 0);
									iLocal_276 = 1;
								}
							}
						}
					}
					VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
					MISC::CLEAR_AREA_OF_VEHICLES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 150f, 0, 0, 0, 0, 0);
					iLocal_273 = 2;
				}
				break;
			
			case 2:
				if (iLocal_273 == 1)
				{
					func_14(Local_532, &Local_534, 0);
					func_14(Local_531, &Local_534, 2);
					if (!func_45())
					{
						func_14(PLAYER::PLAYER_PED_ID(), &Local_534, -1);
						Var0 = { 391.08f, -615.87f, 28.33f };
						func_11(&Local_534, Var0, 333.66f, 0);
						if (iLocal_276 == 0)
						{
							if (iLocal_272 == 3)
							{
								if (func_10(PLAYER::PLAYER_PED_ID()))
								{
									func_3(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 25f, 13, 5000, 0, 0);
									iLocal_276 = 1;
								}
							}
						}
					}
					iLocal_273 = 2;
				}
				break;
			
			case 3:
				if (iLocal_273 == 1)
				{
					if (CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						CUTSCENE::STOP_CUTSCENE(0);
					}
				}
				break;
			
			default:
				break;
			}
	}
}

void func_3(struct<3> Param0, float fParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0x5D7
{
	var uVar0;
	int iVar1;
	
	uVar0 = STREAMING::STREAMVOL_CREATE_SPHERE(Param0, fParam1, iParam2, 127);
	if (STREAMING::STREAMVOL_IS_VALID(uVar0))
	{
		iVar1 = (MISC::GET_GAME_TIMER() + iParam3);
		while (!STREAMING::STREAMVOL_HAS_LOADED(uVar0) && MISC::GET_GAME_TIMER() < iVar1)
		{
			if (bParam5)
			{
				func_5();
			}
			if (bParam4)
			{
				func_4();
			}
			SYSTEM::WAIT(0);
		}
		if (MISC::GET_GAME_TIMER() < iVar1)
		{
		}
		STREAMING::STREAMVOL_DELETE(uVar0);
	}
}

void func_4()//Position - 0x646
{
	Global_42CA.f_6 = 1;
}

void func_5()//Position - 0x654
{
	if (!Global_3839.f_1 == 1)
	{
		if (func_9(0))
		{
			func_6(0);
		}
		MISC::SET_BIT(&Global_8D8, 2);
	}
}

void func_6(int iParam0)//Position - 0x67C
{
	if (Global_38D7)
	{
		func_8(0, 0);
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
	if (!func_7())
	{
		Global_3839.f_1 = 3;
	}
}

int func_7()//Position - 0x6EC
{
	if (Global_3839.f_1 == 1 || Global_3839.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_8(bool bParam0, bool bParam1)//Position - 0x713
{
	if (bParam0)
	{
		if (func_9(0))
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

int func_9(int iParam0)//Position - 0x787
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

int func_10(int iParam0)//Position - 0x7E1
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

void func_11(int iParam0, struct<3> Param1, float fParam2, bool bParam3)//Position - 0x801
{
	if (func_10(*iParam0))
	{
		if (bParam3)
		{
			Param1.f_2 = -200f;
		}
		ENTITY::SET_ENTITY_COORDS(*iParam0, Param1, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(*iParam0, fParam2);
	}
}

void func_12(bool bParam0, bool bParam1)//Position - 0x839
{
	float fVar0;
	float fVar1;
	
	if (!ENTITY::DOES_ENTITY_EXIST(Local_540))
	{
		fVar0 = 115000f;
		fVar1 = 116821f;
		if (bParam1)
		{
			if (fLocal_340 < (fVar0 - 3000f))
			{
				return;
			}
		}
		STREAMING::REQUEST_MODEL(Local_540.f_1);
		if (bParam0)
		{
			while (!STREAMING::HAS_MODEL_LOADED(Local_540.f_1))
			{
				SYSTEM::WAIT(0);
			}
		}
		if (bParam1)
		{
			if (fLocal_340 < fVar0 || fLocal_340 > fVar1)
			{
				return;
			}
		}
		if (STREAMING::HAS_MODEL_LOADED(Local_540.f_1))
		{
			Local_540 = VEHICLE::CREATE_VEHICLE(Local_540.f_1, 419.3891f, -604.8867f, 27.7732f, 0f, 1, 1);
		}
		if (func_13(Local_540))
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_540.f_1);
			ENTITY::SET_ENTITY_QUATERNION(Local_540, 0f, 0.0006f, 0.9996f, -0.0275f);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_540, 1);
		}
	}
}

int func_13(int iParam0)//Position - 0x90D
{
	if (func_10(iParam0))
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

void func_14(int iParam0, int iParam1, int iParam2)//Position - 0x937
{
	int iVar0;
	
	if (func_10(iParam0) && func_13(*iParam1))
	{
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(*iParam1, iParam2))
		{
			func_17(iParam0, *iParam1, iParam2);
		}
		else
		{
			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam1, iParam2);
			if (iVar0 != iParam0)
			{
				if (func_10(iVar0))
				{
					func_15(iVar0);
					func_14(iParam0, iParam1, iParam2);
				}
			}
		}
	}
}

void func_15(int iParam0)//Position - 0x999
{
	struct<3> Var0;
	float fVar1;
	
	Var0 = { 0f, 0f, 0f };
	fVar1 = 0f;
	if (func_10(iParam0))
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(iParam0))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
			while (!PATHFIND::GET_SAFE_COORD_FOR_PED(Var0, 0, &Var0, 0))
			{
				SYSTEM::WAIT(0);
				Var0.x = (Var0.x + 2f);
			}
			fVar1 = ENTITY::GET_ENTITY_HEADING(iParam0);
			func_16(iParam0, Var0, fVar1, 1, 1);
		}
	}
}

void func_16(int iParam0, struct<3> Param1, float fParam2, bool bParam3, bool bParam4)//Position - 0x9FC
{
	if (func_10(iParam0))
	{
		if (bParam3)
		{
			Param1.f_2 = -200f;
		}
		ENTITY::SET_ENTITY_COORDS(iParam0, Param1, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(iParam0, fParam2);
		if (bParam4)
		{
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam0, 0, 0);
		}
	}
}

void func_17(int iParam0, int iParam1, int iParam2)//Position - 0xA3E
{
	if (func_20(iParam0))
	{
		if (func_10(iParam1))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(iParam0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(ENTITY::GET_ENTITY_ATTACHED_TO(iParam0), 0);
			}
			else
			{
				ENTITY::FREEZE_ENTITY_POSITION(iParam0, 0);
			}
			PED::SET_PED_INTO_VEHICLE(iParam0, iParam1, uParam2);
		}
	}
}

void func_18()//Position - 0xA80
{
	Global_38DE = 0;
	func_19();
}

void func_19()//Position - 0xA90
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

int func_20(int iParam0)//Position - 0xAE7
{
	if (func_10(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_21(int iParam0, bool bParam1)//Position - 0xB07
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

void func_22(int iParam0, int iParam1, int iParam2)//Position - 0xB43
{
	func_23(0, 0, iParam2, 1);
	if (iParam0 == 1)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	}
	if (iParam1 == 1)
	{
		func_21(500, 0);
	}
}

void func_23(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xB77
{
	var uVar0;
	
	uVar0 = PLAYER::GET_PLAYER_INDEX();
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(uVar0, 0);
	PLAYER::SET_PLAYER_CONTROL(iVar0, iParam3, 0);
	func_24(0, 1, 0, 0);
	if (iParam2 == 1)
	{
		HUD::DISPLAY_RADAR(1);
		HUD::DISPLAY_HUD(1);
	}
	HUD::CLEAR_HELP(1);
	if (iParam0 == 1)
	{
		CAM::SET_WIDESCREEN_BORDERS(0, 0);
	}
	if (iParam1 == 1)
	{
		if ((iLocal_45 != 0 && iLocal_45 != joaat("object")) && iLocal_45 != joaat("gadget_parachute"))
		{
			if (func_10(PLAYER::PLAYER_PED_ID()))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_45, 0))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_45, 0);
				}
			}
		}
	}
	if (func_20(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
	}
}

void func_24(bool bParam0, bool bParam1, int iParam2, int iParam3)//Position - 0xC1E
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID());
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
		func_31(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_3839.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(0);
			}
			if (!func_7())
			{
				Global_3839.f_1 = 3;
			}
			Global_3D4C = 5;
		}
		func_30(1, iParam3, iParam2);
		Global_D5E4 = 1;
		Global_105F5 = 1;
		Global_10A93 = 1;
	}
	else
	{
		func_31(0);
		HUD::THEFEED_RESUME();
		Global_D5E4 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
		func_30(0, iParam3, iParam2);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_25(PLAYER::PLAYER_ID()))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
		}
		Global_10A93 = 0;
	}
}

int func_25(int iParam0)//Position - 0xCEF
{
	if (func_27(iParam0, 0))
	{
		return 1;
	}
	if (func_26())
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

bool func_26()//Position - 0xD30
{
	return MISC::IS_BIT_SET(Global_240005, 3);
}

bool func_27(int iParam0, int iParam1)//Position - 0xD41
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_28(-1, 0) == 8;
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

int func_28(int iParam0, bool bParam1)//Position - 0xD8C
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_29();
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

int func_29()//Position - 0xDCD
{
	return Global_1407E1;
}

int func_30(int iParam0, int iParam1, int iParam2)//Position - 0xDD9
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

void func_31(int iParam0)//Position - 0xE0A
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

void func_32(int iParam0)//Position - 0xE2D
{
	switch (iParam0)
	{
		case 2:
			if (iLocal_329 == 0)
			{
				while (!func_33("NIGEL2_START", 0))
				{
					SYSTEM::WAIT(0);
				}
				iLocal_329++;
			}
			if (iLocal_329 == 1)
			{
				while (!func_33("NIGEL2_CAR", 0))
				{
					SYSTEM::WAIT(0);
				}
				iLocal_329++;
			}
			if (iLocal_329 == 2)
			{
				while (!func_33("NIGEL2_JUMP", 1))
				{
					SYSTEM::WAIT(0);
				}
				iLocal_329++;
			}
			break;
	}
}

int func_33(char* sParam0, bool bParam1)//Position - 0xEAE
{
	if (bParam1)
	{
		if (!AUDIO::PREPARE_MUSIC_EVENT(sParam0))
		{
			return 0;
		}
	}
	if (AUDIO::TRIGGER_MUSIC_EVENT(sParam0))
	{
		return 1;
	}
	return 0;
}

void func_34(int iParam0)//Position - 0xED7
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		switch (iParam0)
		{
			case 1:
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(22f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				break;
			
			case 3:
				if (iLocal_272 == 3)
				{
					func_14(PLAYER::PLAYER_PED_ID(), &Local_534, -1);
					func_11(&Local_534, 391.08f, -615.87f, 28.33f, 333.66f, 0);
					func_42(&cLocal_542);
					func_41();
					while (!func_35(1, 1093140480, 0))
					{
						func_42(&cLocal_542);
						func_41();
						SYSTEM::WAIT(0);
					}
				}
				break;
			}
	}
}

int func_35(int iParam0, int iParam1, int iParam2)//Position - 0xF73
{
	int iVar0;
	
	iVar0 = 1;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if ((!PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
		{
			if (!func_40(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), iParam1, 1, 1056964608, 0, 1))
			{
				iVar0 = 0;
			}
			else if (iParam2 == 1)
			{
				iVar0 = 0;
				if (!func_39(PLAYER::PLAYER_PED_ID(), -828834893))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
				}
			}
			if (ENTITY::IS_ENTITY_IN_AIR(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
			{
				iVar0 = 0;
			}
		}
	}
	func_38();
	if (func_37())
	{
		func_18();
		iVar0 = 0;
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		if (!func_36())
		{
			return 0;
		}
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	}
	return 1;
}

bool func_36()//Position - 0x1046
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

int func_37()//Position - 0x1069
{
	if (Global_3D4C != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_38()//Position - 0x108B
{
	PAD::DISABLE_CONTROL_ACTION(0, 21, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 257, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 23, 1);
}

int func_39(int iParam0, int iParam1)//Position - 0x10DC
{
	if (func_20(iParam0))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_40(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5)//Position - 0x110F
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

void func_41()//Position - 0x1291
{
	if (func_10(Local_532))
	{
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED(sLocal_361, Local_532, 0);
		}
	}
	if (func_10(Local_531))
	{
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED(sLocal_360, Local_531, 0);
		}
	}
	if (func_10(Local_533))
	{
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED(sLocal_363, Local_533, 0);
		}
	}
}

void func_42(char[4] cParam0)//Position - 0x12ED
{
	func_24(1, 1, 0, 0);
	CUTSCENE::REQUEST_CUTSCENE(cParam0, 8);
}

void func_43(int iParam0, int iParam1, int iParam2)//Position - 0x1305
{
	if (func_526() && func_45())
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
		func_44(0);
	}
}

void func_44(int iParam0)//Position - 0x13C9
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

bool func_45()//Position - 0x13F2
{
	return MISC::IS_BIT_SET(Global_15F6A.f_14, 13);
}

void func_46()//Position - 0x1406
{
	char* sVar0;
	var uVar1;
	
	sVar0 = 0;
	switch (iLocal_273)
	{
		case 0:
			if (func_33("NIGEL2_MISSION_FAIL", 0))
			{
				HUD::CLEAR_PRINTS();
				HUD::CLEAR_HELP(1);
				if (func_37())
				{
					func_18();
				}
				func_90();
				if (func_13(Local_534))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_534, 0) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						VEHICLE::BRING_VEHICLE_TO_HALT(Local_534, 6f, 2, 0);
					}
				}
				if (func_20(Local_532))
				{
					if (PED::IS_PED_IN_GROUP(Local_532))
					{
						PED::REMOVE_PED_FROM_GROUP(Local_532);
					}
					TASK::CLEAR_PED_TASKS(Local_532);
					if ((iLocal_320 == 7 || iLocal_320 == 6) || iLocal_320 == 4)
					{
						PED::SET_PED_FLEE_ATTRIBUTES(Local_532, 2, 0);
						TASK::OPEN_SEQUENCE_TASK(&uVar1);
						if (PED::IS_PED_IN_ANY_VEHICLE(Local_532, 0))
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 320);
						}
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uVar1);
						TASK::TASK_PERFORM_SEQUENCE(Local_532, uVar1);
						TASK::CLEAR_SEQUENCE_TASK(&uVar1);
						PED::SET_PED_KEEP_TASK(Local_532, 1);
					}
				}
				if (func_20(Local_531))
				{
					if (PED::IS_PED_IN_GROUP(Local_531))
					{
						PED::REMOVE_PED_FROM_GROUP(Local_531);
					}
					TASK::CLEAR_PED_TASKS(Local_531);
					if ((iLocal_320 == 5 || iLocal_320 == 4) || iLocal_320 == 6)
					{
						PED::SET_PED_FLEE_ATTRIBUTES(Local_531, 2, 0);
						if (PED::IS_PED_IN_ANY_VEHICLE(Local_531, 0))
						{
							TASK::OPEN_SEQUENCE_TASK(&uVar1);
							TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 320);
							TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(uVar1);
							TASK::TASK_PERFORM_SEQUENCE(Local_531, uVar1);
							TASK::CLEAR_SEQUENCE_TASK(&uVar1);
							PED::SET_PED_KEEP_TASK(Local_531, 1);
						}
						else
						{
							TASK::TASK_SMART_FLEE_PED(Local_531, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
							PED::SET_PED_KEEP_TASK(Local_531, 1);
						}
					}
				}
				if (func_13(Local_535))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_535))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_535);
					}
					if (!bLocal_299)
					{
						func_64(0, 1);
					}
				}
				if (func_20(Local_533))
				{
					if (bLocal_299)
					{
						PED::SET_PED_KEEP_TASK(Local_533, 1);
					}
					else
					{
						TASK::CLEAR_PED_TASKS(Local_533);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_533, 2, 1);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_533, 8, 0);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_533, 1, 0);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_533, 32, 0);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_533, 64, 0);
						if ((func_13(Local_535) && PED::IS_PED_IN_VEHICLE(Local_533, Local_535, 0)) && func_13(Local_534))
						{
							TASK::OPEN_SEQUENCE_TASK(&uVar1);
							TASK::TASK_VEHICLE_MISSION_PED_TARGET(0, Local_535, PLAYER::PLAYER_PED_ID(), 8, 80f, 786468, 500f, -1f, 1);
							TASK::CLOSE_SEQUENCE_TASK(uVar1);
							TASK::TASK_PERFORM_SEQUENCE(Local_533, uVar1);
							TASK::CLEAR_SEQUENCE_TASK(&uVar1);
						}
						else
						{
							TASK::OPEN_SEQUENCE_TASK(&uVar1);
							TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(uVar1);
							TASK::TASK_PERFORM_SEQUENCE(Local_533, uVar1);
							TASK::CLEAR_SEQUENCE_TASK(&uVar1);
						}
						PED::SET_PED_KEEP_TASK(Local_533, 1);
					}
				}
				switch (iLocal_320)
				{
					case 1:
						sVar0 = "NIGEL2_F1";
						break;
					
					case 2:
						sVar0 = "NIGEL2_F2";
						break;
					
					case 3:
						sVar0 = "NIGEL2_F3";
						break;
					
					case 4:
						sVar0 = "NIGEL2_F7";
						break;
					
					case 5:
						sVar0 = "NIGEL2_F4";
						break;
					
					case 6:
						sVar0 = "NIGEL2_F8";
						break;
					
					case 7:
						sVar0 = "NIGEL2_F5";
						break;
					
					case 8:
						sVar0 = "NIGEL2_F6";
						break;
					
					case 9:
						sVar0 = "NIGEL2_F10";
						break;
					
					case 10:
						sVar0 = "NIGEL2_F9";
						break;
					
					default:
						break;
				}
				if (iLocal_320 == 0)
				{
					func_544(1);
				}
				else
				{
					func_62(sVar0, 1);
				}
				iLocal_273 = 1;
			}
			break;
		
		case 1:
			if (func_61())
			{
				if (func_59(PLAYER::PLAYER_PED_ID()))
				{
					func_57(279.4137f, -585.8815f, 42.3102f, 48.8028f);
					func_55(276.27f, -584f, 42.73f, 337.4f);
				}
				func_47(1);
				func_534();
			}
			break;
	}
}

void func_47(bool bParam0)//Position - 0x17CF
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		func_52(&(Local_537[iVar0 /*2*/]), bParam0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_52(&(Local_538[iVar0 /*2*/]), bParam0);
		iVar0++;
	}
	if (func_10(Local_533))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_533, 0);
		if (!PED::IS_PED_INJURED(Local_533))
		{
			PED::SET_PED_KEEP_TASK(Local_533, 1);
		}
	}
	PED::SET_PED_MODEL_IS_SUPPRESSED(Local_533.f_1, 0);
	func_52(&Local_533, bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(Local_531.f_1, 0);
	if (func_20(Local_531))
	{
		PED::SET_PED_KEEP_TASK(Local_531, 1);
	}
	func_52(&Local_531, bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(Local_532.f_1, 0);
	if (func_20(Local_532))
	{
		PED::SET_PED_KEEP_TASK(Local_532, 1);
	}
	func_52(&Local_532, bParam0);
	func_51(&Local_348);
	if (func_13(Local_534))
	{
		VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Local_534, 1);
		VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_534, 1);
		VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(Local_534, 1);
		if (iLocal_317)
		{
			VEHICLE::SET_FORCE_HD_VEHICLE(Local_534, 0);
			iLocal_317 = 0;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_534))
	{
		VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(Local_534);
	}
	func_48(&Local_534, bParam0);
	if (func_13(Local_535))
	{
		ENTITY::SET_ENTITY_PROOFS(Local_535, 0, 0, 0, 0, 0, 0, 0, 0);
		VEHICLE::SET_DISABLE_VEHICLE_ENGINE_FIRES(Local_535, 0);
		VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Local_535, 1);
		VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_535, 1);
		VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(Local_535, 1);
		if (bLocal_299)
		{
			VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_535, 0f);
		}
	}
	func_48(&Local_535, bParam0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_48(&(Local_539[iVar0 /*2*/]), bParam0);
		iVar0++;
	}
	func_48(&Local_540, bParam0);
	func_52(&Local_536, bParam0);
}

void func_48(var uParam0, bool bParam1)//Position - 0x1971
{
	if (bParam1)
	{
		func_50(uParam0);
	}
	else
	{
		func_49(uParam0);
	}
}

void func_49(var uParam0)//Position - 0x198D
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		ENTITY::IS_ENTITY_DEAD(*uParam0);
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*uParam0, 1))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam0);
		}
	}
}

void func_50(int iParam0)//Position - 0x19C4
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, 1, 0);
		}
		if (func_13(*iParam0))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, 1))
			{
				if (func_10(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *iParam0, 0))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
						return;
					}
				}
				VEHICLE::DELETE_VEHICLE(iParam0);
			}
		}
		else
		{
			if (func_10(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *iParam0, 0))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
					return;
				}
			}
			VEHICLE::DELETE_VEHICLE(iParam0);
		}
	}
}

void func_51(int iParam0)//Position - 0x1A60
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*iParam0))
		{
			ENTITY::DETACH_ENTITY(*iParam0, 1, 1);
		}
		OBJECT::DELETE_OBJECT(iParam0);
	}
}

void func_52(int iParam0, bool bParam1)//Position - 0x1A8B
{
	if (bParam1)
	{
		func_54(iParam0);
	}
	else
	{
		func_53(iParam0, 1, 0, 1);
	}
}

void func_53(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1AAA
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

void func_54(var uParam0)//Position - 0x1AF9
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*uParam0, 0);
		}
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam0, 1, 0);
		}
		PED::DELETE_PED(uParam0);
	}
}

void func_55(struct<3> Param0, float fParam1)//Position - 0x1B38
{
	func_56(&(Global_16D94.f_877), Param0, fParam1);
}

void func_56(var uParam0, struct<3> Param1, var uParam2)//Position - 0x1B51
{
	*uParam0 = { Param1 };
	uParam0->f_6 = uParam2;
}

void func_57(struct<3> Param0, float fParam1)//Position - 0x1B67
{
	if (func_58(Global_10B85, 0f, 0f, 0f))
	{
		Global_10B85 = { Param0 };
		Global_10B88 = fParam1;
	}
}

bool func_58(struct<3> Param0, struct<3> Param1)//Position - 0x1B92
{
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

int func_59(int iParam0)//Position - 0x1BBB
{
	int iVar0;
	struct<3> Var1;
	
	if (!INTERIOR::IS_VALID_INTERIOR(iLocal_336))
	{
		return 0;
	}
	if (func_10(iParam0))
	{
		iVar0 = INTERIOR::GET_KEY_FOR_ENTITY_IN_ROOM(iParam0);
		if (func_60(iVar0))
		{
			return 1;
		}
	}
	else
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) };
		if (INTERIOR::GET_INTERIOR_AT_COORDS(Var1) == iLocal_336)
		{
			return 1;
		}
	}
	return 0;
}

int func_60(int iParam0)//Position - 0x1C11
{
	if ((((iParam0 == MISC::GET_HASH_KEY("v_40_Room1") || iParam0 == MISC::GET_HASH_KEY("v_40_Room2")) || iParam0 == MISC::GET_HASH_KEY("v_40_Room3")) || iParam0 == MISC::GET_HASH_KEY("v_40_Room4")) || iParam0 == MISC::GET_HASH_KEY("V_40_Room005"))
	{
		return 1;
	}
	return 0;
}

int func_61()//Position - 0x1C70
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

void func_62(char* sParam0, bool bParam1)//Position - 0x1C9D
{
	func_63(sParam0);
	func_544(bParam1);
}

void func_63(char* sParam0)//Position - 0x1CB1
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

void func_64(bool bParam0, bool bParam1)//Position - 0x1CF1
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_231))
	{
		iLocal_133 = 0;
		func_89();
		PED::REMOVE_RELATIONSHIP_GROUP(iLocal_240);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(-9999f, -9999f, -9999f, 9999f, 9999f, 9999f, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
			PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), 1);
			PED::SET_CREATE_RANDOM_COPS(1);
		}
		if (bLocal_149)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_88());
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_87());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_86());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_85());
		if (!CAM::IS_SCREEN_FADED_OUT() && !bParam0)
		{
			func_84();
			func_83();
			func_80();
		}
		else
		{
			func_76();
			func_75();
		}
		if (bParam1)
		{
			func_65(0);
		}
	}
}

void func_65(bool bParam0)//Position - 0x1DAD
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 44)
	{
		func_66(iVar0, bParam0);
		iVar0++;
	}
}

void func_66(int iParam0, bool bParam1)//Position - 0x1DD0
{
	if (bParam1)
	{
		if (!func_74(iParam0, 2, 1))
		{
			func_73(iParam0, 2, 1);
		}
	}
	else if (func_74(iParam0, 2, 1))
	{
		func_67(iParam0, 2, 1);
	}
}

void func_67(int iParam0, int iParam1, bool bParam2)//Position - 0x1E07
{
	var uVar0;
	
	if (bParam2)
	{
		MISC::CLEAR_BIT(&(Global_15F9E.f_4F3[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_72() == 0)
		{
			uVar0 = func_70(func_71(iParam0), -1, 0);
			MISC::CLEAR_BIT(&uVar0, iParam1);
			func_68(func_71(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_17C49.f_29C[iParam0]), iParam1);
	}
}

void func_68(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1E6F
{
	int iVar0;
	
	iVar0 = Global_25744D[iParam0 /*6*/][func_69(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, uParam1, iParam3);
	}
}

int func_69(var uParam0)//Position - 0x1E9A
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_29();
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

int func_70(int iParam0, int iParam1, int iParam2)//Position - 0x1ECE
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_25744D[iParam0 /*6*/][func_69(iParam1)];
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_71(int iParam0)//Position - 0x1F00
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

int func_72()//Position - 0x21A9
{
	return Global_5F7C;
}

void func_73(int iParam0, int iParam1, bool bParam2)//Position - 0x21B4
{
	var uVar0;
	
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_15F9E.f_4F3[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_72() == 0)
		{
			uVar0 = func_70(func_71(iParam0), -1, 0);
			MISC::SET_BIT(&uVar0, iParam1);
			func_68(func_71(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_17C49.f_29C[iParam0]), iParam1);
	}
}

int func_74(int iParam0, int iParam1, bool bParam2)//Position - 0x221C
{
	if (bParam2)
	{
		return MISC::IS_BIT_SET(Global_15F9E.f_4F3[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_72() == 0)
		{
			return MISC::IS_BIT_SET(func_70(func_71(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return MISC::IS_BIT_SET(Global_17C49.f_29C[iParam0], iParam1);
	}
	return 0;
}

void func_75()//Position - 0x227C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 85)
	{
		iLocal_247[iVar0] = 0;
		Local_215[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_151[iVar0] = 0f;
		fLocal_152[iVar0] = 0f;
		fLocal_153[iVar0] = 0f;
		fLocal_154[iVar0] = 0f;
		iLocal_191[iVar0] = 0;
		fLocal_155[iVar0] = 0f;
		iLocal_192[iVar0] = 0;
		iLocal_241[iVar0] = 0;
		iLocal_193[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		iLocal_248[iVar0] = 0;
		iVar0++;
	}
	iLocal_198 = 0;
	iVar0 = 0;
	while (iVar0 < 70)
	{
		iLocal_249[iVar0] = 0;
		Local_216[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_166[iVar0] = 0f;
		fLocal_167[iVar0] = 0f;
		fLocal_168[iVar0] = 0f;
		fLocal_169[iVar0] = 0f;
		iLocal_197[iVar0] = 0;
		iLocal_242[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iLocal_251[iVar0] = 0;
		iVar0++;
	}
	iLocal_200 = 0;
	iVar0 = 0;
	while (iVar0 < 70)
	{
		iLocal_250[iVar0] = 0;
		Local_217[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_160[iVar0] = 0f;
		fLocal_161[iVar0] = 0f;
		fLocal_162[iVar0] = 0f;
		fLocal_163[iVar0] = 0f;
		iLocal_194[iVar0] = 0;
		fLocal_164[iVar0] = 0f;
		iLocal_195[iVar0] = 0;
		iLocal_243[iVar0] = 0;
		iLocal_196[iVar0] = 0;
		iVar0++;
	}
	iLocal_199 = 0;
	iLocal_202 = 0;
	iLocal_205 = 0;
	iLocal_206 = 0;
	iLocal_207 = 0;
}

void func_76()//Position - 0x2409
{
	func_79();
	func_78();
	func_77();
}

void func_77()//Position - 0x241D
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 70)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_250[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_250[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_250[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_250[iVar0]);
				}
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_250[iVar0], -1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_250[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_250[iVar0]));
			}
		}
		iLocal_195[iVar0] = 0;
		if (!bLocal_129 && !bLocal_142)
		{
			if (iLocal_194[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_194[iVar0], &cLocal_231);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 70)
	{
		if (!iLocal_243[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_243[iVar0]);
		}
		iVar0++;
	}
}

void func_78()//Position - 0x2513
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 70)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_249[iVar0]))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_249[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_249[iVar0]));
			}
		}
		iLocal_197[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 70)
	{
		if (!iLocal_242[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_242[iVar0]);
		}
		iVar0++;
	}
	iLocal_203 = 0;
	iLocal_200 = 0;
}

void func_79()//Position - 0x2590
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 85)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_247[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_247[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_247[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_247[iVar0]);
				}
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_247[iVar0], -1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_247[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_247[iVar0]));
			}
		}
		if (!bLocal_129 && !bLocal_142)
		{
			if (iLocal_191[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_191[iVar0], &cLocal_231);
			}
		}
		iLocal_192[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 85)
	{
		if (!iLocal_241[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_241[iVar0]);
		}
		iVar0++;
	}
	iLocal_202 = 0;
	iLocal_198 = 0;
}

void func_80()//Position - 0x268E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 70)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_250[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_250[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_250[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_250[iVar0]);
				}
			}
			func_82(iLocal_250[iVar0]);
			func_81(iLocal_250[iVar0]);
		}
		iLocal_195[iVar0] = 0;
		iLocal_196[iVar0] = 0;
		if (!bLocal_129 && !bLocal_142)
		{
			if (iLocal_194[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_194[iVar0], &cLocal_231);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 70)
	{
		if (!iLocal_243[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_243[iVar0]);
		}
		iVar0++;
	}
	iLocal_204 = 0;
}

void func_81(int iParam0)//Position - 0x275B
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iParam0);
	}
}

void func_82(int iParam0)//Position - 0x2772
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
				if (bLocal_150)
				{
					PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 65536, 1);
					PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 2, 0);
				}
				PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 6, 0);
			}
		}
	}
}

void func_83()//Position - 0x280B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 70)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_249[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_249[iVar0]))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_249[iVar0], 1, 0);
			}
			func_81(iLocal_249[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 70)
	{
		if (!iLocal_242[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_242[iVar0]);
		}
		iVar0++;
	}
	iLocal_203 = 0;
	iLocal_200 = 0;
}

void func_84()//Position - 0x288E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 85)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_247[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_247[iVar0]))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_247[iVar0], 1, 0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_247[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_247[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_247[iVar0]);
				}
			}
			func_82(iLocal_247[iVar0]);
			func_81(iLocal_247[iVar0]);
		}
		iLocal_192[iVar0] = 0;
		iLocal_193[iVar0] = 0;
		if (!bLocal_129 && !bLocal_142)
		{
			if (iLocal_191[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_191[iVar0], &cLocal_231);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 85)
	{
		if (!iLocal_241[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_241[iVar0]);
		}
		iVar0++;
	}
	iLocal_202 = 0;
	iLocal_198 = 0;
}

int func_85()//Position - 0x297B
{
	return joaat("s_m_y_cop_01");
}

int func_86()//Position - 0x2988
{
	return joaat("police");
}

int func_87()//Position - 0x2995
{
	return joaat("sultan");
}

int func_88()//Position - 0x29A2
{
	if (iLocal_244 == 0)
	{
		return joaat("a_m_y_business_01");
	}
	return iLocal_244;
}

void func_89()//Position - 0x29BF
{
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE();
	VEHICLE::SET_NUMBER_OF_PARKED_VEHICLES(-1);
	VEHICLE::SET_GARBAGE_TRUCKS(1);
	VEHICLE::SET_ALL_LOW_PRIORITY_VEHICLE_GENERATORS_ACTIVE(1);
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(1f);
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
	STREAMING::SET_PED_POPULATION_BUDGET(3);
}

void func_90()//Position - 0x29E9
{
	func_91(&(Local_533.f_2));
	func_91(&(Local_534.f_2));
	func_91(&(Local_532.f_2));
	func_91(&(Local_531.f_2));
}

void func_91(var uParam0)//Position - 0x2A15
{
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		HUD::SET_BLIP_ROUTE(*uParam0, 0);
		HUD::REMOVE_BLIP(uParam0);
	}
}

void func_92()//Position - 0x2A35
{
	if (func_284(iLocal_334, 1000))
	{
		if (func_20(Local_532) && func_13(Local_534))
		{
			if (PED::IS_PED_IN_VEHICLE(Local_532, Local_534, 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_534))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_534);
					VEHICLE::REMOVE_VEHICLE_RECORDING(1, sLocal_359);
				}
				if (!func_39(Local_532, -258271821))
				{
					TASK::TASK_VEHICLE_DRIVE_WANDER(Local_532, Local_534, 60f, 786469);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_532, 1);
					PED::SET_PED_KEEP_TASK(Local_532, 1);
				}
			}
		}
		func_21(500, 1);
		func_93(100, 1);
		func_534();
	}
}

void func_93(int iParam0, bool bParam1)//Position - 0x2AD0
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_282();
	if (iVar0 == -1)
	{
		return;
	}
	if (!Global_178B8[iVar0 /*10*/].f_4)
	{
		return;
	}
	if (Global_178B8[iVar0 /*10*/].f_5)
	{
		return;
	}
	if (Global_178B8[iVar0 /*10*/].f_6)
	{
		return;
	}
	func_254(iVar0, 0);
	MISC::SET_BIT(&Global_10B8D, 1);
	if (Global_178B8[iVar0 /*10*/].f_9 == -1)
	{
	}
	else
	{
		func_253(&(Global_178B8[iVar0 /*10*/].f_9));
	}
	if (bParam1)
	{
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	func_241(iVar0, 1, 0, 0);
	func_240(0, 0);
	MemCopy(&uVar1, {func_238(iVar0)}, 4);
	func_235(&uVar1, func_236());
	func_118();
	if (MISC::IS_BIT_SET(Global_17C49.f_204E.f_19, 3))
	{
		func_117();
	}
	func_100();
	if (iParam0 == 210 || iParam0 == 211)
	{
		func_96(iParam0, 406.38f, -1635.86f);
	}
	else if (iParam0 == 111)
	{
		func_96(iParam0, 1973.84f, 3814.89f);
	}
	else if (iParam0 != 322)
	{
		func_96(iParam0, 0, 0);
	}
	func_94();
}

int func_94()//Position - 0x2BFC
{
	if (func_95(0))
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

bool func_95(bool bParam0)//Position - 0x2C47
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_10B8D, 0);
}

void func_96(int iParam0, int iParam1, int iParam2)//Position - 0x2C72
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
		func_99((891 + iParam0), 1, -1, 1);
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
		func_97();
	}
}

void func_97()//Position - 0x2D5A
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
		func_98(13, SYSTEM::FLOOR(Global_17C49.f_2100.f_F0D));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_10A95)
		{
			if (func_72() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_17B3F = 0;
				}
				if (!Global_D5DE)
				{
					func_94();
				}
			}
		}
	}
}

int func_98(int iParam0, int iParam1)//Position - 0x321B
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

int func_99(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x326C
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
		iParam2 = func_29();
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

void func_100()//Position - 0x34C9
{
	func_116();
	func_108();
	func_104();
	func_103();
	func_102();
	func_101();
	Global_15F8F = 0;
	Global_14A3E = -1;
	MISC::CLEAR_BIT(&(Global_15F6A.f_14), 17);
	Global_15F8D = 0;
	MISC::PAUSE_DEATH_ARREST_RESTART(0);
	MISC::IGNORE_NEXT_RESTART(0);
	MISC::SET_FADE_IN_AFTER_DEATH_ARREST(1);
	MISC::SET_FADE_OUT_AFTER_ARREST(1);
	MISC::SET_FADE_OUT_AFTER_DEATH(1);
	func_44(0);
}

void func_101()//Position - 0x3522
{
	Global_10B85 = { 0f, 0f, 0f };
	Global_10B88 = 0f;
	Global_15F6A.f_15 = 145;
}

void func_102()//Position - 0x3540
{
	StringCopy(&Global_10B7D, "", 16);
	StringCopy(&Global_10B81, "", 16);
}

void func_103()//Position - 0x355C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		Global_15F6A.f_16[iVar0] = 0;
		iVar0++;
	}
}

void func_104()//Position - 0x3581
{
	Global_15F6A = 13;
	Global_15F6A.f_1 = -1;
	Global_15F6A.f_2 = 0;
	Global_15F6A.f_1E = 0f;
	MISC::CLEAR_BIT(&(Global_15F6A.f_14), 25);
	Global_15F8C = 0;
	func_107(0);
	func_106();
	func_105();
	Global_15F6A.f_12 = -1;
	Global_15F6A.f_13 = -1;
}

void func_105()//Position - 0x35D0
{
	MISC::CLEAR_BIT(&(Global_15F6A.f_14), 22);
	MISC::CLEAR_BIT(&(Global_15F6A.f_14), 8);
}

void func_106()//Position - 0x35F0
{
	if (Global_15F6A.f_10 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(Global_15F6A.f_10));
		Global_15F6A.f_10 = 0;
	}
	if (Global_15F6A.f_11 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(Global_15F6A.f_11));
		Global_15F6A.f_11 = 0;
	}
}

void func_107(int iParam0)//Position - 0x362E
{
	if (iParam0 == 1)
	{
		Global_8A86 = 1;
	}
	else
	{
		Global_8A86 = 0;
	}
}

void func_108()//Position - 0x3647
{
	func_109(&Global_16D94);
}

void func_109(var uParam0)//Position - 0x3657
{
	int iVar0;
	int iVar1;
	
	*uParam0 = 145;
	func_115(&(uParam0->f_1));
	uParam0->f_6 = -1;
	uParam0->f_7 = -1;
	uParam0->f_8 = 0f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 145;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_9[iVar1] = -1;
		uParam0->f_D[iVar1] = 0;
		uParam0->f_11[iVar1] = 0;
		uParam0->f_15[iVar1] = 0;
		func_114(&(uParam0->f_19[0 /*223*/][iVar1 /*74*/]));
		func_114(&(uParam0->f_19[1 /*223*/][iVar1 /*74*/]));
		iVar0 = 0;
		while (iVar0 < 12)
		{
			uParam0->f_1D8[iVar1 /*65*/][iVar0] = -1;
			uParam0->f_1D8[iVar1 /*65*/].f_D[iVar0] = -1;
			uParam0->f_1D8[iVar1 /*65*/].f_1A[iVar0] = -1;
			iVar0++;
		}
		uParam0->f_1D8[iVar1 /*65*/].f_3B = 0;
		uParam0->f_1D8[iVar1 /*65*/].f_3C = -99;
		uParam0->f_1D8[iVar1 /*65*/].f_3D = 2;
		uParam0->f_1D8[iVar1 /*65*/].f_3E = 0;
		uParam0->f_1D8[iVar1 /*65*/].f_3F = -99;
		uParam0->f_1D8[iVar1 /*65*/].f_40 = 1;
		iVar0 = 0;
		while (iVar0 < 9)
		{
			uParam0->f_1D8[iVar1 /*65*/].f_27[iVar0] = -1;
			uParam0->f_1D8[iVar1 /*65*/].f_31[iVar0] = -1;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_29C[iVar1 /*284*/][iVar0 /*3*/].f_1 = 0;
			uParam0->f_29C[iVar1 /*284*/][iVar0 /*3*/].f_2 = 0;
			uParam0->f_29C[iVar1 /*284*/][iVar0 /*3*/] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			uParam0->f_29C[iVar1 /*284*/].f_85[iVar0 /*3*/].f_1 = 0;
			uParam0->f_29C[iVar1 /*284*/].f_85[iVar0 /*3*/].f_2 = 0;
			uParam0->f_29C[iVar1 /*284*/].f_85[iVar0 /*3*/] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			uParam0->f_5F1[iVar1 /*32*/][iVar0] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 10)
		{
			uParam0->f_5F1[iVar1 /*32*/].f_5[iVar0] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 15)
		{
			uParam0->f_5F1[iVar1 /*32*/].f_10[iVar0] = 0;
			iVar0++;
		}
		uParam0->f_652[iVar1] = 0;
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_843[iVar1 /*15*/][iVar0] = 0;
			uParam0->f_843[iVar1 /*15*/].f_5[iVar0] = 0;
			uParam0->f_843[iVar1 /*15*/].f_A[iVar0] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_656[iVar1 /*164*/][iVar0] = 0;
			uParam0->f_656[iVar1 /*164*/].f_4[iVar0] = 0;
			uParam0->f_656[iVar1 /*164*/].f_8[iVar0] = 0;
			uParam0->f_656[iVar1 /*164*/].f_C[iVar0] = 0;
			uParam0->f_656[iVar1 /*164*/].f_10[iVar0] = 0;
			uParam0->f_656[iVar1 /*164*/].f_14[iVar0] = 0;
			uParam0->f_656[iVar1 /*164*/].f_18[iVar0] = 0;
			uParam0->f_656[iVar1 /*164*/].f_1C[iVar0] = 0;
			uParam0->f_656[iVar1 /*164*/].f_20[iVar0] = 0;
			uParam0->f_656[iVar1 /*164*/].f_24[iVar0] = 0;
			uParam0->f_656[iVar1 /*164*/].f_28[iVar0] = 0;
			uParam0->f_656[iVar1 /*164*/].f_2C[iVar0] = 0;
			uParam0->f_656[iVar1 /*164*/].f_30[iVar0] = 0;
			uParam0->f_656[iVar1 /*164*/].f_34[iVar0] = 0;
			uParam0->f_656[iVar1 /*164*/].f_38[iVar0] = 0;
			uParam0->f_656[iVar1 /*164*/].f_3C[iVar0] = 0;
			uParam0->f_656[iVar1 /*164*/].f_40[iVar0] = 0;
			uParam0->f_656[iVar1 /*164*/].f_44[iVar0] = 0;
			uParam0->f_656[iVar1 /*164*/].f_48[iVar0] = 0;
			uParam0->f_656[iVar1 /*164*/].f_4C[iVar0] = 0;
			uParam0->f_656[iVar1 /*164*/].f_50[iVar0] = 0;
			uParam0->f_656[iVar1 /*164*/].f_54[iVar0] = 0;
			uParam0->f_656[iVar1 /*164*/].f_58[iVar0] = 0;
			uParam0->f_656[iVar1 /*164*/].f_5C[iVar0] = 0;
			uParam0->f_656[iVar1 /*164*/].f_60[iVar0] = 0;
			uParam0->f_656[iVar1 /*164*/].f_64[iVar0] = 0;
			uParam0->f_656[iVar1 /*164*/].f_68[iVar0] = 0;
			uParam0->f_656[iVar1 /*164*/].f_6C[iVar0] = 0;
			uParam0->f_656[iVar1 /*164*/].f_70[iVar0] = 0;
			uParam0->f_656[iVar1 /*164*/].f_74[iVar0] = 0;
			uParam0->f_656[iVar1 /*164*/].f_78[iVar0] = 0;
			uParam0->f_656[iVar1 /*164*/].f_7C[iVar0] = 0;
			uParam0->f_656[iVar1 /*164*/].f_80[iVar0] = 0;
			uParam0->f_656[iVar1 /*164*/].f_84[iVar0] = 0;
			uParam0->f_656[iVar1 /*164*/].f_88[iVar0] = 0;
			uParam0->f_656[iVar1 /*164*/].f_8C[iVar0] = 0;
			uParam0->f_656[iVar1 /*164*/].f_90[iVar0] = 0;
			uParam0->f_656[iVar1 /*164*/].f_94[iVar0] = 0;
			uParam0->f_656[iVar1 /*164*/].f_98[iVar0] = 0;
			uParam0->f_656[iVar1 /*164*/].f_9C[iVar0] = 0;
			uParam0->f_656[iVar1 /*164*/].f_A0[iVar0] = 0;
			iVar0++;
		}
		iVar1++;
	}
	func_113(&(uParam0->f_871));
	func_111(&(uParam0->f_877));
	func_110(&(uParam0->f_8B9));
}

void func_110(var uParam0)//Position - 0x3B9D
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_111(var uParam0)//Position - 0x3BB8
{
	func_112(&(uParam0->f_C));
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = { 0f, 0f, 0f };
	uParam0->f_6 = 0f;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
}

void func_112(var uParam0)//Position - 0x3BE7
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

void func_113(var uParam0)//Position - 0x3C98
{
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	uParam0->f_5 = -1;
}

void func_114(var uParam0)//Position - 0x3CB6
{
	int iVar0;
	
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0f;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_A = 0;
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		uParam0->f_B[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_18 = 0;
	uParam0->f_19 = 0;
	StringCopy(&(uParam0->f_1B), "", 16);
	iVar0 = 0;
	while (iVar0 <= 24)
	{
		uParam0->f_1F[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		uParam0->f_39[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_3C = 0;
	uParam0->f_3D = 0;
	uParam0->f_3E = 0;
	uParam0->f_3F = 0;
	uParam0->f_40 = 0;
	uParam0->f_41 = 0;
	uParam0->f_42 = 0;
	uParam0->f_43 = 0;
	uParam0->f_45 = 0;
	uParam0->f_46 = 0;
	uParam0->f_47 = 0;
	uParam0->f_44 = 0;
}

void func_115(var uParam0)//Position - 0x3D97
{
	*uParam0 = -15;
}

void func_116()//Position - 0x3DA5
{
	StringCopy(&Global_164CF, "", 32);
	func_109(&Global_164D7);
}

void func_117()//Position - 0x3DBF
{
	if (Global_BFC[0 /*2811*/][0 /*281*/].f_103 == 0)
	{
		Global_BFC[0 /*2811*/][0 /*281*/].f_103 = 2;
	}
	if (Global_BFC[1 /*2811*/][0 /*281*/].f_103 == 0)
	{
		Global_BFC[1 /*2811*/][0 /*281*/].f_103 = 2;
	}
	if (Global_BFC[2 /*2811*/][0 /*281*/].f_103 == 0)
	{
		Global_BFC[2 /*2811*/][0 /*281*/].f_103 = 2;
	}
	MISC::SET_BIT(&Global_8D7, 25);
	MISC::SET_BIT(&Global_8D8, 11);
}

void func_118()//Position - 0x3E3C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		iVar1 = Global_156B8[iVar0];
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_INJURED(iVar1))
		{
			iVar3 = func_232(iVar1);
			iVar2 = -99;
			switch (iVar3)
			{
				case 0:
					iVar2 = 112;
					break;
				
				case 1:
					iVar2 = 158;
					break;
				
				case 2:
					iVar2 = 154;
					break;
			}
			if (iVar2 != -99)
			{
				if (func_231(iVar1, 14, iVar2))
				{
					func_119(iVar1, 14, iVar2);
				}
				if (Global_17C49.f_6C1.f_21B[iVar3 /*65*/].f_27[2] == iVar2)
				{
					Global_17C49.f_6C1.f_21B[iVar3 /*65*/].f_27[2] = -1;
				}
			}
		}
		iVar0++;
	}
}

int func_119(int iParam0, int iParam1, int iParam2)//Position - 0x3EFD
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	
	if (PED::IS_PED_INJURED(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	Global_10A0A[1 /*14*/] = { func_166(iVar0, iParam1, iParam2) };
	if (!MISC::IS_BIT_SET(Global_10A0A[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (!func_231(iParam0, iParam1, iParam2))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar2 = { func_162(iVar0, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 14)
		{
			if (uVar2[iVar1] != -99)
			{
				func_119(iParam0, iVar1, uVar2[iVar1]);
			}
			iVar1++;
		}
	}
	else if (iParam1 == 13)
	{
		uVar5 = { func_159(iVar0, iParam2) };
		iVar3 = 0;
		while (iVar3 <= 8)
		{
			if (!func_119(iParam0, 14, uVar5[iVar3]))
			{
				iVar4 = 0;
			}
			iVar3++;
		}
		return iVar4;
	}
	else if (iParam1 == 14)
	{
		PED::CLEAR_PED_PROP(iParam0, Global_10A0A[1 /*14*/].f_C);
	}
	else
	{
		uVar6 = { func_162(iVar0, 0) };
		Global_10A0A[1 /*14*/] = { func_166(iVar0, iParam1, uVar6[iParam1]) };
		if (PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, func_158(iParam1)) > 0 && PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, func_158(iParam1), Global_10A0A[1 /*14*/].f_3) > 0)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, func_158(iParam1), Global_10A0A[1 /*14*/].f_3, Global_10A0A[1 /*14*/].f_4, 0);
		}
	}
	if (func_157(iParam0, iVar0, &iVar7, 0))
	{
		func_122(iParam0, 2, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	if (func_120(iParam0, iVar0, &iVar7))
	{
		func_122(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	return 1;
}

int func_120(int iParam0, int iParam1, int iParam2)//Position - 0x40B8
{
	int iVar0;
	
	iVar0 = func_121(iParam1);
	if (Global_17C49.f_6C1.f_21B[iVar0 /*65*/].f_3F != -99)
	{
		if (!func_231(iParam0, Global_17C49.f_6C1.f_21B[iVar0 /*65*/].f_40, Global_17C49.f_6C1.f_21B[iVar0 /*65*/].f_3F))
		{
			*iParam2 = Global_17C49.f_6C1.f_21B[iVar0 /*65*/].f_3E;
			Global_17C49.f_6C1.f_21B[iVar0 /*65*/].f_3F = -99;
			Global_17C49.f_6C1.f_21B[iVar0 /*65*/].f_40 = 1;
			return 1;
		}
	}
	return 0;
}

int func_121(int iParam0)//Position - 0x4144
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

int func_122(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x417F
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
	
	if (PED::IS_PED_INJURED(iParam0) || iParam2 == -99)
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
		Global_10A0A[1 /*14*/] = { func_166(iVar10, iParam1, iParam2) };
		if (!func_156(iParam3))
		{
			Global_10A09 = (Global_10A09 - 1);
			return 0;
		}
		func_152(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("player_one"))
			{
				iVar5 = func_150(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = func_150(iParam0, 9);
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
			iVar7 = func_145(iParam0, 1);
			if (!func_144(iVar10, 14, iVar7))
			{
				iVar7 = -99;
			}
			iVar8 = func_145(iParam0, 0);
			if (!func_143(iVar10, 14, iVar8) && !func_139(iVar10, 14, iVar8))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("player_one"))
			{
				iVar9 = func_145(iParam0, 2);
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
			uVar11 = { func_162(iVar10, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar11[iVar0] != -99)
			{
				Global_10A0A[1 /*14*/] = { func_166(iVar10, iVar0, uVar11[iVar0]) };
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
							uVar12 = { func_159(iVar10, uVar11[iVar0]) };
						}
						iVar1 = 0;
						while (iVar1 <= 8)
						{
							Global_10A0A[1 /*14*/] = { func_166(iVar10, 14, uVar12[iVar1]) };
							func_138(iParam0, Global_10A0A[1 /*14*/].f_C, Global_10A0A[1 /*14*/].f_3, Global_10A0A[1 /*14*/].f_4);
							func_152(14);
							if (Global_10A09 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = func_130(iParam0, iVar10, 14, uVar12[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_122(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
							func_129(iVar10, 2, 20, &iVar4);
						}
						if (iParam4 == -1)
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, func_158(iVar0), Global_10A0A[1 /*14*/].f_3, Global_10A0A[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, func_158(iVar0)));
						}
						else
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, func_158(iVar0), Global_10A0A[1 /*14*/].f_3, Global_10A0A[1 /*14*/].f_4, iParam4);
						}
						func_152(iVar0);
						if (Global_10A09 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = func_130(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_122(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_10A0A[1 /*14*/] = { func_166(iVar10, iVar0, func_128(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_10A0A[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (func_157(iParam0, iVar10, &iVar4, 1))
							{
								func_122(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
							}
						}
					}
					else
					{
						uVar13 = { func_162(iVar10, 0) };
						func_122(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var14 = { func_166(iVar10, 8, iVar5) };
			if (iVar5 != -99)
			{
				if (func_126(iVar10, iParam2, 8, iVar5, &uVar11, &Var14))
				{
					func_122(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var14 = { func_166(iVar10, 9, iVar6) };
			if (iVar6 != -99)
			{
				if (func_126(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_122(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var14 = { func_166(iVar10, 14, iVar7) };
			if (iVar7 != -99)
			{
				if (func_126(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_122(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var14 = { func_166(iVar10, 14, iVar8) };
			if (iVar8 != -99)
			{
				if (func_126(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_122(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var14 = { func_166(iVar10, 14, iVar9) };
			if (iVar9 != -99)
			{
				if (func_126(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_122(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
		}
	}
	else if (iParam1 == 13)
	{
		uVar15 = { func_159(iVar10, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_10A0A[1 /*14*/] = { func_166(iVar10, 14, uVar15[iVar1]) };
			func_138(iParam0, Global_10A0A[1 /*14*/].f_C, Global_10A0A[1 /*14*/].f_3, Global_10A0A[1 /*14*/].f_4);
			func_152(14);
			if (Global_10A09 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_130(iParam0, iVar10, 14, uVar15[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_122(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		func_138(iParam0, Global_10A0A[1 /*14*/].f_C, Global_10A0A[1 /*14*/].f_3, Global_10A0A[1 /*14*/].f_4);
		func_152(iParam1);
		if (Global_10A09 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_130(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_122(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				iVar2++;
			}
		}
	}
	else
	{
		if (iParam4 == -1)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, func_158(iParam1), Global_10A0A[1 /*14*/].f_3, Global_10A0A[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, func_158(iParam1)));
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, func_158(iParam1), Global_10A0A[1 /*14*/].f_3, Global_10A0A[1 /*14*/].f_4, iParam4);
		}
		if (Global_10A09 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_130(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_122(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			func_123(iVar10, iParam1, iParam2);
		}
	}
	if (Global_10A09 == 1)
	{
		if (func_157(iParam0, iVar10, &iVar4, 0))
		{
			func_122(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		if (func_120(iParam0, iVar10, &iVar4))
		{
			func_122(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	Global_10A09 = (Global_10A09 - 1);
	return 1;
}

void func_123(int iParam0, int iParam1, int iParam2)//Position - 0x496C
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
	if (func_125(iParam0, 12, iVar0))
	{
		if (func_124(iParam0, iParam1, iParam2))
		{
			iVar1 = func_121(iParam0);
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

int func_124(int iParam0, int iParam1, int iParam2)//Position - 0x49F6
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

bool func_125(int iParam0, int iParam1, int iParam2)//Position - 0x4AD4
{
	Global_10A0A[1 /*14*/] = { func_166(iParam0, iParam1, iParam2) };
	return MISC::IS_BIT_SET(Global_10A0A[1 /*14*/].f_6, 2);
}

int func_126(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)//Position - 0x4AFE
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
		uVar0 = { func_159(iParam0, (*uParam4)[13]) };
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
	if (func_127(iParam0, iParam2, iParam3))
	{
		return 1;
	}
	if (iParam0 == joaat("player_zero"))
	{
		if (func_144(iParam0, iParam2, iParam3))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
		else if (func_143(iParam0, iParam2, iParam3))
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
		else if (func_139(iParam0, iParam2, iParam3))
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
		if (func_144(iParam0, iParam2, iParam3))
		{
			if ((iParam1 == 3 || iParam1 == 5) || iParam1 == 7)
			{
				return 0;
			}
			return 1;
		}
		else if (func_143(iParam0, iParam2, iParam3))
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
		else if (func_139(iParam0, iParam2, iParam3))
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
		if (func_144(iParam0, iParam2, iParam3))
		{
			if (((((iParam1 == 1 || iParam1 == 2) || iParam1 == 6) || iParam1 == 8) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
		else if (func_143(iParam0, iParam2, iParam3))
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
		else if (func_139(iParam0, iParam2, iParam3))
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

int func_127(int iParam0, int iParam1, int iParam2)//Position - 0x50F9
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

int func_128(int iParam0, int iParam1, int iParam2)//Position - 0x5192
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
				if (func_231(iParam0, iParam1, iVar0))
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
				if (func_231(iParam0, iParam1, iVar1))
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
				return func_145(iParam0, iParam2);
			}
		}
		else
		{
			return func_150(iParam0, iParam1);
		}
	}
	return -99;
}

int func_129(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x5233
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
		iVar0 = func_121(iParam0);
		Global_17C49.f_6C1.f_21B[iVar0 /*65*/].f_3C = iParam2;
		Global_17C49.f_6C1.f_21B[iVar0 /*65*/].f_3D = iParam1;
		return 1;
	}
	return 0;
}

int func_130(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x553A
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
				iVar1 = func_150(iParam0, 1);
				iVar0 = func_137(iParam1, iParam3, iVar1);
				break;
			
			case 1:
				iVar2 = func_150(iParam0, 2);
				iVar0 = func_137(iParam1, iVar2, iParam3);
				break;
		}
	}
	else if (iParam4 == 2)
	{
		func_129(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 1)
	{
		func_136(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 6)
	{
		if (iParam2 == 4)
		{
			if (func_135(iParam1, iParam3, &iVar0))
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
									if (!func_134(iParam0, 3, 44, 59))
									{
										iVar0 = 44;
									}
								}
								else if (((iParam3 >= 8 && iParam3 <= 17) || (iParam3 >= 18 && iParam3 <= 27)) || (iParam3 >= 28 && iParam3 <= 43))
								{
									if (!func_134(iParam0, 3, 135, 150))
									{
										iVar0 = func_133(iParam1, 3, 135, 150);
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
									if (!func_134(iParam0, 3, 209, 222))
									{
										iVar0 = func_133(iParam1, 3, 209, 222);
									}
								}
								else if ((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8))
								{
									if (!func_134(iParam0, 3, 243, 258))
									{
										if (iParam3 == 1 || iParam3 == 5)
										{
											iVar0 = func_133(iParam1, 3, 243, 246);
										}
										else if (iParam3 == 2 || iParam3 == 6)
										{
											iVar0 = func_133(iParam1, 3, 247, 250);
										}
										else if (iParam3 == 3 || iParam3 == 7)
										{
											iVar0 = func_133(iParam1, 3, 251, 254);
										}
										else if (iParam3 == 4 || iParam3 == 8)
										{
											iVar0 = func_133(iParam1, 3, 255, 258);
										}
									}
								}
								else if (iParam3 == 41 || iParam3 == 42)
								{
									if (!func_134(iParam0, 3, 176, 191) && !func_134(iParam0, 3, 227, 242))
									{
										iVar0 = func_133(iParam1, 3, 176, 191);
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
								iVar4 = func_150(iParam0, 3);
							}
							else if (iParam2 == 3)
							{
								iVar4 = iParam3;
								iVar5 = func_150(iParam0, 11);
								iVar5 = func_132(iParam1, iVar4, iVar5, 0);
							}
							iVar3 = func_150(iParam0, 8);
							if (((iVar5 >= 5 && iVar5 <= 8) || (iVar5 >= 25 && iVar5 <= 40)) || (iVar5 >= 42 && iVar5 <= 43))
							{
								if (!func_131(joaat("player_one"), iVar3, iVar5, iVar4, &iVar6))
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
								iVar7 = func_150(iParam0, 8);
								iVar8 = func_150(iParam0, 11);
								if (((iVar7 >= 27 && iVar7 <= 42) || (iVar7 >= 43 && iVar7 <= 58)) || (iVar7 >= 59 && iVar7 <= 74))
								{
									iVar0 = func_132(iParam1, iParam3, iVar8, 0);
								}
								else
								{
									iVar0 = func_132(iParam1, iParam3, iVar8, 1);
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
								iVar9 = func_150(iParam0, 11);
								iVar0 = func_132(iParam1, -99, iVar9, 0);
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

int func_131(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4)//Position - 0x60ED
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

int func_132(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x63D1
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
				iParam2 = func_133(iParam0, 11, 9, 24);
			}
			else
			{
				iParam2 = func_133(iParam0, 11, 25, 40);
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

int func_133(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x6698
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam2;
	while (iVar0 <= (iParam3 - 1))
	{
		iVar1 = iVar0;
		if (func_125(iParam0, iParam1, iVar1))
		{
			return iVar1;
		}
		iVar0++;
	}
	return -99;
}

int func_134(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x66CF
{
	int iVar0;
	
	iVar0 = func_150(iParam0, iParam1);
	if (iVar0 >= iParam2 && iVar0 <= iParam3)
	{
		return 1;
	}
	return 0;
}

int func_135(int iParam0, int iParam1, int iParam2)//Position - 0x66F8
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

int func_136(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x69C2
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
		iVar0 = func_121(iParam0);
		Global_17C49.f_6C1.f_21B[iVar0 /*65*/].f_3F = iParam2;
		Global_17C49.f_6C1.f_21B[iVar0 /*65*/].f_40 = iParam1;
		return 1;
	}
	return 0;
}

int func_137(int iParam0, int iParam1, int iParam2)//Position - 0x6C4C
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

void func_138(int iParam0, var uParam1, int iParam2, var uParam3)//Position - 0x6DA3
{
	if (iParam2 == -1)
	{
		PED::CLEAR_PED_PROP(iParam0, uParam1);
	}
	else
	{
		PED::SET_PED_PROP_INDEX(iParam0, uParam1, iParam2, uParam3, NETWORK::NETWORK_IS_GAME_IN_PROGRESS());
	}
}

int func_139(int iParam0, int iParam1, int iParam2)//Position - 0x6DCC
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
						return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_140(iParam0, iParam2, 14, 3), joaat("HAT"), 1) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_140(iParam0, iParam2, 14, 3), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_140(iParam0, iParam2, 1, 3), joaat("HAT"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_140(iParam0, iParam2, 1, 3), -1842686353, 0));
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
						return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_140(iParam0, iParam2, 14, 4), joaat("HAT"), 1) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_140(iParam0, iParam2, 14, 4), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_140(iParam0, iParam2, 1, 4), joaat("HAT"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_140(iParam0, iParam2, 1, 4), -1842686353, 0));
					}
					break;
			}
			break;
	}
	return 0;
}

int func_140(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x6FEF
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
		iVar3 = (iParam1 - func_142(iParam0));
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
		iVar8 = (iParam1 - func_141(iParam0, func_158(iParam2)));
		if (iVar8 < 0)
		{
			return -1;
		}
		iVar9 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 6, -1, 0, -1, func_158(iParam2));
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

int func_141(int iParam0, int iParam1)//Position - 0x70E9
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

int func_142(int iParam0)//Position - 0x7490
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

int func_143(int iParam0, int iParam1, int iParam2)//Position - 0x74F1
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
					uVar0 = func_140(iParam0, iParam2, 1, 3);
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
					uVar1 = func_140(iParam0, iParam2, 1, 4);
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

int func_144(int iParam0, int iParam1, int iParam2)//Position - 0x78E6
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
					return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_140(iParam0, iParam2, 14, 3), joaat("GLASSES"), 1);
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
					return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_140(iParam0, iParam2, 14, 4), joaat("GLASSES"), 1);
				}
			}
			break;
	}
	return 0;
}

int func_145(int iParam0, int iParam1)//Position - 0x7BC5
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
		return func_149(iParam1);
	}
	iVar1 = PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, iParam1);
	return func_146(iParam0, iVar0, iVar1, iParam1);
}

int func_146(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x7C0B
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
		return func_149(iParam3);
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar1 = FILES::GET_HASH_NAME_FOR_PROP(iParam0, iParam3, iParam1, iParam2);
	if (iVar1 != -1 && iVar1 != 0)
	{
		if (iVar0 == joaat("mp_m_freemode_01"))
		{
			return func_148(ENTITY::GET_ENTITY_MODEL(iParam0), iVar1, 14, 3);
		}
		else if (iVar0 == joaat("mp_f_freemode_01"))
		{
			return func_148(ENTITY::GET_ENTITY_MODEL(iParam0), iVar1, 14, 4);
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
					iVar3 = (iVar3 + func_147(iParam0, iParam3));
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
	return func_149(iParam3);
}

int func_147(int iParam0, int iParam1)//Position - 0x7D07
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

int func_148(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x7E45
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
					return (func_142(iParam0) + iVar2);
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
		iVar7 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 6, -1, 0, -1, func_158(iParam2));
		iVar5 = 0;
		while (iVar5 < iVar7)
		{
			FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar5, &Var4);
			if (!FILES::IS_CONTENT_ITEM_LOCKED(Var4))
			{
				if (iParam1 == Var4.f_1)
				{
					return (func_141(iParam0, func_158(iParam2)) + iVar6);
				}
				iVar6++;
			}
			iVar5++;
		}
	}
	return -99;
}

int func_149(int iParam0)//Position - 0x7F25
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

int func_150(int iParam0, int iParam1)//Position - 0x7FAB
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || PED::IS_PED_INJURED(iParam0))
	{
		return -99;
	}
	iVar0 = func_158(iParam1);
	iVar1 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, iVar0);
	iVar2 = PED::GET_PED_TEXTURE_VARIATION(iParam0, iVar0);
	return func_151(iParam0, iVar1, iVar2, iParam1);
}

int func_151(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x800D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_158(iParam3);
	iVar1 = PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, iVar0);
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

void func_152(int iParam0)//Position - 0x8091
{
	if (MISC::IS_BIT_SET(Global_10A0A[1 /*14*/].f_6, 1) && !MISC::IS_BIT_SET(Global_10A0A[1 /*14*/].f_6, 6))
	{
		func_155(iParam0, Global_10A0A[1 /*14*/].f_5, Global_10A0A[1 /*14*/].f_2, 2, Global_10A0A[1 /*14*/].f_1, 1, 0);
	}
	if (MISC::IS_BIT_SET(Global_10A0A[1 /*14*/].f_6, 1) && MISC::IS_BIT_SET(Global_10A0A[1 /*14*/].f_6, 6))
	{
		if (iParam0 == 12)
		{
			func_153(Global_280004, 2, 1, 1, -1);
		}
		else if (iParam0 == 13)
		{
		}
		else if (iParam0 == 14)
		{
			func_153(Global_280004, 2, 1, 1, -1);
		}
		else
		{
			func_153(Global_280004, 2, 1, 1, -1);
		}
	}
}

void func_153(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)//Position - 0x8149
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
	if (func_154(uParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		uVar3 = func_70(iVar2, iVar0, 0);
		MISC::SET_BIT(&uVar3, iVar1);
		func_68(iVar2, uVar3, iVar0, 1);
	}
}

bool func_154(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0x8192
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

int func_155(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x8833
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

int func_156(int iParam0)//Position - 0x9751
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

int func_157(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x97A2
{
	int iVar0;
	
	iVar0 = func_121(iParam1);
	if (Global_17C49.f_6C1.f_21B[iVar0 /*65*/].f_3C != -99)
	{
		if (!func_231(iParam0, Global_17C49.f_6C1.f_21B[iVar0 /*65*/].f_3D, Global_17C49.f_6C1.f_21B[iVar0 /*65*/].f_3C) || iParam3 == 1)
		{
			*iParam2 = Global_17C49.f_6C1.f_21B[iVar0 /*65*/].f_3B;
			Global_17C49.f_6C1.f_21B[iVar0 /*65*/].f_3C = -99;
			Global_17C49.f_6C1.f_21B[iVar0 /*65*/].f_3D = 2;
			return 1;
		}
	}
	return 0;
}

int func_158(int iParam0)//Position - 0x9838
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

struct<10> func_159(int iParam0, int iParam1)//Position - 0x98E8
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
					func_161(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_161(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_161(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_161(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_161(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_161(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_161(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_161(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_161(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_161(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_161(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_160(&Var1, iParam0, iParam1, 10);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 31:
					func_161(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_161(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_161(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_161(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_161(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_161(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_161(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_161(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_161(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_161(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_160(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 31:
					func_161(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_161(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_161(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_161(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_161(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_161(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_161(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_161(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_161(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_161(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_160(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_161(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_161(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_161(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_161(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_161(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_161(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_161(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_161(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_161(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_161(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_161(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_161(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_161(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_161(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_161(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 14:
					func_161(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_161(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_161(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_161(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_161(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_161(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_161(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_161(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_161(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_161(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 24:
					func_161(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_160(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_161(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_161(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_161(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_161(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_161(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_161(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_161(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_161(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_161(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_161(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_161(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_161(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_161(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_161(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_161(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8);
					break;
				
				case 14:
					func_161(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_161(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_161(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_161(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_161(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_161(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_161(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_161(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_161(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_161(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_160(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
	}
	return Var1;
}

void func_160(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xA217
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
						(*iParam0)[Var2.f_2] = func_148(iParam1, Var2.x, 14, iVar0);
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

void func_161(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0xA341
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

struct<16> func_162(int iParam0, int iParam1)//Position - 0xA389
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
						func_165(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					else
					{
						func_165(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					break;
				
				case 1:
					func_165(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
					break;
				
				case 2:
					func_165(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
					break;
				
				case 3:
					func_165(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
					break;
				
				case 4:
					func_165(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
					break;
				
				case 5:
					func_165(&Var1, -99, -99, Global_17C49.f_6C1.f_21B.f_C4[0], Global_17C49.f_6C1.f_21B.f_C8[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
					break;
				
				case 6:
					func_165(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_165(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 8:
					func_165(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_165(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_165(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
					break;
				
				case 11:
					func_165(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_165(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_165(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_165(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
					break;
				
				case 15:
					func_165(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
					break;
				
				case 16:
					func_165(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_165(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_165(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
					break;
				
				case 19:
					func_165(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_165(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_165(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_165(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_165(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_165(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_165(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_165(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_165(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_165(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_165(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_165(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_165(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
					break;
				
				case 32:
					func_165(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_165(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_165(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
					break;
				
				case 35:
					func_165(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_165(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_165(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_165(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_165(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_165(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_165(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_165(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_165(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_165(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_165(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 46:
					func_165(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_165(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 48:
					func_165(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 49:
					func_165(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 50:
					func_165(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
					break;
				
				case 51:
					func_165(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 52:
					func_165(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_163(&Var1, iParam0, iParam1, 53);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					func_165(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_165(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 2:
					func_165(&Var1, -99, -99, Global_17C49.f_6C1.f_21B.f_C4[1], Global_17C49.f_6C1.f_21B.f_C8[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
					break;
				
				case 3:
					func_165(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
					break;
				
				case 4:
					func_165(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
					break;
				
				case 5:
					func_165(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 6:
					func_165(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_165(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
					break;
				
				case 8:
					func_165(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
					break;
				
				case 9:
					func_165(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_165(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_165(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 12:
					func_165(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_165(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_165(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_165(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_165(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_165(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_165(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
					break;
				
				case 19:
					func_165(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_165(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_165(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
					break;
				
				case 22:
					func_165(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
					break;
				
				case 23:
					func_165(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
					break;
				
				case 24:
					func_165(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
					break;
				
				case 25:
					func_165(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
					break;
				
				case 26:
					func_165(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
					break;
				
				case 27:
					func_165(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
					break;
				
				case 28:
					func_165(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
					break;
				
				case 29:
					func_165(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
					break;
				
				case 30:
					func_165(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
					break;
				
				case 31:
					func_165(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
					break;
				
				case 32:
					func_165(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
					break;
				
				case 33:
					func_165(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
					break;
				
				case 34:
					func_165(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
					break;
				
				case 35:
					func_165(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
					break;
				
				case 36:
					func_165(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
					break;
				
				case 37:
					func_165(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
					break;
				
				case 38:
					func_165(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_165(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_165(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_165(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_165(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_165(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
					break;
				
				case 44:
					func_165(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 45:
					func_165(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
					break;
				
				case 46:
					func_165(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
					break;
				
				default:
					func_163(&Var1, iParam0, iParam1, 47);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					func_165(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_165(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
					break;
				
				case 2:
					func_165(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
					break;
				
				case 3:
					func_165(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
					break;
				
				case 4:
					func_165(&Var1, -99, -99, Global_17C49.f_6C1.f_21B.f_C4[2], Global_17C49.f_6C1.f_21B.f_C8[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 5:
					func_165(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
					break;
				
				case 6:
					func_165(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
					break;
				
				case 7:
					func_165(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
					break;
				
				case 8:
					func_165(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_165(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_165(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_165(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_165(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_165(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_165(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_165(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_165(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_165(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_165(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 19:
					func_165(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_165(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_165(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_165(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_165(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_165(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_165(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_165(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_165(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_165(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_165(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_165(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_165(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 32:
					func_165(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_165(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_165(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 35:
					func_165(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_165(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_165(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_165(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_165(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_165(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_165(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_165(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_165(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_165(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_165(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 46:
					func_165(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_165(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_163(&Var1, iParam0, iParam1, 48);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_165(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31);
					break;
				
				case 1:
					func_165(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
					break;
				
				case 2:
					func_165(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
					break;
				
				case 3:
					func_165(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
					break;
				
				case 4:
					func_165(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
					break;
				
				case 5:
					func_165(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
					break;
				
				case 6:
					func_165(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
					break;
				
				case 7:
					func_165(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
					break;
				
				case 8:
					func_165(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
					break;
				
				case 9:
					func_165(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
					break;
				
				case 10:
					func_165(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
					break;
				
				case 11:
					func_165(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
					break;
				
				case 12:
					func_165(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
					break;
				
				case 13:
					func_165(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
					break;
				
				case 14:
					func_165(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
					break;
				
				case 15:
					func_165(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
					break;
				
				case 16:
					func_165(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
					break;
				
				case 17:
					func_165(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
					break;
				
				case 18:
					func_165(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
					break;
				
				case 19:
					func_165(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
					break;
				
				case 20:
					func_165(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
					break;
				
				case 21:
					func_165(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
					break;
				
				case 22:
					func_165(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
					break;
				
				case 23:
					func_165(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
					break;
				
				case 24:
					func_165(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
					break;
				
				case 25:
					func_165(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
					break;
				
				default:
					func_163(&Var1, iParam0, iParam1, 26);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_165(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31);
					break;
				
				case 1:
					func_165(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
					break;
				
				case 2:
					func_165(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0);
					break;
				
				case 3:
					func_165(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
					break;
				
				case 4:
					func_165(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
					break;
				
				case 5:
					func_165(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
					break;
				
				case 6:
					func_165(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
					break;
				
				case 7:
					func_165(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
					break;
				
				case 8:
					func_165(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
					break;
				
				case 9:
					func_165(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
					break;
				
				case 10:
					func_165(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
					break;
				
				case 11:
					func_165(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
					break;
				
				case 12:
					func_165(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
					break;
				
				case 13:
					func_165(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31);
					break;
				
				case 14:
					func_165(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
					break;
				
				case 15:
					func_165(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
					break;
				
				case 16:
					func_165(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
					break;
				
				case 17:
					func_165(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
					break;
				
				case 18:
					func_165(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
					break;
				
				case 19:
					func_165(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
					break;
				
				case 20:
					func_165(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
					break;
				
				case 21:
					func_165(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
					break;
				
				case 22:
					func_165(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
					break;
				
				case 23:
					func_165(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
					break;
				
				case 24:
					func_165(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
					break;
				
				case 25:
					func_165(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
					break;
				
				case 26:
					func_165(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
					break;
				
				case 27:
					func_165(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
					break;
				
				default:
					func_163(&Var1, iParam0, iParam1, 28);
					break;
			}
			break;
	}
	return Var1;
}

void func_163(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xC1CE
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
						(*iParam0)[func_164(Var2.f_2)] = Var2.x;
					}
					else
					{
						(*iParam0)[func_164(Var2.f_2)] = func_148(iParam1, Var2.x, func_164(Var2.f_2), iVar0);
					}
				}
				else if (Var2.f_1 != -1)
				{
					(*iParam0)[func_164(Var2.f_2)] = Var2.f_1;
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

int func_164(int iParam0)//Position - 0xC37F
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

void func_165(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0xC42F
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

struct<14> func_166(int iParam0, int iParam1, int iParam2)//Position - 0xC4A0
{
	func_230();
	if (iParam0 == joaat("player_zero"))
	{
		func_212(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_one"))
	{
		func_193(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_two"))
	{
		func_167(iParam1, iParam2);
	}
	return Global_10A0A[0 /*14*/];
}

void func_167(int iParam0, int iParam1)//Position - 0xC4F2
{
	switch (iParam0)
	{
		case 0:
			func_192(iParam1);
			break;
		
		case 2:
			func_191(iParam1);
			break;
		
		case 3:
			func_188(iParam1);
			break;
		
		case 4:
			func_187(iParam1);
			break;
		
		case 6:
			func_186(iParam1);
			break;
		
		case 5:
			func_185(iParam1);
			break;
		
		case 8:
			func_184(iParam1);
			break;
		
		case 9:
			func_183(iParam1);
			break;
		
		case 10:
			func_182(iParam1);
			break;
		
		case 1:
			func_181(iParam1);
			break;
		
		case 7:
			func_180(iParam1);
			break;
		
		case 11:
			func_179(iParam1);
			break;
		
		case 12:
			func_178(iParam1);
			break;
		
		case 13:
			func_177(iParam1);
			break;
		
		case 14:
			func_168(iParam1);
			break;
	}
}

void func_168(int iParam0)//Position - 0xC5E2
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
			func_176(iVar7, iParam0, 155);
			return;
			break;
	}
	func_169(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_169(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0xD858
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
	uParam0->f_C = func_175(iParam8);
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
			if (!func_174(Global_280004, 1, 1, 1, -1))
			{
				MISC::CLEAR_BIT(&(uParam0->f_6), 2);
			}
			if (!func_174(Global_280004, 2, 1, 1, -1))
			{
				MISC::SET_BIT(&(uParam0->f_6), 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_174(Global_280004, 1, 1, 1, -1))
			{
				MISC::CLEAR_BIT(&(uParam0->f_6), 2);
			}
			if (!func_174(Global_280004, 2, 1, 1, -1))
			{
				MISC::SET_BIT(&(uParam0->f_6), 4);
			}
		}
		else
		{
			if (!func_174(Global_280004, 1, 1, 1, -1))
			{
				MISC::CLEAR_BIT(&(uParam0->f_6), 2);
			}
			if (!func_174(Global_280004, 2, 1, 1, -1))
			{
				MISC::SET_BIT(&(uParam0->f_6), 4);
			}
		}
	}
	else if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
	{
		MISC::SET_BIT(&(uParam0->f_6), 0);
		MISC::SET_BIT(&(uParam0->f_6), 5);
		if (func_155(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0))
		{
			MISC::SET_BIT(&(uParam0->f_6), 1);
		}
		if (func_155(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0))
		{
			MISC::SET_BIT(&(uParam0->f_6), 2);
		}
		if (!func_155(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0))
		{
			MISC::SET_BIT(&(uParam0->f_6), 4);
		}
	}
	else
	{
		MISC::SET_BIT(&(uParam0->f_6), 0);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			if (!func_173(14))
			{
				uVar0 = func_70(func_172(iParam1, uParam0->f_2), Global_10A08, 0);
				if (MISC::IS_BIT_SET(uVar0, uParam0->f_1))
				{
					MISC::SET_BIT(&(uParam0->f_6), 1);
				}
				uVar0 = func_70(func_171(iParam1, uParam0->f_2), Global_10A08, 0);
				if (MISC::IS_BIT_SET(uVar0, uParam0->f_1))
				{
					MISC::SET_BIT(&(uParam0->f_6), 2);
				}
				if (func_170(iParam1, uParam0->f_2, &iVar1))
				{
					uVar0 = func_70(iVar1, Global_10A08, 0);
					if (!MISC::IS_BIT_SET(uVar0, uParam0->f_1))
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

bool func_170(int iParam0, int iParam1, var uParam2)//Position - 0xDBDB
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

int func_171(int iParam0, int iParam1)//Position - 0xDFE0
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

int func_172(int iParam0, int iParam1)//Position - 0xE3DB
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

bool func_173(int iParam0)//Position - 0xE7D6
{
	return Global_8861 == iParam0;
}

int func_174(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)//Position - 0xE7E4
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
	if (func_154(uParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		uVar3 = func_70(iVar2, iVar0, 0);
		return MISC::IS_BIT_SET(uVar3, iVar1);
	}
	return 0;
}

int func_175(int iParam0)//Position - 0xE826
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

void func_176(int iParam0, int iParam1, int iParam2)//Position - 0xE8FA
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
					func_169(&(Global_10A0A[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
					return;
				}
				iVar4++;
			}
			iVar3++;
		}
	}
	else if (iParam0 == 13)
	{
		func_169(&(Global_10A0A[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
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
					func_169(&(Global_10A0A[0 /*14*/]), iParam0, iParam1, &(Var6.f_9), Var6.f_3, Var6.f_4, Var6.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var6.f_1, joaat("OUTFIT_ONLY"), 0), iVar7, 2, Var6.f_1 != 0);
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
		iVar14 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iVar1, 6, -1, 0, -1, func_158(iParam0));
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
					func_169(&(Global_10A0A[0 /*14*/]), iParam0, iParam1, &(Var11.f_9), Var11.f_3, Var11.f_4, Var11.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var11.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, Var11.f_1 != 0);
					return;
				}
				iVar13++;
			}
			iVar12++;
		}
	}
}

void func_177(int iParam0)//Position - 0xEB75
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
			func_176(iVar7, iParam0, 9);
			return;
			break;
	}
	func_169(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_178(int iParam0)//Position - 0xECCB
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
			func_176(iVar7, iParam0, 48);
			return;
			break;
	}
	func_169(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_179(int iParam0)//Position - 0xF1D8
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
			func_176(iVar7, iParam0, 1);
			return;
			break;
	}
	func_169(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_180(int iParam0)//Position - 0xF24C
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
			func_176(iVar7, iParam0, 1);
			return;
			break;
	}
	func_169(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_181(int iParam0)//Position - 0xF2BF
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
			func_176(iVar7, iParam0, 6);
			return;
			break;
	}
	func_169(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_182(int iParam0)//Position - 0xF3A5
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
			func_176(iVar7, iParam0, 33);
			return;
			break;
	}
	func_169(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_183(int iParam0)//Position - 0xF707
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
			func_176(iVar7, iParam0, 17);
			return;
			break;
	}
	func_169(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_184(int iParam0)//Position - 0xF917
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
			func_176(iVar7, iParam0, 18);
			return;
			break;
	}
	func_169(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_185(int iParam0)//Position - 0xFB46
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
			func_176(iVar7, iParam0, 7);
			return;
			break;
	}
	func_169(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_186(int iParam0)//Position - 0xFC55
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
			func_176(iVar7, iParam0, 84);
			return;
			break;
	}
	func_169(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_187(int iParam0)//Position - 0x105F5
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
			func_176(iVar7, iParam0, 104);
			return;
			break;
	}
	func_169(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_188(int iParam0)//Position - 0x11167
{
	if (iParam0 < 136)
	{
		func_190(iParam0);
	}
	else
	{
		func_189(iParam0);
	}
	if (Global_10A0A[0 /*14*/].f_2 == -1)
	{
		func_176(3, iParam0, 242);
	}
}

void func_189(int iParam0)//Position - 0x1119B
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
	func_169(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_190(int iParam0)//Position - 0x11D9F
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
	func_169(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_191(int iParam0)//Position - 0x12CAD
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
			func_176(iVar7, iParam0, 9);
			return;
			break;
	}
	func_169(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_192(int iParam0)//Position - 0x12DD9
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
			func_176(iVar7, iParam0, 7);
			return;
			break;
	}
	func_169(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_193(int iParam0, int iParam1)//Position - 0x12ED6
{
	switch (iParam0)
	{
		case 0:
			func_211(iParam1);
			break;
		
		case 2:
			func_210(iParam1);
			break;
		
		case 3:
			func_206(iParam1);
			break;
		
		case 4:
			func_205(iParam1);
			break;
		
		case 6:
			func_204(iParam1);
			break;
		
		case 5:
			func_203(iParam1);
			break;
		
		case 8:
			func_202(iParam1);
			break;
		
		case 9:
			func_201(iParam1);
			break;
		
		case 10:
			func_200(iParam1);
			break;
		
		case 1:
			func_199(iParam1);
			break;
		
		case 7:
			func_198(iParam1);
			break;
		
		case 11:
			func_197(iParam1);
			break;
		
		case 12:
			func_196(iParam1);
			break;
		
		case 13:
			func_195(iParam1);
			break;
		
		case 14:
			func_194(iParam1);
			break;
	}
}

void func_194(int iParam0)//Position - 0x12FC6
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
			func_176(iVar7, iParam0, 175);
			return;
			break;
	}
	func_169(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_195(int iParam0)//Position - 0x144B7
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
			func_176(iVar7, iParam0, 9);
			return;
			break;
	}
	func_169(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_196(int iParam0)//Position - 0x14607
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
			func_176(iVar7, iParam0, 47);
			return;
			break;
	}
	func_169(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_197(int iParam0)//Position - 0x14B11
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
			func_176(iVar7, iParam0, 63);
			return;
			break;
	}
	func_169(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_198(int iParam0)//Position - 0x1517E
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
			func_176(iVar7, iParam0, 1);
			return;
			break;
	}
	func_169(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_199(int iParam0)//Position - 0x151F1
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
			func_176(iVar7, iParam0, 5);
			return;
			break;
	}
	func_169(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_200(int iParam0)//Position - 0x152C0
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
			func_176(iVar7, iParam0, 53);
			return;
			break;
	}
	func_169(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_201(int iParam0)//Position - 0x157EF
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
			func_176(iVar7, iParam0, 12);
			return;
			break;
	}
	func_169(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_202(int iParam0)//Position - 0x15985
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
			func_176(iVar7, iParam0, 77);
			return;
			break;
	}
	func_169(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_203(int iParam0)//Position - 0x16182
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
			func_176(iVar7, iParam0, 7);
			return;
			break;
	}
	func_169(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_204(int iParam0)//Position - 0x16291
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
			func_176(iVar7, iParam0, 134);
			return;
			break;
	}
	func_169(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_205(int iParam0)//Position - 0x171BB
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
			func_176(iVar7, iParam0, 117);
			return;
			break;
	}
	func_169(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_206(int iParam0)//Position - 0x17E77
{
	if (iParam0 < 107)
	{
		func_209(iParam0);
	}
	else if (iParam0 < 227)
	{
		func_208(iParam0);
	}
	else
	{
		func_207(iParam0);
	}
	if (Global_10A0A[0 /*14*/].f_2 == -1)
	{
		func_176(3, iParam0, 318);
	}
}

void func_207(int iParam0)//Position - 0x17EBC
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
	func_169(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_208(int iParam0)//Position - 0x18A7E
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
	func_169(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_209(int iParam0)//Position - 0x1986D
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
	func_169(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_210(int iParam0)//Position - 0x1A4B6
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
			func_176(iVar7, iParam0, 21);
			return;
			break;
	}
	func_169(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_211(int iParam0)//Position - 0x1A72E
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
			func_176(iVar7, iParam0, 10);
			return;
			break;
	}
	func_169(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_212(int iParam0, int iParam1)//Position - 0x1A873
{
	switch (iParam0)
	{
		case 0:
			func_229(iParam1);
			break;
		
		case 2:
			func_228(iParam1);
			break;
		
		case 3:
			func_225(iParam1);
			break;
		
		case 4:
			func_224(iParam1);
			break;
		
		case 6:
			func_223(iParam1);
			break;
		
		case 5:
			func_222(iParam1);
			break;
		
		case 8:
			func_221(iParam1);
			break;
		
		case 9:
			func_220(iParam1);
			break;
		
		case 10:
			func_219(iParam1);
			break;
		
		case 1:
			func_218(iParam1);
			break;
		
		case 7:
			func_217(iParam1);
			break;
		
		case 11:
			func_216(iParam1);
			break;
		
		case 12:
			func_215(iParam1);
			break;
		
		case 13:
			func_214(iParam1);
			break;
		
		case 14:
			func_213(iParam1);
			break;
	}
}

void func_213(int iParam0)//Position - 0x1A963
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
			func_176(iVar7, iParam0, 113);
			return;
			break;
	}
	func_169(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_214(int iParam0)//Position - 0x1B6EC
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
			func_176(iVar7, iParam0, 10);
			return;
			break;
	}
	func_169(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_215(int iParam0)//Position - 0x1B865
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
			func_176(iVar7, iParam0, 53);
			return;
			break;
	}
	func_169(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_216(int iParam0)//Position - 0x1BDDB
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
			func_176(iVar7, iParam0, 45);
			return;
			break;
	}
	func_169(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_217(int iParam0)//Position - 0x1C305
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
			func_176(iVar7, iParam0, 1);
			return;
			break;
	}
	func_169(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_218(int iParam0)//Position - 0x1C378
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
			func_176(iVar7, iParam0, 5);
			return;
			break;
	}
	func_169(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_219(int iParam0)//Position - 0x1C447
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
			func_176(iVar7, iParam0, 48);
			return;
			break;
	}
	func_169(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_220(int iParam0)//Position - 0x1C91E
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
			func_176(iVar7, iParam0, 20);
			return;
			break;
	}
	func_169(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_221(int iParam0)//Position - 0x1CB86
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
			func_176(iVar7, iParam0, 24);
			return;
			break;
	}
	func_169(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_222(int iParam0)//Position - 0x1CE5B
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
			func_176(iVar7, iParam0, 14);
			return;
			break;
	}
	func_169(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_223(int iParam0)//Position - 0x1D023
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
			func_176(iVar7, iParam0, 99);
			return;
			break;
	}
	func_169(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_224(int iParam0)//Position - 0x1DB76
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
			func_176(iVar7, iParam0, 113);
			return;
			break;
	}
	func_169(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_225(int iParam0)//Position - 0x1E7BF
{
	if (iParam0 < 60)
	{
		func_227(iParam0);
	}
	else
	{
		func_226(iParam0);
	}
	if (Global_10A0A[0 /*14*/].f_2 == -1)
	{
		func_176(3, iParam0, 181);
	}
}

void func_226(int iParam0)//Position - 0x1E7F3
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
	func_169(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_227(int iParam0)//Position - 0x1F593
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
	func_169(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_228(int iParam0)//Position - 0x1FC1F
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
			func_176(iVar7, iParam0, 6);
			return;
			break;
	}
	func_169(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_229(int iParam0)//Position - 0x1FD05
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
			func_176(iVar7, iParam0, 7);
			return;
			break;
	}
	func_169(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_230()//Position - 0x1FE02
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

int func_231(int iParam0, int iParam1, int iParam2)//Position - 0x1FE7B
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
	Global_10A0A[1 /*14*/] = { func_166(iVar0, iParam1, iParam2) };
	if (!MISC::IS_BIT_SET(Global_10A0A[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar5 = { func_162(iVar0, iParam2) };
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_231(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { func_159(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_231(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_10A0A[2 /*14*/] = { func_166(iVar0, 14, iVar4) };
									if (Global_10A0A[2 /*14*/].f_C == iVar3)
									{
										if (func_231(iParam0, 14, iVar4))
										{
											if (!func_126(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_10A0A[2 /*14*/])))
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
						iVar1 = func_150(iParam0, iVar2);
						Global_10A0A[2 /*14*/] = { func_166(iVar0, iVar2, iVar1) };
						if (!func_126(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_10A0A[2 /*14*/])))
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
		uVar8 = { func_159(iVar0, iParam2) };
		iVar7 = 0;
		while (iVar7 <= 8)
		{
			if (!func_231(iParam0, 14, uVar8[iVar7]))
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
	else if (Global_10A0A[1 /*14*/].f_3 == PED::GET_PED_DRAWABLE_VARIATION(iParam0, func_158(iParam1)) && Global_10A0A[1 /*14*/].f_4 == PED::GET_PED_TEXTURE_VARIATION(iParam0, func_158(iParam1)))
	{
		return 1;
	}
	return 0;
}

int func_232(int iParam0)//Position - 0x200D5
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_233(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_233(int iParam0)//Position - 0x20112
{
	if (func_234(iParam0))
	{
		return Global_17C49.f_744E[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_234(int iParam0)//Position - 0x2013C
{
	return iParam0 < 3;
}

void func_235(var uParam0, var uParam1)//Position - 0x20148
{
	STATS::STAT_SET_GXT_LABEL(joaat("sp_last_mission_name"), uParam0, 1);
	if (MISC::IS_BIT_SET(uParam1, 0))
	{
		STATS::STAT_SET_GXT_LABEL(joaat("sp0_last_mission_name"), uParam0, 1);
	}
	if (MISC::IS_BIT_SET(uParam1, 1))
	{
		STATS::STAT_SET_GXT_LABEL(joaat("sp1_last_mission_name"), uParam0, 1);
	}
	if (MISC::IS_BIT_SET(uParam1, 2))
	{
		STATS::STAT_SET_GXT_LABEL(joaat("sp2_last_mission_name"), uParam0, 1);
	}
}

int func_236()//Position - 0x201A2
{
	func_237();
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

void func_237()//Position - 0x201E8
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_233(Global_17C49.f_6C1.f_21B.f_C8D) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_232(PLAYER::PLAYER_PED_ID());
			if (func_234(iVar0) && (!func_173(14) || Global_17832))
			{
				if (Global_17C49.f_6C1.f_21B.f_C8D != iVar0 && func_234(Global_17C49.f_6C1.f_21B.f_C8D))
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

struct<2> func_238(int iParam0)//Position - 0x202E5
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_239(iParam0) };
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

struct<2> func_239(int iParam0)//Position - 0x2031D
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

void func_240(int iParam0, int iParam1)//Position - 0x2076A
{
	Global_10BA1 = iParam1;
	if (Global_D5D8)
	{
		return;
	}
	if (Global_D5F3)
	{
		Global_D5F3 = 0;
		return;
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("mission_stat_watcher")) > 0)
	{
		if (Global_D5D8)
		{
		}
		Global_D5F2 = iParam0;
		Global_D5D8 = 1;
		Global_D5E3 = 1;
	}
}

void func_241(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x207B4
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 1);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 250, 1);
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
	PLAYER::SET_PLAYER_WEAPON_DAMAGE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
	PLAYER::SET_PLAYER_WEAPON_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
	HUD::DISPLAY_HUD(1);
	HUD::DISPLAY_RADAR(1);
	CAM::SET_WIDESCREEN_BORDERS(0, 0);
	MISC::SET_TIME_SCALE(1f);
	func_252();
	func_251(1, 1);
	func_250();
	func_248();
	func_247(30000);
	if (iParam1 == 1)
	{
		func_242(iParam0, iParam2, iParam3);
	}
	HUD::SET_MISSION_NAME(0, 0);
}

void func_242(int iParam0, int iParam1, int iParam2)//Position - 0x20851
{
	struct<4> Var0;
	var uVar1;
	
	if (iParam0 != -1)
	{
		func_244(iParam0, &Var0);
		MemCopy(&uVar1, {func_239(iParam0)}, 4);
		STATS::PLAYSTATS_MISSION_CHECKPOINT(&uVar1, 0, Global_15F8F, 0);
		func_243(&uVar1, Var0.f_3, Global_15F8F, iParam1, iParam2);
	}
}

void func_243(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x20890
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_1558D))
	{
		return;
	}
	if (MISC::COMPARE_STRINGS(uParam0, &Global_1558D, 0, -1) != 0)
	{
		return;
	}
	STATS::PLAYSTATS_MISSION_OVER(uParam0, uParam1, uParam2, uParam3, uParam4, Global_14A40);
	StringCopy(&Global_1558D, "", 64);
}

void func_244(int iParam0, var uParam1)//Position - 0x208D5
{
	switch (iParam0)
	{
		case 0:
			func_245(uParam1, "Abigail1", func_238(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_246(iParam0), 1, 0);
			break;
		
		case 1:
			func_245(uParam1, "Abigail2", func_238(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_246(iParam0), 1, 0);
			break;
		
		case 2:
			func_245(uParam1, "Barry1", func_238(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_246(iParam0), 1, 0);
			break;
		
		case 3:
			func_245(uParam1, "Barry2", func_238(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_246(iParam0), 1, 1);
			break;
		
		case 4:
			func_245(uParam1, "Barry3", func_238(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_246(iParam0), 0, 0);
			break;
		
		case 5:
			func_245(uParam1, "Barry3A", func_238(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_246(iParam0), 0, 1);
			break;
		
		case 6:
			func_245(uParam1, "Barry3C", func_238(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_246(iParam0), 0, 1);
			break;
		
		case 7:
			func_245(uParam1, "Barry4", func_238(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_246(iParam0), 0, 0);
			break;
		
		case 8:
			func_245(uParam1, "Dreyfuss1", func_238(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_246(iParam0), 0, 0);
			break;
		
		case 9:
			func_245(uParam1, "Epsilon1", func_238(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_246(iParam0), 0, 0);
			break;
		
		case 10:
			func_245(uParam1, "Epsilon2", func_238(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_246(iParam0), 1, 0);
			break;
		
		case 11:
			func_245(uParam1, "Epsilon3", func_238(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_246(iParam0), 0, 0);
			break;
		
		case 12:
			func_245(uParam1, "Epsilon4", func_238(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_246(iParam0), 0, 0);
			break;
		
		case 13:
			func_245(uParam1, "Epsilon5", func_238(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_246(iParam0), 1, 0);
			break;
		
		case 14:
			func_245(uParam1, "Epsilon6", func_238(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_246(iParam0), 0, 1);
			break;
		
		case 15:
			func_245(uParam1, "Epsilon7", func_238(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_246(iParam0), 0, 0);
			break;
		
		case 16:
			func_245(uParam1, "Epsilon8", func_238(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_246(iParam0), 1, 0);
			break;
		
		case 17:
			func_245(uParam1, "Extreme1", func_238(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_246(iParam0), 0, 1);
			break;
		
		case 18:
			func_245(uParam1, "Extreme2", func_238(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_246(iParam0), 0, 1);
			break;
		
		case 19:
			func_245(uParam1, "Extreme3", func_238(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_246(iParam0), 0, 1);
			break;
		
		case 20:
			func_245(uParam1, "Extreme4", func_238(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_246(iParam0), 0, 0);
			break;
		
		case 21:
			func_245(uParam1, "Fanatic1", func_238(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_246(iParam0), 1, 0);
			break;
		
		case 22:
			func_245(uParam1, "Fanatic2", func_238(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_246(iParam0), 1, 0);
			break;
		
		case 23:
			func_245(uParam1, "Fanatic3", func_238(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_246(iParam0), 0, 1);
			break;
		
		case 24:
			func_245(uParam1, "Hao1", func_238(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_246(iParam0), 0, 1);
			break;
		
		case 25:
			func_245(uParam1, "Hunting1", func_238(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_246(iParam0), 0, 1);
			break;
		
		case 26:
			func_245(uParam1, "Hunting2", func_238(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_246(iParam0), 0, 1);
			break;
		
		case 27:
			func_245(uParam1, "Josh1", func_238(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_246(iParam0), 1, 0);
			break;
		
		case 28:
			func_245(uParam1, "Josh2", func_238(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_246(iParam0), 1, 1);
			break;
		
		case 29:
			func_245(uParam1, "Josh3", func_238(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_246(iParam0), 1, 1);
			break;
		
		case 30:
			func_245(uParam1, "Josh4", func_238(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_246(iParam0), 1, 0);
			break;
		
		case 31:
			func_245(uParam1, "Maude1", func_238(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_246(iParam0), 0, 1);
			break;
		
		case 32:
			func_245(uParam1, "Minute1", func_238(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_246(iParam0), 0, 1);
			break;
		
		case 33:
			func_245(uParam1, "Minute2", func_238(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_246(iParam0), 0, 1);
			break;
		
		case 34:
			func_245(uParam1, "Minute3", func_238(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_246(iParam0), 0, 1);
			break;
		
		case 35:
			func_245(uParam1, "MrsPhilips1", func_238(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_246(iParam0), 0, 0);
			break;
		
		case 36:
			func_245(uParam1, "MrsPhilips2", func_238(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_246(iParam0), 0, 0);
			break;
		
		case 37:
			func_245(uParam1, "Nigel1", func_238(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_246(iParam0), 1, 0);
			break;
		
		case 38:
			func_245(uParam1, "Nigel1A", func_238(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_246(iParam0), 1, 1);
			break;
		
		case 39:
			func_245(uParam1, "Nigel1B", func_238(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_246(iParam0), 1, 1);
			break;
		
		case 40:
			func_245(uParam1, "Nigel1C", func_238(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_246(iParam0), 1, 1);
			break;
		
		case 41:
			func_245(uParam1, "Nigel1D", func_238(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_246(iParam0), 1, 1);
			break;
		
		case 42:
			func_245(uParam1, "Nigel2", func_238(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_246(iParam0), 1, 1);
			break;
		
		case 43:
			func_245(uParam1, "Nigel3", func_238(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_246(iParam0), 1, 1);
			break;
		
		case 44:
			func_245(uParam1, "Omega1", func_238(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_246(iParam0), 0, 0);
			break;
		
		case 45:
			func_245(uParam1, "Omega2", func_238(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_246(iParam0), 0, 0);
			break;
		
		case 46:
			func_245(uParam1, "Paparazzo1", func_238(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_246(iParam0), 0, 1);
			break;
		
		case 47:
			func_245(uParam1, "Paparazzo2", func_238(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_246(iParam0), 0, 1);
			break;
		
		case 48:
			func_245(uParam1, "Paparazzo3", func_238(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_246(iParam0), 0, 0);
			break;
		
		case 49:
			func_245(uParam1, "Paparazzo3A", func_238(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_246(iParam0), 0, 1);
			break;
		
		case 50:
			func_245(uParam1, "Paparazzo3B", func_238(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_246(iParam0), 0, 1);
			break;
		
		case 51:
			func_245(uParam1, "Paparazzo4", func_238(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_246(iParam0), 0, 0);
			break;
		
		case 52:
			func_245(uParam1, "Rampage1", func_238(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_246(iParam0), 0, 0);
			break;
		
		case 54:
			func_245(uParam1, "Rampage3", func_238(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_246(iParam0), 1, 0);
			break;
		
		case 55:
			func_245(uParam1, "Rampage4", func_238(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_246(iParam0), 1, 0);
			break;
		
		case 56:
			func_245(uParam1, "Rampage5", func_238(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_246(iParam0), 0, 0);
			break;
		
		case 53:
			func_245(uParam1, "Rampage2", func_238(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_246(iParam0), 1, 0);
			break;
		
		case 57:
			func_245(uParam1, "TheLastOne", func_238(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_246(iParam0), 0, 1);
			break;
		
		case 58:
			func_245(uParam1, "Tonya1", func_238(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_246(iParam0), 0, 1);
			break;
		
		case 59:
			func_245(uParam1, "Tonya2", func_238(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_246(iParam0), 0, 1);
			break;
		
		case 60:
			func_245(uParam1, "Tonya3", func_238(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_246(iParam0), 0, 1);
			break;
		
		case 61:
			func_245(uParam1, "Tonya4", func_238(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_246(iParam0), 0, 1);
			break;
		
		case 62:
			func_245(uParam1, "Tonya5", func_238(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_246(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_245(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)//Position - 0x21B1C
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

int func_246(int iParam0)//Position - 0x21BAD
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

void func_247(int iParam0)//Position - 0x21EF3
{
	Global_8A88 = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_248()//Position - 0x21F05
{
	if (Global_1567F)
	{
		func_237();
		GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER(func_249(Global_17C49.f_6C1.f_21B.f_C8D));
	}
	else
	{
		GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER("");
	}
}

char* func_249(var uParam0)//Position - 0x21F38
{
	uParam0 = uParam0;
	return "";
}

void func_250()//Position - 0x21F48
{
	char cVar0[24];
	
	if (MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION())
	{
		NETWORK::NETWORK_SET_RICH_PRESENCE(StackVal, 0, 0, 0);
	}
	else if (MISC::IS_PS3_VERSION() || MISC::IS_ORBIS_VERSION())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(0, &cVar0);
	}
}

void func_251(int iParam0, int iParam1)//Position - 0x21F8B
{
	Global_1567A = iParam0;
	Global_1567B = iParam1;
}

void func_252()//Position - 0x21F9F
{
	if (Global_10B93 != 6)
	{
	}
	if (Global_10B98)
	{
		HUD::RESET_HUD_COMPONENT_VALUES(15);
		Global_10B98 = 0;
		Global_4354.f_1C27 = 0;
	}
	Global_10B93 = 6;
	Global_10B95 = -1;
	Global_10B94 = -1;
}

void func_253(var uParam0)//Position - 0x21FD7
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

void func_254(int iParam0, bool bParam1)//Position - 0x22014
{
	struct<26> Var0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<6> Var4;
	int iVar5;
	int iVar6;
	struct<6> Var7;
	int iVar8;
	int iVar9;
	
	func_244(iParam0, &Var0);
	if (!MISC::ARE_STRINGS_EQUAL(&(Var0.f_10), ""))
	{
		while (!func_281(&(Var0.f_10)))
		{
			SYSTEM::WAIT(0);
		}
	}
	if (Var0.f_16 != 0)
	{
		func_280(Var0.f_16, 0);
	}
	func_272(iParam0, Global_10BA2);
	if (!bParam1)
	{
		iVar1 = func_271(iParam0);
		if (iVar1 != 0)
		{
			if (!AUDIO::IS_MISSION_NEWS_STORY_UNLOCKED(iVar1))
			{
				AUDIO::UNLOCK_MISSION_NEWS_STORY(iVar1);
			}
		}
	}
	if (Var0.f_18 != -1)
	{
		bVar2 = true;
		if (Var0.f_5 != 4)
		{
			iVar3 = 0;
			while (iVar3 < 63)
			{
				iVar5 = iVar3;
				if (iVar5 != iParam0)
				{
					func_244(iVar5, &Var4);
					if (Var4.f_5 == Var0.f_5)
					{
						if (!MISC::IS_BIT_SET(Global_17C49.f_41BC[iVar5 /*6*/], 3))
						{
							bVar2 = false;
						}
						if (!MISC::IS_BIT_SET(Global_17C49.f_41BC[iVar5 /*6*/], 0))
						{
							func_259(iVar5);
						}
					}
				}
				iVar3++;
			}
		}
		if (bVar2)
		{
			func_259(Var0.f_18);
		}
	}
	else if (Var0.f_19 != 4)
	{
		iVar6 = 0;
		while (iVar6 < 63)
		{
			iVar8 = iVar6;
			if (iVar8 != iParam0)
			{
				func_244(iVar8, &Var7);
				if (Var7.f_5 == Var0.f_19)
				{
					func_259(iVar8);
				}
			}
			iVar6++;
		}
	}
	if (!MISC::IS_BIT_SET(Global_17C49.f_41BC[iParam0 /*6*/], 3))
	{
		MISC::SET_BIT(&(Global_17C49.f_41BC[iParam0 /*6*/]), 3);
		Global_178B8[iParam0 /*10*/].f_5 = 1;
		func_256(iParam0);
		iVar9 = func_255(iParam0);
		if (iVar9 != 322)
		{
			func_96(iVar9, 0, 0);
		}
	}
}

int func_255(int iParam0)//Position - 0x2219B
{
	switch (iParam0)
	{
		case 0:
			return 109;
			break;
		
		case 1:
			return 322;
			break;
		
		case 2:
			return 69;
			break;
		
		case 3:
			return 70;
			break;
		
		case 4:
			return 322;
			break;
		
		case 5:
			return 71;
			break;
		
		case 6:
			return 71;
			break;
		
		case 7:
			return 72;
			break;
		
		case 8:
			return 68;
			break;
		
		case 9:
			return 73;
			break;
		
		case 10:
			return 74;
			break;
		
		case 11:
			return 75;
			break;
		
		case 12:
			return 76;
			break;
		
		case 13:
			return 77;
			break;
		
		case 14:
			return 78;
			break;
		
		case 15:
			return 79;
			break;
		
		case 16:
			return 80;
			break;
		
		case 17:
			return 81;
			break;
		
		case 18:
			return 82;
			break;
		
		case 19:
			return 83;
			break;
		
		case 20:
			return 84;
			break;
		
		case 21:
			return 85;
			break;
		
		case 22:
			return 86;
			break;
		
		case 23:
			return 87;
			break;
		
		case 24:
			return 106;
			break;
		
		case 25:
			return 178;
			break;
		
		case 26:
			return 179;
			break;
		
		case 27:
			return 88;
			break;
		
		case 28:
			return 89;
			break;
		
		case 29:
			return 90;
			break;
		
		case 30:
			return 91;
			break;
		
		case 31:
			return 107;
			break;
		
		case 32:
			return 92;
			break;
		
		case 33:
			return 93;
			break;
		
		case 34:
			return 94;
			break;
		
		case 35:
			return 110;
			break;
		
		case 36:
			return 111;
			break;
		
		case 37:
			return 95;
			break;
		
		case 38:
			return 96;
			break;
		
		case 39:
			return 97;
			break;
		
		case 40:
			return 98;
			break;
		
		case 41:
			return 99;
			break;
		
		case 42:
			return 100;
			break;
		
		case 43:
			return 101;
			break;
		
		case 44:
			return 66;
			break;
		
		case 45:
			return 67;
			break;
		
		case 46:
			return 102;
			break;
		
		case 47:
			return 103;
			break;
		
		case 48:
			return 322;
			break;
		
		case 49:
			return 104;
			break;
		
		case 50:
			return 104;
			break;
		
		case 51:
			return 105;
			break;
		
		case 52:
			return 194;
			break;
		
		case 53:
			return 195;
			break;
		
		case 54:
			return 196;
			break;
		
		case 55:
			return 197;
			break;
		
		case 56:
			return 198;
			break;
		
		case 57:
			return 108;
			break;
		
		case 58:
			return 208;
			break;
		
		case 59:
			return 209;
			break;
		
		case 60:
			return 210;
			break;
		
		case 61:
			return 211;
			break;
		
		case 62:
			return 212;
			break;
	}
	return 322;
}

void func_256(int iParam0)//Position - 0x22522
{
	func_258(iParam0, 1);
	Global_17C49.f_41BC[iParam0 /*6*/].f_3 = func_257();
	Global_17C49.f_41BC.f_17C++;
}

int func_257()//Position - 0x22558
{
	return (Global_17C49.f_204E.f_15 + Global_17C49.f_41BC.f_17C);
}

void func_258(var uParam0, bool bParam1)//Position - 0x22574
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 55;
	if (bParam1)
	{
		iVar1 = uParam0;
		if (iVar1 == 46)
		{
			iVar0 = 35;
		}
		else if (iVar1 == 49)
		{
			iVar0 = 36;
		}
		else if (iVar1 == 50)
		{
			iVar0 = 37;
		}
		else if (iVar1 == 8)
		{
			iVar0 = 38;
		}
		else if (iVar1 == 16)
		{
			iVar0 = 39;
		}
		else if (iVar1 == 38)
		{
			iVar0 = 40;
		}
		else if (iVar1 == 39)
		{
			iVar0 = 41;
		}
		else if (iVar1 == 40)
		{
			iVar0 = 42;
		}
		else if (iVar1 == 41)
		{
			iVar0 = 43;
		}
		else if (iVar1 == 42)
		{
			iVar0 = 44;
		}
		else if (iVar1 == 43)
		{
			iVar0 = 45;
		}
		else if (iVar1 == 20)
		{
			iVar0 = 46;
		}
	}
	else
	{
		iVar2 = uParam0;
		if (iVar2 == 53)
		{
			iVar0 = 0;
		}
		else if (iVar2 == 1)
		{
			iVar0 = 1;
		}
		else if (iVar2 == 2)
		{
			iVar0 = 2;
		}
		else if (iVar2 == 17)
		{
			iVar0 = 3;
		}
		else if (iVar2 == 19)
		{
			iVar0 = 4;
		}
		else if (iVar2 == 43)
		{
			iVar0 = 5;
		}
		else if (iVar2 == 44)
		{
			iVar0 = 6;
		}
		else if (iVar2 == 63)
		{
			iVar0 = 8;
		}
		else if (iVar2 == 12)
		{
			iVar0 = 9;
		}
		else if (iVar2 == 13)
		{
			iVar0 = 10;
		}
		else if (iVar2 == 64)
		{
			iVar0 = 11;
		}
		else if (iVar2 == 20)
		{
			iVar0 = 12;
		}
		else if (iVar2 == 30)
		{
			iVar0 = 13;
		}
		else if (iVar2 == 31)
		{
			iVar0 = 14;
		}
		else if (iVar2 == 41)
		{
			iVar0 = 15;
		}
		else if (iVar2 == 38)
		{
			iVar0 = 16;
		}
		else if (iVar2 == 9)
		{
			iVar0 = 18;
		}
		else if (iVar2 == 59)
		{
			iVar0 = 19;
		}
		else if (iVar2 == 45)
		{
			iVar0 = 20;
		}
		else if (iVar2 == 10)
		{
			iVar0 = 21;
		}
		else if (iVar2 == 14)
		{
			iVar0 = 22;
		}
		else if (iVar2 == 16)
		{
			iVar0 = 24;
		}
		else if (iVar2 == 39)
		{
			iVar0 = 25;
		}
		else if (iVar2 == 46)
		{
			iVar0 = 26;
		}
		else if (iVar2 == 60)
		{
			iVar0 = 27;
		}
		else if (iVar2 == 22)
		{
			iVar0 = 28;
		}
		else if (iVar2 == 48)
		{
			iVar0 = 30;
		}
		else if (iVar2 == 61)
		{
			iVar0 = 31;
		}
		else if (iVar2 == 49)
		{
			iVar0 = 32;
		}
		else if (iVar2 == 27)
		{
			iVar0 = 34;
		}
		else if (iVar2 == 3)
		{
			iVar0 = 47;
		}
		else if (iVar2 == 4)
		{
			iVar0 = 48;
		}
		else if (iVar2 == 5)
		{
			iVar0 = 49;
		}
		else if (iVar2 == 6)
		{
			iVar0 = 50;
		}
		else if (iVar2 == 7)
		{
			iVar0 = 51;
		}
		else if (iVar2 == 58)
		{
			iVar0 = 53;
		}
		else if (iVar2 == 90)
		{
			iVar0 = 7;
		}
		else if (iVar2 == 74 || iVar2 == 75)
		{
			iVar0 = 17;
		}
		else if (iVar2 == 93)
		{
			iVar0 = 23;
		}
		else if (iVar2 == 69 || iVar2 == 70)
		{
			iVar0 = 29;
		}
		else if (iVar2 == 84 || iVar2 == 85)
		{
			iVar0 = 33;
		}
	}
	if (iVar0 != 55)
	{
		Global_17C49.f_5CED.f_1D8 = iVar0;
	}
}

void func_259(int iParam0)//Position - 0x22898
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return;
	}
	func_260(iParam0);
	MISC::SET_BIT(&(Global_17C49.f_41BC[iParam0 /*6*/]), 0);
}

void func_260(int iParam0)//Position - 0x228CB
{
	switch (iParam0)
	{
		case 30:
			func_264(22, 1, 0, 1, 0);
			break;
		
		case 15:
			func_261(37, 0);
			break;
		
		default:
			break;
	}
}

void func_261(int iParam0, bool bParam1)//Position - 0x22900
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_263(iParam0, 0))
		{
			func_262(iParam0, 1, 0);
			func_262(iParam0, 2, 0);
			func_262(iParam0, 3, 0);
			func_262(iParam0, 4, 0);
			func_262(iParam0, 0, 1);
			Global_10642[iParam0] = 1;
		}
	}
	else
	{
		func_262(iParam0, 0, 0);
	}
}

void func_262(int iParam0, int iParam1, bool bParam2)//Position - 0x2295D
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

bool func_263(int iParam0, int iParam1)//Position - 0x22998
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_17C49.f_47C3[iParam0], iParam1);
}

void func_264(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x229BB
{
	if (iParam0 != 198)
	{
		if (Global_10A95)
		{
			Global_24F57C.f_49.f_E2[iParam0] = iParam1;
		}
		else
		{
			Global_17C49.f_158E.f_E2[iParam0] = iParam1;
		}
		Global_7CDA[iParam0] = iParam2;
		Global_7DA1[iParam0] = 1;
		func_267(iParam0, bParam3, iParam4, 0);
		func_265(iParam0, iParam1);
	}
}

void func_265(int iParam0, int iParam1)//Position - 0x22A16
{
	switch (iParam0)
	{
		case 12:
			if (iParam1 == 0)
			{
				AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 0, 0);
			}
			else
			{
				AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 1, 0);
			}
			break;
		
		case 71:
			if (iParam1 != 1)
			{
				AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("HEIST_SWEATSHOP_ZONES", 0, 0);
			}
			else
			{
				AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("HEIST_SWEATSHOP_ZONES", 1, 0);
			}
			break;
		
		case 65:
			if (iParam1 == 1)
			{
				func_266(0, 0);
			}
			else
			{
				func_266(0, 1);
			}
			break;
		
		case 6:
			if (iParam1 == 1)
			{
				AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 1, 0);
			}
			else
			{
				AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 0, 0);
			}
			break;
		
		case 174:
			if (iParam1 == 2)
			{
				AUDIO::REMOVE_PORTAL_SETTINGS_OVERRIDE("V_CARSHOWROOM_PS_WINDOW_UNBROKEN");
			}
			break;
		
		case 37:
			if (iParam1 == 1)
			{
				AUDIO::SET_STATIC_EMITTER_ENABLED("TREVOR1_TRAILER_PARK_MAIN_STAGE_RADIO", 0);
				AUDIO::SET_STATIC_EMITTER_ENABLED("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_01", 0);
				AUDIO::SET_STATIC_EMITTER_ENABLED("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_02", 0);
				AUDIO::SET_STATIC_EMITTER_ENABLED("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_03", 0);
			}
			break;
	}
}

void func_266(int iParam0, bool bParam1)//Position - 0x22AFF
{
	if (bParam1)
	{
		MISC::SET_BIT(&Global_176FA, iParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_176FA, iParam0);
	}
	Global_176F9 = 1;
}

bool func_267(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x22B28
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<5> Var3;
	var uVar4;
	bool bVar5;
	int iVar6;
	
	bVar0 = false;
	Var3.f_4 = 3;
	Var3.f_8 = 3;
	Var3.f_40 = 3;
	Var3.f_4B = 3;
	Var3.f_5B = 3;
	func_270(&Var3, iParam0);
	if (func_268())
	{
		iVar1 = Global_17C49.f_158E.f_E2[iParam0];
	}
	else
	{
		iVar1 = Global_24F57C.f_49.f_E2[iParam0];
	}
	iVar2 = Global_7E68[iParam0];
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !bParam3)
	{
	}
	else
	{
		bVar5 = true;
		if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != MISC::GET_HASH_KEY("standard_global_reg"))
		{
			if (iParam2 == 0)
			{
				if (Global_7CDA[iParam0] && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Var3, 1) < 200f)
				{
					bVar5 = false;
				}
				if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || TASK::IS_PED_BEING_ARRESTED(PLAYER::PLAYER_PED_ID()))
				{
					if (!CAM::IS_SCREEN_FADED_OUT())
					{
						bVar5 = false;
					}
				}
			}
		}
		if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || STREAMING::GET_PLAYER_SWITCH_STATE() != 5))
		{
			bVar5 = false;
		}
		if (bVar5)
		{
			switch (Var3.f_3)
			{
				case 0:
					if (iVar1 == 2)
					{
					}
					else
					{
						if (Var3.f_4[iVar1] != 0)
						{
							ENTITY::REMOVE_MODEL_HIDE(Var3, 10f, Var3.f_4[iVar1], 0);
						}
						if (Var3.f_4[iVar2] != 0)
						{
							ENTITY::CREATE_MODEL_HIDE(Var3, 10f, Var3.f_4[iVar2], 1);
						}
						Global_8314[iParam0] = 1;
					}
					bVar0 = true;
					break;
				
				case 1:
					if (iVar1 == 0)
					{
						if (MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) != MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[1 /*8*/])))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_8[1 /*8*/]));
							}
						}
						if ((MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("REMOVE_ALL_STATES")) && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[2 /*8*/])))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_8[2 /*8*/]));
							}
						}
						if (MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) != MISC::GET_HASH_KEY(""))
						{
							if (!STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[0 /*8*/])))
							{
								STREAMING::REQUEST_IPL(&(Var3.f_8[0 /*8*/]));
							}
						}
						if (MISC::GET_HASH_KEY(&(Var3.f_22)) != MISC::GET_HASH_KEY(""))
						{
							if (!STREAMING::IS_IPL_ACTIVE(&(Var3.f_22)))
							{
								STREAMING::REQUEST_IPL(&(Var3.f_22));
							}
						}
					}
					else if (iVar1 == 1)
					{
						if (MISC::GET_HASH_KEY(&(Var3.f_22)) != MISC::GET_HASH_KEY(""))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_22)))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_22));
							}
						}
						if (MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) != MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[0 /*8*/])))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_8[0 /*8*/]));
							}
						}
						if ((MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("REMOVE_ALL_STATES")) && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[2 /*8*/])))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_8[2 /*8*/]));
							}
						}
						if (MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) != MISC::GET_HASH_KEY(""))
						{
							if (!STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[1 /*8*/])))
							{
								STREAMING::REQUEST_IPL(&(Var3.f_8[1 /*8*/]));
							}
						}
					}
					else if (iVar1 == 2)
					{
						if (MISC::GET_HASH_KEY(&(Var3.f_22)) != MISC::GET_HASH_KEY(""))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_22)))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_22));
							}
						}
						if (MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) != MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[0 /*8*/])))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_8[0 /*8*/]));
							}
						}
						if (MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) != MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[1 /*8*/])))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_8[1 /*8*/]));
							}
						}
						if (MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("REMOVE_ALL_STATES"))
						{
							if (!STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[2 /*8*/])))
							{
								STREAMING::REQUEST_IPL(&(Var3.f_8[2 /*8*/]));
							}
						}
					}
					Global_824D[iParam0] = 1;
					Global_8314[iParam0] = 1;
					bVar0 = true;
					break;
				
				case 2:
					iVar6 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var3, &(Var3.f_2A));
					if (iVar6 != 0)
					{
						if (MISC::GET_HASH_KEY(&(Var3.f_32)) != MISC::GET_HASH_KEY(""))
						{
							if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar6, &(Var3.f_32)))
							{
								INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar6, &(Var3.f_32));
							}
						}
						if (iVar1 == 0)
						{
							if (MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) != MISC::GET_HASH_KEY(""))
							{
								if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar6, &(Var3.f_8[1 /*8*/])))
								{
									INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar6, &(Var3.f_8[1 /*8*/]));
								}
							}
							if ((MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("REMOVE_ALL_STATES")) && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar6, &(Var3.f_8[2 /*8*/])))
								{
									INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar6, &(Var3.f_8[2 /*8*/]));
								}
							}
							if (MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) != MISC::GET_HASH_KEY(""))
							{
								if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar6, &(Var3.f_8[0 /*8*/])))
								{
									INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar6, &(Var3.f_8[0 /*8*/]));
								}
							}
						}
						else if (iVar1 == 1)
						{
							if (MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) != MISC::GET_HASH_KEY(""))
							{
								if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar6, &(Var3.f_8[0 /*8*/])))
								{
									INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar6, &(Var3.f_8[0 /*8*/]));
								}
							}
							if ((MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("REMOVE_ALL_STATES")) && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar6, &(Var3.f_8[2 /*8*/])))
								{
									INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar6, &(Var3.f_8[2 /*8*/]));
								}
							}
							if (MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) != MISC::GET_HASH_KEY(""))
							{
								if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar6, &(Var3.f_8[1 /*8*/])))
								{
									INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar6, &(Var3.f_8[1 /*8*/]));
								}
							}
						}
						else if (iVar1 == 2)
						{
							if (MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) != MISC::GET_HASH_KEY(""))
							{
								if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar6, &(Var3.f_8[0 /*8*/])))
								{
									INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar6, &(Var3.f_8[0 /*8*/]));
								}
							}
							if (MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) != MISC::GET_HASH_KEY(""))
							{
								if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar6, &(Var3.f_8[1 /*8*/])))
								{
									INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar6, &(Var3.f_8[1 /*8*/]));
								}
							}
							if (MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("REMOVE_ALL_STATES"))
							{
								if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar6, &(Var3.f_8[2 /*8*/])))
								{
									INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar6, &(Var3.f_8[2 /*8*/]));
								}
							}
						}
						if (bParam1)
						{
							INTERIOR::REFRESH_INTERIOR(iVar6);
						}
					}
					Global_8314[iParam0] = 1;
					Global_824D[iParam0] = 1;
					bVar0 = true;
					break;
				
				case 3:
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var3, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 1) < 250f)
					{
						uVar4 = OBJECT::GET_RAYFIRE_MAP_OBJECT(Var3, 25f, &(Var3.f_8[0 /*8*/]));
						if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uVar4))
						{
							if (iVar1 == 0)
							{
								OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uVar4, 3);
								Global_8314[iParam0] = 1;
								bVar0 = true;
							}
							else if (iVar1 == 1)
							{
								if ((OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uVar4) != 6 && OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uVar4) != 7) && OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uVar4) != 8)
								{
									OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uVar4, 10);
									Global_8314[iParam0] = 1;
									bVar0 = true;
								}
							}
							else if (iVar1 == 2)
							{
								bVar0 = true;
							}
						}
					}
					break;
				
				case 4:
					if (iVar1 == 0)
					{
						ENTITY::REMOVE_MODEL_SWAP(Var3, 50f, Var3.f_4[1], Var3.f_4[0], 0);
						MISC::CLEAR_BIT(&(Global_7BDD[(iParam0 / 32)]), (iParam0 % 32));
					}
					else if (iVar1 == 1)
					{
						ENTITY::CREATE_MODEL_SWAP(Var3, 50f, Var3.f_4[0], Var3.f_4[1], 1);
						MISC::SET_BIT(&(Global_7BDD[(iParam0 / 32)]), (iParam0 % 32));
					}
					bVar0 = true;
					break;
			}
			if (bVar0)
			{
				Global_7DA1[iParam0] = 0;
				Global_7E68[iParam0] = iVar1;
				if (!func_268())
				{
					if (!Global_80BD[iParam0])
					{
						Global_80BD[iParam0] = 1;
						Global_8184++;
					}
				}
			}
		}
	}
	return bVar0;
}

int func_268()//Position - 0x23463
{
	if ((func_72() == -1 || func_72() == 999) && !func_269() == 0)
	{
		return 1;
	}
	return 0;
}

int func_269()//Position - 0x23493
{
	return Global_5F7D;
}

int func_270(var uParam0, int iParam1)//Position - 0x2349E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_4[iVar0] = 0;
		StringCopy(&(uParam0->f_8[iVar0 /*8*/]), "", 32);
		uParam0->f_40[iVar0] = 0;
		uParam0->f_4B[iVar0] = 0;
		uParam0->f_5B[iVar0] = 0;
		iVar0++;
	}
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0;
	uParam0->f_21 = 0;
	StringCopy(&(uParam0->f_22), "", 32);
	StringCopy(&(uParam0->f_2A), "", 32);
	StringCopy(&(uParam0->f_32), "", 32);
	uParam0->f_3A = { 0f, 0f, 0f };
	uParam0->f_3D = { 0f, 0f, 0f };
	uParam0->f_44 = { 0f, 0f, 0f };
	uParam0->f_47 = { 0f, 0f, 0f };
	uParam0->f_4A = 0f;
	uParam0->f_4F = { 0f, 0f, 0f };
	uParam0->f_52 = { 0f, 0f, 0f };
	uParam0->f_55 = { 0f, 0f, 0f };
	uParam0->f_58 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 3:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "TRV1_Trail_start", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "TRV1_Trail_end", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "TRV1_Trail_Finish", 32);
			uParam0->f_21 = 1;
			*uParam0 = { -24.685f, 3032.92f, 40.331f };
			break;
		
		case 4:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS3_05_water_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS3_05_water_grp2", 32);
			*uParam0 = { -24.685f, 3032.92f, 40.331f };
			break;
		
		case 0:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "gasstation_ipl_group1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "gasstation_ipl_group2", 32);
			*uParam0 = { -93.4f, 6410.9f, 36.8f };
			break;
		
		case 1:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DES_Smash2_startimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_Smash2_endimap", 32);
			*uParam0 = { 890.3647f, -2367.289f, 28.10582f };
			break;
		
		case 2:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DES_StiltHouse_imapstart", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_StiltHouse_imapend", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "des_stilthouse_rebuild", 32);
			uParam0->f_21 = 0;
			*uParam0 = { -1020.5f, 663.41f, 154.75f };
			uParam0->f_3A = { -1018.913f, 603.2904f, 105.6611f };
			uParam0->f_3D = { -1038.913f, 639.2904f, 135.6611f };
			uParam0->f_40[0] = 1;
			uParam0->f_40[1] = 0;
			break;
		
		case 5:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "bnkheist_apt_norm", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bnkheist_apt_dest", 32);
			break;
		
		case 196:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bnkheist_apt_dest_vfx", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_21 = 1;
			break;
		
		case 6:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "crashed_cargoplane", 32);
			break;
		
		case 7:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_jb700_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 8:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_entityXF_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 9:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_cheetah_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 10:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_ztype_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 11:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "BH1_48_Killed_Michael", 32);
			break;
		
		case 12:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "cargoship", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "sunkcargoship", 32);
			uParam0->f_44 = { -162.8918f, -2365.769f, 0f };
			uParam0->f_47 = { 190.75f, 31.25f, 21f };
			uParam0->f_4A = 0f;
			uParam0->f_4B[0] = 0;
			uParam0->f_4B[1] = 1;
			break;
		
		case 13:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ship_occ_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ship_occ_grp2", 32);
			break;
		
		case 14:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "smboat", 32);
			break;
		
		case 15:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "gasparticle_grp2", 32);
			*uParam0 = { -95.2f, 6411.3f, 31.5f };
			break;
		
		case 16:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS1_02_cf_offmission", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission1", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 17:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission2", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 18:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission3", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 19:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission4", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 20:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "jetstealtunnel", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 801.7f, -1810.8f, 23.3f };
			break;
		
		case 21:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Jetsteal_ipl_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Jetsteal_ipl_grp2", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_21 = 1;
			*uParam0 = { 787.3967f, -1808.858f, 29.8532f };
			uParam0->f_3A = { 814f, -1750f, 20f };
			uParam0->f_3D = { 790f, -1899f, 35f };
			uParam0->f_40[0] = 1;
			uParam0->f_40[1] = 0;
			uParam0->f_40[2] = 0;
			break;
		
		case 22:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "BH1_47_JoshHse_UnBurnt", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "BH1_47_JoshHse_Burnt", 32);
			break;
		
		case 23:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bh1_47_joshhse_firevfx", 32);
			break;
		
		case 24:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_30_Keep_Closed", 32);
			break;
		
		case 25:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "triathlon2_VBprops", 32);
			break;
		
		case 26:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_REQUEST", 32);
			*uParam0 = { 163.4f, -745.7f, 251f };
			break;
		
		case 27:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FBI_colPLUG", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 28:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FBI_repair", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 29:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = joaat("dt1_05_build1_h");
			uParam0->f_4[1] = joaat("dt1_05_build1_damage");
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 30:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = -112041596;
			uParam0->f_4[1] = joaat("dt1_05_build1_damage_lod");
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 31:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = joaat("dt1_05_slod");
			uParam0->f_4[1] = joaat("dt1_05_damage_slod");
			*uParam0 = { 178.534f, -668.835f, 37.2113f };
			break;
		
		case 32:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FIB_heist_lights", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 33:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FIB_heist_dmg", 32);
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 34:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_rubble", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 35:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FIBlobbyfake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FIBlobby", 32);
			*uParam0 = { 105.4557f, -745.4835f, 44.7548f };
			break;
		
		case 36:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_05_HC_REMOVE", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_HC_REQ", 32);
			*uParam0 = { 169f, -670.3f, 41.9f };
			break;
		
		case 37:
			uParam0->f_3 = 1;
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			uParam0->f_4F = { 16.9757f, 3614.307f, 30.0677f };
			uParam0->f_52 = { 145.2451f, 3748.912f, 49.6958f };
			uParam0->f_55 = { 16.9757f, 3614.307f, 30.0677f };
			uParam0->f_58 = { 145.2451f, 3748.912f, 49.6958f };
			uParam0->f_5B[0] = 0;
			uParam0->f_5B[1] = 1;
			break;
		
		case 38:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkA_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkA_grp2", 32);
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			break;
		
		case 39:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerA_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			break;
		
		case 40:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkB_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkB_grp2", 32);
			*uParam0 = { 106.7f, 3732.1f, 40.8f };
			break;
		
		case 41:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerB_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 106.7f, 3732.1f, 40.8f };
			break;
		
		case 42:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkC_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkC_grp2", 32);
			*uParam0 = { 72.7f, 3695.4f, 42f };
			break;
		
		case 43:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerC_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 72.7f, 3695.4f, 42f };
			break;
		
		case 44:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkD_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkD_grp2", 32);
			*uParam0 = { 43.8f, 3699.7f, 41.3f };
			break;
		
		case 45:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerD_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 43.8f, 3699.7f, 41.3f };
			break;
		
		case 46:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkE_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkE_grp2", 32);
			*uParam0 = { 28.5f, 3668f, 40.4f };
			break;
		
		case 47:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerE_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 28.5f, 3668f, 40.4f };
			break;
		
		case 48:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_22), "des_methtrailer", 32);
			StringCopy(&(uParam0->f_8[0 /*8*/]), "methtrailer_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "methtrailer_grp2", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "methtrailer_grp3", 32);
			uParam0->f_21 = 1;
			*uParam0 = { 29.4838f, 3735.593f, 38.688f };
			uParam0->f_44 = { 31.134f, 3738.783f, 39.062f };
			uParam0->f_47 = { 13.6f, 20f, 8.9f };
			uParam0->f_4A = 48f;
			uParam0->f_4B[0] = 0;
			uParam0->f_4B[1] = 1;
			uParam0->f_4B[2] = 1;
			break;
		
		case 49:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_meth_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 29.4838f, 3735.593f, 38.688f };
			break;
		
		case 50:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhs_startimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhs_endimap", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_21 = 1;
			*uParam0 = { 2450.595f, 4959.929f, 44.2575f };
			uParam0->f_4F = { 2383.756f, 4929.988f, 39.52461f };
			uParam0->f_52 = { 2505.756f, 5023.988f, 67.52461f };
			break;
		
		case 55:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhs_start_occl", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhs_end_occl", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { 2450.595f, 4959.929f, 44.2575f };
			break;
		
		case 51:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farm", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "farm", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "farm_burnt", 32);
			uParam0->f_21 = 1;
			*uParam0 = { 2444.8f, 4976.4f, 50.5f };
			break;
		
		case 52:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farm_props", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "farm_burnt_props", 32);
			uParam0->f_21 = 1;
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 53:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhouse", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhouse", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_21 = 1;
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 54:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farmint_cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "farmint", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 56:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "tankerexp_grp0", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp3", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 57:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp1", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 58:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp2", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 59:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_tankerexp", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 60:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "dockcrane1", 32);
			*uParam0 = { 889.3f, -2910.9f, 40f };
			break;
		
		case 61:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CanyonRvrShallow", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CanyonRvrDeep", 32);
			*uParam0 = { -1600.619f, 4443.457f, 0.725f };
			break;
		
		case 62:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Garage_door_locked", 32);
			*uParam0 = { 966.1f, -114.8f, 75.2f };
			break;
		
		case 63:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ch1_02_closed", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ch1_02_open", 32);
			*uParam0 = { -3086.428f, 339.2523f, 6.3717f };
			break;
		
		case 64:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ferris_finale_Anim", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -1675.178f, -1143.605f, 12.0175f };
			break;
		
		case 65:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "railing_start", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "railing_end", 32);
			*uParam0 = { -532.1309f, 4526.187f, 88.7955f };
			break;
		
		case 66:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "canyonriver01", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "canyonriver01_traincrash", 32);
			*uParam0 = { -532.1309f, 4526.187f, 88.7955f };
			break;
		
		case 67:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_05_WOFFM", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_FIB2_Mission", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "DT1_05_WOFFM", 32);
			*uParam0 = { 131.29f, -631.22f, 261.85f };
			break;
		
		case 68:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "coronertrash", 32);
			*uParam0 = { 233.9f, -1355f, 30.3f };
			break;
		
		case 69:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Coroner_Int_off", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Coroner_Int_on", 32);
			*uParam0 = { 234.4f, -1355.6f, 40.5f };
			break;
		
		case 70:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "id2_14_pre_no_int", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 71:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_during1", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "id2_14_during2", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 72:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_on_fire", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "id2_14_post_no_int", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 73:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_during_door", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 74:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "burnt_switch_off", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 75:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "RC12B_Default", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "RC12B_Destroyed", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "RC12B_Fixed", 32);
			uParam0->f_21 = 0;
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 76:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "RC12B_HospitalInterior", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_21 = 0;
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 105:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SM_15_BldGRAF1", 32);
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 106:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CH3_RD2_BishopsChickenGraffiti", 32);
			*uParam0 = { 1861.28f, 2402.11f, 58.53f };
			break;
		
		case 107:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FruitBB", 32);
			*uParam0 = { -1327.46f, -274.82f, 54.25f };
			break;
		
		case 108:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS5_04_MazeBillboardGraffiti", 32);
			*uParam0 = { 2697.32f, 3162.18f, 58.1f };
			break;
		
		case 109:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS5_Roads_RonOilGraffiti", 32);
			*uParam0 = { 2119.12f, 3058.21f, 53.25f };
			break;
		
		case 110:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ap1_03_bbrd_dcl", 32);
			*uParam0 = { -804.25f, -2276.88f, 23.59f };
			break;
		
		case 111:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "HW1_02_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "HW1_02_NewBill", 32);
			*uParam0 = { 296.5f, 173.3f, 100.4f };
			break;
		
		case 112:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "HW1_Emissive_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "HW1_Emissive_NewBill", 32);
			*uParam0 = { 296.5f, 173.3f, 100.4f };
			break;
		
		case 77:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_21 = 1;
			*uParam0 = { 480.9554f, -1321.21f, 28.2037f };
			uParam0->f_55 = { 508.3f, -1299.3f, 39.4f };
			uParam0->f_58 = { 459.9f, -1363.2f, 21.4f };
			uParam0->f_5B[0] = 0;
			uParam0->f_5B[1] = 1;
			uParam0->f_5B[2] = 0;
			break;
		
		case 78:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "TrevorsTrailer", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "TrevorsTrailerTrash", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "TrevorsTrailerTidy", 32);
			*uParam0 = { 1973f, 3815f, 34f };
			uParam0->f_21 = 0;
			break;
		
		case joaat("mpsv_lp0_31"):
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "scafstartimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "scafendimap", 32);
			*uParam0 = { -1088.6f, -1650.6f, 6.4f };
			break;
		
		case 80:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "chop_props", 32);
			*uParam0 = { -13.83f, -1455.45f, 31.81f };
			break;
		
		case 113:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "AP1_04_TriAf01", 32);
			*uParam0 = { -1277.629f, -2030.913f, 1.2823f };
			break;
		
		case 114:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS2_06_TriAf02", 32);
			*uParam0 = { 2384.969f, 4277.583f, 30.379f };
			break;
		
		case 115:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS4_04_TriAf03", 32);
			*uParam0 = { 1577.881f, 3836.107f, 30.7717f };
			break;
		
		case 87:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_21_prop_lift_on", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -180.5771f, -1016.928f, 28.2893f };
			break;
		
		case 88:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "jewel2fake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "post_hiest_unload", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "bh1_16_refurb", 32);
			*uParam0 = { -630.4205f, -236.7843f, 37.057f };
			uParam0->f_4F = { (-623.6868f - 11f), (-231.935f - 11f), (40.30703f - 3.25f) };
			uParam0->f_52 = { (-623.6868f + 11f), (-231.935f + 11f), (40.30703f + 3.25f) };
			break;
		
		case 89:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "bh1_16_doors_shut", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "refit_unload", 32);
			*uParam0 = { -583.1606f, -282.3967f, 35.394f };
			break;
		
		case 90:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "v_tunnel_hole_swap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "v_tunnel_hole", 32);
			*uParam0 = { -14.651f, -604.3639f, 25.1823f };
			break;
		
		case 91:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "cs5_4_trains", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2773.61f, 2835.327f, 35.1903f };
			break;
		
		case 94:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "airfield", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 1743.682f, 3286.251f, 40.0875f };
			break;
		
		case 95:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_21 = 1;
			*uParam0 = { 1222.9f, 1877.9f, 79.9f };
			uParam0->f_3A = { 1206.8f, 1803f, 43.9f };
			uParam0->f_3D = { 1329f, 2060.4f, 143.9f };
			uParam0->f_40[0] = 0;
			uParam0->f_40[1] = 1;
			uParam0->f_40[2] = 0;
			break;
		
		case 104:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_01_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SC1_01_NewBill", 32);
			*uParam0 = { -351f, -1324f, 44.02f };
			break;
		
		case 103:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_17_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_17_NewBill", 32);
			*uParam0 = { 391.81f, -962.71f, 41.97f };
			break;
		
		case 102:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_14_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SC1_14_NewBill", 32);
			*uParam0 = { 424.2f, -1944.31f, 33.09f };
			break;
		
		case 92:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ld_rail_01_track", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2626.374f, 2949.869f, 39.1409f };
			break;
		
		case 93:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ld_rail_02_track", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2626.374f, 2949.869f, 39.1409f };
			break;
		
		case 118:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_M_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_M_moved", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -811.2679f, 179.3344f, 75.7408f };
			break;
		
		case 116:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_D_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_D_Moved", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -802.0311f, 172.9131f, 75.7408f };
			break;
		
		case 117:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_S_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_S_items_swap", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 119:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_L_Items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_L_Moved", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 120:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_M_items_swap", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 122:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_FameShame", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -802.0311f, 172.9131f, 75.7408f };
			break;
		
		case 121:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_JewelHeist", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 123:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Michael_premier", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 124:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_plane_ticket", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 170:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "burgershot_yoga", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 171:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_Scuba", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael_Garage", 32);
			*uParam0 = { -810.5301f, 187.7868f, 71.4786f };
			break;
		
		case 125:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_bed_tidy", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_bed_Messy", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -811.2679f, 179.3344f, 75.7408f };
			break;
		
		case 164:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Jewel_Gasmasks", 32);
			StringCopy(&(uParam0->f_2A), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 165:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_53_Agency _Overalls", 32);
			StringCopy(&(uParam0->f_2A), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 166:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_53_Agency_Blueprint", 32);
			StringCopy(&(uParam0->f_2A), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 167:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_KitBag", 32);
			StringCopy(&(uParam0->f_2A), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 168:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_Body_Armour", 32);
			StringCopy(&(uParam0->f_2A), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 169:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_Fireman", 32);
			StringCopy(&(uParam0->f_2A), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 126:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet1", 32);
			StringCopy(&(uParam0->f_2A), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 127:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet3", 32);
			StringCopy(&(uParam0->f_2A), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 128:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet2", 32);
			StringCopy(&(uParam0->f_2A), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 129:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase1", 32);
			StringCopy(&(uParam0->f_2A), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 130:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase3", 32);
			StringCopy(&(uParam0->f_2A), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 131:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase2", 32);
			StringCopy(&(uParam0->f_2A), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 132:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay1", 32);
			StringCopy(&(uParam0->f_2A), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 133:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay3", 32);
			StringCopy(&(uParam0->f_2A), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 134:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay2", 32);
			StringCopy(&(uParam0->f_2A), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 179:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "shutter_open", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "shutter_closed", 32);
			StringCopy(&(uParam0->f_2A), "v_carshowroom", 32);
			*uParam0 = { -30.8793f, -1088.336f, 25.4221f };
			uParam0->f_44 = { -29.3f, -1086.35f, 25.57f };
			uParam0->f_47 = { 5.5f, 3f, 2f };
			uParam0->f_4A = -10f;
			uParam0->f_4B[0] = 0;
			uParam0->f_4B[1] = 1;
			break;
		
		case 174:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "csr_beforeMission", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "csr_afterMissionA", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "csr_afterMissionB", 32);
			StringCopy(&(uParam0->f_32), "csr_inMission", 32);
			uParam0->f_21 = 0;
			StringCopy(&(uParam0->f_2A), "v_carshowroom", 32);
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 175:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_2A), "v_carshowroom", 32);
			*uParam0 = { -49.21f, -1090.28f, 25.42f };
			uParam0->f_44 = { -49.21f, -1090.28f, 25.42f };
			uParam0->f_47 = { 2.5f, 3f, 3f };
			uParam0->f_4A = 0f;
			uParam0->f_4B[0] = 0;
			uParam0->f_4B[1] = 1;
			uParam0->f_4B[2] = 0;
			break;
		
		case 176:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_2A), "v_carshowroom", 32);
			*uParam0 = { -49.28f, -1092.66f, 25.42f };
			uParam0->f_44 = { -49.28f, -1092.66f, 25.42f };
			uParam0->f_47 = { 3f, 1f, 3f };
			uParam0->f_4A = 0f;
			uParam0->f_4B[0] = 0;
			uParam0->f_4B[1] = 1;
			uParam0->f_4B[2] = 0;
			break;
		
		case 177:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_2A), "v_carshowroom", 32);
			*uParam0 = { -53.07f, -1096.73f, 25.5f };
			uParam0->f_44 = { -53.07f, -1096.73f, 25.5f };
			uParam0->f_47 = { 1f, 3f, 2f };
			uParam0->f_4A = -45f;
			uParam0->f_4B[0] = 0;
			uParam0->f_4B[1] = 1;
			uParam0->f_4B[2] = 0;
			break;
		
		case 178:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "carshowroom_broken", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "carshowroom_boarded", 32);
			uParam0->f_21 = 0;
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 173:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "shr_int", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "fakeint", 32);
			uParam0->f_21 = 0;
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 180:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_03_Shutter", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_2A), "", 32);
			*uParam0 = { 23.9346f, -669.7552f, 30.8853f };
			break;
		
		case 181:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Hospitaldoorsanim", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "Hospitaldoorsfixed", 32);
			StringCopy(&(uParam0->f_2A), "v_hospital", 32);
			uParam0->f_21 = 0;
			*uParam0 = { 300.9423f, -586.1784f, 42.2919f };
			break;
		
		case 135:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_clean_apt", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_A", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 136:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_B", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 137:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_C", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 138:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_sextoys_a", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 139:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_wade_shit", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 140:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_wade_sofa_A", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 141:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "layer_debra_pic", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 142:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_torture", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 143:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_sofa_A", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_sofa_B", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 144:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_whiskey", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 145:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_mrJam_A", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_mrJam_B", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 146:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_mrJam_C", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 147:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "vb_30_emissive", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "vb_30_murder", 32);
			uParam0->f_21 = 0;
			*uParam0 = { -1150.039f, -1521.761f, 9.6331f };
			break;
		
		case 148:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "vb_30_crimetape", 32);
			uParam0->f_21 = 0;
			*uParam0 = { -1150.039f, -1521.761f, 9.6331f };
			break;
		
		case 149:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "sheriff_cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_21 = 0;
			*uParam0 = { 1856.029f, 3682.998f, 33.2675f };
			break;
		
		case 150:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS1_16_Sheriff_Cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_21 = 0;
			*uParam0 = { -440.5073f, 6018.766f, 30.49f };
			break;
		
		case 151:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ufo", 32);
			uParam0->f_21 = 0;
			*uParam0 = { 487.31f, 5588.386f, 793.0532f };
			break;
		
		case 152:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ufo_eye", 32);
			uParam0->f_21 = 0;
			*uParam0 = { 487.31f, 5588.386f, 793.0532f };
			break;
		
		case 153:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_57_FranklinStuff", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_Franklin_LEFT", 32);
			StringCopy(&(uParam0->f_2A), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 154:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_GangBandana", 32);
			StringCopy(&(uParam0->f_2A), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 155:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_Safari", 32);
			StringCopy(&(uParam0->f_2A), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 172:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_19_Trevor_Mess", 32);
			StringCopy(&(uParam0->f_2A), "v_strip3", 32);
			*uParam0 = { 96.4811f, -1291.294f, 28.2688f };
			break;
		
		case 182:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_21 = 0;
			*uParam0 = { 139.5795f, -3092.962f, 8.64631f };
			uParam0->f_4F = { Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_52 = { Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_55 = { Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_58 = { Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_5B[0] = 0;
			uParam0->f_5B[1] = 1;
			uParam0->f_5B[2] = 1;
			break;
		
		case 183:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_21 = 0;
			*uParam0 = { 203.7784f, -3131.767f, 7.041344f };
			uParam0->f_4F = { Vector(7.041344f, -3131.767f, 203.7784f) - Vector(2.5625f, 2.75f, 4.875f) };
			uParam0->f_52 = { Vector(7.041344f, -3131.767f, 203.7784f) + Vector(2.5625f, 2.75f, 4.875f) };
			break;
		
		case 184:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_21 = 0;
			*uParam0 = { 144.7706f, -2982.659f, 7.952507f };
			uParam0->f_4F = { Vector(7.952507f, -2982.659f, 144.7706f) - Vector(3.125f, 3.4375f, 5.3125f) };
			uParam0->f_52 = { Vector(7.952507f, -2982.659f, 144.7706f) + Vector(3.125f, 3.4375f, 5.3125f) };
			break;
		
		case 185:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_21 = 1;
			*uParam0 = { -1154.965f, -1520.983f, 9.132731f };
			uParam0->f_4F = { -1154.965f, -1520.983f, 9.132731f };
			uParam0->f_52 = { -1158.965f, -1524.983f, 11.63273f };
			break;
		
		case 187:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_21 = 1;
			*uParam0 = { -1052.204f, 371.9537f, 67.914f };
			uParam0->f_4F = { -1052.204f, 371.9537f, 67.914f };
			uParam0->f_52 = { -1048.064f, 368.0221f, 70.9128f };
			break;
		
		case 186:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_21 = 1;
			*uParam0 = { 1954.984f, 3792.991f, 30.3086f };
			uParam0->f_4F = { 1954.984f, 3792.991f, 30.3086f };
			uParam0->f_52 = { 1983.45f, 3830.78f, 36.2726f };
			break;
		
		case 188:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_21 = 1;
			*uParam0 = { -1122.202f, 48.5724f, 51.4652f };
			uParam0->f_4F = { -1122.202f, 48.5724f, 51.4652f };
			uParam0->f_52 = { -1076.233f, 92.1041f, 60.0617f };
			break;
		
		case 81:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "KorizTempWalls", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_21 = 0;
			*uParam0 = { -2199.138f, 223.4648f, 181.1118f };
			break;
		
		case 82:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "mic3_chopper_debris", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_21 = 0;
			*uParam0 = { -2242.785f, 263.4779f, 173.6154f };
			break;
		
		case 83:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "chemgrill_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 3832.9f, 3665.5f, -23.4f };
			break;
		
		case 84:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Plane_crash_trench", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_21 = 0;
			*uParam0 = { 2814.7f, 4758.5f, 47.9f };
			break;
		
		case 85:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "golfflags", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -1096.505f, 4.5754f, 49.8103f };
			break;
		
		case 86:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "yogagame", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -781.6566f, 186.8937f, 71.8352f };
			break;
		
		case 189:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Carwash_with_spinners", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Carwash_without_spinners", 32);
			uParam0->f_21 = 0;
			*uParam0 = { 55.7f, -1391.3f, 30.5f };
			break;
		
		case 190:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "KT_CarWash", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "KT_CarWash_NoBrush", 32);
			uParam0->f_21 = 0;
			*uParam0 = { 700.091f, -933.641f, 20.308f };
			break;
		
		case 191:
			uParam0->f_3 = 1;
			*uParam0 = { -1096.381f, -836.17f, 36.6755f };
			uParam0->f_55 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_58 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_5B[0] = 1;
			uParam0->f_5B[1] = 0;
			break;
		
		case 192:
			uParam0->f_3 = 1;
			*uParam0 = { 449.6558f, -980.1375f, 42.6918f };
			uParam0->f_55 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_58 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_5B[0] = 1;
			uParam0->f_5B[1] = 0;
			break;
		
		case 193:
			uParam0->f_3 = 1;
			*uParam0 = { 363.0175f, -1598.079f, 35.9502f };
			uParam0->f_55 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_58 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_5B[0] = 1;
			uParam0->f_5B[1] = 0;
			break;
		
		case 194:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS3_07_MPGates", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { -1601.424f, 2808.213f, 16.2598f };
			break;
		
		case 97:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_03_Gr_Closed", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 23.7318f, -647.2123f, 37.9549f };
			break;
		
		case 98:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FINBANK", 32);
			*uParam0 = { 12.9689f, -648.4698f, 9.7693f };
			break;
		
		case 99:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "PAPER1_RCM_ALT", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "PAPER1_RCM", 32);
			*uParam0 = { -1459.127f, 486.1281f, 115.2016f };
			break;
		
		case 100:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SP1_10_fake_interior", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SP1_10_real_interior", 32);
			*uParam0 = { -248.4916f, -2010.509f, 34.5743f };
			break;
		
		case 101:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "facelobbyfake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "facelobby", 32);
			*uParam0 = { -1081.347f, -263.1502f, 38.7152f };
			break;
		
		case 195:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "atriumglstatic", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "atriumglmission", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "atriumglcut", 32);
			*uParam0 = { 136.1795f, -750.701f, 262.0516f };
			break;
		
		case 197:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "racetrack01", 32);
			*uParam0 = { 2096f, 3168.7f, 42.9f };
			break;
	}
	switch (iParam1)
	{
		case 156:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "showhome_only", 32);
			StringCopy(&(uParam0->f_2A), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 157:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "franklin_unpacking", 32);
			StringCopy(&(uParam0->f_2A), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 158:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "franklin_settled", 32);
			StringCopy(&(uParam0->f_2A), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 163:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_tshirt", 32);
			StringCopy(&(uParam0->f_2A), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 159:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bong_and_wine", 32);
			StringCopy(&(uParam0->f_2A), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 161:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_flyer", 32);
			StringCopy(&(uParam0->f_2A), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 162:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_tux", 32);
			StringCopy(&(uParam0->f_2A), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 160:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "locked", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "unlocked", 32);
			StringCopy(&(uParam0->f_2A), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 96:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "chophillskennel", 32);
			*uParam0 = { 19.0568f, 536.4818f, 169.6277f };
			break;
	}
	return 1;
}

int func_271(int iParam0)//Position - 0x26CDD
{
	switch (iParam0)
	{
		case 46:
			return 42;
			break;
		
		case 47:
			return 43;
			break;
		
		case 49:
			return 44;
			break;
		
		case 50:
			return 45;
			break;
		
		case 8:
			if (MISC::IS_BIT_SET(Global_17C49.f_41BC.f_17E, 0))
			{
				return 46;
			}
			break;
		
		case 16:
			return 47;
			break;
		
		case 38:
			return 48;
			break;
		
		case 39:
			return 49;
			break;
		
		case 40:
			return 50;
			break;
		
		case 41:
			return 51;
			break;
		
		case 42:
			return 52;
			break;
		
		case 43:
			if (Global_17C49.f_1CAD.f_63.f_3A[101])
			{
				return 53;
			}
			else
			{
				return 54;
			}
			break;
		
		case 20:
			return 55;
			break;
	}
	return 0;
}

void func_272(int iParam0, bool bParam1)//Position - 0x26DCF
{
	switch (iParam0)
	{
		case 46:
			func_273(4, bParam1);
			break;
		
		case 16:
			func_273(6, bParam1);
			break;
		
		case 37:
			func_273(17, bParam1);
			break;
		
		case 31:
			func_273(16, bParam1);
			break;
	}
}

void func_273(int iParam0, bool bParam1)//Position - 0x26E20
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 <= 31)
	{
		if (!MISC::IS_BIT_SET(Global_17C49.f_73A7, iVar0))
		{
			MISC::SET_BIT(&(Global_17C49.f_73A7), iVar0);
			if (!bParam1)
			{
				func_278(func_279(iParam0));
				if (!func_277(68))
				{
					func_274("DI_HLP_STRY", 2, 0, 20000, 10000, 7, 0, 208, 0);
				}
			}
		}
	}
}

void func_274(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x26E8D
{
	func_275(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_275(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x26EAF
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
		func_276();
	}
}

void func_276()//Position - 0x27083
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

int func_277(int iParam0)//Position - 0x271A3
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

void func_278(var uParam0)//Position - 0x271E6
{
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("");
	HUD::_END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT_GXT_ENTRY("CHAR_ACTING_UP", "CHAR_ACTING_UP", 0, 0, "DI_FEED_CHAR", uParam0);
}

char* func_279(int iParam0)//Position - 0x2720B
{
	switch (iParam0)
	{
		case 0:
			return "CM_STOMIC";
			break;
		
		case 1:
			return "CM_STOFRA";
			break;
		
		case 2:
			return "CM_STOTRE";
			break;
		
		case 3:
			return "CM_STOAMA";
			break;
		
		case 4:
			return "CM_STOBEV";
			break;
		
		case 5:
			return "CM_STOBRA";
			break;
		
		case 6:
			return "CM_STOCHR";
			break;
		
		case 7:
			return "CM_STODAV";
			break;
		
		case 8:
			return "CM_STODEV";
			break;
		
		case 9:
			return "CM_STODRF";
			break;
		
		case 10:
			return "CM_STOFAB";
			break;
		
		case 11:
			return "CM_STOFLO";
			break;
		
		case 12:
			return "CM_STOJIM";
			break;
		
		case 13:
			return "CM_STOLAM";
			break;
		
		case 14:
			return "CM_STOLAZ";
			break;
		
		case 15:
			return "CM_STOLES";
			break;
		
		case 16:
			return "CM_STOMAU";
			break;
		
		case 17:
			return "CM_STOTHO";
			break;
		
		case 18:
			return "CM_STONER";
			break;
		
		case 19:
			return "CM_STOPAT";
			break;
		
		case 20:
			return "CM_STOSIM";
			break;
		
		case 21:
			return "CM_STOSOL";
			break;
		
		case 22:
			return "CM_STOSTE";
			break;
		
		case 23:
			return "CM_STOSTR";
			break;
		
		case 24:
			return "CM_STOTAN";
			break;
		
		case 25:
			return "CM_STOTAO";
			break;
		
		case 26:
			return "CM_STOTRA";
			break;
		
		case 27:
			return "CM_STOWAD";
			break;
	}
	return "ERROR!";
}

void func_280(int iParam0, int iParam1)//Position - 0x273DE
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_17C49.f_1AD5[iParam0] = 1;
	Global_17C49.f_1AD5.f_EC[iParam0] = (MISC::GET_GAME_TIMER() + iParam1);
}

int func_281(char* sParam0)//Position - 0x2741B
{
	int iVar0;
	
	iVar0 = 1424;
	if (!SCRIPT::DOES_SCRIPT_EXIST(sParam0))
	{
		return 1;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "controller_Races"))
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("controller_races")) > 0)
		{
			return 1;
		}
		iVar0 = 128;
	}
	SCRIPT::REQUEST_SCRIPT(sParam0);
	if (SCRIPT::HAS_SCRIPT_LOADED(sParam0))
	{
		SYSTEM::START_NEW_SCRIPT(sParam0, iVar0);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(sParam0);
		return 1;
	}
	return 0;
}

int func_282()//Position - 0x2747B
{
	return func_283(SCRIPT::GET_THIS_SCRIPT_NAME(), 0);
}

int func_283(char* sParam0, int iParam1)//Position - 0x2748C
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	iVar2 = MISC::GET_HASH_KEY(uParam0);
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < 63)
	{
		iVar0 = iVar3;
		func_244(iVar0, &uVar1);
		if (MISC::GET_HASH_KEY(uVar1) == iVar2)
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

bool func_284(int iParam0, int iParam1)//Position - 0x274D5
{
	return (MISC::GET_GAME_TIMER() - iParam0) > iParam1;
}

void func_285()//Position - 0x274E7
{
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.3f);
	switch (iLocal_273)
	{
		case 0:
			if (!bLocal_275)
			{
				if (!func_45())
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				}
				iLocal_273 = 2;
			}
			else
			{
				PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
				func_42(&cLocal_542);
				VEHICLE::REQUEST_VEHICLE_RECORDING(1, sLocal_359);
				func_41();
				if (func_10(Local_535))
				{
					ENTITY::SET_ENTITY_PROOFS(Local_535, 0, 0, 0, 1, 0, 0, 0, 0);
				}
				if ((VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, sLocal_359) && !func_292(&Local_531)) && !func_292(&Local_532))
				{
					if (func_35(1, 1093140480, 0))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), sLocal_362, 0, 0, 0);
						if (func_10(Local_532))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_532, sLocal_361, 0, 0, 0);
						}
						if (func_10(Local_531))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_531, sLocal_360, 0, 0, 0);
						}
						if (func_10(Local_533))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_533, sLocal_363, 0, 0, 0);
						}
						if (func_10(Local_534))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_534, sLocal_364, 0, 0, 0);
						}
						if (func_10(Local_535))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_535, sLocal_365, 0, 0, 0);
							GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(ENTITY::GET_ENTITY_COORDS(Local_535, 0), 4f);
						}
						RECORDING::_0x48621C9FCA3EBD28(1);
						CUTSCENE::START_CUTSCENE(0);
						SYSTEM::WAIT(0);
						func_21(800, 0);
						MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(418.2838f, -571.6629f, 24.69794f, 362.0258f, -663.1398f, 38.33998f, 28f, 0, 0, 0, 1, 1);
						func_288(392.86f, -621.04f, 27.97f, 1, 1, 1, 0, 1, 1, 0, 1, 1, 1);
						func_287(1);
						VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
						PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.3f);
						iLocal_273 = 1;
					}
				}
				else
				{
					if (func_13(Local_534))
					{
						func_40(Local_534, 10.5f, 1, 0f, 0, 1);
					}
					func_5();
					PAD::DISABLE_CONTROL_ACTION(0, 21, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 257, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 23, 1);
				}
			}
			break;
		
		case 1:
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_362, 0))
			{
				RECORDING::_0x81CBAE94390F9F89();
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED() && CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				}
				bLocal_314 = true;
			}
			if ((func_20(Local_532) && func_20(Local_531)) && func_13(Local_534))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_361, 0))
				{
					if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_532, Local_534))
					{
						PED::SET_PED_INTO_VEHICLE(Local_532, Local_534, -1);
					}
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_532, 1);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_360, 0))
				{
					if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_531, Local_534))
					{
						PED::SET_PED_INTO_VEHICLE(Local_531, Local_534, 0);
					}
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_531, 1);
					PED::SET_PED_KEEP_TASK(Local_531, 1);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_364, 0))
				{
					VEHICLE::SET_VEHICLE_ENGINE_ON(Local_534, 1, 1);
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_534, 17f);
					VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_534, 1);
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_534))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(Local_534, 1, sLocal_359, 35f, 786468);
					}
				}
			}
			if (func_20(Local_533))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_363, 0))
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_533, 0);
					func_52(&Local_533, 1);
				}
			}
			if (!bLocal_314)
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			}
			if (!CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				iLocal_273 = 2;
			}
			else
			{
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.3f);
			}
			break;
		
		case 2:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				CUTSCENE::STOP_CUTSCENE(0);
			}
			else
			{
				if (CUTSCENE::HAS_CUTSCENE_LOADED())
				{
					CUTSCENE::REMOVE_CUTSCENE();
				}
				if (func_10(Local_533))
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_533, 0);
				}
				func_52(&Local_533, 1);
				if (func_13(Local_534))
				{
					if (func_20(Local_532))
					{
						if (!func_39(Local_532, -258271821))
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(Local_532, Local_534))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_532, 1);
							}
						}
					}
					if (func_20(Local_531))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_531, 1);
						PED::SET_PED_KEEP_TASK(Local_531, 1);
					}
				}
				if (func_10(Local_535))
				{
					ENTITY::SET_ENTITY_PROOFS(Local_535, 0, 0, 0, 0, 0, 0, 0, 0);
				}
				if (bLocal_275)
				{
					func_23(1, 1, 1, 1);
				}
				iLocal_334 = MISC::GET_GAME_TIMER();
				func_286(4);
			}
			break;
	}
}

void func_286(int iParam0)//Position - 0x27924
{
	iLocal_271 = iParam0;
	iLocal_273 = 0;
}

void func_287(bool bParam0)//Position - 0x27935
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	
	Var1 = { 341.2f, -645.83f, 25f };
	Var2 = { 429.1f, -572.89f, 35f };
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Var1, Var2, 0, 1);
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(418.2838f, -571.6629f, 24.69794f, 362.0258f, -663.1398f, 38.33998f, 28f, 0, 0, 1);
	if (bParam0)
	{
		VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(Var1, Var2);
		MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(418.2838f, -571.6629f, 24.69794f, 362.0258f, -663.1398f, 38.33998f, 28f, 0, 0, 0, 0, 0);
	}
	PATHFIND::SET_PED_PATHS_IN_AREA(Var1, Var2, 0, 0);
	PED::SET_PED_NON_CREATION_AREA(Var1, Var2);
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (iVar0 != 1)
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_357[iVar0], 0);
		}
		iVar0++;
	}
	uLocal_356 = PED::ADD_SCENARIO_BLOCKING_AREA(Var1, Var2, 0, 1, 1, 1);
	if (bParam0)
	{
		MISC::CLEAR_AREA_OF_OBJECTS(395.2476f, -615.0134f, 27.87107f, 20f, 0);
		MISC::CLEAR_AREA(395.2476f, -615.0134f, 27.87107f, 20f, 1, 0, 0, 0);
	}
}

void func_288(struct<3> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)//Position - 0x27A63
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_PLAYING(iVar0))
	{
		func_291(0);
		if (bParam7)
		{
			PLAYER::REMOVE_PLAYER_HELMET(PLAYER::GET_PLAYER_INDEX(), 1);
		}
		if (bParam6)
		{
			switch (func_290())
			{
				case 0:
					if (func_231(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						func_122(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					if (func_231(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						func_122(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 1:
					if (func_231(PLAYER::PLAYER_PED_ID(), 8, 1) || func_231(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						func_122(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 2:
					if (func_231(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						func_122(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				}
		}
		if (iParam4 == 1)
		{
			MISC::CLEAR_AREA_OF_PEDS(func_289(PLAYER::GET_PLAYER_INDEX()), 50f, 0);
		}
		if (iParam5 == 1)
		{
			MISC::CLEAR_AREA_OF_OBJECTS(Param0, 30f, 0);
		}
		if (bParam8)
		{
			FIRE::STOP_FIRE_IN_RANGE(Param0, 30f);
		}
		MISC::CLEAR_AREA_OF_PROJECTILES(Param0, 30f, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL(iVar0, 0, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(iVar0, 0);
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(iVar0, 1);
		if (bParam10)
		{
			HUD::DISPLAY_RADAR(0);
			HUD::DISPLAY_HUD(0);
		}
		HUD::CLEAR_PRINTS();
		if (iParam9 == 1)
		{
			HUD::CLEAR_HELP(1);
		}
		if (iParam1 == 1)
		{
			CAM::SET_WIDESCREEN_BORDERS(1, 0);
		}
		if (iParam2 == 1)
		{
			iLocal_45 = 0;
			if (func_10(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_45 = WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
			}
		}
		if (iParam3 == 1)
		{
			func_21(500, 0);
		}
	}
}

Vector3 func_289(var uParam0)//Position - 0x27C19
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(uParam0), 0);
}

int func_290()//Position - 0x27C2C
{
	func_237();
	return Global_17C49.f_6C1.f_21B.f_C8D;
}

void func_291(bool bParam0)//Position - 0x27C45
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (!PLAYER::IS_PLAYER_DEAD(iVar0))
	{
		if (bParam0)
		{
		}
		PLAYER::SET_PLAYER_CONTROL(iVar0, bParam0, 16);
		PLAYER::SET_PLAYER_CONTROL(iVar0, bParam0, 32);
	}
	func_24(1, 1, 0, 0);
}

int func_292(int iParam0)//Position - 0x27C81
{
	if (func_20(*iParam0))
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_293()//Position - 0x27CA2
{
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.3f);
	VEHICLE::REQUEST_VEHICLE_RECORDING(1, sLocal_359);
	func_362();
	func_361(1090519040);
	switch (iLocal_273)
	{
		case 0:
			func_358();
			iLocal_335 = MISC::GET_GAME_TIMER();
			if (func_20(Local_533))
			{
				if (iLocal_291)
				{
					func_337(&uLocal_19, Local_533, 0, 0, 1, 1, 1);
				}
			}
			iLocal_273 = 1;
			break;
		
		case 1:
			if (func_20(Local_533))
			{
				if (iLocal_291)
				{
					func_337(&uLocal_19, Local_533, 0, 0, 1, 1, 1);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_535))
				{
					fLocal_339 = SYSTEM::VDIST(Local_548, ENTITY::GET_ENTITY_COORDS(Local_535, 0));
				}
				if ((func_13(Local_534) && func_20(Local_532)) && func_20(Local_531))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_534))
					{
						if (func_336("NIGEL2_04", 0, 0))
						{
							HUD::CLEAR_THIS_PRINT("NIGEL2_04");
						}
						iLocal_293 = 0;
						func_91(&(Local_534.f_2));
						func_330(&iLocal_316);
						if (!HUD::DOES_BLIP_EXIST(Local_533.f_2))
						{
							Local_533.f_2 = func_329(Local_533, 1, 0, 5);
						}
						else
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(Local_533, 0))
							{
								HUD::SET_BLIP_SCALE(Local_533.f_2, 1f);
							}
							func_328(Local_533.f_2, Local_533, 200f, 0.7f, iLocal_316);
						}
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_534, 381.9156f, -628.1014f, 22.93229f, 394.4772f, -606.127f, 35.77483f, 18.5f, 0, 1, 0))
						{
							if (func_327(&Local_534))
							{
								if (func_284(iLocal_335, 500))
								{
									iLocal_273 = 2;
								}
							}
							else
							{
								iLocal_335 = MISC::GET_GAME_TIMER();
							}
						}
						else
						{
							iLocal_335 = MISC::GET_GAME_TIMER();
						}
					}
					else
					{
						func_91(&(Local_533.f_2));
						if (!HUD::DOES_BLIP_EXIST(Local_534.f_2))
						{
							Local_534.f_2 = func_326(Local_534, 1, 7);
						}
						if (!iLocal_293)
						{
							if (func_37())
							{
								func_324();
							}
							iLocal_293 = 1;
						}
						if (!iLocal_288)
						{
							func_323("NIGEL2_04", 7500, 1);
							iLocal_325 = MISC::GET_GAME_TIMER();
							iLocal_288 = 1;
						}
						else if (!func_37())
						{
							if (fLocal_341 < 20f)
							{
								if (MISC::GET_GAME_TIMER() - iLocal_325) > MISC::GET_RANDOM_INT_IN_RANGE(4500, 6500)
								{
									if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_534, 0))
									{
										if (MISC::GET_RANDOM_INT_IN_RANGE(0, 11) > 5)
										{
											if (func_313(&uLocal_366, "NIG2AUD", "NIG2_GIC", 8, 0, 0, 0))
											{
											}
										}
										else if (func_313(&uLocal_366, "NIG2AUD", "NIG2_GIC2", 8, 0, 0, 0))
										{
										}
									}
								}
							}
						}
						else
						{
							iLocal_325 = MISC::GET_GAME_TIMER();
						}
						func_312();
						iLocal_335 = MISC::GET_GAME_TIMER();
					}
				}
				func_311();
			}
			func_358();
			func_300();
			break;
		
		case 2:
			func_91(&(Local_534.f_2));
			func_91(&(Local_533.f_2));
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(1);
			func_298(&uLocal_19, 0, 0);
			if (func_37())
			{
				func_296();
			}
			if (!iLocal_291)
			{
				func_295(0);
				RECORDING::_0x81CBAE94390F9F89();
				iLocal_291 = 1;
			}
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_350))
			{
				GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_350, 0);
			}
			iLocal_541 = 2;
			func_51(&Local_348);
			STREAMING::REMOVE_PTFX_ASSET();
			if (!func_45() && bLocal_275)
			{
				func_33("NIGEL2_STOP", 0);
			}
			func_294(3);
			func_286(3);
			break;
	}
}

void func_294(int iParam0)//Position - 0x27FD4
{
	if (!func_45() && bLocal_275)
	{
		if (iParam0 == iLocal_329)
		{
			switch (iLocal_329)
			{
				case 0:
					if (func_33("NIGEL2_START", 0))
					{
						iLocal_329++;
					}
					break;
				
				case 1:
					if (func_33("NIGEL2_CAR", 0))
					{
						AUDIO::PREPARE_MUSIC_EVENT("NIGEL2_JUMP");
						iLocal_329++;
					}
					break;
				
				case 2:
					if (func_33("NIGEL2_JUMP", 1))
					{
						iLocal_329++;
					}
					break;
				
				case 3:
					if (func_33("NIGEL2_STOP", 0))
					{
						iLocal_329++;
					}
					break;
				
				default:
					break;
				}
			}
	}
}

void func_295(bool bParam0)//Position - 0x28084
{
	if (bParam0)
	{
		if (!CAM::DOES_CAM_EXIST(uLocal_319))
		{
			uLocal_319 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
		}
		if (CAM::DOES_CAM_EXIST(uLocal_319))
		{
			CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			CAM::SET_CAM_COORD(uLocal_319, Local_549);
			CAM::SET_CAM_FOV(uLocal_319, 14f);
			CAM::POINT_CAM_AT_ENTITY(uLocal_319, Local_534, Local_550, 1);
			AUDIO::ACTIVATE_AUDIO_SLOWMO_MODE("NIGEL_02_SLOWMO_SETTING");
		}
	}
	else
	{
		CAM::STOP_SCRIPT_GLOBAL_SHAKING(0);
		if (CAM::DOES_CAM_EXIST(uLocal_319))
		{
			if (CAM::IS_CAM_ACTIVE(uLocal_319))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
				CAM::SET_CAM_ACTIVE(uLocal_319, 0);
			}
			CAM::DESTROY_CAM(uLocal_319, 0);
		}
		CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
		MISC::SET_TIME_SCALE(1f);
		AUDIO::DEACTIVATE_AUDIO_SLOWMO_MODE("NIGEL_02_SLOWMO_SETTING");
		bLocal_292 = true;
	}
}

void func_296()//Position - 0x28146
{
	Global_38DE = 0;
	func_297();
}

void func_297()//Position - 0x28156
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

void func_298(var uParam0, int iParam1, int iParam2)//Position - 0x2817A
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
		if (func_299(uParam0->f_3))
		{
			HUD::CLEAR_HELP(1);
		}
	}
	if (!MISC::IS_STRING_NULL(sVar0))
	{
		if (func_299(sVar0))
		{
			HUD::CLEAR_HELP(1);
		}
	}
}

bool func_299(char* sParam0)//Position - 0x28257
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_300()//Position - 0x2826A
{
	if (!iLocal_313)
	{
		if (func_310(Local_548, 307.3065f, -589.9595f, 42.302f, 200f))
		{
			if (func_302())
			{
				func_301(794);
				iLocal_313 = 1;
			}
		}
	}
}

void func_301(int iParam0)//Position - 0x282AB
{
	bool bVar0;
	int iVar1;
	
	Global_D5DF = 0;
	if (!Global_D6BF[iParam0 /*13*/] == 3)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1051D)
	{
		if (Global_1051E[iVar1 /*9*/] == iParam0)
		{
			bVar0 = true;
			Global_1051E[iVar1 /*9*/].f_1 = 1;
			Global_1051E[iVar1 /*9*/].f_2 = 0f;
			if (Global_1051E[iVar1 /*9*/].f_3 == 2)
			{
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
	}
}

int func_302()//Position - 0x2831C
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	iVar0 = 0;
	if (func_309())
	{
		iVar2 = func_308();
		if (iVar2 != 0)
		{
			bVar3 = false;
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < iVar2)
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(func_307(iVar0));
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (func_306(ENTITY::GET_ENTITY_COORDS(iVar1, 0)))
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar1, PLAYER::PLAYER_PED_ID(), 1))
						{
							bVar3 = true;
						}
					}
				}
				iVar0++;
			}
			if (bVar3)
			{
				return 1;
			}
		}
	}
	if (func_305())
	{
		iVar4 = func_304();
		if (iVar4 != 0)
		{
			bVar5 = false;
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < iVar4)
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(func_303(iVar0));
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (func_306(ENTITY::GET_ENTITY_COORDS(iVar1, 0)))
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar1, PLAYER::PLAYER_PED_ID(), 1))
						{
							bVar5 = true;
						}
					}
				}
				iVar0++;
			}
			if (bVar5)
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_303(int iParam0)//Position - 0x283FA
{
	return Global_B79A.f_19[iParam0];
}

var func_304()//Position - 0x2840B
{
	return Global_B79A.f_18;
}

bool func_305()//Position - 0x28418
{
	return Global_B79A.f_18 > 0;
}

int func_306(struct<3> Param0)//Position - 0x28427
{
	int iVar0;
	
	if (!INTERIOR::IS_VALID_INTERIOR(iLocal_336))
	{
		return 0;
	}
	if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(Param0))
	{
		iVar0 = INTERIOR::GET_INTERIOR_FROM_COLLISION(Param0);
		if (iVar0 == iLocal_336)
		{
			return 1;
		}
	}
	return 0;
}

var func_307(int iParam0)//Position - 0x28461
{
	return Global_B79A.f_25[iParam0];
}

var func_308()//Position - 0x28472
{
	return Global_B79A.f_24;
}

bool func_309()//Position - 0x2847F
{
	return Global_B79A.f_24 > 0;
}

bool func_310(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0x2848E
{
	return SYSTEM::VDIST2(Param0, Param1) <= (fParam2 * fParam2);
}

void func_311()//Position - 0x284A8
{
	float fVar0;
	
	fVar0 = 100f;
	if (iLocal_311)
	{
		if (fLocal_339 > fVar0)
		{
			func_301(793);
			iLocal_311 = 0;
		}
	}
}

void func_312()//Position - 0x284D1
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

int func_313(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x2853D
{
	if (iParam4 == 0)
	{
		if (HUD::IS_MESSAGE_BEING_DISPLAYED())
		{
			if (MISC::GET_PROFILE_SETTING(203) != 0)
			{
				return 0;
			}
		}
	}
	if (func_314(uParam0, sParam1, sParam2, iParam3, iParam4, iParam5, iParam6))
	{
		return 1;
	}
	return 0;
}

bool func_314(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x2857A
{
	func_322(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_315(sParam2, iParam3, 0);
}

int func_315(char* sParam0, int iParam1, bool bParam2)//Position - 0x285C8
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
					func_19();
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
		if (func_321(8, -1))
		{
			return 0;
		}
		Global_3D98 = { Global_3D92 };
		func_320();
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
				func_319();
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
				if (func_318())
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
			if (func_7())
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
			func_317();
			Global_3D56 = bParam2;
		}
		Global_3D4E = iParam1;
		StringCopy(&Global_3BCF, sParam0, 24);
		Global_38DE = 0;
		func_316();
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
		func_19();
	}
	return 0;
}

void func_316()//Position - 0x28894
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

void func_317()//Position - 0x288C6
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

int func_318()//Position - 0x2895B
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

void func_319()//Position - 0x289F4
{
	if (func_173(14))
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
		Global_3839 = func_290();
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

void func_320()//Position - 0x28A95
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

bool func_321(int iParam0, int iParam1)//Position - 0x28AED
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

void func_322(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x28B28
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

void func_323(char* sParam0, int iParam1, int iParam2)//Position - 0x28B7E
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, 1);
}

void func_324()//Position - 0x28B97
{
	Global_38DE = 0;
	func_325();
}

void func_325()//Position - 0x28BA7
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_413F = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_3D4C = 6;
	}
}

int func_326(int iParam0, int iParam1, int iParam2)//Position - 0x28BC8
{
	int iVar0;
	
	iVar0 = 0;
	if (func_10(iParam0))
	{
		iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, iParam1);
		HUD::SET_BLIP_PRIORITY(iVar0, iParam2);
		HUD::SET_BLIP_SCALE(iVar0, 1f);
	}
	return iVar0;
}

int func_327(int iParam0)//Position - 0x28BFD
{
	struct<3> Var0;
	
	if (ENTITY::IS_ENTITY_IN_AIR(*iParam0))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_UPRIGHT(*iParam0, 5f))
	{
		return 0;
	}
	if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(*iParam0))
	{
		return 1;
	}
	Var0 = { ENTITY::GET_ENTITY_ROTATION_VELOCITY(*iParam0) };
	if (Var0.x > 0.2f || Var0.x < -0.2f)
	{
		return 0;
	}
	if (Var0.f_1 > 0.2f || Var0.f_1 < -0.2f)
	{
		return 0;
	}
	return 1;
}

void func_328(var uParam0, int iParam1, float fParam2, float fParam3, int iParam4)//Position - 0x28C7B
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

int func_329(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x28DD4
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	bVar1 = true;
	if (bVar1)
	{
		if (func_10(iParam0))
		{
			iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
			HUD::SET_BLIP_AS_FRIENDLY(iVar0, iParam2);
			HUD::SET_BLIP_PRIORITY(iVar0, iParam3);
			HUD::SET_BLIP_SCALE(iVar0, 0.7f);
			if (!bParam1)
			{
				HUD::SET_BLIP_SCALE(iVar0, 0.5f);
			}
		}
	}
	return iVar0;
}

void func_330(int iParam0)//Position - 0x28E26
{
	int iVar0;
	char cVar1[32];
	int iVar2;
	
	if (func_37())
	{
		iLocal_324 = MISC::GET_GAME_TIMER();
	}
	else
	{
		iLocal_307 = 0;
	}
	if (iLocal_308)
	{
		if (func_20(iLocal_349))
		{
			if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_349))
			{
				iLocal_349 = 0;
				iLocal_308 = 0;
			}
		}
		else
		{
			iLocal_349 = 0;
			iLocal_308 = 0;
		}
	}
	if (!ENTITY::IS_ENTITY_IN_AIR(Local_534))
	{
		iLocal_326 = MISC::GET_GAME_TIMER();
	}
	if (iLocal_271 == 1)
	{
		if (fLocal_339 < ((200f / 100f) * (0.7f * 100f)))
		{
			if (fLocal_340 > 3000f && fLocal_340 < 7500f)
			{
				if (!iLocal_281)
				{
					if (!func_37())
					{
						iVar2 = 0;
						if (HUD::IS_MESSAGE_BEING_DISPLAYED())
						{
							iVar2 = 1;
						}
						if (func_334(&uLocal_366, "NIG2AUD", "NIG2_INSTR", "NIG2_INSTR_13", 8, iVar2, 0))
						{
							iLocal_307 = 1;
							iLocal_281 = 1;
						}
					}
				}
			}
			if (fLocal_340 > 15500f && fLocal_340 < 16000f)
			{
				if (!iLocal_280[0])
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_534, -1237.778f, -763.4679f, 26.42266f, -1186.703f, -829.4772f, 10.58047f, 31f, 0, 1, 0))
					{
						if (!func_37())
						{
							if (func_334(&uLocal_366, "NIG2AUD", "NIG2_INSTR", "NIG2_INSTR_1", 8, 0, 0))
							{
								iLocal_307 = 1;
								iLocal_280[0] = 1;
							}
						}
					}
				}
			}
			if (fLocal_340 > 45500f && fLocal_340 < 47500f)
			{
				if (!iLocal_280[1])
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_534, -664.5371f, -580.7943f, 29.30828f, -590.7203f, -581.1932f, 23.30828f, 13.5f, 0, 1, 0))
					{
						if (func_37())
						{
							func_324();
						}
						if (func_313(&uLocal_366, "NIG2AUD", "NIG_SP1", 8, 0, 0, 0))
						{
							RECORDING::_0x293220DA1B46CEBC(3f, 3f, 0);
							iLocal_307 = 1;
							iLocal_280[1] = 1;
						}
					}
				}
			}
			if (fLocal_340 > 69000f && fLocal_340 < 71000f)
			{
				if (!iLocal_280[2])
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_534, -440.7857f, -828.3237f, 35.7356f, -511.8112f, -826.6559f, 27.66894f, 60f, 0, 1, 0))
					{
						if (func_37())
						{
							func_324();
						}
						if (func_313(&uLocal_366, "NIG2AUD", "NIG_SP2", 8, 0, 0, 0))
						{
							RECORDING::_0x293220DA1B46CEBC(3f, 3f, 0);
							iLocal_307 = 1;
							iLocal_280[2] = 1;
						}
					}
				}
			}
			if (fLocal_340 > 85000f && fLocal_340 < 89000f)
			{
				if (!iLocal_280[3])
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_534, -432.3278f, -540.988f, 44.07163f, -433.2483f, -485.5649f, 22.47039f, 60f, 0, 1, 0))
					{
						if (func_37())
						{
							func_324();
						}
						if (func_313(&uLocal_366, "NIG2AUD", "NIG_SP3", 8, 0, 0, 0))
						{
							iLocal_307 = 1;
							iLocal_280[3] = 1;
						}
					}
				}
			}
			if (fLocal_340 > 104000f && fLocal_340 < 110000f)
			{
				if (!iLocal_280[4])
				{
					if (func_37())
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_534, 81.94607f, -518.6024f, 38.07428f, -107.3686f, -519.7444f, 27.81536f, 60f, 0, 1, 0))
						{
							if (func_37())
							{
								func_18();
							}
							if (func_334(&uLocal_366, "NIG2AUD", "NIG2_INSTR", "NIG2_INSTR_12", 8, 0, 0))
							{
								iLocal_307 = 1;
								iLocal_280[4] = 1;
							}
						}
					}
				}
			}
			if (fLocal_340 > 113000f && fLocal_340 < 116000f)
			{
				if (!iLocal_280[5])
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_534, 254.9994f, -594.3826f, 49.60252f, 270.4643f, -527.226f, 39.68248f, 70f, 0, 1, 0))
					{
						if (func_37())
						{
							func_324();
						}
						if (func_313(&uLocal_366, "NIG2AUD", "NIG2_HOSP01", 8, 0, 0, 0))
						{
							RECORDING::_0x293220DA1B46CEBC(3f, 3f, 0);
							iLocal_307 = 1;
							iLocal_280[5] = 1;
						}
					}
				}
			}
			if (fLocal_340 > 118000f)
			{
				if (!iLocal_280[6])
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_534, 338.0111f, -581.9055f, 41.57753f, 350.9869f, -586.7529f, 46.07751f, 6.75f, 0, 1, 0))
					{
						if (func_37())
						{
							func_324();
						}
						if (func_313(&uLocal_366, "NIG2AUD", "NIG2_HWH", 8, 0, 0, 0))
						{
							iLocal_307 = 1;
							iLocal_280[6] = 1;
						}
					}
				}
				if (!iLocal_280[7])
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_534, 368.5714f, -594.9467f, 45.5422f, 389.5015f, -614.1279f, 27.11789f, 20.75f, 0, 1, 0))
					{
						if (!func_332("NIG2_HWH", 1))
						{
							if (func_37())
							{
								func_324();
							}
							if (func_313(&uLocal_366, "NIG2AUD", "NIG2_HWS", 8, 0, 0, 0))
							{
								iLocal_307 = 1;
								iLocal_280[7] = 1;
							}
						}
					}
				}
			}
		}
	}
	if (!iLocal_308)
	{
		if (!iLocal_287)
		{
			if (((VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(Local_534) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_534, 0, 1000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_534, 1, 1000)) || func_284(iLocal_330, 500))
			{
				StringCopy(&cVar1, "NIG2_FLIP_", 32);
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(1, 3);
				StringIntConCat(&cVar1, iVar0, 32);
				if (iVar0 == 1)
				{
					AUDIO::INTERRUPT_CONVERSATION(Local_532, "NIG2_CCAA", "NIGEL");
					iLocal_287 = 1;
					iLocal_349 = Local_532;
					iLocal_308 = 1;
					return;
				}
				else
				{
					AUDIO::INTERRUPT_CONVERSATION(Local_531, "NIG2_CCAB", "MRSTHORNHILL");
					iLocal_287 = 1;
					iLocal_349 = Local_531;
					iLocal_308 = 1;
					return;
				}
			}
			else if (ENTITY::IS_ENTITY_IN_AIR(Local_534))
			{
				if (func_284(iLocal_326, 500))
				{
					if (!func_332("NIG2_HWH", 1) && !func_332("NIG2_HWS", 1))
					{
						if (MISC::GET_RANDOM_INT_IN_RANGE(0, 11) > 5)
						{
							StringCopy(&cVar1, "NIG2_CDAA", 32);
							AUDIO::INTERRUPT_CONVERSATION(Local_532, &cVar1, "NIGEL");
							iLocal_349 = Local_532;
						}
						else
						{
							StringCopy(&cVar1, "NIG2_CDAB", 32);
							AUDIO::INTERRUPT_CONVERSATION(Local_531, &cVar1, "MRSTHORNHILL");
							iLocal_349 = Local_531;
						}
						iLocal_326 = MISC::GET_GAME_TIMER();
						iLocal_308 = 1;
						iLocal_287 = 1;
						return;
					}
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_IN_AIR(Local_534))
		{
			if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(Local_534) || ((!VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(Local_534) && !VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_534, 0, 1000)) && !VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_534, 1, 1000)))
			{
				iLocal_287 = 0;
			}
		}
		if (!iLocal_307)
		{
			if (PLAYER::GET_TIME_SINCE_PLAYER_HIT_PED(PLAYER::PLAYER_ID()) >= 0 && PLAYER::GET_TIME_SINCE_PLAYER_HIT_PED(PLAYER::PLAYER_ID()) < 500)
			{
				if (MISC::GET_RANDOM_INT_IN_RANGE(0, 11) > 5)
				{
					StringCopy(&cVar1, "NIG2_CQAA", 32);
					AUDIO::INTERRUPT_CONVERSATION(Local_532, &cVar1, "NIGEL");
					iLocal_349 = Local_532;
				}
				else
				{
					StringCopy(&cVar1, "NIG2_CPAA", 32);
					AUDIO::INTERRUPT_CONVERSATION(Local_531, &cVar1, "MRSTHORNHILL");
					iLocal_349 = Local_531;
				}
				iLocal_308 = 1;
				return;
			}
			if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(Local_534))
			{
				if (MISC::GET_RANDOM_INT_IN_RANGE(0, 11) > 5)
				{
					StringCopy(&cVar1, "NIG2_COAA", 32);
					AUDIO::INTERRUPT_CONVERSATION(Local_532, &cVar1, "NIGEL");
					iLocal_349 = Local_532;
				}
				else
				{
					StringCopy(&cVar1, "NIG2_CNAA", 32);
					AUDIO::INTERRUPT_CONVERSATION(Local_531, &cVar1, "MRSTHORNHILL");
					iLocal_349 = Local_531;
				}
				iLocal_308 = 1;
				return;
			}
		}
	}
	if (!iLocal_307 && !iLocal_308)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_535))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_535, PLAYER::PLAYER_PED_ID(), 1) && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				if (!func_332("NIG2_SHOOTS", 1) && !func_332("NIG2_SHOOTSN", 1))
				{
					if (func_37())
					{
						func_324();
					}
					if (MISC::GET_RANDOM_INT_IN_RANGE(0, 11) > 5)
					{
						if (func_313(&uLocal_366, "NIG2AUD", "NIG2_SHOOTS", 8, 0, 0, 0))
						{
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_535);
							iLocal_308 = 1;
							return;
						}
					}
					else if (func_313(&uLocal_366, "NIG2AUD", "NIG2_SHOOTSN", 8, 0, 0, 0))
					{
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_535);
						iLocal_308 = 1;
						return;
					}
				}
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_535);
			}
			if (!iLocal_283)
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_535, PLAYER::PLAYER_PED_ID(), 1))
				{
					if (func_37())
					{
						func_324();
					}
					if (func_313(&uLocal_366, "NIG2AUD", "NIG2_CHASE01", 8, 0, 0, 0))
					{
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_535);
						iLocal_307 = 1;
						iLocal_283 = 1;
						return;
					}
				}
			}
		}
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
			if (!iLocal_284)
			{
				if (func_37())
				{
					func_296();
				}
				if (func_313(&uLocal_366, "NIG2AUD", "NIG2_WANTED", 8, 0, 0, 0))
				{
					iLocal_284 = 1;
					iLocal_307 = 1;
				}
			}
			else if (!iLocal_285)
			{
				if (!func_332("NIG2_WANTED", 1))
				{
					if (func_37())
					{
						func_324();
					}
					if (func_313(&uLocal_366, "NIG2AUD", "NIG2_POLICE", 8, 0, 0, 0))
					{
						iLocal_285 = 1;
						iLocal_307 = 1;
					}
				}
			}
		}
		if (iLocal_271 == 1)
		{
			if (fLocal_339 < ((200f / 100f) * (0.7f * 100f)))
			{
				if (!iLocal_307 && !func_37())
				{
					if (func_284(iLocal_324, 500))
					{
						if (fLocal_340 < 116000f)
						{
							if (!iLocal_286)
							{
								if (fLocal_340 > 20000f)
								{
									if (func_331())
									{
										if (func_313(&uLocal_366, "NIG2AUD", "NIG2_LEFT", 8, 0, 0, 0))
										{
											iLocal_286 = 1;
										}
									}
								}
							}
							if (!iLocal_277[0])
							{
								if (func_313(&uLocal_366, "NIG2AUD", "NIG2_CHASE02", 8, 0, 0, 0))
								{
									iLocal_277[0] = 1;
								}
							}
							if (!iLocal_277[1])
							{
								if (iLocal_280[0] || fLocal_340 > 16500f)
								{
									if (func_313(&uLocal_366, "NIG2AUD", "NIG2_CHASE05", 8, 0, 0, 0))
									{
										iLocal_277[1] = 1;
									}
								}
							}
							else if (!iLocal_277[2])
							{
								if (func_313(&uLocal_366, "NIG2AUD", "NIG2_CHASE08", 8, 0, 0, 0))
								{
									iLocal_277[2] = 1;
								}
							}
							else if (!iLocal_277[3])
							{
								if (iLocal_280[1] || fLocal_340 > 52500f)
								{
									if (func_313(&uLocal_366, "NIG2AUD", "NIG2_CHASE06", 8, 0, 0, 0))
									{
										iLocal_277[3] = 1;
									}
								}
							}
							else if (!iLocal_277[4])
							{
								if (iLocal_280[2] || fLocal_340 > 71500f)
								{
									if (func_313(&uLocal_366, "NIG2AUD", "NIG2_CHASE03", 8, 0, 0, 0))
									{
										iLocal_277[4] = 1;
									}
								}
							}
							else if (!iLocal_277[5])
							{
								if (iLocal_280[3] || fLocal_340 > 89500f)
								{
									if (func_313(&uLocal_366, "NIG2AUD", "NIG2_CHASE04", 8, 0, 0, 0))
									{
										iLocal_277[5] = 1;
									}
								}
							}
							else if (!iLocal_277[6])
							{
								if (!iLocal_280[5])
								{
									if (iLocal_280[4] || fLocal_340 > 106500f)
									{
										if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_534, 81.94607f, -518.6024f, 38.07428f, -107.3686f, -519.7444f, 27.81536f, 60f, 0, 1, 0))
										{
											if (func_313(&uLocal_366, "NIG2AUD", "NIG2_CHASE07", 8, 0, 0, 0))
											{
												iLocal_277[6] = 1;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	if (fLocal_339 > ((200f / 100f) * (0.7f * 100f)))
	{
		if (!iLocal_307)
		{
			if (!iLocal_278[2])
			{
				if (func_37())
				{
					func_296();
				}
				else if (!iLocal_278[0])
				{
					if (func_313(&uLocal_366, "NIG2AUD", "NIG2_CU01", 8, 0, 0, 0))
					{
						iLocal_307 = 1;
						iLocal_278[0] = 1;
					}
				}
				else if (!iLocal_278[1])
				{
					if (func_313(&uLocal_366, "NIG2AUD", "NIG2_CU02", 8, 0, 0, 0))
					{
						iLocal_307 = 1;
						iLocal_278[1] = 1;
					}
				}
				else if (!iLocal_278[2])
				{
					if (func_313(&uLocal_366, "NIG2AUD", "NIG2_CU03", 8, 0, 0, 0))
					{
						iLocal_307 = 1;
						iLocal_278[2] = 1;
					}
				}
			}
		}
	}
	else if (fLocal_340 > 40000f)
	{
		if (fLocal_340 < 58000f)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -731.6891f, -657.8242f, 26.26911f, -448.3936f, -657.125f, 40.71734f, 40f, 0, 1, 0))
			{
				if (!iLocal_279)
				{
					if (!iLocal_278[1])
					{
						if (func_37())
						{
							func_324();
						}
						if (func_313(&uLocal_366, "NIG2AUD", "NIG2_CU02", 8, 0, 0, 0))
						{
							iLocal_307 = 1;
							iLocal_278[1] = 1;
							iLocal_279 = 1;
						}
					}
					else
					{
						if (func_37())
						{
							func_324();
						}
						if (func_313(&uLocal_366, "NIG2AUD", "NIG2_CU03", 8, 0, 0, 0))
						{
							iLocal_307 = 1;
							iLocal_278[2] = 1;
							iLocal_279 = 1;
						}
					}
				}
				*iParam0 = 1;
			}
		}
	}
}

int func_331()//Position - 0x29AC2
{
	if (PLAYER::_0xF10B44FD479D69F3(PLAYER::PLAYER_ID(), 2))
	{
		return 1;
	}
	return 0;
}

int func_332(char* sParam0, bool bParam1)//Position - 0x29ADB
{
	struct<6> Var0;
	
	if (func_37())
	{
		Var0 = { func_333() };
		if (MISC::ARE_STRINGS_EQUAL(&Var0, sParam0))
		{
			return 1;
		}
		if (bParam1)
		{
			if (MISC::ARE_STRINGS_EQUAL(&Var0, "NULL"))
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<6> func_333()//Position - 0x29B16
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_3D4C == 4)
	{
		return Global_3BCF;
	}
	return Var0;
}

int func_334(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x29B3A
{
	if (iParam5 == 0)
	{
		if (HUD::IS_MESSAGE_BEING_DISPLAYED())
		{
			if (MISC::GET_PROFILE_SETTING(203) != 0)
			{
				return 0;
			}
		}
	}
	if (func_335(uParam0, sParam1, sParam2, sParam3, iParam4, iParam5, iParam6))
	{
		return 1;
	}
	return 0;
}

bool func_335(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x29B77
{
	func_322(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_315(sParam2, iParam4, 0);
}

bool func_336(char* sParam0, int iParam1, int iParam2)//Position - 0x29BCB
{
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(sParam0);
	if (iParam1 == 1)
	{
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam2);
	}
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

void func_337(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x29BE9
{
	func_338(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_338(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)//Position - 0x29C03
{
	func_339(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_339(var uParam0, int iParam1, struct<3> Param2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0x29C20
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
	{
		func_298(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_340(uParam0, iParam1, Param2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_340(var uParam0, int iParam1, struct<3> Param2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0x29C58
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
	if (func_299(iVar0))
	{
		func_357();
	}
	if (func_356(iParam1) && ENTITY::IS_ENTITY_VISIBLE(iParam1))
	{
		iVar1 = 0;
		if (ENTITY::IS_ENTITY_A_PED(iParam1))
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
			if (func_351(uParam0, bParam5, bParam7, 0))
			{
				func_348(uParam0, iParam1, Param2, iParam4);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_345(iVar0))
				{
					if ((MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0)) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if ((iVar1 && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam6)
						{
							if (!func_299(iVar0))
							{
								func_344(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
								{
									func_343(1);
								}
							}
						}
					}
				}
			}
			else if (func_345(iVar0))
			{
				if (MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0))
				{
					if (((ENTITY::IS_ENTITY_ON_SCREEN(iParam1) && iVar1) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam6)
					{
						if (!func_299(iVar0))
						{
							func_344(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
							{
								func_343(1);
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
				if (func_299(sParam3))
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
						func_298(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 4)
					{
						func_298(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 4)
					{
						func_298(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 4)
					{
						func_298(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 4)
					{
						func_298(uParam0, iVar0, 1);
					}
				}
				else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
				{
					func_298(uParam0, iVar0, 1);
				}
			}
			if (!func_351(uParam0, bParam5, bParam7, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_342(uParam0))
				{
					func_341(uParam0);
				}
			}
		}
	}
	else
	{
		func_298(uParam0, iVar0, 0);
	}
}

void func_341(var uParam0)//Position - 0x29FC5
{
	if (func_356(PLAYER::PLAYER_PED_ID()))
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

int func_342(var uParam0)//Position - 0x2A02E
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

int func_343(bool bParam0)//Position - 0x2A059
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

void func_344(char* sParam0, int iParam1)//Position - 0x2A103
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

int func_345(char* sParam0)//Position - 0x2A11A
{
	if (!func_346(1, 1, 0))
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(sParam0) && func_299(sParam0)) || func_299("CMN_HINT"))
		{
			HUD::CLEAR_HELP(1);
		}
		return 0;
	}
	switch (Global_8861)
	{
		case 0:
		case 3:
			if (func_343(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_343(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_343(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_346(bool bParam0, bool bParam1, bool bParam2)//Position - 0x2A1B3
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
	if (func_9(0))
	{
		return 0;
	}
	if (func_347())
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

bool func_347()//Position - 0x2A32F
{
	return MISC::GET_GAME_TIMER() <= Global_4354.f_140A + 100;
}

void func_348(var uParam0, int iParam1, struct<3> Param2, int iParam3)//Position - 0x2A344
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		func_298(uParam0, 0, 0);
	}
	if (func_58(Param2, 0f, 0f, 0f))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam1))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
			if (!PED::IS_PED_IN_ANY_VEHICLE(iVar0, 0))
			{
				if (PED::IS_PED_A_PLAYER(iVar0))
				{
					if (!func_349())
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

bool func_349()//Position - 0x2A447
{
	return func_350(PLAYER::PLAYER_ID());
}

int func_350(int iParam0)//Position - 0x2A457
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_351(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x2A476
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
					if (func_355(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_354(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_354(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_355(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_342(uParam0))
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
						if (!func_355(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = MISC::GET_GAME_TIMER();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_354(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_354(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_355(bParam1, bParam2, bParam3))
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
					if (!func_355(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_354(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_354(bParam1, bParam2, bParam3) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
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
				else if (!func_355(bParam1, bParam2, bParam3))
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
						if (func_353(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_352(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || func_352(bParam1, bParam2, bParam3))
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
					else if (func_353(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_342(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_346(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_357();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_352(bool bParam0, bool bParam1, bool bParam2)//Position - 0x2A7E2
{
	if (!func_346(bParam0, bParam1, bParam2))
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

int func_353(bool bParam0, bool bParam1, bool bParam2)//Position - 0x2A834
{
	if (!func_346(bParam0, bParam1, bParam2))
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

int func_354(bool bParam0, bool bParam1, bool bParam2)//Position - 0x2A87D
{
	if (!func_346(bParam0, bParam1, bParam2))
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

int func_355(bool bParam0, bool bParam1, bool bParam2)//Position - 0x2A8DC
{
	if (!func_346(bParam0, bParam1, bParam2))
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

int func_356(int iParam0)//Position - 0x2A932
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
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

void func_357()//Position - 0x2A98D
{
	MISC::SET_BIT(&Global_8D8, 4);
}

void func_358()//Position - 0x2A99D
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (!bLocal_292)
	{
		if (func_13(Local_534))
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_534))
			{
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_534, 373.2886f, -580.871f, 37.23948f, 359.6602f, -605.2207f, 29.13826f, 20f, 0, 1, 0) && (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_534, Local_546, Local_547, fLocal_338, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_534, 370.7054f, -596.1437f, 45.43948f, 361.3834f, -600.7f, 33.23949f, 6f, 0, 1, 0)))
				{
					func_294(2);
					if (iLocal_291)
					{
						func_295(1);
						func_298(&uLocal_19, 0, 0);
						iLocal_291 = 0;
						iLocal_318 = 1;
						fLocal_343 = 1f;
						RECORDING::_0x48621C9FCA3EBD28(0);
					}
					if (iLocal_312)
					{
						func_360(0, 795);
						iLocal_312 = 0;
					}
					Var0 = { ENTITY::GET_ENTITY_COORDS(Local_534, 1) };
					fVar1 = 0.2f;
					fVar2 = 0.9f;
					fVar3 = 2f;
					if (Var0.f_2 > 35.25f)
					{
						if (fLocal_343 > fVar1)
						{
							fLocal_343 = (fLocal_343 - (fVar2 * SYSTEM::TIMESTEP()));
							if (fLocal_343 < fVar1)
							{
								fLocal_343 = fVar1;
							}
							MISC::SET_TIME_SCALE(fLocal_343);
						}
					}
					else if (Var0.f_2 < 35f)
					{
						if (fLocal_343 < 1f)
						{
							fLocal_343 = (fLocal_343 + (fVar3 * SYSTEM::TIMESTEP()));
							if (fLocal_343 > 1f)
							{
								fLocal_343 = 1f;
							}
							MISC::SET_TIME_SCALE(fLocal_343);
						}
					}
					if (Var0.f_2 < 40f)
					{
						if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(Local_534))
						{
							if (!iLocal_291)
							{
								func_295(0);
								RECORDING::_0x81CBAE94390F9F89();
								iLocal_291 = 1;
							}
						}
					}
				}
				else if (!iLocal_291)
				{
					func_295(0);
					RECORDING::_0x81CBAE94390F9F89();
					iLocal_291 = 1;
				}
			}
			else if (!iLocal_291)
			{
				func_295(0);
				RECORDING::_0x81CBAE94390F9F89();
				iLocal_318 = 0;
				iLocal_291 = 1;
			}
		}
		else if (!iLocal_291)
		{
			func_295(0);
			RECORDING::_0x81CBAE94390F9F89();
			iLocal_318 = 0;
			iLocal_291 = 1;
		}
	}
	func_359();
}

void func_359()//Position - 0x2AB86
{
	struct<3> Var0;
	
	if (iLocal_318)
	{
		if (func_13(Local_534))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(Local_534, 0) };
			if (Var0.f_2 < 35f)
			{
				if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(Local_534) || VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(Local_534))
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "CAR_DROP_WRAP", Local_534, 0, 0, 0);
					iLocal_318 = 0;
				}
			}
		}
	}
}

void func_360(int iParam0, int iParam1)//Position - 0x2ABE1
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

void func_361(int iParam0)//Position - 0x2AC4C
{
	if (func_20(Local_533))
	{
		if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_533, "rcmnigel2", "die_horn", 3))
		{
			STREAMING::REQUEST_ANIM_DICT("rcmnigel2");
			if (STREAMING::HAS_ANIM_DICT_LOADED("rcmnigel2"))
			{
				TASK::TASK_PLAY_ANIM(Local_533, "rcmnigel2", "die_horn", iParam0, -8f, -1, 2, 0.9f, 0, 0, 0);
			}
		}
	}
}

void func_362()//Position - 0x2ACA1
{
	struct<3> Var0;
	
	Var0 = { 392.9445f, -619.5032f, 27.9764f };
	if (func_310(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var0, 100f))
	{
		if (!func_363())
		{
			CUTSCENE::REQUEST_CUTSCENE(&cLocal_542, 8);
			func_41();
			iLocal_315 = 1;
		}
	}
	else if (iLocal_315)
	{
		if (!func_310(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var0, 120f))
		{
			if (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				CUTSCENE::REMOVE_CUTSCENE();
				iLocal_315 = 0;
			}
		}
		else
		{
			func_41();
		}
	}
	if (iLocal_315)
	{
		if (func_363())
		{
			CUTSCENE::REMOVE_CUTSCENE();
			iLocal_315 = 0;
		}
	}
}

bool func_363()//Position - 0x2AD3C
{
	return Global_1567C;
}

void func_364()//Position - 0x2AD48
{
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.3f);
	switch (iLocal_273)
	{
		case 0:
			if (func_20(Local_533) && func_13(Local_535))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_533, 1);
				PED::SET_PED_RESET_FLAG(Local_533, 237, 1);
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_535, "NIGEL_02_CHASE_CAR_MG", 0);
			}
			if (func_20(Local_531))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_531, 1);
			}
			if (func_20(Local_532))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_532, 1);
			}
			if (func_13(Local_534))
			{
				if (!iLocal_312)
				{
					func_360(Local_534, 795);
					iLocal_312 = 1;
				}
				VEHICLE::SET_FORCE_HD_VEHICLE(Local_534, 1);
				iLocal_317 = 1;
			}
			RECORDING::_0x293220DA1B46CEBC(0f, 15f, 1);
			func_415(fLocal_342, Local_548);
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 170, 1);
			PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
			iLocal_273 = 1;
			break;
		
		case 1:
			func_294(0);
			func_414();
			iLocal_316 = 0;
			if (ENTITY::DOES_ENTITY_EXIST(Local_535))
			{
				fLocal_339 = SYSTEM::VDIST(Local_548, ENTITY::GET_ENTITY_COORDS(Local_535, 0));
			}
			if (func_20(Local_533))
			{
				if (func_13(Local_535))
				{
					if (!bLocal_297)
					{
						PED::SET_PED_RESET_FLAG(Local_533, 237, 1);
						if (PED::IS_PED_SITTING_IN_VEHICLE(Local_533, Local_535) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_535, -1) == Local_533)
						{
							if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_535))
							{
								ENTITY::FREEZE_ENTITY_POSITION(Local_535, 0);
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_535, iLocal_332, sLocal_358, 1);
								VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_535, 1);
								fLocal_340 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_535);
								fLocal_342 = 0.85f;
								VEHICLE::SET_PLAYBACK_SPEED(Local_535, fLocal_342);
								func_413();
								func_391(Local_535, fLocal_342);
								func_387();
								if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("NIGEL_02_CHASE"))
								{
									if (!func_45() && bLocal_275)
									{
										AUDIO::START_AUDIO_SCENE("NIGEL_02_CHASE");
									}
								}
								bLocal_297 = true;
							}
						}
					}
					else if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_535))
					{
						fLocal_340 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_535);
						func_378(&fLocal_342, fLocal_340);
						VEHICLE::SET_PLAYBACK_SPEED(Local_535, fLocal_342);
						func_413();
						func_391(Local_535, fLocal_342);
						func_387();
						func_377();
						func_376();
						func_12(0, 1);
						if (fLocal_340 > 82000f && fLocal_340 < 105000f)
						{
							func_375();
						}
						if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Local_535) < 800f)
						{
							VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_535, 800f);
						}
					}
					else if (!bLocal_299)
					{
						func_64(0, 1);
						func_374();
						VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_332, sLocal_358);
						AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_535, 0);
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("NIGEL_02_CHASE"))
						{
							AUDIO::STOP_AUDIO_SCENE("NIGEL_02_CHASE");
						}
						func_287(0);
						func_373();
						if (fLocal_340 < 124136f)
						{
							fLocal_340 = (124136f + 1000f);
						}
						func_376();
						bLocal_299 = true;
					}
					else
					{
						func_361(1090519040);
					}
				}
				if (iLocal_291)
				{
					func_337(&uLocal_19, Local_533, 0, 0, 1, 1, 1);
				}
				func_372();
				func_371();
				func_370(fLocal_340);
				func_367(Local_548);
				func_366();
				func_311();
				func_415(fLocal_342, Local_548);
				if ((func_13(Local_534) && func_20(Local_532)) && func_20(Local_531))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_534))
					{
						if (func_336("NIGEL2_03", 0, 0))
						{
							HUD::CLEAR_THIS_PRINT("NIGEL2_03");
						}
						if (func_336("NIGEL2_04", 0, 0))
						{
							HUD::CLEAR_THIS_PRINT("NIGEL2_04");
						}
						func_91(&(Local_534.f_2));
						if (iLocal_317)
						{
							VEHICLE::SET_FORCE_HD_VEHICLE(Local_534, 0);
							iLocal_317 = 0;
						}
						if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_532, Local_534) || !PED::IS_PED_SITTING_IN_VEHICLE(Local_531, Local_534))
						{
							func_91(&(Local_533.f_2));
							if (func_336("NIGEL2_04", 0, 0))
							{
								HUD::CLEAR_THIS_PRINT("NIGEL2_04");
							}
						}
						else
						{
							if (!iLocal_298)
							{
								if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_534, -1) == PLAYER::PLAYER_PED_ID())
								{
									VEHICLE::SET_VEHICLE_ENGINE_ON(Local_534, 1, 0);
									iLocal_298 = 1;
								}
							}
							func_294(1);
							if (!bLocal_294)
							{
								func_323("NIGEL2_01", 7500, 1);
								bLocal_294 = true;
							}
							iLocal_293 = 0;
							if (func_336("NIGEL2_05", 0, 0))
							{
								HUD::CLEAR_THIS_PRINT("NIGEL2_05");
							}
							if (func_336("NIGEL2_08", 0, 0))
							{
								HUD::CLEAR_THIS_PRINT("NIGEL2_08");
							}
							if (func_336("NIGEL2_09", 0, 0))
							{
								HUD::CLEAR_THIS_PRINT("NIGEL2_09");
							}
							func_330(&iLocal_316);
							if (!HUD::DOES_BLIP_EXIST(Local_533.f_2))
							{
								Local_533.f_2 = func_329(Local_533, 1, 0, 5);
							}
							else
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(Local_533, 0))
								{
									HUD::SET_BLIP_SCALE(Local_533.f_2, 1f);
								}
								func_328(Local_533.f_2, Local_533, 200f, 0.7f, iLocal_316);
							}
							if (bLocal_297)
							{
								if (bLocal_299)
								{
									if (fLocal_339 < 25f)
									{
										iLocal_273 = 2;
									}
								}
							}
						}
						func_365();
					}
					else
					{
						if (iLocal_317)
						{
							VEHICLE::SET_FORCE_HD_VEHICLE(Local_534, 1);
							iLocal_317 = 1;
						}
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 170, 0);
						func_91(&(Local_533.f_2));
						if (!HUD::DOES_BLIP_EXIST(Local_534.f_2))
						{
							Local_534.f_2 = func_326(Local_534, 1, 7);
						}
						if (!bLocal_294)
						{
							if (!iLocal_282[0])
							{
								if (func_37())
								{
									func_324();
								}
								if (func_313(&uLocal_366, "NIG2AUD", "NIG2_DAWDM", 7, 0, 0, 0))
								{
									iLocal_282[0] = 1;
								}
							}
							else if (!iLocal_289)
							{
								if (!func_37())
								{
									func_323("NIGEL2_03", 7500, 1);
									iLocal_289 = 1;
								}
							}
							else if (!iLocal_282[1])
							{
								if ((!func_37() && PED::IS_PED_SITTING_IN_VEHICLE(Local_532, Local_534)) && PED::IS_PED_SITTING_IN_VEHICLE(Local_531, Local_534))
								{
									if (func_313(&uLocal_366, "NIG2AUD", "NIG2_SPOTSP", 8, 0, 0, 0))
									{
										iLocal_282[1] = 1;
									}
								}
							}
						}
						else
						{
							if (!iLocal_293)
							{
								if (func_37())
								{
									func_324();
								}
								iLocal_293 = 1;
							}
							if (!iLocal_288)
							{
								func_323("NIGEL2_04", 7500, 1);
								iLocal_325 = MISC::GET_GAME_TIMER();
								iLocal_288 = 1;
							}
							else if (!func_37())
							{
								if (fLocal_341 < 20f)
								{
									if (MISC::GET_GAME_TIMER() - iLocal_325) > MISC::GET_RANDOM_INT_IN_RANGE(4500, 6500)
									{
										if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_534, 0))
										{
											if (MISC::GET_RANDOM_INT_IN_RANGE(0, 11) > 5)
											{
												if (func_313(&uLocal_366, "NIG2AUD", "NIG2_GIC", 8, 0, 0, 0))
												{
												}
											}
											else if (func_313(&uLocal_366, "NIG2AUD", "NIG2_GIC2", 8, 0, 0, 0))
											{
											}
										}
									}
								}
							}
							else
							{
								iLocal_325 = MISC::GET_GAME_TIMER();
							}
						}
						func_312();
					}
				}
			}
			func_358();
			func_300();
			break;
		
		case 2:
			if (!bLocal_299)
			{
				func_64(0, 1);
				func_374();
				if (func_10(Local_535))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_535))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_535);
					}
					ENTITY::FREEZE_ENTITY_POSITION(Local_535, 1);
				}
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_332, sLocal_358);
				func_287(0);
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("NIGEL_02_CHASE"))
				{
					AUDIO::STOP_AUDIO_SCENE("NIGEL_02_CHASE");
				}
				if (fLocal_340 < 124136f)
				{
					fLocal_340 = (124136f + 1000f);
				}
				func_376();
				func_373();
				bLocal_299 = true;
			}
			if (func_10(Local_533))
			{
				if (iLocal_291)
				{
					func_337(&uLocal_19, Local_533, 0, 0, 1, 1, 1);
				}
			}
			func_358();
			if (iLocal_312)
			{
				func_360(0, 795);
				iLocal_312 = 0;
			}
			MISC::SET_INSTANCE_PRIORITY_HINT(0);
			if (bLocal_304)
			{
				if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_351))
				{
					GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_351, 0);
				}
			}
			AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
			func_286(2);
			break;
	}
}

void func_365()//Position - 0x2B486
{
	float fVar0;
	
	if (!bLocal_304)
	{
		fVar0 = 115225f;
		if (fLocal_340 > fVar0)
		{
			STREAMING::REQUEST_PTFX_ASSET();
			if (STREAMING::HAS_PTFX_ASSET_LOADED())
			{
				if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_351))
				{
					if (ENTITY::GET_ENTITY_SPEED(Local_534) > 8f)
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_534, 368.911f, -599.1725f, 41.23884f, 366.0153f, -596.1f, 44.98576f, 6.5f, 0, 1, 0))
						{
							uLocal_351 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_rcn2_debris_trail", Local_534, 0f, -1.5f, -0.4f, 0f, 0f, 0f, 0.3f, 0, 0, 0);
							bLocal_304 = true;
						}
					}
				}
			}
		}
	}
	else if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_351))
	{
		if (ENTITY::GET_ENTITY_SPEED(Local_534) < 4f || !ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_534, 368.911f, -599.1725f, 41.23884f, 366.0153f, -596.1f, 44.98576f, 6.5f, 0, 1, 0))
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_351, 0);
			bLocal_304 = false;
		}
	}
}

void func_366()//Position - 0x2B57C
{
	float fVar0;
	
	fVar0 = 115225f;
	if (!iLocal_309)
	{
		if (!iLocal_306)
		{
			if (fLocal_340 > (fVar0 - 5000f))
			{
				STREAMING::REQUEST_PTFX_ASSET();
				iLocal_306 = 1;
			}
		}
		else
		{
			if (fLocal_340 > fVar0)
			{
				if (STREAMING::HAS_PTFX_ASSET_LOADED())
				{
					if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_350))
					{
						uLocal_350 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_rcn2_ceiling_debris", 325f, -589f, 45f, 0f, 0f, 0f, 1065353216, 0, 0, 0, 0);
						iLocal_309 = 1;
					}
				}
			}
			if (!STREAMING::HAS_PTFX_ASSET_LOADED())
			{
				STREAMING::REQUEST_PTFX_ASSET();
			}
		}
	}
}

void func_367(struct<3> Param0)//Position - 0x2B604
{
	bool bVar0;
	int iVar1;
	struct<3> Var2;
	float fVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	
	bVar0 = false;
	iVar4 = 250;
	if (func_10(Local_533))
	{
		iVar5 = 0;
		while (iVar5 <= 3)
		{
			if (Local_538[iVar5 /*2*/].f_1 == 0)
			{
				if (!bVar0)
				{
					if (fLocal_340 >= 500f)
					{
						switch (iVar5)
						{
							case 0:
								iVar1 = iLocal_344;
								Var2 = { -1262.53f, -731.25f, 21.88f };
								fVar3 = 47.38f;
								break;
							
							case 1:
								iVar1 = iLocal_347;
								Var2 = { -1300.17f, -704.1f, 24.61f };
								fVar3 = -87.53f;
								break;
							
							case 2:
								iVar1 = iLocal_347;
								Var2 = { -1298.33f, -704.16f, 24.53f };
								fVar3 = 83.96f;
								break;
							
							case 3:
								iVar1 = iLocal_347;
								Var2 = { -1209.92f, -817.51f, 15.62f };
								fVar3 = 15.06f;
								break;
						}
						STREAMING::REQUEST_MODEL(iVar1);
						if (STREAMING::HAS_MODEL_LOADED(iVar1))
						{
							Local_538[iVar5 /*2*/] = PED::CREATE_PED(26, iVar1, Var2, fVar3, 1, 1);
							if (func_20(Local_538[iVar5 /*2*/]))
							{
								Local_538[iVar5 /*2*/].f_1 = 1;
								PED::SET_PED_RANDOM_COMPONENT_VARIATION(Local_538[iVar5 /*2*/], 0);
								PED::SET_PED_KEEP_TASK(Local_538[iVar5 /*2*/], 1);
							}
							if (iVar5 != 0)
							{
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar1);
							}
							bVar0 = true;
						}
					}
				}
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_327) > iVar4)
			{
				if (func_20(Local_538[iVar5 /*2*/]))
				{
					switch (Local_538[iVar5 /*2*/].f_1)
					{
						case 1:
							if (func_369(Local_533, Local_538[iVar5 /*2*/], 150f))
							{
								if (iVar5 == 0 || iVar5 == 3)
								{
									TASK::TASK_USE_MOBILE_PHONE(Local_538[iVar5 /*2*/], 1, 1);
									PED::SET_PED_KEEP_TASK(Local_538[iVar5 /*2*/], 0);
									Local_538[iVar5 /*2*/].f_1 = 4;
								}
								else if (iVar5 == 1)
								{
									if (func_20(Local_538[iVar5 + 1 /*2*/]))
									{
										TASK::TASK_CHAT_TO_PED(Local_538[iVar5 /*2*/], Local_538[iVar5 + 1 /*2*/], 17, 0f, 0f, 0f, 0f, 0f);
										PED::SET_PED_KEEP_TASK(Local_538[iVar5 /*2*/], 0);
										Local_538[iVar5 /*2*/].f_1 = 4;
									}
								}
								else if (iVar5 == 2)
								{
									if (func_20(Local_538[(iVar5 - 1) /*2*/]))
									{
										TASK::TASK_CHAT_TO_PED(Local_538[iVar5 /*2*/], Local_538[(iVar5 - 1) /*2*/], 16, 0f, 0f, 0f, 0f, 0f);
										PED::SET_PED_KEEP_TASK(Local_538[iVar5 /*2*/], 0);
										Local_538[iVar5 /*2*/].f_1 = 4;
									}
								}
							}
							break;
						
						case 4:
							if (func_369(Local_533, Local_538[iVar5 /*2*/], 3f))
							{
								TASK::CLEAR_PED_TASKS(Local_538[iVar5 /*2*/]);
								TASK::OPEN_SEQUENCE_TASK(&uVar6);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_533, -1);
								TASK::CLOSE_SEQUENCE_TASK(uVar6);
								TASK::TASK_PERFORM_SEQUENCE(Local_538[iVar5 /*2*/], uVar6);
								TASK::CLEAR_SEQUENCE_TASK(&uVar6);
								Local_538[iVar5 /*2*/].f_1 = 6;
							}
							if (!func_368(Local_538[iVar5 /*2*/], Param0, 300f))
							{
								func_52(&(Local_538[iVar5 /*2*/]), 0);
								Local_538[iVar5 /*2*/].f_1 = 7;
							}
							break;
						
						case 6:
							if (!func_368(Local_538[iVar5 /*2*/], Param0, 150f))
							{
								func_52(&(Local_538[iVar5 /*2*/]), 0);
								Local_538[iVar5 /*2*/].f_1 = 7;
							}
							break;
						}
					}
			}
			iVar5++;
		}
		iVar5 = 0;
		while (iVar5 <= 8)
		{
			if (Local_537[iVar5 /*2*/].f_1 == 0)
			{
				if (!bVar0)
				{
					if (fLocal_340 >= 111161f && iLocal_337 > 1)
					{
						if (INTERIOR::IS_VALID_INTERIOR(iLocal_336) && INTERIOR::IS_INTERIOR_READY(iLocal_336))
						{
							switch (iVar5)
							{
								case 0:
									iVar1 = iLocal_346;
									Var2 = { 309.34f, -596.87f, 43.31f };
									fVar3 = 14.8f;
									break;
								
								case 1:
									iVar1 = iLocal_346;
									Var2 = { 309.52f, -594.85f, 43.31f };
									fVar3 = 153.4102f;
									break;
								
								case 2:
									iVar1 = iLocal_346;
									Var2 = { 316f, -588.77f, 42.3f };
									fVar3 = 207.556f;
									break;
								
								case 3:
									iVar1 = iLocal_345;
									Var2 = { 317.1715f, -590.084f, 42.302f };
									fVar3 = 60.6f;
									break;
								
								case 4:
									iVar1 = iLocal_346;
									Var2 = { 332.54f, -588.5f, 43.3f };
									fVar3 = 70.64f;
									break;
								
								case 5:
									iVar1 = iLocal_346;
									Var2 = { 331.68f, -578.6f, 43.32f };
									fVar3 = 234.5983f;
									break;
								
								case 6:
									iVar1 = iLocal_346;
									Var2 = { 362.56f, -589.32f, 43.33f };
									fVar3 = -21.77f;
									break;
								
								case 7:
									iVar1 = iLocal_346;
									Var2 = { 363.3849f, -587.8508f, 42.3275f };
									fVar3 = 161.2689f;
									break;
								
								case 8:
									iVar1 = iLocal_345;
									Var2 = { 358.5161f, -586.02f, 42.3275f };
									fVar3 = 67.7037f;
									break;
							}
							STREAMING::REQUEST_MODEL(iVar1);
							if (STREAMING::HAS_MODEL_LOADED(iVar1))
							{
								Local_537[iVar5 /*2*/] = PED::CREATE_PED(26, iVar1, Var2, fVar3, 1, 1);
								if (func_20(Local_537[iVar5 /*2*/]))
								{
									Local_537[iVar5 /*2*/].f_1 = 4;
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_537[iVar5 /*2*/], 1);
									PED::SET_PED_FLEE_ATTRIBUTES(Local_537[iVar5 /*2*/], 4, 1);
									PED::SET_PED_KEEP_TASK(Local_537[iVar5 /*2*/], 1);
									switch (iVar5)
									{
										case 0:
											PED::SET_PED_COMPONENT_VARIATION(Local_537[iVar5 /*2*/], 0, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_537[iVar5 /*2*/], 2, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_537[iVar5 /*2*/], 3, 0, 1, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_537[iVar5 /*2*/], 4, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_537[iVar5 /*2*/], 5, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_537[iVar5 /*2*/], 8, 0, 0, 0);
											break;
										
										case 1:
											PED::SET_PED_COMPONENT_VARIATION(Local_537[iVar5 /*2*/], 0, 1, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_537[iVar5 /*2*/], 2, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_537[iVar5 /*2*/], 3, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_537[iVar5 /*2*/], 4, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_537[iVar5 /*2*/], 5, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_537[iVar5 /*2*/], 8, 0, 0, 0);
											break;
										
										case 2:
											PED::SET_PED_COMPONENT_VARIATION(Local_537[2 /*2*/], 0, 1, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_537[2 /*2*/], 2, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_537[2 /*2*/], 3, 0, 1, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_537[2 /*2*/], 4, 0, 1, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_537[2 /*2*/], 5, 0, 1, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_537[2 /*2*/], 8, 0, 0, 0);
											break;
										
										case 3:
											PED::SET_PED_COMPONENT_VARIATION(Local_537[3 /*2*/], 0, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_537[3 /*2*/], 3, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_537[3 /*2*/], 4, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_537[3 /*2*/], 8, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_537[3 /*2*/], 11, 0, 0, 0);
											break;
										
										case 4:
											PED::SET_PED_COMPONENT_VARIATION(Local_537[4 /*2*/], 0, 1, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_537[4 /*2*/], 2, 1, 1, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_537[4 /*2*/], 3, 1, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_537[4 /*2*/], 4, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_537[4 /*2*/], 5, 1, 1, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_537[4 /*2*/], 8, 0, 0, 0);
											break;
										
										case 5:
											PED::SET_PED_COMPONENT_VARIATION(Local_537[5 /*2*/], 0, 1, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_537[5 /*2*/], 2, 1, 1, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_537[5 /*2*/], 3, 0, 2, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_537[5 /*2*/], 4, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_537[5 /*2*/], 5, 0, 2, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_537[5 /*2*/], 8, 0, 0, 0);
											break;
										
										case 6:
											PED::SET_PED_COMPONENT_VARIATION(Local_537[6 /*2*/], 0, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_537[6 /*2*/], 2, 0, 1, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_537[6 /*2*/], 3, 1, 1, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_537[6 /*2*/], 4, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_537[6 /*2*/], 5, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_537[6 /*2*/], 8, 0, 0, 0);
											break;
										
										case 7:
											PED::SET_PED_COMPONENT_VARIATION(Local_537[7 /*2*/], 0, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_537[7 /*2*/], 2, 1, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_537[7 /*2*/], 3, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_537[7 /*2*/], 4, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_537[7 /*2*/], 5, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_537[7 /*2*/], 8, 0, 0, 0);
											break;
										
										case 8:
											PED::SET_PED_COMPONENT_VARIATION(Local_537[8 /*2*/], 0, 1, 1, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_537[8 /*2*/], 3, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_537[8 /*2*/], 4, 1, 2, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_537[8 /*2*/], 8, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_537[8 /*2*/], 11, 1, 2, 0);
											break;
										}
								}
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar1);
								bVar0 = true;
							}
						}
					}
				}
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_327) > iVar4)
			{
				if (func_20(Local_537[iVar5 /*2*/]))
				{
					switch (Local_537[iVar5 /*2*/].f_1)
					{
						case 4:
							if (func_368(Local_537[iVar5 /*2*/], Param0, 5f) || func_369(Local_533, Local_537[iVar5 /*2*/], 8f))
							{
								TASK::TASK_COWER(Local_537[iVar5 /*2*/], -1);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_537[iVar5 /*2*/], 1);
								Local_537[iVar5 /*2*/].f_1 = 6;
							}
							break;
						
						case 5:
							break;
						
						case 6:
							if ((PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_537[iVar5 /*2*/])) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_537[iVar5 /*2*/]))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_537[iVar5 /*2*/], 474215631) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_537[iVar5 /*2*/], 474215631) != 0)
								{
									TASK::TASK_COWER(Local_537[iVar5 /*2*/], -1);
								}
							}
							else if (!func_368(Local_537[iVar5 /*2*/], Param0, 250f))
							{
								func_52(&(Local_537[iVar5 /*2*/]), 0);
								Local_537[iVar5 /*2*/].f_1 = 7;
							}
							break;
						}
					}
			}
			iVar5++;
		}
	}
	if ((MISC::GET_GAME_TIMER() - iLocal_327) > iVar4)
	{
		iLocal_327 = MISC::GET_GAME_TIMER();
	}
}

bool func_368(int iParam0, struct<3> Param1, float fParam2)//Position - 0x2BFEA
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, 1), Param1) <= (fParam2 * fParam2);
}

bool func_369(int iParam0, int iParam1, float fParam2)//Position - 0x2C009
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, 1), ENTITY::GET_ENTITY_COORDS(iParam1, 1)) <= (fParam2 * fParam2);
}

void func_370(float fParam0)//Position - 0x2C029
{
	int iVar0;
	
	switch (iLocal_333)
	{
		case 0:
			if (fParam0 > 5000f)
			{
				PED::SET_PED_NON_CREATION_AREA(-1332.351f, -763.4576f, 10f, -1229.142f, -654.3546f, 42f);
				iLocal_333++;
			}
			break;
		
		case 1:
			if (fParam0 > 10000f)
			{
				PED::SET_PED_NON_CREATION_AREA(-1274.148f, -842.6357f, 10f, -1139.836f, -703.7437f, 42f);
				iLocal_333++;
			}
			break;
		
		case 2:
			if (fParam0 > 40000f)
			{
				iVar0 = 0;
				while (iVar0 <= 4)
				{
					PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_357[iVar0], 0);
					iVar0++;
				}
				PATHFIND::SET_ROADS_IN_ANGLED_AREA(-668.3635f, -658.3801f, 27.43382f, -440.022f, -657.4238f, 40.25127f, 40f, 0, 0, 1);
				iLocal_333++;
			}
			break;
		
		case 3:
			if (fParam0 > 54000f)
			{
				iVar0 = 0;
				while (iVar0 <= 4)
				{
					PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_357[iVar0], 0);
					iVar0++;
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -513.4877f, -598.4955f, 30.89824f, -695.001f, -593.8384f, 19.30782f, 60f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -518.4041f, -622.8293f, 32.30106f, -608.4054f, -622.3588f, 26.78756f, 11f, 0, 1, 0))
				{
					MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(-668.3635f, -658.3801f, 27.43382f, -440.022f, -657.4238f, 40.25127f, 40f, 0, 0, 0, 0, 0);
					MISC::CLEAR_AREA_OF_PEDS(-497.2258f, -710.6161f, 32.22013f, 5.85f, 0);
					MISC::CLEAR_AREA_OF_PEDS(-498.1823f, -719.3134f, 32.21197f, 2.15f, 0);
					MISC::CLEAR_AREA_OF_PEDS(-497.9032f, -724.9741f, 32.21197f, 3.8f, 0);
					MISC::CLEAR_AREA_OF_PEDS(-499.5668f, -731.9666f, 32.21197f, 7.3f, 0);
				}
				PATHFIND::SET_PED_PATHS_IN_AREA(-496.2885f, -681.5599f, 25f, -481.5988f, -668.7411f, 38f, 0, 0);
				PED::SET_PED_NON_CREATION_AREA(-496.2885f, -681.5599f, 25f, -481.5988f, -668.7411f, 38f);
				uLocal_357[0] = PED::ADD_SCENARIO_BLOCKING_AREA(-497.2199f, -679.9771f, 22.0126f, -486.8124f, -672.0134f, 41.80794f, 0, 1, 1, 1);
				uLocal_357[1] = PED::ADD_SCENARIO_BLOCKING_AREA(-489.7285f, -680.7455f, 22.0126f, -497.1978f, -690.007f, 41.80794f, 0, 1, 1, 1);
				iLocal_333++;
			}
			break;
		
		case 4:
			if (fParam0 > 61000f)
			{
				iVar0 = 0;
				while (iVar0 <= 4)
				{
					PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_357[iVar0], 0);
					iVar0++;
				}
				PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-668.3635f, -658.3801f, 27.43382f, -440.022f, -657.4238f, 40.25127f, 40f, 1);
				PED::SET_PED_NON_CREATION_AREA(-508.7908f, -764.6354f, 28f, -488.0437f, -702.8006f, 38f);
				uLocal_357[0] = PED::ADD_SCENARIO_BLOCKING_AREA(-503.0949f, -754.9647f, 29f, -494.7944f, -730.1296f, 37f, 0, 1, 1, 1);
				iLocal_333++;
			}
			break;
		
		case 5:
			if (fParam0 > 65000f)
			{
				iVar0 = 0;
				while (iVar0 <= 4)
				{
					PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_357[iVar0], 0);
					iVar0++;
				}
				PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(-496.2885f, -681.5599f, 25f, -481.5988f, -668.7411f, 38f, 0);
				PATHFIND::SET_PED_PATHS_IN_AREA(-463.2153f, -829.0475f, 22.4812f, -445.4645f, -813.1011f, 36.56588f, 0, 0);
				PED::SET_PED_NON_CREATION_AREA(-463.2153f, -829.0475f, 22.4812f, -445.4645f, -813.1011f, 36.56588f);
				uLocal_357[0] = PED::ADD_SCENARIO_BLOCKING_AREA(-497.2199f, -679.9771f, 22.0126f, -486.8124f, -672.0134f, 41.80794f, 0, 1, 1, 1);
				iLocal_333++;
			}
			break;
		
		case 6:
			if (fParam0 > 75000f)
			{
				PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(-463.2153f, -829.0475f, 22.4812f, -445.4645f, -813.1011f, 36.56588f, 0);
				uLocal_357[1] = PED::ADD_SCENARIO_BLOCKING_AREA(291.5848f, -588.8806f, 37f, 303.7603f, -579.5882f, 48f, 0, 1, 1, 1);
				iLocal_333++;
			}
			break;
		
		case 7:
			if (fParam0 > 114500f)
			{
				func_287(1);
				iLocal_333++;
			}
			break;
	}
}

void func_371()//Position - 0x2C4F1
{
	if (!iLocal_295)
	{
		if (fLocal_340 > (114436f - 4000f))
		{
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("NIGEL_02_CRASH_A", 0);
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("NIGEL_02_CRASH_B", 0);
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("PANIC_WALLA_INTERIOR", 0);
			if ((AUDIO::REQUEST_SCRIPT_AUDIO_BANK("NIGEL_02_CRASH_A", 0) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("NIGEL_02_CRASH_B", 0)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("PANIC_WALLA_INTERIOR", 0))
			{
				iLocal_295 = 1;
			}
		}
	}
	else
	{
		switch (iLocal_321)
		{
			case 0:
				if (fLocal_340 >= 114436f)
				{
					AUDIO::PLAY_SOUND_FROM_COORD(-1, "DOOR_CRASH", 299.5664f, -584.6757f, 42.302f, "NIGEL_02_SOUNDSET", 0, 0, 0);
					iLocal_321++;
				}
				break;
			
			case 1:
				if (fLocal_340 >= 114936f)
				{
					AUDIO::PLAY_SOUND_FROM_COORD(-1, "SCREAMS", 310.5149f, -595.4158f, 42.302f, "NIGEL_02_SOUNDSET", 0, 0, 0);
					AUDIO::_0x062D5EAD4DA2FA6A();
					AUDIO::PLAY_SOUND_FROM_COORD(-1, "PANIC_WALLA", 316.4345f, -589.3902f, 42.2919f, "NIGEL_02_SOUNDSET", 0, 0, 0);
					iLocal_321++;
				}
				break;
			
			case 2:
				if (fLocal_340 >= 117166f)
				{
					AUDIO::PLAY_SOUND_FROM_COORD(-1, "WALL_CRASH", 325.66f, -589.01f, 42.3f, "NIGEL_02_SOUNDSET", 0, 0, 0);
					iLocal_321++;
				}
				break;
			
			case 3:
				if (fLocal_340 >= 117736f)
				{
					AUDIO::PLAY_SOUND_FROM_COORD(-1, "WALL_CRASH", 330.13f, -585.72f, 42.42f, "NIGEL_02_SOUNDSET", 0, 0, 0);
					iLocal_321++;
				}
				break;
			
			case 4:
				if (fLocal_340 >= 118186f)
				{
					AUDIO::PLAY_SOUND_FROM_COORD(-1, "SCREAMS", 331.7845f, -578.5184f, 42.3167f, "NIGEL_02_SOUNDSET", 0, 0, 0);
					AUDIO::PLAY_SOUND_FROM_COORD(-1, "PANIC_WALLA", 354.6585f, -584.2177f, 42.315f, "NIGEL_02_SOUNDSET", 0, 0, 0);
					iLocal_321++;
				}
				break;
			
			case 5:
				if (fLocal_340 >= 118496f)
				{
					AUDIO::PLAY_SOUND_FROM_COORD(-1, "WALL_CRASH", 337.89f, -582.38f, 42.33f, "NIGEL_02_SOUNDSET", 0, 0, 0);
					iLocal_321++;
				}
				break;
			
			case 6:
				if (fLocal_340 >= 120986f)
				{
					AUDIO::PLAY_SOUND_FROM_COORD(-1, "WINDOW_CRASH", 364.64f, -595.43f, 42.54f, "NIGEL_02_SOUNDSET", 0, 0, 0);
					iLocal_321++;
				}
				break;
			
			default:
				break;
			}
	}
}

void func_372()//Position - 0x2C750
{
	if (!func_45() && bLocal_275)
	{
		if (iLocal_541 == 0)
		{
			if (fLocal_340 >= 99000f)
			{
				if (func_310(Local_548, 308.9679f, -591.075f, 43.29187f, 500f))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(Local_348))
					{
						STREAMING::REQUEST_MODEL(Local_348.f_7);
						if (STREAMING::HAS_MODEL_LOADED(Local_348.f_7))
						{
							Local_348 = OBJECT::CREATE_OBJECT(Local_348.f_7, Local_348.f_1, 1, 1, 0);
							if (func_10(Local_348))
							{
								ENTITY::SET_ENTITY_ROTATION(Local_348, Local_348.f_4, 2, 1);
								ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_348, Local_348.f_1, 0, 0, 1);
								ENTITY::FREEZE_ENTITY_POSITION(Local_348, 1);
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_348.f_7);
								iLocal_541 = 1;
							}
						}
					}
				}
			}
		}
		else if (iLocal_541 == 1)
		{
			if (fLocal_340 >= 114436f)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_348))
				{
					func_51(&Local_348);
					iLocal_541 = 2;
				}
			}
		}
		else if (iLocal_541 == 2)
		{
		}
		if (iLocal_323 == 0)
		{
			if (fLocal_340 >= 99000f)
			{
				if (func_310(Local_548, 308.9679f, -591.075f, 43.29187f, 500f))
				{
					if (iLocal_337 > 3)
					{
						uLocal_352 = OBJECT::GET_RAYFIRE_MAP_OBJECT(299.4302f, -584.8925f, 42.2629f, 100f, "DES_hospitaldoors");
						if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_352))
						{
							OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_352, 11);
							iLocal_323++;
						}
					}
				}
			}
		}
		else if (iLocal_323 == 1)
		{
			if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_352))
			{
				if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_352) == 5)
				{
					if (fLocal_340 >= 114436f)
					{
						OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_352, 6);
						iLocal_323++;
					}
				}
				else if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_352) != 4)
				{
					OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_352, 4);
				}
			}
			else
			{
				iLocal_323 = (iLocal_323 - 1);
			}
		}
	}
}

void func_373()//Position - 0x2C916
{
	STREAMING::REQUEST_ANIM_DICT("rcmnigel2");
	if (func_10(Local_535))
	{
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_535);
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_535, 0);
		ENTITY::FREEZE_ENTITY_POSITION(Local_535, 1);
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_535, 0);
		VEHICLE::SET_DISABLE_VEHICLE_ENGINE_FIRES(Local_535, 1);
		VEHICLE::SET_VEHICLE_ENGINE_ON(Local_535, 1, 1);
		AUDIO::SET_VEHICLE_AUDIO_BODY_DAMAGE_FACTOR(Local_535, 1f);
		VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_535, 0f);
	}
	if (func_20(Local_533))
	{
		func_361(1090519040);
		if (ENTITY::GET_ENTITY_HEALTH(Local_533) > 110)
		{
			ENTITY::SET_ENTITY_HEALTH(Local_533, 110);
			PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_533, 1);
		}
	}
	if (!CAM::IS_SPHERE_VISIBLE(393.38f, -617.53f, 27.91f, 30f))
	{
		MISC::CLEAR_AREA_OF_PEDS(393.38f, -617.53f, 27.91f, 35f, 0);
		MISC::CLEAR_AREA_OF_OBJECTS(393.38f, -617.53f, 27.91f, 8f, 0);
	}
}

void func_374()//Position - 0x2C9EE
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = iLocal_247;
	iVar1 = iLocal_250;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		if (iLocal_191[iVar2] > 0)
		{
			VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_191[iVar2], sLocal_358);
		}
		iVar2++;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (iLocal_194[iVar2] > 0)
		{
			VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_194[iVar2], sLocal_358);
		}
		iVar2++;
	}
}

void func_375()//Position - 0x2CA5E
{
	iLocal_131 = 1;
}

void func_376()//Position - 0x2CA69
{
	if (!iLocal_303)
	{
		if (fLocal_340 > 124136f)
		{
			if (func_20(Local_533))
			{
				if (ENTITY::GET_ENTITY_HEALTH(Local_533) < 200)
				{
					ENTITY::SET_ENTITY_HEALTH(Local_533, 200);
				}
			}
			if (func_13(Local_535))
			{
				ENTITY::SET_ENTITY_HEALTH(Local_535, 1000);
				if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(Local_535, 4))
				{
					VEHICLE::SET_VEHICLE_DOOR_BROKEN(Local_535, 4, 1);
				}
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_535, 1);
				VEHICLE::SMASH_VEHICLE_WINDOW(Local_535, 0);
				VEHICLE::SMASH_VEHICLE_WINDOW(Local_535, 1);
				VEHICLE::POP_OUT_VEHICLE_WINDSCREEN(Local_535);
				VEHICLE::SET_VEHICLE_DAMAGE(Local_535, 0f, 1f, 0.1f, 800f, 1850f, 1);
				VEHICLE::SET_VEHICLE_DAMAGE(Local_535, -0.2f, 1f, 0.5f, 50f, 650f, 1);
				VEHICLE::SET_VEHICLE_DAMAGE(Local_535, -0.7f, -0.2f, 0.3f, 50f, 500f, 1);
				iLocal_303 = 1;
			}
		}
	}
}

void func_377()//Position - 0x2CB46
{
	if (((((((((((fLocal_340 > 3000f && fLocal_340 < 3800f) || (fLocal_340 > 14750f && fLocal_340 < 15250f)) || (fLocal_340 > 28500f && fLocal_340 < 29400f)) || (fLocal_340 > 34000f && fLocal_340 < 35250f)) || (fLocal_340 > 38800f && fLocal_340 < 41000f)) || (fLocal_340 > 47000f && fLocal_340 < 48300f)) || (fLocal_340 > 56000f && fLocal_340 < 57200f)) || (fLocal_340 > 66750f && fLocal_340 < 67250f)) || (fLocal_340 > 68500f && fLocal_340 < 70500f)) || (fLocal_340 > 101500f && fLocal_340 < 102500f)) || (fLocal_340 > 114500f && fLocal_340 < 116500f))
	{
		VEHICLE::SET_VEHICLE_BRAKE_LIGHTS(Local_535, 1);
	}
	if ((((((fLocal_340 > 6500f && fLocal_340 < 7000f) || (fLocal_340 > 7500f && fLocal_340 < 8500f)) || (fLocal_340 > 10500f && fLocal_340 < 11250f)) || (fLocal_340 > 11750f && fLocal_340 < 12250f)) || (fLocal_340 > 13250f && fLocal_340 < 13500f)) || (fLocal_340 > 14000f && fLocal_340 < 14500f))
	{
		AUDIO::_SOUND_VEHICLE_HORN_THIS_FRAME(Local_535);
	}
}

void func_378(float fParam0, float fParam1)//Position - 0x2CD44
{
	bool bVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	
	bVar0 = true;
	if (bVar0)
	{
		if (func_13(Local_534))
		{
			fVar1 = *fParam0;
			fVar2 = 9f;
			fVar3 = 20f;
			fVar4 = 36f;
			fVar5 = ((200f / 100f) * (0.7f * 100f));
			fVar6 = 30f;
			fVar7 = 0.7f;
			fVar8 = 0.45f;
			fVar9 = 1.6f;
			fVar10 = 0.04f;
			if (fParam1 > 0f && fParam1 < 6000f)
			{
				fVar2 = 1f;
				fVar3 = 10f;
				fVar4 = 22f;
				fVar6 = 45f;
				fVar9 = 1f;
				fVar10 = 0.02f;
			}
			else if (fParam1 > 12000f && fParam1 < 20000f)
			{
				fVar2 = 10.5f;
				fVar3 = 22f;
				fVar6 = 15f;
				fVar10 = 0.05f;
			}
			else if (fParam1 > 31000f && fParam1 < 35500f)
			{
				fVar2 = 9f;
				fVar3 = 20f;
				fVar6 = 20f;
				fVar9 = 1.8f;
			}
			else if (fParam1 > 37000f && fParam1 < 42500f)
			{
				fVar2 = 8f;
				fVar3 = 21f;
			}
			else if (fParam1 > 54500f && fParam1 < 58000f)
			{
				fVar2 = 8f;
				fVar3 = 22f;
			}
			else if (fParam1 > 58000f && fParam1 < 63500f)
			{
				fVar2 = 15f;
				fVar3 = 22f;
				fVar10 = 0.35f;
			}
			else if (fParam1 > 63500f && fParam1 < 72500f)
			{
				fVar2 = 10f;
				fVar3 = 20f;
				fVar4 = 30f;
			}
			else if (fParam1 > 72500f && fParam1 < 81500f)
			{
				fVar4 = 30f;
			}
			else if (fParam1 > 81500f && fParam1 < 84000f)
			{
				fVar4 = 25f;
			}
			else if (fParam1 > 88000f && fParam1 < 96500f)
			{
				fVar4 = 30f;
				fVar6 = 20f;
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -423.2351f, -528.1853f, 22.33451f, -234.6718f, -527.774f, 30.57916f, 27f, 0, 1, 0))
				{
					fVar2 = 20f;
					fVar3 = 35f;
					fVar4 = 60f;
					fVar6 = 15f;
				}
			}
			else if (fParam1 > 96500f && fParam1 < 102500f)
			{
				fVar2 = 15f;
				fVar3 = 20f;
				fVar4 = 25f;
				fVar6 = 20f;
				fVar10 = 0.35f;
			}
			else if (fParam1 > 102500f && fParam1 < 107500f)
			{
				fVar2 = 15f;
				fVar3 = 25f;
				fVar4 = 40f;
			}
			else if (fParam1 > 107500f && fParam1 < 110500f)
			{
				fVar2 = 17f;
				fVar3 = 30f;
				fVar4 = 50f;
				fVar9 = 1.9f;
			}
			else if (fParam1 > 110500f && fParam1 < 114000f)
			{
				fVar2 = 20f;
				fVar3 = 35f;
				fVar4 = 55f;
				fVar9 = 1.9f;
			}
			else if (fParam1 > 114500f && fParam1 < 118000f)
			{
				fVar2 = 22f;
				fVar3 = 37f;
				fVar4 = 60f;
				fVar9 = 2f;
			}
			else if (fParam1 > 118000f)
			{
				fVar2 = 27f;
				fVar3 = 45f;
				fVar4 = 70f;
				fVar9 = 2f;
			}
			func_386(&fVar1, &Local_534, Local_535, fVar2, fVar3, fVar4, fVar5, fVar6, 1f, fVar7, fVar8, fVar9, 1, 0, 1097859072, 1);
			if (fParam1 > 114500f)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 290.1243f, -545.2184f, 38.39701f, 448.9054f, -554.2001f, 48.65286f, 19.25f, 0, 1, 0))
				{
					fVar1 = 1.2f;
				}
				else if (fParam1 < 120000f)
				{
					fVar1 = 2.2f;
					fVar10 = 1f;
				}
			}
			func_385(fParam0, fVar1, fVar10);
		}
	}
	else
	{
		fVar11 = *fParam0;
		fVar12 = 6f;
		fVar13 = 18f;
		fVar14 = 35f;
		fVar15 = 1.5f;
		if (fParam1 > 37000f && fParam1 < 42500f)
		{
			fVar12 = 8f;
			fVar13 = 22f;
			fVar15 = 1.6f;
		}
		else if (fParam1 > 54500f && fParam1 < 58000f)
		{
			fVar12 = 8f;
			fVar13 = 20f;
			fVar15 = 1.6f;
		}
		else if (fParam1 > 58000f && fParam1 < 63500f)
		{
			fVar13 = 15f;
			fVar14 = 22f;
		}
		else if (fParam1 > 63500f && fParam1 < 72500f)
		{
			fVar12 = 10f;
			fVar13 = 20f;
			fVar14 = 30f;
			fVar15 = 1.6f;
		}
		else if (fParam1 > 72500f && fParam1 < 81500f)
		{
			fVar14 = 30f;
			fVar15 = 1.6f;
		}
		else if (fParam1 > 81500f && fParam1 < 84000f)
		{
			fVar14 = 25f;
			fVar15 = 1.6f;
		}
		else if (fParam1 > 88000f && fParam1 < 96500f)
		{
			fVar14 = 20f;
			fVar15 = 1.6f;
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -423.2351f, -528.1853f, 22.33451f, -234.6718f, -527.774f, 30.57916f, 27f, 0, 1, 0))
			{
				fVar12 = 12f;
				fVar13 = 30f;
				fVar14 = 45f;
				fVar15 = 1.6f;
			}
		}
		else if (fParam1 > 96500f && fParam1 < 102500f)
		{
			fVar14 = 20f;
			fVar15 = 1.6f;
		}
		else if (fParam1 > 102500f && fParam1 < 107500f)
		{
			fVar12 = 12f;
			fVar13 = 25f;
			fVar14 = 40f;
			fVar15 = 1.6f;
		}
		else if (fParam1 > 107500f && fParam1 < 110500f)
		{
			fVar12 = 14f;
			fVar13 = 30f;
			fVar14 = 50f;
			fVar15 = 1.6f;
		}
		else if (fParam1 > 110500f && fParam1 < 114000f)
		{
			fVar12 = 20f;
			fVar13 = 35f;
			fVar14 = 55f;
			fVar15 = 1.9f;
		}
		else if (fParam1 > 114500f && fParam1 < 118000f)
		{
			fVar12 = 40f;
			fVar13 = 50f;
			fVar14 = 70f;
			fVar15 = 3f;
		}
		else if (fParam1 > 118000f)
		{
			fVar12 = 20f;
			fVar13 = 35f;
			fVar14 = 65f;
			fVar15 = 2f;
		}
		func_379(Local_535, PLAYER::PLAYER_PED_ID(), &fVar11, 1f, fVar12, fVar13, fVar14, fVar15, 1065353216, 1060320051, 1);
		if (fParam1 > 114500f && fParam1 < 118000f)
		{
			fVar11 = 2.2f;
		}
		if (fParam1 > 114500f)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 290.1243f, -545.2184f, 38.39701f, 448.9054f, -554.2001f, 48.65286f, 19.25f, 0, 1, 0))
			{
				fVar11 = 1.2f;
			}
		}
		*fParam0 = fVar11;
	}
}

void func_379(int iParam0, int iParam1, var uParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, bool bParam10)//Position - 0x2D4D7
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
	
	if (iLocal_133 == 0)
	{
		if (*uParam2 < fParam3)
		{
			*uParam2 = fParam3;
			iLocal_133 = 1;
		}
	}
	if (fParam8 < 0f)
	{
		fParam8 = fLocal_181;
	}
	fVar0 = (fParam3 * fParam7);
	if (!fVar0 > fParam3)
	{
		fVar0 = (fParam3 + 0.1f);
	}
	fVar5 = (fParam3 * fParam9);
	fVar6 = (((fParam6 - fParam5) * 0.4f) + fParam5);
	fVar2 = func_384(iParam0, iParam1);
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
		if (func_382(iParam1, iParam0))
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
			if (func_381(iParam0, iParam1) < fParam5)
			{
				fVar1 = func_380(iParam0, iParam1);
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
			iLocal_134 = 1;
		}
		else if (iLocal_134)
		{
			if (fVar2 < fVar6)
			{
				fVar4 = fParam3;
				iLocal_134 = 0;
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
	fVar1 = (fVar4 - *uParam2);
	if (fVar1 > 0f)
	{
		fVar1 = MISC::GET_FRAME_TIME();
		fVar8 = ((fLocal_188 * fParam3) * fVar1);
		fVar1 = (fVar4 - *uParam2);
		if (fVar1 > fVar8)
		{
			fVar1 = fVar8;
		}
		*uParam2 = (*uParam2 + fVar1);
	}
	else
	{
		fVar1 = MISC::GET_FRAME_TIME();
		fVar8 = ((fLocal_189 * fParam3) * fVar1);
		fVar1 = (fVar4 - *uParam2);
		if (fVar1 < (fVar8 * -1f))
		{
			fVar1 = (fVar8 * -1f);
		}
		*uParam2 = (*uParam2 + fVar1);
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
							fVar1 = (fVar1 * (fLocal_179 - fLocal_180));
							fVar1 = (fVar1 + fLocal_180);
							fLocal_178 = fVar1;
							if (fLocal_178 < fLocal_180)
							{
								fLocal_178 = fLocal_180;
							}
							if (fLocal_178 > fLocal_179)
							{
								fLocal_178 = fLocal_179;
							}
							PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), fLocal_178);
						}
					}
				}
			}
		}
	}
}

float func_380(int iParam0, int iParam1)//Position - 0x2D78C
{
	struct<2> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
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
	fVar4 = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var0, Var0.f_1, Var3.x, Var3.f_1);
	return fVar4;
}

float func_381(int iParam0, int iParam1)//Position - 0x2D81B
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

int func_382(int iParam0, int iParam1)//Position - 0x2D86B
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
	fVar5 = func_383(Var3, Var4);
	if (fVar5 < 0f)
	{
		return 1;
	}
	return 0;
}

float func_383(struct<3> Param0, struct<3> Param1)//Position - 0x2D90C
{
	return (((Param0.x * Param1.x) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

float func_384(int iParam0, int iParam1)//Position - 0x2D92D
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

void func_385(var uParam0, float fParam1, float fParam2)//Position - 0x2D9BB
{
	*uParam0 = (*uParam0 + ((((fParam1 - *uParam0) * fParam2) * 30f) * SYSTEM::TIMESTEP()));
}

void func_386(var uParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, bool bParam12, float fParam13, float fParam14, int iParam15)//Position - 0x2D9DE
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	float fVar8;
	float fVar9;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(*iParam1, 1) };
	Var1 = { ENTITY::GET_ENTITY_COORDS(iParam2, 1) };
	Var2 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam2, Var0) };
	fVar3 = SYSTEM::VDIST(Var0, Var1);
	fVar4 = 0f;
	fVar5 = (fParam11 - 1f);
	fVar6 = (1f - fParam9);
	if (Var2.f_1 < 1f)
	{
		if (fVar3 > fParam5)
		{
			iVar7 = 0;
			if (fVar3 > fParam6)
			{
				if (fVar3 > (fParam6 * 2f))
				{
					iVar7 = 1;
				}
				fVar3 = fParam6;
			}
			fVar4 = ((fVar3 - fParam5) / (fParam6 - fParam5));
			if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam2) || iVar7)
			{
				*uParam0 = (fParam9 - ((fParam9 - fParam10) * fVar4));
			}
			else
			{
				*uParam0 = fParam9;
			}
		}
		else if (fVar3 > fParam4)
		{
			fVar4 = ((fVar3 - fParam4) / (fParam5 - fParam4));
			*uParam0 = (1f - (fVar6 * fVar4));
		}
		else
		{
			if (fVar3 < fParam3)
			{
				fVar3 = fParam3;
			}
			fVar4 = ((fParam4 - fVar3) / (fParam4 - fParam3));
			if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()) && iParam15)
			{
				*uParam0 = (1f + ((fVar4 * fVar5) * 2f));
			}
			else
			{
				*uParam0 = (1f + (fVar4 * fVar5));
			}
		}
	}
	else
	{
		if (fVar3 > fParam7)
		{
			fVar3 = fParam7;
		}
		fVar4 = (fVar3 / fParam7);
		fVar8 = (ENTITY::GET_ENTITY_SPEED(iParam2) - ENTITY::GET_ENTITY_SPEED(*iParam1));
		if (fVar8 > 0f)
		{
			fVar4 = (fVar4 * 0.5f);
		}
		if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()) && iParam15)
		{
			*uParam0 = (2f + fVar4);
		}
		else if (ENTITY::GET_ENTITY_SPEED(*iParam1) < 5f && fVar8 > 0f)
		{
			*uParam0 = (0.6f + fVar4);
		}
		else
		{
			*uParam0 = (1f + fVar4);
		}
	}
	*uParam0 = (*uParam0 * fParam8);
	if (bParam12)
	{
		fVar9 = fParam13;
		if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()) && iParam15)
		{
			fParam14 = (fParam14 * 2f);
			fParam13 = (fParam13 * 2f);
		}
		if (*uParam0 > 1f)
		{
			fVar9 = (fParam13 + ((fParam14 - fParam13) * (*uParam0 - 1f)));
		}
		VEHICLE::MODIFY_VEHICLE_TOP_SPEED(*iParam1, -fVar9);
	}
}

void func_387()//Position - 0x2DBC2
{
	int iVar0;
	int iVar1;
	
	if ((MISC::GET_GAME_TIMER() - iLocal_328) > 50)
	{
		if (func_13(iLocal_250[3]))
		{
			if (fLocal_340 > 28750f && fLocal_340 < 29750f)
			{
				VEHICLE::SET_VEHICLE_LIGHTS(iLocal_250[3], 2);
				VEHICLE::SET_VEHICLE_LIGHT_MULTIPLIER(iLocal_250[3], 2f);
				if (!iLocal_302[0])
				{
					VEHICLE::START_VEHICLE_HORN(iLocal_250[3], 3500, MISC::GET_HASH_KEY("HELDDOWN"), 0);
					iLocal_302[0] = 1;
				}
			}
			else
			{
				VEHICLE::SET_VEHICLE_LIGHTS(iLocal_250[3], 1);
				VEHICLE::SET_VEHICLE_LIGHT_MULTIPLIER(iLocal_250[3], 1f);
			}
		}
		if (func_13(iLocal_250[5]))
		{
			if (fLocal_340 > 34500f && fLocal_340 < 35500f)
			{
				VEHICLE::SET_VEHICLE_LIGHTS(iLocal_250[5], 2);
				VEHICLE::SET_VEHICLE_LIGHT_MULTIPLIER(iLocal_250[5], 2f);
				if (!iLocal_302[1])
				{
					VEHICLE::START_VEHICLE_HORN(iLocal_250[5], 3000, MISC::GET_HASH_KEY("HELDDOWN"), 0);
					iLocal_302[1] = 1;
				}
			}
			else
			{
				VEHICLE::SET_VEHICLE_LIGHTS(iLocal_250[5], 1);
				VEHICLE::SET_VEHICLE_LIGHT_MULTIPLIER(iLocal_250[5], 1f);
			}
		}
		if (func_13(iLocal_250[8]))
		{
			if (!bLocal_300)
			{
				bLocal_300 = func_388(iLocal_250[8], joaat("s_m_y_garbage"), 26);
			}
			if (fLocal_340 > 46000f && fLocal_340 < 47000f)
			{
				VEHICLE::SET_VEHICLE_LIGHTS(iLocal_250[8], 2);
				VEHICLE::SET_VEHICLE_LIGHT_MULTIPLIER(iLocal_250[8], 2f);
				if (!iLocal_302[2])
				{
					VEHICLE::START_VEHICLE_HORN(iLocal_250[8], 3500, MISC::GET_HASH_KEY("HELDDOWN"), 0);
					iLocal_302[2] = 1;
				}
			}
			else if (fLocal_340 > 47500f && fLocal_340 < 48500f)
			{
				VEHICLE::SET_VEHICLE_LIGHTS(iLocal_250[8], 2);
				VEHICLE::SET_VEHICLE_LIGHT_MULTIPLIER(iLocal_250[8], 2f);
			}
			else
			{
				VEHICLE::SET_VEHICLE_LIGHTS(iLocal_250[8], 1);
				VEHICLE::SET_VEHICLE_LIGHT_MULTIPLIER(iLocal_250[8], 1f);
			}
		}
		if (func_13(iLocal_250[9]))
		{
			if (!bLocal_301)
			{
				bLocal_301 = func_388(iLocal_250[9], joaat("a_m_y_cyclist_01"), 26);
			}
		}
		if (func_13(iLocal_250[16]))
		{
			if (fLocal_340 > 69000f && fLocal_340 < 71000f)
			{
				VEHICLE::SET_VEHICLE_LIGHTS(iLocal_250[16], 2);
				VEHICLE::SET_VEHICLE_LIGHT_MULTIPLIER(iLocal_250[16], 2f);
				if (!iLocal_302[3])
				{
					VEHICLE::START_VEHICLE_HORN(iLocal_250[16], 3500, MISC::GET_HASH_KEY("HELDDOWN"), 0);
					iLocal_302[3] = 1;
				}
			}
			else
			{
				VEHICLE::SET_VEHICLE_LIGHTS(iLocal_250[16], 1);
				VEHICLE::SET_VEHICLE_LIGHT_MULTIPLIER(iLocal_250[16], 1f);
			}
		}
		if (func_13(iLocal_247[17]))
		{
			if (!iLocal_302[4])
			{
				if (fLocal_340 > 78700f && fLocal_340 < 79300f)
				{
					VEHICLE::START_VEHICLE_HORN(iLocal_247[17], 3000, MISC::GET_HASH_KEY("HELDDOWN"), 0);
					iLocal_302[4] = 1;
				}
			}
		}
		if (func_13(iLocal_247[19]))
		{
			if (!iLocal_302[4])
			{
				if (fLocal_340 > 79950f && fLocal_340 < 82300f)
				{
					VEHICLE::START_VEHICLE_HORN(iLocal_247[19], 3000, MISC::GET_HASH_KEY("HELDDOWN"), 0);
					iLocal_302[4] = 1;
				}
			}
		}
		if (func_13(iLocal_250[20]))
		{
			if (!iLocal_302[5])
			{
				if (fLocal_340 > 84000f && fLocal_340 < 84750f)
				{
					VEHICLE::START_VEHICLE_HORN(iLocal_250[20], 3000, MISC::GET_HASH_KEY("HELDDOWN"), 0);
					iLocal_302[5] = 1;
				}
			}
		}
		if (func_13(iLocal_250[21]))
		{
			if (fLocal_340 > 88000f && fLocal_340 < 90502f)
			{
				VEHICLE::SET_VEHICLE_LIGHTS(iLocal_250[21], 2);
				VEHICLE::SET_VEHICLE_LIGHT_MULTIPLIER(iLocal_250[21], 2f);
				if (!iLocal_302[6])
				{
					VEHICLE::START_VEHICLE_HORN(iLocal_250[21], 3500, MISC::GET_HASH_KEY("HELDDOWN"), 0);
					iLocal_302[6] = 1;
				}
			}
			else
			{
				VEHICLE::SET_VEHICLE_LIGHTS(iLocal_250[21], 1);
				VEHICLE::SET_VEHICLE_LIGHT_MULTIPLIER(iLocal_250[21], 1f);
			}
		}
		if (func_13(iLocal_250[23]))
		{
			if (fLocal_340 > 84800f && fLocal_340 < 87000f)
			{
				VEHICLE::SET_VEHICLE_LIGHTS(iLocal_250[23], 2);
				VEHICLE::SET_VEHICLE_LIGHT_MULTIPLIER(iLocal_250[23], 2f);
				if (!iLocal_302[7])
				{
					VEHICLE::START_VEHICLE_HORN(iLocal_250[23], 3500, MISC::GET_HASH_KEY("HELDDOWN"), 0);
					iLocal_302[7] = 1;
				}
			}
			else
			{
				VEHICLE::SET_VEHICLE_LIGHTS(iLocal_250[23], 1);
				VEHICLE::SET_VEHICLE_LIGHT_MULTIPLIER(iLocal_250[23], 1f);
			}
		}
		if (func_13(iLocal_247[21]))
		{
			if (!iLocal_302[8])
			{
				if (fLocal_340 > 98800f && fLocal_340 < 99400f)
				{
					VEHICLE::START_VEHICLE_HORN(iLocal_247[21], 2000, MISC::GET_HASH_KEY("HELDDOWN"), 0);
					iLocal_302[8] = 1;
				}
			}
		}
		if (func_13(iLocal_247[23]))
		{
			if (fLocal_340 > 91200f && fLocal_340 < 92200f)
			{
				VEHICLE::SET_VEHICLE_LIGHTS(iLocal_247[23], 2);
				VEHICLE::SET_VEHICLE_LIGHT_MULTIPLIER(iLocal_247[23], 2f);
				if (!iLocal_302[9])
				{
					VEHICLE::START_VEHICLE_HORN(iLocal_247[23], 2000, MISC::GET_HASH_KEY("HELDDOWN"), 0);
					iLocal_302[9] = 1;
				}
			}
			else
			{
				VEHICLE::SET_VEHICLE_LIGHTS(iLocal_247[23], 1);
				VEHICLE::SET_VEHICLE_LIGHT_MULTIPLIER(iLocal_247[23], 1f);
			}
		}
		if (func_13(iLocal_250[28]))
		{
			if (fLocal_340 > 93500f && fLocal_340 < 95000f)
			{
				VEHICLE::SET_VEHICLE_LIGHTS(iLocal_250[28], 2);
				VEHICLE::SET_VEHICLE_LIGHT_MULTIPLIER(iLocal_250[28], 2f);
				if (!iLocal_302[10])
				{
					VEHICLE::START_VEHICLE_HORN(iLocal_250[28], 3500, MISC::GET_HASH_KEY("HELDDOWN"), 0);
					iLocal_302[10] = 1;
				}
			}
			else
			{
				VEHICLE::SET_VEHICLE_LIGHTS(iLocal_250[28], 1);
				VEHICLE::SET_VEHICLE_LIGHT_MULTIPLIER(iLocal_250[28], 1f);
			}
		}
		if (func_13(iLocal_250[29]))
		{
			if (!iLocal_302[11])
			{
				if (fLocal_340 > 104500f && fLocal_340 < 105000f)
				{
					VEHICLE::START_VEHICLE_HORN(iLocal_250[29], 2000, MISC::GET_HASH_KEY("HELDDOWN"), 0);
					iLocal_302[11] = 1;
				}
			}
		}
		if (func_13(iLocal_249[31]))
		{
			if (!VEHICLE::IS_VEHICLE_DOOR_FULLY_OPEN(iLocal_249[31], 2))
			{
				VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_249[31], 2, 0, 0);
			}
			if (!VEHICLE::IS_VEHICLE_DOOR_FULLY_OPEN(iLocal_249[31], 3))
			{
				VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_249[31], 3, 0, 0);
			}
			if (!VEHICLE::IS_VEHICLE_SIREN_ON(iLocal_249[31]))
			{
				VEHICLE::SET_VEHICLE_SIREN(iLocal_249[31], 1);
			}
		}
		if (func_13(iLocal_250[22]))
		{
			if (!VEHICLE::IS_VEHICLE_SIREN_ON(iLocal_250[22]))
			{
				VEHICLE::SET_VEHICLE_SIREN(iLocal_250[22], 1);
			}
		}
		if (func_13(iLocal_250[19]))
		{
			iVar0 = -1;
			iVar1 = -1;
			VEHICLE::GET_VEHICLE_LIGHTS_STATE(iLocal_250[19], &iVar0, &iVar1);
			if (iVar0 != 1)
			{
				VEHICLE::SET_VEHICLE_LIGHTS(iLocal_250[19], 2);
				VEHICLE::SET_VEHICLE_LIGHT_MULTIPLIER(iLocal_250[19], 2f);
			}
			if (iLocal_331 == -1)
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_250[19]))
				{
					iLocal_331 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_331, "FAKE_REVS_VEHICLE_02", iLocal_250[19], "NIGEL_02_SOUNDSET", 0, 0);
				}
			}
			else if (!AUDIO::HAS_SOUND_FINISHED(iLocal_331))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_250[19]))
				{
					AUDIO::STOP_SOUND(iLocal_331);
					AUDIO::RELEASE_SOUND_ID(iLocal_331);
					iLocal_331 = -1;
				}
			}
		}
		iLocal_328 = MISC::GET_GAME_TIMER();
	}
}

int func_388(int iParam0, int iParam1, int iParam2)//Position - 0x2E330
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		bVar0 = false;
		iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (iVar1 != PLAYER::PLAYER_PED_ID())
			{
				if (ENTITY::GET_ENTITY_MODEL(iVar1) != iParam1)
				{
					bVar0 = true;
				}
				else
				{
					return 1;
				}
			}
		}
		else
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			STREAMING::REQUEST_MODEL(iParam1);
			if (STREAMING::HAS_MODEL_LOADED(iParam1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, 1, 0);
					PED::DELETE_PED(&iVar1);
				}
				iVar2 = PED::CREATE_PED_INSIDE_VEHICLE(iParam0, iParam2, iParam1, -1, 0, 0);
				if (func_390(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar2, iLocal_240);
				}
				PED::SET_PED_RANDOM_COMPONENT_VARIATION(iVar2, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar2, 1);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iVar2, 1);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(iVar2, 0);
				PED::SET_PED_CONFIG_FLAG(iVar2, 32, 0);
				if (bLocal_150)
				{
					PED::SET_PED_FLEE_ATTRIBUTES(iVar2, 8192, 1);
					PED::SET_PED_FLEE_ATTRIBUTES(iVar2, 65536, 1);
					PED::SET_PED_FLEE_ATTRIBUTES(iVar2, 2, 0);
					VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(iParam0, 1);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam1);
				func_389(iVar2);
				return 1;
			}
		}
	}
	return 0;
}

void func_389(int iParam0)//Position - 0x2E42A
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
	}
}

int func_390(int iParam0)//Position - 0x2E441
{
	if (((((((iParam0 == joaat("police") || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("policeb")) || iParam0 == joaat("policet")) || iParam0 == joaat("polmav")) || iParam0 == joaat("pranger")) || iParam0 == joaat("sheriff"))
	{
		return 1;
	}
	return 0;
}

void func_391(int iParam0, float fParam1)//Position - 0x2E4BB
{
	float fVar0;
	struct<3> Var1;
	int iVar2;
	
	fVar0 = MISC::GET_FRAME_TIME();
	fVar0 = (fVar0 * 1000f);
	bLocal_148 = false;
	if (!bLocal_130)
	{
		if (bLocal_129)
		{
			func_412();
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				MISC::CLEAR_AREA(Var1, 1000f, 1, 0, 0, 0);
			}
			bLocal_130 = true;
		}
	}
	else if (!bLocal_129)
	{
		func_89();
		bLocal_130 = false;
	}
	if (bLocal_129)
	{
		fParam1 = 1f;
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	}
	if (!bLocal_123)
	{
		if (iLocal_118)
		{
			fLocal_175 = 0f;
		}
		else
		{
			fLocal_175 = 1f;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
			{
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					if (func_382(PLAYER::PLAYER_PED_ID(), iParam0))
					{
						iLocal_128 = 1;
					}
					else
					{
						iLocal_128 = 0;
					}
				}
				fLocal_172 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
				VEHICLE::SET_PLAYBACK_SPEED(iParam0, ((fParam1 * fLocal_173) * fLocal_175));
				if (bLocal_127)
				{
					func_411(iParam0, fLocal_172);
					func_410(iParam0, fLocal_182);
					if (fLocal_177 > 1000f)
					{
						if (iLocal_214 == 0)
						{
							func_409(iParam0, fLocal_182);
						}
						fVar0 = ((fLocal_172 + 4000f) + (SYSTEM::TO_FLOAT(iLocal_214) * 2000f));
						func_408(iParam0, fVar0, fLocal_176);
						iLocal_214++;
						if (iLocal_214 > 2)
						{
							fLocal_177 = 0f;
						}
					}
					else
					{
						iLocal_214 = 0;
						fLocal_177 = (fLocal_177 + (MISC::GET_FRAME_TIME() * 1000f));
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
		if (fLocal_172 == 0f || CAM::IS_SCREEN_FADED_OUT())
		{
			iVar2 = 1;
		}
		if (iVar2 && !bLocal_135)
		{
			if (!iLocal_117)
			{
				func_405(iParam0, ((fParam1 * fLocal_173) * fLocal_175), 0);
				if (!iLocal_138)
				{
				}
				iLocal_138 = 0;
			}
			if (bLocal_120)
			{
				func_404(iParam0);
			}
			if (!iLocal_117)
			{
				func_394(iParam0, ((fParam1 * fLocal_173) * fLocal_175), 0);
			}
		}
		if (iLocal_125)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					iLocal_252 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					Local_218 = { ENTITY::GET_ENTITY_COORDS(iLocal_252, 1) };
					ENTITY::GET_ENTITY_QUATERNION(iLocal_252, &fLocal_156, &fLocal_157, &fLocal_158, &fLocal_159);
				}
			}
			iLocal_125 = 0;
		}
		if (iLocal_124)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_252))
			{
				func_81(iLocal_253);
				iLocal_253 = iLocal_252;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_253, 0))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_253, Local_218, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_QUATERNION(iLocal_253, fLocal_156, fLocal_157, fLocal_158, fLocal_159);
			}
			fLocal_171 = fLocal_174;
			iLocal_117 = 1;
			iLocal_124 = 0;
		}
		if (iLocal_117)
		{
			while (!func_392(&iParam0, fLocal_171))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_118 = 1;
		}
		if (iLocal_131)
		{
			iLocal_131 = 0;
		}
	}
}

int func_392(int iParam0, float fParam1)//Position - 0x2E756
{
	if (!iLocal_132)
	{
		iLocal_117 = 1;
		func_76();
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*iParam0);
				VEHICLE::SET_VEHICLE_FIXED(*iParam0);
			}
			if (!iLocal_201 == -1)
			{
				while (!func_393(iParam0, iLocal_201, fParam1, 1, 0, 0, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
				if (!bLocal_122)
				{
					iLocal_118 = 1;
					fLocal_175 = 0f;
					iLocal_202 = 0;
					iLocal_204 = 0;
					iLocal_203 = 0;
					iLocal_198 = 0;
					iLocal_199 = 0;
					iLocal_200 = 0;
					iLocal_205 = 0;
					iLocal_206 = 0;
					iLocal_207 = 0;
				}
			}
		}
		iLocal_132 = 1;
	}
	else
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				VEHICLE::SET_PLAYBACK_SPEED(*iParam0, ((1f * fLocal_173) * fLocal_175));
				func_393(iParam0, iLocal_201, fParam1, 1, 0, 0, 0, 0);
			}
		}
		fLocal_172 = fParam1;
		iLocal_208 = 0;
		iLocal_211 = 0;
		fLocal_187 = 0f;
		fLocal_186 = 0f;
		func_394(*iParam0, ((1f * fLocal_173) * fLocal_175), 1);
		func_405(*iParam0, ((1f * fLocal_173) * fLocal_175), 1);
		func_404(*iParam0);
		if ((iLocal_205 == 0 && iLocal_206 == 0) && iLocal_207 == 0)
		{
			iLocal_118 = 0;
			iLocal_117 = 0;
			iLocal_132 = 0;
			return 1;
		}
	}
	return 0;
}

int func_393(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x2E888
{
	float fVar0;
	
	if (iParam1 > 0)
	{
		VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, &cLocal_231);
		if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam1, &cLocal_231))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, 0))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*uParam0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(*uParam0, 0);
					if (bParam4)
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*uParam0, iParam1, &cLocal_231, 1092616192, 786603);
					}
					else
					{
						if (iParam1 != iLocal_209 && iParam1 != iLocal_210)
						{
							if (bParam7)
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_231, 2 | 4, 0, 786603);
							}
							else if (bParam6)
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_231, 1 | 4, 0, 786603);
							}
							else
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_231, 1);
							}
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_231, 1);
						}
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*uParam0, fParam2);
						if (bParam5)
						{
							VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*uParam0, 1);
						}
						return 1;
					}
				}
				else if (VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(*uParam0) == VEHICLE::GET_VEHICLE_RECORDING_ID(iParam1, &cLocal_231))
				{
					fVar0 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(*uParam0);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*uParam0, (fParam2 - fVar0));
					if (!bParam3)
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*uParam0);
						VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, &cLocal_231);
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
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*uParam0, iParam1, &cLocal_231, 1092616192, 786603);
					}
					else if (iParam1 != iLocal_209 && iParam1 != iLocal_210)
					{
						if (bParam7)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_231, 2 | 4, 0, 786603);
						}
						else if (bParam6)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_231, 1 | 4, 0, 786603);
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_231, 1);
						}
					}
					else
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_231, 1);
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

void func_394(int iParam0, float fParam1, bool bParam2)//Position - 0x2EA6E
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
		iVar0 = iLocal_204;
		while (iVar0 < 70)
		{
			if (iLocal_195[iVar0] != 99)
			{
				if (iLocal_195[iVar0] == 0)
				{
					if (iLocal_194[iVar0] > 0)
					{
						if (!iLocal_117)
						{
							if (fLocal_172 > (fLocal_164[iVar0] - (7000f * fParam1)))
							{
								if (func_390(iLocal_243[iVar0]))
								{
									MISC::SET_BIT(&(iLocal_196[iVar0]), 0);
								}
								else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_243[iVar0]))
								{
									MISC::SET_BIT(&(iLocal_196[iVar0]), 2);
								}
								MISC::CLEAR_BIT(&(iLocal_196[iVar0]), 1);
								iLocal_195[iVar0]++;
								iLocal_206++;
							}
						}
						else
						{
							fVar6 = (fLocal_172 - fLocal_164[iVar0]);
							fVar6 = (fVar6 * fLocal_165[iVar0]);
							if (fVar6 >= 0f)
							{
								if (fVar6 < func_403(iLocal_194[iVar0]))
								{
									if (func_390(iLocal_243[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_196[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_243[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_196[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_196[iVar0]), 1);
									iLocal_195[iVar0]++;
									iLocal_206++;
								}
								else
								{
									iLocal_195[iVar0] = 99;
								}
							}
						}
					}
					else
					{
						iLocal_195[iVar0] = 99;
					}
				}
				else if (iLocal_195[iVar0] == 1)
				{
					bVar8 = false;
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_194[iVar0], &cLocal_231);
					if (MISC::IS_BIT_SET(iLocal_196[iVar0], 0))
					{
						STREAMING::REQUEST_MODEL(func_85());
						bVar8 = STREAMING::HAS_MODEL_LOADED(func_85());
					}
					else if (!bLocal_144 && ((!MISC::IS_BIT_SET(iLocal_196[iVar0], 2) && uVar10) || (MISC::IS_BIT_SET(iLocal_196[iVar0], 2) && uVar11)))
					{
						bVar8 = true;
					}
					else
					{
						STREAMING::REQUEST_MODEL(func_88());
						bVar8 = STREAMING::HAS_MODEL_LOADED(func_88());
					}
					if (bVar8)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_250[iVar0]))
						{
							STREAMING::REQUEST_MODEL(iLocal_243[iVar0]);
							if (STREAMING::HAS_MODEL_LOADED(iLocal_243[iVar0]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_194[iVar0], &cLocal_231))
							{
								if (fLocal_172 >= (fLocal_164[iVar0] - (fLocal_185 * fParam1)))
								{
									if ((iLocal_131 || bParam2) || (!bLocal_148 && !func_402(Local_217[iVar0 /*3*/], Var5, 5f, fLocal_183)))
									{
										if (bLocal_127)
										{
											func_401(Local_217[iVar0 /*3*/], Var5, fLocal_176);
										}
										iLocal_250[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_243[iVar0], Local_217[iVar0 /*3*/], 0f, 0, 0);
										if (iLocal_243[iVar0] == joaat("polmav"))
										{
											VEHICLE::SET_VEHICLE_LIVERY(iLocal_250[iVar0], 0);
										}
										if (iLocal_140 && !MISC::IS_BIT_SET(iLocal_196[iVar0], 0))
										{
											func_400(iLocal_250[iVar0]);
										}
										if (MISC::IS_BIT_SET(iLocal_196[iVar0], 3))
										{
											ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_250[iVar0], 1);
										}
										ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_250[iVar0], Local_217[iVar0 /*3*/], 0, 0, 1);
										ENTITY::SET_ENTITY_QUATERNION(iLocal_250[iVar0], fLocal_160[iVar0], fLocal_161[iVar0], fLocal_162[iVar0], fLocal_163[iVar0]);
										if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_243[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_243[iVar0]))
										{
											VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_250[iVar0]);
										}
										if (!MISC::IS_BIT_SET(iLocal_196[iVar0], 0))
										{
											VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_250[iVar0], 1, 1);
											if (CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 7)
											{
												VEHICLE::SET_VEHICLE_LIGHTS(iLocal_250[iVar0], 3);
											}
										}
										ENTITY::FREEZE_ENTITY_POSITION(iLocal_250[iVar0], 1);
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_243[iVar0]);
										iLocal_206 = (iLocal_206 - 1);
										iLocal_195[iVar0]++;
										bLocal_148 = true;
									}
								}
							}
						}
						else if (!ENTITY::IS_ENTITY_DEAD(iLocal_250[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_250[iVar0], 0))
						{
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_250[iVar0], Local_217[iVar0 /*3*/], 0, 0, 1);
							ENTITY::SET_ENTITY_QUATERNION(iLocal_250[iVar0], fLocal_160[iVar0], fLocal_161[iVar0], fLocal_162[iVar0], fLocal_163[iVar0]);
							if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_243[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_243[iVar0]))
							{
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_250[iVar0]);
							}
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_250[iVar0], 1);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_243[iVar0]);
							iLocal_206 = (iLocal_206 - 1);
							iLocal_195[iVar0]++;
						}
					}
				}
				else if (iLocal_195[iVar0] == 2)
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_194[iVar0], &cLocal_231);
					if (!MISC::IS_BIT_SET(iLocal_196[iVar0], 1))
					{
						bVar8 = false;
						if (MISC::IS_BIT_SET(iLocal_196[iVar0], 0))
						{
							STREAMING::REQUEST_MODEL(func_85());
							bVar8 = STREAMING::HAS_MODEL_LOADED(func_85());
							iVar13 = 2;
						}
						else if (!bLocal_144 && ((!MISC::IS_BIT_SET(iLocal_196[iVar0], 2) && uVar10) || (MISC::IS_BIT_SET(iLocal_196[iVar0], 2) && uVar11)))
						{
							bVar8 = true;
							iVar13 = 1;
						}
						else
						{
							STREAMING::REQUEST_MODEL(func_88());
							bVar8 = STREAMING::HAS_MODEL_LOADED(func_88());
							iVar13 = 0;
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_250[iVar0]))
						{
							if (!bLocal_148 && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_250[iVar0], -1))
							{
								if (bVar8)
								{
									if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_250[iVar0], 1), Var5) < 10000f || bParam2) || iLocal_131)
									{
										func_399(&(iLocal_250[iVar0]), iVar13, 1);
										MISC::SET_BIT(&(iLocal_196[iVar0]), 1);
									}
								}
							}
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_250[iVar0], 0))
					{
						if (fLocal_172 >= fLocal_164[iVar0])
						{
							if (11 > iLocal_199)
							{
								fVar6 = (fLocal_172 - fLocal_164[iVar0]);
								fVar6 = (fVar6 * fLocal_165[iVar0]);
								if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_194[iVar0], &cLocal_231))
								{
									if (fVar6 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_194[iVar0], &cLocal_231))
									{
										Var3 = { ENTITY::GET_ENTITY_COORDS(iLocal_250[iVar0], 1) };
										Var4 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_194[iVar0], fVar6, &cLocal_231) };
										if (((!func_402(Var3, Var5, 5f, fLocal_183) && func_402(Var4, Var5, 5f, fLocal_183)) && !iLocal_131) && !bParam2)
										{
											if (!MISC::IS_BIT_SET(iLocal_196[iVar0], 1))
											{
												func_399(&(iLocal_250[iVar0]), iVar13, 1);
											}
											iLocal_199++;
											iLocal_195[iVar0]++;
										}
										else if (((!bLocal_148 || MISC::IS_BIT_SET(iLocal_196[iVar0], 1)) || iLocal_131) || bParam2)
										{
											if (func_393(&(iLocal_250[iVar0]), iLocal_194[iVar0], fVar6, 1, 0, 0, bLocal_146, bLocal_145))
											{
												VEHICLE::SET_PLAYBACK_SPEED(iLocal_250[iVar0], (fParam1 * fLocal_165[iVar0]));
												if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_250[iVar0], 0))
												{
													if (MISC::IS_BIT_SET(iLocal_196[iVar0], 0))
													{
														VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_250[iVar0], 1, 1);
														VEHICLE::SET_VEHICLE_SIREN(iLocal_250[iVar0], 1);
														VEHICLE::SET_VEHICLE_LIGHTS(iLocal_250[iVar0], 2);
														if (!VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_243[iVar0]))
														{
															AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_250[iVar0], 1);
														}
													}
												}
												if (!MISC::IS_BIT_SET(iLocal_196[iVar0], 1))
												{
													func_399(&(iLocal_250[iVar0]), iVar13, 1);
												}
												iLocal_199++;
												iLocal_195[iVar0]++;
											}
										}
									}
									else
									{
										if (!MISC::IS_BIT_SET(iLocal_196[iVar0], 1))
										{
											func_399(&(iLocal_250[iVar0]), iVar13, 1);
										}
										iLocal_199++;
										iLocal_195[iVar0]++;
									}
								}
							}
							else
							{
								if (!MISC::IS_BIT_SET(iLocal_196[iVar0], 1))
								{
									func_399(&(iLocal_250[iVar0]), iVar13, 1);
								}
								iLocal_199++;
								iLocal_195[iVar0]++;
							}
						}
					}
					else
					{
						if (!MISC::IS_BIT_SET(iLocal_196[iVar0], 1))
						{
							func_399(&(iLocal_250[iVar0]), iVar13, 1);
						}
						iLocal_199++;
						iLocal_195[iVar0]++;
					}
				}
				else if (iLocal_195[iVar0] == 3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_250[iVar0], 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_250[iVar0]))
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_250[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								if (bVar9)
								{
									if (((!bLocal_121 && !iLocal_118) && !bLocal_137) && (((!bLocal_146 && !bLocal_145) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_250[iVar0])) || func_398(iLocal_250[iVar0])))
									{
										if (ENTITY::DOES_ENTITY_EXIST(iVar2))
										{
											bVar8 = false;
											if (bLocal_139)
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
												else if (MISC::ABSF((fVar7 - ENTITY::GET_ENTITY_SPEED(iLocal_250[iVar0]))) > 15f)
												{
													bVar8 = true;
												}
												else if (!func_397(iLocal_250[iVar0], iVar2, 45f))
												{
													bVar8 = true;
												}
												else if (func_396(iVar2, iLocal_250[iVar0], 0))
												{
													bVar8 = true;
												}
											}
											if (bVar8)
											{
												func_395(iLocal_250[iVar0]);
												iLocal_195[iVar0]++;
											}
										}
									}
									else
									{
										VEHICLE::SET_PLAYBACK_SPEED(iLocal_250[iVar0], (fParam1 * fLocal_165[iVar0]));
									}
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_250[iVar0]);
							}
						}
						else
						{
							iLocal_195[iVar0]++;
						}
					}
					else
					{
						iLocal_195[iVar0]++;
					}
				}
				else if (iLocal_195[iVar0] == 4)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_250[iVar0], 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_250[iVar0]))
						{
							iLocal_195[iVar0]++;
						}
						else
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_250[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_250[iVar0], (fParam1 * fLocal_165[iVar0]));
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_250[iVar0]);
							}
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_194[iVar0], &cLocal_231))
							{
								if (fLocal_172 > (fLocal_164[iVar0] + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_194[iVar0], &cLocal_231)))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_250[iVar0]);
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_250[iVar0]);
							}
						}
					}
					else
					{
						iLocal_195[iVar0]++;
					}
				}
				else if (iLocal_195[iVar0] == 5)
				{
					if (!iLocal_250[iVar0] == iLocal_254)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_250[iVar0], 0))
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_250[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								iVar14 = TASK::GET_SCRIPT_TASK_STATUS(iVar1, 242628503);
								if (iVar14 == 7)
								{
									fVar7 = ENTITY::GET_ENTITY_SPEED(iLocal_250[iVar0]);
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
						if (!bLocal_129 && !bLocal_142)
						{
							if (iLocal_194[iVar0] > 0)
							{
								VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_194[iVar0], &cLocal_231);
							}
						}
						if (!bLocal_119)
						{
							if (!bLocal_147)
							{
								func_81(iLocal_250[iVar0]);
							}
						}
						else if (ENTITY::DOES_ENTITY_EXIST(iLocal_250[iVar0]))
						{
							VEHICLE::DELETE_VEHICLE(&(iLocal_250[iVar0]));
						}
					}
					iLocal_199 = (iLocal_199 - 1);
					iLocal_195[iVar0] = 99;
				}
				if (!bVar12)
				{
					iLocal_204 = iVar0;
					bVar12 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_80();
	}
}

void func_395(int iParam0)//Position - 0x2F66C
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		func_82(iParam0);
		VEHICLE::SET_PLAYBACK_TO_USE_AI(iParam0, 786603);
	}
}

int func_396(int iParam0, int iParam1, bool bParam2)//Position - 0x2F68E
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
	if (func_383(Var3, Var4) < 0f)
	{
		return 1;
	}
	return 0;
}

int func_397(int iParam0, int iParam1, float fParam2)//Position - 0x2F72B
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
	fVar2 = func_383(Var0, Var1);
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

int func_398(var uParam0)//Position - 0x2F7AE
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bLocal_143)
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

int func_399(var uParam0, int iParam1, bool bParam2)//Position - 0x2F80B
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(*uParam0, -1))
		{
			if (iParam1 == 2)
			{
				iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 6, func_85(), -1, 0, 0);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, iLocal_240);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_85());
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
				iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 4, func_88(), -1, 0, 0);
				if (bLocal_149)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_88());
				}
			}
			if (bParam2)
			{
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iVar0, 1);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(iVar0, 0);
				PED::SET_PED_CONFIG_FLAG(iVar0, 32, 0);
			}
			if (bLocal_150)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 8192, 1);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 65536, 1);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, 0);
				VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(*uParam0, 1);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, 1);
			func_389(iVar0);
			bLocal_148 = true;
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_400(int iParam0)//Position - 0x2F900
{
	int iVar0;
	int iVar1;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 12);
	if (iLocal_245 >= -1 && iLocal_246 >= -1)
	{
		while (iVar0 == iLocal_245 || iVar0 == iLocal_246)
		{
			iVar0++;
		}
	}
	else if (iLocal_245 >= -1)
	{
		if (iVar0 == iLocal_245)
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

void func_401(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0x2FA79
{
	bool bVar0;
	int iVar1;
	
	bVar0 = true;
	if (!bLocal_130)
	{
		if (!func_402(Param0, Param1, fParam2, 200f))
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

int func_402(struct<3> Param0, struct<3> Param1, float fParam2, float fParam3)//Position - 0x2FAE9
{
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		if (!bLocal_130)
		{
			if (!iLocal_117)
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

float func_403(int iParam0)//Position - 0x2FB30
{
	var uVar0;
	
	VEHICLE::REQUEST_VEHICLE_RECORDING(iParam0, &cLocal_231);
	while (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam0, &cLocal_231))
	{
		SYSTEM::WAIT(0);
	}
	uVar0 = VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iParam0, &cLocal_231);
	VEHICLE::REMOVE_VEHICLE_RECORDING(iParam0, &cLocal_231);
	return uVar0;
}

void func_404(int iParam0)//Position - 0x2FB6C
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
		iVar0 = iLocal_203;
		while (iVar0 < 70)
		{
			switch (iLocal_197[iVar0])
			{
				case 0:
					if (!iLocal_242[iVar0] == 0)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iParam0, Local_216[iVar0 /*3*/], fLocal_170, fLocal_170, fLocal_170, 0, 1, 0))
						{
							iLocal_205++;
							iLocal_197[iVar0]++;
						}
					}
					else
					{
						iLocal_197[iVar0] = 99;
					}
					break;
				
				case 1:
					if (10 > iLocal_200)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_249[iVar0]))
						{
							STREAMING::REQUEST_MODEL(iLocal_242[iVar0]);
							if (STREAMING::HAS_MODEL_LOADED(iLocal_242[iVar0]))
							{
								if ((iLocal_117 || iLocal_131) || (!bLocal_148 && !func_402(Local_216[iVar0 /*3*/], Var1, 5f, fLocal_183)))
								{
									if (bLocal_127)
									{
										func_401(Local_216[iVar0 /*3*/], Var1, fLocal_176);
									}
									iLocal_249[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_242[iVar0], Local_216[iVar0 /*3*/], 0f, 0, 0);
									if (iLocal_242[iVar0] == joaat("polmav"))
									{
										VEHICLE::SET_VEHICLE_LIVERY(iLocal_249[iVar0], 0);
									}
									ENTITY::SET_ENTITY_QUATERNION(iLocal_249[iVar0], fLocal_166[iVar0], fLocal_167[iVar0], fLocal_168[iVar0], fLocal_169[iVar0]);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_242[iVar0]);
									if (VEHICLE::IS_VEHICLE_MODEL(iLocal_249[iVar0], func_86()))
									{
										VEHICLE::SET_VEHICLE_SIREN(iLocal_249[iVar0], 1);
										if (!VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_242[iVar0]))
										{
											AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_249[iVar0], 1);
										}
									}
									if (VEHICLE::IS_VEHICLE_MODEL(iLocal_249[iVar0], func_87()))
									{
										VEHICLE::SET_VEHICLE_COLOURS(iLocal_249[iVar0], 0, 0);
									}
									ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_249[iVar0], 1);
									iLocal_205 = (iLocal_205 - 1);
									iLocal_200++;
									iLocal_197[iVar0]++;
									bLocal_148 = true;
								}
							}
						}
						else
						{
							iLocal_205 = (iLocal_205 - 1);
							iLocal_200++;
							iLocal_197[iVar0]++;
						}
					}
					break;
				
				case 2:
					if (!bVar3)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_249[iVar0], 0))
						{
							Var2 = { ENTITY::GET_ENTITY_COORDS(iLocal_249[iVar0], 1) };
						}
						if (fLocal_184 == 0f || SYSTEM::VDIST2(Var1, Var2) < (fLocal_184 * fLocal_184))
						{
							if (!func_396(iLocal_249[iVar0], iParam0, 0))
							{
								if (!bLocal_119)
								{
									func_81(iLocal_249[iVar0]);
								}
								else
								{
									VEHICLE::DELETE_VEHICLE(&(iLocal_249[iVar0]));
								}
								iLocal_200 = (iLocal_200 - 1);
								iLocal_197[iVar0] = 99;
								bVar3 = true;
							}
						}
					}
					break;
			}
			if (iLocal_197[iVar0] != 99)
			{
				if (!bVar4)
				{
					iLocal_203 = iVar0;
					bVar4 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_83();
	}
}

void func_405(int iParam0, float fParam1, int iParam2)//Position - 0x2FE63
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
			fLocal_172 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
		}
		iVar16 = -1;
		bVar17 = false;
		bVar18 = false;
		iVar0 = iLocal_202;
		while (iVar0 < 85 && !bVar17)
		{
			if (iLocal_192[iVar0] != 99)
			{
				if (iLocal_192[iVar0] == 0)
				{
					if (iLocal_191[iVar0] > 0 && iLocal_241[iVar0] != 0)
					{
						if (!iLocal_117)
						{
							if (fLocal_172 < (fLocal_155[iVar0] + 20000f))
							{
								if (fLocal_172 >= (fLocal_155[iVar0] - (7000f * fParam1)))
								{
									if (func_390(iLocal_241[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_193[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_241[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_193[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_193[iVar0]), 1);
									iLocal_207++;
									iLocal_192[iVar0]++;
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
								func_407(iVar0, 1090519040);
							}
						}
						else
						{
							fVar9 = (fLocal_172 - fLocal_155[iVar0]);
							if (fVar9 >= 0f)
							{
								if (fVar9 < func_403(iLocal_191[iVar0]))
								{
									if (func_390(iLocal_241[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_193[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_241[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_193[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_193[iVar0]), 1);
									iLocal_207++;
									iLocal_192[iVar0]++;
								}
								else
								{
									func_407(iVar0, 1090519040);
								}
							}
						}
					}
					else
					{
						func_407(iVar0, 1090519040);
					}
				}
				else if (iLocal_192[iVar0] == 1)
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_191[iVar0], &cLocal_231);
					bVar11 = false;
					if (MISC::IS_BIT_SET(iLocal_193[iVar0], 0))
					{
						STREAMING::REQUEST_MODEL(func_85());
						if (STREAMING::HAS_MODEL_LOADED(func_85()))
						{
							bVar11 = true;
						}
					}
					else if (!bLocal_144 && ((!MISC::IS_BIT_SET(iLocal_193[iVar0], 2) && uVar13) || (MISC::IS_BIT_SET(iLocal_193[iVar0], 2) && uVar14)))
					{
						bVar11 = true;
					}
					else
					{
						STREAMING::REQUEST_MODEL(func_88());
						bVar11 = STREAMING::HAS_MODEL_LOADED(func_88());
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_247[iVar0]))
					{
						STREAMING::REQUEST_MODEL(iLocal_241[iVar0]);
						if ((STREAMING::HAS_MODEL_LOADED(iLocal_241[iVar0]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_191[iVar0], &cLocal_231)) && bVar11)
						{
							if (fLocal_172 >= (fLocal_155[iVar0] - (fLocal_185 * fParam1)))
							{
								if ((iLocal_131 || iParam2) || (!bLocal_148 && !func_402(Local_215[iVar0 /*3*/], Var8, 5f, fLocal_183)))
								{
									if (bLocal_127)
									{
										func_401(Local_215[iVar0 /*3*/], Var8, fLocal_176);
									}
									iLocal_247[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_241[iVar0], Local_215[iVar0 /*3*/], 0f, 0, 0);
									if (iLocal_241[iVar0] == joaat("polmav"))
									{
										VEHICLE::SET_VEHICLE_LIVERY(iLocal_247[iVar0], 0);
									}
									if (iLocal_140 && !MISC::IS_BIT_SET(iLocal_193[iVar0], 0))
									{
										func_400(iLocal_247[iVar0]);
									}
									ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_247[iVar0], Local_215[iVar0 /*3*/], 0, 0, 1);
									ENTITY::SET_ENTITY_QUATERNION(iLocal_247[iVar0], fLocal_151[iVar0], fLocal_152[iVar0], fLocal_153[iVar0], fLocal_154[iVar0]);
									if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_241[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_241[iVar0]))
									{
										VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_247[iVar0]);
									}
									if (MISC::IS_BIT_SET(iLocal_193[iVar0], 3))
									{
										ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_247[iVar0], 1);
									}
									if (!MISC::IS_BIT_SET(iLocal_193[iVar0], 0))
									{
										VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_247[iVar0], 1, 1);
										if (CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 7)
										{
											VEHICLE::SET_VEHICLE_LIGHTS(iLocal_247[iVar0], 3);
										}
									}
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_247[iVar0], 1);
									ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_247[iVar0], 1);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_241[iVar0]);
									iLocal_207 = (iLocal_207 - 1);
									iLocal_192[iVar0]++;
									bLocal_148 = true;
								}
								else if (fLocal_172 > fLocal_155[iVar0])
								{
									iLocal_207 = (iLocal_207 - 1);
									func_407(iVar0, 1090519040);
								}
							}
						}
					}
				}
				else if (iLocal_192[iVar0] == 2)
				{
					bVar11 = false;
					if (((iVar3 < 8 && (iVar0 > iLocal_213 || iLocal_213 == 0)) || iLocal_131) || iParam2)
					{
						if (!MISC::IS_BIT_SET(iLocal_193[iVar0], 1))
						{
							if (MISC::IS_BIT_SET(iLocal_193[iVar0], 0))
							{
								STREAMING::REQUEST_MODEL(func_85());
								bVar11 = STREAMING::HAS_MODEL_LOADED(func_85());
								iVar15 = 2;
							}
							else if (!bLocal_144 && ((!MISC::IS_BIT_SET(iLocal_193[iVar0], 2) && uVar13) || (MISC::IS_BIT_SET(iLocal_193[iVar0], 2) && uVar14)))
							{
								bVar11 = true;
								iVar15 = 1;
							}
							else
							{
								STREAMING::REQUEST_MODEL(func_88());
								bVar11 = STREAMING::HAS_MODEL_LOADED(func_88());
								iVar15 = 0;
							}
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_247[iVar0]))
							{
								if (!bLocal_148 && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_247[iVar0], -1))
								{
									if (bVar11)
									{
										if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_247[iVar0], 1), Var8) < 10000f || iParam2) || iLocal_131)
										{
											func_399(&(iLocal_247[iVar0]), iVar15, 0);
											MISC::SET_BIT(&(iLocal_193[iVar0]), 1);
										}
									}
								}
							}
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_247[iVar0], 0))
						{
							VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_191[iVar0], &cLocal_231);
							if (fLocal_172 >= fLocal_155[iVar0])
							{
								if (15 > iLocal_198)
								{
									fVar9 = (fLocal_172 - fLocal_155[iVar0]);
									if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_191[iVar0], &cLocal_231))
									{
										if (fVar9 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_191[iVar0], &cLocal_231))
										{
											Var6 = { ENTITY::GET_ENTITY_COORDS(iLocal_247[iVar0], 1) };
											Var7 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_191[iVar0], fVar9, &cLocal_231) };
											if (!func_402(Var6, Var8, 5f, fLocal_183) && func_402(Var7, Var8, 5f, fLocal_183))
											{
												if (!MISC::IS_BIT_SET(iLocal_193[iVar0], 1))
												{
													func_399(&(iLocal_247[iVar0]), iVar15, 0);
												}
												func_407(iVar0, 1090519040);
											}
											else if (((!bLocal_148 || MISC::IS_BIT_SET(iLocal_193[iVar0], 1)) || iLocal_131) || iParam2)
											{
												if (func_393(&(iLocal_247[iVar0]), iLocal_191[iVar0], fVar9, 1, 0, 0, 1, bLocal_145))
												{
													if (!MISC::IS_BIT_SET(iLocal_193[iVar0], 1))
													{
														func_399(&(iLocal_247[iVar0]), iVar15, 0);
													}
													ENTITY::SET_ENTITY_COLLISION(iLocal_247[iVar0], 1, 0);
													VEHICLE::SET_PLAYBACK_SPEED(iLocal_247[iVar0], fParam1);
													iLocal_198++;
													iLocal_192[iVar0]++;
												}
											}
										}
										else
										{
											if (!MISC::IS_BIT_SET(iLocal_193[iVar0], 1))
											{
												func_399(&(iLocal_247[iVar0]), iVar15, 0);
											}
											func_407(iVar0, 1090519040);
										}
									}
									else if (fVar9 > VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_191[iVar0], &cLocal_231))
									{
										if (!MISC::IS_BIT_SET(iLocal_193[iVar0], 1))
										{
											func_399(&(iLocal_247[iVar0]), iVar15, 0);
										}
										func_407(iVar0, 1090519040);
									}
								}
								else
								{
									if (!MISC::IS_BIT_SET(iLocal_193[iVar0], 1))
									{
										func_399(&(iLocal_247[iVar0]), iVar15, 0);
									}
									func_407(iVar0, 1090519040);
								}
							}
							else if (iLocal_128 && !bLocal_136)
							{
								if (!MISC::IS_BIT_SET(iLocal_193[iVar0], 1))
								{
									func_399(&(iLocal_247[iVar0]), iVar15, 0);
								}
								func_407(iVar0, 1090519040);
							}
						}
						else
						{
							if (!MISC::IS_BIT_SET(iLocal_193[iVar0], 1))
							{
								func_399(&(iLocal_247[iVar0]), iVar15, 0);
							}
							func_407(iVar0, 1090519040);
						}
						iVar3++;
						iLocal_213 = iVar0;
					}
				}
				else if (iLocal_192[iVar0] == 3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_247[iVar0], 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_247[iVar0]))
						{
							iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_247[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar4))
							{
								if (bVar12)
								{
									bVar18 = false;
									if (!bLocal_126)
									{
										if ((!bLocal_121 && !iLocal_118) && func_398(iLocal_247[iVar0]))
										{
											if (iVar2 < 3 && (iVar0 > iLocal_212 || iLocal_212 == 0))
											{
												if (!ENTITY::IS_ENTITY_DEAD(iVar5))
												{
													bVar11 = false;
													if (!func_406(iLocal_247[iVar0], iVar5) || func_396(iVar5, iLocal_247[iVar0], 0))
													{
														bVar18 = true;
													}
												}
												iLocal_212 = iVar0;
												iVar2++;
											}
										}
										else if (((!bLocal_141 && !MISC::IS_BIT_SET(iLocal_193[iVar0], 4)) && iVar2 < 3) && (iVar0 > iLocal_212 || iLocal_212 == 0))
										{
											Var19 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0, ENTITY::GET_ENTITY_COORDS(iLocal_247[iVar0], 1)) };
											if (Var19.f_1 < 0f)
											{
												if (MISC::ABSF(Var19.f_1) > MISC::ABSF(Var19.x))
												{
													bVar18 = true;
												}
											}
											iVar2++;
											iLocal_212 = iVar0;
										}
									}
									if (bVar18)
									{
										func_395(iLocal_247[iVar0]);
										iLocal_192[iVar0]++;
									}
									else
									{
										VEHICLE::SET_PLAYBACK_SPEED(iLocal_247[iVar0], fParam1);
									}
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_247[iVar0]);
							}
						}
						else
						{
							iLocal_192[iVar0]++;
						}
					}
					else
					{
						iLocal_192[iVar0]++;
					}
				}
				else if (iLocal_192[iVar0] == 4)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_247[iVar0], 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_247[iVar0]))
						{
							iLocal_192[iVar0]++;
						}
						else
						{
							iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_247[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar4))
							{
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_247[iVar0], fParam1);
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_247[iVar0]);
							}
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_191[iVar0], &cLocal_231))
							{
								if (fLocal_172 > (fLocal_155[iVar0] + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_191[iVar0], &cLocal_231)))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_247[iVar0]);
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_247[iVar0]);
							}
						}
					}
					else
					{
						iLocal_192[iVar0]++;
					}
				}
				else if (iLocal_192[iVar0] == 5)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_247[iVar0]))
					{
						fVar10 = ENTITY::GET_ENTITY_SPEED(iLocal_247[iVar0]);
					}
					iLocal_198 = (iLocal_198 - 1);
					func_407(iVar0, fVar10);
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
			iLocal_202 = iVar16;
		}
		if (iVar2 < 3)
		{
			iLocal_212 = 0;
		}
		if (iVar3 < 8)
		{
			iLocal_213 = 0;
		}
	}
	else
	{
		func_84();
	}
}

int func_406(int iParam0, int iParam1)//Position - 0x309CA
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
	fVar2 = func_383(Var0, Var1);
	if (fVar2 < 0f)
	{
		return 0;
	}
	return 1;
}

void func_407(int iParam0, float fParam1)//Position - 0x30A2E
{
	int iVar0;
	
	if (!iLocal_241[iParam0] == 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_241[iParam0]);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_247[iParam0]))
	{
		ENTITY::SET_ENTITY_COLLISION(iLocal_247[iParam0], 1, 0);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_247[iParam0], 0);
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_247[iParam0], -1);
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
			TASK::TASK_VEHICLE_MISSION(iVar0, iLocal_247[iParam0], 0, 1, fParam1, 786603, 5f, 5f, 1);
			PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 8192, 1);
			if (bLocal_150)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 65536, 1);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, 0);
			}
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 6, 0);
			TASK::SET_DRIVE_TASK_CRUISE_SPEED(iVar0, fParam1);
		}
	}
	if (!bLocal_119)
	{
		if (!bLocal_147)
		{
			func_389(iVar0);
			func_81(iLocal_247[iParam0]);
		}
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			PED::DELETE_PED(&iVar0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_247[iParam0]))
		{
			VEHICLE::DELETE_VEHICLE(&(iLocal_247[iParam0]));
		}
	}
	if (!bLocal_129 && !bLocal_142)
	{
		if (iLocal_191[iParam0] > 0)
		{
			VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_191[iParam0], &cLocal_231);
		}
	}
	iLocal_192[iParam0] = 99;
}

void func_408(int iParam0, float fParam1, float fParam2)//Position - 0x30B87
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
			func_401(Var1, Var4, fVar5);
		}
	}
}

void func_409(int iParam0, float fParam1)//Position - 0x30C0A
{
	if (!bLocal_130)
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

void func_410(int iParam0, float fParam1)//Position - 0x30C57
{
	if (!bLocal_130)
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

void func_411(int iParam0, float fParam1)//Position - 0x30CA4
{
	var uVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
	{
		fVar1 = (fLocal_186 + 2000f);
		fVar2 = (fLocal_187 + 2000f);
		bVar4 = false;
		if (fVar1 < (fParam1 + 25000f))
		{
			uVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			if (fVar1 <= VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(uVar0))
			{
				if (iLocal_208 == 0)
				{
					Local_227 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(uVar0, fLocal_186) };
					iLocal_208++;
				}
				else if (iLocal_208 == 1)
				{
					Local_228 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(uVar0, fVar1) };
					iLocal_208++;
				}
				else if (!bLocal_148)
				{
					if (Local_227.x > Local_228.x)
					{
						fVar3 = Local_227.x;
						Local_227.x = Local_228.x;
						Local_228.x = fVar3;
					}
					if (Local_227.f_1 > Local_228.f_1)
					{
						fVar3 = Local_227.f_1;
						Local_227.f_1 = Local_228.f_1;
						Local_228.f_1 = fVar3;
					}
					if (Local_227.f_2 > Local_228.f_2)
					{
						fVar3 = Local_227.f_2;
						Local_227.f_2 = Local_228.f_2;
						Local_228.f_2 = fVar3;
					}
					Local_227 = { Local_227 - Vector(fLocal_190, fLocal_190, fLocal_190) };
					Local_228 = { Local_228 + Vector(fLocal_190, fLocal_190, fLocal_190) };
					PATHFIND::SET_ROADS_IN_AREA(Local_227, Local_228, 0, 0);
					fLocal_186 = fVar1;
					iLocal_208 = 0;
				}
			}
		}
		if (fVar2 < (fParam1 - 8000f))
		{
			uVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			if (iLocal_211 == 0)
			{
				Local_229 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(uVar0, fLocal_187) };
				iLocal_211++;
			}
			else if (iLocal_211 == 1)
			{
				Local_230 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(uVar0, fVar2) };
				iLocal_211++;
			}
			else if (!bLocal_148 && !bVar4)
			{
				if (Local_229.x > Local_230.x)
				{
					fVar3 = Local_229.x;
					Local_229.x = Local_230.x;
					Local_230.x = fVar3;
				}
				if (Local_229.f_1 > Local_230.f_1)
				{
					fVar3 = Local_229.f_1;
					Local_229.f_1 = Local_230.f_1;
					Local_230.f_1 = fVar3;
				}
				if (Local_229.f_2 > Local_230.f_2)
				{
					fVar3 = Local_229.f_2;
					Local_229.f_2 = Local_230.f_2;
					Local_230.f_2 = fVar3;
				}
				Local_229 = { Local_229 - Vector(fLocal_190, fLocal_190, fLocal_190) };
				Local_230 = { Local_230 + Vector(fLocal_190, fLocal_190, fLocal_190) };
				PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Local_229, Local_230, 1);
				fLocal_187 = fVar2;
				iLocal_211 = 0;
			}
		}
	}
}

void func_412()//Position - 0x30EF1
{
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-9000f, -9000f, -1000f, 9000f, 9000f, 1500f, 0, 1);
	VEHICLE::SET_NUMBER_OF_PARKED_VEHICLES(0);
	VEHICLE::SET_GARBAGE_TRUCKS(0);
	VEHICLE::SET_ALL_LOW_PRIORITY_VEHICLE_GENERATORS_ACTIVE(0);
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
	STREAMING::SET_PED_POPULATION_BUDGET(3);
}

void func_413()//Position - 0x30F3B
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if ((MISC::GET_GAME_TIMER() - iLocal_322) > 3)
	{
		iVar0 = 0;
		iVar1 = iLocal_250;
		iVar2 = iLocal_247;
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (iLocal_194[iVar0] > 0)
			{
				if (fLocal_340 > (fLocal_164[iVar0] - 5000f))
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_194[iVar0], sLocal_358);
				}
				else if (fLocal_340 > (fLocal_164[iVar0] + 3000f))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_250[iVar0]))
					{
						VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_194[iVar0], sLocal_358);
					}
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < iVar2)
		{
			if (iLocal_191[iVar0] > 0)
			{
				if (fLocal_340 > (fLocal_155[iVar0] - 5000f))
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_191[iVar0], sLocal_358);
				}
				else if (fLocal_340 > (fLocal_155[iVar0] + 3000f))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_247[iVar0]))
					{
						VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_191[iVar0], sLocal_358);
					}
				}
			}
			iVar0++;
		}
		iLocal_322 = MISC::GET_GAME_TIMER();
	}
}

void func_414()//Position - 0x3104B
{
	if (iLocal_337 == 0)
	{
		func_264(75, 1, 0, 1, 0);
		func_264(76, 0, 0, 1, 0);
		iLocal_336 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(307.3065f, -589.9595f, 43.302f, "v_hospital");
		iLocal_337 = 1;
	}
	else if (iLocal_337 == 1)
	{
		if (!func_45())
		{
			if (INTERIOR::IS_VALID_INTERIOR(iLocal_336))
			{
				if (!INTERIOR::IS_INTERIOR_READY(iLocal_336))
				{
					INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_336);
				}
				else
				{
					STREAMING::SET_INTERIOR_ACTIVE(iLocal_336, 1);
					iLocal_337 = 2;
				}
			}
			else
			{
				iLocal_336 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(307.3065f, -589.9595f, 43.302f, "v_hospital");
			}
		}
	}
	else if (iLocal_337 == 2)
	{
		if (INTERIOR::IS_VALID_INTERIOR(iLocal_336))
		{
			if (INTERIOR::IS_INTERIOR_READY(iLocal_336))
			{
				func_264(181, 0, 0, 1, 0);
				iLocal_337 = 3;
			}
			else
			{
				iLocal_337 = 1;
			}
		}
		else
		{
			iLocal_337 = 1;
		}
	}
	else if (iLocal_337 == 3)
	{
		if (!func_45())
		{
			if (INTERIOR::IS_VALID_INTERIOR(iLocal_336))
			{
				if (INTERIOR::IS_INTERIOR_READY(iLocal_336))
				{
					INTERIOR::REFRESH_INTERIOR(iLocal_336);
					iLocal_337 = 4;
				}
				else
				{
					INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_336);
				}
			}
			else
			{
				iLocal_336 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(307.3065f, -589.9595f, 43.302f, "v_hospital");
			}
		}
	}
	else if (iLocal_337 == 4)
	{
		if (INTERIOR::IS_VALID_INTERIOR(iLocal_336))
		{
			if (!INTERIOR::IS_INTERIOR_READY(iLocal_336))
			{
				INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_336);
			}
		}
		else
		{
			iLocal_336 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(307.3065f, -589.9595f, 43.302f, "v_hospital");
		}
	}
}

void func_415(float fParam0, struct<3> Param1)//Position - 0x311BB
{
	float fVar0;
	
	if (func_13(Local_539[0 /*2*/]))
	{
		VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(Local_539[0 /*2*/], 1, 1);
		VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(Local_539[0 /*2*/], 0, 1);
		if (fLocal_340 > 10000f)
		{
			fVar0 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_539[0 /*2*/], 1), Param1);
			if (fVar0 > 14400f)
			{
				func_48(&(Local_539[0 /*2*/]), 0);
			}
		}
	}
	if (func_13(Local_539[1 /*2*/]))
	{
		if (fLocal_340 > 10000f)
		{
			fVar0 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_539[1 /*2*/], 1), Param1);
			if (fVar0 > 14400f)
			{
				func_48(&(Local_539[1 /*2*/]), 0);
			}
		}
	}
	if (func_13(Local_539[2 /*2*/]))
	{
		if (Local_536.f_1 == 0)
		{
			STREAMING::REQUEST_MODEL(iLocal_344);
			if (STREAMING::HAS_MODEL_LOADED(iLocal_344))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_536))
				{
					Local_536 = PED::CREATE_PED_INSIDE_VEHICLE(Local_539[2 /*2*/], 26, iLocal_344, -1, 1, 1);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_344);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_536, 1);
					Local_536.f_1 = 1;
				}
			}
			if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_539[2 /*2*/]))
			{
				ENTITY::SET_ENTITY_QUATERNION(Local_539[2 /*2*/], 0.0269f, 0.0079f, -0.4791f, 0.8773f);
			}
		}
		if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_539[2 /*2*/]))
		{
			if (!iLocal_310)
			{
				if (fLocal_340 >= 200f)
				{
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_539[2 /*2*/], 2, sLocal_358, 1);
					VEHICLE::SET_PLAYBACK_SPEED(Local_539[2 /*2*/], fParam0);
					iLocal_310 = 1;
				}
			}
		}
		else
		{
			VEHICLE::SET_PLAYBACK_SPEED(Local_539[2 /*2*/], fParam0);
			if (!iLocal_296)
			{
				if (fLocal_340 > 3500f && fLocal_340 < 4500f)
				{
					VEHICLE::START_VEHICLE_HORN(Local_539[2 /*2*/], 2000, MISC::GET_HASH_KEY("HELDDOWN"), 0);
					iLocal_296 = 1;
				}
			}
		}
		if (fLocal_340 > 10000f)
		{
			fVar0 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_539[2 /*2*/], 1), Param1);
			if (fVar0 > 14400f)
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_539[2 /*2*/]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_539[2 /*2*/]);
				}
				VEHICLE::REMOVE_VEHICLE_RECORDING(2, sLocal_358);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_344);
				func_52(&Local_536, 0);
				func_48(&(Local_539[2 /*2*/]), 0);
			}
		}
	}
}

void func_416()//Position - 0x313DA
{
	switch (iLocal_273)
	{
		case 0:
			if (!bLocal_275)
			{
				if (!func_45())
				{
					func_16(PLAYER::PLAYER_PED_ID(), -1309.016f, -641.8671f, 25.5017f, 242.3463f, 0, 0);
					if (iLocal_276 == 0)
					{
						if (iLocal_272 == 1)
						{
							if (func_10(PLAYER::PLAYER_PED_ID()))
							{
								func_3(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 50f, 13, 5000, 0, 0);
								iLocal_276 = 1;
							}
						}
					}
					func_16(PLAYER::PLAYER_PED_ID(), -1309.016f, -641.8671f, 25.5017f, 242.3463f, 1, 1);
				}
				func_54(&(Local_274.f_1C[0]));
				func_50(&(Local_274.f_23[0]));
				func_50(&(Local_274.f_23[1]));
				func_439();
				func_437(1);
				func_434();
				if (func_13(Local_534))
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_534);
				}
				func_415(fLocal_342, Local_548);
				func_427(1);
				iLocal_273 = 2;
			}
			else
			{
				func_426("NMT_2_RCM", 0);
				if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION(sLocal_363, 4, 0, 0, Local_533.f_1);
				}
				if (func_35(1, 1093140480, 0))
				{
					if (func_10(Local_274.f_23[0]))
					{
						func_425(&Local_534, &(Local_274.f_23[0]));
					}
					if (func_10(Local_534))
					{
						VEHICLE::SET_VEHICLE_FIXED(Local_534);
						ENTITY::SET_ENTITY_PROOFS(Local_534, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					if (func_10(Local_274.f_23[1]))
					{
						func_425(&Local_535, &(Local_274.f_23[1]));
					}
					if (func_10(Local_535))
					{
						VEHICLE::SET_VEHICLE_FIXED(Local_535);
						ENTITY::SET_ENTITY_PROOFS(Local_535, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), sLocal_362, 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_532, sLocal_361, 2, Local_532.f_1, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_531, sLocal_360, 2, Local_531.f_1, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_533, sLocal_363, 2, Local_533.f_1, 0);
					if (func_13(Local_534))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_534, sLocal_364, 0, 0, 0);
					}
					else
					{
						func_50(&(Local_274.f_23[0]));
						func_50(&Local_534);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_534, sLocal_364, 2, Local_534.f_1, 0);
					}
					if (func_13(Local_535))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_535, sLocal_365, 0, 0, 0);
					}
					else
					{
						func_50(&(Local_274.f_23[1]));
						func_50(&Local_535);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_535, sLocal_365, 2, Local_535.f_1, 0);
					}
					func_21(800, 0);
					RECORDING::_0x48621C9FCA3EBD28(1);
					CUTSCENE::START_CUTSCENE(0);
					SYSTEM::WAIT(0);
					func_424();
					func_288(-1310.7f, -640.22f, 26.54f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
					func_439();
					func_54(&(Local_274.f_1C[0]));
					VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.3f);
					PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.3f);
					func_437(0);
					func_415(fLocal_342, Local_548);
					iLocal_273 = 1;
				}
			}
			break;
		
		case 1:
			func_415(fLocal_342, Local_548);
			if (!ENTITY::DOES_ENTITY_EXIST(Local_532))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_361, 0)))
				{
					Local_532 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_361, 0));
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_531))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_360, 0)))
				{
					Local_531 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_360, 0));
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_533))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_363, 0)))
				{
					Local_533 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_363, 0));
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_534))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_364, 0)))
				{
					Local_534 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_364, 0));
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_535))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_365, 0)))
				{
					Local_535 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_365, 0));
				}
			}
			if ((func_13(Local_534) && func_20(Local_532)) && func_20(Local_531))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_361, 0))
				{
					RECORDING::_0x81CBAE94390F9F89();
					if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_532, Local_534))
					{
						PED::SET_PED_INTO_VEHICLE(Local_532, Local_534, 0);
					}
					func_423();
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_360, 0))
				{
					if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_531, Local_534))
					{
						PED::SET_PED_INTO_VEHICLE(Local_531, Local_534, 2);
					}
					func_422();
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_364, 0))
				{
					func_421();
					VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_534, 1);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_534);
					ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_534);
				}
				VEHICLE::SET_FORCE_HD_VEHICLE(Local_534, 1);
				iLocal_317 = 1;
			}
			if (func_13(Local_535) && func_20(Local_533))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_363, 0))
				{
					if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_533, Local_535))
					{
						PED::SET_PED_INTO_VEHICLE(Local_533, Local_535, -1);
					}
					func_419();
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_365, 0))
				{
					func_417();
					VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_535, 1);
					ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_535);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(22f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			}
			if (CUTSCENE::WAS_CUTSCENE_SKIPPED() && CAM::IS_SCREEN_FADED_OUT())
			{
				MISC::CLEAR_AREA_OF_VEHICLES(-1312.556f, -664.3428f, 25.5716f, 150f, 0, 0, 0, 0, 0);
			}
			if (!CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				func_437(1);
				func_434();
				func_427(0);
				iLocal_273 = 2;
			}
			else
			{
				if (CUTSCENE::GET_CUTSCENE_TIME() >= 104000)
				{
					PAD::DISABLE_CONTROL_ACTION(2, 18, 1);
				}
				if (CUTSCENE::GET_CUTSCENE_TIME() > 900 && CUTSCENE::GET_CUTSCENE_TIME() < 1480)
				{
					VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
					PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				}
				else
				{
					VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.3f);
					PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.3f);
				}
				func_437(0);
			}
			break;
		
		case 2:
			if (func_13(Local_534))
			{
				VEHICLE::SET_FORCE_HD_VEHICLE(Local_534, 1);
				iLocal_317 = 1;
			}
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				CUTSCENE::STOP_CUTSCENE(0);
			}
			else
			{
				if (CUTSCENE::HAS_CUTSCENE_LOADED())
				{
					CUTSCENE::REMOVE_CUTSCENE();
				}
				if (bLocal_275)
				{
					func_23(1, 1, 1, 1);
					func_30(0, 0, 1);
				}
				iLocal_316 = 0;
				func_525(&Local_274, 0, 1);
				func_415(fLocal_342, Local_548);
				func_286(1);
			}
			break;
	}
}

void func_417()//Position - 0x319AB
{
	if (func_13(Local_535))
	{
		VEHICLE::SET_VEHICLE_FIXED(Local_535);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_535, 1);
		VEHICLE::SET_VEHICLE_COLOURS(Local_535, 0, 0);
		VEHICLE::SET_VEHICLE_ENGINE_ON(Local_535, 1, 1);
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_535, 0);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_535, 1);
		VEHICLE::SET_VEHICLE_STRONG(Local_535, 1);
		ENTITY::SET_ENTITY_HEALTH(Local_535, 2000);
		VEHICLE::SET_DISABLE_VEHICLE_ENGINE_FIRES(Local_535, 1);
		VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Local_535, 0);
		VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_535, 0);
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_535, 0);
		VEHICLE::SET_VEHICLE_DOOR_SHUT(Local_535, 0, 1);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_535, 3);
		VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(Local_535, 0, 0);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_535.f_1, 1);
		func_418(Local_535, 1);
		ENTITY::SET_ENTITY_COORDS(Local_535, Local_535.f_3, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_QUATERNION(Local_535, -0.0248f, 0.0004f, 0.8949f, 0.4456f);
		ENTITY::FREEZE_ENTITY_POSITION(Local_535, 1);
	}
}

void func_418(var uParam0, int iParam1)//Position - 0x31A81
{
	Global_15F6A.f_16[iParam1] = uParam0;
}

void func_419()//Position - 0x31A95
{
	if (func_20(Local_533))
	{
		PED::SET_PED_COMPONENT_VARIATION(Local_533, 4, 0, 0, 0);
		PED::SET_PED_MODEL_IS_SUPPRESSED(Local_533.f_1, 1);
		PED::SET_PED_CAN_BE_TARGETTED(Local_533, 0);
		PED::SET_PED_CAN_BE_DRAGGED_OUT(Local_533, 0);
		PED::SET_PED_CONFIG_FLAG(Local_533, 32, 0);
		PED::SET_PED_CONFIG_FLAG(Local_533, 29, 0);
		PED::SET_PED_CONFIG_FLAG(Local_533, 116, 0);
		PED::SET_PED_DIES_WHEN_INJURED(Local_533, 1);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_533, 1);
		if (PED::IS_PED_IN_GROUP(Local_533))
		{
			PED::REMOVE_PED_FROM_GROUP(Local_533);
		}
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_533, iLocal_353);
		func_420(&uLocal_366, 3, Local_533, "DINAPOLI", 0, 1);
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Local_533, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_533, 1);
	}
}

void func_420(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x31B36
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

void func_421()//Position - 0x31BD1
{
	if (func_13(Local_534))
	{
		VEHICLE::SET_VEHICLE_FIXED(Local_534);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_534, 1);
		VEHICLE::SET_VEHICLE_COLOURS(Local_534, 65, 0);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_534, 1);
		VEHICLE::SET_VEHICLE_STRONG(Local_534, 1);
		ENTITY::SET_ENTITY_HEALTH(Local_534, 2000);
		VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Local_534, 0);
		VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_534, 0);
		VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(Local_534, 5, 0);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_534.f_1, 1);
		VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(Local_534);
		func_418(Local_534, 0);
	}
}

void func_422()//Position - 0x31C48
{
	if (func_20(Local_531))
	{
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_531);
		PED::SET_PED_MODEL_IS_SUPPRESSED(Local_531.f_1, 1);
		PED::SET_PED_CAN_BE_TARGETTED(Local_531, 0);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_531, 0);
		PED::SET_PED_CONFIG_FLAG(Local_531, 32, 0);
		PED::SET_PED_CONFIG_FLAG(Local_531, 132, 1);
		PED::SET_PED_CONFIG_FLAG(Local_531, 29, 0);
		PED::SET_PED_CONFIG_FLAG(Local_531, 116, 0);
		if (PED::IS_PED_IN_GROUP(Local_531))
		{
			PED::REMOVE_PED_FROM_GROUP(Local_531);
		}
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_531, iLocal_354);
		func_420(&uLocal_366, 5, Local_531, "MRSTHORNHILL", 0, 1);
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Local_531, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_531, 1);
	}
}

void func_423()//Position - 0x31CDF
{
	if (func_20(Local_532))
	{
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_532);
		PED::SET_PED_MODEL_IS_SUPPRESSED(Local_532.f_1, 1);
		PED::SET_PED_CAN_BE_TARGETTED(Local_532, 0);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_532, 0);
		PED::SET_PED_CONFIG_FLAG(Local_532, 32, 0);
		PED::SET_PED_CONFIG_FLAG(Local_532, 132, 1);
		PED::SET_PED_CONFIG_FLAG(Local_532, 29, 0);
		PED::SET_PED_CONFIG_FLAG(Local_532, 116, 0);
		if (PED::IS_PED_IN_GROUP(Local_532))
		{
			PED::REMOVE_PED_FROM_GROUP(Local_532);
		}
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_532, iLocal_354);
		func_420(&uLocal_366, 4, Local_532, "NIGEL", 0, 1);
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Local_532, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_532, 1);
	}
}

void func_424()//Position - 0x31D76
{
	int iVar0;
	
	iVar0 = func_282();
	if (iVar0 == -1)
	{
		return;
	}
	Global_178B8[iVar0 /*10*/] = 1;
}

void func_425(int iParam0, var uParam1)//Position - 0x31D96
{
	*iParam0 = *uParam1;
	*uParam1 = 0;
}

void func_426(char* sParam0, bool bParam1)//Position - 0x31DA8
{
	func_291(bParam1);
	CUTSCENE::REQUEST_CUTSCENE(sParam0, 8);
}

void func_427(bool bParam0)//Position - 0x31DBE
{
	func_433(sLocal_358, iLocal_332, bParam0, 1);
	func_432();
	func_431(1);
	func_430(joaat("a_m_m_bevhills_02"));
	func_375();
	fLocal_182 = 250f;
	bLocal_139 = true;
	func_429(1);
	bLocal_145 = true;
	func_428(1, 0, -1);
	MISC::SET_INSTANCE_PRIORITY_HINT(2);
}

void func_428(bool bParam0, int iParam1, int iParam2)//Position - 0x31E08
{
	if (bParam0)
	{
		iLocal_140 = 1;
		iLocal_245 = iParam1;
		iLocal_246 = iParam2;
	}
}

void func_429(bool bParam0)//Position - 0x31E22
{
	bLocal_150 = bParam0;
}

void func_430(int iParam0)//Position - 0x31E2E
{
	iLocal_244 = iParam0;
}

void func_431(int iParam0)//Position - 0x31E3B
{
	bLocal_144 = iParam0;
}

void func_432()//Position - 0x31E47
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	Local_215[0 /*3*/] = { -1189.919f, -864.3419f, 13.5062f };
	fLocal_151[0] = 0.011f;
	fLocal_152[0] = -0.0057f;
	fLocal_153[0] = -0.4728f;
	fLocal_154[0] = 0.8811f;
	iLocal_191[0] = 3;
	fLocal_155[0] = 12794f;
	iLocal_241[0] = joaat("f620");
	Local_215[1 /*3*/] = { -1168.025f, -846.5394f, 13.8245f };
	fLocal_151[1] = 0.0067f;
	fLocal_152[1] = 0.0025f;
	fLocal_153[1] = 0.3507f;
	fLocal_154[1] = 0.9364f;
	iLocal_191[1] = 4;
	fLocal_155[1] = 12926f;
	iLocal_241[1] = joaat("washington");
	Local_215[2 /*3*/] = { -1052.359f, -730.7704f, 18.729f };
	fLocal_151[2] = -0.0125f;
	fLocal_152[2] = -0.0121f;
	fLocal_153[2] = 0.9079f;
	fLocal_154[2] = 0.4187f;
	iLocal_191[2] = 14;
	fLocal_155[2] = 19594.96f;
	iLocal_241[2] = joaat("serrano");
	Local_215[3 /*3*/] = { -1050.453f, -743.3076f, 18.7718f };
	fLocal_151[3] = -0.0019f;
	fLocal_152[3] = -0.0002f;
	fLocal_153[3] = -0.3894f;
	fLocal_154[3] = 0.9211f;
	iLocal_191[3] = 6;
	fLocal_155[3] = 20400f;
	iLocal_241[3] = joaat("washington");
	Local_215[4 /*3*/] = { -1032.554f, -734.0855f, 19.1223f };
	fLocal_151[4] = 0.0233f;
	fLocal_152[4] = -0.0077f;
	fLocal_153[4] = -0.4212f;
	fLocal_154[4] = 0.9066f;
	iLocal_191[4] = 16;
	fLocal_155[4] = 19960.85f;
	iLocal_241[4] = joaat("serrano");
	Local_215[5 /*3*/] = { -865.4848f, -623.928f, 28.3187f };
	fLocal_151[5] = 0.0038f;
	fLocal_152[5] = -0.0257f;
	fLocal_153[5] = 0.9893f;
	fLocal_154[5] = -0.1433f;
	iLocal_191[5] = 7;
	fLocal_155[5] = 28417f;
	iLocal_241[5] = joaat("washington");
	Local_215[6 /*3*/] = { -869.6063f, -612.9931f, 28.5539f };
	fLocal_151[6] = 0.005f;
	fLocal_152[6] = -0.0119f;
	fLocal_153[6] = 0.9777f;
	fLocal_154[6] = -0.2094f;
	iLocal_191[6] = 8;
	fLocal_155[6] = 28417f;
	iLocal_241[6] = joaat("serrano");
	Local_215[7 /*3*/] = { -853.7338f, -652.7806f, 27.3348f };
	fLocal_151[7] = -0.0022f;
	fLocal_152[7] = -0.0021f;
	fLocal_153[7] = 0.7085f;
	fLocal_154[7] = 0.7057f;
	iLocal_191[7] = 9;
	fLocal_155[7] = 28549f;
	iLocal_241[7] = joaat("serrano");
	Local_215[8 /*3*/] = { -797.3943f, -667.453f, 28.1434f };
	fLocal_151[8] = 0.0434f;
	fLocal_152[8] = 0.0031f;
	fLocal_153[8] = -0.7039f;
	fLocal_154[8] = 0.709f;
	iLocal_191[8] = 10;
	fLocal_155[8] = 30654f;
	iLocal_241[8] = joaat("feltzer2");
	Local_215[9 /*3*/] = { -728.5153f, -661.8074f, 29.8396f };
	fLocal_151[9] = -0.0017f;
	fLocal_152[9] = 0.0032f;
	fLocal_153[9] = -0.7028f;
	fLocal_154[9] = 0.7114f;
	iLocal_191[9] = 11;
	fLocal_155[9] = 33027f;
	iLocal_241[9] = joaat("rapidgt");
	Local_215[10 /*3*/] = { -595.1748f, -661.9557f, 31.8497f };
	fLocal_151[10] = 0.0098f;
	fLocal_152[10] = -0.0088f;
	fLocal_153[10] = -0.7017f;
	fLocal_154[10] = 0.7123f;
	iLocal_191[10] = 15;
	fLocal_155[10] = 48186f;
	iLocal_241[10] = joaat("sultan");
	Local_215[11 /*3*/] = { -477.1852f, -644.7173f, 32.0538f };
	fLocal_151[11] = -0.0087f;
	fLocal_152[11] = 0.0318f;
	fLocal_153[11] = 0.0461f;
	fLocal_154[11] = 0.9984f;
	iLocal_191[11] = 17;
	fLocal_155[11] = 55765.85f;
	iLocal_241[11] = joaat("serrano");
	Local_215[12 /*3*/] = { -489.0458f, -666.3751f, 32.3303f };
	fLocal_151[12] = 0.0113f;
	fLocal_152[12] = 0.0176f;
	fLocal_153[12] = -0.7063f;
	fLocal_154[12] = 0.7076f;
	iLocal_191[12] = 23;
	fLocal_155[12] = 58613f;
	iLocal_241[12] = joaat("asterope");
	Local_215[13 /*3*/] = { -487.5655f, -744.9453f, 32.6015f };
	fLocal_151[13] = -0.0937f;
	fLocal_152[13] = 0.045f;
	fLocal_153[13] = 0.8793f;
	fLocal_154[13] = 0.4648f;
	iLocal_191[13] = 19;
	fLocal_155[13] = 60459.32f;
	iLocal_241[13] = joaat("bmx");
	Local_215[14 /*3*/] = { -478.1905f, -835.1024f, 29.9746f };
	fLocal_151[14] = -0.0021f;
	fLocal_152[14] = -0.0021f;
	fLocal_153[14] = 0.7008f;
	fLocal_154[14] = 0.7134f;
	iLocal_191[14] = 18;
	fLocal_155[14] = 64923.85f;
	iLocal_241[14] = joaat("serrano");
	Local_215[15 /*3*/] = { -430.6053f, -816.6718f, 36.8249f };
	fLocal_151[15] = -0.0001f;
	fLocal_152[15] = 0.0048f;
	fLocal_153[15] = 0.9993f;
	fLocal_154[15] = 0.0373f;
	iLocal_191[15] = 28;
	fLocal_155[15] = 68551f;
	iLocal_241[15] = joaat("asterope");
	Local_215[16 /*3*/] = { -427.4086f, -762.012f, 36.6573f };
	fLocal_151[16] = 0.0001f;
	fLocal_152[16] = 0.0049f;
	fLocal_153[16] = 1f;
	fLocal_154[16] = 0.0047f;
	iLocal_191[16] = 30;
	fLocal_155[16] = 70333f;
	iLocal_241[16] = joaat("sultan");
	Local_215[17 /*3*/] = { -476.9606f, -664.9507f, 31.9901f };
	fLocal_151[17] = -0.003f;
	fLocal_152[17] = -0.0083f;
	fLocal_153[17] = 0.7264f;
	fLocal_154[17] = -0.6872f;
	iLocal_191[17] = 70;
	fLocal_155[17] = 77000f;
	iLocal_241[17] = joaat("sultan");
	Local_215[18 /*3*/] = { -436.342f, -650.5261f, 30.4239f };
	fLocal_151[18] = 0.0056f;
	fLocal_152[18] = 0.0224f;
	fLocal_153[18] = 0.7071f;
	fLocal_154[18] = 0.7068f;
	iLocal_191[18] = 13;
	fLocal_155[18] = 77590f;
	iLocal_241[18] = joaat("sultan");
	Local_215[19 /*3*/] = { -420.96f, -656.3897f, 30.5754f };
	fLocal_151[19] = 0.0112f;
	fLocal_152[19] = 0.0112f;
	fLocal_153[19] = 0.707f;
	fLocal_154[19] = 0.707f;
	iLocal_191[19] = 12;
	fLocal_155[19] = 78000f;
	iLocal_241[19] = joaat("packer");
	Local_215[20 /*3*/] = { -455.2408f, -535.85f, 24.7102f };
	fLocal_151[20] = -0.0022f;
	fLocal_152[20] = 0.0022f;
	fLocal_153[20] = -0.707f;
	fLocal_154[20] = 0.7072f;
	iLocal_191[20] = 31;
	fLocal_155[20] = 80849f;
	iLocal_241[20] = joaat("sultan");
	Local_215[21 /*3*/] = { -421.8391f, -535.8503f, 24.7099f };
	fLocal_151[21] = -0.0024f;
	fLocal_152[21] = 0.0024f;
	fLocal_153[21] = -0.7071f;
	fLocal_154[21] = 0.7071f;
	iLocal_191[21] = 32;
	fLocal_155[21] = 80849f;
	iLocal_241[21] = joaat("sultan");
	Local_215[22 /*3*/] = { -323.2696f, -519.5041f, 24.769f };
	fLocal_151[22] = -0.0086f;
	fLocal_152[22] = -0.0166f;
	fLocal_153[22] = -0.7001f;
	fLocal_154[22] = 0.7138f;
	iLocal_191[22] = 34;
	fLocal_155[22] = 85280f;
	iLocal_241[22] = joaat("asterope");
	Local_215[23 /*3*/] = { -384.7831f, -496.5516f, 24.806f };
	fLocal_151[23] = -0.0022f;
	fLocal_152[23] = -0.0022f;
	fLocal_153[23] = 0.7072f;
	fLocal_154[23] = 0.7071f;
	iLocal_191[23] = 33;
	fLocal_155[23] = 85722f;
	iLocal_241[23] = joaat("landstalker");
	Local_215[24 /*3*/] = { -299.8336f, -519.6835f, 24.804f };
	fLocal_151[24] = -0.0071f;
	fLocal_152[24] = -0.0166f;
	fLocal_153[24] = -0.7047f;
	fLocal_154[24] = 0.7093f;
	iLocal_191[24] = 35;
	fLocal_155[24] = 86195f;
	iLocal_241[24] = joaat("asterope");
	Local_215[25 /*3*/] = { -296.6222f, -496.012f, 24.8684f };
	fLocal_151[25] = -0.0026f;
	fLocal_152[25] = -0.0022f;
	fLocal_153[25] = 0.7084f;
	fLocal_154[25] = 0.7058f;
	iLocal_191[25] = 21;
	fLocal_155[25] = 87170.85f;
	iLocal_241[25] = joaat("landstalker");
	Local_215[26 /*3*/] = { -242.5362f, -502.0159f, 25.6451f };
	fLocal_151[26] = -0.0096f;
	fLocal_152[26] = -0.0094f;
	fLocal_153[26] = 0.7194f;
	fLocal_154[26] = 0.6945f;
	iLocal_191[26] = 36;
	fLocal_155[26] = 88537f;
	iLocal_241[26] = joaat("landstalker");
	Local_215[27 /*3*/] = { -234.2082f, -530.1547f, 25.9344f };
	fLocal_151[27] = -0.0058f;
	fLocal_152[27] = 0.0064f;
	fLocal_153[27] = 0.7091f;
	fLocal_154[27] = -0.705f;
	iLocal_191[27] = 39;
	fLocal_155[27] = 90066f;
	iLocal_241[27] = joaat("rapidgt");
	Local_215[28 /*3*/] = { -204.8521f, -534.9627f, 26.6094f };
	fLocal_151[28] = 0.0281f;
	fLocal_152[28] = 0.0002f;
	fLocal_153[28] = -0.6936f;
	fLocal_154[28] = 0.7198f;
	iLocal_191[28] = 37;
	fLocal_155[28] = 91140f;
	iLocal_241[28] = joaat("asterope");
	Local_215[29 /*3*/] = { -186.2448f, -518.6406f, 27.3221f };
	fLocal_151[29] = -0.0061f;
	fLocal_152[29] = -0.0197f;
	fLocal_153[29] = -0.7053f;
	fLocal_154[29] = 0.7086f;
	iLocal_191[29] = 41;
	fLocal_155[29] = 91890f;
	iLocal_241[29] = joaat("fq2");
	Local_215[30 /*3*/] = { -181.6259f, -523.8001f, 27.2923f };
	fLocal_151[30] = 0.0116f;
	fLocal_152[30] = -0.0124f;
	fLocal_153[30] = -0.7029f;
	fLocal_154[30] = 0.7111f;
	iLocal_191[30] = 38;
	fLocal_155[30] = 92230f;
	iLocal_241[30] = joaat("sultan");
	Local_215[31 /*3*/] = { -152.8287f, -489.4706f, 28.3269f };
	fLocal_151[31] = -0.0213f;
	fLocal_152[31] = 0.0018f;
	fLocal_153[31] = 0.7254f;
	fLocal_154[31] = 0.688f;
	iLocal_191[31] = 24;
	fLocal_155[31] = 92554.85f;
	iLocal_241[31] = joaat("landstalker");
	Local_215[32 /*3*/] = { -172.1277f, -500.8638f, 27.8326f };
	fLocal_151[32] = -0.0252f;
	fLocal_152[32] = -0.0296f;
	fLocal_153[32] = 0.7083f;
	fLocal_154[32] = 0.7048f;
	iLocal_191[32] = 40;
	fLocal_155[32] = 94528f;
	iLocal_241[32] = joaat("fq2");
	Local_215[33 /*3*/] = { -114.866f, -500.2346f, 29.8111f };
	fLocal_151[33] = -0.0104f;
	fLocal_152[33] = -0.0098f;
	fLocal_153[33] = 0.7021f;
	fLocal_154[33] = 0.7119f;
	iLocal_191[33] = 78;
	fLocal_155[33] = 95865.44f;
	iLocal_241[33] = joaat("asterope");
	Local_215[34 /*3*/] = { -129.1858f, -505.694f, 29.242f };
	fLocal_151[34] = -0.015f;
	fLocal_152[34] = -0.0163f;
	fLocal_153[34] = 0.7139f;
	fLocal_154[34] = 0.6999f;
	iLocal_191[34] = 42;
	fLocal_155[34] = 95886f;
	iLocal_241[34] = joaat("asterope");
	Local_215[35 /*3*/] = { -55.6079f, -499.5939f, 31.8493f };
	fLocal_151[35] = -0.0116f;
	fLocal_152[35] = -0.0112f;
	fLocal_153[35] = 0.7134f;
	fLocal_154[35] = 0.7006f;
	iLocal_191[35] = 25;
	fLocal_155[35] = 96787.85f;
	iLocal_241[35] = joaat("landstalker");
	Local_215[36 /*3*/] = { -87.112f, -504.988f, 30.9077f };
	fLocal_151[36] = -0.0159f;
	fLocal_152[36] = -0.0149f;
	fLocal_153[36] = 0.7118f;
	fLocal_154[36] = 0.702f;
	iLocal_191[36] = 43;
	fLocal_155[36] = 97140f;
	iLocal_241[36] = joaat("fq2");
	Local_215[37 /*3*/] = { 26.5103f, -499.3918f, 34.2088f };
	fLocal_151[37] = -0.0005f;
	fLocal_152[37] = -0.0002f;
	fLocal_153[37] = 0.7186f;
	fLocal_154[37] = 0.6954f;
	iLocal_191[37] = 79;
	fLocal_155[37] = 100001.4f;
	iLocal_241[37] = joaat("packer");
	Local_215[39 /*3*/] = { 70.5888f, -526.8503f, 33.7031f };
	fLocal_151[39] = -0.0004f;
	fLocal_152[39] = -0.0004f;
	fLocal_153[39] = -0.7039f;
	fLocal_154[39] = 0.7103f;
	iLocal_191[39] = 46;
	fLocal_155[39] = 102948f;
	iLocal_241[39] = joaat("ninef2");
	Local_215[40 /*3*/] = { 99.8609f, -521.5526f, 33.5624f };
	fLocal_151[40] = 0.0145f;
	fLocal_152[40] = -0.0145f;
	fLocal_153[40] = 0.707f;
	fLocal_154[40] = -0.7069f;
	iLocal_191[40] = 47;
	fLocal_155[40] = 104004f;
	iLocal_241[40] = joaat("landstalker");
	Local_215[41 /*3*/] = { 196.1974f, -526.9512f, 33.5498f };
	fLocal_151[41] = 0.0178f;
	fLocal_152[41] = -0.0178f;
	fLocal_153[41] = 0.7069f;
	fLocal_154[41] = -0.7068f;
	iLocal_191[41] = 48;
	fLocal_155[41] = 107502f;
	iLocal_241[41] = joaat("landstalker");
	Local_215[42 /*3*/] = { 230.2825f, -516.1511f, 33.5591f };
	fLocal_151[42] = -0.0023f;
	fLocal_152[42] = 0.0023f;
	fLocal_153[42] = -0.7071f;
	fLocal_154[42] = 0.7071f;
	iLocal_191[42] = 49;
	fLocal_155[42] = 108624f;
	iLocal_241[42] = joaat("landstalker");
	Local_215[44 /*3*/] = { 301.1906f, -521.55f, 33.4621f };
	fLocal_151[44] = 0.0001f;
	fLocal_152[44] = -0.0001f;
	fLocal_153[44] = 0.7071f;
	fLocal_154[44] = -0.7071f;
	iLocal_191[44] = 50;
	fLocal_155[44] = 111198f;
	iLocal_241[44] = joaat("sultan");
	Local_216[0 /*3*/] = { -1200.091f, -849.0596f, 13.5431f };
	fLocal_166[0] = -0.0171f;
	fLocal_167[0] = -0.0063f;
	fLocal_168[0] = 0.88f;
	fLocal_169[0] = 0.4747f;
	iLocal_242[0] = joaat("feltzer2");
	Local_216[1 /*3*/] = { -1058.345f, -772.2757f, 18.8924f };
	fLocal_166[1] = -0.0028f;
	fLocal_167[1] = 0.0149f;
	fLocal_168[1] = 0.3553f;
	fLocal_169[1] = 0.9346f;
	iLocal_242[1] = joaat("feltzer2");
	Local_216[2 /*3*/] = { -1070.664f, -739.6081f, 18.8482f };
	fLocal_166[2] = -0.0111f;
	fLocal_167[2] = 0.0192f;
	fLocal_168[2] = 0.9254f;
	fLocal_169[2] = 0.3784f;
	iLocal_242[2] = joaat("feltzer2");
	Local_216[3 /*3*/] = { -1121.096f, -880.1656f, 7.6752f };
	fLocal_166[3] = 0.0021f;
	fLocal_167[3] = -0.0011f;
	fLocal_168[3] = -0.4944f;
	fLocal_169[3] = 0.8692f;
	iLocal_242[3] = joaat("serrano");
	Local_216[4 /*3*/] = { -1115.618f, -807.3134f, 16.6315f };
	fLocal_166[4] = -0.0414f;
	fLocal_167[4] = -0.0257f;
	fLocal_168[4] = 0.8471f;
	fLocal_169[4] = -0.5292f;
	iLocal_242[4] = joaat("serrano");
	Local_216[5 /*3*/] = { -1112.403f, -774.3158f, 18.3801f };
	fLocal_166[5] = -0.0097f;
	fLocal_167[5] = -0.0319f;
	fLocal_168[5] = 0.5058f;
	fLocal_169[5] = 0.862f;
	iLocal_242[5] = joaat("serrano");
	Local_216[6 /*3*/] = { -1130.529f, -792.3233f, 16.5972f };
	fLocal_166[6] = -0.0307f;
	fLocal_167[6] = -0.0293f;
	fLocal_168[6] = 0.9133f;
	fLocal_169[6] = 0.4051f;
	iLocal_242[6] = joaat("feltzer2");
	Local_216[7 /*3*/] = { -1045.39f, -778.9995f, 18.3863f };
	fLocal_166[7] = 0.0118f;
	fLocal_167[7] = 0.037f;
	fLocal_168[7] = 0.5106f;
	fLocal_169[7] = 0.859f;
	iLocal_242[7] = joaat("serrano");
	Local_216[8 /*3*/] = { -1034.826f, -739.7039f, 18.881f };
	fLocal_166[8] = 0.0195f;
	fLocal_167[8] = 0.019f;
	fLocal_168[8] = -0.4353f;
	fLocal_169[8] = 0.8999f;
	iLocal_242[8] = joaat("radi");
	Local_216[9 /*3*/] = { -1033.929f, -712.6562f, 19.4857f };
	fLocal_166[9] = -0.0193f;
	fLocal_167[9] = -0.0194f;
	fLocal_168[9] = 0.9056f;
	fLocal_169[9] = 0.4231f;
	iLocal_242[9] = joaat("serrano");
	Local_216[10 /*3*/] = { -1005.538f, -715.5715f, 20.3848f };
	fLocal_166[10] = -0.044f;
	fLocal_167[10] = -0.1329f;
	fLocal_168[10] = -0.3895f;
	fLocal_169[10] = 0.9103f;
	iLocal_242[10] = joaat("bati");
	Local_216[11 /*3*/] = { -980.4462f, -670.3936f, 22.8034f };
	fLocal_166[11] = -0.0432f;
	fLocal_167[11] = -0.0121f;
	fLocal_168[11] = 0.8701f;
	fLocal_169[11] = 0.4908f;
	iLocal_242[11] = joaat("washington");
	Local_216[12 /*3*/] = { -969.1606f, -664.5714f, 23.887f };
	fLocal_166[12] = -0.046f;
	fLocal_167[12] = -0.0213f;
	fLocal_168[12] = 0.8534f;
	fLocal_169[12] = 0.5187f;
	iLocal_242[12] = joaat("rapidgt");
	Local_216[13 /*3*/] = { -928.2644f, -652.7425f, 26.6901f };
	fLocal_166[13] = -0.0303f;
	fLocal_167[13] = -0.0054f;
	fLocal_168[13] = 0.7573f;
	fLocal_169[13] = 0.6524f;
	iLocal_242[13] = joaat("rapidgt");
	Local_216[14 /*3*/] = { -916.6693f, -650.6878f, 27.0863f };
	fLocal_166[14] = -0.024f;
	fLocal_167[14] = 0.0101f;
	fLocal_168[14] = 0.7742f;
	fLocal_169[14] = 0.6324f;
	iLocal_242[14] = joaat("feltzer2");
	Local_216[15 /*3*/] = { -790.8272f, -667.5106f, 28.4613f };
	fLocal_166[15] = -0.0369f;
	fLocal_167[15] = -0.005f;
	fLocal_168[15] = 0.7209f;
	fLocal_169[15] = -0.6921f;
	iLocal_242[15] = joaat("rapidgt");
	Local_216[16 /*3*/] = { -790.0645f, -647.0408f, 28.4882f };
	fLocal_166[16] = -0.037f;
	fLocal_167[16] = 0.0003f;
	fLocal_168[16] = 0.7201f;
	fLocal_169[16] = 0.6929f;
	iLocal_242[16] = joaat("feltzer2");
	Local_216[17 /*3*/] = { -716.8614f, -667.7233f, 29.6724f };
	fLocal_166[17] = -0.0267f;
	fLocal_167[17] = -0.0106f;
	fLocal_168[17] = 0.7068f;
	fLocal_169[17] = -0.7068f;
	iLocal_242[17] = joaat("sultan");
	Local_216[18 /*3*/] = { -653.5672f, -605.7774f, 32.8442f };
	fLocal_166[18] = 0.0008f;
	fLocal_167[18] = -0.0298f;
	fLocal_168[18] = 0.9991f;
	fLocal_169[18] = 0.031f;
	iLocal_242[18] = joaat("radi");
	Local_216[19 /*3*/] = { -598.4409f, -647.7642f, 31.2207f };
	fLocal_166[19] = 0.0659f;
	fLocal_167[19] = -0.1257f;
	fLocal_168[19] = 0.6417f;
	fLocal_169[19] = 0.7537f;
	iLocal_242[19] = joaat("bati");
	Local_216[20 /*3*/] = { -457.3376f, -774.9608f, 29.9679f };
	fLocal_166[20] = -0.0002f;
	fLocal_167[20] = 0f;
	fLocal_168[20] = 0.7033f;
	fLocal_169[20] = 0.7109f;
	iLocal_242[20] = joaat("sultan");
	Local_216[21 /*3*/] = { -506.0643f, -614.7634f, 29.6699f };
	fLocal_166[21] = -0.0131f;
	fLocal_167[21] = -0.1302f;
	fLocal_168[21] = -0.0218f;
	fLocal_169[21] = 0.9912f;
	iLocal_242[21] = joaat("bati");
	Local_216[22 /*3*/] = { -487.6026f, -614.804f, 30.58f };
	fLocal_166[22] = 0.0002f;
	fLocal_167[22] = 0f;
	fLocal_168[22] = 0.9999f;
	fLocal_169[22] = 0.0166f;
	iLocal_242[22] = joaat("sultan");
	Local_216[23 /*3*/] = { -856.7647f, -679.063f, 27.2491f };
	fLocal_166[23] = -0.008f;
	fLocal_167[23] = 0.0277f;
	fLocal_168[23] = 0.0148f;
	fLocal_169[23] = 0.9995f;
	iLocal_242[23] = joaat("sultan");
	Local_216[24 /*3*/] = { -750.8827f, -607.8928f, 29.5466f };
	fLocal_166[24] = 0.0609f;
	fLocal_167[24] = 0.0021f;
	fLocal_168[24] = 0.9978f;
	fLocal_169[24] = -0.0261f;
	iLocal_242[24] = joaat("sultan");
	Local_216[25 /*3*/] = { -477.1844f, -757.5135f, 30.1527f };
	fLocal_166[25] = -0.0022f;
	fLocal_167[25] = -0.0021f;
	fLocal_168[25] = 0.7233f;
	fLocal_169[25] = 0.6905f;
	iLocal_242[25] = joaat("rapidgt");
	Local_216[26 /*3*/] = { -471.01f, -624.55f, 30.58f };
	fLocal_166[26] = 0.0001f;
	fLocal_167[26] = -0.0002f;
	fLocal_168[26] = -0.0144f;
	fLocal_169[26] = 0.9999f;
	iLocal_242[26] = joaat("sultan");
	Local_216[27 /*3*/] = { -679.3469f, -593.3812f, 24.7059f };
	fLocal_166[27] = -0.0011f;
	fLocal_167[27] = 0.0004f;
	fLocal_168[27] = 0.6772f;
	fLocal_169[27] = 0.7358f;
	iLocal_242[27] = joaat("sultan");
	Local_216[28 /*3*/] = { 433.6576f, -608.7065f, 27.7732f };
	fLocal_166[28] = -0.0003f;
	fLocal_167[28] = 0.0005f;
	fLocal_168[28] = 0.7774f;
	fLocal_169[28] = -0.629f;
	iLocal_242[28] = joaat("sultan");
	Local_216[29 /*3*/] = { 416.3534f, -638.7431f, 27.8704f };
	fLocal_166[29] = 0.0891f;
	fLocal_167[29] = -0.0957f;
	fLocal_168[29] = 0.7111f;
	fLocal_169[29] = 0.6908f;
	iLocal_242[29] = joaat("bati");
	Local_216[30 /*3*/] = { 433.9501f, -603.2841f, 27.8743f };
	fLocal_166[30] = 0.0794f;
	fLocal_167[30] = -0.1039f;
	fLocal_168[30] = 0.6505f;
	fLocal_169[30] = 0.7482f;
	iLocal_242[30] = joaat("bati");
	Local_216[31 /*3*/] = { 291.0103f, -589.8865f, 42.9593f };
	fLocal_166[31] = 0.0053f;
	fLocal_167[31] = -0.0026f;
	fLocal_168[31] = 0.9489f;
	fLocal_169[31] = 0.3156f;
	iLocal_242[31] = joaat("ambulance");
	Local_217[0 /*3*/] = { -1104.283f, -775.1389f, 18.8468f };
	fLocal_160[0] = -0.0068f;
	fLocal_161[0] = -0.0121f;
	fLocal_162[0] = 0.9186f;
	fLocal_163[0] = 0.3949f;
	iLocal_194[0] = 52;
	fLocal_164[0] = 16000f;
	fLocal_165[0] = 1f;
	iLocal_243[0] = joaat("feltzer2");
	Local_217[1 /*3*/] = { -1129.485f, -805.7412f, 15.9592f };
	fLocal_160[1] = 0.0303f;
	fLocal_161[1] = -0.0208f;
	fLocal_162[1] = -0.3298f;
	fLocal_163[1] = 0.9433f;
	iLocal_194[1] = 5;
	fLocal_164[1] = 16488f;
	fLocal_165[1] = 1f;
	iLocal_243[1] = joaat("washington");
	Local_217[2 /*3*/] = { -998.2445f, -692.8199f, 21.5328f };
	fLocal_160[2] = -0.0136f;
	fLocal_161[2] = -0.0158f;
	fLocal_162[2] = 0.8929f;
	fLocal_163[2] = 0.4498f;
	iLocal_194[2] = 53;
	fLocal_164[2] = 21412f;
	fLocal_165[2] = 1f;
	iLocal_243[2] = joaat("feltzer2");
	Local_217[3 /*3*/] = { -883.8546f, -655.3506f, 27.5493f };
	fLocal_160[3] = 0.0032f;
	fLocal_161[3] = -0.0018f;
	fLocal_162[3] = 0.712f;
	fLocal_163[3] = 0.7021f;
	iLocal_194[3] = 54;
	fLocal_164[3] = 25000f;
	fLocal_165[3] = 1f;
	iLocal_243[3] = joaat("feltzer2");
	Local_217[4 /*3*/] = { -850.7409f, -661.5627f, 27.3668f };
	fLocal_160[4] = -0.0015f;
	fLocal_161[4] = 0.0017f;
	fLocal_162[4] = -0.6912f;
	fLocal_163[4] = 0.7227f;
	iLocal_194[4] = 55;
	fLocal_164[4] = 28500f;
	fLocal_165[4] = 1f;
	iLocal_243[4] = joaat("serrano");
	Local_217[5 /*3*/] = { -721.2928f, -652.8879f, 29.816f };
	fLocal_160[5] = -0.0024f;
	fLocal_161[5] = -0.0102f;
	fLocal_162[5] = 0.6908f;
	fLocal_163[5] = 0.723f;
	iLocal_194[5] = 56;
	fLocal_164[5] = 32500f;
	fLocal_165[5] = 1f;
	iLocal_243[5] = joaat("serrano");
	Local_217[6 /*3*/] = { -724.7061f, -648.64f, 29.7668f };
	fLocal_160[6] = -0.0212f;
	fLocal_161[6] = 0.005f;
	fLocal_162[6] = 0.7061f;
	fLocal_163[6] = 0.7078f;
	iLocal_194[6] = 57;
	fLocal_164[6] = 32750f;
	fLocal_165[6] = 1f;
	iLocal_243[6] = joaat("washington");
	Local_217[7 /*3*/] = { -688.4173f, -579.6989f, 24.8499f };
	fLocal_160[7] = 0.0026f;
	fLocal_161[7] = -0.0029f;
	fLocal_162[7] = 0.7397f;
	fLocal_163[7] = -0.673f;
	iLocal_194[7] = 58;
	fLocal_164[7] = 40273f;
	fLocal_165[7] = 1f;
	iLocal_243[7] = joaat("washington");
	Local_217[8 /*3*/] = { -563.1786f, -579.4122f, 25.3124f };
	fLocal_160[8] = 0.002f;
	fLocal_161[8] = 0.0021f;
	fLocal_162[8] = 0.7032f;
	fLocal_163[8] = 0.711f;
	iLocal_194[8] = 59;
	fLocal_164[8] = 43500f;
	fLocal_165[8] = 1f;
	iLocal_243[8] = joaat("trash");
	Local_217[9 /*3*/] = { -556.1506f, -631.2017f, 30.562f };
	fLocal_160[9] = -0.0352f;
	fLocal_161[9] = 0.0378f;
	fLocal_162[9] = -0.6805f;
	fLocal_163[9] = 0.7309f;
	iLocal_194[9] = 60;
	fLocal_164[9] = 51889f;
	fLocal_165[9] = 1f;
	iLocal_243[9] = joaat("bmx");
	Local_217[10 /*3*/] = { -445.0543f, -655.1606f, 31.3466f };
	fLocal_160[10] = 0.0076f;
	fLocal_161[10] = 0.0093f;
	fLocal_162[10] = 0.7136f;
	fLocal_163[10] = 0.7005f;
	iLocal_194[10] = 61;
	fLocal_164[10] = 56772f;
	fLocal_165[10] = 1f;
	iLocal_243[10] = joaat("sultan");
	Local_217[11 /*3*/] = { -519.4122f, -666.3391f, 32.7365f };
	fLocal_160[11] = 0.0105f;
	fLocal_161[11] = 0.0179f;
	fLocal_162[11] = -0.6817f;
	fLocal_163[11] = 0.7313f;
	iLocal_194[11] = 62;
	fLocal_164[11] = 57772f;
	fLocal_165[11] = 1f;
	iLocal_243[11] = joaat("washington");
	Local_217[12 /*3*/] = { -491.8959f, -716.5375f, 32.5585f };
	fLocal_160[12] = 0.1433f;
	fLocal_161[12] = 0.0787f;
	fLocal_162[12] = 0.9609f;
	fLocal_163[12] = -0.2234f;
	iLocal_194[12] = 63;
	fLocal_164[12] = 60800f;
	fLocal_165[12] = 1.2f;
	iLocal_243[12] = joaat("bmx");
	Local_217[13 /*3*/] = { -492.3147f, -827.8944f, 29.9952f };
	fLocal_160[13] = -0.005f;
	fLocal_161[13] = 0.0046f;
	fLocal_162[13] = 0.0169f;
	fLocal_163[13] = 0.9998f;
	iLocal_194[13] = 64;
	fLocal_164[13] = 64030f;
	fLocal_165[13] = 1f;
	iLocal_243[13] = joaat("washington");
	Local_217[14 /*3*/] = { -518.8372f, -756.7956f, 31.5421f };
	fLocal_160[14] = -0.0147f;
	fLocal_161[14] = -0.0264f;
	fLocal_162[14] = 0.9686f;
	fLocal_163[14] = -0.2467f;
	iLocal_194[14] = 65;
	fLocal_164[14] = 64230f;
	fLocal_165[14] = 1f;
	iLocal_243[14] = joaat("washington");
	Local_217[15 /*3*/] = { -477.6166f, -806.7344f, 30.0523f };
	fLocal_160[15] = 0f;
	fLocal_161[15] = 0.0025f;
	fLocal_162[15] = -0.701f;
	fLocal_163[15] = 0.7132f;
	iLocal_194[15] = 66;
	fLocal_164[15] = 66084f;
	fLocal_165[15] = 1f;
	iLocal_243[15] = joaat("washington");
	Local_217[16 /*3*/] = { -417.4774f, -836.1498f, 31.442f };
	fLocal_160[16] = -0.0077f;
	fLocal_161[16] = -0.0047f;
	fLocal_162[16] = 0.7025f;
	fLocal_163[16] = 0.7117f;
	iLocal_194[16] = 67;
	fLocal_164[16] = 65384f;
	fLocal_165[16] = 1f;
	iLocal_243[16] = joaat("benson");
	Local_217[17 /*3*/] = { -413.1984f, -831.7321f, 30.8216f };
	fLocal_160[17] = -0.0237f;
	fLocal_161[17] = 0.0144f;
	fLocal_162[17] = 0.7088f;
	fLocal_163[17] = 0.7049f;
	iLocal_194[17] = 68;
	fLocal_164[17] = 67078f;
	fLocal_165[17] = 1f;
	iLocal_243[17] = joaat("sultan");
	Local_217[18 /*3*/] = { -528.5989f, -840.7145f, 29.413f };
	fLocal_160[18] = -0.0237f;
	fLocal_161[18] = 0.0236f;
	fLocal_162[18] = 0.7098f;
	fLocal_163[18] = -0.7036f;
	iLocal_194[18] = 69;
	fLocal_164[18] = 64606.32f;
	fLocal_165[18] = 1f;
	iLocal_243[18] = joaat("sultan");
	Local_217[19 /*3*/] = { -446.0574f, -767.6522f, 29.9676f };
	fLocal_160[19] = -0.0002f;
	fLocal_161[19] = 0.0001f;
	fLocal_162[19] = 0.711f;
	fLocal_163[19] = 0.7032f;
	iLocal_194[19] = 51;
	fLocal_164[19] = 70071.85f;
	fLocal_165[19] = 1f;
	iLocal_243[19] = joaat("sultan");
	Local_217[20 /*3*/] = { -488.5203f, -523.8471f, 24.8363f };
	fLocal_160[20] = -0.001f;
	fLocal_161[20] = 0.0015f;
	fLocal_162[20] = 0.7208f;
	fLocal_163[20] = -0.6931f;
	iLocal_194[20] = 71;
	fLocal_164[20] = 81355.85f;
	fLocal_165[20] = 1f;
	iLocal_243[20] = joaat("landstalker");
	Local_217[21 /*3*/] = { -305.7855f, -508.727f, 24.7583f };
	fLocal_160[21] = 0.0168f;
	fLocal_161[21] = -0.0137f;
	fLocal_162[21] = 0.7019f;
	fLocal_163[21] = 0.7119f;
	iLocal_194[21] = 72;
	fLocal_164[21] = 86290.85f;
	fLocal_165[21] = 1f;
	iLocal_243[21] = joaat("landstalker");
	Local_217[22 /*3*/] = { 294.6554f, -576.5358f, 42.9547f };
	fLocal_160[22] = 0.0001f;
	fLocal_161[22] = 0.0078f;
	fLocal_162[22] = 0.2262f;
	fLocal_163[22] = 0.974f;
	iLocal_194[22] = 73;
	fLocal_164[22] = 109000f;
	fLocal_165[22] = 1f;
	iLocal_243[22] = joaat("ambulance");
	Local_217[23 /*3*/] = { -393.8603f, -503.4236f, 25.4432f };
	fLocal_160[23] = 0.0016f;
	fLocal_161[23] = 0.0018f;
	fLocal_162[23] = 0.7075f;
	fLocal_163[23] = 0.7067f;
	iLocal_194[23] = 74;
	fLocal_164[23] = 82431.85f;
	fLocal_165[23] = 1f;
	iLocal_243[23] = joaat("packer");
	Local_217[24 /*3*/] = { -527.6368f, -846.5891f, 29.9361f };
	fLocal_160[24] = 0.0422f;
	fLocal_161[24] = -0.0031f;
	fLocal_162[24] = -0.7009f;
	fLocal_163[24] = 0.712f;
	iLocal_194[24] = 75;
	fLocal_164[24] = 62500f;
	fLocal_165[24] = 1f;
	iLocal_243[24] = joaat("bus");
	Local_217[25 /*3*/] = { 3.4457f, -533.8352f, 33.2443f };
	fLocal_160[25] = 0.0232f;
	fLocal_161[25] = 0.0045f;
	fLocal_162[25] = -0.6929f;
	fLocal_163[25] = 0.7206f;
	iLocal_194[25] = 80;
	fLocal_164[25] = 100001.4f;
	fLocal_165[25] = 1f;
	iLocal_243[25] = joaat("asterope");
	Local_217[26 /*3*/] = { -483.5551f, -531.6314f, 24.8571f };
	fLocal_160[26] = 0.0034f;
	fLocal_161[26] = -0.0031f;
	fLocal_162[26] = -0.6972f;
	fLocal_163[26] = 0.7168f;
	iLocal_194[26] = 76;
	fLocal_164[26] = 81217.44f;
	fLocal_165[26] = 1f;
	iLocal_243[26] = joaat("asterope");
	Local_217[27 /*3*/] = { -277.6243f, -508.3559f, 24.9767f };
	fLocal_160[27] = 0.0108f;
	fLocal_161[27] = -0.0139f;
	fLocal_162[27] = 0.7117f;
	fLocal_163[27] = 0.7023f;
	iLocal_194[27] = 77;
	fLocal_164[27] = 87256.44f;
	fLocal_165[27] = 1f;
	iLocal_243[27] = joaat("asterope");
	Local_217[28 /*3*/] = { -201.7354f, -496.1847f, 27.3531f };
	fLocal_160[28] = -0.0125f;
	fLocal_161[28] = -0.0117f;
	fLocal_162[28] = 0.7296f;
	fLocal_163[28] = 0.6837f;
	iLocal_194[28] = 82;
	fLocal_164[28] = 90798.32f;
	fLocal_165[28] = 1f;
	iLocal_243[28] = joaat("packer");
	Local_217[29 /*3*/] = { -118.4835f, -529.6654f, 29.6739f };
	fLocal_160[29] = 0.0116f;
	fLocal_161[29] = -0.0127f;
	fLocal_162[29] = -0.686f;
	fLocal_163[29] = 0.7274f;
	iLocal_194[29] = 44;
	fLocal_164[29] = 94954.86f;
	fLocal_165[29] = 1f;
	iLocal_243[29] = joaat("landstalker");
	iVar0 = 0;
	iVar1 = iLocal_250;
	iVar2 = iLocal_247;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (fLocal_164[iVar0] >= 41011f)
		{
			fLocal_164[iVar0] = (fLocal_164[iVar0] - 43.5f);
		}
		if (fLocal_164[iVar0] >= 77018.5f)
		{
			fLocal_164[iVar0] = (fLocal_164[iVar0] - 78.5f);
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		if (fLocal_155[iVar0] >= 41011f)
		{
			fLocal_155[iVar0] = (fLocal_155[iVar0] - 43.5f);
		}
		if (fLocal_155[iVar0] >= 77018.5f)
		{
			fLocal_155[iVar0] = (fLocal_155[iVar0] - 78.5f);
		}
		iVar0++;
	}
}

void func_433(char* sParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x3471F
{
	struct<3> Var0;
	
	StringCopy(&cLocal_231, sParam0, 64);
	bLocal_127 = true;
	iLocal_132 = 0;
	iLocal_198 = 0;
	iLocal_199 = 0;
	iLocal_200 = 0;
	iLocal_201 = iParam1;
	iLocal_202 = 0;
	iLocal_203 = 0;
	iLocal_204 = 0;
	iLocal_208 = 0;
	iLocal_211 = 0;
	iLocal_209 = -1;
	iLocal_210 = -1;
	iLocal_212 = 0;
	iLocal_213 = 0;
	fLocal_186 = 0f;
	fLocal_187 = 0f;
	fLocal_172 = 0f;
	iLocal_133 = 0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		Local_219.x = (Var0.x - 100f);
		Local_219.f_1 = (Var0.f_1 - 100f);
		Local_219.f_2 = (Var0.f_2 - 100f);
		Local_220.x = (Var0.x + 100f);
		Local_220.f_1 = (Var0.f_1 + 100f);
		Local_220.f_2 = (Var0.f_2 + 100f);
		PATHFIND::SET_ROADS_IN_AREA(Local_219, Local_220, 0, 0);
		if (bParam2)
		{
			MISC::CLEAR_AREA_OF_VEHICLES(Var0, 500f, 0, 0, 0, 0, 0);
		}
	}
	PED::ADD_RELATIONSHIP_GROUP("rgh_traffic", &iLocal_240);
	func_412();
	if (bParam3)
	{
		func_65(1);
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), 0);
		PED::SET_CREATE_RANDOM_COPS(0);
	}
	func_75();
}

void func_434()//Position - 0x34840
{
	int iVar0;
	
	func_50(&(Local_274.f_23[0]));
	if (!ENTITY::DOES_ENTITY_EXIST(Local_534))
	{
		MISC::CLEAR_AREA(Local_534.f_3, 2f, 1, 0, 0, 0);
		func_435(&Local_534, Local_534.f_3, Local_534.f_6, 0, 1);
		func_421();
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_534.f_1);
	func_50(&(Local_274.f_23[1]));
	if (!ENTITY::DOES_ENTITY_EXIST(Local_535))
	{
		MISC::CLEAR_AREA(Local_535.f_3, 2f, 1, 0, 0, 0);
		Local_535 = VEHICLE::CREATE_VEHICLE(Local_535.f_1, Local_535.f_3, Local_535.f_6, 1, 1);
		if (func_13(Local_535))
		{
			ENTITY::SET_ENTITY_COORDS(Local_535, Local_535.f_3, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_QUATERNION(Local_535, -0.0248f, 0.0004f, 0.8949f, 0.4456f);
		}
		func_417();
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_535.f_1);
	if (func_13(Local_534))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_531))
		{
			Local_531 = PED::CREATE_PED_INSIDE_VEHICLE(Local_534, 26, Local_531.f_1, 2, 1, 1);
			func_422();
		}
		func_54(&(Local_274.f_1C[0]));
		if (!ENTITY::DOES_ENTITY_EXIST(Local_532))
		{
			Local_532 = PED::CREATE_PED_INSIDE_VEHICLE(Local_534, 26, Local_532.f_1, 0, 1, 1);
			func_423();
		}
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_531.f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_532.f_1);
	if (func_13(Local_535))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_533))
		{
			Local_533 = PED::CREATE_PED_INSIDE_VEHICLE(Local_535, 26, Local_533.f_1, -1, 1, 1);
			func_419();
		}
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_533.f_1);
	if (func_20(PLAYER::PLAYER_PED_ID()))
	{
		func_420(&uLocal_366, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(PLAYER::PLAYER_PED_ID(), 1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_539[0 /*2*/]))
	{
		MISC::CLEAR_AREA(-1329.742f, -665.3537f, 26.3413f, 2f, 1, 0, 0, 0);
		Local_539[0 /*2*/] = VEHICLE::CREATE_VEHICLE(Local_539[0 /*2*/].f_1, -1329.742f, -665.3537f, 26.3413f, 126.9722f, 1, 1);
	}
	if (func_13(Local_539[0 /*2*/]))
	{
		ENTITY::SET_ENTITY_QUATERNION(Local_539[0 /*2*/], -0.0318f, 0.0067f, 0.8936f, 0.4476f);
		if (!VEHICLE::IS_VEHICLE_DOOR_FULLY_OPEN(Local_539[0 /*2*/], 2))
		{
			VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_539[0 /*2*/], 2, 0, 0);
		}
		if (!VEHICLE::IS_VEHICLE_DOOR_FULLY_OPEN(Local_539[0 /*2*/], 3))
		{
			VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_539[0 /*2*/], 3, 0, 0);
		}
		VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(Local_539[0 /*2*/], 1, 1);
		VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(Local_539[0 /*2*/], 0, 1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_539[1 /*2*/]))
	{
		MISC::CLEAR_AREA(-1329.751f, -676.4864f, 25.8557f, 2f, 1, 0, 0, 0);
		Local_539[1 /*2*/] = VEHICLE::CREATE_VEHICLE(Local_539[1 /*2*/].f_1, -1329.751f, -676.4864f, 25.8557f, 307.7227f, 1, 1);
	}
	if (func_13(Local_539[1 /*2*/]))
	{
		ENTITY::SET_ENTITY_QUATERNION(Local_539[1 /*2*/], 0.0248f, 0.0142f, -0.4405f, 0.8973f);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_539[2 /*2*/]))
	{
		MISC::CLEAR_AREA(-1336.317f, -680.9752f, 25.5144f, 2f, 1, 0, 0, 0);
		Local_539[2 /*2*/] = VEHICLE::CREATE_VEHICLE(Local_539[2 /*2*/].f_1, -1336.317f, -680.9752f, 25.5144f, 307.7227f, 1, 1);
	}
	if (func_13(Local_539[2 /*2*/]))
	{
		ENTITY::SET_ENTITY_QUATERNION(Local_539[2 /*2*/], 0.0269f, 0.0079f, -0.4791f, 0.8773f);
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_13(Local_539[iVar0 /*2*/]))
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_539[iVar0 /*2*/].f_1);
		}
		iVar0++;
	}
	func_415(fLocal_342, Local_548);
	if (bLocal_275)
	{
		if (bLocal_305)
		{
			if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
			{
				func_21(800, 0);
			}
		}
	}
}

int func_435(var uParam0, struct<3> Param1, float fParam2, int iParam3, int iParam4)//Position - 0x34BFE
{
	STREAMING::REQUEST_MODEL(iLocal_92);
	if (iParam4 == 1)
	{
		while (!STREAMING::HAS_MODEL_LOADED(iLocal_92))
		{
			SYSTEM::WAIT(0);
		}
	}
	else if (!STREAMING::HAS_MODEL_LOADED(iLocal_92))
	{
		return 0;
	}
	func_436(uParam0, iLocal_92, Param1, fParam2);
	if (func_10(*uParam0))
	{
		VEHICLE::SET_VEHICLE_COLOURS(*uParam0, 65, 0);
		VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(*uParam0, 5, 0);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*uParam0, "28BNT310");
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*uParam0, 0);
		if (iParam3 == 1)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(*uParam0, 10);
		}
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_92);
	return 1;
}

void func_436(var uParam0, int iParam1, struct<3> Param2, float fParam3)//Position - 0x34C89
{
	func_50(uParam0);
	*uParam0 = VEHICLE::CREATE_VEHICLE(iParam1, Param2, fParam3, 1, 1);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam0);
		ENTITY::SET_ENTITY_HEALTH(*uParam0, 1000);
	}
}

void func_437(bool bParam0)//Position - 0x34CC4
{
	HUD::REQUEST_ADDITIONAL_TEXT("NIGEL2", 0);
	VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_332, sLocal_358);
	STREAMING::REQUEST_MODEL(Local_535.f_1);
	STREAMING::REQUEST_MODEL(Local_534.f_1);
	STREAMING::REQUEST_MODEL(Local_533.f_1);
	STREAMING::REQUEST_MODEL(Local_531.f_1);
	STREAMING::REQUEST_MODEL(Local_532.f_1);
	STREAMING::REQUEST_MODEL(Local_539[0 /*2*/].f_1);
	STREAMING::REQUEST_MODEL(Local_539[1 /*2*/].f_1);
	STREAMING::REQUEST_MODEL(Local_539[2 /*2*/].f_1);
	VEHICLE::REQUEST_VEHICLE_RECORDING(2, sLocal_358);
	if (bParam0)
	{
		while ((((((((((!HUD::HAS_ADDITIONAL_TEXT_LOADED(0) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_332, sLocal_358)) || !STREAMING::HAS_MODEL_LOADED(Local_535.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_534.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_533.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_531.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_532.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_539[0 /*2*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_539[1 /*2*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_539[2 /*2*/].f_1)) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(2, sLocal_358))
		{
			if (bLocal_275)
			{
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					func_438(0, 1);
					bLocal_305 = true;
				}
			}
			SYSTEM::WAIT(0);
		}
	}
}

void func_438(int iParam0, bool bParam1)//Position - 0x34E0F
{
	if (CAM::IS_SCREEN_FADED_IN())
	{
		if (!CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(iParam0);
			if (bParam1)
			{
				while (!CAM::IS_SCREEN_FADED_OUT())
				{
					SYSTEM::WAIT(0);
				}
			}
		}
	}
}

void func_439()//Position - 0x34E41
{
	struct<3> Var0;
	float fVar1;
	
	Var0 = { -1290f, -646.1f, 26.05f };
	fVar1 = 307.66f;
	func_486(-1311.409f, -648.4133f, 24.92526f, -1289.028f, -632.043f, 29.5522f, 17.5f, Var0, fVar1, func_493(), 1, 0, 1, 0, 0);
	func_486(-1319.69f, -655.7773f, 29.45839f, -1184.461f, -834.8201f, 12.34378f, 30f, Var0, fVar1, func_493(), 1, 0, 1, 0, 0);
	if (func_484(0f, 0f, 0f, 1))
	{
		func_440(Var0, fVar1, 0, 145);
	}
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-1409.344f, -756.381f, 17.59896f, -1239.148f, -587.1219f, 31.25266f, 0, 1);
	VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(-1409.344f, -756.381f, 17.59896f, -1239.148f, -587.1219f, 31.25266f);
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1415.904f, -732.5489f, 17.54549f, -1236.628f, -601.0265f, 31.15345f, 23f, 0, 0, 1);
	MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(-1415.904f, -732.5489f, 17.54549f, -1236.628f, -601.0265f, 31.15345f, 23f, 0, 0, 0, 1, 1);
	PATHFIND::SET_PED_PATHS_IN_AREA(-1318.5f, -678.8826f, 23f, -1296.628f, -631.5449f, 29f, 0, 0);
	PED::SET_PED_NON_CREATION_AREA(-1318.5f, -678.8826f, 23f, -1296.628f, -631.5449f, 29f);
	uLocal_355 = PED::ADD_SCENARIO_BLOCKING_AREA(-1318.5f, -678.8826f, 23f, -1296.628f, -631.5449f, 29f, 0, 1, 1, 1);
	MISC::CLEAR_AREA_OF_OBJECTS(-1297.8f, -637.42f, 25.55f, 16f, 0);
	uLocal_357[0] = PED::ADD_SCENARIO_BLOCKING_AREA(-1315.68f, -682.7614f, 23.24123f, -1295.266f, -670.376f, 27.9768f, 0, 1, 1, 1);
	MISC::CLEAR_AREA(-1305.332f, -676.3739f, 25.79325f, 10f, 1, 0, 0, 0);
	uLocal_357[1] = PED::ADD_SCENARIO_BLOCKING_AREA(-1286.906f, -697.5593f, 21.7392f, -1279.698f, -691.5876f, 26.33636f, 0, 1, 1, 1);
	MISC::CLEAR_AREA(-1287.702f, -698.1957f, 27.50166f, 10f, 1, 0, 0, 0);
	uLocal_357[2] = PED::ADD_SCENARIO_BLOCKING_AREA(-1270.72f, -723.8903f, 19.46898f, -1262.898f, -718.2786f, 24.43682f, 0, 1, 1, 1);
	MISC::CLEAR_AREA(-1269.86f, -722.4664f, 21.54627f, 8f, 1, 0, 0, 0);
	uLocal_357[3] = PED::ADD_SCENARIO_BLOCKING_AREA(-1268.057f, -731.5182f, 18.92047f, -1263.574f, -727.5502f, 24.05783f, 0, 1, 1, 1);
	MISC::CLEAR_AREA(-1266.431f, -728.9227f, 21.08542f, 2.5f, 1, 0, 0, 0);
	uLocal_357[3] = PED::ADD_SCENARIO_BLOCKING_AREA(-1237.024f, -777.4222f, 15.58289f, -1221.889f, -764.5969f, 20.58871f, 0, 1, 1, 1);
	MISC::CLEAR_AREA(-1231.441f, -770.9479f, 17.70891f, 8.5f, 1, 0, 0, 0);
	uLocal_357[4] = PED::ADD_SCENARIO_BLOCKING_AREA(-1222.448f, -786.7349f, 13.60073f, -1215.773f, -780.2021f, 20.43715f, 0, 1, 1, 1);
	MISC::CLEAR_AREA(-1222.008f, -783.6834f, 16.73119f, 7.5f, 1, 0, 0, 0);
	MISC::CLEAR_AREA_OF_VEHICLES(-1459.2f, -736.9f, 23.6f, 50f, 0, 0, 0, 1, 0);
	MISC::CLEAR_AREA_OF_VEHICLES(-1332.2f, -537.6f, 31.5f, 30f, 0, 0, 0, 1, 0);
}

void func_440(struct<3> Param0, float fParam1, int iParam2, int iParam3)//Position - 0x351F5
{
	struct<3> Var0;
	var uVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(Global_164D7.f_4))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_164D7.f_4, 0))
		{
			if (func_483(24) != Global_164D7.f_4)
			{
				if (iParam2 == 1)
				{
					if (func_480(ENTITY::GET_ENTITY_COORDS(Global_164D7.f_4, 1), iParam3, &Var0, &uVar1))
					{
						Param0 = { Var0 };
						fParam1 = uVar1;
					}
				}
				func_441(Global_164D7.f_4, Param0, fParam1, 24, 0);
			}
		}
	}
}

void func_441(int iParam0, struct<3> Param1, float fParam2, int iParam3, bool bParam4)//Position - 0x35270
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
		func_479(iParam3);
		Var0.f_9 = 25;
		Var0.f_23 = 2;
		func_476(iParam0, &Var0);
		if (func_58(Param1, 0f, 0f, 0f))
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
		func_472(iParam3, Var0, Param1, fParam2, func_475(iParam0));
		func_442(iParam3, iParam0, 0);
	}
}

void func_442(int iParam0, int iParam1, int iParam2)//Position - 0x3539B
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_469(&(Global_10642.f_22B[0 /*21*/]), iParam0))
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
				Global_17C49.f_47C3.f_1099 = func_458();
			}
			if (iParam1 != Global_10642.f_8B[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_483(iParam0);
					if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)) && iParam1 != iVar0)
					{
						func_443(iVar0, 145);
					}
				}
				Global_109CC = iParam1;
				Global_109CD = iParam0;
				Global_109CE = iParam2;
			}
		}
	}
}

void func_443(int iParam0, int iParam1)//Position - 0x354B8
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_444(iParam0))
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
	func_476(iParam0, &(Global_17C49.f_47C3.f_1286));
}

int func_444(int iParam0)//Position - 0x356B9
{
	if ((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) || func_456(iParam0, 0, 0)) || func_456(iParam0, 1, 0)) || func_456(iParam0, 2, 0)) || func_475(iParam0) != 145) || func_455(iParam0)) || func_454(iParam0)) || func_453(iParam0)) || func_452(iParam0)) || !func_445(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (func_454(iParam0))
		{
		}
		if (func_454(iParam0))
		{
		}
		if (func_456(iParam0, 0, 0))
		{
		}
		if (func_456(iParam0, 1, 0))
		{
		}
		if (func_456(iParam0, 2, 0))
		{
		}
		if (func_475(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_445(int iParam0)//Position - 0x35796
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_446(iParam0))
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

int func_446(int iParam0)//Position - 0x35946
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
		if (!func_451())
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
		if ((((!func_450() && !func_449()) && !func_448()) && !func_447()) && !func_451())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((MISC::IS_DURANGO_VERSION() || MISC::IS_PC_VERSION()) || MISC::IS_ORBIS_VERSION())
		{
		}
		else if (!func_448())
		{
			return 0;
		}
	}
	return 1;
}

int func_447()//Position - 0x35B15
{
	return 0;
}

int func_448()//Position - 0x35B1E
{
	return 1;
}

int func_449()//Position - 0x35B27
{
	return 1;
}

int func_450()//Position - 0x35B30
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_451()//Position - 0x35B49
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

int func_452(int iParam0)//Position - 0x35BCC
{
	int iVar0;
	char* sVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	sVar1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0);
	if (iVar0 == joaat("speedo") && MISC::ARE_STRINGS_EQUAL(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_446(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_453(int iParam0)//Position - 0x35C11
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

int func_454(int iParam0)//Position - 0x35C4C
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

int func_455(int iParam0)//Position - 0x35CC8
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

int func_456(int iParam0, int iParam1, bool bParam2)//Position - 0x35DB0
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_457(iParam1, iVar0, &sVar1, &iVar2))
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

int func_457(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0x35E21
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

var func_458()//Position - 0x35EFA
{
	var uVar0;
	
	func_468(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_467(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_466(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_461(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_460(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_459(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_459(var uParam0, int iParam1)//Position - 0x35F40
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

void func_460(var uParam0, int iParam1)//Position - 0x35FC6
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_461(var uParam0, int iParam1)//Position - 0x35FF9
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_465(*uParam0);
	iVar1 = func_463(*uParam0);
	if (iParam1 < 1 || iParam1 > func_462(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_462(int iParam0, int iParam1)//Position - 0x3604A
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

var func_463(int iParam0)//Position - 0x360EC
{
	return (SYSTEM::SHIFT_RIGHT(uParam0, 26) & 31 * func_464(MISC::IS_BIT_SET(uParam0, 31), -1, 1)) + 2011;
}

int func_464(bool bParam0, int iParam1, int iParam2)//Position - 0x36111
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_465(var uParam0)//Position - 0x36128
{
	return uParam0 & 15;
}

void func_466(var uParam0, int iParam1)//Position - 0x36135
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_467(var uParam0, int iParam1)//Position - 0x3616F
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_468(var uParam0, int iParam1)//Position - 0x361AA
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_469(var uParam0, int iParam1)//Position - 0x361E6
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
			uParam0->f_4 = func_470(0, 1);
			uParam0->f_C = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_470(0, 1);
			uParam0->f_C = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_470(1, 1);
			uParam0->f_C = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_470(1, 2);
			uParam0->f_C = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_470(1, 1);
			uParam0->f_C = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_470(1, 2);
			uParam0->f_C = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_470(2, 1);
			uParam0->f_C = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_470(2, 1);
			uParam0->f_C = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_470(2, 1);
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
			if (func_451())
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
			if (func_451())
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
		if (!func_58(Global_17C49.f_47C3.f_520[uParam0->f_E /*3*/], 0f, 0f, 0f))
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
		if (!func_58(Global_17C49.f_6C1.f_21B.f_9E0[1 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f))
		{
			*uParam0 = { Global_17C49.f_6C1.f_21B.f_9E0[1 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_17C49.f_6C1.f_21B.f_9F5[1 /*4*/][uParam0->f_C];
		}
	}
	else if (MISC::IS_BIT_SET(uParam0->f_9, 20))
	{
		if (!func_58(Global_17C49.f_6C1.f_21B.f_9E0[0 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f))
		{
			*uParam0 = { Global_17C49.f_6C1.f_21B.f_9E0[0 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_17C49.f_6C1.f_21B.f_9F5[0 /*4*/][uParam0->f_C];
		}
	}
	return iVar0;
}

int func_470(int iParam0, int iParam1)//Position - 0x378DB
{
	struct<58> Var0;
	
	if (func_234(iParam0))
	{
		Var0.f_B = 12;
		Var0.f_1F = 25;
		Var0.f_39 = 2;
		func_471(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_471(int iParam0, var uParam1, int iParam2)//Position - 0x3791D
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

void func_472(int iParam0, struct<54> Param1, struct<3> Param2, float fParam3, int iParam4)//Position - 0x37B95
{
	if (func_469(&(Global_10642.f_22B[0 /*21*/]), iParam0))
	{
		if (MISC::IS_BIT_SET(Global_10642.f_22B[0 /*21*/].f_9, 10))
		{
			func_474(iParam0);
			func_473(Param1, &(Global_17C49.f_47C3.f_45[Global_10642.f_22B[0 /*21*/].f_E /*54*/]));
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
			func_261(iParam0, 1);
		}
	}
}

void func_473(struct<54> Param0, var uParam1)//Position - 0x37C97
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

void func_474(int iParam0)//Position - 0x37D62
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_469(&(Global_10642.f_22B[0 /*21*/]), iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_10642.f_8B[iParam0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_10642.f_8B[iParam0], 1, 1);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_10642.f_8B[iParam0]));
			Global_10642.f_8B[iParam0] = 0;
		}
		if (MISC::IS_BIT_SET(Global_10642.f_22B[0 /*21*/].f_9, 13))
		{
			func_261(iParam0, 0);
		}
	}
}

int func_475(int iParam0)//Position - 0x37DDC
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

void func_476(int iParam0, var uParam1)//Position - 0x37E3F
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		func_112(uParam1);
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
		func_478(&iParam0, &(uParam1->f_9), &(uParam1->f_23));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
			{
				MISC::SET_BIT(&(uParam1->f_35), func_477(iVar0 + 1));
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

int func_477(int iParam0)//Position - 0x380EC
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

int func_478(int iParam0, var uParam1, var uParam2)//Position - 0x3819C
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

void func_479(int iParam0)//Position - 0x38276
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_474(iParam0);
	func_261(iParam0, 0);
}

int func_480(struct<3> Param0, int iParam1, var uParam2, var uParam3)//Position - 0x3829D
{
	int iVar0;
	
	iVar0 = func_481(Param0, iParam1, 1);
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

int func_481(struct<3> Param0, int iParam1, int iParam2)//Position - 0x383B3
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
				if (func_482(iVar0) || iParam2 == 0)
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

bool func_482(int iParam0)//Position - 0x38442
{
	return MISC::IS_BIT_SET(Global_17C49.f_156E[iParam0], 0);
}

int func_483(int iParam0)//Position - 0x3845A
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_10642.f_8B[iParam0];
}

bool func_484(struct<3> Param0, int iParam1)//Position - 0x38476
{
	return func_485(Global_164D7.f_877.f_C.f_2A, Param0, iParam1);
}

int func_485(int iParam0, struct<3> Param1, int iParam2)//Position - 0x38493
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam2 == 1)
	{
		Param1 = { func_493() };
	}
	MISC::GET_MODEL_DIMENSIONS(iParam0, &Var0, &Var1);
	if ((Var1.x - Var0.x) > Param1.x)
	{
		return 0;
	}
	else if ((Var1.f_1 - Var0.f_1) > Param1.f_1)
	{
		return 0;
	}
	else if ((Var1.f_2 - Var0.f_2) > Param1.f_2)
	{
		return 0;
	}
	return 1;
}

void func_486(struct<3> Param0, struct<3> Param1, float fParam2, struct<3> Param3, float fParam4, struct<3> Param5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)//Position - 0x384FD
{
	func_487(Param0, Param1, fParam2, Param3, fParam4, Param5, bParam6, bParam7, bParam8, bParam9, bParam10);
}

void func_487(struct<3> Param0, struct<3> Param1, float fParam2, struct<3> Param3, float fParam4, struct<3> Param5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)//Position - 0x38527
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (bParam7)
	{
		bParam7 = false;
	}
	bVar2 = true;
	iVar3 = 0;
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 0);
			iVar3 = 1;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
		{
			if (bParam10)
			{
				func_492(iVar0);
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, Param0, Param1, fParam2, 0, 1, 0))
			{
				bVar1 = true;
			}
			else
			{
				Var6 = { ENTITY::GET_ENTITY_COORDS(iVar0, 1) };
				if ((Var6.f_2 > Param0.f_2 && Var6.f_2 < Param1.f_2) || (Var6.f_2 > Param1.f_2 && Var6.f_2 < Param0.f_2))
				{
					if (func_489(iVar0, Param0, Param1, fParam2))
					{
						bVar1 = true;
					}
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
			{
				if (VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("taxi")))
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) != PLAYER::PLAYER_PED_ID() && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) != 0)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0 + Param1 / Vector(2f, 2f, 2f), ENTITY::GET_ENTITY_COORDS(iVar0, 1), 1) < 20f)
						{
							bVar1 = true;
							bVar2 = false;
						}
					}
				}
			}
			if (bParam8)
			{
				if (func_456(iVar0, func_290(), 1))
				{
					bVar1 = false;
				}
			}
			if (bVar1)
			{
				if (!func_488(Param5))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
					{
						iVar7 = ENTITY::GET_ENTITY_MODEL(iVar0);
						VEHICLE::_GET_VEHICLE_SUSPENSION_BOUNDS(iVar0, &Var4, &Var5);
						if (VEHICLE::IS_THIS_MODEL_A_HELI(iVar7))
						{
							Param5.x = (Param5.x + 3f);
							Param5.f_1 = (Param5.f_1 + 3f);
						}
						if (((iVar7 == joaat("zentorno") || iVar7 == joaat("btype")) || iVar7 == joaat("dubsta3")) || iVar7 == joaat("monster"))
						{
							Param5 = { Param5 * Vector(1.1f, 1.1f, 1.1f) };
						}
						else if (iVar7 == joaat("t20") || iVar7 == joaat("virgo"))
						{
							Param5 = { Param5 * Vector(1.2f, 1.2f, 1.2f) };
						}
						if ((Var5.x - Var4.x) > Param5.x)
						{
							bVar2 = false;
						}
						else if ((Var5.f_1 - Var4.f_1) > Param5.f_1)
						{
							bVar2 = false;
						}
						else if ((Var5.f_2 - Var4.f_2) > Param5.f_2)
						{
							bVar2 = false;
						}
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
				{
					if (bVar2)
					{
						MISC::CLEAR_AREA_OF_VEHICLES(Param3, 5f, 0, 0, 0, 0, 0);
						ENTITY::SET_ENTITY_HEADING(iVar0, uParam4);
						ENTITY::SET_ENTITY_COORDS(iVar0, Param3, 1, 0, 0, 1);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0);
						if (bParam9)
						{
							VEHICLE::SET_VEHICLE_ENGINE_ON(iVar0, 0, 1);
							VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar0, 1);
						}
					}
					else
					{
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0) || !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, 1))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 1);
						}
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, 0))
						{
							ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iVar0, 1), 1, 0, 0, 1);
						}
						VEHICLE::DELETE_VEHICLE(&iVar0);
					}
				}
			}
			if (bParam6)
			{
				MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(Param0, Param1, fParam2, 0, 0, 0, 0, 0);
			}
			if (iVar3 == 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar0);
					}
				}
			}
		}
		else
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 0);
			}
			iVar8 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar8) && !PED::IS_PED_INJURED(iVar8))
			{
				ENTITY::SET_ENTITY_COORDS(iVar8, ENTITY::GET_ENTITY_COORDS(iVar8, 1), 1, 0, 0, 1);
			}
			iVar9 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar0));
			if (iVar9 <= 2)
			{
				iVar8 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar8) && !PED::IS_PED_INJURED(iVar8))
				{
					ENTITY::SET_ENTITY_COORDS(iVar8, ENTITY::GET_ENTITY_COORDS(iVar8, 1), 1, 0, 0, 1);
				}
			}
			if (iVar9 <= 4)
			{
				iVar8 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar8) && !PED::IS_PED_INJURED(iVar8))
				{
					ENTITY::SET_ENTITY_COORDS(iVar8, ENTITY::GET_ENTITY_COORDS(iVar8, 1), 1, 0, 0, 1);
				}
				iVar8 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 2);
				if (ENTITY::DOES_ENTITY_EXIST(iVar8) && !PED::IS_PED_INJURED(iVar8))
				{
					ENTITY::SET_ENTITY_COORDS(iVar8, ENTITY::GET_ENTITY_COORDS(iVar8, 1), 1, 0, 0, 1);
				}
			}
			VEHICLE::DELETE_VEHICLE(&iVar0);
		}
	}
}

int func_488(struct<3> Param0)//Position - 0x3890D
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_489(int iParam0, struct<3> Param1, struct<3> Param2, float fParam3)//Position - 0x38937
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6[4];
	struct<2> Var7;
	struct<2> Var8;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		Param1.f_2 = Param2.f_2;
		Var0 = { func_491(Param1 - Param2) };
		Var1 = { Var0 };
		Var0.x = -Var1.f_1;
		Var0.f_1 = Var1.x;
		Var0.f_2 = 0f;
		Var2 = { Param1 - Var0 * FtoV((fParam3 / 2f)) };
		Var3 = { Param1 + Var0 * FtoV((fParam3 / 2f)) };
		Var4 = { Param2 - Var0 * FtoV((fParam3 / 2f)) };
		Var5 = { Param2 + Var0 * FtoV((fParam3 / 2f)) };
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var7, &Var8);
		Var6[0 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var7, Var7.f_1, 0f) };
		Var6[1 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var7, Var8.f_1, 0f) };
		Var6[2 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var8, Var7.f_1, 0f) };
		Var6[3 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var8, Var8.f_1, 0f) };
		if (((((((((((((((func_490(Var6[0 /*3*/], Var6[1 /*3*/], Var2, Var3) || func_490(Var6[0 /*3*/], Var6[1 /*3*/], Var3, Var5)) || func_490(Var6[0 /*3*/], Var6[1 /*3*/], Var4, Var5)) || func_490(Var6[0 /*3*/], Var6[1 /*3*/], Var2, Var4)) || func_490(Var6[1 /*3*/], Var6[3 /*3*/], Var2, Var3)) || func_490(Var6[1 /*3*/], Var6[3 /*3*/], Var3, Var5)) || func_490(Var6[1 /*3*/], Var6[3 /*3*/], Var4, Var5)) || func_490(Var6[1 /*3*/], Var6[3 /*3*/], Var2, Var4)) || func_490(Var6[3 /*3*/], Var6[2 /*3*/], Var2, Var3)) || func_490(Var6[3 /*3*/], Var6[2 /*3*/], Var3, Var5)) || func_490(Var6[3 /*3*/], Var6[2 /*3*/], Var4, Var5)) || func_490(Var6[3 /*3*/], Var6[2 /*3*/], Var2, Var4)) || func_490(Var6[2 /*3*/], Var6[0 /*3*/], Var2, Var3)) || func_490(Var6[2 /*3*/], Var6[0 /*3*/], Var3, Var5)) || func_490(Var6[2 /*3*/], Var6[0 /*3*/], Var4, Var5)) || func_490(Var6[2 /*3*/], Var6[0 /*3*/], Var2, Var4))
		{
			return 1;
		}
	}
	return 0;
}

int func_490(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3, struct<2> Param4, var uParam5, struct<2> Param6, var uParam7)//Position - 0x38C2D
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
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	
	fVar0 = Param0;
	fVar1 = Param0.f_1;
	fVar2 = Param2;
	fVar3 = Param2.f_1;
	fVar4 = Param4;
	fVar5 = Param4.f_1;
	fVar6 = Param6;
	fVar7 = Param6.f_1;
	fVar8 = (fVar2 - fVar0);
	fVar9 = (fVar3 - fVar1);
	fVar10 = (fVar6 - fVar4);
	fVar11 = (fVar7 - fVar5);
	fVar12 = (((-fVar9 * (fVar0 - fVar4)) + (fVar8 * (fVar1 - fVar5))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	fVar13 = (((fVar10 * (fVar1 - fVar5)) - (fVar11 * (fVar0 - fVar4))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	if (((fVar12 >= 0f && fVar12 <= 1f) && fVar13 >= 0f) && fVar13 <= 1f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_491(struct<3> Param0)//Position - 0x38CE1
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

void func_492(int iParam0)//Position - 0x38D20
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iParam0) <= 200f)
			{
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam0, 500f);
			}
			if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iParam0) <= 700f)
			{
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam0, 900f);
			}
			if (ENTITY::GET_ENTITY_HEALTH(iParam0) < 200)
			{
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam0, 500f);
			}
		}
	}
}

Vector3 func_493()//Position - 0x38D85
{
	return 2.55f, 5.59f, 2.55f;
}

void func_494()//Position - 0x38D9C
{
	if (bLocal_275)
	{
		if (((iLocal_271 != 5 && iLocal_271 != 0) && iLocal_271 != 3) && iLocal_271 != 4)
		{
			func_495();
			if (iLocal_320 != 0)
			{
				func_286(5);
			}
		}
	}
}

void func_495()//Position - 0x38DE0
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (ENTITY::DOES_ENTITY_EXIST(Local_532) && ENTITY::DOES_ENTITY_EXIST(Local_531))
	{
		if (ENTITY::IS_ENTITY_DEAD(Local_532) || PED::IS_PED_INJURED(Local_532))
		{
			iLocal_320 = 5;
			return;
		}
		if (ENTITY::IS_ENTITY_DEAD(Local_531) || PED::IS_PED_INJURED(Local_531))
		{
			iLocal_320 = 7;
			return;
		}
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_532, PLAYER::PLAYER_PED_ID(), 1))
		{
			PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
			iLocal_320 = 4;
			return;
		}
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_531, PLAYER::PLAYER_PED_ID(), 1))
		{
			PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
			iLocal_320 = 6;
			return;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_533))
	{
		if (ENTITY::IS_ENTITY_DEAD(Local_533) || PED::IS_PED_INJURED(Local_533))
		{
			iLocal_320 = 1;
			return;
		}
		else if (ENTITY::DOES_ENTITY_EXIST(Local_535))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_535) && FIRE::IS_ENTITY_ON_FIRE(Local_535))
			{
				VEHICLE::EXPLODE_VEHICLE(Local_535, 1, 0);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_534))
	{
		if ((ENTITY::IS_ENTITY_DEAD(Local_534) || ENTITY::IS_ENTITY_IN_WATER(Local_534)) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_534, 0))
		{
			iLocal_320 = 3;
			return;
		}
		else if (iLocal_271 != 0)
		{
			if (VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(Local_534))
			{
				if (func_284(iLocal_330, 3000))
				{
					iLocal_320 = 3;
					return;
				}
			}
			else
			{
				iLocal_330 = MISC::GET_GAME_TIMER();
			}
		}
	}
	if (((iLocal_320 == 8 || iLocal_320 == 9) || iLocal_320 == 10) || iLocal_320 == 2)
	{
		return;
	}
	if (iLocal_271 == 1 || iLocal_271 == 2)
	{
		if (func_20(Local_533))
		{
			if (fLocal_339 > 200f)
			{
				iLocal_320 = 2;
				return;
			}
			if (fLocal_340 > 50000f && fLocal_340 < 58000f)
			{
				if (iLocal_279 || !PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_534))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -668.3635f, -658.3801f, 27.43382f, -440.022f, -657.4238f, 40.25127f, 40f, 0, 1, 0))
					{
						iLocal_320 = 2;
						return;
					}
				}
			}
		}
		if ((func_13(Local_534) && func_10(Local_532)) && func_10(Local_531))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_532, Local_534))
			{
				if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_531, Local_534))
				{
					if (!iLocal_290)
					{
						if (!func_368(Local_532, Var0, 60f) || !func_368(Local_531, Var0, 60f))
						{
							func_18();
							func_323("NIGEL2_08", 7500, 1);
							iLocal_290 = 1;
						}
					}
					else if (func_368(Local_532, Var0, 30f) && func_368(Local_531, Var0, 30f))
					{
						if (func_336("NIGEL2_08", 0, 0))
						{
							HUD::CLEAR_THIS_PRINT("NIGEL2_08");
						}
						iLocal_290 = 0;
					}
					else if (!func_368(Local_532, Var0, 100f) && !func_368(Local_531, Var0, 100f))
					{
						iLocal_320 = 8;
						return;
					}
				}
				else if (!iLocal_290)
				{
					if (!func_368(Local_532, Var0, 60f))
					{
						func_18();
						func_323("NIGEL2_05", 7500, 1);
						iLocal_290 = 1;
					}
				}
				else if (func_368(Local_532, Var0, 30f))
				{
					if (func_336("NIGEL2_05", 0, 0))
					{
						HUD::CLEAR_THIS_PRINT("NIGEL2_05");
					}
					iLocal_290 = 0;
				}
				else if (!func_368(Local_532, Var0, 100f))
				{
					iLocal_320 = 9;
					return;
				}
			}
			else if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_531, Local_534))
			{
				if (!iLocal_290)
				{
					if (!func_368(Local_531, Var0, 60f))
					{
						func_18();
						func_323("NIGEL2_09", 7500, 1);
						iLocal_290 = 1;
					}
				}
				else if (func_368(Local_531, Var0, 30f))
				{
					if (func_336("NIGEL2_09", 0, 0))
					{
						HUD::CLEAR_THIS_PRINT("NIGEL2_09");
					}
					iLocal_290 = 0;
				}
				else if (!func_368(Local_531, Var0, 100f))
				{
					iLocal_320 = 10;
					return;
				}
			}
			else if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_534))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(Local_534, 1) };
				fLocal_341 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var1);
				if (!iLocal_290)
				{
					if (fLocal_341 > 60f)
					{
						func_18();
						func_323("NIGEL2_08", 7500, 1);
						iLocal_290 = 1;
					}
				}
				else if (fLocal_341 > 100f)
				{
					iLocal_320 = 8;
					return;
				}
				else if (fLocal_341 < 30f)
				{
					if (func_336("NIGEL2_08", 0, 0))
					{
						HUD::CLEAR_THIS_PRINT("NIGEL2_08");
					}
					iLocal_290 = 0;
				}
				if (bLocal_299)
				{
					if (fLocal_339 < 35f)
					{
						if (func_496(Local_534))
						{
							iLocal_320 = 8;
							return;
						}
					}
				}
			}
		}
	}
}

int func_496(int iParam0)//Position - 0x392D1
{
	struct<3> Var0;
	int iVar1;
	
	if (!INTERIOR::IS_VALID_INTERIOR(iLocal_336))
	{
		return 0;
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
		if (INTERIOR::GET_INTERIOR_AT_COORDS(Var0) == iLocal_336)
		{
			iVar1 = INTERIOR::GET_KEY_FOR_ENTITY_IN_ROOM(iParam0);
			if (func_60(iVar1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_497(struct<6> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x39321
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	float fVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var uVar10;
	int iVar11;
	
	if (Global_10B93 != 6)
	{
		if (Global_10B95 == -1)
		{
			if (func_508(1, Param0))
			{
				if (Global_10B96 == 3)
				{
					fVar0 = 1.5f;
				}
				else
				{
					fVar0 = 2.5f;
				}
				if (fLocal_32 > fVar0)
				{
					Global_10B95 = MISC::GET_GAME_TIMER();
					Local_33 = { HUD::GET_HUD_COMPONENT_POSITION(15) };
					fLocal_32 = 0f;
				}
				else
				{
					fLocal_32 = (fLocal_32 + MISC::GET_FRAME_TIME());
				}
			}
			else
			{
				fLocal_32 = 0f;
			}
		}
		else
		{
			if (!func_508(0, Param0))
			{
				Global_10B95 = (MISC::GET_GAME_TIMER() - 9000);
			}
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
			iVar1 = (MISC::GET_GAME_TIMER() - Global_10B95);
			if (iVar1 < 9000 && !CAM::IS_SCREEN_FADED_OUT())
			{
				iVar2 = 255;
				if (iVar1 < 1000)
				{
					iVar2 = SYSTEM::CEIL(((SYSTEM::TO_FLOAT(iVar1) / 1000f) * 255f));
				}
				else
				{
					iVar3 = (9000 - iVar1);
					if (iVar3 < 1000)
					{
						iVar2 = SYSTEM::CEIL(((SYSTEM::TO_FLOAT(iVar3) / 1000f) * 255f));
					}
				}
				switch (Global_10B93)
				{
					case 3:
					case 5:
						if (iParam1 == 1)
						{
							fVar5 = 0f;
							fVar6 = -0.07f;
						}
						else if (iParam2 == 1)
						{
							fVar5 = 0f;
							fVar6 = -0.077f;
						}
						else if (iParam3 == 1)
						{
							fVar5 = 0f;
							fVar6 = -0.05f;
						}
						else if (iParam4 == 1)
						{
							fVar5 = 0f;
							fVar6 = -0.035f;
						}
						else
						{
							fVar5 = 0f;
							fVar6 = -0.014f;
						}
						break;
					
					default:
						fVar5 = 0f;
						fVar6 = -0.014f;
						break;
				}
				GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
				HUD::SET_TEXT_FONT(1);
				HUD::SET_TEXT_JUSTIFICATION(2);
				iVar11 = func_290();
				if (Global_10B96 == 1 && Global_10B94 == 62)
				{
					iVar11 = Global_17C49.f_6C1.f_21B.f_C8E;
				}
				switch (iVar11)
				{
					case 0:
						HUD::GET_HUD_COLOUR(143, &iVar7, &iVar8, &iVar9, &uVar10);
						break;
					
					case 1:
						HUD::GET_HUD_COLOUR(144, &iVar7, &iVar8, &iVar9, &uVar10);
						break;
					
					case 2:
						HUD::GET_HUD_COLOUR(145, &iVar7, &iVar8, &iVar9, &uVar10);
						break;
					
					default:
						iVar7 = 240;
						iVar8 = 200;
						iVar9 = 80;
				}
				HUD::SET_TEXT_COLOUR(iVar7, iVar8, iVar9, iVar2);
				HUD::SET_TEXT_DROP_SHADOW();
				Var4 = { func_499(Global_10B94, Global_10B96, iParam5) };
				if (fVar6 == -0.014f)
				{
				}
				GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fVar5, fVar6, 0f, 0.01f);
				HUD::SET_TEXT_SCALE(0.67f, 0.67f);
				if (!GRAPHICS::GET_IS_WIDESCREEN() && !GRAPHICS::GET_IS_HIDEF())
				{
					fLocal_35 = 0.14f;
				}
				else
				{
					fLocal_35 = 0.17f;
				}
				if (fVar6 == -0.014f)
				{
					if (func_498(&Var4) > fLocal_35)
					{
						if (HUD::IS_HUD_COMPONENT_ACTIVE(15))
						{
							HUD::SET_HUD_COMPONENT_POSITION(15, Local_33.x, (Local_33.f_1 + fLocal_34));
							Global_10B98 = 1;
						}
					}
				}
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&Var4);
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar5, fVar6, 0);
				GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
				if (Global_10B97 == 1)
				{
					func_252();
					fLocal_32 = 0f;
				}
			}
			else
			{
				func_252();
				fLocal_32 = 0f;
			}
		}
	}
}

float func_498(var uParam0)//Position - 0x39606
{
	HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(uParam0);
	return HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
}

struct<2> func_499(int iParam0, int iParam1, int iParam2)//Position - 0x39619
{
	struct<2> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 8);
	switch (iParam1)
	{
		case 1:
			Var0 = { func_507(iParam0) };
			break;
		
		case 7:
			Var0 = { func_238(iParam0) };
			break;
		
		case 3:
			iVar1 = iParam0;
			switch (iVar1)
			{
				case 0:
					Var0 = { func_506(iParam2) };
					break;
				
				case 8:
					Var0 = { func_505(iParam2) };
					break;
				
				case 7:
					Var0 = { func_504(iParam2) };
					break;
				
				case 10:
					Var0 = { func_503(iParam2) };
					break;
				
				case 5:
					Var0 = { func_502(iParam2) };
					break;
				
				case 4:
					Var0 = { func_501(iParam2) };
					break;
				
				default:
					StringCopy(&Var0, func_500(iVar1), 8);
					break;
			}
			break;
		
		default:
			break;
	}
	return Var0;
}

char* func_500(int iParam0)//Position - 0x396F0
{
	switch (iParam0)
	{
		case 0:
			return "MG_BJUM";
			break;
		
		case 1:
			return "MG_DART";
			break;
		
		case 2:
			return "MG_GOLF";
			break;
		
		case 3:
			return "MG_HUNT";
			break;
		
		case 4:
			return "MG_OFFR";
			break;
		
		case 5:
			return "MG_PILO";
			break;
		
		case 6:
			return "MG_RMPG";
			break;
		
		case 7:
			return "MG_SERA";
			break;
		
		case 8:
			return "MG_SRAC";
			break;
		
		case 9:
			return "MG_STRP";
			break;
		
		case 10:
			return "MG_STNT";
			break;
		
		case 11:
			return "MG_SHTR";
			break;
		
		case 12:
			return "MG_TAXI";
			break;
		
		case 13:
			return "MG_TENN";
			break;
		
		case 14:
			return "MG_TOWI";
			break;
		
		case 15:
			return "MG_TRFA";
			break;
		
		case 16:
			return "MG_TRFG";
			break;
		
		case 17:
			return "MG_TRIA";
			break;
		
		case 18:
			return "MG_YOGA";
			break;
		
		case 19:
			return "MG_CRCE";
			break;
	}
	return "INVALID!";
}

struct<2> func_501(int iParam0)//Position - 0x39843
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "MGOR_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_502(int iParam0)//Position - 0x39877
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "MGFS_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_503(int iParam0)//Position - 0x398AB
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "MGSP_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_504(int iParam0)//Position - 0x398DF
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "MGSR_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_505(int iParam0)//Position - 0x39913
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1) || iParam0 == 3)
	{
	}
	else
	{
		StringCopy(&Var0, "MGCR_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_506(int iParam0)//Position - 0x39951
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "MGBJ_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_507(int iParam0)//Position - 0x39985
{
	struct<2> Var0;
	
	StringCopy(&Var0, "M_", 8);
	StringConCat(&Var0, &(Global_13D03[iParam0 /*34*/].f_8), 8);
	if (iParam0 == 90)
	{
		switch (Global_17C49.f_1CAD.f_63.f_CB[7])
		{
			case 1:
				StringConCat(&Var0, "A", 8);
				break;
			
			case 2:
				StringConCat(&Var0, "B", 8);
				break;
			
			default:
				StringConCat(&Var0, "A", 8);
				break;
			}
	}
	return Var0;
}

int func_508(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x399EE
{
	if (((!func_510(0) || Global_10BA2) || Global_10B97 == 1) || !CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	switch (Global_10B93)
	{
		case 0:
			if (MISC::ARE_STRINGS_EQUAL(&uParam1, "NONE") || MISC::IS_STRING_NULL_OR_EMPTY(&uParam1))
			{
				Global_10B93 = 3;
			}
			else
			{
				Global_10B93 = 1;
			}
			break;
		
		case 1:
			if (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				Global_10B93 = 2;
			}
			break;
		
		case 2:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				Global_10B93 = 4;
				return 1;
			}
			else if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				Global_10B93 = 3;
			}
			break;
		
		case 3:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
			}
			else
			{
				Global_10B93 = 5;
				return 1;
			}
			break;
		
		case 4:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				return 1;
			}
			else if (iParam0 == 1)
			{
				Global_10B93 = 5;
			}
			break;
		
		case 5:
			if ((CUTSCENE::IS_CUTSCENE_PLAYING() || func_9(0)) || func_509(1))
			{
			}
			else
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_509(bool bParam0)//Position - 0x39B06
{
	if (bParam0)
	{
		return (Global_42CA.f_4 && Global_42CA.f_68 == 4);
	}
	return Global_42CA.f_4;
}

int func_510(int iParam0)//Position - 0x39B2F
{
	if (Global_8861 == 15)
	{
		return 0;
	}
	if (func_511(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_511(int iParam0)//Position - 0x39B51
{
	return func_512(iParam0, Global_8861);
}

int func_512(int iParam0, int iParam1)//Position - 0x39B62
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

void func_513(int iParam0, bool bParam1)//Position - 0x39D43
{
	func_522(bParam1, 1);
	if (!func_45())
	{
		func_33("NIGEL2_MISSION_FAIL", 0);
	}
	if (bParam1)
	{
		func_514();
	}
	iLocal_272 = iParam0;
	bLocal_275 = false;
	if (func_45())
	{
		iLocal_276 = 1;
	}
	else
	{
		iLocal_276 = 0;
	}
	if (!func_45())
	{
		if (iLocal_272 == 0)
		{
			if (func_10(PLAYER::PLAYER_PED_ID()))
			{
				func_16(PLAYER::PLAYER_PED_ID(), -1309.016f, -641.8671f, 25.5017f, 242.3463f, 0, 0);
				func_3(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 50f, 13, 5000, 0, 0);
				iLocal_276 = 1;
			}
		}
	}
	func_1(iLocal_272);
}

void func_514()//Position - 0x39DE3
{
	func_515(1, 0);
	if (!func_45() && bLocal_275)
	{
		while (!func_33("NIGEL2_MISSION_FAIL", 0))
		{
			SYSTEM::WAIT(0);
		}
	}
	CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!func_45())
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		}
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
	}
	func_527();
	func_286(0);
}

void func_515(bool bParam0, bool bParam1)//Position - 0x39E59
{
	int iVar0;
	
	HUD::CLEAR_PRINTS();
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		HUD::CLEAR_HELP(1);
	}
	func_18();
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	func_520(0);
	func_23(1, 1, 1, 1);
	CAM::STOP_SCRIPT_GLOBAL_SHAKING(0);
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	func_295(0);
	if (!iLocal_291)
	{
		RECORDING::_0x81CBAE94390F9F89();
	}
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-1415.904f, -732.5489f, 17.54549f, -1236.628f, -601.0265f, 31.15345f, 23f, 1);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(418.2838f, -571.6629f, 24.69794f, 362.0258f, -663.1398f, 38.33998f, 28f, 1);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-668.3635f, -658.3801f, 27.43382f, -440.022f, -657.4238f, 40.25127f, 40f, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-1409.344f, -756.381f, 17.59896f, -1239.148f, -587.1219f, 31.25266f, 1, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(341.2f, -645.83f, 25f, 429.1f, -572.89f, 35f, 1, 1);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_355, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_356, 0);
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_357[iVar0], 0);
		iVar0++;
	}
	PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(-1318.5f, -678.8826f, 23f, -1296.628f, -631.5449f, 28f, 0);
	PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(-496.2885f, -681.5599f, 25f, -481.5988f, -668.7411f, 38f, 0);
	PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(-463.2153f, -829.0475f, 22.4812f, -445.4645f, -813.1011f, 36.56588f, 0);
	PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(341.2f, -645.83f, 25f, 429.1f, -572.89f, 35f, 0);
	PED::CLEAR_PED_NON_CREATION_AREA();
	AUDIO::SET_AGGRESSIVE_HORNS(0);
	func_519(0);
	if (!func_45() && bLocal_275)
	{
		func_33("NIGEL2_MISSION_FAIL", 0);
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 170, 0);
	}
	if (CAM::DOES_CAM_EXIST(uLocal_319))
	{
		CAM::SET_CAM_ACTIVE(uLocal_319, 0);
		CAM::DESTROY_CAM(uLocal_319, 0);
	}
	func_518(1, 1, 1);
	func_517(&uLocal_366, 2);
	func_517(&uLocal_366, 3);
	func_517(&uLocal_366, 4);
	func_517(&uLocal_366, 5);
	func_298(&uLocal_19, 0, 0);
	CAM::SET_FOLLOW_VEHICLE_CAM_VIEW_MODE(1);
	MISC::SET_TIME_SCALE(1f);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_353);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_534.f_1, 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_535.f_1, 0);
	func_90();
	func_47(bParam0);
	func_516(bParam1);
	if (iLocal_271 == 4)
	{
		func_264(75, 2, 1, 1, 0);
		func_264(76, 1, 1, 1, 0);
		func_264(181, 2, 1, 1, 0);
	}
	else
	{
		func_264(75, 0, 0, 1, 0);
		func_264(76, 1, 0, 1, 0);
		func_264(181, 1, 0, 1, 0);
	}
}

void func_516(bool bParam0)//Position - 0x3A126
{
	int iVar0;
	
	iVar0 = 0;
	if (INTERIOR::IS_VALID_INTERIOR(iLocal_336))
	{
		if (INTERIOR::IS_INTERIOR_READY(iLocal_336))
		{
			STREAMING::SET_INTERIOR_ACTIVE(iLocal_336, 0);
			INTERIOR::UNPIN_INTERIOR(iLocal_336);
		}
	}
	if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_352))
	{
		if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_352) != 10)
		{
			OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_352, 9);
		}
	}
	VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_332, sLocal_358);
	VEHICLE::REMOVE_VEHICLE_RECORDING(2, sLocal_358);
	VEHICLE::REMOVE_VEHICLE_RECORDING(1, sLocal_359);
	func_374();
	func_64(0, 1);
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_350))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_350, 0);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_351))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_351, 0);
	}
	STREAMING::REMOVE_PTFX_ASSET();
	if (func_13(Local_535))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_535, 0);
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("NIGEL_02_CHASE"))
	{
		AUDIO::STOP_AUDIO_SCENE("NIGEL_02_CHASE");
	}
	AUDIO::RELEASE_SOUND_ID(iLocal_331);
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	AUDIO::UNREGISTER_SCRIPT_WITH_AUDIO();
	STREAMING::REMOVE_ANIM_DICT("rcmnigel2");
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_348.f_7);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_535.f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_534.f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_533.f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_531.f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_532.f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_344);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_345);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_346);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_347);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_539[iVar0 /*2*/].f_1);
		iVar0++;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_540.f_1);
	if (bParam0)
	{
		HUD::CLEAR_ADDITIONAL_TEXT(0, 1);
	}
}

void func_517(var uParam0, int iParam1)//Position - 0x3A27F
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_518(bool bParam0, int iParam1, int iParam2)//Position - 0x3A29C
{
	bool bVar0;
	
	bVar0 = true;
	if (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		while (bVar0)
		{
			bVar0 = CUTSCENE::IS_CUTSCENE_ACTIVE();
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				CUTSCENE::STOP_CUTSCENE(0);
			}
			if (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				CUTSCENE::REMOVE_CUTSCENE();
			}
			if (CUTSCENE::IS_CUTSCENE_ACTIVE() && !CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				bVar0 = false;
			}
			SYSTEM::WAIT(0);
		}
		if (bParam0)
		{
			func_23(iParam1, iParam2, 1, 1);
		}
	}
}

void func_519(bool bParam0)//Position - 0x3A2FB
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

void func_520(bool bParam0)//Position - 0x3A327
{
	if (bParam0)
	{
		func_521();
		if (Global_3839.f_1 == 10 || Global_3839.f_1 == 9)
		{
			MISC::SET_BIT(&Global_8D8, 16);
		}
		Global_3839.f_1 = 1;
		if (func_9(0))
		{
			func_6(0);
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

void func_521()//Position - 0x3A38A
{
	if (Global_3839.f_1 == 9 || Global_3839.f_1 == 10)
	{
		Global_3D81 = 0;
		Global_3D7D = 1;
	}
}

void func_522(bool bParam0, bool bParam1)//Position - 0x3A3B3
{
	if (bParam0)
	{
		func_518(0, 1, 1);
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_288(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}

void func_523(struct<3> Param0, float fParam1, int iParam2, int iParam3)//Position - 0x3A3E6
{
	if (func_526())
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
		func_44(1);
	}
}

int func_524()//Position - 0x3A47B
{
	if (!Global_15F6A == 10 && !Global_15F6A == 9)
	{
		return 0;
	}
	return Global_15F6A.f_2;
}

void func_525(var uParam0, int iParam1, bool bParam2)//Position - 0x3A4A5
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_10(uParam0->f_1C[iVar0]))
		{
			ENTITY::SET_ENTITY_PROOFS(uParam0->f_1C[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_10(uParam0->f_23[iVar0]))
		{
			ENTITY::SET_ENTITY_PROOFS(uParam0->f_23[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_10(uParam0->f_29[iVar0]))
		{
			ENTITY::SET_ENTITY_PROOFS(uParam0->f_29[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		}
		iVar0++;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), iParam1);
		if (bParam2)
		{
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
		}
	}
}

int func_526()//Position - 0x3A599
{
	if (Global_15F6A == 10 || Global_15F6A == 9)
	{
		return 1;
	}
	return 0;
}

void func_527()//Position - 0x3A5BD
{
	func_531();
	func_529(64, 2, 0);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.2f);
	MISC::ENABLE_DISPATCH_SERVICE(2, 0);
	MISC::ENABLE_DISPATCH_SERVICE(3, 0);
	MISC::ENABLE_DISPATCH_SERVICE(4, 0);
	MISC::ENABLE_DISPATCH_SERVICE(5, 0);
	AUDIO::SET_AGGRESSIVE_HORNS(1);
	func_519(1);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	func_528();
}

void func_528()//Position - 0x3A605
{
	Global_14A41 = 1;
}

void func_529(int iParam0, int iParam1, bool bParam2)//Position - 0x3A612
{
	Global_B85 = iParam0;
	if (Global_61[iParam0 /*10*/].f_8 != 138)
	{
		func_319();
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
						func_530();
					}
				}
				else
				{
					Global_B39[1 /*6*/] = { Global_17C49.f_744E[iParam0 /*29*/].f_3 };
					Global_B39[1 /*6*/].f_5 = iParam1;
					func_530();
				}
			}
			else
			{
				Global_B39[1 /*6*/] = { Global_17C49.f_744E[iParam0 /*29*/].f_3 };
				Global_B39[1 /*6*/].f_5 = iParam1;
				func_530();
			}
		}
	}
}

void func_530()//Position - 0x3A7BC
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

void func_531()//Position - 0x3A83D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		iLocal_280[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		iLocal_277[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		iLocal_278[iVar0] = 0;
		iVar0++;
	}
	iLocal_281 = 0;
	iLocal_283 = 0;
	iLocal_290 = 0;
	iLocal_287 = 0;
	iLocal_288 = 0;
	iLocal_284 = 0;
	iLocal_285 = 0;
	iLocal_286 = 0;
	bLocal_299 = false;
	bLocal_297 = false;
	bLocal_294 = false;
	iLocal_289 = 0;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		iLocal_282[iVar0] = 0;
		iVar0++;
	}
	iLocal_309 = 0;
	iLocal_306 = 0;
	iLocal_307 = 0;
	iLocal_308 = 0;
	iLocal_310 = 0;
	iLocal_311 = 1;
	iLocal_312 = 0;
	iLocal_313 = 0;
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		iLocal_302[iVar0] = 0;
		iVar0++;
	}
	iLocal_296 = 0;
	iLocal_298 = 0;
	iLocal_291 = 1;
	bLocal_292 = false;
	iLocal_295 = 0;
	iLocal_293 = 0;
	bLocal_305 = false;
	iLocal_303 = 0;
	bLocal_304 = false;
	bLocal_300 = false;
	bLocal_301 = false;
	bLocal_314 = false;
	iLocal_315 = 0;
	iLocal_316 = 0;
	iLocal_317 = 0;
	iLocal_318 = 0;
	iLocal_320 = 0;
	iLocal_327 = 0;
	iLocal_322 = 0;
	iLocal_328 = 0;
	iLocal_329 = 0;
	iLocal_330 = 0;
	iLocal_323 = 0;
	iLocal_324 = 0;
	iLocal_321 = 0;
	iLocal_325 = 0;
	iLocal_326 = 0;
	iLocal_331 = -1;
	iLocal_332 = 1;
	iLocal_333 = 0;
	fLocal_339 = 0f;
	fLocal_340 = 0f;
	fLocal_338 = 20.75f;
	fLocal_341 = 0f;
	Local_546 = { 368.5714f, -594.9467f, 45.5422f };
	Local_547 = { 389.5015f, -614.1279f, 29.618f };
	iLocal_337 = 0;
	Local_539[0 /*2*/].f_1 = joaat("boxville2");
	Local_539[1 /*2*/].f_1 = joaat("washington");
	Local_539[2 /*2*/].f_1 = joaat("washington");
	Local_540.f_1 = joaat("sultan");
	iLocal_344 = joaat("a_m_y_business_01");
	iLocal_345 = joaat("s_m_m_doctor_01");
	iLocal_346 = joaat("s_f_y_scrubs_01");
	iLocal_347 = joaat("a_f_y_bevhills_03");
	Local_535.f_1 = joaat("dubsta");
	Local_535.f_3 = { -1290.73f, -634.603f, 26.1004f };
	Local_535.f_6 = 126.961f;
	Local_534.f_1 = func_533();
	Local_534.f_3 = { -1304.01f, -644.58f, 25.91f };
	Local_534.f_6 = 127.67f;
	Local_533.f_1 = func_532();
	Local_533.f_3 = { -1290.048f, -631.459f, 25.6863f };
	Local_533.f_6 = 121.506f;
	Local_531.f_1 = func_565(63);
	Local_531.f_3 = { -1309.61f, -640.33f, 26.53f };
	Local_531.f_6 = -124f;
	Local_532.f_1 = func_565(64);
	Local_532.f_3 = { -1310.24f, -640.19f, 26.53f };
	Local_532.f_6 = -73.78f;
	Local_348.f_1 = { 299.48f, -584.84f, 41.445f };
	Local_348.f_4 = { 0f, 0f, -20f };
	Local_348.f_7 = joaat("prop_hospitaldoors_start");
	iLocal_541 = 0;
	Local_549 = { 394.5f, -619.1f, 28.2f };
	Local_550 = { 0f, 0f, 0f };
	PED::ADD_RELATIONSHIP_GROUP("ENEMIES", &iLocal_353);
	iLocal_354 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_353, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_353);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_353, iLocal_354);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_354, iLocal_353);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_354, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, iLocal_354);
}

int func_532()//Position - 0x3ABA2
{
	return joaat("u_m_m_aldinapoli");
}

int func_533()//Position - 0x3ABAF
{
	return iLocal_92;
}

void func_534()//Position - 0x3ABB9
{
	func_424();
	if (func_543())
	{
		func_515(0, 1);
	}
	func_535(&Local_274, 1, 0, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_535(var uParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x3ABE0
{
	func_541(uParam0, iParam1);
	func_539(uParam0, bParam2);
	func_536(uParam0, bParam3);
}

void func_536(var uParam0, bool bParam1)//Position - 0x3AC00
{
	func_537(&(uParam0->f_29), bParam1);
}

void func_537(var uParam0, bool bParam1)//Position - 0x3AC12
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (bParam1)
		{
			func_51(uParam0[iVar0]);
		}
		else
		{
			func_538(uParam0[iVar0], 0);
		}
		iVar0++;
	}
}

void func_538(var uParam0, bool bParam1)//Position - 0x3AC50
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*uParam0))
		{
			ENTITY::DETACH_ENTITY(*uParam0, 1, 1);
		}
		if (!bParam1)
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(uParam0);
		}
		else
		{
			OBJECT::_MARK_OBJECT_FOR_DELETION(*uParam0);
		}
	}
}

void func_539(var uParam0, bool bParam1)//Position - 0x3AC8B
{
	func_540(&(uParam0->f_23), bParam1);
}

void func_540(var uParam0, bool bParam1)//Position - 0x3AC9D
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (bParam1)
		{
			func_50(uParam0[iVar0]);
		}
		else
		{
			func_49(uParam0[iVar0]);
		}
		iVar0++;
	}
}

void func_541(var uParam0, int iParam1)//Position - 0x3ACDA
{
	func_542(&(uParam0->f_1C), iParam1);
}

void func_542(var uParam0, int iParam1)//Position - 0x3ACEC
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (iParam1 == 1)
		{
			func_54(uParam0[iVar0]);
		}
		else
		{
			func_53(uParam0[iVar0], 0, 1, 0);
		}
		iVar0++;
	}
}

int func_543()//Position - 0x3AD2D
{
	int iVar0;
	
	iVar0 = func_282();
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!Global_178B8[iVar0 /*10*/].f_4)
	{
		return 0;
	}
	Global_178B8[iVar0 /*10*/].f_4 = 0;
	HUD::CLEAR_ADDITIONAL_TEXT(0, 1);
	HUD::CLEAR_ADDITIONAL_TEXT(3, 1);
	HUD::CLEAR_ADDITIONAL_TEXT(2, 1);
	if (!func_95(0))
	{
		if (Global_178B8[iVar0 /*10*/].f_5 && Global_178B8[iVar0 /*10*/].f_6)
		{
			Global_178B8[iVar0 /*10*/].f_6 = 0;
		}
		if (!Global_178B8[iVar0 /*10*/].f_6 && !Global_178B8[iVar0 /*10*/].f_5)
		{
			Global_178B8[iVar0 /*10*/].f_6 = 1;
		}
	}
	return 1;
}

void func_544(bool bParam0)//Position - 0x3ADCE
{
	int iVar0;
	
	func_560();
	if (!func_559())
	{
		iVar0 = func_282();
		if (iVar0 == -1)
		{
			return;
		}
		if (!Global_178B8[iVar0 /*10*/].f_4)
		{
			return;
		}
		if (Global_178B8[iVar0 /*10*/].f_5)
		{
			return;
		}
		if (Global_178B8[iVar0 /*10*/].f_6)
		{
			return;
		}
		if (Global_14A3E == Global_15F8F)
		{
			Global_17C49.f_41BC[iVar0 /*6*/].f_4++;
		}
		Global_14A3E = Global_15F8F;
		if (bParam0)
		{
			func_242(iVar0, 1, 0);
			func_545(SCRIPT::GET_THIS_SCRIPT_NAME(), iVar0);
		}
		else
		{
			if (Global_178B8[iVar0 /*10*/].f_9 == -1)
			{
			}
			else
			{
				func_253(&(Global_178B8[iVar0 /*10*/].f_9));
			}
			func_241(iVar0, 1, 1, 0);
		}
		Global_178B8[iVar0 /*10*/].f_6 = 1;
	}
}

void func_545(char* sParam0, int iParam1)//Position - 0x3AE9E
{
	if (Global_15F6A != 12)
	{
		if (func_546(sParam0, 6, iParam1))
		{
			Global_15F6A.f_1 = iParam1;
		}
	}
}

int func_546(char* sParam0, int iParam1, int iParam2)//Position - 0x3AEC6
{
	var uVar0;
	struct<32> Var1;
	int iVar2;
	
	func_104();
	func_558();
	Global_15F6A = 0;
	StringCopy(&(Global_15F6A.f_3), sParam0, 32);
	Global_15F6A.f_B = iParam1;
	MISC::PAUSE_DEATH_ARREST_RESTART(1);
	MISC::SET_FADE_OUT_AFTER_ARREST(0);
	MISC::SET_FADE_OUT_AFTER_DEATH(0);
	func_6(1);
	func_520(1);
	func_555(0);
	func_554(1);
	MISC::CLEAR_BIT(&(Global_15F6A.f_14), 9);
	MISC::CLEAR_BIT(&(Global_15F6A.f_14), 6);
	MISC::CLEAR_BIT(&(Global_15F6A.f_14), 20);
	MISC::CLEAR_BIT(&(Global_15F6A.f_14), 21);
	MISC::CLEAR_BIT(&(Global_15F6A.f_14), 5);
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if (ENTITY::IS_ENTITY_UPSIDEDOWN(uVar0))
				{
					MISC::SET_BIT(&(Global_15F6A.f_14), 5);
				}
			}
		}
	}
	HUD::CLEAR_HELP(1);
	HUD::CLEAR_PRINTS();
	func_553(0);
	func_107(1);
	Global_15F6A.f_2 = Global_15F8F;
	if (func_552())
	{
		if (func_551())
		{
			if (Global_15F8F >= func_548())
			{
				if (!MISC::IS_BIT_SET(Global_13D03[iParam2 /*34*/].f_F, 16))
				{
					if (Global_17C49.f_1CAD.f_148[iParam2 /*6*/].f_1 >= 2)
					{
						Global_14A3F = 1;
					}
				}
			}
		}
		else if (Global_15F6A.f_B == 6)
		{
			func_244(iParam2, &Var1);
			if (Var1.f_1F == 1)
			{
				if (Global_17C49.f_41BC[iParam2 /*6*/].f_4 >= 2)
				{
					Global_14A3F = 1;
				}
			}
		}
		else
		{
			iVar2 = func_547(SCRIPT::GET_THIS_SCRIPT_NAME());
			if (iVar2 > -1)
			{
				if (Global_17C49.f_6E17.f_4[iVar2] >= 2)
				{
					Global_14A3F = 1;
				}
			}
		}
	}
	return 1;
}

int func_547(char* sParam0)//Position - 0x3B058
{
	if (MISC::ARE_STRINGS_EQUAL("BailBond1", uParam0))
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

int func_548()//Position - 0x3B0AE
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_549(&(Global_15F6A.f_3), 0);
	iVar1 = 0;
	if (iVar0 == 53)
	{
		iVar1 = 1;
	}
	return iVar1;
}

int func_549(char* sParam0, bool bParam1)//Position - 0x3B0D2
{
	int iVar0;
	int iVar1;
	
	iVar0 = MISC::GET_HASH_KEY(uParam0);
	iVar1 = func_550(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_550(int iParam0, bool bParam1)//Position - 0x3B0FC
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

int func_551()//Position - 0x3B132
{
	if ((((Global_15F6A.f_B == 0 || Global_15F6A.f_B == 1) || Global_15F6A.f_B == 2) || Global_15F6A.f_B == 3) || Global_15F6A.f_B == 4)
	{
		return 1;
	}
	return 0;
}

int func_552()//Position - 0x3B182
{
	if ((((Global_15F6A.f_B == 0 || Global_15F6A.f_B == 1) || Global_15F6A.f_B == 2) || Global_15F6A.f_B == 6) || Global_15F6A.f_B == 3)
	{
		return 1;
	}
	if (Global_15F6A.f_B == 5)
	{
		if (func_547(&(Global_15F6A.f_3)) > -1)
		{
			return 1;
		}
	}
	return 0;
}

void func_553(int iParam0)//Position - 0x3B1EE
{
	HUD::DISPLAY_HUD(iParam0);
	HUD::DISPLAY_RADAR(iParam0);
}

void func_554(int iParam0)//Position - 0x3B202
{
	if (iParam0 == 1)
	{
		HUD::THEFEED_PAUSE();
		MISC::SET_BIT(&(Global_15F6A.f_14), 3);
	}
	else if (MISC::IS_BIT_SET(Global_15F6A.f_14, 3))
	{
		HUD::THEFEED_RESUME();
		MISC::CLEAR_BIT(&(Global_15F6A.f_14), 3);
	}
}

void func_555(int iParam0)//Position - 0x3B23F
{
	if (iParam0 == 1)
	{
		if (MISC::IS_BIT_SET(Global_15F6A.f_14, 4))
		{
			func_557();
			MISC::CLEAR_BIT(&(Global_15F6A.f_14), 4);
		}
	}
	else
	{
		func_556();
		MISC::SET_BIT(&(Global_15F6A.f_14), 4);
	}
}

void func_556()//Position - 0x3B27C
{
	Global_42CA.f_5 = 1;
}

void func_557()//Position - 0x3B28A
{
	Global_42CA.f_5 = 0;
}

void func_558()//Position - 0x3B298
{
	Global_14A3F = 0;
	Global_14A40 = 0;
}

int func_559()//Position - 0x3B2AA
{
	if (((Global_15F6A == 13 || Global_15F6A == 10) || Global_15F6A == 11) || Global_15F6A == 12)
	{
		return 0;
	}
	return 1;
}

void func_560()//Position - 0x3B2E8
{
	Global_15F8D = 1;
	if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_10B7D))
		{
			switch (func_290())
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
			switch (func_290())
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

void func_561(char* sParam0)//Position - 0x3B3D7
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
	}
}

void func_562(var uParam0)//Position - 0x3B3E9
{
	func_563(&(uParam0->f_1C));
	func_563(&(uParam0->f_23));
	func_563(&(uParam0->f_29));
}

void func_563(var uParam0)//Position - 0x3B409
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY((*uParam0)[iVar0], 0, 1);
		}
		iVar0++;
	}
}

char* func_564()//Position - 0x3B443
{
	return "Al_DiNapoli";
}

int func_565(int iParam0)//Position - 0x3B44F
{
	if (!func_234(iParam0))
	{
		return Global_17C49.f_744E[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

