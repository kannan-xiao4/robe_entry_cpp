#include <iostream>
using namespace std;

class ABase
{
public:
    virtual ~ABase() {}
    virtual void AHoge() = 0;
};

class A1 : virtual public ABase 
{
public:
    virtual void AHoge()
    {
        cout << "A1::Ahoge" << endl;
    }
};
class A2 : virtual public ABase
{
public:
    virtual void AHoge()
    {
        cout << "A2::Ahoge" << endl;
    }
};

class C : public A1, public A2
{
public:
    virtual void AHoge()
    {
        cout << "C::AHoge" << endl;
        A1::AHoge();
        A2::AHoge();
    }
};

int main()
{
    C c;
    c.AHoge();
}