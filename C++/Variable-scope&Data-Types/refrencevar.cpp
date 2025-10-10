#include <iostream>
using namespace std;
int main() {
    //refrence variable in C++
    float x = 456;
    cout<<x;
    float &y = x; // y is a reference variable to x
    cout<<"\nThe value of y is: "<<y; // y will have the same value as x
    y = 789; // changing the value of y will change the value of x      
    cout<<"\nThe value of x after changing y is: "<<x; // x will now be 789
    // Reference variables are used to create an alias for another variable
    // They are useful when you want to modify the original variable without creating a copy
    // Reference variables must be initialized when they are declared
    // They cannot be null and must always refer to a valid variable
    // Reference variables are often used in function parameters to avoid copying large objects
    // and to allow the function to modify the original object
    return 0;
}