class Solution {
public:
    bool hasCycle(ListNode *head) {
     /*  ListNode*ptr1=head;
        ListNode*ptr2=head;
        while(ptr2!=NULL&&ptr2->next!=NULL)
        {
            ptr1=ptr1->next;
            ptr2=ptr2->next->next;
            
            if(ptr1==ptr2)
                return true;
        }
        return false;*/
      ListNode*ptr1=head;
      ListNode*ptr2=head;
        if(head==NULL)
            return false;
        
       while(ptr2!=NULL && ptr2->next!=NULL){
           ptr1=ptr1->next;
           ptr2=ptr2->next->next;
           if(ptr1==ptr2)
               return true;
       }
        
        return false;
    }
};