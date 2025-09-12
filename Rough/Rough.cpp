#include <iostream> 
using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int decimalToBinary(int n) {
    int answer = 0, power = 1;
    for (int i = 0; n > 0; i++) {
        int remainder = n % 2;
        answer += remainder * power;
        power *= 10;
        n /= 2;
    }
    return answer;
}

int binaryToDecimal(int n) {
    int answer = 0, power = 1;
    for (int i = 0; n > 0; i++) {
        int remainder = n % 10;
        answer += remainder * power;
        power *= 2;
        n /= 10;
    }
    return answer;
}

int main() {
    cout << (binaryToDecimal(1010));
    return 0;
}