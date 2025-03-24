#include <iostream>
using namespace std;

int sumToN(int l) {
    int sum = 0;
    for (int i = 1; i <= l; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    cout << sumToN(5) << ("\n");
}