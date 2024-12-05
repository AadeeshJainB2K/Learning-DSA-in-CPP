#include <iostream>
using namespace std;

int main() {
    int n, sum;
    sum = 0;
    cout << ("enter n ");
    cin >> (n);
    if (n > 0) {
        cout << ("0");
        for (int i = 1; i <= n; i++) {
            if (i % 3 == 0) {
                cout << (" + ") << (i);
                sum = sum + i;
            }
        }
    }
    cout << (" = ") << (sum) << ("\n");
    return 0;
}