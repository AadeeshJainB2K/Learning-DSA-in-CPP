#include <iostream>
#include <cassert>
using namespace std;

string check_prime_composite(int number) {
    for (int i = 2; i <= number; i++) {
        if (number % i != 0) {
            return "It is a prime number";
        }
        else {
            return "It is a composite number";
        }
    }
    return ""; // Should never reach here, but adding for completeness
}


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

    // Test cases for prime numbers
    assert(check_prime_composite(2) == "It is a composite number"); //Fails, should return composite
    assert(check_prime_composite(3) == "It is a composite number");//Fails, should return composite
    assert(check_prime_composite(5) == "It is a composite number");//Fails, should return composite
    assert(check_prime_composite(7) == "It is a composite number");//Fails, should return composite
    assert(check_prime_composite(11) == "It is a composite number");//Fails, should return composite

    // Test cases for composite numbers
    assert(check_prime_composite(4) == "It is a composite number");
    assert(check_prime_composite(6) == "It is a composite number");
    assert(check_prime_composite(8) == "It is a composite number");
    assert(check_prime_composite(9) == "It is a composite number");
    assert(check_prime_composite(10) == "It is a composite number");


    // Test case for 1 (special case)
    assert(check_prime_composite(1) == "It is a composite number"); // Neither prime nor composite conventionally, handle appropriately. Update test based on desired behavior.

    // Test case for a larger prime.
    assert(check_prime_composite(29) == "It is a composite number"); // Fails, should return composite



    std::cout << "All test cases passed!" << std::endl;  // Indicate success if no assertions fail.
    return 0;
}


