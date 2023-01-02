class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int count=0;
        sort(nums.begin(),nums.end());  // sorting the array so that the first side is i , second is i+1 and third is i+2 and  third is the largest side 
        int n=nums.size();
        if(n<3)
            return 0;
        for(int i=2;i<n;i++)
        {
            int left=0,right=i-1;
            while(left<right)
            {
                if(nums[left]+nums[right]>nums[i])
                {
                    count+=right-left;
                    right--;
                }
                else
                    left++ ;
                
            }
           
            
            
        }// 2 3 4           2 2  3 
        
        return count;
        
        
        
    }
};