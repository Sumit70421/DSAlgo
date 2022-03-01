#include <iostream>
using namespace std;
 
 
int main(){
//    int a=10;
//    int *aptr = &a;      //* gives value at the address and & gives address of the value
//    int **aptrptr = &aptr;
//    cout<<&a<<endl;
//    cout<<*aptr<<endl;  //dereferencing pointers
//    cout<<aptr<<endl; 
//    cout<<**aptrptr<<endl;
   int arr[4] = {10,20,30,40};  //name of the array also points to the start of the array
   //so we can call it a pointer iteself 
   //we can dereference the value of the var name by using *

   int *parr = arr;
    for(int i=0;i<4;i++){
        cout<<*(arr+i)<<endl;    //arr increments using indexes
        // cout<<*parr<<endl;
        // parr++;
    }
   return 0;
}