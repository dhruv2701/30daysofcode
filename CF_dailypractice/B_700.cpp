#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;cin>>t;
    while(t--){
        ll x,y;
        int n;
        cin>>x>>y>>n;
        int A[n],H[n];
        for(int i=0;i<n;i++)
        cin>>A[i];
        for(int i=0;i<n;i++)
        cin>>H[i];
        ll sum = *max_element(A,A+n);
        for(int i=0;i<n;i++)
        {
            ll ans;
            ans = (H[i]+x-1)/x;
            y=y-(ans*A[i]);
        }
        
        if(y+sum<=0)cout<<"NO";
        else cout<<"YES";
        cout<<"\n";
        
    }
    return 0;
}