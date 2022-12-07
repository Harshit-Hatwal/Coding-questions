#include<bits/stdc++.h>
using namespace std;

								//     
int main()
{      int n,k;
       cin>>n>>k;
    
int arr[n];

for(int i=0;i<n;i++)
{
	cin>>arr[i];
}
    
	unordered_map<int,int> m;
	int prev_sum=0,res=INT_MAX;
	for(int i=0;i<n;i++)
	{
		prev_sum+=arr[i];
		if(prev_sum==k)         //array  //      3   1   -4   0   1     2    1             k is 4. 
		{                      //prefix sum//    3   4    0   0   1     3    4          
   			int s=i+1;
			res=min(res,s);
		}
		if(m.find(prev_sum-k)!=m.end())     //  
		{
			res=min(res,i-m[prev_sum-k]);  // res=min(2, 6-3)   res=min(2,3)   ans is 2 
			
		}
		m[prev_sum]=i;    // storing the prev_sum and its index in the map ....
	
	
	}
	cout<<res<<endl;
	
	
	
}
