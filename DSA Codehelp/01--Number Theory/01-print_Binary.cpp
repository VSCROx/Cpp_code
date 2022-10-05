#include<iostream>
using namespace std;

void printBinary(int num){
    for(int i = 10; i>=0; i--){  // 10 is the number of bit 
        cout<<((num >> i) & 1) <<" ";
    }
    cout<<endl;
}

int main(){
    // int n; 
    // cout<<"Enter the decimal number: ";
    // cin>>n;

    printBinary(5);
    return 0;
}