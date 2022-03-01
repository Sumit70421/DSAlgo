#include <iostream>
using namespace std;
 
void printsubs(char arr[], int n){
    for(int i=0;i<(1<<n);i++){
        for(int j=0;j<n;j++){
            if(i & (1<<j)){
                cout<<arr[j];
            }
        }
        cout<<endl;
    }
}
int main(){
   char arr[3];
   for(int i=0; i<3;i++){
      cin>>arr[i];
   }
   printsubs(arr,3);
   return 0;
}