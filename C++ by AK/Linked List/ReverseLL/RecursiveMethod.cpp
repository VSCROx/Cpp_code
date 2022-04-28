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

void insertAtTail(node* &head, int val){
    node* n = new node(val);

    // Initialize the LL
    if(head==NULL){
        head = n;
        return;
    }

    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    // Reach at the last node
    temp->next = n;
}

void display(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

node* recRev(node* &head){
    if(head==NULL || head->next==NULL){       // base case
        return head;
    }
    node* newhead = recRev(head->next);

    head->next->next = head;
    head->next = NULL;

    return newhead;
}

int main(){
    node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    display(head);

    node* newhead = recRev(head);
    display(newhead);
    return 0;
}