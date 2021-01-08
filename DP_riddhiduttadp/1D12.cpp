//https://leetcode.com/problems/arithmetic-slices

#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
int dp[105];
int arr[105];
int n;
int hsRob(int m)
{
    if(m==n-1)
    return arr[m];
    if(m>=n)
    return 0;
    if(dp[m]!=-1)
    return dp[m];

    return dp[m]  = max(arr[m]+hsRob(m+2),hsRob(m+1));
}
int main() {
	cin>>n;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    memset(dp,-1,sizeof(dp));
    cout<<hsRob(0);
	return 0;
}	