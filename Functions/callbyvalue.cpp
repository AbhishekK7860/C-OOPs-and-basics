#include <iostream>
using namespace std;

int sum(int a, int b){
    int c = a + b;
    return c;
}
// here we passing only the values of x and y to the function sum
// and not the addresses of x and y
// This is known as call by value
// here any changes within the function sum will not affect the original variables x and y
// because we are passing copies of the values of x and y
// to the function sum
// so the original values of x and y remain unchanged
int main(){
    int x, y;
    cout<< "Enter 1st integer:";
    cin>>x;
    cout<< "Enter 2nd integer:";
    cin>>y;
    int z = sum(x, y);
    cout << "The sum is: " << z << endl;
    return 0;
}