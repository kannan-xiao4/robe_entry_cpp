#include <iostream>
using namespace std;

class Count
{
public:
    Count();
    virtual ~Count();
    static void Show();

private:
    static int m_count;
};

int Count::m_count;

Count::Count()
{
    ++m_count;
}

Count::~Count()
{
    --m_count;
}

void Count::Show()
{
    cout << m_count << endl;
}

class Count2 : public Count
{

};

int main()
{
    Count::Show();
    Count a;
    Count::Show();
    {
        Count2 b;
        Count::Show();
    }
    Count::Show();
}
