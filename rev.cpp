#include <iostream>
using namespace std;
 
 
int main(){
    int n ,reverse , lastd;
    cin>>n;
    reverse = 0;
    while(n){
        lastd = n%10;
        n = n/10;
        reverse = reverse*10 + lastd;
    }
    cout<<reverse;
    return 0;
}   