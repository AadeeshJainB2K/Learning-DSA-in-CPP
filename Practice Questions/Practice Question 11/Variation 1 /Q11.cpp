#include <iostream>
using namespace std;

int main() {
    int n = 4;
    int m = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i + 1; j++) {
            cout << (m) << ("\n");
            m++;
        }
    }
    return 0;
}