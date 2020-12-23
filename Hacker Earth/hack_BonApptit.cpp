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
int main()
{
	boost;
	v v1;
	ll n,k,b,a,sum=0,ans=0;
	cin>>n>>k;
	forn(i,n)
	{
		cin>>a;
		v1.pb(a);
		sum+=a;
	}
	cin>>b;
	//cout<<v1[k]<<" "<<sum<<endl;
	ans=(sum-v1[k])/2;
	
	if(ans==b)
	{
		cout<<"BOn Appetit"<<endl;
	}
	else
	{
		cout<<b-ans<<endl;
	}
	
	
	
	return 0;
}
