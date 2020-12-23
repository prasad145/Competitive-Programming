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
	ll n,m,a,b,k,max1=0;
	cin>>n>>m;
	ll q1[n+1]={0};
	while(m--)
	{
		cin>>a>>b>>k;
		for(ll i=a;i<=b;i++)
		{
			q1[i]=q1[i]+k;
			max1=max(max1,q1[i]);
		}
	}
	
	cout<<max1<<endl;
	return 0;
}
