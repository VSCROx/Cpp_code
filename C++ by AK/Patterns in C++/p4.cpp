#include<iostream>
using namespace std;
int main(){
    int row; cin>>row;
    int i=1;
    int count = 1;
    while(i<=row){
        int j=1;
        while(j<=row){
            cout<<count<<"  ";
            count++;
            j++;
        }cout<<endl;
        i++;
    }
    return 0;
}
// 1  2  3
// 4  5  6
// 7  8  9