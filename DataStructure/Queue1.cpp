#include "Queue.h"
#include <iostream>
using namespace std;

int main()
{
    Queue<int> queue(10);

    try
    {
        for(int i = 0; i < 5; i++) { queue.Push(i); }
        for(int i = 0; i < 3; i++) { queue.Pop(); }
        for(int i = 0; i < 20; i++) { queue.Push(i); }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    while (!queue.Empty())
    {
        cout << queue.Front() << ' ';
        queue.Pop();
    }
    cout << endl;   
}