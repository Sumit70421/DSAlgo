#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++){
       cin>>arr[i];
    }
    int res = INT_MAX;
    int chk = INT_MAX;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(j>n){
                break;
            }
            else{
                if(arr[i]==arr[j] && j<chk){
                    chk =j;
                    res=i;
                }
            }
        }
    }
    cout<<res;
    return 0;
}