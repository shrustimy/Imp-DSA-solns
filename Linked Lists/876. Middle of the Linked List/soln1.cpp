class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;
        ListNode* temp=head;
        int cnt=0;
        while(temp!=NULL)
        {
            cnt++;
            temp=temp->next;
        }
        int mid=(cnt/2);
        for(int i=0;i<mid;i++)
        {
            head=head->next;
        }
        return head;
    }
};
