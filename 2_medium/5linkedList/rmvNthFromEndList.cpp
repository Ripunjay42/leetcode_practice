class Solution {
public:
    ListNode* reverse(ListNode* head)
    {
        ListNode* prev= NULL;
        ListNode* curr= head;
        while (curr){
            ListNode* forward= curr->next;
            curr->next= prev;
            prev= curr;
            curr= forward;
        }
        return prev;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
         ListNode *l1=reverse(head);
         ListNode *temp = l1;
         if(n==1)
         {
             l1=temp->next;
         }
         else
         {
            for(int i=1;i<n-1;i++)
            {
                temp=temp->next;
            }
            temp->next=temp->next->next;
         }
         return reverse(l1);
    }
};