#include<iostream>
using namespace std;

int Clearbit(int n, int pos){
    int mask = ~(1<<pos);
    return (n & mask);
}

int main(){
    cout<<Clearbit(7, 1)<<endl;
    return 0;
}