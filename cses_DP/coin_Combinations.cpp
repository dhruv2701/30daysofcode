#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main()
{
  int n,x;cin>>n>>x;
  int arr[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];
  int dp[n+1]={0};
  dp[0]=1;   //sum==0, 1 way is to take no element
  for(int i=1;i<=x;i++)
  {
    for(int j=1;j<=n;j++)
    {
      if(arr[j]-i<=0)
        dp[i]=dp[i]+dp[i-arr[j]];
    }
  }
  cout<<dp[x];
  return 0;
}