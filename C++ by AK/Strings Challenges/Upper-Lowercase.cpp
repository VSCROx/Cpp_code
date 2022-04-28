#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
  
    // convert into uppercase                                      Inbuilt function
    for(int i=0; i<s.size(); i++){                     //  transform(s.begin(), s.end(), s.begin(), ::toupper);
        if(s[i]>='a' && s[i]<='z'){                    //  transform(s.begin(), s.end(), s.begin(), ::tolower);
            s[i] -= 32;                                // first two argument: pass the whole string and
        }                                              // two argument: starting point & to upper or lowercase
    }
    cout<<s<<endl;

    // convert into lowercase
    for(int i=0; i<s.size(); i++){      
        if(s[i]>='A' && s[i]<='Z'){          
            s[i] += 32;                      
        }
    }
    cout<<s<<endl;   
    return 0;
}