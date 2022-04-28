// Using 2 pointers approach
#include<iostream>
using namespace std;
int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int s; cin>>s;   // given sum
    
    int i=0, j=0, st=-1, en=-1, sum=0;
    while(j<n && sum+a[j] <= s){
        sum += a[j];
        j++;
    }
    if(sum==s){
        cout << i <<" "<< j-1<<endl;
        return 0;
    }

    while(j<n){
        sum+=a[j];
        while(sum>s){
            sum-=a[i];
            i++;
        }
        if(sum==s){
            st = i;
            en = j;
            break;
        }
        j++;
    }
    
    cout<<st<<" "<<en<<endl;
    return 0;
}