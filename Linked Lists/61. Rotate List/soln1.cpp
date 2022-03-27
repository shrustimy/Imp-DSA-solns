/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        ListNode* temp=head;
        ListNode* temp1=head;
        int cnt=0;
        while(temp!=NULL)
        {
            cnt++;
            if(temp->next==NULL && cnt!=k)
            {
                temp->next=head;
                break;
            }
            temp=temp->next;
        }
        if(k==cnt)
        {
            return head;
        }
        if(k>cnt)
        {
            k=k%cnt;
        }
        int n=cnt-k;
        for(int i=0;i<n-1;i++)
        {
            temp1=temp1->next;
        }
        head=temp1->next;
        temp1->next=NULL;
        return head;
    }
};
