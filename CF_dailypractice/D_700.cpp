#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;cin>>n;
    unordered_map<int,int> mp;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        mp[x]++;
    }
    ll ans  = 0;
    for(auto it:mp){
        if(it.second>1)
        ans+=2;
        else if(it.second==1)
        ans++;
    }
    cout<<ans;
    return 0;
}