class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
        vector<string> a;

        for (int i = 0; i < queries.size(); i++) {
            for (int k = 0; k < dictionary.size(); k++) {

                string temp = queries[i];
                int p = 0;

                for (int j = 0; j < temp.size(); j++) {
                    if (temp[j] != dictionary[k][j] && p < 2) {
                        temp[j] = dictionary[k][j];
                        p++;
                    }
                }

                if (temp == dictionary[k]) {
                    a.push_back(queries[i]);
                    break;
                }
            }
        }

        return a;
    }
};