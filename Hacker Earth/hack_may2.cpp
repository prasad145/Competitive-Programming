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
/*ll modfact(ll n1)
{
	if(n1>10)
	return 0;
	ll result=1;
	for(ll i=1;i<=n1;i++)
	{
		result=(result*i)%10;
	}
	return result;
	
}*/
int main()
{
	boost;
	ll t,n,v1;
	cin>>t>>n;
	if(n==2||n==1||n==0)
	{
		v1=1;
	}
	else if(n==3)
	{
		v1=6;
	}
	else if(n==4)
	{
		v1=4;
	}
	else
	{
		v1=0;
	}
	ll ans=pow(t,v1);
	cout<<ans%10<<endl;
	
	
	return 0;
}
