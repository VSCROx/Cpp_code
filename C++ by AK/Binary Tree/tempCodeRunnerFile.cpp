 public:
        int diameterofbt(Node* root){
            int diameter = 0;
            height(root, diameter);
            return diameter;
        } 