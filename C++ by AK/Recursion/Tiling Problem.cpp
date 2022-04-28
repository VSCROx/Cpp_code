/* Given a "2 x n" board & tiles of size "2 x 1", count the number of ways to tile the given board using these tiles */
#include<iostream>
using namespace std;

int tilingWays(int n){
    if(n==0 || n==1){
        return n;
    }

    return tilingWays(n-1) + tilingWays(n-2);       // n-1: vertically placed & n-2: horizontally placed
}

int main(){
    cout<<tilingWays(4);
    return 0;
} 