#include<bits/stdc++.h>
using namespace std;
#define ll long long
int prime[1000001]={0};
int size =1000000;
void sieve(){
    prime[1]=1;
    for(int i=2;i<=size;i++)
    prime[i]=i;
    for(int i=4;i<=size;i+=2)
    prime[i]=2;

    for(int i=3;i*i<=size;i++)
    {
        if(prime[i]==i)
        {
            for(int j=i*i;j<=1000000;j+=2*i)
            {
                if(prime[j]==j)
                prime[j]=i;
            }
        }
    }
}
int main()
{
    sieve();
    int t;cin>>t;
    while(t--)
    {
        int x,y;cin>>x>>y;
        if(x==1)cout<<"Chef";
        else{
            int div = 0;
            while(x!=1){
                div++;
                x=x/prime[x];
            }
            if(div<=y)cout<<"Divyam";
            else cout<<"Chef";
        }
        cout<<"\n";
    }
    return 0;
}