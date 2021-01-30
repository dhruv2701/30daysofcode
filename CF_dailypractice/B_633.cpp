#include<bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int> s;
    int x;
    for(int i=0;i<6;i++)
    {cin>>x;s.insert(x);}
    for(auto it: s)
    cout<<it<<" ";
}