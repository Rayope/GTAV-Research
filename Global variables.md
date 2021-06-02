The best is to use the ImGTA mod (https://github.com/Rayope/ImGTA) to check all these globals in game!

# Global variables for the version 372
There are a bunch of global variables that are easily accessible and can provide useful information, this file lists indexes to some global variables that could be useful.
You can find the matching index for another game version if you decompile it and compare with this version (compare two scripts that use it).

# Globals in the scripts:
Make sure to decompile the scripts with the option to have the global index written in decimal, it'll help for summing the indexes when structures are used (you can use the hexadecimal representation as well, keep it consistent).<br />
You can access the value of globals by using ScriptHookV function:
```
uint64_t getGlobalPtr(int index);
```
**I sometimes say 'address' when it should be the 'index for the address' that you can get with getGlobalPtr(yourIndex).**

Globals are named like this:
* Simple: Global_14313
   * Example for a float:
      ```
      float value_14313 = *(float *)getGlobalPtr(14313);
      ```
      
* Struct: Global_14313.f_106
    * You can get the value by going to index 14419 (which is 14313 + 106) -> The address getGlobalPtr(14419)
 
* Array: Global_96440[id /***10***/]
    * The value '**10**' is the size of each element in QWORD (64 bits), meaning the size of each element in bytes is **10** * 8.
    * (struct of size (**10** * 8) bytes, sizeof(struct) = 80)
    * The index 96440 actually refers to an int for the size of the array, the first elements starts at **96441**
    * You can get the value by going to 96440 + 1 + id * sizeof(struct) / 8
    * Structures are padded so that each element starts at an index (every 8 bytes):
    * Example array of structs: Global_84352 is accessed like this in scripts:
      ```
      int iParam1 = Global_84352[id /*2*/]; // or Global_84352[id /*2*/].f_0
      int iParam2 = Global_84352[id /*2*/].f_1;
      ```
      You know that this structure is made of two integers, and its definition is the following:<br />
      Note: **Add padding in the structure so that each elements starts at a multiple of 8 bytes**:<br />

      ```      
      struct MyGlobal {
         int f_0;          // start: Byte number 0. size: 4 bytes
         DWORD _padding0;  //                       size: 4 bytes
         int f_1;          // start: Byte number 8. size: 4 bytes
         DWORD _padding1;  //                       size: 4 bytes
      }; // Size 2 * 8 bytes
      ```
      You can get the array size and access each element of the array like this:

      ```
      int globalId = 84352;
      int arraySize = *(int *) getGlobalPtr(globalId);
      for (int id = 0; id < arraySize; id++)
         MyGlobal value = *(MyGlobal *)getGlobalPtr(globalId + 1 + id * sizeof(MyGlobal) / 8);
      ```

Again, the index written after 'Global_' is not an address, you have to use getGlobalPtr(yourIndex), to get the memory address of the global variable.

# Weird values
Sometimes the decompiler outputs a large decimal value (e.g., 1132068864). It can be an unknown hash OR a float value:<br />
Decimal: 1132068864 -> Hexadecimal: 0x437a0000 -> Float: 250.0f


# List of potentially useful addresses:
For the build 372 (online 1.27), I display quite a few interesting globals in ImGTA.<br />
You can look into the code to see the global indexes used. 
