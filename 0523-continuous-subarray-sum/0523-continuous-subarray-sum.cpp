class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        
        unordered_map<int,int> first_occurence;
        long long int  prefixsum=0;
        first_occurence[0]=-1;
        for(int i=0;i<nums.size();i++)
        {
            prefixsum+=nums[i];
            
            int prefixsummod=prefixsum%k;
            
            if(prefixsummod==0  && i+1>=2)
                return true;
            
            if(first_occurence.find(prefixsummod)!=first_occurence.end())
            {
                if(i-first_occurence[prefixsummod]>=2)
                    return true;
               
            }
            else
             first_occurence[prefixsummod]=i;
           
            
        }
        
        return false;
        
        
    }
};