#include <iostream>
using namespace std;
 
 
int main(){
   int t;
   cin>>t;
   while(t--){
       int n,k;
       cin>>n>>k;
       char inp[n];
       for(int i=0;i<n;i++){
           cin>>inp[i];
       }
       int res=0;
       for(int j=0;j<=n/2;j++){
           if(inp[j]!=inp[n-1-j]){
               res++;
           }
       }
       if(res>k){
           cout<<"NO"<<endl;
       }
       else if(res==k){
           cout<<"YES"<<endl;
       }
       else{
           if(n%2!=0){
               cout<<"YES"<<endl;
           }
           else if((k-res)%2==0){
               cout<<"YES"<<endl;
           }
           else{
               cout<<"NO"<<endl;
           }
       }
   }
   return 0;
}