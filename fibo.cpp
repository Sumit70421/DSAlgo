#include <iostream>
using namespace std;
void fib(int n){
    int t1=0,t2=1,nextnum;
    cout<<t1<<endl<<t2<<endl;
    for (int i=0;i<n-2;i++){
        nextnum = t1+t2;
        t1 = t2;
        t2 = nextnum;
        cout<<nextnum<<endl;
    }

}
 
int main(){
    int n;
    cin>>n;
    fib(n);
   return 0;
}