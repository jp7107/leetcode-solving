class Solution {
public:
    vector<int> bestTower(vector<vector<int>>& towers, vector<int>& center, int radius) {
        int cx = center[0], cy = center[1];
        
        int bestQ = -1;
        vector<int> best = {-1, -1};

        for (auto& t : towers) {
            int x = t[0], y = t[1], q = t[2];
            
            int dist = abs(x - cx) + abs(y - cy);

            if (dist <= radius) {  // reachable
                if (q > bestQ) {
                    bestQ = q;
                    best = {x, y};
                } 
                else if (q == bestQ) {
                    // lexicographically smaller
                    if (x < best[0] || (x == best[0] && y < best[1])) {
                        best = {x, y};
                    }
                }
            }
        }

        return best;
    }
};
