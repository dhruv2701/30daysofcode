#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;cin>>n;
    int x;
    ll ans=0;
    int cnt=0, zero=0;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x<0)
        {ans+=abs(x+1); cnt++;}
        else if(x==0)
        {ans+=abs(x-1); zero++;}
        else
        {ans+=x-1;}
    }
    if(cnt%2==1 && zero==0)
    cout<<ans+2;
    else
    cout<<ans;
    
    
    return 0;
}