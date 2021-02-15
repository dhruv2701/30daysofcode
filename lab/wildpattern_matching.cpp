//Time Complexity - O(n*m)
//Space Complexity - O(n*m).
#include<bits/stdc++.h>
using namespace std;
bool PattMatch(string &S,string &P)
{
    int n=S.length();
    int m=P.length();

    bool dp[n+1][m+1];
    memset(dp,false,sizeof(dp));

    dp[0][0] = true;          // empty pattern can match with empty string
    for(int i=1;i<=m;i++)
    {
        if(P[i-1]=='*')       // Only '*' can match with empty string
        dp[0][i]=dp[0][i-1];
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(P[j-1]=='*')                                  //We ignore ‘*’ character and move to next  character in the pattern,
            dp[i][j] = dp[i-1][j] || dp[i][j-1];            // '*' character matches with ith character in input
            
            else if(S[i-1]==P[j-1] || P[j-1]=='?')          
            dp[i][j] = dp[i-1][j-1];
        }
    }
    return dp[n][m];
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