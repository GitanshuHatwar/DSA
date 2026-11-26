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
        ListNode* temp = head;
        unordered_set<int> st;

        for (auto c : nums) {
            st.insert(c);
        }

        while (temp) {
            if (temp == head && st.contains(temp->val)) {
                head = temp->next;
                temp = head;
            } else if (temp->next && st.contains(temp->next->val)) {
                temp->next = temp->next->next;
            } else {
                temp = temp->next;
            }
        }
        return head;
    }
};
