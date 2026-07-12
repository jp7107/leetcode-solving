// class Solution {
// public:
// vector<int> toBinary(int n) {
//     vector<int> arr;

//     if (n == 0) {
//         arr.push_back(0);
//         return arr;
//     }

//     while (n > 0) {
//         arr.push_back(n % 2);
//         n /= 2;
//     }

//     reverse(arr.begin(), arr.end());
//     return arr;
// }

//     int hammingDistance(int x, int y) {
   
//         vector<int> a = toBinary(x);
//         vector<int> b = toBinary(y);

//         // Make both same size
//         while (a.size() < b.size()) a.insert(a.begin(), 0);
//         while (b.size() < a.size()) b.insert(b.begin(), 0);

//         int count = 0;

//         for (int i = 0; i < a.size(); i++) {
//             if (a[i] != b[i]) {
//                 count++;
//             }
//         }

//         return count;
    
       

//     }
// };
class Solution {
public:
    int hammingDistance(int x, int y) {
        return __builtin_popcount(x ^ y);
    }
};