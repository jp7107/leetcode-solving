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

    int getMax(TreeNode* root) {
        while(root->right != nullptr) {
            root = root->right;
        }
        return root->val;
    }

    int getMin(TreeNode* root) {
        while(root->left != nullptr) {
            root = root->left;
        }
        return root->val;
    }

    int getMinimumDifference(TreeNode* root) {
        if(root == nullptr)
            return INT_MAX;

        int lowestNumber = INT_MAX;

        if(root->left != nullptr) {
            lowestNumber = min(lowestNumber, root->val - getMax(root->left));
        }

        if(root->right != nullptr) {
            lowestNumber = min(lowestNumber, getMin(root->right) - root->val);
        }

        int L = abs(getMinimumDifference(root->left));
        int R = abs(getMinimumDifference(root->right));

        lowestNumber = min(lowestNumber, L);
        lowestNumber = min(lowestNumber, R);

        return lowestNumber;
    }
};