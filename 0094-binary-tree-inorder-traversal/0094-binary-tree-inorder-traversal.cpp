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
//     vector<int> returnVal;
//     void Inorder(TreeNode* root){
//         if(root == NULL) return ;

//         Inorder(root->left);
//         returnVal.push_back(root->val);
//         Inorder(root->right);
//     }
    

  class Solution {
public:
    vector<int> returnVal;

    void inOrderMorrisTraversal(TreeNode* root) {
        if (!root) return;

        TreeNode *cur = root, *pre;

        while (cur) {
            if (cur->left == nullptr) {
                returnVal.push_back(cur->val);
                cur = cur->right;
            }
            else {
                pre = cur->left;

                while (pre->right != nullptr && pre->right != cur) {
                    pre = pre->right;
                }

                if (pre->right == nullptr) {
                    pre->right = cur;
                    cur = cur->left;
                }
                else {
                    pre->right = nullptr;
                    returnVal.push_back(cur->val);
                    cur = cur->right;
                }
            }
        }
    }

    vector<int> inorderTraversal(TreeNode* root) {
        inOrderMorrisTraversal(root);
        return returnVal;
    }
};