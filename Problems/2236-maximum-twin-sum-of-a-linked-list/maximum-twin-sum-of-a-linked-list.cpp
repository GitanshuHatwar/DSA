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
    int pairSum(ListNode* head) {
        int size = 0;
        ListNode* temp = head;
        // Counting the Number of Node in the LinkList;
        while (temp) {
            size++;
            temp = temp->next;
        }
        // Reversing the First part of the LinkList;
        temp = head;
        ListNode* prev = NULL;
        // ListNode* middle = NULL;
        for (int i = 0; i < (size / 2); i++) {
            ListNode* nxt = temp->next;
            temp->next = prev;
            prev = temp;
            temp = nxt;
        }
        int maxSum = 0;
        ListNode* firstHalf = prev;
        ListNode* secondHalf = temp;

        for (int j = 0; j < (size / 2); j++) {
            int sum = firstHalf->val + secondHalf->val;
            maxSum = max(maxSum, sum);

            // Move both pointers forward
            firstHalf = firstHalf->next;
            secondHalf = secondHalf->next;
        }

        return maxSum;
    }
};