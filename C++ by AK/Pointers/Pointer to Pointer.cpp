#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int* p;
    p = &a;
    cout<<*p<<endl;     // value of a

    int **q = &p;
    cout<<*q<<endl;    // Address of p
    cout<<**q<<endl;   // value of a
    return 0;
}