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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        int cnt=0;
        if(head==NULL || head->next==NULL)
            return NULL;
        while(temp!=NULL)
        {
            cnt++;
            temp=temp->next;
        }
        temp=head;
        int i=cnt-n;
        if(i==0)
        {
            head=head->next;
            return head;
        }
        for(int j=1;j<i;j++)
        {
            temp=temp->next;
        }
        temp->next=temp->next->next;
        return head;
        
    }
};



// class Solution {
// public:
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//         ListNode* temp=head;
//         int cnt=0;
//         if(head==NULL || head->next==NULL)
//             return NULL;
//         while(temp!=NULL)
//         {
//             cnt++;
//             temp=temp->next;
//         }
//         n=cnt-n;
//         temp=head;
//         for(int i=0;i<n-1;i++)
//         {
//             temp=temp->next;
//         }
//         if(n==0)
//             head=head->next;
//         else
//         temp->next=temp->next->next;
//         return head;
        
//     }
// };
