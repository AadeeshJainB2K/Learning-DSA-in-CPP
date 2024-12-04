#include <iostream>
using namespace std;

int main() {
    int n;
    bool isPrime;
    cout << "Enter a number to check if it is a prime number or not : ";
    cin >> (n);

    for (int i = 2; i <= n - 1; i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
        else if (n % i != 0) {
            isPrime = true;
        }
    }

    if (isPrime) {
        cout << (n) << "is Prime";
    }
    else {
        cout << (n) << "is composite";
    }
    return 0;
}
