#include <iostream>
using namespace std;
 
bool isSafe(int** arr,int x,int y,int n){
    
    for(int row = 0;row<x;row++){
        if(arr[row][y]==1){
            return false;
        }
    }
    int row = x;
    int col = y;
    while(row>=0 && col>=0){
        if(arr[row][col]==1){
            return false;
        }
        row--;
        col--;
    }
    while(row>=0 && col<=n){
        if(arr[row][col]==1){
            return false;
        }
        row--;
        col++;
    }
    return true;

}

bool nqueen(int** arrl, int x, int n){
    if(x>=n){
        return true;
    }
    for(int col=0;col<=n;col++){
        if(isSafe(arrl,x,col,n)){
            arrl[x][col]=1;
            if(nqueen(arrl,x+1,n)){
                return true;
            }
            arrl[x][col] = 0 ;//backtracking
        }
    }
}

int main(){
    
   return 0;
}