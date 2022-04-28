// Virtual Base Class- To remove the Ambiguity and duplication of the data members
#include <iostream>
using namespace std;

/*Inheritance:
student ---> Test   (Here, rollno will send to two classes. To avoid this duplication & ambiguity we use virtual base class(i.e. student)
student ---> sports
test ---> result
sports --->result
*/
class Student
{
protected:
    int rollno;

public:
    void set_number(int a)
    {
        rollno = a;
    }
    void print_number(void)
    {
        cout << "Your roll no is: " << rollno << endl;
    }
};

class Test : virtual public Student
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks(void)
    {
        cout << "You result is here: "
             << " Maths: " << maths << endl
             << "Physics: " << physics << endl;
    }
};

class Sports : virtual public Student
{
protected:
    float score;

public:
    void set_score(float s)
    {
        score = s;
    }
    void print_score(void)
    {
        cout << "Your Pt score is: " << score << endl;
    }
};

class Result : public Test, public Sports
{
private:
    float total;

public:
    void display(void)
    {
        total = maths + physics + score;
        print_number();
        print_marks();
        print_score();
        cout << "Your total score is: " << total << endl;
    }
};

int main()
{
    Result vs;
    vs.set_number(20200);
    vs.set_marks(90.0, 99.6);
    vs.set_score(10);
    vs.display();

    return 0;
}
