// Longest Path b/w two nodes. Path may passed through root or not
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

//1. Brute Force
// int mx = -1;
// int diamtr(Node* root){
//     if(root==NULL){
//         return 0;
//     }
//     int lh = diamtr(root->left);
//     int rh = diamtr(root->right);
    
//     int mx = max(mx, lh + rh); 

//     diamtr(root->left);
//     diamtr(root->right);
    
    
// }

// 2. Otimised 
class diameterBT{
        
    public:
        int diameterofbt(Node* root){
            int diameter = 0;
            height(root, diameter);
            return diameter;
        } 
    private:
        int height(Node* node, int &diameter){
            if(node==NULL){
                return 0;
            }

            int lh = height(node->left, diameter);
            int rh = height(node->right, diameter);
            diameter = max(diameter, lh + rh);

            return (1 + max(lh,rh));
        }
};



int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);  
    root->left->right = new Node(5);  
    root->right->left = new Node(6);  
    root->right->right = new Node(7);  
    root->left->left->left = new Node(8);
    root->left->left->left->left = new Node(9);
    
    diameterBT d;
    cout<<d.diameterofbt(root)<<endl;
    return 0;
}