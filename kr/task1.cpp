


#include <iostream>
using namespace std;
#include <iomanip>
#include <string>




long factorial(int n) {
    long f = 1;
    for (int i = 2;i <= n;i++) {
        f *= i;
    
    }
    return f;
}






int main(){

    int n;
    cout << "Enter number: " << endl;
    cin >> n;
    cout << "n!= " << factorial(n);


   



   


    

   

   
    return 0;
}
