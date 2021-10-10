// TennisKata.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "TennisKata.h"


// This is an example of an exported variable
TENNISKATA_API int nTennisKata=0;

// This is an example of an exported function.
TENNISKATA_API int fnTennisKata(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CTennisKata::CTennisKata()
{
    return;
}
