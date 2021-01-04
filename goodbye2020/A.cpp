#include<bits/stdc++.h>
using namespace std;
#define s second
#define f first
int main()
{
  int t;cin>>t;
  while(t--)
  {
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    bool mark[51];
    memset(mark,false,sizeof(mark));
    
    for(int i=1;i<n;i++)
    {
        int k = arr[i];
        for(int j=i-1;j>=0;j--)
        {
           int ans = abs(k-arr[j]);
           mark[ans]=true;
        }
    }
    int cnt=0;
    for(int i=1;i<=49;i++)
    {
        if(mark[i])
        cnt++;
    }
    cout<<cnt<<"\n";
  }
}  