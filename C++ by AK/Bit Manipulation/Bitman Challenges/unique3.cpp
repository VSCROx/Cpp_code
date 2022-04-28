/* To find a unique no. in an array where all no.'s except one, are present thrice
      ex: {2, 3, 3, 4, 2, 1, 1,3, 2, 1} */
#include<iostream>
using namespace std;

bool getbit(int n, int pos){
    return ((n & (1<<pos)) != 0);
}

int setbit(int n, int pos){
    return (n | (1<<pos));
}

int unique3(int a[], int n){
    int result = 0;
    for(int i=0; i<64; i++){             // we take 64: To traverse all the bits in binary representation upto 64 bits
        int sum = 0;
        for(int j=0; j<n; j++){
            if(getbit(a[j], i)){         // Is set bit at ith pos
                sum++;
            }
        }
        if(sum%3 != 0){
            result = setbit(result, i);    // set the bit at ith pos
        }
    }
    return result;
}

int main(){
    int a[] = {2, 3, 3, 4, 2, 1, 1, 5, 3, 2, 1, 4, 4};
    cout<<unique3(a, 13)<<endl;
    return 0;
}