#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
	boost;
	ll n,k;
	cin>>n>>k;
	ll max=0;
	ll a[n];
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	if(n==1 && k%2==1)
	{
		cout<<-1<<endl;
	}
	else if(k>=n)
	{
		cout<<max<<endl;
	}
	else
	{
		priority_queue<ll> pq;
		for(ll i=0;i<k-1;i++)
		{
			pq.push(a[i]);
		}
		if(pq.top()>a[k])
		{
			cout<<pq.top()<<endl;
		}
		else
		{
			cout<<a[k]<<endl;
		}
	}
	
	
	return 0;
}
