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
#define forn(i,n) for(ll i=0;i<n;i++)
#define ull unsigned long long
#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
	boost;
	v v1,v2;
    pq v3;
	ll b,n,m,a;
	cin>>b>>n>>m;
	forn(i,n)
	{
		cin>>a;
		v1.pb(a);
	}
	forn(i,m)
	{
		cin>>a;
		v2.pb(a);
	}
	ll ans=0;
	for(ll i=0;i<n;i++)
	{
		for(ll j=0;j<m;j++)
		{
			ans=v1[i]+v2[j];
			if(ans<=b)
			{
				v3.push(ans);
			}
		}
	}
	if(v3.empty()) cout<<-1<<endl;
	else
	cout<<v3.top()<<endl;
	
	return 0;
}
