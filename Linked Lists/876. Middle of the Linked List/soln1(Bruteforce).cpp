// Runtime 0 ms , faster than 100.00% of C++ online submissions for Middle of the Linked List  

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* temp=head;
        int cnt=0;
        while(temp!=NULL)
        {
            cnt++;
            temp=temp->next;
        }
        cnt=cnt/2;
        temp=head;
        for(int i=0;i<mid;i++)
        {
            temp=temp->next;
        }
        return temp;
    }
};
