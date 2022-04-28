#include<iostream>
using namespace std;
int main(){
    int n; cin>>n;
    char a[n+1];
    cin>>a;
    
    bool chk = 1;
    for(int i=0; i<n; i++){
        if(a[i] != a[n-1-i]){
            chk =0;
            break;
        }
    }
    if(chk){
        cout<<"Word is Palindrome\n";
    }
    else{
        cout<<"Word not a Palindrome\n";
    }

    return 0;
}