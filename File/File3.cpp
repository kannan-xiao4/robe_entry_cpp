#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main() {
    fstream file;

    file.open("binary.txt", ios::in | ios::binary);
    if (! file.is_open())
    {
        cout << "do not open file" << endl;
        return EXIT_FAILURE;
    }
    
    int n = 0x41424344;
    file.read((char*)&n, sizeof n);
    file.close();

    cout << n << endl;
}