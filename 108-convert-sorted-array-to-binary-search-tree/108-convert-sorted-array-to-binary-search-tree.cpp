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

        TreeNode* solve(vector<int> &nums, int s, int e)
        {

            if (s >= e) return NULL;

            int middle = s + (e - s) / 2;
            TreeNode *root = new TreeNode(nums[middle]);

            root->left = solve(nums, s, middle);

            root->right = solve(nums, middle + 1, e);

            return root;
        }
    TreeNode* sortedArrayToBST(vector<int> &nums)
    {

        return solve(nums, 0, nums.size());
    }
};