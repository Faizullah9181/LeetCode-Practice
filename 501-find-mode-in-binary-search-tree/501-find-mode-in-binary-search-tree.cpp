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
        unordered_map<int, int> mp;

    int max_fr = 0;

    void solve(TreeNode *root)
    {
       if(!root) 
           return;

        solve(root->left);

        mp[root->val]++;

        max_fr = max(max_fr, mp[root->val]);

        solve(root->right);
    }
    vector<int> findMode(TreeNode *root)
    {

        vector<int> ans;
        
        solve(root);

        for (auto &ele: mp)
        {

            if (ele.second == max_fr)
            {

                ans.push_back(ele.first);
            }
        }

        return ans;
    }
};