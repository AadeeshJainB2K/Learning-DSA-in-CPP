#include <iostream>
using namespace std;

int main() {
    int nol, nos;
    cin >> nol;
    cin >> nos;
    for (int i = 1; i <= nol; i++) {
        for (int j = 1; j <= nos; j++) {
            cout << "*";
        }
        cout << ("\n");
    }
}