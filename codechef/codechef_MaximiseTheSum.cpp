#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll tt;
	cin>>tt;
	
	while(tt--)
	{
		ll n;
		cin>>n;
		ll a[n];
		for(ll i=0;i<n;i++)
		{
			cin>>a[i];
		}
		
		sort(a,a+n);
		/*for(int i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}*/
		ll j=n-1,sum=0;
		for(ll i=0;i<=j;i++,j--)
		{
			sum+=abs(a[i]-a[j]);
		}
		cout<<sum<<endl;
	}
	
}
