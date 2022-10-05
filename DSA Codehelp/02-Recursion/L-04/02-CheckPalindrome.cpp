#include<iostream>
#include<string>
using namespace std;

bool chkPalin(string s, int i, int j){
    //base case
    if(i>j){
        return 1;
    }

    if(s[i]!=s[j]){
        return 0;
    }
    return chkPalin(s,i+1,j-1);
}

int main(){
    string s = "nitin";
    if(chkPalin(s,0,s.length()-1)){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    return 0;
}