#include <iostream>
using namespace std;

int moneyReceived(const int currentMoney, float factor = 1.08){
    // currentMoney = currentMoney++; here we declare currentMoney as const, so it cannot be modified
    // if we try to modify it, it will result in a compilation error
    return currentMoney * factor;
}

int main(){
    int money;
    cout << "Enter the amount of money you have: ";
    cin >> money;
    cout << "Money received after a year: " << moneyReceived(money) << endl;
    return 0;
}