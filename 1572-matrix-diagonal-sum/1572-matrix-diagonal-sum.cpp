class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        
          int rows=mat.size();
        int cols=mat[0].size();
         int sum=0;
        for(int row=0;row<rows;row++)
        {     
           
            for(int col=0;col<cols;col++)
            {      if(row==col  ||  row+col==rows-1)
                sum+=mat[row][col];
                
                
            }
              
        }
        // if(rows%2!=0)
        // { sum=sum-mat[rows/2][cols/2];
        //     return sum;
        // }
        // else 
            return sum;
        
    }
};