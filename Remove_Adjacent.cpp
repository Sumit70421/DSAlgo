//Check for 2 elements
//check equal elements

#include <iostream>
using namespace std;
int * delElem(int arr[],int x,int n){
    for(int i=x; i<n;i++){
       arr[i]=arr[i+1];
    }
    return arr;
}
int maxelem(int arr[],int n){
    int maxr=-99999999;
    for(int i=0; i<n;i++){
       maxr = max(arr[i],maxr);
    }
    return maxr;
}
void solve(int arr[],int n){
    int max= maxelem(arr,n);
    int op=0;
    for(int i=0; i<n;i++){
       if(arr[i]+arr[i+1]==max){
           arr[i]=max;
           arr = delElem(arr,i+1,n);
           op+=1;
       }
    }
    cout<<op<<endl;
}
bool chkarr(int arr[],int n){
    bool flag=true;
    for(int i=1; i<n;i++){
       if(arr[0]!=arr[i]){
           flag = false;
       }
    }
    return flag;
}
int main(){
   int t;
   cin>>t;
   while(t--){
       int n;
       cin>>n;
       int arr[n];
       for(int i=0; i<n;i++){
          cin>>arr[i];
       }
       if(chkarr(arr,n)){
           cout<<0<<endl;
       }
       else if(n==2){
           cout<<1<<endl;
       }
       else{
           solve(arr,n);
       }
   }
   return 0;
}