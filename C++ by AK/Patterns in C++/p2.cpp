#include<iostream>
using namespace std;
int main(){
    int row; cin>>row;
    int i=1;
    while(i<=row){
        int j=1;
        while(j<=row){
            cout<<i<<" ";
            j++;
        }cout<<endl;
        i++;
    }
    return 0;
}
// 1 1 1
// 2 2 2
// 3 3 3