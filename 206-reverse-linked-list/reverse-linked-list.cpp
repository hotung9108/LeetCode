class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode * tmp = nullptr;
        ListNode * curr = head;
        while (curr){
            ListNode *next_node = curr->next;
            curr->next = tmp;
            tmp = curr;
            curr = next_node;
        }
        return tmp;
    }

};