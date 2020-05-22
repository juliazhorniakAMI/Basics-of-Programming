#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <fstream>
#include "Header.h"
using namespace std;



int main()
{
    const int len = 30, strings = 10;
    const char ch = '\n';
    char mass1[len][strings];
    char mass2[len][strings];

    ofstream fout;
    fout.open("OUT.txt");

    ifstream fs1("in1.txt", ios::in | ios::binary);
    ifstream fs2("in2.txt", ios::in | ios::binary);

    try {
        if (!fs1)  throw " could not be opened for reading!";
        if (!fs2)  throw " could not be opened for reading!";

        if (!fout)  throw "could not be opened for reading!";
        for (int r = 0; r < strings; r++)
        {
            fs1.getline(mass1[r], len - 1, ch);
            fs2.getline(mass2[r], len - 1, ch);

        }

        for (int i = 0; i < 3; i++) {
            for (int j = i; j < 3; j++) {
                if (Compare(mass1[i], mass2[j])) {
                    fout << mass1[i];
                }

            }
        }
        fs1.close();
        fs2.close();

    }

    catch (const char* exception)
    {
        std::cerr << "Error: " << exception << '\n';
    }


    return 0;
}

