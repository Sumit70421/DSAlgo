#include <iostream>
using namespace std;
 
 
int main(){
   int n;
   cin>>n;
   int count = n-1;
   for(int i=0; i<n;i++){
       for(int j=0;j<n;j++){
           if(j<count){
               cout<<" ";
           }
           else{
               cout<<"*";
           }
        
       }
       count--;
        cout<<endl;
   }     
   return 0;
}