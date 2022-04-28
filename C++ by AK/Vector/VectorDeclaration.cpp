#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);             // input
    v.push_back(2);
    v.push_back(3);

    for(int i=0; i<v.size(); i++){          // 1. O/P
        cout<<v[i]<<" ";
    }cout<<endl;
    
    vector<int>::iterator it;                // 2. O/P
    for(it=v.begin(); it!=v.end(); it++){
        cout<<*it<<" ";
    }cout<<endl;
    
    for(auto element:v){                     // 3. O/P
        cout<<element<<" ";
    }cout<<endl;

    v.pop_back(); 

    vector<int> v2 (3,10);            // vector2 : size is:3 with all element 10
    for(auto el:v2){
        cout<<el<<" ";
    }cout<<'\n';             
    
    swap(v, v2);             // swaping
    for(auto element: v){
        cout<<element<<" ";
    }cout<<endl;
    for(auto element: v2){
        cout<<element<<" ";
    }cout<<endl;
    
    sort(v.begin(), v.end());     // sorting 
    for(auto element: v){
        cout<<element<<" ";
    }cout<<endl;
    

    //std:: pair (STL container)    [It is used: if we are required to store two values which are related to each other]
    // ex:
    pair<int,char> p;
    p.first = 2;
    p.second = 'a';
    cout<<p.first<<" ";
    cout<<p.second<<" ";

    return 0;
}