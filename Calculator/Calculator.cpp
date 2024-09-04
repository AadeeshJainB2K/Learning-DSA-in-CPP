#include <iostream>
using namespace std;

int main(){
    int a = 5, b = 2;
    float c = 5.0f;
    cout << "sum = " << (a + b) << "\n";
    cout << "difference = " << (a - b) << "\n"; 
    cout << "product = " << (a * b) << "\n"; 
    cout << "quotient = " << (c / b) << "\n"; 
    cout << "Remainder = " << (a % b) << "\n"; 
    cout << "typecast  = " << ((float)5/(int)2) << "\n"; 
    return 0;
}
