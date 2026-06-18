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
    int go(TreeNode* root, int max_ele){
        if(!root) return 0;
        if(root->val<max_ele) return go(root->left,max_ele) + go(root->right,max_ele);
        return 1 + go(root->left,root->val) + go(root->right,root->val);
    }
    int goodNodes(TreeNode* root) {
        return go(root,-1e3);
    }
};
