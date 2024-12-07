#include <iostream>
using namespace std;

int main() {
    int n = 4;
    for (int i = n; i > n; i--) {
        for (int j = n; j >= i; j--) {
            cout << (j);
        }
        cout << "\n";
    }
}