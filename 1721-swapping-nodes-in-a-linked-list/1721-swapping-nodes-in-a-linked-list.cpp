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
    ListNode* swapNodes(ListNode* head, int k) {
    /*    if(head==NULL||head->next==NULL)
        {
            return head;
        }
        int count{0};
        ListNode*ptr1=head;
        ListNode*ptr2=head;
        ListNode*t=head;
        while(t!=NULL)
        {
            t=t->next;
            count++;
        }
        for(int i=1;i<k;++i)
        {
            ptr1=ptr1->next;
        }
        
        for(int j=1;j<=count-k;j++)
        {
            ptr2=ptr2->next;
        }
        ListNode*newnode=new ListNode(ptr1->val);
        newnode->next=ptr1;
        ptr1->val=ptr2->val;
        ptr2->val=newnode->val;
        delete(newnode);
        return head;
    }*/
    if(head==NULL || head->next==NULL)
        return head;
    ListNode*ptr1=head;
    ListNode*ptr2=head;
        ListNode*ptr3=head;
    int n{1},count{1},m{1};
    while(ptr3->next!=NULL) {ptr3=ptr3->next;n++;}
    while(m<k)
    { ptr1=ptr1->next;
     m++;}
    while(count<=(n-k))
    {ptr2=ptr2->next;count++;}
    int temp;
    temp=ptr1->val;
    ptr1->val=ptr2->val;
    ptr2->val=temp;
    return head;
    }
};