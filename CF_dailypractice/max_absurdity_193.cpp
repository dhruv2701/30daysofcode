#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    vector<ll> v;
    for(int i=0;i<n;i++)
    cin>>arr[i];
 
    ll sum=0;
    for(int i=0;i<k;i++)
    sum+=arr[i];
    v.pb(sum);
    for(int i=1;i<n-k+1;i++)
    {
        sum=sum-arr[i-1]+arr[i+k-1];
        v.pb(sum);
    }
    int m = v.size();
    ll mxa=-1, mxb=-1;
    int idxa=0, idxb=0;
    for(int i=m-k-1; i>=0; i--)
    {
        if(mxa <= v[i])
        {
            mxa=v[i];
            idxa=i;
        }
        if(mxb<=v[i+k] && idxb>idxa)
        {
            mxb=v[i+k]; 
            idxb=i+k;
        }
        
    }
 
    cout<<idxa+1<<" "<<idxb+1;
    return 0;
} 