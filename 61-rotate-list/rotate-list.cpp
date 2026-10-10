class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0)
            return head;

        int n = 1;
        ListNode* tail = head;

        // Find length and last node
        while (tail->next != NULL) {
            tail = tail->next;
            n++;
        }

        k = k % n;
        if (k == 0) return head;

        // Make circular linked list
        tail->next = head;

        // Find new tail
        ListNode* newTail = head;

        for (int i = 0; i < n - k - 1; i++) {
            newTail = newTail->next;
        }

        // Find new head
        ListNode* newHead = newTail->next;

        // Break the circle
        newTail->next = NULL;

        return newHead;
    }
};