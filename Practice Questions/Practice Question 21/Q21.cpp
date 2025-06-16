#include <iostream>
using namespace std;

int allPrimesTill(int n) {
    for (int i = 1; i < n; i++) {
        bool isPrime = false;
        if (n % (i * i) != 0) {
            isPrime = true;
        }
        if (isPrime == true) {
            cout << i << " ";
            isPrime = false;
        }
    }
    return 0;
}


int main() {
    int n = 10;
    cout << (allPrimesTill(n));
}