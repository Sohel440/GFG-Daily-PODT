 bool solve(Node *r1 , Node*r2){
        if(r1 ==NULL &&  r2 ==NULL){
            return true;
        }
          if (r1 == NULL || r2 == NULL || r1->data != r2->data) {
        return false;
    }
        
        return  solve(r1->left, r2->right) && solve(r1->right, r2->left);
        
    }
    bool isSymmetric(struct Node* root)
    {
	    // Code here
	     if (root == NULL) {
        return true;
    }
	    return solve(root ->left , root->right);
    }
