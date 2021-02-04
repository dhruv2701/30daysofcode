#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long 
int main()
{
    int t;cin>>t;
    while(t--)
    {
        ll n;cin>>n;
        ll powof2 = log2(n);
        ll x = 1LL<<powof2;
        ll ans = 0;
        ans = (n%2==0) ? n/2 : (n/2)+1;
        n=n-ans;
        if(n<=0)
        {cout<<ans<<"\n";continue;}
       
        for(int i=1;1LL<<i<=x && n>0;i++)
        {
            ll bits = log2(1LL<<i)+1;
            if(n%2==0)
            {   
                n=n/2;
                ans+=(bits*n);
            }
            else{
                ans+=(bits*((n/2)+1));
                n=n/2;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}