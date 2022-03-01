#include <iostream>
using namespace std;
 
 
int main(){
   int x;
   cin>>x;

   if(x%5==0 && x%11==0){
       cout<<"BOTH";
   } 
   else if(x%5==0 || x%11==0){
       cout<<"ONE";
   }
   else{
       cout<<"NONE";
   }

   return 0;
}