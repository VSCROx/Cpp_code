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

vector<int> Post1st(Node* root){
    vector<int> post;
    stack<Node*> st;
    Node* curr = root;
    Node* temp;
    
    while(curr!=NULL || !st.empty()){
        if(curr!=NULL){
            st.push(curr);
            curr = curr->left;
        }
        else{
            temp = st.top()->right;
            if(temp==NULL){
                temp = st.top();
                st.pop();
                post.push_back(temp->data);
                while(!st.empty() && temp==st.top()->right){
                    temp = st.top();
                    st.pop();
                    post.push_back(temp->data);
                }
            }
            else{
                curr = temp;
            }
        }
    }
    return post;
}

int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    vector<int> ans = Post1st(root);
    for(auto i: ans){
        cout<<i<<" ";
    }cout<<endl;
    return 0;
}