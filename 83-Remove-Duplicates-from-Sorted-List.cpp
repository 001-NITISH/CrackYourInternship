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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp = head;
        while (temp!=NULL && temp->next!=NULL) {
            ListNode* next_Node = temp->next;
            if (temp->val == next_Node->val)
                temp->next = next_Node->next;
            else
                temp = next_Node;
        }
        return head;
    }
};