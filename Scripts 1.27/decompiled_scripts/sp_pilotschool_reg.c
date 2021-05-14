void __EntryFunction__()//Position - 0x0
{
	MISC::START_SAVE_DATA(&Global_2C0000, 1, 1);
	func_1();
	MISC::STOP_SAVE_DATA();
	MISC::SET_BIT(&Global_26D63C, 1);
}

void func_1()//Position - 0x23
{
	MISC::REGISTER_INT_TO_SAVE(&Global_2C0000, "PILOT_SCHOOL_DUMMY_DATA");
}

