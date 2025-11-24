// without using loops

#include <iostream>

using namespace std ;

int main (){
    int n ;
    cout << ("Enter a number to check if its a power of 2 : ");
    cin >> n ;
    if ((n>0 && (n&(n-1))) == 0){
        cout << ("Yup it is the 2 to the power ")<< ("\n");
    }else {
        cout << "No :( " << n << " is NOT a power of 2\n";
    }
    return 0 ;
}

// can use log 2( n )
