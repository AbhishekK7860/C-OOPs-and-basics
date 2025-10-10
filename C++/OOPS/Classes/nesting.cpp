#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s; // class member by default are private
private:
    void chk_bin(void);
    // here we declared check binary function private so that user cannot access this function or method
public:
    void read(void);
    void ones(void);
    void display(void);
};

void binary :: read(void){
    cout<<"Enter a binary number: "<<endl;
    cin>>s;
}

void binary :: chk_bin(void){
    for(int i = 0; i< s.length(); i++){
        if(s.at(i) != '0' && s.at(i) != '1'){
            cout<<"Incorrect binary format"<<endl;
            exit(0);
        }
    }
}

void binary :: ones(void){
    chk_bin(); //nesting of binary
        for(int i = 0; i< s.length(); i++){
            if(s.at(i) == '0'){
                s.at(i) = '1';
            }
             else{
                s.at(i) = '0';
            }
        }
}

void binary :: display(void){
    cout<<"Displaying your binary number:"<<endl;
    for(int i = 0; i< s.length(); i++){
        cout<<s.at(i);
    }
    cout << endl;
}
int main()
{
    // Nesting of member functions
    binary b;
    b.read();
    // b.chk_bin();
    b.display();
    b.ones();
    b.display();
    return 0;
}