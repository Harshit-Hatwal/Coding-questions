class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        
         unordered_map<int,int> cracks;
            // distance of the crack as key and in which row it occured as the value . 
        int rows=wall.size();
        for(int row=0;row < rows;row++)
        {     
            int crackdistance=0;
            for(int bricks=0;bricks<wall[row].size()-1;bricks++)
            {
                    crackdistance+=wall[row][bricks];
                cracks[crackdistance]++;
            }
        }
        
        int mini=rows;
        for(auto iterator:cracks)
        {
            int  crackdistance=iterator.first;
            int numrowshavingcrack=iterator.second;   //    
            mini=min(mini,rows-numrowshavingcrack);
        }
        return mini;
    }
};