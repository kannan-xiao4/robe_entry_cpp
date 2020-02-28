#include "Stack.h"
#include <iostream>
using namespace std;

int main()
{
    Stack<int> stack(10);

    try
    {
        for(int i = 0; i < 20; ++i)
        {
            stack.Push(i);
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    while (!stack.Empty())
    {
        cout << stack.Top() << ' ';
        stack.Pop();
    }
    cout << endl;
}