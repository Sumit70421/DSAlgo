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

void insertAttail(node* &head,int val){
    node* n = new node(val);
    if(head==NULL){
        head = n;
        return;
    }
    node* temp = head;  
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n;
}
void display(node* head){
    node* temp = head;
    if(head==NULL){
        cout<<head->value;
    }
    while(temp!=NULL){
        cout<<temp->value<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
void insertathead(node* &head,int value){
    node* n = new node(value);
    n->next = head;
    head = n;
}
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

bool detectCycle(node* &head){
    node* slow =head;
    node* fast =head;
    while(fast!=NULL && fast->next->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast){
            return true;
        }
    }
    return false;
}

bool search(node* &head,int key){
    node* temp = head;
    while(temp!=NULL){
        if(temp->value==key){
            return true;
        }
        temp = temp->next;
    }
    return false;
}
void deleteAthead(node* &head){
    node* tobe = head;
    head = head->next;
    delete tobe;
}
void deleteNode(node* &head,int val){
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        deleteAthead(head);
        return;
    }
    node* temp = head;
    while(temp->next->value!=val){
        temp = temp->next;
    }
    node* tobe = temp->next;
    temp->next = temp->next->next;
    delete tobe;
}
int main(){
    node* head = NULL;
    insertAttail(head,10);
    insertAttail(head,20);
    insertAttail(head,30);
    insertAttail(head,40);
    insertathead(head,3330);
    deleteNode(head,30);
    display(head);
    node* newHEAD = reverseLink(head);
    display(newHEAD);
    // cout<<search(head,39);
    return 0;
}