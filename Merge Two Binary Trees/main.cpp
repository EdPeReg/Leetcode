// https://leetcode.com/problems/merge-two-binary-trees/
// https://www.geeksforgeeks.org/level-order-tree-traversal/
// MEMORY LEAKS.

#include <iostream>
#include <deque>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode() : val{0}, left{nullptr}, right{nullptr} {  }
    TreeNode(int x) : val{x}, left{nullptr}, right{nullptr} {  }
    TreeNode(int x, TreeNode *l, TreeNode *r) : val{x}, left{l}, right{r} {  }
    ~TreeNode() { 
        delete left; 
        delete right; 
    }
};

void breadth_first_traversal(TreeNode* root) {
     std::deque<TreeNode*> q;
     TreeNode* temp_node = root;

     while(temp_node != nullptr) {
         std::cout << temp_node->val << ' ';
         q.push_back(temp_node->left);
         q.push_back(temp_node->right);
         temp_node = q.front();
         q.pop_front();
     }
 }

TreeNode* merge_trees(TreeNode *r1, TreeNode *r2) {
    if(r1 == nullptr and r2 == nullptr) return nullptr;
    if(r1 == nullptr) return r2;
    if(r2 == nullptr) return r1;

    // Preorder. 
    // Root.
    TreeNode* result_tree = new TreeNode(r1->val + r2->val);

    result_tree->left = merge_trees(r1->left, r2->left); // Left
    result_tree->right = merge_trees(r1->right, r2->right); // Right
    return result_tree;
}

int main()
{
    TreeNode *r1 = new TreeNode(1);
    r1->left = new TreeNode(3);
    r1->right = new TreeNode(2);
    r1->left->left = new TreeNode(5);

    TreeNode *r2 = new TreeNode(2);
    r2->left = new TreeNode(1);
    r2->right = new TreeNode(3);
    r2->left->left = new TreeNode();
    r2->left->right = new TreeNode(4);
    r2->right->left = new TreeNode();
    r2->right->right = new TreeNode(7);

    TreeNode *r3 = merge_trees(r1, r2);
    breadth_first_traversal(r3);

    // Is this correct????
    delete r1;
    delete r2;
    // delete r3;
}
