#include <iostream>
using namespace std;
int main(){
    int age;
    cout<<"Tell me your age: ";
    cin>>age;
    if(age < 18){
        cout<<"You are not accepted here."<<endl;
    }
    else{
        cout<<"You are accepted here."<<endl;
    }
    // This program checks if the user is accepted based on their age
    return 0;
}