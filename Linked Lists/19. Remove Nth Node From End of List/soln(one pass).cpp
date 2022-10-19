class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head || !head->next) return NULL;
        vector<ListNode*> v; // create a vector of Listnode*
        ListNode* temp=head;
        while(temp!=NULL)  // Add the pointers to each node into the vector
        {
            v.push_back(temp);
            temp=temp->next;
        }
        if(v.size()==n)  // corner case - if number of nodes in ll is equal to n then remove first element
        return head->next;
        int m=v.size()-n;
        v[m-1]->next=v[m]->next;
        return head;        
    }
};
