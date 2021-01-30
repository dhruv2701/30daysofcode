#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--)
    {
        vector<pair<char,int>> v;
        string s;cin>>s;
        for(int i=0;i<s.length();i++)
        {
            if(v.empty() || v.back().first!=s[i])
            v.push_back(make_pair(s[i],1));
            else
            v.back().second++;
        }
        for(auto x : v)
        cout<<x.first<<" "<<x.second<<"\n";
    }
    return 0;
}