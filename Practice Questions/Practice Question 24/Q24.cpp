#include <iostream>
using namespace std;

int binaryToDecimal(int n) {
    int answer = 0, power = 1;
    for (int i = 0;n > 0; i++) {
        int remainder = n % 10;
        answer += remainder * power;
        n /= 10;
        power *= 2;
    }
    return answer;
}

int main() {
    cout << (binaryToDecimal(10110)) << ("\n");
    return 0;
}