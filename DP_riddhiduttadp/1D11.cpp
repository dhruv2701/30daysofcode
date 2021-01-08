//https://practice.geeksforgeeks.org/problems/consecutive-1s-not-allowed1912/1 

#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
ll dp[100005];
int n;

ll cnt=0;
ll _1snot(int m,char s[])
{
    if(m==n-1)return 1;
    if(dp[m]!=-1)
    return dp[m];
    if(s[m-1]=='0')
    cnt+= _1snot(m+1, s+'0') + _1snot(m+1, s+'1');
    else
    cnt+= _1snot(m+1, s+'0');
}
int main() {
	cin>>n;
    memset(dp,-1,sizeof(dp));
    char str[n];
    str[0]='0';
    ll ans = _1snot(0, str);
    cout<<ans;
	return 0;
}	