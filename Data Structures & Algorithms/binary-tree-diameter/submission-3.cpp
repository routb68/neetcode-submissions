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
    int go_height(TreeNode* root, int& res){
        if(!root) return 0;
        int lf_h = go_height(root->left,res), rf_h = go_height(root->right,res);
        res = max(res, lf_h+rf_h);
        return 1 + max(lf_h,rf_h);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int res =0;
        go_height(root,res);
        return res;
    }
};
