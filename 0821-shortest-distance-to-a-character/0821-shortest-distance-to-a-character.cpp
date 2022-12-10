class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        
 int n=s.size();
        vector<int> v(n,INT_MAX);
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(s[j]==c)
                    v[i]=min(v[i],abs(i-j));
                
            }
            
            
        }
return v;
        
    }
};