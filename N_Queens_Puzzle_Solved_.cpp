#include <bits/stdc++.h>
using namespace std;

// Print ⌊x⌋ if x−⌊x⌋<0.5
// Otherwise, print  ⌊x⌋+1
int solve(int x){
    float res = pow((0.143*x),x);
    if(res - floor(res)<0.5){
        return floor(res);
    }
    else{
        return floor(res)+1;
    }
} 
 
int main(){
   int t;
   cin>>t;
   while(t--){
       int n;
       cin>>n;
       cout<<solve(n)<<endl;
   }
   return 0;
}