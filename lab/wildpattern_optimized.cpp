//Time Complexity - O(n*m)
//Space Complexity - O(2*m) ~ O(m)...  we are using dp array of size dp[2][m].
//same logic as previous solution.
//As in previous solution we are only looking for dp[i-1][j] , dp[i][j-1], dp[i-1][j-1] values
//we can optimize SC , and can do this with array of two rows and m columns.

#include<bits/stdc++.h>
using namespace std;
bool PattMatch(string &S,string &P)
{
    int n=S.length();
    int m=P.length();

    bool dp[2][m+1];
    memset(dp,false,sizeof(dp));

    dp[0][0] = true;
    for(int i=1;i<=m;i++)
    {
        if(P[i-1]=='*')
        dp[0][i]=dp[0][i-1];
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(P[j-1]=='*')
            dp[i%2][j] = dp[(i+1)%2][j] || dp[i%2][j-1];
            else if(S[i-1]==P[j-1] || P[j-1]=='?')
            dp[i%2][j] = dp[(i+1)%2][j-1];
            else
            dp[i%2][j] = false;
        }
    }
    return dp[n%2][m];
}
int main()
{
    string P,S;
    cout<<"Enter Pattern :";cin>>P;
    cout<<"Enter Name :";cin>>S;
    if(PattMatch(S,P))
    cout<<"MATCHED";
    else
    cout<<"NOT MATCHED";
}