#include<iostream>
using namespace std;

void swap(int a[], int i, int j){
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int low = 0;
    int mid = 0;
    int high = n-1;
    while(mid<=high){
        if(a[mid]==0){
            swap(a,mid,low);
            mid++; low++;
        }
        else if(a[mid]==1){
             mid++;
             
        }
        else{
            swap(a,mid,high);
            mid++; high--;
        }
    }

    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }cout<<endl;
    return 0;
}