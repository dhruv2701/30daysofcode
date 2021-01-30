//https://codeforces.com/contest/633/problem/A
#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if(b==0)
    return a;
    return gcd(b,a%b);
}
int main()
{
    int a,b,c;cin>>a>>b>>c;
    if(c%gcd(a,b)==0)     //linear diophantine eq
    cout<<"YES";
    else
    cout<<"NO";
}