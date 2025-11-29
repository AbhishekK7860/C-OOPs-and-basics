#include <iostream>
using namespace std;

class Student{
    protected:
    int roll_no;
    public:
    void set_roll(int);
    void get_roll(void);
};
void Student::set_roll(int r){
    roll_no = r;
}
void Student::get_roll(void){
    cout<<"Roll no is: "<<roll_no<<endl;
}
class Exam:public Student{
    protected:
    float maths, physics;
    public:
    void set_marks(float, float);
    void get_marks(void);

};
void Exam::set_marks(float m, float p){
    maths = m;
    physics = p;
}
void Exam::get_marks(void){
    cout<<"Marks in maths: "<<maths<<endl;
    cout<<"Marks in physics: "<<physics<<endl;
}
class Result: public Exam{
    float percentage;
    public:
    void display(){
        get_roll();
        get_marks();
        cout<<"Your Percentage is:"<<(maths+physics)/2<<"%"<<endl;
    }
};
int main(){
    /*
    Notes:
         If we inheriting Ba from A and C from B :[A-->B-->C]
         1. A is the base class for B and B is the base class for C.
         2. A-->B-->C is called inheritance path.
         3. This type of inheritance is called multilevel inheritance.
    */
    Result Abhi;
    Abhi.set_roll(101);
    Abhi.set_marks(95.0, 90.0);
    Abhi.display();
    return 0;
}