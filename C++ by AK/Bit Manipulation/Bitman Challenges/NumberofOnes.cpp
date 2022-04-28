#include<iostream>
using namespace std;

int One(int n){
    int count = 0;
    while(n){          
        n = n & (n-1);
        count++;
    }
    return count;
}

int main(){
    cout<<One(7)<<endl;
    return 0;
}