class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater =0 , n =height.size();
        int st=0,ed=n - 1;
        //2-pointer app.
        while(st < ed ){
            int wt = ed - st;
            int ht = min(height[ed],height[st]);
            int currWater = wt * ht; //area of water
            maxWater = max(maxWater, currWater);
            //increm or decre
            if(height[st] < height[ed]){
                st++;
            } else{
            ed--;
            }
        }
        return maxWater;
    }
};