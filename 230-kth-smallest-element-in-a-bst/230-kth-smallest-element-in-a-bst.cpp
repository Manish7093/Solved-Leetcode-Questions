/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
  /*  int count{0};
    int res{0};
    void inorder(TreeNode*root,int k)
    {
        if(root==NULL)
            return;
        inorder(root->left,k);
        count++;
        if(k==count)
            res=root->val;
        inorder(root->right,k);
    }
    int kthSmallest(TreeNode* root, int k) {
        
        inorder(root,k);
        return res;
    }
};*/
    
       int kthSmallest(TreeNode* root, int k) {
        stack<TreeNode*>stk;
        TreeNode*p=root;
            while(p||!stk.empty())
            {
                while(p!=NULL)
                {
                    stk.push(p);
                    p=p->left;
                }
                p=stk.top();
                if(--k==0)
                    return p->val;
                stk.pop();
                p=p->right;
            }
            return p->val;
    }
};
 