/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *  int val;
 *  TreeNode * left;
 *  TreeNode * right;
 *  TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    public:
        bool iscorrect(TreeNode *l, TreeNode *r)
        {
            if (l == NULL and r == NULL)
            {
                return true;
            }
            if (l == NULL || r == NULL)
            {
                return false;
            }

            return l->val == r->val and iscorrect(l->left, r->right) and
            iscorrect(l->right, r->left);
        }

    bool isSymmetric(TreeNode *root)
    {
        if (root == NULL)
        {
            return true;
        }
        return iscorrect(root->left, root->right);
    }
};