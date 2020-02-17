#include <iostream>
#include <string>
using namespace std;

void Show(string* str)
{
    if (!(str == NULL || str->empty()))
    {
        cout << *str << endl;
    }
}

int main()
{
    Show(NULL);

    string str;
    Show(&str);

    str = "Hoge";
    Show(&str);
}
