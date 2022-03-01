#include <iostream>
using namespace std;
int b2d(int n){
    int lasd,x=1,res=0;
    while(n){
        lasd = n%10;
        res = res +lasd * x;
        x = x*2;
        n = n/10;
    }
    return res;
} 
int octal2dec(int n){
    int lasd,x=1,res=0;
    while(n){
        lasd = n%10;
        res = res +lasd * x;
        x = x*8;
        n = n/10;
    }
    return res;
}
int hex2dec(string n){
    int size = n.size();
    int x=1,res = 0;
    for (int i = size-1; i>=0;i--){
        if(n[i]>='0' && n[i] <= '9'){
            res = res+ x*(n[i]-'0'); // it will take diff lexicographiaclly if its a digit
        }
        else if(n[i]>='A' && n[i] <= 'F'){  // for handling characters in hexdecimal input
            res = res + x*(n[i]-'A'+10);    // as numbers are from 0-9 A shud b 10 and so on; will take diff lexico
        }
        x = x*16;
    }
    return res;
}
int main(){
    string n;
    cin>>n;
    cout<<hex2dec(n);
   return 0;
}