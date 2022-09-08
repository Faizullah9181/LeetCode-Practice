/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *int val;
 *TreeNode * left;
 *TreeNode * right;
 *TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    public:
        int ans;
    int helper(TreeNode *root)
    {

        if (root == NULL) return 0;

        int l = helper(root->left);

        int r = helper(root->right);

        ans += abs(l - r);

        return root->val + l + r;
    }
    int findTilt(TreeNode *root)
    {

        ans = 0;
        helper(root);

        return ans;
    }
};