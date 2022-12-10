class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        map<int,bool> present,checked;
        for(auto a:nums)
        {
            present[a]=true;
        }
        int longestconsecutivechain=0;
        
        for(auto a:nums)
        {
            if(!checked[a]  && !present[a-1])    // here we are checking whether checked[a] is already explored or not 
                // and  whether a-1 element is present in the hasmap  or not  if it is present  then a cant be the starting 
                // element of the sequence . 
            {   
                int currentchain=0;
                int start=a;
                
                while(present[start])
                {
                    currentchain++;
                    checked[start]=true;
                    start++;
                    
                }
                longestconsecutivechain=max(longestconsecutivechain,currentchain);
                
            }
            
            
        }
        return longestconsecutivechain;
        
        
    }
};