#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string s;cin>>s;
    int n = s.length();
    ll sum = 0;
    for(int i=0;i<n-1;i++)
    {
        int temp = s[i]-'0';
        sum += temp;
        for(int j=i+1;j<n;j++)
        {
            temp = (temp*10)+(s[j]-'0');
            sum+=temp;
        }
    }
    cout<<sum+(s[n-1]-'0');
    return 0;
}