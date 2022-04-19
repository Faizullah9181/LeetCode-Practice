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
    vector<int> nodes;
    int i=0;
    void inorder(TreeNode* root){
        if(root==nullptr) return;
        inorder(root->left);
        nodes.push_back(root->val);
        inorder(root->right);
    }
    void swap(TreeNode* root){
        if(root==nullptr) return;
        swap(root->left);
        root->val = nodes[i];
        ++i;
        swap(root->right);    
    }
public:
    void recoverTree(TreeNode* root) {
        inorder(root);
        sort(nodes.begin(),nodes.end());
        swap(root);
    }
};