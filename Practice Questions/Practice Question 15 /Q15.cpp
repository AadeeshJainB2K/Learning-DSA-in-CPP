#include <iostream>
using namespace std;

double minOfTwo(double a, double b) {
    if (a > b) {
        return b;
    }
    else {
        return a;
    }
}

int main() {
    cout << minOfTwo(2.5, 5.6) << ("\n");
}