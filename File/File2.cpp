#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main() {
    fstream file;

    file.open("test.txt", ios::in);
    if (! file.is_open())
    {
        cout << "do not open file" << endl;
        return EXIT_FAILURE;
    }
    
    string str;
    getline(file, str);
    file.close();
    cout << str << endl;
}