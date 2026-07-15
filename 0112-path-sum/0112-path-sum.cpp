/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    //  bool hasPathSum(TreeNode* root, int targetSum) {
    //     if (!root) return false;

    //     if (!root->left && !root->right) {
    //         return targetSum - root->val == 0;
    //     }

    //     targetSum -= root->val;

    //     return hasPathSum(root->left, targetSum) || hasPathSum(root->right, targetSum);        
    // }
    bool solve(TreeNode *root, int tar)
    {
        if(root==NULL) return false;

        if(root->val==tar  &&  (root->left==NULL  &&  root->right==NULL)) return true;

        bool left = solve(root->left,tar-root->val);
        bool right = solve(root->right,tar-root->val);

        return left||right;
    }

    bool hasPathSum(TreeNode* root, int targetSum) {
        return solve(root,targetSum);
    }
};