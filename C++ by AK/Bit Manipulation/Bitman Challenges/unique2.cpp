/* To find 2 unique no.'s in an array where all no.'s except two, are present twice
                ex: {3, 4, 3, 6, 8, 2, 4, 5, 2, 6}   */
#include<iostream>
using namespace std;

bool getbit(int n, int pos){
    return ((n & (1<<pos)) != 0);
}

void unique2(int a[], int n){
    int xorsum = 0;
    for(int i=0; i<n; i++){
        xorsum = xorsum^a[i];                    // xor all the element of the array (i.e xor of the two unique no.s)
    }
    int tempxor = xorsum;

    int setbit = 0;
    int pos = 0;
    while(setbit!=1){             
        setbit = xorsum & 1;                        
        pos++;                                   // To get the pos of the rightmost set bit
        xorsum = xorsum >> 1;
    }

    int newxor = 0;
    for(int i=0; i<n; i++){
        if(getbit(a[i], pos-1)){
            newxor = newxor ^ a[i];              // 1st unique no.
        }
    }
    int sec = tempxor^newxor;                    // 2nd unique no.
    cout<<newxor<<endl;
    cout<<sec<<endl;                            
}

int main(){
    int a[] = {3, 4, 3, 6, 8, 2, 4, 5, 2, 6};
    unique2(a, 10);
    return 0;
}