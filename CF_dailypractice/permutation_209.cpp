#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n-k;i++)
    {
        cout<<2*i+1<<" "<<2*i+2<<" ";
    }
    for(int i=n-k;i<n;i++)
    {
        cout<<2*i+2<<" "<<2*i+1<<" ";
    }
    return 0;
}