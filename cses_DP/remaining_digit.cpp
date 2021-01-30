#include<bits/stdc++.h>
using namespace std;
#define ll long long
int dp[1000005];
int remdigits(int m)
{
    if(m==1 || m==2 || m==3 || m==4 || m==5 || m==6 || m==7 || m==8 || m==9)
    return 1;
    if(dp[m]!=-1)
    return dp[m];
    int ans = -1;
    int num = m;
    while(m>0)
    {
        ans=max(ans, m%10);
        m=m/10;
    }
    return dp[m] = 1 + remdigits(num-ans);
}
int main()
{
    int n;
    cin>>n;
    memset(dp,-1,sizeof(dp));
    cout<<remdigits(n);




    return 0;
}