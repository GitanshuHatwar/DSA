class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode* temp = new ListNode(0);
        ListNode* curr = temp;

        int carry = 0;

        while (l1 || l2 || carry) {

            int num1 = 0, num2 = 0;

            if (l1) {
                num1 = l1->val;
                l1 = l1->next;
            }

            if (l2) {
                num2 = l2->val;
                l2 = l2->next;
            }

            int sum = num1 + num2 + carry;

            int lastD = sum % 10;
            carry = sum / 10;

            curr->next = new ListNode(lastD);
            curr = curr->next;
        }

        return temp->next;
    }
};