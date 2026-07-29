class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int total = 0;

        for (int n = num1; n <= num2; n++) {
            vector<int> d;
            int x = n;

            // convert number to digits
            if (x == 0) d.push_back(0);
            while (x > 0) {
                d.push_back(x % 10);
                x /= 10;
            }
            reverse(d.begin(), d.end());

            if (d.size() < 3) continue; // cannot form waviness

            // count peaks + valleys
            for (int i = 1; i < d.size() - 1; i++) {
                if ((d[i] > d[i - 1] && d[i] > d[i + 1]) ||   // peak
                    (d[i] < d[i - 1] && d[i] < d[i + 1])) {   // valley
                    total++;
                }
            }
        }
        return total;
    }
};