#include <iostream>
using namespace std;
class node{
    public:
    int value;
    node* next;
    node(int val){
        value = val;
        next = NULL;
    }
};

node* reverseLink(node* &head){
    node* prev,*next,*current;
    prev = NULL;
    current = head;
    while(current!=NULL){
        next=current->next;
        current->next = prev;
        prev = current;
        current=next;
    }
    return prev;

}
node* recursive(node* &head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node * newHead = recursive(head->next);
    head->next->next = head;
    head->next = NULL;
    return newHead;
}
int main(){
    
   return 0;
}