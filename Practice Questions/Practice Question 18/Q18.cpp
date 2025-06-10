#include <iostream>
using namespace std;

int sumOfDigitsFunction(int num) {
    int sumOfDigits = 0;
    while (num > 0) {
        int lastDigit = num % 10;
        num /= 10;
        sumOfDigits += lastDigit;
    };
    return sumOfDigits;
}

int main() {
    int num;
    cout << ("Enter any number to calculate its sum of digits ");
    cin >> (num);
    cout << (sumOfDigitsFunction(num)) << "\n";
    return 0;
}