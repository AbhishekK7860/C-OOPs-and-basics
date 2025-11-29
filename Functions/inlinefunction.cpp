#include <iostream>
using namespace std;

inline int product(int a, int b)
{
    // static int c = 0; this is static variable and it stores the value for once or used once in code it wont be used again
    // c = c +1; 
    return a * b;
}
//here we are using an inline function to calculate the product of two integers
// an inline function is a function that is expanded in line when it is called
// instead of being called normally
// this can help reduce function call overhead and improve performance
// in simple way inline functions make the function call replaced with the function code itself
// this is useful for small functions that are called frequently
// inline functions are defined using the keyword 'inline' before the function definition
// Note: Inline functions are just a suggestion to the compiler, it may choose not to inline them
// also its only recommended to small functions which are called more than once
// and not for large functions as it can increase the code size
// also its no recommended in recursion or static variables
int main()
{
    int a, b;
    cout << "Enter 2 integers:";
    cin >> a >> b;
    cout << "Product is: " << product(a, b);
    return 0;
}
