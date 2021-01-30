//https://codeforces.com/contest/919/problem/B

#include<bits/stdc++.h>
using namespace std;
bool ans(int n){
    int rem=0;
    while (n>0)
    {
        rem+=n%10;
        n/=10;
    }
    return rem==10;
}
int main()
{
    int k;cin>>k;
    int num=19;

    for(int i=1;i<k;i++)
    {
        num+=9;
        while(!ans(num))
        num+=9;
    }
    cout<<num;
    return 0;
}