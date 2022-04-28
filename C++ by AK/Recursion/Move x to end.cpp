#include<iostream>
using namespace std;

string movex(string s){
    if(s.length()==0){
        return "";
    }
    char ch = s[0];
    string ros = movex(s.substr(1));

    if(ch == 'x'){
        return ros + ch;
    }
    return ch + ros;
}

int main(){
    cout<<movex("axgsfxhxxhsxhs");
    return 0;
}