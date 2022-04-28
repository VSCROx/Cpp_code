// 1. Pass by Value
/*    #include<iostream>
    using namespace std;

    void swap(int a, int b){
        int temp = a;
        a = b;
        b = temp;
    }
    int main(){
        int a = 1;
        int b = 2;
        swap(a, b);
        cout<<a<<" "<<b<<endl;
        return 0;
    }
*/

// 2. Pass by Reference
#include<iostream>
using namespace std;

void swap(int* a, int* b){
    int temp = *a;           // Dereferencing
    *a = *b;
    *b = temp;
}
int main(){
    int a = 1;
    int b = 2;
    swap(&a, &b);
    cout<<a<<" "<<b<<endl;
    return 0;
}