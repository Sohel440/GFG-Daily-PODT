class Solution
{
    public:
    Node* reverseDLL(Node * head)
    {
        //Your code here
        Node *prev = NULL;
        Node * curr = head;
        Node * next = head;
        
        while(next){
            
            next = next ->next;
            curr->next = prev;
            curr->prev = next;
           
             prev = curr;
             curr = next;
        }
        head = prev;
        return head;
        
    }
};
