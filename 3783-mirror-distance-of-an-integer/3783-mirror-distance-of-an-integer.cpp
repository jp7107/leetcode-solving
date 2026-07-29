class Solution {
public:
    int mirrorDistance(int n) {
        // 1 rev
        //2 evaluate abs
        //3 return
        int temp = n;

        int rev=0;
        while(n>0){
            int last = n % 10;
            rev = rev * 10 + last;
            n/=10;
        }

        return abs(temp - rev);
         
    }
};