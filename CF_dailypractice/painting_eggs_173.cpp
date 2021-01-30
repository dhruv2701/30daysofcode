//https://codeforces.com/contest/282/problem/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    ll a, g;
    ll Sa=0, Sg=0;
    string s="";
    for(int i=0;i<t;i++)
    {
        cin>>a>>g;
        if(abs((Sa+a)-Sg)<=500){Sa+=a;s+="A";}
        else if(abs((Sg+g)-Sa)<=500){Sg+=g;s+="G";}
        else
        {cout<<-1;return 0;}
        
    }
    cout<<s;
    return 0;
}