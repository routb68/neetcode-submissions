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
    int maxDepth(TreeNode* root) {
        if (root == NULL) return 0;
        stack<pair<TreeNode*, int>> st;
        st.push({root, 1});
        int max_depth = 1;
        while (st.size()) {
            auto node_depth = st.top();
            st.pop();
            max_depth = max(max_depth, node_depth.second);
            if (node_depth.first->left) st.push({node_depth.first->left, node_depth.second + 1});
            if (node_depth.first->right) st.push({node_depth.first->right, node_depth.second + 1});
        }
        return max_depth;
    }
};
