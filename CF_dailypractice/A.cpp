//https://codeforces.com/contest/1474/problem/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        string b;
        cin>>b;
        int prev;
        if(b[0]=='1'){cout<<1;prev=2;}
        else if(b[0]=='0'){cout<<1;prev=1;}
        for(int i=1;i<n;i++)
        {
            prev=prev-(b[i]-'0');
            if(prev==2 || prev<0)
            {cout<<1;   prev=1+(b[i]-'0');}
            else
            {   
                int one = 1;
                int ans = prev^one;
                cout<<ans; 
                prev=ans+(b[i]-'0');
            }
        }
        cout<<"\n";
    }
}