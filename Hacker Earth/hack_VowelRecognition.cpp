#include<bits/stdc++.h>
using namespace std;
#define ll long int
int main()
{
	ll t;
	cin>>t;
	
	while(t--)
	{
		string s;
		cin>>s;
		ll n=s.length();
		ll sum=0;
		for(ll i=0;i<n;i++)
		{
			if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
			{
				sum+=(n-i)*(i+1);
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}

