#include<iostream>
using namespace std;
int main(){
    int n; cin>>n;
    int row =1;
    while(row<=n){
        // 1st triangle(number)
        int j=1;
        while(j<=(n-row+1)){
            cout<<j;
            j++;
        }
        // 2nd triangle(star*)
        int start = (row-1)*2;
        while(start){
            cout<<"*";
            start--;
        }
        // 3rd triangle(number)
        int k=row;
        while(k<=n){
            cout<<n-k+1;
            k++;
        }

        cout<<endl;
        row++;
    }
    return 0;
}