#include <iostream>
#include <cassert>
using namespace std;

int main() {
    int number;
    cin >> number;
    for (int i = 2; i <= number; i++) {
        if (number % i != 0) {
            cout << ("It is a prime number") << ("\n");
            i++;
        }
        else {
            cout << ("It is a composite number") << ("\n");
        }
        return 0;
    }

}