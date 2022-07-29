// method 1

class Solution {
//Iterative
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* curr=head;
        ListNode* prev=NULL;
        ListNode* next=NULL;
        while(curr!=NULL)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;  
    }
};

// method 2 here at the beginning itself next points to curr->next i.e head->next

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* nxt=head->next;
        
        while(curr!=NULL)
        {
            curr->next=prev;
            prev=curr;
            curr=nxt;
            if(nxt!=NULL)
                nxt=nxt->next;
        }
      return prev;
    }
};
