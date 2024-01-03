class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) 
    {
        ListNode* t=head;
        ListNode* fast=head;    
        ListNode* slow= new ListNode(0,head);
        if(head->next==nullptr)
        {
            return nullptr;
        }
        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        slow->next=slow->next->next;
        return head;
    }
};