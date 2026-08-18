#include <iostream>

#define INTEGER int; // this basically have the int in INTEGER so we can use INTEGER in all the places and the preprocessor basically replaces it while compiling

void Log(const char*);  // we are just declaring it here which exist in another .cpp file, the compiler just trust that this exist in someother file in .cpp - the linker actually helps for it, if it is not there it will be throwed as a linker error

//Comment

#if 1 //this processor just acts as a preprocessor if condition
int main()
{
    std::cout << "Hello Cherno! Vidaamuyarchi" << std::endl;
    Log("Sri Balaji M is building in C++ plus");
    std::cin.get();
    
    return 2;
#include "EndBracket.h" //here basically the preprocessor exactly replace the header file content here where it has the closing there
#endif
