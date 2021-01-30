//https://codeforces.com/contest/279/problem/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,t;cin>>n>>t;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    for(int i=1;i<n;i++)
    arr[i]+=arr[i-1];
    
    cout<<upper_bound(arr,arr+n,t)-arr;

    return 0;
}