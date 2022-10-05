#include<iostream>
using namespace std;

bool isSorted(int arr[], int size){
    //base case
    if(size==1){
        return true;
    }
    return ((arr[0] < arr[1]) && isSorted(arr+1,size-1));
}

int main(){
    int arr[] = {1,3,5,7,6,8,9};
    if(isSorted(arr,7)){
        cout<<"Yes, Sorted!"<<endl;
    }else{
        cout<<"Not, sorted!"<<endl;
    }
    return 0;
}