class Solution {
public:
    void deleteNode(ListNode* node) {
      node->val=node->next->val;
      node->next=node->next->next;          
    }
};



//---------------------------------------------------------------------------

class Solution {
public:
    void deleteNode(ListNode* node) {
        while(node->next!=NULL)
        {
            node->val=node->next->val;
            if(node->next->next==NULL)
            {
                delete(node->next);
                node->next=NULL;
            }
            else{
            node=node->next;
            }
        }

            
    }
};
