#include<iostream>
using namespace std;

void Merge(int arr[], int l, int mid, int r){
    int n1 = mid-l+1;
    int n2 = r-mid;
    int a[n1];          // temp arrays
    int b[n2];

    for(int i=0; i<n1; i++){
        a[i] = arr[l+i];
    }
    for(int i=0; i<n2; i++){
        b[i] = arr[mid+i+1];
    }

    int i=0;
    int j=0;
    int k=l;
    while(i<n1 && j<n2){
        if(a[i] < b[j]){
            arr[k] = a[i];
            k++; i++;
        }
        else{
            arr[k] = b[j];
            k++; j++;
        }
    }
     
    while(i<n1){                  // for last element to insert in the original array(arr) when another iterator reach EOL
        arr[k] = a[i];
        k++; i++;
    }

    while(j<n2){                  // for last element to insert in the original array(arr) when another iterator reach EOL
        arr[k] = b[j];
        k++; j++;
    }
}

void MergeSort(int arr[], int l, int r){
    if(l<r){
        int mid = (l+r)/2;

        MergeSort(arr,l,mid);
        MergeSort(arr,mid+1,r);

        Merge(arr,l,mid,r);
    }
}

int main(){
    int arr[] = {2,8,4,9,7,1};
    MergeSort(arr,0,5);

    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}