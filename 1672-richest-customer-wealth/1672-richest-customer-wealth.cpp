class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        
          int rows=accounts.size();
        int cols=accounts[0].size();
        int maxsum=0;
        //int count=0;
        for(int row=0;row<rows;row++)
        {     
            int sum=0;
            for(int col=0;col<cols;col++)
            {
                sum+=accounts[row][col];
                
                
            }
            maxsum=max(sum,maxsum);
            
        }
        
        return maxsum;
        
        
        
        
        
    }
};