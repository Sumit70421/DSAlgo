#include <iostream>
using namespace std;
 
 
int main(){
    int n;
    cin>>n;
    int nums[n];
    int mx = -199999;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    for(int i=0;i<n;i++){
        mx = max(mx,nums[i]);
        cout<<mx<<endl;
    }
    
   return 0;
}