class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> v;
        int minrow=0;
        int maxrow=matrix.size()-1;
        int mincolumn=0;
        int maxcolumn=matrix[0].size()-1;
        
        int count=0;
        int total_elements=(maxrow+1)*(maxcolumn+1);
      
        while(count<total_elements)
        {  
        for(int i=mincolumn,j=minrow;i<=maxcolumn && count<total_elements;i++)
        {
            v.push_back(matrix[j][i]);
            count++;
        }
        minrow++;
        
          for(int i=minrow,j=maxcolumn;i<=maxrow && count<total_elements;i++)
        {
            v.push_back(matrix[i][j]);
            count++;
        }
        maxcolumn--;
         for(int i=maxcolumn,j=maxrow;i>=mincolumn && count<total_elements;i--)
        {
            v.push_back(matrix[j][i]);
            count++;
        }
        maxrow--;
         for(int i=maxrow,j=mincolumn;i>=minrow && count<total_elements;i--)
        {
            v.push_back(matrix[i][j]);
            count++;
        }
        mincolumn++;
        
    }
        
        return v;
    }
};