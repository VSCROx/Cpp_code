#include<iostream>
using namespace std;

void shellSort(int *arr,int n){
    int i,j;
    for(int gap=n/2; gap>0; gap /= 2){
        for(i=gap; i<n; i++){
            int temp = arr[i];
            for(j=i; j>=gap && arr[j-gap] > temp; j -= gap){
                arr[j] = arr[j-gap];
            }
            arr[j] = temp;
        }
    }
}

int main(){
    int arr[] = {120,23,345,223,46,278,143};
    int size = sizeof(arr)/sizeof(arr[0]);

    shellSort(arr,size);

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}