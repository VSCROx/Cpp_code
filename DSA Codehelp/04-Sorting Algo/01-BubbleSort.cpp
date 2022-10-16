#include<iostream>
using namespace std;

void bubbleSort(int *arr,int n){
    bool swapped = false;
    for(int i=1; i<n; i++){
        for(int j=0; j < n-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false)
            break;
    }
}

int main(){
    int arr[] = {120,23,345,223,46,278,143};
    int size = sizeof(arr)/sizeof(arr[0]);

    bubbleSort(arr,size);

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}