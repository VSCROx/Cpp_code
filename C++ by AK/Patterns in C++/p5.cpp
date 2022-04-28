#include<iostream>
using namespace std;
int main(){
    int row; cin>>row;
    int i=1;
    while(i<=row){
        int j=1;
        while(j<=i){
            cout<<"*"<<" ";
            j++;
        }cout<<endl;
        i++;
    }
    return 0;
}
// *
// * *
// * * *
// * * * *
// * * * * *