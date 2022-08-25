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
    ListNode* reverseList(ListNode* head) {
        if(head == NULL) return NULL;
        ListNode *ans = NULL;
        ListNode *buf = NULL;
        
        while(head) {
            buf = head;
            head = head->next;
            buf->next = ans;
            ans = buf;
        }
        
        return ans;
        
    }
};
