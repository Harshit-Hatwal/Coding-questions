class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        int n=nums.size();
        int x;
        unordered_map<int,int> m;
       for(int i=0;i<n;i++)
       {
           m[nums[i]]++;
           if(m[nums[i]]>1)
           { 
             x=nums[i];
                break;    
            
           }
       }
        return x;
        
    }
       
};