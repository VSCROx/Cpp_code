#include<iostream>
using namespace std;

int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }    

    int k=a[0];
    for(int i=0; i<n; i++){
        k=max(k,a[i]);
    }

    int count[10]={0};
    for(int i=0; i<k; i++){
        count[a[i]]++;
    }

    for(int i=1; i<=k; i++){
        count[i] += count[i-1];
    }

    int output[n]={0};
    for(int i=(n-1); i>=0; i--){
        output[--count[a[i]]] = a[i];
    }

    for(int i=0; i<n; i++){
        a[i] = output[i];
    }

    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }cout<<endl;
    return 0;
}