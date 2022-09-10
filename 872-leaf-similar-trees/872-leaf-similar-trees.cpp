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

       void check(TreeNode *root, vector<int> &ans)
        {

            if (root->left == NULL and root->right == NULL)
            {

                ans.push_back(root->val);
            }
            if (root->left)
                check(root->left,ans);
            if (root->right)
                check(root->right,ans);
            
            
        }
    bool leafSimilar(TreeNode *root1, TreeNode *root2)
    {       
        vector<int> ans1;
        vector<int> ans2;

        if (root1 == NULL and root2 == NULL) return true;

        if (root1 != NULL and root2 == NULL) return false;

        if (root1 == NULL and root2 != NULL) return false;
        
        check(root1,ans1);
        check(root2,ans2);
        
       return ans1==ans2;
    }
};



