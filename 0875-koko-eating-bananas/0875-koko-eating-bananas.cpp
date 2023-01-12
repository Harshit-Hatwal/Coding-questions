class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        
        // 4 11 20 23 30               h=5 min k to find 
        // search space 
        // l=1    r=max(piles[i])
        
        //[3,6,7,11], h = 8
        // k=1,2,3,4,5,6,7,8,9,10,11...
        //   F F F T T T T T T T T 
        int maxi=0;
        int n=piles.size();
        for(int i=0;i<n;i++)
        {
            maxi=max(maxi,piles[i]);
        }
        
        int l=1,r=maxi;
        int ans=maxi;
        
        
        while(l<=r)
        {
            long long int  mid= (l+r)/2;
            long long int hourstoeat=0;
            
            for(int i=0;i<n;i++)
            {
                    hourstoeat+= ceil((double)piles[i]/mid);
            }
            
            if(hourstoeat<=h)
            {   ans=mid;
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        
        return ans;
        
           
    }
};