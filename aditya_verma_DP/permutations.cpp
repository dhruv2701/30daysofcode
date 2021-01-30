#include<bits/stdc++.h>
using namespace std;
bool choice[5]={false};
vector<string> ans1;
vector<char> ans;
string arr;
void perm()
{
    if(ans.size()==arr.size())
    {
        for(auto it: ans)
        cout<<it;
        cout<<" ";
        return ;
    }
    for(int i=0;i<arr.size();i++)
    {
        if(choice[i])continue;
        choice[i]=true;
        ans.push_back(arr[i]);
        perm();
        choice[i]=false;
        ans.pop_back();
    }
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        cin>>arr;
        sort(arr.begin(),arr.end());
        ans.clear();
        memset(choice,false,sizeof(choice));
        //perm();
        do{
            ans1.push_back(arr);
        }
        while(next_permutation(arr.begin(),arr.end()));
        for(int i=0;i<ans1.size();i++)
        {
            cout<<"[";
            for(auto it: ans1[i])
            cout<<it<<" ";
            cout<<"]";
            cout<<"\n";
        }
    }
}