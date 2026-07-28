class Solution {
public:

    // Collect all nodes exactly k levels below root
    void collect(TreeNode* root, int k, vector<int>& arr) {
        if (root == NULL || k < 0)
            return;

        if (k == 0) {
            arr.push_back(root->val);
            return;
        }

        collect(root->left, k - 1, arr);
        collect(root->right, k - 1, arr);
    }


    // Returns distance of current root from target
    // -1 means target is not present in this subtree
    int DistanceK(TreeNode* root, TreeNode* target, int k,
                  vector<int>& arr) {

        if (root == NULL)
            return -1;


        // Target found
        if (root == target) {
            collect(root, k, arr);
            return 0;
        }


        // Search target in left subtree
        int leftDist = DistanceK(root->left, target, k, arr);

        if (leftDist != -1) {

            int currDist = leftDist + 1;

            // Current root itself is k distance away
            if (currDist == k) {
                arr.push_back(root->val);
            }
            else {
                // Search opposite subtree
                collect(root->right, k - currDist - 1, arr);
            }

            return currDist;
        }


        // Search target in right subtree
        int rightDist = DistanceK(root->right, target, k, arr);

        if (rightDist != -1) {

            int currDist = rightDist + 1;

            // Current root itself is k distance away
            if (currDist == k) {
                arr.push_back(root->val);
            }
            else {
                // Search opposite subtree
                collect(root->left, k - currDist - 1, arr);
            }

            return currDist;
        }


        return -1;
    }


    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {

        vector<int> arr;

        DistanceK(root, target, k, arr);

        return arr;
    }
};