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
        int ans = 0;
        for(head; head->next != NULL; head = head->next)
        {
            int d = 1;
            for(ListNode* temp = head; temp->next != NULL; temp = temp->next)
                d *= 2;
            ans += head->val * d;
        }
        if(head->val == 1)
            ans+=1;
        return ans;
    }
};