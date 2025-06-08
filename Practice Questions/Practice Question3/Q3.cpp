// Q3 - Find character is lowercase or uppercase ;

#include <iostream>
using namespace std ;

int main () {
    char letter;
    cout << ("Enter any letter : ");
    cin >> (letter);
    if ((letter >= 65) && (letter <=90)){
        cout << (letter) << (" is uppercase\n");
    }else{
        cout << (letter) << (" is lowercase\n");
    }
}




