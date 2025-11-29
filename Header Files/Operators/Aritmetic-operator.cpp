#include <iostream>
using namespace std;
int main(){
    // This program demosntrates the use of arithmetic operators in C++
    // Arithmetic operators include +, -, *, /, and %
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b; // Read two integers from standard input
    cout << "Sum: " << a + b << endl; // Addition   
    cout << "Difference: " << a - b << endl; // Subtraction
    cout << "Product: " << a * b << endl; // Multiplication
    cout << "Quotient: " << a / b << endl; // Division
    cout << "Remainder: " << a % b << endl; // Modulus
    return 0; // Return 0 to indicate successful execution
}