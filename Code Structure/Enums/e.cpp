#include <iostream>
using namespace std;
int main(){
    enum Color { RED, GREEN, BLUE }; // Enum declaration for colors
    cout<<RED;
    cout<<GREEN;
    cout<<BLUE;
    return 0;
}
// Enums are user-defined data types that consist of a set of named integral constants.
// They are used to define variables that can only take one out of a small set of possible values.
// Enums improve code readability and maintainability by providing meaningful names to integral constants.
// In this example, we define an enum called Color with three possible values: RED, GREEN, and BLUE.
// The values of the enum constants are automatically assigned starting from 0, so RED = 0, GREEN = 1, and BLUE = 2.
// Enums can be used in switch statements, loops, and other control structures to make code more understandable.
// Enums can also be scoped using enum class to avoid name conflicts and provide better type safety.
// Example of using enum in a switch statement
// switch (color) {
//     case RED:
//        cout << "Color is Red" << endl;
//        break;
//     case GREEN:
//        cout << "Color is Green" << endl;
//        break;
//    case BLUE:
//        cout << "Color is Blue" << endl;
//        break;