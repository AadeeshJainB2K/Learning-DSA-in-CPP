#include <iostream>
using namespace std;

int sumOfDigits(int num) {
    int sumOfDigits = 0;
    while (num < 0) {
        sumOfDigits += num % 10;
        num /= 10;
        return sumOfDigits;
    };
}

int main() {
    int num = 0;
    int sumOfDigits = 0;
    cout << ("Enter any number to calculate its sum of digits");
    cin >> (num);
    while (num < 0) {
        sumOfDigits += num % 10;
        num /= 10;
        return sumOfDigits;
    }
    cout << (sumOfDigits);
    return 0;
}