#include <iostream>
using namespace std;

int main()
{
    int i = 1, sum = 0, n;
    cout << ("Enter the number to check its sum from 1 to the number entered : ");
    cin >> (n);
    while (i <= n){
        sum += i;
        i++;
    }
    cout << (sum);
}