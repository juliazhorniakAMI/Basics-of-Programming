
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <math.h>
#include <cstring>
#include <string>
using namespace std;

void read(float* array, int size) {
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }


}
void write(float* array, int size) {
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << endl;

    }

}

int main() {


    int arrSize;
    cout << "Enter the size of mas: " << endl;
    cin >> arrSize;
    float* arr = new float[arrSize];
    read(arr, arrSize);

    float* arr2 = new float[arrSize];
    int arr2Index = 0;

    float ave = 0, sum = 0;




    for (int i = 0; i < arrSize; i++)
    {
        sum += arr[i];
    }
    ave = sum / arrSize;


    for (int i = 0; i < arrSize; i++)
    {
        if (arr[i] > ave)
        {
            arr2[arr2Index] = arr[i];
            ++arr2Index;
        }

    }
    write(arr2, arr2Index);

    delete[]arr; //вводимо розмір 5 і ел(1 1ю6 4 5 6)->(4 5 6)
    //4 і ел(2.4 3.5 2.3)->(3.5 3)
    delete[]arr2;


    return 0;


}
