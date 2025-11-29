#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
    ofstream out;
    out.open("sample.txt");
    out << "Abhishek Is my name.\n";
    out << "also i am student.";
    out.close();

    ifstream in;
    in.open("sample.txt");
    string str;
    // getline(in, str);
    // cout << str;
    // in.close();
    while(in.eof()==0){
        getline(in, str);
        cout << str << endl;
    }
    in.close();
    return 0;
}