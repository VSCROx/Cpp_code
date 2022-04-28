// Initialisation list in Constructor
#include<iostream>
using namespace std;
/*
Syntax for initialization list in constructor:
constructor (argument-list) : initialization-section
{
    assignment + other code;
}

ex:
class Test{
    int a, b;
    public:
        Test(int i, int j) : a(i) , b(j){constructor-body} [OR Test(int i, int j) : a(i) , b(a+j)]
};        
 // value of a will first initialize as a is declared first in private section, otherwise it will result in error
ex:  Test(int i, int j) : b(j) , a(i)
*/


int main(){
    
    return 0;
}