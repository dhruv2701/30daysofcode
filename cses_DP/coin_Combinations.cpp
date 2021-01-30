#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
ll dp[1000005];
int n;
ll dice(ll ans)
{
   if(ans==n){return 1;}
   if(ans>n)return 0;
   if(dp[ans]!=0)
   return dp[ans];
   ll cnt=0;
   for(int j=1;j<=6;j++)
   {
     if(j<=n)
     dp[ans]= (dp[ans]+dice(ans+j))%mod;
   }
   return dp[ans];
}
int main()
{
  cin>>n;
  memset(dp,0,sizeof(dp));
  cout<<dice(0);
  //cout<<dp[0];
}