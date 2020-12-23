#include<bits/stdc++.h>
#define ll long long
#define st stack<ll>
#define v vector<ll>
#define s set<ll>
#define p pair<ll,ll>
#define mp map<ll,string>
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
	mp ::iterator it;
	ll t,n,qq;
	string ss;
	cin>>t;
	while(t--)
	{
		cin>>n>>ss;
		mp1[n]=ss;
	}
	cin>>qq;
	while(qq--)
	{
		cin>>n;
		cout<<mp1.at(n)<<endl;
		
	}
	
	return 0;
}
