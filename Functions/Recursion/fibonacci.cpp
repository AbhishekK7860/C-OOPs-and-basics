#include <iostream>
using namespace std;

int fib(int n){
    if(n  < 2)
        return n;
    else
        return fib(n - 1) + fib(n - 2);
}

int main(){
    int n;
    cout<<"Enter the term of Fibonacci series: ";
    cin >> n;
    if (n < 0) {
        cout << "Please enter a non-negative integer." << endl;
        return 1;
    }
    cout << "Fibonacci term " << n << " is " << fib(n) << endl;
    return 0;
}