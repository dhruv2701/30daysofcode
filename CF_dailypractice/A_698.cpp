#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        long x;cin>>x;
        int dig = log2(x);
        long res = 0;
        for(int i=dig;i>=0;i--)
        {
            if(x&(1L<<i))continue;
            else{
                res+=(1L<<(i+1))-(1L<<i);
            }
            
        }
        cout<<res<<"\n";
    }
    return 0;
}