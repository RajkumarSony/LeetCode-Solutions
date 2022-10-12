/*
 Given the head of a singly linked list, return the middle node of the linked list.
 If there are two middle nodes, return the second middle node.
 
 Ex:
    Input: head = [1,2,3,4,5]
    Output: [3,4,5] 

 Explanation:
    1. We will use the concept of slow and fast pointer to find the middle element
    2. We use the slow to stop at the middle node and fast pointer to stop at the loop
    3. Slow pointer is shifted once and the fast pointer is shifted twice so when the fast pointer is at the end of the list the slow pointer will be in the middle and hence we get the middle pointer

 Time: O(n)
 Space: O(1)
*/

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
    ListNode* middleNode(ListNode* head) {
        ListNode * slow = head,  * fast = head;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};