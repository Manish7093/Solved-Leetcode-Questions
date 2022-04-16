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
    int cur_sum{0};
    TreeNode* convertBST(TreeNode* root) {
        if(root==NULL) return root;
        if(root->right!=NULL)
            convertBST(root->right);
        cur_sum+=root->val;
        root->val=cur_sum;
        if(root->left!=NULL)
            convertBST(root->left);
        return root;
    }
};