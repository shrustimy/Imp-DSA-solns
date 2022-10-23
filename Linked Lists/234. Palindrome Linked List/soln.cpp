class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<int> st;
        ListNode *fast=head,*slow=head;
        while(fast!=NULL && fast->next!=NULL)
        {
            fast=fast->next->next;
            st.push(slow->val);
            slow=slow->next;
        }
        if(fast!= NULL)
        slow=slow->next;
        while(slow!=NULL)
        {
            if(st.top()!=slow->val)
            return false;
            st.pop();
            slow=slow->next;
        }
        return true;
    }
};
