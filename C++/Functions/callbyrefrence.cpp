#include <iostream>
using namespace std;
// also we can use &a, &b as parameters instead of pointers
int swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    return 0;
}
// Here we are passing the addresses of x and y to the function swap
// This is known as call by reference
// Any changes made to a and b inside the function swap will affect the original variables x and
// y because we are passing references to the original variables
// so the original values of x and y will be swapped
// This allows us to modify the original variables directly without needing to return a value
// This is useful when we want to swap values or modify multiple variables at once
int main(){
    int x, y;
    cout << "Enter 1st integer: ";
    cin >> x;
    cout << "Enter 2nd integer: ";
    cin >> y;
    cout << "Before swap: x = " << x << ", y = " << y << endl;
    swap(&x, &y);
    //also use swap(x, y); if using &a, &b as parameters
    // instead of pointers
    cout << "After swap: x = " << x << ", y = " << y << endl;
    return 0;
}