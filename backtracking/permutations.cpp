#include "bits/stdc++.h"
using namespace std;
void permutations(vector<int>&a,int idx){
    if(idx = a.size()){
        ans.push_back(a);
        return;
    }
    for(int i=idx;i<a.size();i++){
        swap(a[i],a[idx]);
        permutations(a,idx+1);
        swap(a[idx],a[i]);
    }
}

int main(){
    
    
   return 0;
}