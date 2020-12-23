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
	ll k,count=0;
	string s1;
	cin>>s1;
	cin>>k;
	for(ll i=0;i<s1.size();i++)
	{
		if(k==count) break;
		
		if(s1.at(i)!='9')
		{
			s1.at(i)='9';
			count++;
		}
	}
	
	cout<<s1<<endl;
	return 0;
}
