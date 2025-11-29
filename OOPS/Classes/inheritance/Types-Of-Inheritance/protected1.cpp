#include <iostream>
using namespace std;

class Base{
    protected: // in a way like its private but can be inherited
    int a;
    private:
    int b;

};
/*
For a Protected Member:
                        public derivation  Private derivation  Protected Derivation
    1. private Member    Not Inherited     Not Inherited        Not Inherited
    2. protected Member  protected          private              protected
    3. public Member     public             Private              Protected
 */
class derived:protected Base{

};
int main(){
    derived d;
  //d.a = 10; // we can not access protected member outside the class
    return 0;
}