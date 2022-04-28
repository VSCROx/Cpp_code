// ex: {1,2,4,5,6,2,4,2,6}  ans(find for 2): first= 1 & last occ = 7
#include<iostream>
using namespace std;

int firstocc(int a[], int n, int i, int key){
    if(i==n){
        return -1;
    }
    if(a[i]==key){
        return i;
    }
    return firstocc(a, n, i+1, key);
}

int lastocc(int a[], int n, int i, int key){
   if(i==n){
        return -1;
    }
    int restArray = lastocc(a, n, i+1, key);      // move pointer to the end of the array
    if(restArray != -1){                              
        return restArray;                         // when we get ans(index) return upto start of the array(i.e.: i=0)
    } 
    if(a[i]==key){
        return i;
    }
    return -1;
}

int main(){
    int i = 0;
    int key = 2;
    int a[]={1,2,4,5,6,2,4,2,6};
    cout<<firstocc(a, 9, i, key)<<endl;
    cout<<lastocc(a,9,i,key)<<endl;
    return 0;
}