class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        ListNode* first = head;
        ListNode* second = head->next;
        ListNode* newHead = second;

        while (first != nullptr && second != nullptr) {
            ListNode* temp = second->next;
            second->next = first;

            if (temp == nullptr || temp->next == nullptr) {
                // End of the list or only one node left
                first->next = temp;
                break;
            }

            first->next = temp->next;
            first = temp;
            second = temp->next;
        }

        return newHead;
    }
};