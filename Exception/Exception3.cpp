#include <iostream>
using namespace std;

void Error()
{
    try
    {
        throw 1;
    }
    catch(int error)
    {
        throw "Error";
    }
    catch(const char* error)
    {
        cerr << "catch this point" << endl;
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