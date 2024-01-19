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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        // Handle the edge case of an empty list
    if (!head) return nullptr;
    
    // Create a dummy node to handle the case when left = 1
    ListNode* dummy = new ListNode(0);
    dummy->next = head;
    
    // Move to the node before the sublist
    ListNode* prev = dummy;
    for (int i = 0; i < left - 1; i++) {
        prev = prev->next;
    }
    
    // Start reversing the sublist
    ListNode* current = prev->next;
    ListNode* next = nullptr;
    
    for (int i = 0; i < right - left; i++) {
        next = current->next;
        current->next = next->next;
        next->next = prev->next;
        prev->next = next;
    }
    
    return dummy->next;

    }
};