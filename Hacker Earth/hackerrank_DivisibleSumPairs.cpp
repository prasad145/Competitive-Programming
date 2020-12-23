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
	ll t,k,a;
	v v1;
	ll count=0;
	vector<pair<ll,ll> > v2;
	cin>>t>>k;
	while(t--)
	{
		cin>>a;
		v1.pb(a);
	}
	for(ll i=0;i<v1.size();i++)
	{
		for(ll j=i+1;j<v1.size();j++)
		{
			if((v1[i]+v1[j])%k==0)
			{
				count++;
			}
		}
	}
	cout<<count<<endl;
	return 0;
}
