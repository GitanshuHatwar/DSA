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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* prev;
        ListNode* next;
        ListNode* temp = list1;

        for (int i = 0; i <= b; i++) {
            if (i == a - 1) {
                prev = temp;
            }
            if (i == b) {
                next = temp->next;
            }
            temp = temp->next;
        }

        prev->next = list2;
        temp = list2;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = next;
        return list1;
    }
};