#include "Debug.h"

#ifdef NODEBUG

#else

#include <iostream>
#include <cstdlib>
using namespace std;

namespace Debug
{
    void Assert(bool b, char* file, int line)
    {
        if (b)
        {
        }else
        {
            cerr << file << '(' << line << ')' << ": Assertion Error!" << endl;
            exit(EXIT_FAILURE);
        }
    }
}

#endif