#include <iostream>
using namespace std;
/*
Virtual Base class
             Class A
             /     \
          class B   Class C
              \    /
              Class D
In the above example, if we create an object of class D, then it will have two copies of class A's members
thats why We use virtual base class to avoid this problem.
*/
class Student{
    protected:
    int rollno;
    public:
    void set_roll(int r){
        rollno = r;
    }
    void print_roll(){
        cout<<"Roll no is "<<rollno<<endl;
    }

};

class Test: virtual public Student{
    protected:
    float maths, physics;
    public:
    void set_marks(float m, float p){
        maths = m;
        physics = p;
    }
    void print_marks(){
        cout<<"You have Obtained"<<endl
            <<"Maths:"<<maths<<endl
            <<"Physics:"<<physics<<endl;
    }
};

class Sports: virtual public Student{
    protected:
    float score;
    public:
    void set_score(float s){
        score = s;
    }
    void print_score(){
        cout<<"Your sports score is "<<score<<endl;
    }
};

class Result : public Test, public Sports{
    float total;
    public:
    void display(){
        total = maths + physics + score;
        print_roll();
        print_marks();
        print_score();
        cout<<"Your total score is "<<total<<endl;
    }
};
int main(){
    Result abhi;
    abhi.set_roll(21);
    abhi.set_marks(95.0, 90.0);
    abhi.set_score(9.5);
    abhi.display();
    return 0;
}