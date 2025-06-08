#include <iostream>
using namespace std;
int main() {
    int number, factoral;
    factoral = 1;
    cout << "Enter a number: ";
    cin >> number;

    for (int i = 1; i <= number; i++) {
        factoral *= i;
    }
    cout << "Factorial of " << number << " is: " << factoral << endl;
    return 0;
}
//This program calculates the factorial of a given number.
//The factorial of a number is the product of all positive integers less than or equal to that number.
//For example, the factorial of 5 is 5 * 4 * 3 * 2 * 1 = 120.
//The program takes an integer as input from the user and calculates its factorial.
//The program then prints the factorial to the console.
