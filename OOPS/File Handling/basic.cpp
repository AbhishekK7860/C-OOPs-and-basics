#include <iostream>
#include <fstream>
using namespace std;

//The useful classes for working with filess in C++
//1. fstreambase
//2. ifstream --> derived from fstreambase
//3. ofstream --> derived from fstreambase

//In order to work with files ub C++, you will have to open it.Primarily, there are two ways to open a file:
//1. Using the constructor
//2. Using the member function open() of the class
int main(){
    string str = "Abhishek Kesarwani";
    string str2;
    // //Opening a file using constructor and writing it
    ofstream out("sample.txt"); //write operation
    out << str;

    //Opening a file using constructor and reading  it
    // ifstream in("sample.txt"); //read operation
    // getline(in, str2);
    // cout << str2;

    return 0;
}