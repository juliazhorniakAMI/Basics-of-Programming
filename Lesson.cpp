

#include <iostream>
using namespace std;
#include <iomanip>

//double d(int k,int x, int n) {
//
//    if (k == n) {
//        return d(k,sin(x),n);
//    }
//    else {
//        
//        return x + d(k+1,sin(x),n);
//        
//    }
//   
//}

int main(){

 /*   int n, x,k;
    cout << "n= ";
    cin >> n;
    cout << "x= ";
    cin >> x;
    cout << d(1,x, n);*/
    //task 1

       /*    int n, p = 1, k = 1, x = 1,m=2;
           cout << "n= " ;
           cin >> n;
        
           while (x <= n) {
               int sum = 0;
          
               for (int j=1;j<=x;j++) {
                   sum += j;
                  
               }
               x++;
               p *= sum;
               k += m;
               m++;
               
           }cout << p;*/



    //task2 




    double e, s, f, x;
    int i;
    cout << "e= " << endl;
    cin >> e;
    cout << "x= " << endl;
    cin >> x;
    s = 0;i = 1;f = x;
    while (abs(f) > e) {
    
        s += f;
        i++;
        f *= -x*x / (2.0*i-1.0) / (2.0* i -2.0);
        
        
    }

    cout << "sum= " << s<<endl;
    cout << sin(x) << endl;


    //t3


    //int n;
    //double r;
    //cout << "n= " << endl;
    //cin >> n;
    //r = 0;
    //for (int i = 1;i <=n;i++) {
    //    r = sqrt(r + i);

    //}
    //cout << "Result = " << r << endl;


//
//    float sinx,sum;
//sum = 0;
//int n;
//float x;
//cout << "n= ";
//cin >> n;
//cout << "x=";
//cin >> x;
//sinx = x;
//for (int i = 0;i < n;i++) {
//    sinx = sin(sinx);
//    sum += sinx;
//
//}cout << sum;





    return 0;
}