#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;cin>>t;
    while(t--)
    {
        bool arr[26]={false};
        unordered_map<char,int> mp;
        string s;
        cin>>s;
        int n = s.length();
        if(n==1){cout<<s[0];}
        else{
            mp[s[0]]++;
            arr[s[0]]=true;
            for(int i=1;i<n;i++)
            {
                mp[s[i]]++;
                if(mp[s[i]]==1)
                arr[s[i]-'a']=true;
                else if(mp[s[i]]>1 && s[i]!=s[i-1])
                arr[s[i]-'a'] = true;
                else if(mp[s[i]]>1 && s[i]==s[i-1])
                arr[s[i]-'a'] = false;
                
            }
            for(int i=0;i<26;i++)
            {
                if(arr[i])
                cout<<char(i+'a');
            }
        }
    }
    return 0;
}