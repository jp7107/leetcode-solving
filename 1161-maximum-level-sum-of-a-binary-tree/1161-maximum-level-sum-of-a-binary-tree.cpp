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


    int levelTrav(TreeNode* root){
        vector<int> vec;

        queue<TreeNode* > q;
        q.push(root);
     
        while(q.size() > 0){

        int size = q.size();   // Add this
        int ans = 0;           // Move here

        for(int i = 0; i < size; i++){   // Add this loop

            TreeNode* curr = q.front();
            q.pop();

            ans += curr->val;

            if(curr->left) q.push(curr->left);
            if(curr->right) q.push(curr->right);
        }

        vec.push_back(ans);    // Move here (outside the for loop)
    }
         int idx = 0;

        for (int i = 1; i < vec.size(); i++) {
            if (vec[i] > vec[idx]) {
                idx = i;
            }
        }

         return idx+1;
    }
    int maxLevelSum(TreeNode* root) {

        if(root == NULL) return 0;
       
        return levelTrav(root);
        
    }
};