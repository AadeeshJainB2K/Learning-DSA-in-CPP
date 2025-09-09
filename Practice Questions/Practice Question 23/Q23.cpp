#include <iostream>
using namespace std;

int decimalToBinary(int n) {

    int answer = 0, power = 1;

    while (n > 0) {
        int remainder = n % 2;

        answer += remainder * power;

        power *= 10;

        n /= 2;
    }

    return answer;
}

int main() {
    cout << decimalToBinary(50) << ("\n");
    return 0;
}