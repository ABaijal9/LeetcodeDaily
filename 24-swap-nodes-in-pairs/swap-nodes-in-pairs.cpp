class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        ListNode* newHead = head->next;  // New head after swapping.
        ListNode* prev = nullptr;

        while (head != nullptr && head->next != nullptr) {
            ListNode* first = head;
            ListNode* second = head->next;

            // Swap nodes.
            first->next = second->next;
            second->next = first;

            if (prev != nullptr) {
                prev->next = second;  // Update previous node's next pointer.
            }

            prev = first;  // Move the prev pointer to the next pair.

            head = first->next;  // Move to the next pair.
        }

        return newHead;
    }
};