#include<bits/stdc++.h>
using namespace std;
#define s second
#define f first
int main()
{
  int t;cin>>t;
  while(t--)
  {
    string arr;cin>>arr;
    int n=arr.length();
    int cnt=0; 
    
    for(int i=1;i<n;i++)
    {
      if(arr[i]==arr[i-1] && 'a'<=arr[i]<='z')
      {arr[i]='A';cnt++;}
      else if(arr[i]==arr[i-2] && 'a'<=arr[i]<='z')
      {arr[i]='A';cnt++;}
    
    }
    cout<<cnt;
    cout<<"\n";
  }
}  