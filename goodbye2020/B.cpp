#include<bits/stdc++.h>
using namespace std;
#define s second
#define f first
int main()
{
  int t;cin>>t;
  while(t--)
  {
    int n,k;cin>>n>>k;
    int arr[n];
    unordered_map<int,int> mp;
    bool mark[200005];
    memset(mark,false,sizeof(mark));
    int cnt=0;
    for(int i=0;i<n;i++)
    {
      cin>>arr[i]; 
      if(!mark[arr[i]]){cnt++;mark[arr[i]]=true;}
      else if(mark[arr[i]] && !mark[arr[i]+1])
      {cnt++;
      mark[arr[i]+1]=true;}
    }
    cout<<cnt<<"\n";
  
  }
}  