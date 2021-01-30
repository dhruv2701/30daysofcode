//https://codeforces.com/contest/279/problem/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
vector<int> v;
bool prime[100005];
void sieve()
{
    memset(prime,false,sizeof(prime));
    prime[0]=prime[1]=true;
    for(int i=2;i<=100005;i++)
    {
        if(!prime[i])
        {
            v.pb(i);
            for(int j=2*i;j<=100005;j+=i)
            prime[j]=true;
        }
    }
}
int upper(int n)
{
    int l=0,r=v.size();
    int mid,ans;
    while(l<=r)
    {
        mid=l+(r-l)/2;
        if(v[mid]<n)
        {
            l=mid+1;
        }
        else
        {
            ans=v[mid];
            r=mid-1;
        }
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sieve();
    int n,m;cin>>n>>m;
    int arr[n][m];
    ll best1=INT_MAX-1, best2=INT_MAX-1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        cin>>arr[i][j];
    }

    for(int i=0;i<n;i++)
    {
        ll ans=0;
        for(int j=0;j<m;j++)
        {
            ans+=upper(arr[i][j])-arr[i][j];
        }
        best1=min(best1, ans);
    }
    for(int i=0;i<m;i++)
    {
        ll ans=0;
        for(int j=0;j<n;j++)
        {
            ans+=upper(arr[j][i])-arr[j][i];
        }
        best2=min(best2, ans);
    }
    cout<<min(best1,best2);
    
    return 0;
}