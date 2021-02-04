#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        int n, k;cin>>n>>k;
        if(n==1 || k==1){cout<<k<<"\n";continue;}
        if(n>k){
            k = n%k==1 ? k*((n/k)+1) : k*(n/k);
        }
        cout<<k<<" ";
        int ans =1;
        while(1){
            if((n*ans)<k)
            ans++;
            else
            break;
        }
        cout<<ans<<"\n";
    }
    return 0;
}