class Solution{
  public:
    bool isDeadEnd(Node *root)
    {
        //Your code here
        queue<Node*> q;
        vector<int> leaf;
        
        unordered_map<int , int> mp;
        
        q.push(root);
        while(!q.empty()){
            
        auto it = q.front();
        q.pop();
        mp[it->data]++;
        if(it->left)q.push(it->left);
        if(it->right) q.push(it->right);
        
        if(it->left == NULL && it->right == NULL) leaf.push_back(it->data);
        
        }
        
        
        for(auto i : leaf ){
            
            if(i == 1){
                if(mp.find(i+1) != mp.end()){
                    return true;
                }
            }
            
            else{
                if(mp.find(i+1) != mp.end()&& mp.find(i-1) != mp.end()){
                    return true;
                }
            }
            
        }
        return false;
        
       
    }
};
