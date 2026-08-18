

main function
adding a header and adding a library - include is a preprocessor statement
int in main - special case returns 0 even if there is no return
<< are another operator - operators are jsut functions like print() instead we are using it <<
cin.get() - wait until we press enter so that we can see the output

we can configure the solution platform such as x86 or x64 etc while building the project which is compiling for a specificing hardware, same for solution configuration like debug or release there or we might have different platforms like android etc

Also for all studio we also have a compiler setting wheere we can alter all the things that we saw in the linux setup with Cmake like what is the output expected like .exe or others or what is the configuration or platform all the things. So just know there is a way in the studio to configure it in the project

header file wont get compile only all the CPP files are compiled
header file just included as the preprocesor file
every CPP file is compiled to a object file - extension in vs studio is .obj
So we basically will have many .obj from many CPP files, we need someway to get one .exe file that is where LINKER comes in. Even for linker we have configurations in the studio

on macOS/Linux, the equivalent of Windows’ .obj is normally .o


## Compiler
Compiler - text file to actual executable machine code or application - basically text file to obj file
at the end of the data compiler should convert all the text file into either constant data or an instructions

preprocessor - anything that starts with # it just replace the original code there where we included or other preprocessor code we defined there

the compiler basically compiles to machine code, which is unreadable but cherno changed the condif and also generated a assembly code that is generated based on the compiler - in debug to release mode the optimizer is turned on and then we had less instrations to run. He showed what are the instructions are defined overall in assembly code and how changes are affecting the code efficiency there

Know the difference compiling and linking are two different things, also in the error know what kind of error it is like compiling or linking there

