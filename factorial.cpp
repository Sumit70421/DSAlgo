#include <iostream>
using namespace std;
int fact(int n){
    int res=1;
    for (int i=2;i<=n;i++){
        res = res * i;
    }
    return res;
}
 
int main(){
    int n,r;
    cin>>n>>r;
    int denom = fact(n-r)*fact(r);
    cout<<fact(n)/denom;
   return 0;
}