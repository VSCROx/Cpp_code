// (n & n-1) has same bits as 'n' except the rightmost set bit
// In case of power of 2: n has only one set bit, & n-1 will have all set bits after that pos
#include<iostream>
using namespace std;

bool powerof2(int n){
    return (n && !(n & (n-1)));       // n && : In case of input n=0 
}

int main(){
    cout<<powerof2(0)<<endl;
    return 0;
}