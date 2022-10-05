// Also learn : -> Application, disadvantages from gfg
#include<iostream>
using namespace std;

void merge(int *arr, int s, int e){
    int mid = s + (e-s)/2;

    int len1 = mid-s+1;
    int len2 = e-mid;

    int *first = new int[len1];
    int *second = new int[len2];

    //copy values
    int mainArrayIndex = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid+1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainArrayIndex++];
    }

    //Merge 2 sorted arrays
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;
    
    while(index1 < len1 && index2 < len2){
        if(first[index1] < second[index2]){
            arr[mainArrayIndex++] = first[index1++];
        }else{
            arr[mainArrayIndex++] = second[index2++];
        }
    }

    while(index1 < len1){
        arr[mainArrayIndex++] = first[index1++];
    }
    
    while(index2 < len2){
        arr[mainArrayIndex++] = second[index2++];
    }

    //deallocating memory
    delete []first;
    delete []second;
}

void mergeSort(int *arr, int s, int e){
    //base case
    if(s >= e){ //means: single element
        return;
    }

    int mid = s + (e-s)/2;

    //left part sort karna h
    mergeSort(arr,s,mid);

    //right part sort karna h
    mergeSort(arr,mid+1,e);

    //Merge
    merge(arr,s,e);

}

int main(){
    int arr[11] = {54,23,1,93,0,12,23,21,221,22,8};

    mergeSort(arr,0,10);

    for(int i=0; i<10; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}
