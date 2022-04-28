#include<iostream>
using namespace std;
int main(){
    int n; cin>>n;
    cin.ignore();
    char a[n+1];
    cin.getline(a, n);     // As compiler stop to execute after a space encounter
    cin.ignore();

    int i=0;
    int currlen = 0, maxlen = 0;
    int st = 0, maxst = 0;
    while(1){
        if(a[i]==' ' || a[i]=='\0'){
            if(currlen>maxlen){
                maxlen = currlen;
                maxst = st;
            }
            currlen = 0;
            st = i+1;
        }
        else
           currlen++;

        if(a[i]=='\0'){
            break;
        }

        i++;
    }
    cout<<maxlen<<endl;
    //print word
    for(int i=0; i<maxlen; i++){
        cout<<a[i+maxst];
    }
    return 0;
}