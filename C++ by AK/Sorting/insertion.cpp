// insert an element from unsorted array to its correct position of an sorted array
#include<iostream>
using namespace std;
int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    // logic
    for(int i=1; i<n; i++){
        int current = arr[i];
        int j = i-1;
        while(arr[j] > current && j>=0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;      // j+1 as after loop j is decreased by 1
    }
    // print
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
} 