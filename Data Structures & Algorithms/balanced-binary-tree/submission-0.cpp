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
    int check(TreeNode* root, bool& flag){
        if(!root) return 0;
        int lf = check(root->left,flag);
        int rf = check(root->right,flag);
        if(abs(lf-rf)>1) flag = false;
        return max(lf,rf) +1;
    }
    bool isBalanced(TreeNode* root) {
        bool flag = true;
        check(root,flag);
        return flag;
    }
};
