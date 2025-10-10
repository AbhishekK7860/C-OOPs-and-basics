#include<iostream>
using namespace std;
int main(){
    // operator Precendence in c++ is like bodmas rule in mathematics
    // BODMAS stands for Brackets, Orders, Division and Multiplication, Addition and Subtraction
    // In C++, operator precedence determines the order in which operators are evaluated in an expression
    int a = 5, b = 2;
    int c = (((((a*b)%b)/b)+10)-b); // Here we are using multiple operators
    // The precedence of operators is as follows:
    // 1. Parentheses ()
    // 2. Multiplication (*), Division (/), and Modulus (%) - evaluated from left to right
    // 3. Addition (+) and Subtraction (-) - evaluated from left to right
    // In this case, the expression is evaluated as follows:
    // 1. a * b = 10
    // 2. 10 % b = 0
    // 3. 0 / b = 0
    // 4. 0 + 10 = 10
    // 5. 10 - b = 8
    cout << "The value of c is: " << c << endl; // Output: 8
    // There we can also use assosiative operators to change the order of evaluation
    // For example, we can use parentheses to change the order of evaluation
    int d = (a * b) + (b / 2); // Here we are using parentheses to change the order of evaluation
    // The expression is evaluated as follows:
    // 1. a * b = 10
    // 2. b / 2 = 1
    // 3. 10 + 1 = 11
    cout << "The value of d is: " << d << endl; // Output: 11
    // In C++, operator precedence is important to understand to avoid unexpected results in expressions
    // It is recommended to use parentheses to make the order of evaluation explicit and improve code readability
    return 0;
}
