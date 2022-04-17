#include <iostream>
#include<stack>
using namespace std;
void revStack(stack<int>st){
    if(st.size()==1){
        cout<<st.top()<<endl;
    }else{
        int p = st.top();
        st.pop();
        revStack(st);
        cout<<p<<endl;
    }
}
 
int main(){
    stack<int> p;
    p.push(1);
    p.push(2);
    p.push(3);
    p.push(4);
    p.push(5);
    revStack(p);
   return 0;
}