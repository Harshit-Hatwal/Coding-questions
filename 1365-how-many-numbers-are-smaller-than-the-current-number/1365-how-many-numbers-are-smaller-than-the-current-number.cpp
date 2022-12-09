class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
       unordered_map<int,int> m;
        int n=nums.size();
        vector<int> b=nums;
        // done with map  traversed from  back so that for repetitive elements 
        // the last index stored in the map corresponding to that value will be 
        // no of elements lesser than that 
        sort(b.begin(),b.end());
        for(int i=n-1;i>=0;i--)
        {
                m[b[i]]=i;
        
        }
        //Assigning frequencies to each elements
        for(int i= 0;i<n;i++){
            nums[i] = m[nums[i]];
        }
        return nums;
        
    }
};