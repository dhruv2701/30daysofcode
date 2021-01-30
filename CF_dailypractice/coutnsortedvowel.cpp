#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;cin>>n;
    int arr[5];
    for(int i=0;i<5;i++)
    arr[i]=1;
    ll sum=0;
    if(n==1)
    {cout<<5;return 0;}
    else{
    for(int i=2;i<=n;i++)
    {
        for(int i=3;i>=0;i--)
        {
            arr[i]+=arr[i+1];
        }
    }           
    for(int i=0;i<5;i++)
    sum+=arr[i];
    } 
    cout<<sum;
    return 0;
}