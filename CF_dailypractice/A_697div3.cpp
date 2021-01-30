#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        string s = to_string(n);
        if(s.size()>=4 && s[0]==s[2] && s[0]%2==0)
        cout<<"YES";
        else cout<<"NO";
        cout<<"\n";
    }


    return 0;
}