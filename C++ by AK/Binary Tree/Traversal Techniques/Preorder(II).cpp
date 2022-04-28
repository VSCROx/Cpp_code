// Using Iterative Method Using a Stack
#include<iostream>
#include<vector>
#include<stack>
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
vector<int> Preod(Node* root){
    vector<int> preorder;
    if(root==NULL){
        return preorder;
    }
    stack<Node*> st;
    st.push(root);
    while(!st.empty()){
        Node* node = st.top();
        st.pop();
        preorder.push_back(node->data);
        if(node->right!=NULL){
            st.push(node->right);
        }
        if(node->left!=NULL){
            st.push(node->left);
        }
    }
    return preorder;
}

int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(7);
    root->left->left = new Node(3);
    root->left->right = new Node(4);
    root->left->right->left = new Node(5);
    root->left->right->right = new Node(6);

    vector<int> ans = Preod(root);
    for(auto i:ans){
        cout<<i<<" ";
    }cout<<"\n";
    return 0;
}