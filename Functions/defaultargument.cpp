#include <iostream>
using namespace std;

float moneyReceived(int currentMoney, float factor = 1.08){
    return currentMoney * factor;
}
// default argument is those values which are passed to the function if no value is passed
// if a value is passed then the default argument is ignored
// in this case, if no factor is passed, it defaults to 1.08
int main(){
    int money;
    cout << "Enter the amount of money you have: ";
    cin >> money;
    cout << "Money received after a year: " << moneyReceived(money) << endl;

    return 0;
}