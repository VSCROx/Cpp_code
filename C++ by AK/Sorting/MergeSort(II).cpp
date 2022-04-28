#include<bits./stdc++.h>
using namespace std;
int b[10]={0};          //  one temp array is required 
void merge(int a[], int l, int mid, int r){
    int i = l;
    int j = mid+1;
    int k = l;

    while(i<=mid && j<=r){
        if(a[i]<a[j]){
            b[k] = a[i];
            k++; i++;
        }
        else{
            b[k] = a[j];
            k++; j++;
        }
    }
    if(i>mid){
        while(j<=r){
            b[k] = a[j];
            k++; j++;
        }
    }
    else{
        while(i<=mid){
            b[k] = a[i];
            k++; i++;
        }
    } 

    for(k=l; k<=r; k++){
        a[k] = b[k];
    }
}

void mergesort(int a[], int l, int r){
    if(l<r){
        int mid = ((l+r)/2);
        mergesort(a, l, mid);
        mergesort(a, mid+1, r);

        merge(a, l, mid, r);
    }
}

int main(){
    int a[] = {5,3,6,2,1,7};
    
    mergesort(a,0,5);

    for(int i=0; i<6; i++){
        cout<<a[i]<<" ";
    }cout<<endl;
    return 0;
}