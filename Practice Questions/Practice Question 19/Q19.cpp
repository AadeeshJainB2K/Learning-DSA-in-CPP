#include <iostream>
using namespace std;

int factorial(int num) {
    int factoral = 1; 
    for (int i = 1; i <= num; i++) {
        factoral *= i ;
    }
    return factoral;
}

int nCr(int n, int r) {
    int fn = factorial(n);
    int fr = factorial(r);
    int fnmr = factorial(n - r);
    return fn/(fr*fnmr);
}


int main() {
    int n = 0;
    int r = 0;
    cout << ("Enter n to calculate the binomial cofficient ");
    cin >> (n);
    cout << ("Enter r to calculate the binomial cofficient ");
    cin >> (r);
    cout << (nCr(n, r)) << ("\n");
    return 0;
}

    