#include "DList.h"
#include <iostream>
using namespace std;

#define ARRAY_SIZE(array) (sizeof (array) / sizeof *(array) )

typedef DList<int> List;
typedef List::Node Node;

class Iterator
{
public:
    Iterator(const Node* node) : m_node(node) { }

public:
    int operator*() { return m_node->value; }
    
    bool operator!=(const Iterator& other) const
    {
        return m_node != other.m_node;
    }

    void operator++() { m_node = m_node->next; }

protected:
    const Node* m_node;
};

void Show(Iterator begin, Iterator end)
{
    for (Iterator it = begin; it != end; ++it)
    {
        cout << *it << ' ';
    }
    cout << endl;
}

int main()
{
    List list;
    
    for (int i = 0; i < 5; i++)
    {
        list.Push(i);
    }
    Show(Iterator(list.GetFirst()), Iterator(list.Eol()));
}
