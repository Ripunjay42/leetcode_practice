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
    int getDecimalValue(ListNode* head) 
    {
        int sum=0;
        int cnt=0;
        for(ListNode *t=head;t!=nullptr;t=t->next)
        {
           cnt++;
        } 
        int x=cnt-1;
        for(ListNode *t=head;t!=nullptr;t=t->next)
        {
           sum+=(t->val*pow(2,x));
           x--;
        }
        return sum;       
    }
};