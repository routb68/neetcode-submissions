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
    bool dfs(TreeNode* root, TreeNode* p, vector<TreeNode*>&pvec){
        if(root==NULL) return false;
        if(root==p){
            pvec.push_back(root);
            return true;
        }
        if(dfs(root->left,p,pvec) or dfs(root->right,p,pvec)) {
            pvec.push_back(root);
            return true;
        }
        return false;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*>pvec;
        vector<TreeNode*>qvec;
        
        dfs(root,p,pvec);
        dfs(root,q,qvec);
        reverse(pvec.begin(),pvec.end());
        reverse(qvec.begin(),qvec.end());

        for(int i=1;i<min(pvec.size(),qvec.size());++i){
            if(pvec[i]!=qvec[i]) return pvec[i-1];
        }

        return pvec[min(pvec.size(),qvec.size())-1];
    }
};
