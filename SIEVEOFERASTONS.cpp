#include <iostream>
using namespace std;
int main(){
    int n =13;
    bool primes[n+1];
    for(int i=0;i<n+1;i++){
        primes[i] = true;
    }
    for(int i=2;i*i<=n;i++){
        for(int j=i*2;j<=n;j+=i){
            primes[j] = false;
        }
    }
    for(int i=2;i<=n;i++){
        cout<<i<<" "<<primes[i]<<endl;
    }

    

   return 0;
}