#include <iostream>
using namespace std;
int main(){
    int i = 1;
    for (int i = 0; i <= 40; i++) {
        if(i  == 2){
            continue;
        }
        if(i == 20){
            break;
        }
        cout<<i<<endl;
    }
return 0;
}