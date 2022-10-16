#include<iostream>
using namespace std;

void insertionSort(int *arr, int n){
    for(int i=1; i<n; i++){
        int curr = arr[i];
        int j = i-1;

        while(j>=0 && arr[j] > curr){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = curr;
    }
}

int main(){
    int arr[] = {120,23,345,223,46,278,143};
    int size = sizeof(arr)/sizeof(arr[0]);

    insertionSort(arr,size);

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}