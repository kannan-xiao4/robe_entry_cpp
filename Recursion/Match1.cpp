#include <iostream>
#include <string>
using namespace std;

bool Match(const char* str, const char* pat)
{
    for ( ; !(*str == '\0' || *pat == '\0'); ++str, ++pat)
    {
        if (*pat == '*')
        {
            for (++pat; *pat != *str; ++str)
            {
                if (Match(str, pat))
                {
                    return true;
                }

                if (*str == '\0')
                {
                    return false;
                }
            }  
        } else {
            if (*pat != *str)
            {
                return false;
            }
        }
    }
    
    return *pat == *str;
}

bool Input(string& str)
{
    cout << "> " << flush;
    getline(cin, str);
    return ! (cin.fail() || str == "");
}

int main()
{
    static const char PAT[] = "*.txt";

    cout << PAT << ": matching pattern" << endl;

    string str;
    while (Input(str))
    {
        cout << (Match(str.c_str(), PAT) ? "Matched" : "Dont Match") << endl;
    }
    
}
