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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* temp = head;

        if(head == NULL)
        {
            return NULL;
        }
        while(head!=NULL && head->val==val)
        {
            head= head->next;
            temp = head;
        }

        while(head!=NULL && head->next!= NULL)
        {
            while(head->next!=NULL && head->next->val == val  )
            {
                head->next = head->next->next;
                
            }
            head = head->next;
        }
        return temp;
    }
};