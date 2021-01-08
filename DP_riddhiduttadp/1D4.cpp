// https://www.hackerearth.com/problem/algorithm/utkarsh-and-jumps/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n,p;
double dp[1000005];
int main()
{
	cin>>n>>p;
    dp[0]=0.0;
    dp[1]=0.0;
    dp[2]=p/100.0;
    dp[3]=1-p/100.0;
    
    for(int i=4;i<=n;i++)
    {
        dp[i] = (p/100.0)*dp[i-2] + (1-p/100.0)*dp[i-3];
    }
	cout<<fixed<<setprecision(6)<<dp[n];
	return 0;
}	
