#!/usr/bin/env python3

from collections import deque

class TreeNode:
    def __init__(self, val = 0, left = None, right = None):
        self.val = val
        self.left = left
        self.right = right

def merge_trees(r1: TreeNode, r2: TreeNode) -> TreeNode:
    if r1 is None:
        return r2
    if r2 is None:
        return r1

    result = TreeNode(r1.val + r2.val)
    result.left = merge_trees(r1.left, r2.left)
    result.right = merge_trees(r1.right, r2.right)
    return result

def breadth_first_traversal(r: TreeNode) -> None:
    d = deque()
    temp = r

    while temp is not None:
        print(temp.val, end=" ")
        d.append(temp.left)
        d.append(temp.right)
        temp = d.popleft()


if __name__ == '__main__':
    r1 = TreeNode(1)
    r1.left = TreeNode(3)
    r1.right = TreeNode(2)
    r1.left.left = TreeNode(5)
    
    r2 = TreeNode(2)
    r2.left = TreeNode(1)
    r2.right = TreeNode(3)
    r2.left.left = TreeNode()
    r2.left.right = TreeNode(4)
    r2.right.left = TreeNode()
    r2.right.right = TreeNode(7)

    r3 = merge_trees(r1, r2)
    breadth_first_traversal(r3)
