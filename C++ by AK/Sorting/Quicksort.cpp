#include<iostream>
using namespace std;
void swap(int a[], int i, int j){
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

int partition(int a[], int l, int r, int n){
    int i = l;
    int j = n-1;
    int pivot = a[l];

    if(i<j){
        while(a[i] <= pivot) i++;
        while(a[j] > pivot) j--;
        if(i<j){
            swap(a,i,j);
        }
    }
    swap(a,j,l);

    return j;
}

void quicksort(int a[], int l, int r,int n){
    if(l<r){
        int pivot = partition(a,l,r,n);

        quicksort(a,l,pivot-1,n);
        quicksort(a,pivot+1,r,n);
    }
}

int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    quicksort(a,0,n-1,n);

    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }cout<<'\n';

    return 0;
}