#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> subset;
vector<vector<int>> ans;
int arr[4];
void solve(int k)
{   
    if(k==n)
    {
        ans.push_back(subset);
        return;
    }
    
    subset.push_back(arr[k]);
    solve(k+1);

    subset.pop_back();
    solve(k+1);
}
int main()
{
    cin>>n;
    //solve(0);
    for(int i=0;i<n;i++)
    cin>>arr[i];
    for(int i=0;i<(1<<n);i++)
    {
        subset.clear();
        for(int j=0;j<n;j++)
        {
            if(i&(1<<j))
            subset.push_back(j+1);
        }
        ans.push_back(subset);
    }
    for(int i=0;i<ans.size();i++)
    {
        cout<<"[";
        for(auto it: ans[i])
        cout<<it<<",";
        cout<<"]";
        cout<<"\n";
    }
    return 0;
}