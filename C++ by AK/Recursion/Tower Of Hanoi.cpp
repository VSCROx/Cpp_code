/* From src to dest, we have move blocks with the help of helper rod such that smaller blocks never placed under larger block &
   always move one blocks one at a time */
   #include<iostream>
   using namespace std;
   
   void towerofHanoi(int st, int en, char src, char dest, char helper){
       if(st>en){
           return;
       }
       towerofHanoi(st, en-1, src, helper, dest);
       cout<<"Move block "<<en<<" "<<src<<" to "<<dest<<endl;

       towerofHanoi(st, en-1, helper, dest, src);
   }

   int main(){
       towerofHanoi(1, 3, 'A', 'C', 'B');
       return 0;
   }