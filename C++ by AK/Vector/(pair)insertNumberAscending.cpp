/* Given: {10,16,7,14,5,3,12,9}          via first sort the array:{3,5,7,9,10,12,14,16}
   Required: {4,7,2,6,1,0,5,3}                     original_index:{5,4,2,7, 0, 6, 3, 1}           
   We have to Output that arrray having their value percedence(i.e smallest element = 0 & so on upto size of the array)    
   Using PAIR(STL CONTAINER)                                        */
   #include<iostream>
   #include<vector>
   #include<algorithm>
   using namespace std;

   bool myCompare(pair<int,int> p1, pair<int,int> p2){
       return p1.first < p2.first;                     // p.first: element of the array
   }

   int main(){
       int arr[] = {10,16,7,14,5,3,12,9};
       vector < pair<int,int> > v;

       for(int i=0; i<(sizeof(arr)/sizeof(arr[0])); i++){
           v.push_back(make_pair(arr[i],i));           // Make pair of element of the array with their index
       }

       sort(v.begin(), v.end(), myCompare);

       for(int i=0; i<v.size(); i++){
           arr[v[i].second] = i;             // insert value(i) to their original index
       }  

       for(int i=0; i<v.size(); i++){
           cout<<arr[i]<<" ";
       }          
       return 0;
   }
