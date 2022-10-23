class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        while(head!=NULL && head->val==val)
        {
            head=head->next;
        }
        ListNode* dummy=head;
        while(dummy!=NULL && dummy->next!=NULL)
        {
            if(dummy->next->val==val)
            dummy->next=dummy->next->next;
            else
            dummy=dummy->next;
        }
        return head;
        
    }
};
