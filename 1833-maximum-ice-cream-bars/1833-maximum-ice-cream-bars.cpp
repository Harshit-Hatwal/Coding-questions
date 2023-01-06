class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        
        sort(costs.begin(),costs.end());
        int count=0;
        int n=costs.size();
        for(int i=0;i<n;i++)
        {
            if(coins-costs[i]>=0)
            {
                count++;
                coins=coins-costs[i];
            }
            else
                break;
        }
        return count;
        
        // 2 + 3 + 3+ 5 + 6 + 6 + 6 +  7 + 9
    }
};