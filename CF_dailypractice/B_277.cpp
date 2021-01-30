#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;cin>>n>>m;
    int a[n],b[m];
    unordered_set<int> mpa;
    unordered_set<int> mpb;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        mpa.insert(a[i]);
    }

    for(int i=0;i<n;i++)
    {
        cin>>b[i];
        mpb.insert(b[i]);
    }
    for(auto it: mpa)
    cout<<it<<" ";

}