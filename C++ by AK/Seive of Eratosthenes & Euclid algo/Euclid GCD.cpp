/* 42 - 24 = 18                       OR          42 % 24 = 18
   24 - 18 = 6                                    24 % 18 = 6
   18 - 6  = 12                                   18 % 6   = 0
   12 - 6   = 6                                    i.e: 6 is the gcd
   6  - 6  = 0     i.e: last no. (gcd) = 6                                    */
   #include<iostream>
   using namespace std;

   int gcd(int a, int b){
       while(b!=0){
           int rem = a % b;
           a=b;
           b=rem;
       }
       return a;
   }

   int main(){
       cout<<gcd(42,24)<<endl;
       return 0;
   }