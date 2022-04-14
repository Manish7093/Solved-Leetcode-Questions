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
   
 TreeNode* searchBST(TreeNode* root, int val) {
    /* if(root==NULL)
         return NULL;
     while(root!=NULL&&root->val!=val)
     {
         root=(root->val>val)?(root->left):(root->right);
     }
     return root;
    }*/
     if(root==NULL) return NULL;
     while(root!=NULL && root->val!=val)
         root=root->val>val?root->left:root->right;
     return root;
 }
};/*
TreeNode* searchBST(TreeNode* root, int val) {
    if(root==NULL)
    return NULL;
    if(root->val==val)
        return root;
    return (root->val>val)?searchBST(root->left,val):searchBST(root->right,val);
    }
};*/