#include <iostream>
using namespace std;

int main() {
    int n = 4;
    for (int i = 0; i < n;i++) {

        for (int j = n - 1 - i; j > 0; j--) {
            cout << ("  ");
        }

        for (int j = 0; j < 1; j++) {
            cout << (" *");
        }

        for (int j = 0; j < 2 * i - 1; j++) {
            cout << ("  ");
        }


        for (int j = 0; j < 1 && i > 0; j++) {
            cout << (" *");
        }


        cout << ("\n");
    }

    return 0;
}