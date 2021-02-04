#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        int n, k;cin>>n>>k;
        if(n==1 || k==1){cout<<k<<"\n";continue;}
        int m = k;
        int z = 2;
        while(n>m)
        {
            m = k*z;
            z++;
        }
        cout<<m<<" ";
        int ans =1;
        while(1){
            if((n*ans)<m)
            ans++;
            else
            break;
        }
        cout<<ans<<"\n";
    }
    return 0;
}