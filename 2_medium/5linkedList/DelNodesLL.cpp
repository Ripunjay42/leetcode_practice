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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> toBeDel;
        for(auto & num : nums)toBeDel.insert(num);
        ListNode *dummyHead = new ListNode();
        dummyHead->next = head;
        ListNode *curr = dummyHead, *prev = dummyHead;
        while(curr != NULL){
            ListNode *nextNode = curr->next;
            if(toBeDel.count(curr->val) != 0){
                prev->next = nextNode;
            }else{
                prev = curr;
            }
            curr = nextNode;
        }
        return dummyHead->next;
    }
};