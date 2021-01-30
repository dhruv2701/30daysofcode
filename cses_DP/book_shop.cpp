#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n,x;cin>>n>>x;
    int price[n+1], pages[n+1];
    for(int i=1;i<=n;i++)
    cin>>price[i];
    for(int i=1;i<=n;i++)
    cin>>pages[i];

    int dp[n+1][x+1];
    for(int i=0;i<=x;i++)
    dp[0][i]=0;
    for(int i=0;i<=n;i++)
    dp[i][0]=0;
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=x;j++)
        {
            if(price[i]<=j)
            {
                dp[i][j] = max(pages[i]+ dp[i-1][j-price[i]], dp[i-1][j]);
            }
            else
            {
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    cout<<dp[n][x];
    return 0;
}