#include <iostream> 
using namespace std;

int main() {
    int oddSum, number, i;
    oddSum = 0;
    i = 0;
    number = 0;
    cout << "Enter the upper limit to calculate the sum of odd numbers: ";
    cin >> number;
    while (i <= number) {
        if (i % 2 != 0) {
            oddSum = oddSum + i;
        }
        i++;
    }
    cout << (oddSum) << "\n";
}
