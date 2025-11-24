// Aim = reverse n
#include <iostream>
using namespace std ;

int reverse (int n){
    int rev = 0 ;
    while (n>0){
        int lastdigit = n % 10 ;
        rev = rev * 10 + lastdigit ;
        n = n / 10 ;
    }
    return rev ;
}

int main (){
    int n = 123456 ;

    cout << reverse (n) << endl ;

    return 0;
    
}
