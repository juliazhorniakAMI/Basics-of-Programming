#include <iostream>
using namespace std;
#include <iomanip>
#include <string>






void Calculate(float (*pFunc)(float n), float a, float b)
{
    double x, max = DBL_MIN;
    for (x = a; x <= b; x++) {
        if (x > max) {
            max = x;
        }


    }
    cout << "max= " << max << endl;

}
float TestF(float a)
{
    return a;
}


int main() {

    float a, b;
    cout << "Enter a: " << endl;
    cin >> a;
    cout << "Enter b: " << endl;
    cin >> b;
    Calculate(&TestF, a, b);



    

   

   
    return 0;
}
