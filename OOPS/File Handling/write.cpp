#include <iostream>
#include <fstream>
using namespace std;
int main(){
    //Connecting our file with out stream
    ofstream out("Sample.txt");

    //Creating a name string and filling the variable with user input
    cout<<"Enter your name: ";
    string name;
    cin>> name;

    //Writing a string to the file
    out<< name + " Is my name.";
    out.close();

    ifstream in("Sample.txt");
    string str;
    in>> str;
    cout<<"The Content of this file is: "<< str;
    in.close();
    return 0;
}