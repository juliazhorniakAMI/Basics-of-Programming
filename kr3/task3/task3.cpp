
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <fstream>
#include "Header.h"
using namespace std;

struct Triangle
{
public:
    int a, b, c;

    Triangle(int a, int b, int c) {
        this->a = a;
        this->b = b;
        this->c = c;
    }

    int P() {
        return a + b + c;
    }
};

int main()
{
    int a = 3;
    int b = 4;
    int c = 5;
    try {
        Triangle tri = Triangle(a, b, c);
        if (!isdigit(a) || !isdigit(b) || !isdigit(c)) {
            throw "some value is not of type int";
        }
        cout << "Perimetr: " << endl;
        cout << tri.P() << endl;


    }
    catch (const char* exception) 
    {
        std::cerr << "Error: " << exception << '\n';
    }



    return 0;
}
