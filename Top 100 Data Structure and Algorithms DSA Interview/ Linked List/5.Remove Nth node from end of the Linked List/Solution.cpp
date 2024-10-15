class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       ListNode* fast = head;
       ListNode* solw = head;

       for(int i = 0; i<n; i++){
        fast=fast->next;
       }
       if(fast == nullptr)
       return head->next;

       while(fast->next != nullptr){
        solw = solw->next;
        fast = fast->next;
       }
      solw->next = solw->next->next;

      return head;

    }
};
