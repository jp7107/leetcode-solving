class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) {
        int m = boxGrid.size();
        int n = boxGrid[0].size();

        vector<vector<char>> rotatedBox(n, vector<char>(m));

        // Step 1: Rotate the box
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                rotatedBox[j][m - 1 - i] = boxGrid[i][j];
            }
        }

        // Step 2: Apply gravity
        for(int j = 0; j < m; j++){
            int space = n - 1;
            for(int i = n - 1; i >= 0; i--){
                if(rotatedBox[i][j] == '*') {
                    space = i - 1;
                }
                else if(rotatedBox[i][j] == '#'){
                    swap(rotatedBox[i][j], rotatedBox[space][j]);
                    space--;
                }
            }
        }

        return rotatedBox;
    }
};