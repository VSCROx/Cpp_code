// Pointers to Derived Classes: Those member fun. or data members will run, to which class pointer will belong, 
// inspite of pointing to other class object :)
#include<iostream>
using namespace std;

class BaseClass{
    public:
        int var_base;
        void display(){
            cout<<"var_base: "<<var_base<<endl;
        }
};

class DerivedClass : public BaseClass{
    public:
        int var_derived;
        void display(){
            cout<<"var_base: "<<var_base<<endl;
            cout<<"var_derived: "<<var_derived<<endl;
        }
};

int main(){
    BaseClass *base_pointer;
    BaseClass obj1;
    DerivedClass obj2;
    base_pointer = & obj2;           // Pointing base class Pointer to derived class 
    base_pointer->var_base = 50;
    // base_pointer->var_derived = 40;        // Will throw an error 
    base_pointer->display(); 

    DerivedClass *derived_pointer;
    derived_pointer->var_base = 100;
    derived_pointer->var_derived = 200;
    derived_pointer->display();

    return 0;
}