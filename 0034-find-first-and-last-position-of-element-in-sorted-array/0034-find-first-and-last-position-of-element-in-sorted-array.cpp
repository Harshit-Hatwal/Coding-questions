class Solution {
public:
    
     int firstoccurence(vector<int> &nums,int n,int  target )
        {

        int l=0;
        int r=n-1;
        int fo=-1;
         while(l<=r)
         {
             int mid=(l+r)/2;
             if(nums[mid]<target)
                 l=mid+1;
             else if(nums[mid]==target)
             {
                 fo=mid;
                 r=mid-1;
             }
             else
             {
                 r=mid-1;
             }
         }
         
         return fo; 
        }
    
        int lastoccurence(vector<int> &nums,int n,int  target )
        {

        int l=0;
        int r=n-1;
        int lo=-1;
         while(l<=r)
         {
             int mid=(l+r)/2;
             if(nums[mid]<target)
                 l=mid+1;
             else if(nums[mid]==target)
             {
                 lo=mid;
                 l=mid+1;
             }
             else
             {
                 r=mid-1;
             }
         }
         
         return lo; 
        }
    
    
    
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int n=nums.size();
       
        int fo=firstoccurence(nums,n,target);
          int lo=lastoccurence(nums,n,target);
        
        return {fo,lo};
        
        
    }
};