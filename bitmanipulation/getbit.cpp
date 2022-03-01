#include <iostream>
using namespace std;
int chk(int a, int b){
    return((a & (1<<b)) !=0);   // 0101 & 0100 will give 0100 which will return 4 not 0;
}
int setBit(int a, int b){
    return (a|(1<<b));
}
int unSetBit(int a, int b){
    int mask = ~(1<<b);
    return (a & mask);
}
int powerof2(int a){
    return (1<<a);
}
int main(){
//    cout<<chk(5,1)<<endl;
//    cout<<setBit(4,0)<<endl;   //set is flipping to 1 and unset is flipping to 0;
//    cout<<unSetBit(5,2)<<endl;
   cout<<powerof2(4);
   return 0;
}