#include <iostream>
using namespace std;

void primesTillN(int n) {
    if (n < 1) {
        for (int i = 0; i < n; i++) {
            if (n % i * i != 0) {
                cout << i;
            }
        }
    }
}
int main() {
    int n = 10;
    cout << (primesTillN(n));
    return 0;
}