#include <iostream>
using namespace std;
 
int search(int arr[] , int b,int a){
    for (int i = 0; i < a; i++)
    {
        if(arr[i]==b){
            return 1;
        }
    }
    return -1;
}
int main(){
    int a,b;
    cin>>a>>b;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cin>>arr[i];
    }
    cout<<search(arr,b,a);
    

   return 0;
}