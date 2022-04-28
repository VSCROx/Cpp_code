/* To find a unique no. in an array where all no.'s except one, are present twice
       ex: {1, 3, 4, 4, 5, 3, 1}    
            Note: xor of same number always give 0                     */
#include<iostream>
using namespace std;

int unique1(int a[], int n){
    int xorsum = 0;
    for(int i=0; i<n; i++){
        xorsum = xorsum ^ a[i];         // xor of same number always give 0 
    }
    return xorsum;
}

int main(){
    int a[] = {1, 3, 4, 4, 5, 3, 1};
    cout<<unique1(a, 7)<<endl;
    return 0;
}