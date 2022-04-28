#include<iostream>
using namespace std;
int main(){
    int n; cin>>n;
    int row=1;
    while(row<=n){
        // space
        int space = n-row;
        while(space){
            cout<<" ";
            space--;
        }

        //print 1st triangle
        int j=1;
        while(j<=row){
            cout<<j;
            j++;
        }

        //print 2nd triangle
        int start = row-1;
        while(start){
            cout<<start;
            start--;
        }

        cout<<endl;
        row++;
    }
    return 0;
}