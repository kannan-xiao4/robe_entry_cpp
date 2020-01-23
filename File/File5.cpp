#include <iostream>
#include <fstream>
#include <cstdio>
#include <cstdlib>
using namespace std;

const char SRC_NAME[] = "hello.txt";
const char DST_NAME[] = "hello2.txt";

const int BUF_SIZE = 1024;

int main()
{
    fstream src;
    fstream dst;

    src.open(SRC_NAME, ios::in | ios::binary);
    if (! src.is_open())
    {
        return EXIT_FAILURE;
    }

    dst.open(DST_NAME, ios::out | ios::binary);
    if (! dst.is_open())
    {
        src.close();
        return EXIT_FAILURE;
    }
    
    bool error = false;
    do
    {
        char buf[BUF_SIZE];

        src.read(buf, sizeof buf);
        if (src.fail() && !src.eof())
        {
            error = true;
            break;
        }

        dst.write(buf, src.gcount());
        if (dst.fail())
        {
            error = true;
            break;
        }

    } while (! src.eof());
    
    dst.close();
    src.close();

    if (error)
    {
        cout << "File Handling Error" << endl;
        remove(DST_NAME);
        return EXIT_FAILURE;
    }
}