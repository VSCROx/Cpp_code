/* T.C. = O(n) [Better than previous i.e. (Searching a Matrix.cpp)]
 Matrix should be sorted in row & col */
#include<iostream>
using namespace std;
int main(){
    int n,m; cin>>n>>m;
    int a[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }

    int target; cin>>target;
    
    int r=0, c=m-1;    // top right position
    bool flag = false;
    while(r<n and c>=0){
        if(a[r][c]==target){
            flag = true;
        }
        if(a[r][c] > target){
            c--;
        }
        else{
            r++;
        }
    }
    if(flag){
        cout<<"Element found\n";
    }
    else{
        cout<<"Element does not exist\n";
    }
    return 0;
}