#include <iostream>
using namespace std;
 
 
int main(){
   int n;
   cin>>n;    //Do this first becoz for corner cases size of the array is not defined and gives runtime error
   int arr[n];
   for (int i = 0; i < n; i++)
   {
       cin>>arr[i];
   }
   for(int i=n-1;i>=0;i--){
       cout<<arr[i]<<" ";
   }
    
   return 0;
}