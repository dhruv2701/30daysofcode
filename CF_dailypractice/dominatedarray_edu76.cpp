#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int arr[n];
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            mp[arr[i]]=i;
        }
        int ans =INT_MAX-1;
        for(int i=0;i<n;i++)
        {
            if(mp[arr[i]]!=i)
            ans = min(ans, mp[arr[i]]-i+1);
        }
        if(ans == INT_MAX-1)
        cout<<-1;
        else
        cout<<ans<<"\n";
    }
    
    return 0;
}