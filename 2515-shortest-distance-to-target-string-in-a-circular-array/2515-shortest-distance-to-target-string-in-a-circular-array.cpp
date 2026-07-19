class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) 
    {
        int n = words.size();

        for (int step = 0; step < n; step++) {
            // move right
            if (words[(startIndex + step) % n] == target)
                return step;

            // move left
            if (words[(startIndex - step + n) % n] == target)
                return step;
        }

        return -1;
    }
};