#include<iostream>
using namespace std;

int partition(int *arr, int low, int high){
    int pivot = arr[low];
    int i = low+1;
    int j = high;
    int temp;
    do{
        while(arr[i] <= pivot)
            i++;
        while(arr[j] > pivot)
            j--;
        if(i<j)
            swap(arr[i],arr[j]);
    }while(i < j);

    //swap arr[low] & arr[j]
    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;

    return j;
}

void quickSort(int *arr, int low, int high){
    int partitionIndex ;
    if(low < high){
        partitionIndex = partition(arr,low,high);
        
        quickSort(arr,low,partitionIndex-1);  //left subarray
        quickSort(arr,partitionIndex+1,high); //right subarray
    }
}

int main(){
    int arr[] = {120,23,345,223,46,278,143};
    int size = sizeof(arr)/sizeof(arr[0]);

    quickSort(arr,0,size-1);

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}