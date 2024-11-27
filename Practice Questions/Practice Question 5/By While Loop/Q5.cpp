#include <iostream>
using namespace std;

int main()
{
    // variable initialization
    int i = 1, sum = 0, n;
    // taking input from the user
    cout << "nter the number to check its sum from 1 to the number entered : ";
    cin >> (n);
    // while loop to calculate the sum
    while (i <= n) {
        // adding the current value of i to sum
        sum = sum + i;
        // incrementing i
        i++;
    }

    cout << (sum) << "\n";
}
