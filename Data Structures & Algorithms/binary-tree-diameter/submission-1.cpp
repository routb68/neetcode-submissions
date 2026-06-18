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
    unordered_map<TreeNode*, int>ump;
    int height_go(TreeNode* root){
        if(!root) return 0;
        if(ump.find(root)!=ump.end()) return ump[root];
        ump[root] = 1 + max(height_go(root->left),height_go(root->right));
        return ump[root];
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int ans = 0;
        stack<TreeNode*>st;
        st.push(root);
        while(st.size()){
            TreeNode* node = st.top(); st.pop();
            int lf = height_go(node->left), rf = height_go(node->right);
            ans = max(ans, lf+rf);
            if(node->left) st.push(node->left);
            if(node->right) st.push(node->right);
        }
        return ans;
    }
};
