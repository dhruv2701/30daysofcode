//https://codeforces.com/contest/1473/problem/C
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        
        int d=n-k+1;
        for(int i=1;i<=k-d;i++)
        cout<<i<<" ";
        while(d>=1)
        {
            cout<<k<<" ";
            k--;
            d--;
        }
        cout<<"\n";
    }
    return 0;
}