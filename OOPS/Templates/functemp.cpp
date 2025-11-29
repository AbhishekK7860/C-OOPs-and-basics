#include <iostream>
using namespace std;

// template <class T1, class T2>
// float funcAverage(T1 a, T2 b){
//     float avg = (a + b) / 2.0;
//     return avg;
// }

template<class T>
void swapValues(T &a, T &b){
    T temp;
    temp = a;
    a = b;
    b = temp;
}
int main(){
    // float a;
    // a = funcAverage(5, 6.7); // int and float
    // cout<<"The average is "<<a<<endl;
    int x = 5, y = 10;
    cout<<"Before swapping: x = "<<x<<", y = "<<y<<endl;
    swapValues(x, y);
    cout<<"After swapping: x = "<<x<<", y = "<<y<<endl;
    return 0;
}