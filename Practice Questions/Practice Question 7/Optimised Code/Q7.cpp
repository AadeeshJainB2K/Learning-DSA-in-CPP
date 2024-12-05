#include <iostream>
using namespace std;

int main() {
    int n;
    bool isPrime = true;
    cout << "Enter a number to check if it is a prime number or not : ";
    cin >> (n);
    if (n <= 1) isPrime = false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }
    if (isPrime) {
        cout << (n) << " is prime" << "\n";
    }
    else {
        cout << (n) << " is composite" << "\n";
    }
    return 0;
}
