#include<iostream>
using namespace std;
int main(){
    int arr[] = {1, 2, 3};
    cout<<arr<<endl;        // Address of element at 0th index
    cout<<*arr<<endl;       // Dereferencing
    
    cout<<"**************\n";

    int* ptr = arr;
    for(int i=0; i<3; i++){
        cout<<*ptr<<endl;      // Dereferencing      OR    cout<<*(arr + i)<<endl;
        ptr++;                 // Pointer Arithmatic
    }
    return 0;
}