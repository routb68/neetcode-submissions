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
    int go(TreeNode* root, int &res){
        if(!root) return 0;
        int lf= go(root->left,res), rf = go(root->right,res);
        res = max(lf+rf,res);
        return 1+ max(lf,rf);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int res = 0;
        go(root,res);
        return res;
    }
};
