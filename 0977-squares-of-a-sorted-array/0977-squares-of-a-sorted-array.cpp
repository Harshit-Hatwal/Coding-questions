class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
     
        int n=nums.size()-1;
        int left=0;
        int right=n;
        vector<int> output(nums.size(),0);
        for(int i=n;i>=0;i--)
        {
            if(abs(nums[left])>abs(nums[right]))
            {
                output[i]=nums[left]*nums[left];
                left++;
            
            }
            else
            {
                output[i]=nums[right]*nums[right];
                right--;
            }
            
        }
        return output;
        
        
    }
};