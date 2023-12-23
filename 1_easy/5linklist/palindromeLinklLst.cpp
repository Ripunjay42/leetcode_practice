class Solution {
public:
    bool isPalindrome(ListNode* head) 
    {
        ListNode *t=head;
        int i=0;
        while(t!=nullptr)
        {
            i++;
            t=t->next;
        }
        t=head;
        int v[i];
        for(int j=0;j<i;j++)
        {
            v[j]=t->val;
            t=t->next;
        }
        for(int a=0, b=i-1; a<b; a++, b--)
        {
            if(v[a]!=v[b])
            {
                return false;
            }
        }
        return true;    
    }
};