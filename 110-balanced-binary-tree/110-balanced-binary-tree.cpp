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
// class Solution {
// public:
//     int maxDepth(TreeNode *root)
//         {

//             if(root==NULL)

//                 return 0;

//             int lefth = maxDepth(root->left);
//             int righth = maxDepth(root->right);

//             int ans = max(lefth, righth) + 1;

//             return ans;
//         }
//     bool isBalanced(TreeNode* root) {

//         if (root==NULL) return true;

//         bool left=  isBalanced(root->left);
//         bool right = isBalanced(root->right);

//         bool diff = abs(maxDepth(root->left)-maxDepth(root->right))<=1;

//         if(left &&  right && diff) return true;

//         else 

//             return false;

//     }
// };

class Solution
{
    public:
        pair<int, bool> solve(TreeNode *root)
        {
            if (root == NULL)
                return make_pair(0, true);

           	//left sub tree answer
            pair<int, bool> leftAns = solve(root->left);
           	//right sub tree answer
            pair<int, bool> rightAns = solve(root->right);

            int leftHeight = leftAns.first;
            int rightHeight = rightAns.first;

            bool diff = abs(leftHeight - rightHeight) <= 1;

            bool leftBalance = leftAns.second;
            bool rightBalance = rightAns.second;

            if (leftBalance && rightBalance && diff)
            {
                return make_pair(max(leftHeight, rightHeight) + 1, true);
            }
            else
            {
                return make_pair(max(leftHeight, rightHeight) + 1, false);
            }
        }
    bool isBalanced(TreeNode *root)
    {
        pair<int, bool> ans = solve(root);
        return ans.second;
    }
};