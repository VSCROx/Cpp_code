#include<iostream>
using namespace std;

void seivefact(int n){
    int spf[100] = {0};

    for(int i=0; i<=n; i++){
        spf[i] = i;
    }

    for(int i=2; i<=n; i++){
        if(spf[i]==i){
            for(int j=i*i; j<=n; j+=i){
                if(spf[j]==j){
                    spf[j] = i;
                }
            }
        }
    }

    while(n!=1){                        // 20 ----> 10 -----> 5 -----> 1
        cout<<spf[n]<<" ";              //    2(spf)     2        5
        n = n/spf[n];
    }
}

int main(){
    seivefact(30);
    return 0;
}