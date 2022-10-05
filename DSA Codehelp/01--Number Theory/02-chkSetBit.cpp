#include<iostream>
using namespace std;

bool chkSet(int num, int index){

    if((num & (1<<index)) != 0){    // means set bit at that index
        return 1;
    }
    return 0;
}

int main(){
    cout<<chkSet(6,1)<<endl;
    return 0;
}