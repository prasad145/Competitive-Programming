#include<bits/stdc++.h>
#define ll long long
#define st stack<ll>
#define v vector<ll>
#define s set<ll>
#define p pair<ll,ll>
#define mp map<string,string>
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
	mp mp1;
	ll t;
	cin>>t;
	string name,pnum;
	
	for(ll i=0;i<t;i++)
	{
		cin>>name;
		cin>>pnum;
		mp1[name]=pnum;
	}
	while(cin>>name)
	{
		if(mp1.find(name)!=mp1.end())
		{
			cout<<name<<"="<<mp1.find(name)->second<<endl;
		}	
		else
		{
			cout<<"Not found"<<endl;
		}
	}	
	return 0;
}
