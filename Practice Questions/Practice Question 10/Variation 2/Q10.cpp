#include <iostream>
using namespace std;

int main() {
    int n = 4;
    for (int i = 0; i <= n - 1; i++) {
        char ch = 'A';
        for (int i = 0;i <= n - 1; i++) {
            cout << (ch);
            ch += 1;
        }
        cout << ("\n");
    }
}