#include <iostream>
using namespace std;

bool isPrime(int n) {
    bool isPrime;
    for (int i = 1; i < n; i++) {
        if (n % i * i != 0) {
            isPrime = true;
        }
        else {
            isPrime = false;
        }
    }
    return isPrime;
}

int main() {
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;

    if (isPrime(number) == 1) {
        cout << number << " is a prime number." << endl;
    }
    else {
        cout << number << " is not a prime number." << endl;
    }

    return 0;
}