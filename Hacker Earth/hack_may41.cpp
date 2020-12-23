#include<bits/stdc++.h>
#define ll long long
#define st stack<ll>
#define v vector<ll>
#define s set<ll>
#define p pair<ll,ll>
#define mp map<char,ll>
#define us unordered_set<ll>
#define pq priority_queue<ll>
#define q queue<ll>
#define pb push_back
#define forn(i,n) for(ll i=0;i<n;i++)
#define pf push_front
#define ull unsigned long long
#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
ll maxDivisor(ll n1)
{
	for(ll j=2;j<=sqrt(n1);j++)
	{
		if(n1%j==0)
		{
			ll k=n1/j;
			if(k!=0)
			{
				return k;
			}
			else
			{
				continue;
			}
		}
	}
	return 1;
}
int main()
{
	boost;
	ll t,n,k,sum=0;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		for(ll i=1;i<=n;i++)
		{
			if(i%k!=0)
			{
				sum+=i;
			}
			else
			{
				sum+=(maxDivisor(i));
			}
		}
		
		cout<<sum<<endl;
		
	}
	
	return 0;
}
