#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,buget;
        cin>>n>>buget;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        sort(arr,arr+n);
        int i,cnt=0;
        for(i=0;i<n;i++)
        {
            cnt+=arr[i];
            if(cnt>buget)
            break;
        }
        cout<<"Case #"<<t+1<<": "<<i<<"\n";
    }
    return 0;
}