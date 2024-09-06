#include <iostream>
using namespace std;

int main() {
    int sum = 0, n;
    cout << ("Enter an number to see the sum of odd numbers btw one and the number : ");
    cin >> (n);
    for (int i = 0; i <= n; i++) {
        if (i % 2 == 0) {
            sum += i;
            cout << (sum) << ("\n");
        }
        else if (i % 2 == !0) {
            n++;
            sum += i;
            cout << (sum) << ("\n");
        }
    }
    cout << (sum) << ("\n");
    return 0;
}