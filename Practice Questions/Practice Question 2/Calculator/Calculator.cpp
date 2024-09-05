#include <iostream>
using namespace std;
 
 int main () {
   int firstOperand;
   char operation;
   int secondOperand;
   cout << ("Enter first operand ? ");
   cin >> (firstOperand);
   cout << ("Enter Operation ? ");
   cin >> (operation);
   cout << ("Enter second operand ? ");
   cin >> (secondOperand);
   if (operation == '+') {
      cout << "The sum is = " << (firstOperand + secondOperand) << "\n" ;
   }else if (operation == '-'){
      cout << "The difference is = " << (firstOperand - secondOperand) << "\n" ;
   }else if (operation == '*'){
      cout << "The product is = " << (firstOperand * secondOperand) << "\n" ;
   }else if (operation == '/'){
      cout << "The quotient is = " << (firstOperand / secondOperand) << "\n" ;
   }else if (operation == '%'){
      cout << "firstoperand = " << (firstOperand % secondOperand) << "\n" ;
   }
   return 0;
 }
