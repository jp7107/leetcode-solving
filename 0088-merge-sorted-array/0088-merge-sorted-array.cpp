class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>v;
        
        for(int i=0;i<m;i++){
            v.push_back(nums1[i]);
        }
        for(int i=0;i<n;i++){
            v.push_back(nums2[i]);
        }
        // for(int x: v){
        //     nums1.push_back(x);
        // }
        // Copy back result into nums1
        for(int i = 0; i < m+n; i++){
            nums1[i] = v[i];
        }
        sort(nums1.begin(),nums1.end());

        
    }
};