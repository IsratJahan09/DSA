/* Link list Node
struct Node {
  int data;
  struct Node *next;

  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
// Function to merge two sorted linked list.
class Solution {
  public:
    Node* sortedMerge(Node* head1, Node* head2) {
        
       Node* curr1 =  head1;
       Node* curr2 = head2;
       Node* dcurr = new Node(-1);
       Node* curr = dcurr;


       while(curr1!=nullptr and curr2!=nullptr){
            
            if(curr1->data <= curr2->data){
                curr->next = curr1;
                curr = curr1; 
                curr1 = curr1->next; 
            }
            else{
                curr->next = curr2;
                curr = curr2;
                curr2 = curr2->next;
            }
       }
       while(curr1!=nullptr){
        curr->next = curr1;
        curr = curr1; 
        curr1 = curr1->next; 
       }
       while(curr2!=nullptr){
        curr->next = curr2;
        curr = curr2; 
        curr2 = curr2->next; 
       }
       return dcurr->next;
    
        
    }
};
