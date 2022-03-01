#include <iostream>
using namespace std;
 
int selectionSort(int arr[],int n) {
    for (int i=0;i<n-1;i++){
        for (int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    return arr[1];
}

int main(){
    int arr[3];
    for (int i = 0; i < 3; i++)
    {
        cin>>arr[i];
    }
    cout<<selectionSort(arr,3);

    
   return 0;
}