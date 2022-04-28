#include<iostream>
#include<string>
using namespace std;

void revs(string s){
    if(s.length()==0){
        return;
    }

    char ch = s[0];
    string ros = s.substr(1);
    revs(ros);

    cout<<s[0];
}

int main(){
    revs("code");
    return 0;
}