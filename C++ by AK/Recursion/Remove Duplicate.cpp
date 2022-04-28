#include<iostream>
using namespace std;

string remDup(string s){
    if(s.length()==0){
        return "";
    }
    char ch = s[0];
    string ros = remDup(s.substr(1));

    if(ch==ros[0]){
        return ros;
    }
    else{
        return ch + ros;
    } 
}
int main(){
    cout<<remDup("aaabxxxxcdddd");
    return 0;
}