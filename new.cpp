#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
#define ll long long
#define mp make_pair
#define pb push_back
#define pii pair<int,int>
#define vi vector<int> 
#define mii map<int,int>
#define mod 1000000007
#define inf 1e18
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   
   int t;cin>>t;
   while(t--)
   {
       int n,k;cin>>n>>k;
       int arr[n+1];
       for(int i=1;i<=n;i++)
       cin>>arr[i];
       sort(arr+1,arr+n+1);
       reverse(arr+1,arr+n+1);
       ll sum=0;
       int i,idx;
       for(i=1;i<=n;i++)
       cout<<arr[i]<<" ";
       cout<<"\n";
       for(i=1;i<=n;i++)
       {
            sum+=arr[i];
            if(sum>=k)
            {idx = i; break;}
       }
       if(i==n+1){cout<<-1;}
       else{
        sum=0;
        for(i=idx+1;i<=n;i++)
        {
            sum+=arr[i];
            if(sum>=k)
            break;
        }
        if(i==n+1)
        cout<<-1;
        else
        cout<<i;
       }
       cout<<"\n";
   }
   return 0;
}