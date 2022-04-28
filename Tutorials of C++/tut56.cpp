// Virtual Function
#include<iostream>
using namespace std;

class BaseClass{
    public:
        int var_base=1;
        virtual void display(){
            cout<<"var_base: "<<var_base<<endl;
        }
};

class DerivedClass : public BaseClass{
    public:
        int var_derived=2;
        void display(){
            cout<<"var_base: "<<var_base<<endl;
            cout<<"var_derived: "<<var_derived<<endl;
        }
};

int main(){
    BaseClass *base_pointer;
    BaseClass obj1;
    DerivedClass obj2;
    base_pointer = & obj2; 

    base_pointer->display();   
  
    return 0;
}