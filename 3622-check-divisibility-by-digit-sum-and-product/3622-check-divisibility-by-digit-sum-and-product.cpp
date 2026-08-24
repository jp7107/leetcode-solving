class Solution {
public:
    int sumOfDigit(int n, int sum){
        while(n){
            sum += n%10;
            n /=10;

        }
        return sum;
    }
    int productOfDigit(int n, int prod){
        while(n){
            prod *= n%10;
            n /= 10;

        }
        return prod;
    }


    bool checkDivisibility(int n) {
        int result = sumOfDigit(n, 0) + productOfDigit(n, 1);
        return n % result == 0 ;
    }
};