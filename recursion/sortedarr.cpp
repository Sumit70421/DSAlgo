#include <iostream>
using namespace std;

bool sorted(int arr[],int n){
    if(n==1){
        return true;
    }
    bool rest = sorted(arr+1,n-1);
    return (arr[0]<arr[1] && rest);
}
 
int main(){
    int r[] = {1,2,3,4,5,56};
    cout<<sorted(r,6);
   return 0;
}