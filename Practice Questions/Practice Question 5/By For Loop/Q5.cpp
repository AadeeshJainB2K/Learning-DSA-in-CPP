#include <iostream> 
using namespace std ;
 int main () {
    int sum = 0 , n;
    cout << ("Enter the number to check its sum from 1 to the number entered : ");
    cin >> (n);
    for (int i = 1; i <= n; i++){
        sum+= i;
    }
    cout << (sum) << "\n";
 }