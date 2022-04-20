#include <iostream>
using namespace std;
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val){
        data = val;
        left=NULL;
        right=NULL;
    }
};
 // root left right
int search(int inorder[],int start,int end,int tar){
    for(int i=start;i<=end;i++){
        if(inorder[i]==tar){
            return i;
        }
    }
    return -1;
}
void Inorder(struct Node* root){
    if(root==NULL){
        return;
    }
    Inorder(root->left);
    cout<<root->data<<endl;
    Inorder(root->right);
}
Node* buildTree(int inorder[],int preorder[],int start,int end){
    static int idx = 0;
    if(start>end){
        return NULL;
    }
    Node* node = new Node(preorder[idx]);
    int curr = preorder[idx];
    idx++;
    if(start==end){
        return node;
    }
    int pos = search(inorder,start,end,curr);
    node->left = buildTree(inorder,preorder,start,pos-1);
    node->right = buildTree(inorder,preorder,pos+1,end);

    return node;
}
Node* postOrderTree(int postorder[],int inorder[],int start,int end){
    static int idx = end;
    int curr = postorder[idx];
    if(start>end){
        return NULL;
    }
    Node* node = new Node(curr);
    idx--;
    if(start==end){
        return node;
    }
    int pos = search(inorder,start,end,curr);
    node->right = postOrderTree(postorder,inorder,pos+1,end);
    node->left = postOrderTree(postorder,inorder,start,pos-1);
    return node;
}
int main(){
    int preorder[]={1,2,4,3,5};
    int inorder[]={4,2,1,5,3};
    int postorder[]={4,2,5,3,1};
    Node* root = buildTree(inorder,preorder,0,4);
    Node* root1 = postOrderTree(postorder,inorder,0,4);
    Inorder(root1);
   return 0;
}