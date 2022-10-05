#include<iostream>
using namespace std;

void printBinary(int num){
    for(int i = 10; i>=0; i--){  // 10 is the number of bit 
        cout<<((num >> i) & 1) <<" ";
    }
    cout<<endl;
}

void toggleBit(int num, int ind){
    printBinary(num ^ (1<<ind));
}

int main(){
    toggleBit(8,3);
    return 0;
}