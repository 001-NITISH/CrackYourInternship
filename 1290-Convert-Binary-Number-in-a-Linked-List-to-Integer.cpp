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
    int getDecimalValue(ListNode* head) {
        vector<int> v;
        while(head != NULL) {
            v.push_back(head->val);
            head = head->next;
        }
        int n = v.size();
        int ans = 0;
        int count = 0;
        for(int i=n-1; i>=0; i--) {
            ans = ans + (v[i]*pow(2,count));
            count++;
        }
        return ans;
    }
};