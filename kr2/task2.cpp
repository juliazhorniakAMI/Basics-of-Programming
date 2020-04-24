#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <math.h>
#include <cstring>
#include <string>
using namespace std;


void rotateMatrix(float** mat,int n)
{
    for (int x = 0; x < n / 2; x++)
    {
        for (int y = x; y < n - x - 1; y++)//здійснюємо обхід по матриці
        {
            float temp = mat[x][y];//ств тимчасову матрицю
            mat[x][y] = mat[y][n - 1 - x];
            mat[y][n - 1 - x] = mat[n - 1 - x][n - 1 - y];//здійснюємо оберт матриці на 90 градусів проти год стрілки
            mat[n - 1 - x][n - 1 - y] = mat[n - 1 - y][x];
            mat[n - 1 - y][x] = temp;
        }
    }
}
int main(){
int n;
cout << "Enter size: " << endl;
cin >> n;

float** matrix = new float* [n];
for (int i = 0;i < n;i++) {
    matrix[i] = new float[n];
    for (int j = 0;j < n;j++) {
        cin >> matrix[i][j];
    }
}

    rotateMatrix(matrix,n);

    for (int i = 0; i < n; ++i, cout << endl)
        for (int j = 0; j < n; ++j)
            cout << matrix[i][j] << " ";


    for (int j = 0; j < n; j++) //звільнення пам’яті
    {
        delete[]matrix[j];
    }
    delete[]matrix;


    /*       
                                -> 4 8 12 16
                                  3 7 11 15
                                  2 6 10 14
                                  1 5 9 13
            { 1, 2, 3, 4 },
           { 5, 6, 7, 8 },
           { 9, 10, 11, 12 },                  
           { 13, 14, 15, 16 }
       };*/


    /*                369
                    258
        123   ->     147
       456
       789    */
    return 0;
}
