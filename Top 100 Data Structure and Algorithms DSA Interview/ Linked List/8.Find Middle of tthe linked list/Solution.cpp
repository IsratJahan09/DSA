class Solution {
  public:
    /* Should return data of middle node. If linked list is empty, then -1 */
    int getMiddle(Node* head) {
         Node* slow = head;
        Node* fast = head;
        while(fast!=nullptr and fast->next!=nullptr){
            slow  = slow->next;
            fast = fast -> next -> next;
        }
        
        return slow->data;
    }
};
