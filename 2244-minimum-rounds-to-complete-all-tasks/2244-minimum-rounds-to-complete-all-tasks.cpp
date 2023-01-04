class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        
        int n=tasks.size();
        
        unordered_map<int,int> m;
        for(int i=0;i<n;i++)
        {
            m[tasks[i]]++;
        }
        int freq=0;
        int count=0;
        for(auto i:m)
        {   freq=i.second;
            if(freq>1 && freq%3!=0)
                count+=(freq/3)+1;
            
            else if(freq%3==0)
                 count+=(freq/3);
         
         else
             return -1;
        }
        return count;
        
    }
};