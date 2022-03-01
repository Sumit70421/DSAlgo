#include <iostream>
using namespace std;
 
int firstocc(int arr[],int n,int i,int key){
    if(i==n){
        return -1;
    }
    else if(arr[i]==key){
        return i;
    }
    else{
    firstocc(arr,n,i+1,key);
    }
    
}

int lastocc(int arr[],int n,int i,int key){
    if(i==n){
        return -1;
    }
    int restarr = lastocc(arr,n,i+1,key);
    if(restarr!=-1){
        return restarr;
    }
    if(arr[i]==key){
        return i;
    }
    
}
int main(){
    int arr[] = {1,3,2,3,2,4,5,2,5};
    cout<<firstocc(arr,9,0,2);
    cout<<lastocc(arr,9,8,2);
   return 0;
}