class Solution {
public:
    bool canEatAll(vector<int>& piles, int k, int h){
        int actualhours = 0;
        
        for(int p : piles){
            actualhours += p/k;  // ceil(p/k)
            if(p%k !=0){
                actualhours++;
            }
        }
        
        return actualhours <= h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int l = 1;
        int r = *max_element(piles.begin(), piles.end());

        while(l < r){
            int mid = l+ (r-l) / 2;

            if(canEatAll(piles, mid, h)){
                r = mid;
                // high = mid - 1;
             }
            else{
                l = mid + 1;
            }
        }

        return l;
    }
};