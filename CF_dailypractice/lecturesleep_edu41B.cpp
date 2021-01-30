//https://codeforces.com/problemset/problem/961/B
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n,k;cin>>n>>k;
    int arr[n], t[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];

    for(int i=0;i<n;i++)
    cin>>t[i];

    ll ans =0;
    for(int i=0;i<n;i++)
    {
        if(t[i]==1)
        {ans+=arr[i];   arr[i]=0;}
    }
    ll sum = 0;
    for(int i=0;i<k;i++)
    sum+=arr[i];
    ll mx = sum;
    for(int i=1;i<=n-k;i++)
    {
        sum=sum-arr[i-1]+arr[i+k-1];
        mx=max(mx,sum);
    }
    cout<<ans+mx;
    return 0;
}