#include <iostream>
using namespace std;
 
 
int main(){
   
   int n,single,cubesum = 0;
   cin>>n;
   while(n){
       single = n%10;
       n = n/10;
       cubesum = cubesum + single*single*single;
   }
   if(n == cubesum) {
       cout<<"its arms";
   }

   return 0;
}