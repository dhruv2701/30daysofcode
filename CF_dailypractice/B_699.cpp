#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while (t--)
    {
        int x,y;cin>>x>>y;
        string s;cin>>s;
        int L=0,R=0,U=0,D=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='L')L++;
            else if(s[i]=='R')R++;
            else if(s[i]=='U')U++;
            else if(s[i]=='D')D++;
        }
        int xneed, yneed;
        if(x>0 && y>0 && R>=x && U>=y)cout<<"YES";
        else if(x>0 && y<0 && R>=x && D>=(-y) && D>0)cout<<"YES";
        else if(x<0 && y>0 && L>=(-x) && U>=y && L>0)cout<<"YES";
        else if(x<0 && y<0 && L>=(-x) && D>=(-y) && D>0 && L>0)cout<<"YES";
        else cout<<"NO";
        cout<<"\n";
    }
    





    return 0;
}