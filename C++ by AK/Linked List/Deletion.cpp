#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;
        node(int val){
            data = val;
            next = NULL;
        }
};

void insertTail(node* &head, int val){
    node* n = new node(val);
    if(head == NULL){
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
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

void deleteAtHead(node* &head){
    node* todelete = head;
    head = head->next;
    delete todelete;
}

void deletion(node* &head, int val){
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        deleteAtHead(head);
        return;
    }

    node* temp = head;
    while(temp->next->data!=val){
        temp = temp->next;
    }
    // if(temp->next!=NULL){
    node* todelete = temp->next;
    temp->next = temp->next->next; 
    delete todelete;
    
    // else if(temp->next==NULL){
    //     cout<<"Element "<<val<<" is not found in the Linked List"<<endl;
    //     return;
    // }
}

int main(){
    node* head = NULL;
    insertTail(head,1);
    insertTail(head,2);
    insertTail(head,3);
    insertTail(head,4);
    insertTail(head,5);
    display(head);
    //deletion(head,1);  // When only one element is present in the Linked List

    deletion(head,2);
    display(head);
    return 0;
}