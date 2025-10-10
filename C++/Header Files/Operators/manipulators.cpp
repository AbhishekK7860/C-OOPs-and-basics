#include<iostream>
#include<iomanip> 
using namespace std;
int main(){
    int a = 5, b = 12, c = 1256;
    // Using manipulators to format output
    cout<<"The value of a without setw is:"<<a<<endl;
    cout<<"The value of b without setw is:"<<b<<endl;
    cout<<"The value of c without setw is:"<<c<<endl; // here endl is a manipulator which is used to end the line

    //Now iomanip contains setw manipulator
    cout<<"The value of a with setw is:"<<setw(4)<<a<<endl;
    cout<<"The value of b with setw is:"<<setw(4)<<b<<endl; // here 4 is the width of the output
    cout<<"The value of c with setw is:"<<setw(4)<<c<<endl;
    // setw manipulator is used to set the width of the output
    return 0;
}