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

        int positionFind(vector<int> &inorder, int element, int n)
        {

            for (int i = 0; i < n; i++)
            {
                if (inorder[i] == element)

                    return i;
            }

            return -1;
        }

    void createMapping(vector<int> &inorder, map<int, int> &nodeToindex, int n)
    {

        for (int i = 0; i < n; i++)
        {
            nodeToindex[ inorder[i]] = i;
        }
    }

    TreeNode* solve(vector<int> &preorder, vector<int> &inorder, int &index, int inorderStart, int inorderEnd, int n,map<int, int> &nodeToindex)
    {

        if (index >= n || inorderStart > inorderEnd) return NULL;

        int element = preorder[index++];

        TreeNode *root = new TreeNode(element);

        // int position = positionFind(inorder, element, n);
        
        int position =nodeToindex[element];

        root->left = solve(preorder, inorder, index, inorderStart, position - 1, n,nodeToindex);
        root->right = solve(preorder, inorder, index, position + 1, inorderEnd, n,nodeToindex);

        return root;
    }
    TreeNode* buildTree(vector<int> &preorder, vector<int> &inorder)
    {

        int preorderIndex = 0;
        int n = inorder.size();

        map<int, int> nodeToindex;

        createMapping(inorder, nodeToindex, n);

        TreeNode *ans = solve(preorder, inorder, preorderIndex, 0, n - 1, n,nodeToindex);

        return ans;
    }
};