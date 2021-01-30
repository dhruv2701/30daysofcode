//https://codeforces.com/contest/276/problem/C
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f first
#define s second
int main()
{
    ios::sync_with_stdio(false);
    int n,q;cin>>n>>q;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }    
    sort(arr,arr+n);
    int l,r;
    int temp[n+1]={0};
    for(int i=0;i<q;i++)
    {
        cin>>l>>r;
        l--;r--;
        temp[l]+=1;
        temp[r+1]-=1;
    }
    for(int i=1;i<n;i++)
    temp[i]+=temp[i-1];
    sort(temp,temp+n);
    ll ans=0;
    for(int i=0;i<n;i++)
    ans+=(ll)arr[i]*temp[i];
    cout<<ans;
}