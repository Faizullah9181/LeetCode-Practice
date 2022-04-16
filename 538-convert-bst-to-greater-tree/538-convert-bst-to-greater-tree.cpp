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
    int value = 0; //to record the sum of values to the right
    void solve(TreeNode* root)
    {
        if(!root)return; // if root is NULL return (termination case)
		solve(root->right); //check the nodes to the right first as they would be greater in value due to property of BST
        value += root->val;
        root->val = value; // Update the value of node.
        solve(root->left); // traverse the left subtree.
    }
    TreeNode* convertBST(TreeNode* root) {
        solve(root);
        return root;
    }
};