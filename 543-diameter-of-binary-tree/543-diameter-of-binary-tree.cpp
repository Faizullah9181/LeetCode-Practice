/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *   int val;
 *   TreeNode * left;
 *   TreeNode * right;
 *   TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *   TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *   TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    public:
        pair<int, int> solve(TreeNode *root)
        {
            if (root == NULL)
                return make_pair(0, 0);
            pair<int, int> left = solve(root->left);
            pair<int, int> right = solve(root->right);
            int leftDiameter = left.first;

            int rightDiameter = right.first;
            int rightHeight = right.second;
            int leftHeight = left.second;

            int ht = 1 + max(leftHeight, rightHeight);
            int diameter = max(leftDiameter, max(rightDiameter, leftHeight + rightHeight));

            return make_pair(diameter, ht);
        }
    int diameterOfBinaryTree(TreeNode *root)
    {
        return solve(root).first;
    }
};