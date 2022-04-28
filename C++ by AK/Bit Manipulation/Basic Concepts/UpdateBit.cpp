#include<iostream>
using namespace std;

int UpdateBit(int n, int pos, int value){
    int mask = ~(1<<pos);
    n = n & mask;
    return (n | (value<<pos));
}

int main(){
    cout<<UpdateBit(7, 3,1)<<endl;
    return 0;
}