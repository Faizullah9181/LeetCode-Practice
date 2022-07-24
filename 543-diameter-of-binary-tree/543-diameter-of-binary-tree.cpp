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

        int maxDepth(TreeNode *root)
        {

            if (root == NULL)

                return 0;

            int lefth = maxDepth(root->left);
            int righth = maxDepth(root->right);

            int ans = max(lefth, righth) + 1;

            return ans;
        }
    int diameterOfBinaryTree(TreeNode *root)

    {
        if (root == NULL) return 0;
     
        int s1 = diameterOfBinaryTree(root->left);

        int s2 = diameterOfBinaryTree(root->right);
    
        int s3 = maxDepth(root->left)+maxDepth(root->right);

        int ans2 = max(s3, max(s1, s2));

        return ans2;
    }
};