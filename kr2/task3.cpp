
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <math.h>
#include <cstring>
#include <string>
using namespace std;



void remove(char* str1, char* str2) { //вик функцію

    for (int i = 0;i < strlen(str1);i++) {
     
        for (int j = 0;j < strlen(str2);j++) {
            if (str1[i] == str2[j]) {
                char* curr1=str1;//ств вказівники =[0] індексу стрічки
                char* curr2=str2;
                curr1 += i;//присвоюємо вказівнику поточний індекс 1 стрічкм
               
                curr2 += j;
                curr2 = curr1 + 1;


               
                strncpy(curr1, curr2, strlen(curr2) + 1);//видаляємо певний ел копіюванням через зсув
            
            }
           
        }

    }

}


    int main()
    {//enter:1)abdd -first str 2)ad -> bd
        //1)aaa 2)aa -> a
        //1)abbd 2)b ->abd
 
        const int MAX_N = 10;
              char str1[MAX_N]; 
              cout << "Enter 1st string: " << endl;
              cin.getline(str1,10); 
            
              cout << "Enter 2st string: " << endl;
              char str2[MAX_N];
              cin.getline(str2, 10);
              remove(str1, str2);
              for (int i = 0;i < MAX_N;i++) {
                  cout << str1[i]<<endl;  
              }
        return 0;
    }

