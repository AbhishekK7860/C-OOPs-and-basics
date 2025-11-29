#include <iostream>
using namespace std;
int main(){
    // This program demonstrates basic input and output in C++
    int n, n1;
    // here '<<' is called insertion operator and '>>' is called extraction operator
    cout << "Enter an integer: "; // Prompt the user for input
    cin>> n; // Read an integer from standard input
    cout << "Enter another integer: ";
    cin >> n1;
    cout << "The sum of the two integers is: " << n + n1 << endl;
    return 0;
}