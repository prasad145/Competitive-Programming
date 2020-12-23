#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int n=s.length();
		if(n>10)
		{
			cout<<s[0]<<n-2<<s[n-1]<<endl;
		}
		else
		{
			cout<<s<<endl;
		}
	}
}
