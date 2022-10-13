ListNode*temp = new ListNode(d);
    if(head == NULL){ // if list is empty then point head and tail to first node
        head = temp;
        tail = temp;
        return;
    }
    else{
    tail->next = temp;
    tail = temp;
    }
    
}
ListNode*add(ListNode* first, ListNode* second){
    
        int carry = 0; // initialize carry 
        ListNode*ansHead = NULL;
        ListNode*ansTail = NULL;
    while(first != NULL || second != NULL || carry != 0){ 
       
                                               //for storing first list value
        int val1= 0;                            //When first list NULL then 0 will be added
        if(first != NULL){
            val1 = first->val;
            first = first->next;
        }   
        int val2 = 0;                //for storing first list value
        if(second != NULL){          //When first list NULL then 0 will be added
            val2 = second->val;
            second = second->next;
        }   
            
        int sum = (val1 + val2 + carry);
        int digit = sum%10;
        insertAttail(ansHead,ansTail,digit);
        carry = sum/10;
        
    }
    return ansHead;
}
public:
** ListNode* addTwoNumbers(ListNode * l1, ListNode* l2) { **

    ListNode*ans = add(l1,l2); //Calling Add funcion
    return ans;
}
};