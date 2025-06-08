#include <iostream>
using namespace std;

int main() {
    // Variable to store the upper limit for the sum calculation
    int upperLimit;
    // Variable to store the sum of even numbers
    int sumOfEvens = 0;

    // Prompt the user to enter the upper limit
    cout << "Enter the upper limit to calculate the sum of even numbers up to: ";
    cin >> upperLimit;

    // Iterate from 0 up to the upper limit (inclusive)
    for (int i = 0; i <= upperLimit; i++) {
        // Check if the current number is even
        if (i % 2 == 0) {
            // Add the even number to the sum
            sumOfEvens += i;
        }
    }

    cout << sumOfEvens << endl; // Print the sum of even numbers
    return 0;
}
