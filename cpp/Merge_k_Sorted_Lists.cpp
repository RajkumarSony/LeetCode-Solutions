class Solution {
public:
    ListNode* merge(ListNode* l1, ListNode* l2){
        if (!l1) return l2;
        if (!l2) return l1;
        ListNode* head = l1->val <= l2->val? l1 : l2;
        head->next = l1->val <= l2->val ? merge(l1->next, l2) : merge(l1, l2->next);
        return head;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0)
            return NULL;
        ListNode* k= lists[0];
        for(int i=1;i<lists.size();i++)
        {
            k=merge(k,lists[i]);
        }
        return k;
    }
};