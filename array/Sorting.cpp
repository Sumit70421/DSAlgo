#include <iostream>
using namespace std;

//  32  1 5
void bubbleSort(int arr[],int n){
    int counter =1;
    while(counter<n){
        for(int i=0;i<=n-counter;i++){
            if(arr[i]>arr[i+1]){
                int temp = arr[i+1];
                arr[i+1]=arr[i];
                arr[i]=temp;
            }
            counter++;
        }
    }
    for(int k=0;k<n;k++){
        cout<<arr[k];
    }
}
void selectionSort(int arr[],int n) {
    for (int i=0;i<n-1;i++){
        for (int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int k=0;k<n;k++){
        cout<<arr[k];
    }
}
int main(){
    int n;
    cin>>n;
    int nums[n];
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    bubbleSort(nums,n);
   return 0;
}