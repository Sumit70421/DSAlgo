#include <iostream>
using namespace std;
 // value = {100 200 300}
 // wt = {10 20 30}
int knapsack (int value[],int w[],int n,int wt){
    if(n==0 | wt==0){
        return 0;
    }
    if(w[n-1]>wt){
        return knapsack(value,w,n-1,wt);
    }
    return max(knapsack(value,w,n-1,wt-w[n-1])+value[n-1],
    knapsack(value,w,n-1,wt));
} 
int main(){
    int wt[]= {10,20,30};
    int value[] = {100,50,150};
    int w = 50;
    cout<<knapsack(value,wt,3,w);
   return 0;
}