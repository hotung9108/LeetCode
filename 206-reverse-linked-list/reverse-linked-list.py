class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        tmp = None
        curr = head
        while curr:
            next_node = curr.next
            curr.next = tmp
            tmp = curr
            curr = next_node
        return tmp

        