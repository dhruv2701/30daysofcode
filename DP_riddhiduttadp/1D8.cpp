//https://www.hackerearth.com/practice/algorithms/dynamic-programming/introduction-to-dynamic-programming-1/practice-problems/algorithm/number-of-rs-1/

#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		string s;
	    cin>>s;
		int n=s.length();
		int cnt=0;
		vector<int> v;
		for(int i=0;i<n;i++)
		{
			if(s[i]=='R')
			cnt++;
			if(s[i]=='R')
			v.pb(-1);
			else 
			v.pb(1);
		}
		int sum_sofar=INT_MIN;
		int sum_endhere=0;
		for(int i=0;i<n;i++)
		{
			sum_endhere=sum_endhere+v[i];
			if(sum_sofar<sum_endhere)
			sum_sofar=sum_endhere;
			if(sum_endhere<0)
			sum_endhere=0;
		} 
		cout<<sum_sofar+cnt<<"\n";
	}	


	return 0;
}	