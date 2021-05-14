rmdir /s /q output_natives
copy natives.h natives_original.h
NativeHashUpdater.exe b350-b372.txt
copy /y natives-b372.h natives.h
NativeHashUpdater.exe b331-b350.txt
copy /y natives-b350.h natives.h
mkdir output
move natives.h output\
move crossmap.txt output\
move x64natives.dat output\
move native_translation.dat output\
copy /y natives_original.h natives.h