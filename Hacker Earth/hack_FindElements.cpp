#include<bits/stdc++.h>
#include<unordered_set>
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
int main()
{
	boost;
	ll n,m;
	us<ll> s1;
	s::iterator it;
	ll *a=new ll(n);
	cin>>n;
	forn(i,n)
	{
		cin>>a[i];	
	}
	sort(a,a+n);
	cin>>m;
	forn(i,n)
	{
		s1.insert(a[i]);
	}
	delete [] a;
	ll *a1=new ll(m);
	forn(i,n)
	{
		cin>>a1[i];	
	}
	sort(a1,a1+n);
	forn(i,n)
	{
		s1.insert(a1[i]);
	}
	
			
	return 0;

}
