//https://leetcode.com/problems/arithmetic-slices

#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
int n;
int main() {
	cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int cnt=0;
    int s=0;
    for(int i=2;i<n;i++)
    {
        if(arr[i]-arr[i-1]==arr[i-1]-arr[i-2])
        {
            cnt++;
            s+=cnt;
        }
        else
        {
            cnt=0;
            s+=cnt;
        }
    }
    cout<<s;
	return 0;
}	