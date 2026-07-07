class Solution {
public:
    long long sumAndMultiply(int n) {
        //step-1: get non-zero numbers
        //step-2: get sum of nonzero number
        //step-3: return sum * non zero number
        vector<int> arr;
       
        while(n!=0){
            int num = n % 10;
            if(num != 0 ){
                arr.push_back(num);
            }
            n/=10;
        }
        long long  digit = 0;
        for(int i = arr.size()-1; i >= 0; i--){
            digit = digit * 10 + arr[i];
        }
        long long temp = digit;
        long long sum = 0;
        while(temp !=0){
            sum = sum + (temp % 10);
            temp /= 10;
        }
        return sum * digit;

    }
};