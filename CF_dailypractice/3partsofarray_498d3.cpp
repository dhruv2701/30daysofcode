#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];

    int l=0,r=n-1;
    ll sum1 = arr[0];
    ll sum3 = arr[n-1];
    ll sum  = 0;
    while(l<r)
    {
        if(sum1 == sum3)sum=max(sum, sum1);
        if(sum1<sum3)
        sum1+=arr[++l];
        else 
        sum3+=arr[--r];
    }
    cout<<sum;

    return 0;
}