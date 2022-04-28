// Find the number of ways in which 'n' friends can remain single or can be paired up 
#include<iostream>
using namespace std;

int Pairing(int n){
    if(n==0 || n==1 || n==2){
        return n;
    }

    return Pairing(n-1) + Pairing(n-2)*(n-1);      // n-1: if nth remain single and (n-2)*(n-1): if paired nth person   
}

int main(){
    cout<<Pairing(3);
    return 0;
}