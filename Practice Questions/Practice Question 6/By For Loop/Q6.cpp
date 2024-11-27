#include <iostream>

using namespace std;

int main() {
    // Variable to store the upper limit for the sum
    int upperLimit;
    // Variable to store the sum of odd numbers
    int sumOfOddNumbers = 0;

    cout << "Enter the upper limit to calculate the sum of odd numbers: ";
    cin >> upperLimit;

    //Iterate from 1 to upperLimit
    for (int i = 1; i <= upperLimit; i++) {
        if (i % 2 != 0) { //Check if the number is odd
            sumOfOddNumbers += i; //Add the odd number to the sum
        }
    }
    cout << sumOfOddNumbers;
    return 0;
}
