#include <iostream>
using namespace std;

unsigned int Factorial(unsigned int n)
{
    return n == 0 ? 1 : n * Factorial(n - 1);
}

int main()
{
    for (int i = 0; i < 9; i++)
    {
        cout << i << "! = " << Factorial(i) << endl;
    }
    
}
