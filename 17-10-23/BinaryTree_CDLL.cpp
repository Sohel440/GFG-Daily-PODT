class Solution
{
  public:
    //Function to convert binary tree into circular doubly linked list.
    vector<int> a;
    void solve(Node * root){
        if(root){
            solve(root->left);
            a.push_back(root->data);
            solve(root->right);
            
        }
    }
    Node *bTreeToCList(Node *root)
    {
    //add code here.
    solve(root);
    
    Node* p = newNode(a[0]);
    Node *q = p;
    Node *prev = p;
    
    
    for(int i = 1 ; i < a.size(); i++){
        Node * t = newNode(a[i]);
        q->right = t;
        q= q->right;
        q ->left = prev;
        prev = q;
    }
   q ->right = p;
   p->left = q;
    
    return p;
    }
};
