#include "SList.h"
#include <iostream>
using namespace std;

typedef SList<int> List;
typedef List::Node Node;

void Show(const List& list)
{
    for (const Node* node = list.GetFirst(); node != NULL; node = node->next)
    {
        cout << node->value << ' ';
    }
    cout << endl;
}

int main()
{
    List list;

    for (int i = 0; i < 10; i++)
    {
        list.Unshift(i);
    }
    Show(list);
    
    list.Shift();
    Show(list);

    list.At(3) = 42;
    Show(list);
}