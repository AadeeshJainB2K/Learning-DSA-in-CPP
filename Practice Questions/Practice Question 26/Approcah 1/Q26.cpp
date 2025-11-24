#include <iostream>

using namespace std ;

int main (){
    int n ;
    int power = 0 ;
    bool isPowerOf2 = true ;
    cout << ("Enter a number to check if its a power of 2 : ");
    cin >> n ;
    for (int i = n ; i >= 1 ; i--){
        if (n%2 != 0){
            isPowerOf2 = false ;
            break;
        }else {
        n/=2 ;
        power++;
        }
    }
    if (isPowerOf2 == true) {
    cout << ("Yup it is the 2 to the power ")<< (power) << ("\n");
    }else if (isPowerOf2 == false) {
    cout << "No :( " << n << " is NOT a power of 2\n";
    }
    return 0;
}
