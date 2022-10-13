class ListNode:
    def __init__(self, v=0, next=None):
        self.v = v
        self.next = next
        
class Solution:
    def swapPairs(self, head: ListNode) -> ListNode:

        r = f = ListNode(None)
        f.next = head
        while head and head.next:
            str = head.next
            head.next = str.next
            str.next = head

            f.next = str
            head = head.next
            f = f.next.next

        return r.next

if __name__=="__main__":
    solution = Solution()
    head = ListNode(1,ListNode(2, ListNode(3, ListNode(4, None))))
    re = solution.swapPairs(head)
    go = re
    while go is not None:
        print(go.v, end = " ")
        go = go.next
