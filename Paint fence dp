#include <bits/stdc++.h> 
int countWays(int n)
{
    // Write your code here	
    // pehli do  ko same rakhne ka tarika  k*1 .
    // dp approach .
    long long int mod=1000000007;
    long long int same=2;    // rr  gg 
    long long int diff=2*(2-1);      //  rg    gr 
    long long int total=same+diff;
    for(int i=3;i<=n;i++)
    {
        same=(diff*1)%1000000007 ;    //   diff ko uthana and last ka repeat kar diya  rgg grr
        diff=((total)%1000000007 * (2-1))%1000000007;
        total =(same+diff)%1000000007;
    }

    return total;





}
