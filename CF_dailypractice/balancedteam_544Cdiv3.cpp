//https://codeforces.com/problemset/problem/1133/C
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];

    sort(arr,arr+n);

    int ans=0;
    int j=0;
    for(int i=0;i<n;i++)
    {
        while(j<n && (arr[j]-arr[i])<=5)
        {
            j++;
        }
        ans = max(ans,j-i);
    }
    cout<<ans;
    return 0;
}