#include <iostream>
#include <sstream>
#include <string>
using namespace std;

string Hoge(ostream& ostr)
{
    try
    {
        ostringstream& sstr = dynamic_cast<ostringstream&>(ostr);

        sstr.str("");
        sstr << "Hoge" << flush;
        return sstr.str();
    }
    catch(const bad_cast& e)
    {
        return "Error!";
    }
}

int main()
{
    ostringstream sstr;
    cout << Hoge(sstr) << endl;
    cout << Hoge(cout) << endl;
}