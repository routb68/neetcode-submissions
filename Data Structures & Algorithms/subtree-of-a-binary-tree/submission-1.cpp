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
    bool go(TreeNode* root, TreeNode* subroot){
        if(!root and !subroot) return true;
        if(!root or !subroot or root->val !=subroot->val) return false;
        return go(root->left, subroot->left) and go(root->right,subroot->right);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!subRoot) return true;
        if(!root) return false;
        return go(root,subRoot) or isSubtree(root->left,subRoot) or isSubtree(root->right,subRoot);
    }
};
