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

       	//         int positionFind(vector<int> &inorder, int element, int n)
       	//         {

       	//             for (int i = 0; i < n; i++)
       	//             {
       	//                 if (inorder[i] == element)

       	//                     return i;
       	//             }

       	//             return -1;
       	//         }

        void createMapping(vector<int> &inorder, map<int, int> &nodeToindex)
        {

            for (int i = 0; i < inorder.size(); i++)
            {
                nodeToindex[inorder[i]] = i;
            }
        }

    TreeNode* solve( vector<int> &inorder, vector<int> &postorder,int &index, int inorderStart, int inorderEnd, int n, map< int, int> &nodeToindex)
    {

        if (index < 0 || (inorderStart > inorderEnd)) return NULL;

        int element = postorder[index--];

        TreeNode *root = new TreeNode(element);

       	// int position = positionFind(inorder, element, n);

        int position = nodeToindex[element];

        root->right = solve(inorder,postorder,  index, position + 1, inorderEnd, n, nodeToindex);
        root->left = solve(inorder, postorder, index, inorderStart, position - 1, n, nodeToindex);

        return root;
    }
    TreeNode* buildTree(vector<int> &inorder,vector<int> &postorder)
    {

        map<int, int> nodeToindex;

        createMapping(inorder, nodeToindex);

        int n = postorder.size();

        int postorderIndex = n - 1;

        TreeNode *ans = solve( inorder, postorder,postorderIndex, 0, n - 1, n, nodeToindex);

        return ans;
    }
};