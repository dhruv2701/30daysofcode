#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> W(n), L(n);
        for(int i=0;i<n;i++)
        cin>>W[i];
        for(int i=0;i<n;i++)
        cin>>L[i];
        vector<pair<int,pair<int,int>>> dis;

        for(int i=0;i<n;i++)
        dis.push_back(make_pair(W[i],make_pair(i,L[i])));
        
        sort(dis.begin(),dis.end());
        for(auto it:dis)
        cout<<it.first<<":"<<it.second.first<<" "<<it.second.second<<"\n";
        
        int lastindexused = n-1;
        int hits = 0;
        for(int i=1;i<dis.size();i++)
        {
            int num=0;
            if(dis[i].second.first < dis[i-1].second.first)
            {
                num=1;
                int ans=dis[i].second.first + dis[i].second.second;
                while(ans<=lastindexused)
                {
                    num++;
                    ans = ans+dis[i].second.second;
                }
                lastindexused = ans;
                dis[i].second.first = lastindexused;
            }
            hits+=num;
        }
        cout<<hits<<"\n";
    }
    return 0;
}