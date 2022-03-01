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
   int n;
   cin>>n;
   for (int i=0;i<n;i++){
       for (int j=0;j<=i;j++){
           cout<<fact(i)/(fact(i-j)*fact(j));
       }
       cout<<endl;
   }
   return 0;
}