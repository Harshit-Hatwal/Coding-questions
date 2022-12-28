class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
            int row=matrix.size();
        int column=matrix[0].size();
         // transposing the matrix     
        for(int i=0;i<row;i++)
        {
            for(int j=i+1;j<column;j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        // reversing the columns 
    for(int i=row-1;i>=0;i--)
    {
        int low=0,high=row-1;
        while(low<high)
        {
            swap(matrix[i][low],matrix[i][high]);
            low++;
            high--;
            
        }
        
    }
    }
};