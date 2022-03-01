#include <iostream>
#include <vector>
using namespace std;
 
void prints(vector<int> n,int c){
    for(int i =0;i<c;i++){
        cout<<n[i]<<" ";
    }
}   
int main(){
    int n;
    cin>>n;
    vector<int> fac;
    int c=1;
    fac.push_back(1);
    for(int i=2;i<=n;i++){
        if(n%i==0){
            fac.push_back(i);
            c++;
        }
    }
    cout<<c<<endl;
    prints(fac,c);
   return 0;
}