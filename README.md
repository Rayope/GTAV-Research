In development... it's going to be messy for a few days probably. Come back in a few days!

# GTA V Script Documentation and 'Game Research'
The main goal is to find new speedrunning strategies and understand them better.
It should help anyone getting started in understanding the inner workings of the game...Hopefully<br />
The PC version used for research is **GTA V build 372, online 1.27**.

# Repository information
This is a repository used for putting together what I have found on the net and what I understand of GTA V.<br />**I am absolutely not the sole source of information, please have a look at links below.**<br />
The research is made to understand and research speedrunning strategies. It can help anyone wanting to do the same, as I found that information is very scattered over the net.<br />
Hopefully nothing awfully wrong is written... If you think so, please tell me!

# Goals & TODO
* Gather all ressources I use for GTA V script and game understanding
* Improve ImGTA mod (helps debugging in game)

# General information
OpenIV allows you to extract some game files from the game folder on your computer: scripts, sounds, animations, models, audio files.<br /><br />
A script decompiler allows you to transform the script extracted from openIV (two files: [script_name].ysc.full, [script_name].ysc.sys) from binary data (assembly) to a source file (language .NET probably) that you can read.<br />
During this transformation the decompiler can translate some entities and functions names from a hash to the readable name if it knows the corresponding name. The function names are called natives.<br /><br />
Native hashes are not the same for every version of the game. But, we somehow have the corresponding hashes for every version (look at native hash update repository below).<br />
The version of the game is the build number that you see in the bottom right corner when you start the game.<br />
The speedrunning community has chosen the version 372 -- which corresponds to the PC version GTA V 1.27 -- because it is faster than other versions (load times, no wave, and maybe more).<br />

# Hash information
I could be wrong here, but from what I read on forums, discord and whatnot, here is what I understand:<br /><br />
The following is only for natives (function names) because I think there are differences for other string entities.<br />
Note: A hash function converts one value to another. For instance, the joaat hash algorithm: jooat("my_function_name") = 0xD62711A5<br /><br />
The original game version (XBox version), build number 331, had hashes computed using Jenkins one-at-a-time (joaat) algorithm, which outputs a 32-bit hash (e.g., 0xD6 27 11 A5). Then, the other versions used another algorithm (unknown as far as I know) that outputs a 64-bit hash (e.g., 0xD5 B9 60 AA 31 EA F4 08).<br />
Somehow, people made lists with corresponding hashes between each version, so that from whatever version of the game you have a hash, you can match it with the original 32-bit hash from the XBox version. And the name corresponding to that 32-bit hash can be found by bruteforcing it with the joaat algorithm.<br />
A lot of hashes have already been found, have a look at native databases in 'Ressources' below.

# Jenkins one-at-a-time (joaat) algorithm
You can bruteforce jooat hash (32-bit!) with the tool "Hash Collider", link in 'Ressources'.
It will find multiple matching strings for your hash... which is normal because the algorithm can return the same output from two (or more) different inputs which means that if you find one matching string, you'll never be 100% sure it is the original one, but you be confident if the meaning matches the context where your native is called. 

# Mod information
By default, GTA V does not allow modding the game, but a library named ScriptHookV (https://www.dev-c.com/gtav/scripthookv/) does!<br />
It loads ASI plugins (.asi mods) made in C++. And, ScriptHookVDotNet is an ASI plugin that can load .dll mods made in .NET.<br />
So, there are two types of mod files: .asi and .dll.<br />

File structure:
* **GTAV/[ScriptHookV_files]**: ScriptHookV files in GTA V folder
* **GTAV/[ASI_mod.asi]**: .asi mods (made in C++) in GTA V folder
* [optional] **GTAV/[ScriptHookVDotNet_files]**: ScriptHookVDotNet files in GTA V folder
* [optional] **GTAV/scripts/[DLL_mod.dll]**: .dll mods (made in .NET) in a folder named "scripts" inside the GTA V folder

You can reload mods ingame with 'Ctrl-R'.<br />

# Cheat engine
'Cheat engine' is a program that attaches itself to GTA V -- any program really --, it is used for watching the program memory and interacting with it.<br />
I used it for looking at specific value within GTA V, like "Franklin", or a value that you want to know the location within the game...<br />
In order to get the memory address of a variable, you need to know the value in game and you have to be able to make it change within the game so that you can find the only (or a few) values that changes as expected within Cheat engine (with multiple consecutive searches).

# Useful Links
## Repositories
GTA V Mod to help debugging: https://github.com/drunderscore/ImGTA<br />
Script Decompiler: https://github.com/njames93/GTA-V-Script-Decompiler<br />
Batch Script Decompiler: https://github.com/Sainan/GTA-V-Script-Decompiler<br />
Decompiled scripts for last version: https://github.com/Sainan/GTA-V-Decompiled-Scripts<br />
ScriptHookVDotNet: https://github.com/crosire/scripthookvdotnet<br />
Native Hash updater: https://github.com/indilo53/NativeHashUpdater<br />
Other names joaat hash: https://github.com/Sainan/gta-v-joaat-hash-db<br />

## Ressources
Interactive map with (x,y) marker: https://gtagmodding.com/maps/gta5/<br />
Native DB 1: http://www.dev-c.com/nativedb/<br />
Native DB 2: https://alloc8or.re/gta5/nativedb/<br />
Native DB 3: https://www.lcpdfr.com/resources/nativedb/index/system/<br />
FiveM natives: https://docs.fivem.net/docs/<br />
FiveM docs: https://docs.fivem.net/natives/<br />
ScriptHookV: http://www.dev-c.com/gtav/scripthookv/<br />
Alexander Blade research: https://gtaforums.com/topic/717612-v-scriptnative-documentation-and-research/<br />
Dr. Undersccore research: https://github.com/drunderscore/GTA-Research<br />
OpenIV: https://openiv.com/<br />
Cheat engine: https://www.cheatengine.org/<br />
Jenkins one-at-a-time: https://en.wikipedia.org/wiki/Jenkins_hash_function<br />
Native Hash updater: https://www.gta5-mods.com/tools/native-hash-updater-w-idc-generator#comments_tab<br />
Hash Collider (joaat): https://www.gta5-mods.com/tools/hash-collider-0-4-1<br />
joaat encoder online: https://md5calc.com/hash/joaat<br />
joaat wiki: https://en.wikipedia.org/wiki/Jenkins_hash_function<br />
Hex/decimal conversion: https://www.rapidtables.com/convert/number/hex-to-decimal.html<br />
Hex/float conversion: https://gregstoll.com/~gregstoll/floattohex/<br />
Hex calculator: https://www.calculator.net/hex-calculator.html<br />

## Communities
https://www.speedrun.com/gtav (discord link, forum)<br />
https://forums.gta5-mods.com/<br />
https://gtaforums.com/forum/371-documentation/<br />
