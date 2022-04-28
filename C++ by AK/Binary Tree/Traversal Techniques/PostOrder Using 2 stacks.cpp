#include<iostream>
#include<stack>
#include<vector>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val){
        data = val;
        left = right = NULL;
    }
};

vector<int> Postorder2st(Node* root){

    vector<int> Postodr;
    if(root==NULL){
        return Postodr;
    }
    stack<Node*> s1, s2;

    s1.push(root);
    while(!s1.empty()){
        
        root = s1.top();
        s1.pop();
        s2.push(root);

        if(root->left!=NULL){
            s1.push(root->left);
        }
        if(root->right!=NULL){
            s1.push(root->right);
        }
    }
    while(!s2.empty()){
        Postodr.push_back(s2.top()->data);
        s2.pop();
    }
    return Postodr;
}

int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    vector<int> ans = Postorder2st(root);
    for(auto i:ans){
        cout<<i<<" ";
    }cout<<endl;
    return 0;
}