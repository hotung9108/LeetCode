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
    ListNode* swapNodes(ListNode* head, int k) {
        int size = getSize(head);
        ListNode *curr1 = head, *curr2 = head;
        int count1 = 0, count2 = 0;

        while (curr1 != NULL) {
            count1++;
            if (count1 == k) break;
            curr1 = curr1->next;
        }

        while (curr2 != NULL) {
            count2++;
            if (count2 == (size - k + 1)) break;
            curr2 = curr2->next;
        }

        int temp = curr1->val;
        curr1->val = curr2->val;
        curr2->val = temp;

        return head;
    }

    int getSize(ListNode *head) {
        int count = 0;
        ListNode *current = head;
        while (current != NULL) {
            count++;
            current = current->next;
        }
        return count;
    }
};
