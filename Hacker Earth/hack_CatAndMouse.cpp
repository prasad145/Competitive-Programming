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
	ll t,a,b,c;
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>c;
		if(abs(a-c)==abs(b-c))
		{
			cout<<"Mouse C"<<endl;
		}
		else
		if(abs(a-c)>abs(b-c))
		{
			cout<<"Cat B"<<endl;
		}
		else
		     cout<<"Cat A"<<endl;
		
		
	}
	
	return 0;
}
