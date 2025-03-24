#include <iostream>
using namespace std;

int sum(double a, double b, double c) {
    int s = a + b + c;
    return s;
};
int main() {
    // 3 sum 
    cout << sum(1.5, 2, 3);
    return 0;
}