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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list1 && !list2) return NULL;
        
        ListNode *root = new ListNode();
        
        ListNode *curr = root;
        
        while(list1 || list2) {
            if(!list1) {
                curr->val = list2->val;
                list2 = list2->next;
            } else if(!list2) {
                curr->val = list1->val;
                list1 = list1->next;
            } else if(list1->val >= list2->val) {
                curr->val = list2->val;
                list2 = list2->next;
            } else {
                curr->val = list1->val;
                list1 = list1->next;
            }

            if(!list2 && !list1) return root;
            
            curr->next = new ListNode();
            curr = curr->next;
        } 
        
        return root;
    }
};
