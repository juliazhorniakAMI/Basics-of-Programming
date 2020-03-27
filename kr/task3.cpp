#include <iostream>
#include <math.h>

using namespace std;


double funct(int x) {
    return pow(x, 3) + 5;
}

int main()
{

    int elem = 5;
    double sum = elem;
    for (int i = 0; i < 6; ++i) {
        elem = funct(elem);
        sum += elem;
    }

    cout << sum << endl;;
}
