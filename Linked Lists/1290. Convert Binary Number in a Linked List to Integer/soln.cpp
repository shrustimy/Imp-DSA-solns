class Solution {
public:
    int getDecimalValue(ListNode* head) {
        ListNode* temp=head;
        int cnt=0,sum=0;
        while(temp->next!=NULL)
        {
            temp=temp->next;
            cnt++;
        } 
        temp=head;
        while(temp!=NULL)
        {
            if(temp->val==1)
            sum+=pow(2,cnt);
            cnt--;
            temp=temp->next;
        }
        return sum;
    }
};
