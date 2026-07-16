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
    
    // int binaryToDecimal(long num) {
    
    //    if (num == 0) return 0;

    //  return binaryToDecimal(num / 10) * 2 + (num % 10);
    // }

    int path(TreeNode* root, int num){
        if(root == NULL) return 0;

        num = num*2 + root->val;

        if(root->left == NULL && root->right == NULL){
         
            return num;

        }
        int L = path(root->left, num);
        int R = path(root->right, num);
        
        return L + R ;


    }

    int sumRootToLeaf(TreeNode* root) {
        return path(root, 0);
        
    }
};