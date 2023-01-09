class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
        // checking the even odd pattern  .. 
        int l=0;
        int r=nums.size()-1;
        
        //   3  3   5   5  6  6  8  8  9  10 10 12  12 14  14 
        //   0  1   2   3  4  5  6  7  8  9  10  11 12 13  14....   after the single element first occurence comes at odd indexed and another at even indexed.
        while(l<r)  // when l will become equal to r we will get our answer 
        {
            int mid=(l+r)/2;
            if(nums[mid]==nums[mid^1])
            {
                // following the even odd pattern 
                //if mid 7  then then 7^1 is 8 ..
                
                l=mid+1;
                
                
            }
        else
            r=mid;
        
        }
        
        return nums[l];
        
    }
};