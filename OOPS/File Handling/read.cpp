#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream in("Sample.txt");
    string str;
    in>> str;
    cout<< str;
    return 0;
}