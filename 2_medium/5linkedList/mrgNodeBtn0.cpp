class Solution {
public:
    ListNode* mergeNodes(ListNode* head) 
    {
        ListNode* res=new ListNode(0);
        ListNode* curr=res;
        ListNode* t=head;
        while(t->next!=nullptr)
        {
            t=t->next;
            int s=0;
            while(t->val!=0)   
            {
                s+=t->val;
                t=t->next;
            }
            curr->next=new ListNode(s);
            curr=curr->next;
        }
        return res->next;    
    }
};