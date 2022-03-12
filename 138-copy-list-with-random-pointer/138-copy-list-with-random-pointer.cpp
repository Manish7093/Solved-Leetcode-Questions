/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node*itr=head;
        Node*front=head;
        while(itr!=NULL)
        {
            front=itr->next;
            Node*copy=new Node(itr->val);
            itr->next=copy;
            copy->next=front;
            itr=front;
        }
        
        Node*iter=head;
        while(iter!=NULL)
        {
            if(iter->random!=NULL)
            iter->next->random=iter->random->next;
            
            iter=iter->next->next;
        }
        Node*newdummy=new Node(0);
        Node*copy=newdummy;
        Node*it=head;
        while(it!=NULL)
        {
            front=it->next->next;
            copy->next=it->next;
            it->next=front;
            copy=copy->next;
            it=front;
        }
        return newdummy->next;
    }
    
};