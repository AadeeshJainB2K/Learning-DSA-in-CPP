#include <iostream>
using namespace std;
 
 int main () {
    double firstNumber;
    double operation;
    double secondNumber;
    cout << ("Enter first operand ? ");
    cin >> (firstNumber);
    cout << ("Enter Operation ? ");
    cin >> (operation);
    cout << ("Enter second operand ? ");
    cin >> (secondNumber);
    cout << (firstNumber && operation && secondNumber);
    return 0;
 }