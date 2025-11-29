#include <iostream>
using namespace std;

//Detructor never take any argumenets nor does it return any values
int count = 0;
class Num{
    public:
    Num(){
        count++;
        cout<<"This is the time when constructor is called for object number"<<count<<endl;
    }
    ~Num(){
        cout<<"This is the time when my destructor is called for object number "<<count<<endl;
        count--;
    }
};
int main(){
    cout<<"We are inside our main funtion"<<endl;
    cout<<"Creating first objects n1"<<endl;
    Num n1;
    {
        cout<<"Entering this block"<<endl;
        cout<<"Creating two more objects"<<endl;
        Num n2, n3;
        cout<<"Exiting this block"<<endl;
    }
    cout<<"Back to main"<<endl;
    return 0;
}