#include<iostream>
using namespace std;

int numberSetBit(int num){
    int cnt = 0;
    for(int i=31; i>=0; i--){
        if((num & (1<<i)) != 0){
            cnt++;
        }
    }
    return cnt;
}

int main(){
    cout<<numberSetBit(7)<<endl;
    return 0;
}