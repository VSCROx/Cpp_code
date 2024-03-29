#include<iostream>
using namespace std;

void bubbleSort(int *arr, int size){
    //base case
    if(size==0 || size==1){
        return;
    }
    // largest element reach at last
    for(int i=0; i<size-1; i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    //for remaining part
    bubbleSort(arr,size-1);
}

int main(){
    
    int arr[] = {5,2,3,6,1,0};
    bubbleSort(arr,6);
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}