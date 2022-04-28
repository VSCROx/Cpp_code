/* Pointers are variables that store the address of other variables
   We use pointers: Access the variable & Modify the value of the variables*/
#include<iostream>
using namespace std;
int main(){
    int a = 100;
    int* aptr;
    aptr = &a;

    cout<<&a<<endl;
    cout<<aptr<<endl;
    
    //Dereferencing
    cout<<*aptr<<endl;

    // Modify the value of a 
    *aptr = 200;
    cout<<a<<endl;
    return 0;
}