class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* slowptr = head, *fastptr = head;
        // we will move the fastptr ahead n times without moving the slowptr
        for(int i = 0; i < n; i++){
            fastptr = fastptr -> next;
        }
        // we need to check if fastptr hasn't reached the end
        if(fastptr == NULL){
            // if this condition is satisfied, it means the nth node from the end is the head,
			//so we need to remove the head of Linked List
            return head -> next;
        }
        while(fastptr != NULL && fastptr -> next != NULL){
            fastptr = fastptr -> next;
            slowptr = slowptr -> next;
        }
        // the next node of the slowptr is the node which is to be removed
        slowptr -> next = slowptr -> next -> next;
        return head;
    }
};