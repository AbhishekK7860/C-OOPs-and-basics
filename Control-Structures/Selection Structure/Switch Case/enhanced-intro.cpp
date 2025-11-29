#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    int stage = 0;

    if (age > 0 && age <= 12)
        stage = 1;
    else if (age >= 13 && age <= 19)
        stage = 2;
    else if (age >= 20 && age <= 65)
        stage = 3;
    else if (age >= 66 && age <= 120)
        stage = 4;

    switch (stage) {
        case 1:
            cout << "You are a child." << endl;
            break;
        case 2:
            cout << "You are a teenager." << endl;
            break;
        case 3:
            cout << "You are an adult." << endl;
            break;
        case 4:
            cout << "You are a senior." << endl;
            break;
        default:
            cout << "Invalid age." << endl;
    }

    return 0;
}
