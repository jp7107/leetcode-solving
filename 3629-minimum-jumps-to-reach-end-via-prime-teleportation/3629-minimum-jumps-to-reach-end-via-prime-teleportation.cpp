class Solution {
public:

    bool isPrime(int x) {
        if (x < 2) return false;

        for (int i = 2; i * i <= x; i++) {
            if (x % i == 0) return false;
        }

        return true;
    }

    int minJumps(vector<int>& nums) {

        int n = nums.size();

        if (n == 1) return 0;

        int maxi = *max_element(nums.begin(), nums.end());

        // value -> indices
        unordered_map<int, vector<int>> mp;

        for (int i = 0; i < n; i++) {
            mp[nums[i]].push_back(i);
        }

        vector<int> vis(n, 0);

        queue<int> q;

        q.push(0);

        vis[0] = 1;

        int steps = 0;

        unordered_set<int> usedPrime;

        while (!q.empty()) {

            int sz = q.size();

            while (sz--) {

                int i = q.front();
                q.pop();

                if (i == n - 1) return steps;

                // move left
                if (i - 1 >= 0 && !vis[i - 1]) {
                    vis[i - 1] = 1;
                    q.push(i - 1);
                }

                // move right
                if (i + 1 < n && !vis[i + 1]) {
                    vis[i + 1] = 1;
                    q.push(i + 1);
                }

                // prime teleportation
                int val = nums[i];

                if (isPrime(val) && !usedPrime.count(val)) {

                    usedPrime.insert(val);

                    // jump to all multiples of val
                    for (int multiple = val; multiple <= maxi; multiple += val) {

                        if (mp.count(multiple)) {

                            for (int idx : mp[multiple]) {

                                if (!vis[idx]) {
                                    vis[idx] = 1;
                                    q.push(idx);
                                }
                            }
                        }
                    }
                }
            }

            steps++;
        }

        return -1;
    }
};