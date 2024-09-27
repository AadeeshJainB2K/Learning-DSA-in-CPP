#include <iostream>
using namespace std;

int main() {
    int number, sum;
    cout << "Enter a number to chek sum of odd numbers btw 0 to the number you have entered";
    cin >> number;
    for (int i = 0; i <= number; i++) {
        if (i % 2 == !0) {
            sum = sum + i;
        }
    }
    cout << (sum);
    return 0;
}