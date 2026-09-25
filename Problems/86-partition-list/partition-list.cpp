class Solution {
public:
    ListNode* partition(ListNode* head, int x) {

        ListNode* temp1 = new ListNode(0);
        ListNode* temp2 = new ListNode(0);

        ListNode* small = temp1;
        ListNode* big = temp2;

        ListNode* temp = head;

        while (temp != nullptr) {

            if (temp->val < x) {
                small->next = temp;
                small = small->next;
            }
            else {
                big->next = temp;
                big = big->next;
            }

            temp = temp->next;
        }

        // Join the two lists
        small->next = temp2->next;
        big->next = nullptr;

        return temp1->next;
    }
};