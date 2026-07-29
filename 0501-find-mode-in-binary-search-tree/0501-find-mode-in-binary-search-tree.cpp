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

    void storeMapVal(TreeNode* root,unordered_map<int,int>&map){
        if(root == NULL) return; // return Output[0]
        map[root->val]++;

        storeMapVal(root->left, map);
        storeMapVal(root->right, map);
    }
    

    vector<int> executeMode(TreeNode* root){
        vector<int> arr;
        unordered_map<int,int>map;
        storeMapVal(root, map);
        
        int maxFreq = 0;

        for(auto it : map) {
            maxFreq = max(maxFreq, it.second);
        }

        for(auto it : map) {
            if(it.second == maxFreq)
                arr.push_back(it.first);
        }
        return arr;
    }
    vector<int> findMode(TreeNode* root) {
        if(root == NULL) return { };
        return executeMode(root);
    }
};

