class NumMatrix {
public:
    
    vector<vector<int>> prefixsum;
    NumMatrix(vector<vector<int>>& matrix) {
        int m=matrix.size(),n=matrix[0].size();
        prefixsum.resize(m+1);    // resizing the prefix sum array to 1 based indexing .
        
        for(int i=0;i<=m;i++)
        {                                                 // precomputation of prefix sum . . . . . . .. .
            prefixsum[i].resize(n+1,0);
            for(int j=0;j<=n;j++)
            {
                if(i==0 || j==0)
                    continue;
                prefixsum[i][j]=prefixsum[i-1][j]+prefixsum[i][j-1]-prefixsum[i-1][j-1]+matrix[i-1][j-1];
            }
            
        }
        
 
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        
        
        row1++; row2++; col1++; col2++;
        return prefixsum[row2][col2] - prefixsum[row2][col1-1] -prefixsum[row1-1][col2] + prefixsum[row1-1][col1-1];
    
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */