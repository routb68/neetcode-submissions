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
    int go(TreeNode* root, int& ans){
        if(!root) return 0;
        int lf_sum = go(root->left,ans);
        int rh_sum = go(root->right,ans);
        ans = max(ans,lf_sum+rh_sum+root->val);
        return max({0,lf_sum+root->val, rh_sum+root->val});
    }
    int maxPathSum(TreeNode* root) {
        int ans = -1e7;
        go(root,ans);
        return ans;
    }
};
