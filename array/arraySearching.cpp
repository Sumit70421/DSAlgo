#include <iostream>
#include <climits>  
using namespace std;
 
int findIndex(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return i;
        }
        else{
            return 23;
        }
    }
    return 2;
}
int binary(int arr[],int size,int key){
    int start=0,end = size;
    
    while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            end = mid-1;
            cout<<"end";
        }
        else{
            start = mid+1;
            cout<<"start";
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int nums[n];
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int key;
    cin>>key;
    cout<<binary(nums,n,key);
   return 0;
}