#include <iostream>
#include<vector>

class node{
  public:
    int data;
    node* left;
    node* right;
    node(data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

//Insertion in BST
node* insertBst(node* root, int data){
    if(root == NULL){
        root = new node(data);
        return root;
    }
    if(data > root->data){
        root->right = insertBst(root->right, data);
    }else{
        root->left = insertBst(root->left, data);
    }
    return root;
}
void takeInput(node*& root){
    int data;
    cin>>data;
    while(data != -1){
        root = insertBst(root, data);
        cin>>data;
    }
}

// Deletion in BST

node* minVal(node* root){
    node* temp = root;
    while(temp->left!=NULL){
        temp = temp->left;
    }
    return temp;
}

node* deleteBst(node* root, int val){
    if(root == NULL){
        return NULL;
    }
    if(root->data == val){
        //0 child
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }
        // 1 child
        // left child
        if(root->left!=NULL && root->right==NULL){
            node* temp = root->left;
            delete root;
            return temp;
        }
        // right child
        if(root->left==NULL && root->right!=NULL){
            node* temp = root->right;
            delete root;
            return temp;
        }
        
        // 2 child
        if(root->left!=NULL && root->right!=NULL){
            int mini = minVal(root->right)->data;
            root->data = mini;
            root->right = delete(root->right, mini);
            return root;
        }
    }
    else if(root->data > val){
        root->left = deleteBst(root->left, val);
        return root;
    }
    else{
        root->right = deleteBst(root->right, val);
        return root;
    }
}
