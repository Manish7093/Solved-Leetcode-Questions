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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
       /* ListNode*fh=NULL;
        ListNode*ft=NULL;
        if(l1==NULL)
        {
            return l2;
        }
        else if(l2==NULL)
        {
            return l1;
        }
        if(l1->val<=l2->val)
        {
            fh=l1;
            l1=l1->next;
        }
        else
        {
            fh=l2;
            l2=l2->next;
        }
        ft=fh;
        while(l1!=NULL&&l2!=NULL)
        {
            ListNode*temp=NULL;
            if(l1->val<=l2->val)
            {
                temp=l1;
                l1=l1->next;
            }
            else
            {
                temp=l2;
                l2=l2->next;
            }
            ft->next=temp;
            ft=temp;
        }
        if(l1!=NULL)
        {
            ft->next=l1;
        }
        if(l2!=NULL)
        {
            ft->next=l2;
        }
        return fh;*/
        if(l1==NULL)return l2;
        if(l2==NULL)return l1;
        ListNode*fh,*ft;
        if(l1->val<=l2->val){
            fh=l1;
            l1=l1->next;
        }
        else{
            fh=l2;
            l2=l2->next;
        }
        ft=fh;
        while(l1!=NULL&&l2!=NULL){
            ListNode*temp=NULL;
            if(l1->val<=l2->val){
                temp=l1;
                l1=l1->next;
            }else{
                temp=l2;
                l2=l2->next;
            }
            ft->next=temp;
            ft=temp;
        }
        if(l1!=NULL)
            ft->next=l1;
        if(l2!=NULL)
            ft->next=l2;
        return fh;
    }
};