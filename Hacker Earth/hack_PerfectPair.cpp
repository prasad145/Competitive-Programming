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
#define pf push_front
#define ull unsigned long long
#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
	boost;
	ll t;
	vector<pair<ll,ll> > v1;
	cin>>t;
	ll n;
	ll a[n];
	while(t--)
	{
		cin>>n;
		for(ll i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		for(ll i=1;i<n;i++)
		{
			for(ll j=i+1;j<=n;j++)
			{
				ll sum=a[i]+a[j];
				long double m=sqrt(sum);
				if(floor(m)-m==0)
				{
					cout<<a[i]<<" "<<a[j]<<endl;
				}
				
			}
		}
		
		
	}
	
	return 0;
}
