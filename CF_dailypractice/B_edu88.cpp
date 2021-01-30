#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,m,x,y;
        cin>>n>>m>>x>>y;
        char arr[n][m];
        int temp[n][m];
        memset(temp,0,sizeof(temp));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>arr[i][j];
                if(arr[i][j]=='.')
                {
                    if(j>0)
                    temp[i][j]=temp[i][j-1]+1;
                    else
                    temp[i][j]=1;
                }
                
                else
                temp[i][j]=0;
            }
        }
        ll ans = 0;
        for(int i=0;i<n;i++)
        {
            for(int j=m-1;j>=0;j--)
            {
                if(j==m-1 && arr[i][j]=='.')
                {
                    int z = temp[i][j];
                    int ans1 = x*z;
                    if(z%2==0)
                    ans+=min(ans1,(z/2)*y);
                    else
                    ans+=min(ans1,((z-1)/2)*y + x);
                }

                if(arr[i][j]=='*' && j>0)
                {
                   int z = temp[i][j-1];
                   int ans1 = z*x;
                   if(z%2==0)
                   ans+=min(x*z,(z/2)*y);
                   else
                   ans+=min(ans1,((z-1)/2)*y + x);
                }
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}
