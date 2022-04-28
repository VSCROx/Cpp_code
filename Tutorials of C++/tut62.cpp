#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    // 1, Writing to the file
    // Declaring an object of the type ofstream
    // ofstream out;
    // Connecting the object out to the text file using the member function open()
    // out.open("sample.txt");

    // Writing to the file
    // out<<"My first program\n";
    // out<<"VS Code is best";

    // Closing the file connection
    // out.close();

    // 2. Reading from the file
    ifstream in;
    string st;
    in.open("sample.txt");
    while(in.eof()==0){
        getline(in, st);
        cout<<st<<endl;
    }
    in.close();
    return 0;
}