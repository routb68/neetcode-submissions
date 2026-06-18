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
    bool go(TreeNode* root, TreeNode* p, vector<TreeNode*>& nums){
        if(!root) return false;
        if(root==p){
            nums.emplace_back(root);
            return true;
        }
        if(go(root->left,p,nums)){
            nums.emplace_back(root);
            return true;
        }
        if(go(root->right,p,nums)){
            nums.emplace_back(root);
            return true;
        }
        return false;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*>p_vec,q_vec;
        go(root,p,p_vec);
        go(root,q,q_vec);
        reverse(p_vec.begin(),p_vec.end());
        reverse(q_vec.begin(),q_vec.end());
        TreeNode* ans = NULL;
        for(int i=0;i<min(p_vec.size(),q_vec.size());++i){
            if(p_vec[i]==q_vec[i]) ans = p_vec[i];
            else break;
        }
        return ans;
    }
};
