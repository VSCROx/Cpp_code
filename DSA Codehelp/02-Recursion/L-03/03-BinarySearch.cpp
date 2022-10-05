#include<iostream>
using namespace std;

bool binarySearch(int *arr,int start, int end, int k){
    //base case
    // element not found
    if(start>end){
        return 0;
    }
    int mid = start + (end-start)/2;
    // element found
    if(arr[mid]==k){
        return true;
    }
    if(arr[mid]>k){
        return binarySearch(arr,start,mid-1,k);
    }
    else{
        return binarySearch(arr,mid+1,end,k);
    }
}

int main(){
    int arr[] = {2,3,4,6,8,9,11};
    int key = 9;

    if(binarySearch(arr,0,6,key)){
        cout<<"Found!"<<endl;
    }
    else{
        cout<<"Not Found!"<<endl;
    }
    return 0;
}