The best is to use the ImGTA mod to check all these in game!

# Global variables for the version 372
There are a bunch of global variables that are easily accesible and can provide useful information, this file lists addresses to some variables that could be useful.
You can find the matching address for another game version if you decompile it and compare with this version (compare two scripts that use it).

# Globals in the scripts:
Make sure to decompile the scripts with the option to have the global written in hexadecimal instead of decimal, it'll help as you use the hexadecimal to access them

Globals are named like this:
* Simple: Global_37E9
* Struct: Global_37E9.f_6A
    * You can get the value by going to 0x37E9 + 0x6A -> 0x3853
* Array: Global_178B8[id /*10*/]
    * Note the value '10' is supposed to tell the size (what's the unit?) of each element (read it somewhere)... or maybe it's for arrays of struct and it's the number of elements in these struct... Not sure, something's wrong here
    * The address 0x178B8 is actually an int for the size of the array, the first elements starts at 0x178B9
    * You can get the value (struct) by going to 0x178B8 + 1 + id * sizeof(struct)

# Weird values
Sometimes the decompiler outputs a large decimal value (e.g., 1132068864). It can be an unknown hash OR a float value:<br />
Decimal: 1132068864 -> Hexadecimal: 0x437a0000 -> Float: 250f


# List of potentially useful addresses:

* Audio name (string): 0x3BCCF
* Audio source (string): 0x3D92
* Dialogue state (int): 0x3D4C
* Mission state (int): 0x15F6A
* Death name (string): 0x10B7D
* Player switch locations array (guess): 0x14D9D
    Each element has two location (x,y,z) that match some switches
