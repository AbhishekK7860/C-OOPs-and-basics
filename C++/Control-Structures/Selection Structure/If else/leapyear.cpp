#include<iostream>
using namespace std;
int main(){
    // It uses else if ladder to check if a year is a leap year or not
    int year;
    cout<<"Enter a year:";
    cin>>year;
    if(year % 4 == 0){
        cout<<"Leap Year"<<endl;
    }
    else if(year % 100 == 0){
        cout<<"Not a Leap Year"<<endl;
    }
    else if(year % 400 == 0){
        cout<<"Leap Year"<<endl;
    }
    else{
        cout<<"Not a Leap Year"<<endl;
    }
    return 0;
}