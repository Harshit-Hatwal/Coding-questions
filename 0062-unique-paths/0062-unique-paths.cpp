class Solution {
public:
    int uniquePaths(int m, int n) {
        
        long long int dp[m][n];
        for(int i=0;i<n;i++)
        {
            dp[0][i]=1;
        }
        
        for(int i=0;i<m;i++)
        {
            dp[i][0]=1;
        }
        
        int i=1;
        while(i<m)
        {
            int j=1;
            while(j<n)
            {
                
                dp[i][j]=dp[i-1][j]+dp[i][j-1];
             j++;   
            }
            i++;
        }
            
        
        return dp[m-1][n-1];
        
    }
};