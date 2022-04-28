// Marked the numbers which is the divisible by prime number & print the unmarked number
#include<iostream>
using namespace std;

void seiveprime(int n){
    int prime[100] = {0};
         
    for(int i=2; i<=n; i++){
         if(prime[i]==0){
             for(int j=i*i; j<=n; j+=i){
                 prime[j] = 1;          // marked
             }
         }
    }
    
    for(int i=2; i<=n; i++){
        if(prime[i]==0){                // unmarked
            cout<<i<<endl;
        }
    }
}

int main(){
    seiveprime(10);
    return 0;
}