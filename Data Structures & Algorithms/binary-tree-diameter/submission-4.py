# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def height(self, root):
        if not root :
            return 0
        lf, rf = self.height(root.left), self.height(root.right)
        self.res = max(self.res, lf+rf)
        return max(lf,rf)+1
    def diameterOfBinaryTree(self, root: Optional[TreeNode]) -> int:
       self.res =0
       self.height(root)
       return self.res