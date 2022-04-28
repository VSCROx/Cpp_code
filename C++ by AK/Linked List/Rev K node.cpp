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
void insertatTail(node* &head, int val){
    node* n =  new node(val);
    if(head==NULL){
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next = n;
}
void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

node* reverseK(node* &head, int k){
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;
    
    int count = 0;
    while(currptr!=NULL && count<k){
        nextptr = currptr->next;
        currptr->next = prevptr;
        
        prevptr = currptr;
        currptr = nextptr;
        count++;
    }

    if(nextptr!=NULL){
        head->next = reverseK(nextptr,k);     // after while loop prevptr point to last node of 'K'
    }                                         // & nextptr will point to next node of prevptr
    
    return prevptr;
}

int main(){
    node* head = NULL;
    insertatTail(head,1);
    insertatTail(head,2);
    insertatTail(head,3);
    insertatTail(head,4);
    insertatTail(head,5);
    insertatTail(head,6);
    // insertatTail(head,7);
    // insertatTail(head,8);
    display(head);
    int k = 2;
    node* newhead = reverseK(head,k);
    display(newhead);
    return 0;
}