#include <iostream>
using namespace std;

void Error()
{
    int* p = NULL;

    try
    {
        p = new int[10];
        throw "Error Happend";
        delete[] p;
    }
    catch(...)
    {
        cerr << "release memory" << endl;
        delete[] p;
        throw;
    }
}

int main()
{
    try
    {
        Error();
    }
    catch(const char* error)
    {
        cerr << "catch that point" << endl;
    }
    
}