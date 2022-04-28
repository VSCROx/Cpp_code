// Iterative Method using a Stack
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

vector<int> Inord(Node* root){
    vector<int> inorder;

    stack<Node*> st;
    while(true){
        
        if(root!=NULL){
            st.push(root);
            root=root->left;
        }
        else{
            if(st.empty()){
                break;
            }
            root = st.top();
            st.pop();
            inorder.push_back(root->data);
            root = root->right;
        }
    }
    return inorder;
}

int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(7);
    root->left->left = new Node(3);
    root->left->right = new Node(4);
    root->left->right->left = new Node(5);
    root->left->right->right = new Node(6);

    vector<int> ans = Inord(root);
    for(auto i:ans){
        cout<<i<<" ";
    }cout<<endl;
    return 0;
}