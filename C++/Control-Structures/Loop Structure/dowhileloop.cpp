#include <iostream>
using namespace std;
int main(){
    int i = 6;
    int j = 1;
    do{
       cout<<"6*"<<j<<"="<<i*j<<endl;
         j++;
    }
    while(j <= 10);
    return 0;
}