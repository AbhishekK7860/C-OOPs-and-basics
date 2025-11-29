#include <iostream>
float PI = 3.1415; // Its a global variable to store the value of pi
using namespace std;
int main(){
    int a = 5; // Declare an integer variable 'a' and initialize it to 5
    int b = 10; // Declare another integer variable 'b' and initialize it to 
    int sum = a + b; // Calculate the sum of 'a' and 'b'
    float pi = 3.14; // Declare a float variable 'pi' and initialize it to 3.14
    cout << "The sum of " << a << " and " << b << " is: " << sum << "\n"; // Output the result
    cout << "The value of pi is :"<<pi<< endl; // here endl is used to end the line
    cout<<PI; // Output the global variable PI
    return 0; // Indicate that the program ended successfully
}
// in variable naming we can use 1 to 255 characters