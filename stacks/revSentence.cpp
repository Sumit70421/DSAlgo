#include<stack>
#include <iostream>
using namespace std;
//doing how are you;
void revString(string s){
    int i=0;
    stack<string> st;
    string l;
    while(i<=s.length()){
        if(s[i]==' ' || i==s.length()){
            st.push(l);
            l="";
        }
        else{
            l+=s[i];
        }
        i++;
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}
int main(){
    string m = "hi!!! how are you doing?";
    revString(m);
   return 0;
}