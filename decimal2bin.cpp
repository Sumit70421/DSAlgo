#include <iostream>
using namespace std;
int dec2bin(int n){
    int x=1,lastd,res=0;
    do{ 
        x*=2;               //finding the closest power of 2 near the given number
    }while (x<=n);
    while(x){
        lastd = n/x;        // getting the binary bits
        n = n - lastd*x;   // taking care of remaining part of n (17-1*16)
        x = x/2;            // moving to the right of binary representaion
        res = res*10 + lastd; //making the last digit move to the left of represenation
    }
    return res;
}
int dec2oct(int n){
    //same as above just instead of 2 replace 8
}
int main(){
    int n;
    cin>>n;
    cout<<dec2bin(n);
   return 0;
}