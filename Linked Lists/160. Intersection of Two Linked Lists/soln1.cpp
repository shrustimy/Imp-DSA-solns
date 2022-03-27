/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *p1=headA;
        ListNode *p2=headB;
        int cnt1=0,cnt2=0;
        while(p1!=NULL)
        {
            cnt1++;
            p1=p1->next;
        }
        while(p2!=NULL)
        {
            cnt2++;
            p2=p2->next;
        }
        p1=headA;
        p2=headB;
        if(cnt1>cnt2)
        {
            int i=cnt1-cnt2;
            for(int j=1;j<=i;j++)
            {
                p1=p1->next;
            }
        }
        else if(cnt2>cnt1)
        {
            int i=cnt2-cnt1;
            for(int j=1;j<=i;j++)
            {
                p2=p2->next;
            }
        }
        while(p1 && p2){
            if(p1 == p2)
            {
                return p1;
            }
            p1=p1->next;
            p2=p2->next;
        }
        return p1;
    }
};
