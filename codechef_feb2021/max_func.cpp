#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	// your code goes here
	int t;cin>>t;
	while(t--)
	{
	    int n;cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    sort(arr,arr+n);
	    ll mx=0;
        ll sum=0;
	    for(int i=1;i<n-1;i++)
	    {
            sum = abs(arr[i]-arr[0])+abs(arr[n-1]-arr[i]);
	        mx=max(sum,mx);
	    }
	    cout<<mx+arr[n-1]-arr[0]<<"\n";
	}
	return 0;
}
