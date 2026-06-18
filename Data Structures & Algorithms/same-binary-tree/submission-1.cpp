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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        stack<pair<TreeNode*, TreeNode*>>st;
        st.push({p,q});
        while(st.size()){
            auto [x,y] = st.top(); st.pop();
            if(!x and !y) continue;
            if(!x or !y or x->val!=y->val) return false;
            st.push({x->left,y->left});
            st.push({x->right,y->right});
        }
        return true;
    }
};
