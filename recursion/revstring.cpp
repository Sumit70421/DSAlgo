#include <iostream>
using namespace std;
 
void rev(string str){
    if(str.length()==0){
        return;
    }
    string rest = str.substr(1);
    rev(rest);
    cout<<str[0];
}
int main(){
   char str[] = "binod";
   rev(str);
   return 0;
}