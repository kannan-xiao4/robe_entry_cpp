#include <iostream>
using namespace std;

void Forever()
{
    cout << "forever" << endl;
    Forever();
}

int main()
{
    Forever();
}
