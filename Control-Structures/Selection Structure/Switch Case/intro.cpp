#include <iostream>
using namespace std;
int main(){
    // Switch case in C++ is a control structure that allows you to execute different parts of code based on the value of a variable
    int age;
    cout << "Enter your age: ";
    cin >> age; // Read the age from user input
    switch(age) {
        case 18: // If age is 18
            cout << "You are an adult now." << endl;
            break; // Exit the switch case
        case 21: // If age is 21
            cout << "You can drink alcohol now." << endl;
            break; // Exit the switch case
        case 65: // If age is 65
            cout << "You are a senior citizen." << endl;
            break; // Exit the switch case
        default: // If age does not match any case
            cout << "You are at a different stage of life." << endl;
    }
    return 0;
}