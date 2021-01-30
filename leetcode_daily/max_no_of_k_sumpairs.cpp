#include<bits/stdc++.h>
using namespace std;
#define f first
#define s second
int main()
{
    int n,k;cin>>n>>k;
    int x;
    unordered_map<int,int> mp;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        mp[arr[i]]++;
    }    
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==k-arr[i] && mp[k-arr[i]]>1)
        {
            mp[arr[i]]=mp[arr[i]]-2; 
            cnt++;
        }
        else if(mp[k-arr[i]]>0 && mp[arr[i]]>0 && arr[i]!=k-arr[i])
        {
            mp[arr[i]]=mp[arr[i]]-1;
            mp[k-arr[i]]=mp[k-arr[i]]-1;
            cnt++;
        }
    }
    cout<<cnt;
}