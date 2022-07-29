/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *    int val;
 *    TreeNode * left;
 *    TreeNode * right;
 *    TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    public:
        bool isSame(TreeNode *r1, TreeNode *r2)
        {
            if (!r1 && !r2) return true;
            if (!r1 || !r2) return false;
            if (r1->val != r2->val) return false;
            return isSame(r1->left, r2->left) && isSame(r1->right, r2->right);
        }
    bool isSubtree(TreeNode *root, TreeNode *subRoot)
    {
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty())
        {
            int sz = q.size();
            while (sz--)
            {
                TreeNode *node = q.front();
                q.pop();
                if (isSame(node, subRoot)) 
                    return true;
                if (node->left) 
                    q.push(node->left);
              if(node->right)
                  q.push(node->right);
            }
        }
        return false;
    }
};