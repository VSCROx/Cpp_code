// Enter number: 9
// 9 8 7 6 5 4 3 2 1

#include<iostream>
using namespace std;

void printCount(int n){
    //base case
    if(n==0){
        return;
    }
    cout<<n<<" ";
    printCount(n-1);
}

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;

    printCount(n);
    return 0;
}