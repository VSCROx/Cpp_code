// Form the Biggest number from the number string (i.e. Arrange in Decreasing order)
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s = "393423439740";
    
    sort(s.begin(), s.end(), greater<int>());

    cout<<s<<endl;
    return 0;
}