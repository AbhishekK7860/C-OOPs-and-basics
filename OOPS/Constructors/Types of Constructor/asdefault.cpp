#include <iostream>
using namespace std;

class Simple{
    int data1;
    int data2;
    int data3;
    public:
        Simple(int a, int b = 9, int c = 8){
            data1 = a;
            data2 = b;
            data3 = c;
        }
        void printData(){
            cout << "The value of data1 is " << data1 << endl;
            cout << "The value of data2 is " << data2 << endl;
        }
};
int main(){
    Simple s(4);
    s.printData();
    return 0;
}