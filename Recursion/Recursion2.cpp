#include <iostream>
using namespace std;

int i;

void CountDown()
{
    if (i > 0)
    {
        cout << i << endl;
        --i;
        CountDown();
    }
    
}

int main()
{
    i = 3;
    CountDown();
}
