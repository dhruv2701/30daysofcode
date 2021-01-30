//https://codeforces.com/contest/1474/problem/B
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long 

bool checkPrime(ll n)
{
    if(n==2 || n==3)return true;
    for(ll i=2;i*i<=n;i++)
    {
        if(n%i==0)
        return false;
    }
    return true;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int d;
        cin>>d;
        ll ans = 1;
        ll temp = d+1;
        int cnt=0;
        while(true)
        {
            if(cnt==2)
            break;
            if(checkPrime(temp))
            {
                cnt++;
                ans=ans*temp;
                temp=temp+d;
                
            }
            else
            temp++;
        }
        cout<<ans<<"\n";
    }
    
    return 0;
}