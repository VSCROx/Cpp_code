#include<iostream>
using namespace std;

int getMax(int *arr, int n){
    int maxi = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i] > maxi)
            maxi = arr[i];
    }
    return maxi;
}

void countSort(int *arr, int n, int div){
    int* output = new int[n];
    int count[10] = {0};

    for(int i=0; i<n; i++){
        count[(arr[i]/div)%10]++;
    }

    for(int i=1; i<10; i++){
        count[i] += count[i-1];
    }

    for(int i = n-1; i>=0; i--){
        output[count[(arr[i]/div)%10] - 1] = arr[i];
        count[(arr[i]/div)%10]--;
    }

    for(int i=0; i<n; i++){
        arr[i] = output[i];
    }

    delete []output;
}

void radixSort(int *arr, int n){
    int m = getMax(arr, n);
    for(int div=1; m/div > 0; div *= 10){
        countSort(arr,n,div);
    }
}

int main(){
    int arr[] = {120,23,345,223,46,278,143};
    int size = sizeof(arr)/sizeof(arr[0]);

    radixSort(arr,size);

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}