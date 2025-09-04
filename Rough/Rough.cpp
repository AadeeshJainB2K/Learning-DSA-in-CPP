#include <iostream> 
using namespace std;

int main() {
    int a, b;
    cout << ("Enter first number");
    cin >> a;
    cout << ("enter second number");
    cin >> b;

    if (a > b) {
        cout << (a) << (" is greater than ") << (b) << ("\n");

    }
    else if (a < b) {
        cout << (a) << (" is smaller than ") << (b) << ("\n");
    }

}

