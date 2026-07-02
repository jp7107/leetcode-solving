class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalGas = 0;
        int totalCost = 0;
        int currentFuel = 0;
        int startIndex = 0;
        
        for(int i = 0; i < gas.size(); i++) {
            totalGas += gas[i];
            totalCost += cost[i];
            
            currentFuel += gas[i] - cost[i];
            
            if(currentFuel < 0) {
                startIndex = i + 1;
                currentFuel = 0;
            }
        }
        
        if(totalGas < totalCost)
            return -1;
        
        return startIndex;
    }
};
      