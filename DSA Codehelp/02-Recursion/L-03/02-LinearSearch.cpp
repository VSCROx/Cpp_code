#include<iostream>
using namespace std;

bool linearSearch(int arr[], int size, int k){
    //base case
    if(size==0){
        return 0;
    }

    if(arr[0]==k){
        return true;
    }
    else{
        return linearSearch(arr+1,size-1,k);
    }

}

int main(){
    int arr[] = {1,3,5,7,6,8,9};
    int key = 4;

    if(linearSearch(arr,7,key)){
        cout<<"Yes!"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    return 0;
}