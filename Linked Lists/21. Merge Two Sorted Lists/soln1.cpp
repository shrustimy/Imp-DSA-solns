class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *dummy,*temp;
        dummy=new ListNode();
        temp=dummy;
        while(l1 && l2){
            if(l1->val<l2->val)
            {
                temp->next=l1;
                l1=l1->next;
            }
            else
            {
                temp->next=l2;
                l2=l2->next;
            }
            temp=temp->next;
        }
        if(l1==NULL){
            temp->next=l2;
        }
        if(l2==NULL){
            temp->next=l1;
        }
        return dummy->next;
    }
};


// same method but bit different code

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==NULL)
            return l2;
        else if(l2==NULL)
            return l1;
        ListNode* dummy=new ListNode(0);
        ListNode* temp=NULL;
        int cnt=0;
        
        while( l1 && l2 )
        {
            if(l1->val < l2->val){
                dummy->next=new ListNode(l1->val);
                cnt++;
                if(cnt==1)
                    temp=dummy->next;
                l1=l1->next;
            }
            else
            {
                dummy->next=new ListNode(l2->val);
                cnt++;
                if(cnt==1)
                    temp=dummy->next;
                l2=l2->next;
            }
            dummy=dummy->next;
                
        }
        if(l1)
            dummy->next=l1;
        else if(l2)
            dummy->next=l2;
        return temp;
    }
};
