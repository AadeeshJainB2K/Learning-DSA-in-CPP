#include <iostream>
using namespace std;

int main() {
    int sum, number;
    sum = 0;
    cout << ("Enter a number to find its sum from 1: ");
    cin >> number;
    for (int i = 1; i <= number; i++) {
        sum = sum + i;
    }
    cout << (sum) << ("\n");
    return 0;
}




























