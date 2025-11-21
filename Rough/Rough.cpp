#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 7;
    cout << "Enter the first number: ";
    //cin >> a;
    cout << "Enter the second number: ";
    //cin >> b;
    cout << (a) << (b);
    // swapping without the temp variable 
    a = a + b;
    b = a - b;
    a = a - b;
    cout << (a) << (b);
}
