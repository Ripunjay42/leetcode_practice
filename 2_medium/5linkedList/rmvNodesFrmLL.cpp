class Solution {
public:
    ListNode* reverseList(ListNode* head) 
    {
        ListNode* prev= NULL;
        ListNode* curr= head;
        while (curr)
        {
            ListNode* forward= curr->next;
            curr->next= prev;
            prev= curr;
            curr= forward;
        }
        return prev;
    }
    
    ListNode* removeNodes(ListNode* head) 
    {
        head = reverseList(head);
        int max = head->val;
        ListNode *p = head;
        while(p->next != NULL)
        {
            if(p->next->val < p->val)
            {
                p->next = p->next->next;
            }
            else
            {
                p = p->next;
            }
        }
        head = reverseList(head);
        return head;
    }
};