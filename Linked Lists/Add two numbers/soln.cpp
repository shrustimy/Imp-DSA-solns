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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       ListNode* l=new ListNode(0);
        ListNode* lhead=l;
        int x,y,carry=0,sum=0;
        while(l1!=NULL || l2!=NULL || carry!=0)
        {
        if(l1)
        {
            x=l1->val;
            l1=l1->next;
        }
        else
            x=0;
        if(l2)
        {
            y=l2->val;
            l2=l2->next;
        }
        else
            y=0;
        sum=x+y+carry;
        carry=sum/10;
        l->val=sum%10;
        if(l1!=NULL || l2!=NULL || carry!=0)
        {
        l->next=new ListNode(0);
            l=l->next;
        }
        }
        return lhead;
    }
};
