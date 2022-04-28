/* {a, b, c}: {}   {c}  {b}  {b,c} {a} {a,c} {a,b} {a,b,c}
              000, 001, 010,  011, 100, 101, 110,    111    = 2^n    */
#include<iostream>
using namespace std;

void subset(int a[], int n){
    for(int i=0; i<(1<<n); i++){
        for(int j=0; j<n; j++){
            if(i & (1<<j)){            // set bit at jth pos in 'i' number
                cout<<a[j]<<" ";
            }
        }cout<<endl;
    }
}

int main(){
    int a[] = {1,2,3};

    subset(a, 3);
    return 0;
}