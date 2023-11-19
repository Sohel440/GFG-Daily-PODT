
class Solution
{
    public:
    Node* findIntersection(Node* head1, Node* head2)
    {
        // code goes here.
        Node* temp1 = head1;
        Node* temp2 = head2;
        
        Node* temp = new Node(-1);
        Node* inter = temp;
        
        while(temp1 && temp2){
            
            if(temp1->data == temp2->data){
                temp->next = new Node(temp1->data);
                temp = temp->next;
                
                
                temp1= temp1->next;
                temp2= temp2->next;
                
                
            }
            else if( temp1 ->data < temp2->data){
                temp1 =temp1->next;
            }else{
                temp2= temp2->next;
            }
        }
        
        return inter->next;
    }
};
