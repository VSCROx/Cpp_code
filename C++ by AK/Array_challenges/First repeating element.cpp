/* Return the smallest index of the repeating elements
   ex: [1 5 3 4 3 5 6]  O/P: 1 */
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    const int N = 1e2 + 2;
    int idx[N];
    for(int i=0; i<N; i++){
        idx[i] = -1;
    }

    int minidx = INT_MAX;
    for(int i=0; i<n; i++){
        if(idx[a[i]] != -1){
            minidx = min(minidx, idx[a[i]]);
        }
        else{
            idx[a[i]] = i;
        }
    }
    if(minidx==INT_MAX){
        cout<<"-1"<<endl;
    }
    else{
        cout<<minidx<<endl;
    }
    return 0;
}