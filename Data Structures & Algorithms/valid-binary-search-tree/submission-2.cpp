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
    bool go(TreeNode* root, int max_val, int min_val){
        if(!root) return true;
        if(root->val>=max_val or root->val<=min_val) return false;
        return go(root->left,root->val,min_val) and go(root->right,max_val,root->val);
    }
    bool isValidBST(TreeNode* root) {
       return go(root,1e5,-1e5);
    }
};
