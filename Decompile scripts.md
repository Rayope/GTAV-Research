...Not finished, coarse outline for now...

# Decompiling scripts for GTA V 1.27, build 377
1. Download the latest natives.h (https://alloc8or.re/gta5/nativedb/, or http://www.dev-c.com/nativedb/)
2. Download NativeHashUpdater (https://github.com/indilo53/NativeHashUpdater)
3. Put "natives.h" and "natives.json" in the folder NativeHashUpdater/bin
4. Put the file "MakeFilesFor372.bat" from this repo in the same folder
5. Run "MakeFilesFor372.bat"
6. Clone the repo https://github.com/Sainan/GTA-V-Script-Decompiler
7. Put the output inside this repo 'Resources' folder
8. Compile the "GTA-V-Script-Decompiler"
9. Download "all_script_names.txt", "bulk_decompile.php" from https://github.com/Sainan/GTA-V-Decompiled-Scripts
10. Make a folder named "GTA V Scripts" and put these files in it (from step 9)
11. Put the output of GTA-V-Script-Decompiler/bin/Release in this folder as well
12. Download php (https://windows.php.net/download/)
13. Run [path_to_your_php_folder]/php.exe bulk_decompile.php
14. Enjoy!
