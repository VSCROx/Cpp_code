#include<iostream>
#include<string>
using namespace std;

void revStr(string& str, int i, int j){
    //base case
    if(i>j){
        return;
    }

    swap(str[i],str[j]);
    i++; j--;

    revStr(str,i,j);
}

int main(){
    string name = "vivek";
    revStr(name,0,name.length()-1);
    cout<<name<<endl;
    return 0;
}