#include <iostream>
using namespace std;

void swap(int *c,int *d){
    cout<<*c<<*d<<endl;    //we are changing address of the values 
    int temp = *c;
    *c = *d;
    *d = temp;

} 
int main(){
   int a=2,b=4;
   swap(&a,&b); 
   cout<<a<<" "<<b;
   return 0;
}