#include<bits/stdc++.h>
#define ll long long
#define st stack<ll>
#define v vector<ll>
//#define s set<ll>
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
	ll s,t;
	cin>>s>>t;
	ll a,b;
	cin>>a>>b;
	ll m,n,l,count_apple=0,count_orange=0;
	cin>>m>>n;
	while(m--)
	{
		cin>>l;
		if((a+l)>=s && (a+l)<=t)
		{
			count_apple++;
		}
	}
	while(n--)
	{
		cin>>l;
		if((b+l)>=s && (b+l)<=t)
		{
			count_orange++;
		}
		
	}
	cout<<count_apple<<endl;
	cout<<count_orange<<endl;
	
	return 0;
}
