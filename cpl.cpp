#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
#define ll long long
#define mp make_pair
#define pb push_back
#define pii pair<int,int>
#define vi vector<int> 
#define mii map<int,int>
#define mod 1000000007
#define inf 1e18
int n,k;
int arr[4005];
int  dp[4005][4005];
ll count1(ll sum,int m)
{
    if(sum>=k)return 0;
    if(m>=n)return -1;
    if(dp[m][sum]!=-1)return dp[m][sum];

    return dp[m][sum] = min(1+count1(sum+arr[m],m+1),count1(sum,m+1));
}
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   int t;cin>>t;
   while(t--)
   {
       cin>>n>>k;
       int arr[n];
       for(int i=0;i<n;i++)
       cin>>arr[i];
       memset(dp,-1,sizeof(dp));
       cout<<count1(0,0);

       cout<<"\n";
   }
   return 0;
}