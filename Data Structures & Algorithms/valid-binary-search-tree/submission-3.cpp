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
    bool isValidBST(TreeNode* root) {
        if(!root) return true;
        queue<pair<TreeNode*, pair<int,int>>>q;
        q.push({root,{1e5,-1e5}});
        while(q.size()){
            auto x = q.front();
            q.pop();
            if(x.first->val>=x.second.first or x.first->val<=x.second.second) return false;
            if(x.first->left)q.push({x.first->left,{x.first->val,x.second.second}});
            if(x.first->right)q.push({x.first->right,{x.second.first,x.first->val}});
        }
        return true;
    }
};
