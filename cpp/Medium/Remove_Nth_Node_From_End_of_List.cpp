//Code By - AUM PATEL

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int number=1;
        ListNode* temp = head;
        while(temp -> next != NULL){
            temp = temp->next;
            number ++;
        }
        int pos = number-n+1;
        if(pos == 1){
            ListNode* temp = head;
            head = head -> next;
            temp -> next = NULL;
            delete temp;
        }

        else{
            ListNode* curr = head;
            ListNode* prev = NULL;

            int cnt = 1;
            while(cnt < pos ){
                prev = curr;
                curr = curr-> next;
                cnt ++;
            }
            prev -> next = curr -> next;
            curr -> next = NULL;
        }
        return head;

    }
};
