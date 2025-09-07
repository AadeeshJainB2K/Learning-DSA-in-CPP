#include <iostream>
using namespace std;

// Print Fibonacci Series till n ;

void fibonnaciTill(int n) {
    int firstTerm = 0;
    int secondTerm = 1;
    for (int i = 0; i < n; i++) {
        cout << firstTerm << " ";
        int thirdTerm = firstTerm + secondTerm;
        firstTerm = secondTerm;
        secondTerm = thirdTerm;
    }
}

int main() {
    fibonnaciTill(10);
}