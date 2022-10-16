#include<iostream>
using namespace std;

void selectionSort(int *arr, int n){
    for(int i=0; i<n-1; i++){
        int minIndex = i;
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[minIndex],arr[i]);
    }
}

int main(){
    int arr[] = {120,23,345,223,46,278,143};
    int size = sizeof(arr)/sizeof(arr[0]);

    selectionSort(arr,size);

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}