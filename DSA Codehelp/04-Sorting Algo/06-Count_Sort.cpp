#include<iostream>
using namespace std;

int getMax(int* arr, int n){
    int maxi = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i] > maxi){
            maxi = arr[i];
        }
    }
    return maxi;
}

void countSort(int* arr, int n){
    int i, j;

    int max_element = getMax(arr, n);
    int* count = new int[max_element+1];
    for(int i=0; i<=max_element; i++){
        count[i] = 0;
    }

    for(int i=0; i<n; i++){
        count[arr[i]]++;
    }

    i=0; 
    j=0;
    while(i <= max_element){
        if(count[i] > 0){
            arr[j] = i;
            count[i]--;
            j++;
        }
        else{
            i++;
        }
    }
}



int main(){
    int arr[7] = {3,1,9,7,1,2,4};

    countSort(arr,7);

    for(int i=0; i<7; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}