# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    
    def height(self,root):
        if not root:
            return 0
        lh, rh = self.height(root.left), self.height(root.right)
        if abs(lh-rh)>1:
            self.flag = False
        return max(lh,rh)+1

    def isBalanced(self, root: Optional[TreeNode]) -> bool:
        self.flag=True
        self.height(root)
        return self.flag