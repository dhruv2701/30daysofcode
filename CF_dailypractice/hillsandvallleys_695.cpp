//https://codeforces.com/contest/1467/problem/B
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f first
#define s second
const int N = 3e5;
int arr[N], n;
int ishOrv(int i)
{
    return (i>0 && i<n-1 && ( (arr[i-1]<arr[i] && arr[i+1]<arr[i]) || (arr[i-1]>arr[i] && arr[i+1]>arr[i]) ) );
}
int main()
{
    ios::sync_with_stdio(false);
    int t;cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        cin>>arr[i];  

        int s=0;
        int is[n]={0};
        for(int i=1;i<n-1;i++)
        {
            if(ishOrv(i)==1)
            {is[i]=1; s++;}
        }  
        int ans=s;

        for(int i=1;i<n-1;i++)
        {
            int temp=arr[i];
            int prev=is[i-1]+is[i]+is[i+1];

            arr[i]=arr[i-1];
            ans=min(ans, s-prev+ishOrv(i-1)+ishOrv(i)+ishOrv(i+1));

            arr[i]=arr[i+1];
            ans=min(ans, s-prev+ishOrv(i-1)+ishOrv(i)+ishOrv(i+1));

            arr[i]=temp;

        }  
        cout<<ans<<"\n";
    }
    return 0;
}    