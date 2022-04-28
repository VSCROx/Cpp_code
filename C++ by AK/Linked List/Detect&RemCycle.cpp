// Using Floyd's Algorithm or Hare and Tortoise Algo
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
//.....................................................................
void makeCycle(node* &head, int pos){
    node* temp=head;
    node* startNode;

    int count=1;
    while(temp->next!=NULL){  // Traverse to end 
        if(count==pos){
            startNode=temp;
        }
        temp=temp->next;
        count++;
    }
    temp->next=startNode;   // Last node point to startNode i.e the starting point of the cycle
}

bool detectCycle(node* &head){
    node* slow=head;
    node* fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;

        if(fast==slow){
            return true;
        }
    }    
    return false;
}

void removeCycle(node* &head){
    node* slow=head;
    node* fast=head;

    do
    {
        slow=slow->next;
        fast=fast->next->next;
    } while (slow!=fast);
    
    fast=head;
    while(slow->next!=fast->next){
        slow=slow->next;
        fast=fast->next;
    }

    slow->next = NULL;
}

int main(){
    node* head = NULL;
    insertatTail(head,1);
    insertatTail(head,2);
    insertatTail(head,3);
    insertatTail(head,4);
    insertatTail(head,5);
    insertatTail(head,6);
    makeCycle(head,3);     // If we run display(), it will print 1-2-3-4-5-6-3-4-5-6-3......
    //display(head);
    cout<<detectCycle(head)<<endl;
    removeCycle(head);
    cout<<detectCycle(head)<<endl;
    display(head);
    return 0;
}
// Proof: Floyd's Algo
/*
m = dist. from start to start of cycle node
n = dist. from next of start of cycle node to that node where fast=slow ptr
l = circumference of cycle  
Distance moved by fast ptr = m + n + l*j   (j=number of rounds)
Distance moved by slow ptr = m + n + l*i   (i=number of rounds)

Distance moved by fast ptr = 2 x Distance moved by slow ptr
    m + n + l*j = 2*(m + n + l*i)
    m + n = l*(j - 2*i)
    m = l*(j - 2*i) - n     (where,(j - 2*i) is some int )
    therefore, when move both ptr one step repeatedly from head & that node where both merge
    are equal distance(to start of the cycle)
*/