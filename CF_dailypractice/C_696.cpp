//https://codeforces.com/contest/1474/problem/C
#include<bits/stdc++.h>
using namespace std;
#define f first
#define s second
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int> arr(2*n);
        for(int i=0;i<2*n;i++)
        cin>>arr[i];
        sort(arr.begin(),arr.end());

        int A=-1;
        vector<pair<int,int>> ans;
        for(int i=0;i<2*n-1;i++)
        {
            bool ok=true;
            int x = arr[i] + arr[2*n-1];
            multiset<int,greater<>> s(arr.begin(),arr.end());
            vector<pair<int,int>> v;
            for(int i=0;i<n;i++)
            {
                int now = *s.begin();
                s.erase(s.begin());
                auto it=s.find(x-now);
                if(it==s.end())
                {ok=false;break;}
                else{
                    v.emplace_back(x-now,now);
                    s.erase(it);
                    x=now;
                }
            }
            if(ok)
            {
                A = arr[i]+arr[2*n-1];
                ans=v;
                break;
            }
        }
        if(A==-1)
        cout<<"NO";
        else{
            cout<<"YES"<<"\n";
            cout<<A<<"\n";
            for(auto it: ans){cout<<it.f<<" "<<it.s<<"\n";}
        }
        cout<<"\n";
    }
    return 0;
}