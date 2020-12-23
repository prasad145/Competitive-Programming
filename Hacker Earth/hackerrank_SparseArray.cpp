#include<bits/stdc++.h>
#define ll long long
#define st stack<ll>
#define v vector<ll>
#define s set<ll>
#define p pair<ll,ll>
#define mp map<string,ll>
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
	ll t,n;
	string ss;
	mp mp1;
	cin>>t;
	
	while(t--)
	{
		cin>>ss;
		mp1[ss]++;
		
		
	}
	cin>>n;
	while(n--)
	{
		cin>>ss;
		if(mp1.find(ss)!=mp1.end())
		{
			cout<<mp1.find(ss)->second<<endl;
		}
		else
		{
			cout<<0<<endl;
		}
	}
	
	return 0;
}
