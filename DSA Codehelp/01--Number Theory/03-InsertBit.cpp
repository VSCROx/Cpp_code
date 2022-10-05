#include<iostream>
using namespace std;

void printBinary(int num){
    for(int i = 10; i>=0; i--){  // 10 is the number of bit 
        cout<<((num >> i) & 1) <<" ";
    }
    cout<<endl;
}

void insertBit(int num, int index, int op){

    if(op == 1){  // insert Set bit
        printBinary(num | (1<<index));
    }
    else if(op == 0){  // insert Set bit
        printBinary(num & (~(1<<index)));
    }
    else{
        cout<<"Invalid operation!!"<<endl;
    }
}

int main(){
    insertBit(8,2,1);
    insertBit(7,2,0);
    return 0;
}