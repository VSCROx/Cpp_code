#include<iostream>
#include<vector>
#include<queue>
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

vector<vector<int>> LevelOrder(Node* root){
    vector<vector<int>> ans;
    if(root == NULL){
        return ans;
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        int size = q.size();
        vector<int> level;
        for(int i=0; i<size; i++){
            Node* node = q.front();
            q.pop();
            if(node->left!=NULL){
                q.push(node->left);
            }
            if(node->right!=NULL){
                q.push(node->right);
            }
            level.push_back(node->data);
        }
        ans.push_back(level);
    }
    return ans;
}

int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    vector<vector<int>> yes = LevelOrder(root);
    //Displaying 2D vector
    for (int i = 0; i < yes.size(); i++) {
        for (int j = 0; j < yes[i].size(); j++)
            cout << yes[i][j] << " ";
        cout << endl;
    }
    return 0;
}