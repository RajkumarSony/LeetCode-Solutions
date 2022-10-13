/**
 * Definition for singly-linked list.
 * public class ListNode {
 * int val;
 * ListNode next;
 * ListNode() {}
 * ListNode(int val) { this.val = val; }
 * ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */

class Solution {
    static int size(ListNode head) {
        ListNode temp = head;
        int count = 0;

        while (temp != null) {
            count++;
            temp = temp.next;
        }

        return count;
    }

    static ListNode deletePos(ListNode head, int position) {
        ListNode temp = head;
        int pos = 0;

        if (position == 0) {
            head = head.next;
            return head;
        }

        while (pos != position - 1) {
            temp = temp.next;
            pos++;
        }

        if (temp.next == null) {
            temp = null;
        } else {
            temp.next = temp.next.next;
        }

        return head;
    }

    public ListNode removeNthFromEnd(ListNode head, int n) {
        head = deletePos(head, size(head) - n);

        return head;
    }
}
