class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> v;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            v.push_back(temp->val);
            temp=temp->next;
        }
        int n=v.size();
        for(int i=0,j=n-1;i<n/2;i++,j--)
        {
            if(v[i]!=v[j])
            return false;
        }
        return true;
    }
};
