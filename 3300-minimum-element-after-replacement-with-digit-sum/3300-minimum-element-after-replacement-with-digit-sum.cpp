class Solution {
public:
    int minElement(vector<int>& nums) {
        int val;
        int min;        
        for(int i=0; i<nums.size(); i++){
        int sum=0;
            val = nums[i];
            while(val !=0 ){
                int val2 = val % 10;
                sum += val2;
                val /= 10;
            }
            nums[i] = sum;

            


        }
        return *min_element(nums.begin(), nums.end());
    }
};