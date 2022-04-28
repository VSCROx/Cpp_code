// Reading & Writing in Files
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    // 1. Write operation
    //string st = "Hello, Wonderful World :)";
    // Opening Files using constructor & writing it
    // ofstream out("sample.txt");     
    // out<<st;
    // out.close();

    // 2. Read operation
    string st2;
    // Opening files using constructor & reading it
    ifstream in("sample2.txt");
    in>>st2;
    getline(in, st2);
    cout<<st2;
    in.close();

    return 0;
} 