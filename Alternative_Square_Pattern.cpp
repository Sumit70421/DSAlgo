#include <iostream>
using namespace std;
 
 
int main(){
    int t;
    cin>>t;
    int arr[5*t];
    for(int i=0; i<5*t;i++){
        arr[i]=i+1;
    }
    int curr=0;
    for(int i=0;i<t;i++){
        if(i%2==0){
            for(int j=curr; j<curr+5;j++){
                cout<<arr[curr]<<" ";
                curr++;
            }
            cout<<endl;
        }else{
            int rev[5];
            for(int j=0;j<5;j++){
                rev[j]=arr[curr];
                curr++;
            }
            for(int k=4;k>=0;k--){
                cout<<rev[k]<<" ";
            }
            cout<<endl;
        }
    }
   return 0;
}