//https://leetcode.com/problems/perfect-squares/

#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int dp[1000000];
vector<int> v;
int perfect(int n) {
    if(n==0)return 0;
    if(n<0)return INT_MAX-1;
    if(dp[n]!=-1)return dp[n];
    int mx=INT_MAX-1;
    for(int i=1;i*i<=n;i++)
    {
        mx = min(1+perfect(n-(i*i)),mx);
    } 
    return dp[n] = mx;
}
int main() {
	int n;cin>>n;
    for(int i=1;i*i<=n;i++)
    v.pb(i*i);
    int mx=-1;
    memset(dp,-1,sizeof(dp));
    cout<<perfect(n);
	return 0;
}	