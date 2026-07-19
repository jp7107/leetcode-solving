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
    bool confirmBST(TreeNode* root, long long minVal, long long maxVal){
        if(root == NULL){
            return true;
        }
        if(root->val <= minVal || root->val >= maxVal){
            return false;
        }
        bool L = confirmBST(root->left, minVal, root->val);
        bool R = confirmBST(root->right, root->val, maxVal);

        return L && R;

    }
    bool isValidBST(TreeNode* root) {
        return confirmBST(root, LLONG_MIN, LLONG_MAX);
    }
};