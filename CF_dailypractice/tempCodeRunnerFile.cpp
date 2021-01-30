//https://codeforces.com/problemset/problem/1305/B
#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
    vector<int> pre, suf;
    int n = s.size();
    int l=0, r=n-1;
    while(l<r)
    {
        while(l<n && s[l]==')')
        l++;
        while(r>=0 && s[r]=='(')
        r--;
        if(l<n && r>=0 && l<r)
        {
            pre.push_back(l+1);
            suf.push_back(r+1);
            l++;
            r--;
        }
    }
    if(pre.empty())
    cout<<"0";
    else{
        cout<<1<<"\n";
        cout<<2*pre.size()<<"\n";
        for(auto x : pre)
        cout<<x<<" ";
        for(auto x : suf)
        cout<<x<<" ";

    }


	return 0;
}