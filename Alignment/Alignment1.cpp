#include <iostream>
using namespace std;

#pragma pack(1)
struct Person
{
    char name[21];
    int age;
    char birthmonth;
    char sex;
};
#pragma pack()

int main()
{
    cout << sizeof (Person) << endl;
}
