#include <iostream>
using namespace std;
 
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int res=0;
        while(n){
            int d = n%10;
            res = res*10 + d;
            n/=10;
        }
        cout<<res<<endl;
    } 
   return 0;
}