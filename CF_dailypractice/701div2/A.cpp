#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int a,b;cin>>a>>b;
        int ans=0;
        if(a==b){cout<<2<<"\n";continue;}
        ans = INT_MAX;
        int A,B,cnt;
        for(int i=0;i<=29;i++)
        {
            B = b + i;
            if(B==1)continue;
            cnt = i;
            A = a;
            while(A!=0)
            {
                A=A/B;
                cnt++;
            }
            ans = min(ans,cnt);
        }
        cout<<ans<<"\n";
    }
        
    return 0;
}