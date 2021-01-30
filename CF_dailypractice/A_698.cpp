#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];

        int l=0,r=n-1;
        int cnt=1;
        while(l<r)
        {
            if(arr[l]==arr[l+1])
            {cnt++; l++;}
            if(arr[r]==arr[r-1])
            {cnt++; r--;}
        }


        cout<<"\n";
    }
    return 0;
}