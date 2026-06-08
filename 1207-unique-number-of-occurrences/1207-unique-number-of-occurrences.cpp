// class Solution {
// public:
//     bool uniqueOccurrences(vector<int>& arr) {
//         unordered_map<int,int>map;
//         unordered_map<int,int>map2;
//         for(auto x: arr){
//             map[x]++;

//         }
//         for(auto n: map){
//             int val=n.second;

//             map2[val]++;
           
//         }
//         int cnt=0;
//         for(auto c:map2){
//             if(c.second ==1){
//                 cnt++;
//             }
//         }
//         return cnt==map2.size();
//     }
// };
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        vector<int> v;

        for (int i = 0; i < arr.size(); i++) {
            int cnt = 1;

            // Count occurrences of the current element
            while (i + 1 < arr.size() && arr[i] == arr[i + 1]) {
                cnt++;
                i++;
            }

            v.push_back(cnt);
        }

        sort(v.begin(), v.end());

        for (int i = 1; i < v.size(); i++) {
            if (v[i] == v[i - 1]) {
                return false;
            }
        }

        return true;
    }
}; 