// Multilevel Inheritance
#include<iostream>
using namespace std;

class Student{
    protected:
        int roll_number;
    public:
        void set_roll_number(int);
        int get_roll_number(void);
};

void Student :: set_roll_number(int r){
    roll_number = r;
}

int Student :: get_roll_number(){
    cout<<"The roll number is:"<<roll_number<<endl;
}
//********************************************************************************************
class Exam : public Student{
    protected:
        float maths;
        float physics;
    public:
        void set_marks(float,float);
        float get_marks(void);
};

void Exam :: set_marks(float m, float p){
    maths = m;
    physics = p;
}

float Exam :: get_marks(){
    cout<<"The marks obtained in maths are: "<<maths<<endl;
    cout<<"The marks obtained in physics are: "<<physics<<endl;
}
//*********************************************************************************************
class Result : public Exam{
    float percentage;
    public:
        void display(){
            get_roll_number();
            get_marks();
            cout<<"The Result is: "<<(maths+physics)/2<<"%"<<endl;
        }
};
int main(){
    Result o;
    o.set_roll_number(21);
    o.set_marks(99,100);
    o.display();
    return 0;
}