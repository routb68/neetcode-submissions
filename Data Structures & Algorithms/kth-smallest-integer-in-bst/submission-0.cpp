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
    void go(TreeNode* root,vector<int>&nums){
        if(!root) return;
        go(root->left,nums);
        nums.push_back(root->val);
        go(root->right,nums);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int>nums;
        go(root,nums);
        return nums[k-1];
    }
};
