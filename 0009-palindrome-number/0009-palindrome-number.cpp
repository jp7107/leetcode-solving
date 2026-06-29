class Solution {
public:
    bool isPalindrome(int x) {
    
            int revNum=0;
            int temp =x;
            while(x!=0){
                if (x<0) return false;
                int dig =x%10;
                if(revNum>INT_MAX/10 || revNum<INT_MIN/10 ){
                    return 0;
                }
                revNum = revNum *10 +dig;
                x= x/10;
            }
            return temp==revNum;
    }
};