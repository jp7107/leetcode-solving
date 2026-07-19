class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(),potions.end());
        int m = potions.size();
        int n = spells.size();
        
        vector<int> pairs(n,0);
        
        for(int i=0;i<n;i++){
            int k=spells[i];
            int st=0,ed=m-1;
            while(st<=ed){
                int mid =st+(ed-st)/2;
                long long target =(long long )k * (long long )potions[mid];
                if(target>=success){
                    ed=mid-1;
                }else{
                    st=mid+1;
                }
            }
            pairs[i]=m-st;
        }
        return pairs;
    }
};
// class Solution {
// public:
// vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
//     int n = spells.size();
//     int m = potions.size();

//     // store spell with original index
//     vector<pair<int,int>> sp;
//     for(int i = 0; i < n; i++) {
//         sp.push_back({spells[i], i});
//     }

//     // sort spells and potions
//     sort(sp.begin(), sp.end());
//     sort(potions.begin(), potions.end());

//     vector<int> ans(n);

//     int j = m - 1; // pointer for potions

//     for(int i = 0; i < n; i++) {
//         int k = sp[i].first;

//         // move j left while condition is satisfied
//         while(j >= 0 && (long long)k * potions[j] >= success) {
//             j--;
//         }

//         // count valid pairs
//         ans[sp[i].second] = m - (j + 1);
//     }

//     return ans;
// }
// };