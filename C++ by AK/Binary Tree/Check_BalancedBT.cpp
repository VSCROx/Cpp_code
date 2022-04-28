//For every Node, (rightHeight - leftHeight) <=1

#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val){
        data = val;
        left = right= NULL;
    }
};

int HeightBT(Node* root){
    if(root==NULL){
        return 0;
    }
    int lh = HeightBT(root->left);
    int rh = HeightBT(root->right);

    return 1 + max(lh, rh);
}

//1. Brute force (T.C = O(n^2))
bool balance(Node* root){
    if(root==NULL){
        return true;
    }
    int lh = HeightBT(root->left);
    int rh = HeightBT(root->right);

    if(abs(lh - rh) >= 1){
        return false;
    }

    bool Left = balance(root->left);
    bool Right = balance(root->right);

    if(Left==false || Right==false){
        return false;
    }

    return true;
}

//2. Optimised Solution T.C: O(N)
// Here, we return Height if it is balanced Binary Tree otherwise -1
int checkbalanced(Node* root){
    if(root==NULL){
        return 0;
    }
    int lh = checkbalanced(root->left); 
    int rh = checkbalanced(root->right);

    if(lh == -1 || rh==-1 ){
        return -1;
    }
    if(abs(lh - rh) > 1){
        return -1;
    }
    return 1 + max(lh, rh); 
}

int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);  
    root->left->right = new Node(5);  
    root->right->left = new Node(6);  
    root->right->right = new Node(7);  

    // root->left->left->left = new Node(8);
    // root->left->left->left->left = new Node(9);

    //cout<<balance(root)<<endl;
    cout<<checkbalanced(root)<<endl;
    return 6;
}