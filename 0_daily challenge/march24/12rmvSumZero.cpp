class Solution {
public:
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode* dummy = new ListNode(0, head);
        
        unordered_map<int, ListNode*> m;
        m[0] = dummy;

        ListNode* cur = head;
        int sum = 0;
        while (cur) {
            sum += cur->val;
            m[sum] = cur;
            cur = cur->next;
        }

        sum = 0;
        cur = dummy;
        while (cur) {
            sum += cur->val;
            cur->next = m[sum]->next;
            cur = cur->next;
        }

        return dummy->next;
    }
};