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
    int ans = INT_MAX, pre = -1;
    int minDiffInBST(TreeNode* root) {
        //base1
        if (root->left != NULL){
         minDiffInBST(root->left);
        }    
        //base2 
        if (pre >= 0){
             ans = min(ans, root->val - pre);
        }
        //main code logic
        pre = root->val;
        //for right cuz doing Inorder left->root->right
        if (root->right != NULL) minDiffInBST(root->right);
        return ans;
    }
};
// class Solution {
// public:
//     void inorder(TreeNode* root, vector<int>& arr) {
//         if (root == NULL) return;

//         inorder(root->left, arr);
//         arr.push_back(root->val);
//         inorder(root->right, arr);
//     }

//     int minDiffInBST(TreeNode* root) {
//         vector<int> arr;
//         inorder(root, arr);

//         int ans = INT_MAX;

//         for (int i = 1; i < arr.size(); i++) {
//             ans = min(ans, arr[i] - arr[i - 1]);
//         }

//         return ans;
//     }
// };
