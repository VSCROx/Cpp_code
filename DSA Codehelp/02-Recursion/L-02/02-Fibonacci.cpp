// 0 1 1 2 3 5 8 13 ...........
#include<iostream>
using namespace std;

int fib(int n){
    //base case
    if(n==1 || n==0){
        return n;
    }

    return (fib(n-1)+fib(n-2));
}

int main(){

    int n;
    cout<<"Enter the position: ";
    cin>>n;

    int ans = fib(n);
    cout<<ans<<endl;

    return 0;
}