#include <iostream>
using namespace std;

int sum(int a, int b){
    cout<<"Function with 2 parameters called." << endl;
    return a+b;
}
// in c++ function overloading is a concept where multiple functions can have the same name with different parameters.
// also there can be different data types of parameters.
// and the compiler will try to match the data type and parameters for the suitable function to call.
int sum(int a, int b, int c){
    cout<<"Function with 3 parameters called." << endl;
    return a+b+c;
}
// calculate volume of cylinder
int volume(double r, int h){
    return(3.14 * r * r *h);
}
// calculate volume of cube
int volume(int a){
    return a * a * a;
}
// calculate volume of rectangle
int volume(int l, int b, int h){
    return l * b * h;
}
int main(){
    cout << "Sum of 2 integers: " << sum(10, 20) << endl;
    cout << "Sum of 3 integers: " << sum(10, 20, 30) << endl;
    cout << "Volume of cylinder: " << volume(5.0, 10) << endl;
    cout << "Volume of cube: " << volume(5) << endl;
    cout << "Volume of rectangle: " << volume(5, 10, 15) << endl;
    return 0;
}