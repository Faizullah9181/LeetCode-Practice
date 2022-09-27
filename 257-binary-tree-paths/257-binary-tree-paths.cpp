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
    vector<string> str;
    void paths(TreeNode *root, string path)
    {

        if (!root) return;

        path += to_string(root->val);

        if (root->left == NULL and root->right == NULL)
        {

           str.push_back(path);
        }

        path += "->";

        paths(root->left, path);

        paths(root->right, path);
    }
    vector<string> binaryTreePaths(TreeNode *root)
    {

        string path = "";

        paths(root, path);
        
        return str;
    }
};