#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,k;
		cin>>n>>k;
		if(n<k*k)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			if((n%2)!=(k%2))
			{
				cout<<"NO"<<endl;
			}
			else
			{
				cout<<"YES"<<endl;
			}
		}
	}
	return 0;
}
