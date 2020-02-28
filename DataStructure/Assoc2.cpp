#include "Assoc.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

typedef Assoc<string, string> Setting;

bool Input(string& key)
{
    cout << "please input string > " << flush;
    key = "";
    getline(cin, key);
    return ! key.empty();
}

void Check(const Setting& setting, const string& key)
{
    try
    {
        cout << setting[key] << endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}

int main()
{
    Setting setting;
    setting["Type"] = "Rectangle";
    setting["Size"] = "1024x768";
    setting["Color"] = "Green";

    string key;
    while (Input(key))
    {
        Check(setting, key);
    }
    
}
