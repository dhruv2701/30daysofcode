//https://codeforces.com/contest/1473/problem/B
#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if(b==0)
    return a;

    return gcd(b, a%b);
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s,t;cin>>s>>t;
        int n=s.length(), m=t.length();
        int lcm = (n*m)/(gcd(n,m));
        int a = lcm/n;
        int b = lcm/m;
        string lcms="", lcmt="";
        for(int i=0;i<a;i++)
        lcms+=s;
        for(int i=0;i<b;i++)
        lcmt+=t;

        if(lcms==lcmt)
        cout<<lcms;
        else
        cout<<-1;
        cout<<"\n";
    }    
}