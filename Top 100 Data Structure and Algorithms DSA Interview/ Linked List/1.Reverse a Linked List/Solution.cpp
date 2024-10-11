struct Node
{
    int data;
    struct Node *next;
}

*/

class Solution {
  public:
    // Function to reverse a linked list.
    struct Node* reverseList(struct Node* head) {
        // code here
        // return head of reversed list
        Node* prev = nullptr;
        Node* next = nullptr;
        Node* curr = head;
        
        while(curr != nullptr){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
};
