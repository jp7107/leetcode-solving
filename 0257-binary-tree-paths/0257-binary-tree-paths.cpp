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
// class Solution {
// public:

//     vector<string> binaryTreePaths(TreeNode* root) {
//         vector<string> rootToLeaf;

//         if (root == NULL) return rootToLeaf;

//         vector<string> left = binaryTreePaths(root->left);   // returns vector<string>, not string

//         // ❌ Wrong:
//         // string pathL = to_string(left->data) + "->";
//         // left is a vector<string>, so it has no member 'data'.

//         vector<string> right = binaryTreePaths(root->right); // returns vector<string>, not string

//         // ❌ Wrong:
//         // string pathR = to_string(right->data) + "->";
//         // right is a vector<string>, so it has no member 'data'.

//         return rootToLeaf;
//     }
// };
class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> rootToLeaf;

        if (root == NULL)
            return rootToLeaf;

        // Leaf node
        if (root->left == NULL && root->right == NULL) {
            rootToLeaf.push_back(to_string(root->val));
            return rootToLeaf;
        }

        vector<string> leftPaths = binaryTreePaths(root->left);
        for (string path : leftPaths) {
            rootToLeaf.push_back(to_string(root->val) + "->" + path);
        }

        vector<string> rightPaths = binaryTreePaths(root->right);
        for (string path : rightPaths) {
            rootToLeaf.push_back(to_string(root->val) + "->" + path);
        }

        return rootToLeaf;
    }
};