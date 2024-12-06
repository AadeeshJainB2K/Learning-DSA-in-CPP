#include <iostream>
using namespace std;

int main() {
    int n = 4;
    for (int i = 1; i <= 4; i++) {
        char ch = 'A';
        for (int i = 1;i <= n; i++) {
            cout << (ch);
            ch += 1;
        }
        cout << ("\n");
    }
}